הנה קובץ ה-**README.md** המעודכן, המותאם במיוחד לפרויקט **Laravel**. הוא לוקח בחשבון את מבנה התיקיות הסטנדרטי של Laravel, שימוש ב-Composer ופקודות Artisan.

---

## 📚 ספרייה מקוונת (Online Library)

פלטפורמה מודרנית לספרייה דיגיטלית, הבנויה על בסיס PHP-Framework בשם **Laravel**. הפרויקט מספק ממשק נוח לקריאה, חיפוש וניהול אוסף של ספרים אלקטרוניים.

**[גרסת דמו](https://www.google.com/search?q=%23)** | **[דיווח על תקלה](https://www.google.com/search?q=https://github.com/ngothehieu/your-repo/issues)**

---

### ✨ תכונות עיקריות

* **קטלוג ספרים:** ניווט נוח לפי קטגוריות וז'אנרים.
* **חיפוש טקסט מלא:** חיפוש לפי סופר, כותרת או תגיות (Laravel Scout).
* **מערכת תפקידים:** הפרדת הרשאות גישה (אורח, קורא, ספרן, מנהל מערכת).
* **ניהול קבצים:** תמיכה באחסון ספרים מקומית או בענן (S3).
* **API:** נקודות קצה (Endpoints) מוכנות לאינטגרציה עם אפליקציות מובייל.

### 🛠️ סטאק טכנולוגי

| רכיב | טכנולוגיות |
| --- | --- |
| **Backend** | PHP 8.2+ / Laravel 10/11 |
| **Frontend** | Blade / Livewire או Vue.js (Inertia.js) |
| **בסיס נתונים** | MySQL / PostgreSQL / SQLite |
| **Caching** | Redis / Memcached |
| **תורים (Queues)** | Laravel Queues (Database/Redis) |

---

### 🚀 דרישות והתקנה

ודאו שמותקנים בשרת שלכם PHP 8.2+ ו-Composer.

#### 1. שיבוט (Cloning) ותלויות

```bash
git clone https://github.com/ngothehieu/online-library.git
cd online-library
composer install
npm install && npm run build

```

#### 2. הגדרת הסביבה

העתיקו את קובץ הגדרות הדוגמה וצרו מפתח אפליקציה:

```bash
cp .env.example .env
php artisan key:generate

```

#### 3. בסיס נתונים ומיגרציות

הגדירו את החיבור לבסיס הנתונים בקובץ `.env` והריצו מיגרציות עם הזנת נתונים ראשונית (Seeding):

```bash
php artisan migrate --seed

```

#### 4. הגדרת אחסון (Storage)

צרו קישור סימבולי (Symbolic Link) לגישה לקובצי הספרים:

```bash
php artisan storage:link

```

#### 5. הרצה

```bash
php artisan serve

```

---

### 📂 ארכיטקטורת הפרויקט

* `app/Models` — מודלים של נתונים (Book, Author, Category).
* `app/Http/Controllers` — לוגיקה של טיפול בבקשות (Requests).
* `resources/views` — תבניות ממשק המשתמש (Blade).
* `database/migrations` — מבנה בסיס הנתונים.

---

### 🤝 השתתפות בפיתוח

אם ברצונכם לתרום לפרויקט:

1. בצעו Fork למאגר (Repository).
2. צרו ענף (Branch) משלכם (`git checkout -b feature/NewFeature`).
3. בצעו Commit לשינויים (`git commit -m 'Add new functionality'`).
4. דחפו את הענף ל-GitHub (`git push origin feature/NewFeature`).
5. פתחו Pull Request.

---

### 📄 רישיון

פרויקט זה הוא תוכנה בקוד פתוח המופצת תחת רישיון [MIT](https://www.google.com/search?q=https://opensource.org/licenses/MIT).

### 📧 יצירת קשר

**נגו טה הִיוּ** — [פרופיל GitHub שלך](https://www.google.com/search?q=https://github.com/ngothehieu)

---

האם תרצה שאבצע התאמות נוספות בתיאור הטכנולוגי או בהוראות ההתקנה?
