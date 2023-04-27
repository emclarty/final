// Lean compiler output
// Module: AdventOfCode
// Imports: Init
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_elves___closed__4;
LEAN_EXPORT lean_object* l_day1__question1(lean_object*);
static lean_object* l_day3__inputpath___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_totalCalList___spec__1(lean_object*, lean_object*);
lean_object* l_String_toNat_x21(lean_object*);
LEAN_EXPORT lean_object* l_answer(lean_object*);
LEAN_EXPORT lean_object* l_elves(lean_object*);
static lean_object* l_day2__inputpath___closed__1;
LEAN_EXPORT lean_object* l_List_foldl___at_answer___spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_day1__question2(lean_object*);
LEAN_EXPORT lean_object* l_lineBreak;
static lean_object* l_lineBreak___closed__2;
lean_object* lean_sorry(uint8_t);
static lean_object* l_lineBreak___closed__1;
static lean_object* l_elves___closed__1;
static lean_object* l_elves___closed__2;
LEAN_EXPORT lean_object* l_List_foldl___at_addUp___spec__1___boxed(lean_object*, lean_object*);
static lean_object* l_elves___closed__3;
LEAN_EXPORT lean_object* l_totalCalList(lean_object*);
LEAN_EXPORT lean_object* l_addUp(lean_object*);
lean_object* l_List_foldl___at_String_join___spec__1(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_totalCalList___spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_day2__inputpath;
LEAN_EXPORT lean_object* l_test;
lean_object* l_List_reverse___rarg(lean_object*);
LEAN_EXPORT lean_object* l_calories(lean_object*);
static lean_object* l_test___closed__1;
LEAN_EXPORT lean_object* l_day3__inputpath;
static lean_object* l_lineBreak___closed__3;
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at_addUp___spec__1(lean_object*, lean_object*);
extern uint8_t l_System_Platform_isWindows;
LEAN_EXPORT lean_object* l_day1__inputpath;
LEAN_EXPORT lean_object* l_List_foldl___at_answer___spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_calories___spec__1(lean_object*, lean_object*);
lean_object* l_String_splitOn(lean_object*, lean_object*);
static lean_object* l_day1__inputpath___closed__1;
static lean_object* _init_l_test___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("5474\n4920\n5381\n8650\n11617\n7193\n8161\n\n10747\n5855\n13827\n6294\n13437\n8125", 69);
return x_1;
}
}
static lean_object* _init_l_test() {
_start:
{
lean_object* x_1; 
x_1 = l_test___closed__1;
return x_1;
}
}
static lean_object* _init_l_lineBreak___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n", 1);
return x_1;
}
}
static lean_object* _init_l_lineBreak___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("\n0d\n", 4);
return x_1;
}
}
static lean_object* _init_l_lineBreak___closed__3() {
_start:
{
uint8_t x_1; 
x_1 = l_System_Platform_isWindows;
if (x_1 == 0)
{
lean_object* x_2; 
x_2 = l_lineBreak___closed__1;
return x_2;
}
else
{
lean_object* x_3; 
x_3 = l_lineBreak___closed__2;
return x_3;
}
}
}
static lean_object* _init_l_lineBreak() {
_start:
{
lean_object* x_1; 
x_1 = l_lineBreak___closed__3;
return x_1;
}
}
static lean_object* _init_l_day1__inputpath___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("/home/shash/School/2022—2023/SCHC411/AdventOfCode/input/day1.txt", 66);
return x_1;
}
}
static lean_object* _init_l_day1__inputpath() {
_start:
{
lean_object* x_1; 
x_1 = l_day1__inputpath___closed__1;
return x_1;
}
}
static lean_object* _init_l_day2__inputpath___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("/home/shash/School/2022—2023/SCHC411/AdventOfCode/input/day2.txt", 66);
return x_1;
}
}
static lean_object* _init_l_day2__inputpath() {
_start:
{
lean_object* x_1; 
x_1 = l_day2__inputpath___closed__1;
return x_1;
}
}
static lean_object* _init_l_day3__inputpath___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("/home/shash/School/2022—2023/SCHC411/AdventOfCode/input/day3.txt", 66);
return x_1;
}
}
static lean_object* _init_l_day3__inputpath() {
_start:
{
lean_object* x_1; 
x_1 = l_day3__inputpath___closed__1;
return x_1;
}
}
static lean_object* _init_l_elves___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_lineBreak;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
static lean_object* _init_l_elves___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_lineBreak;
x_2 = l_elves___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
static lean_object* _init_l_elves___closed__3() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_from_bytes("", 0);
return x_1;
}
}
static lean_object* _init_l_elves___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_elves___closed__3;
x_2 = l_elves___closed__2;
x_3 = l_List_foldl___at_String_join___spec__1(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_elves(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_elves___closed__4;
x_3 = l_String_splitOn(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_calories___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_String_toNat_x21(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_String_toNat_x21(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_calories(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_lineBreak;
x_3 = l_String_splitOn(x_1, x_2);
x_4 = lean_box(0);
x_5 = l_List_mapTR_loop___at_calories___spec__1(x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_addUp___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_nat_add(x_1, x_3);
lean_dec(x_1);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_addUp(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = l_List_foldl___at_addUp___spec__1(x_2, x_1);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_addUp___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_addUp___spec__1(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_totalCalList___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = l_calories(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_7);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_1);
x_11 = l_calories(x_9);
x_12 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_2);
x_1 = x_10;
x_2 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at_totalCalList___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
x_3 = l_List_reverse___rarg(x_2);
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_1);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_unsigned_to_nat(0u);
x_8 = l_List_foldl___at_addUp___spec__1(x_7, x_5);
lean_dec(x_5);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_8);
{
lean_object* _tmp_0 = x_6;
lean_object* _tmp_1 = x_1;
x_1 = _tmp_0;
x_2 = _tmp_1;
}
goto _start;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_1);
x_12 = lean_unsigned_to_nat(0u);
x_13 = l_List_foldl___at_addUp___spec__1(x_12, x_10);
lean_dec(x_10);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_13);
lean_ctor_set(x_14, 1, x_2);
x_1 = x_11;
x_2 = x_14;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_totalCalList(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_2 = l_elves(x_1);
x_3 = lean_box(0);
x_4 = l_List_mapTR_loop___at_totalCalList___spec__1(x_2, x_3);
x_5 = l_List_mapTR_loop___at_totalCalList___spec__2(x_4, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_answer___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_3 = lean_ctor_get(x_2, 0);
x_4 = lean_ctor_get(x_2, 1);
x_5 = lean_nat_dec_le(x_1, x_3);
if (x_5 == 0)
{
x_2 = x_4;
goto _start;
}
else
{
x_1 = x_3;
x_2 = x_4;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_answer(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = l_totalCalList(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_List_foldl___at_answer___spec__1(x_3, x_2);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at_answer___spec__1___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_List_foldl___at_answer___spec__1(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_day1__question1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_day1__inputpath;
x_3 = l_IO_FS_readFile(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = l_answer(x_5);
lean_ctor_set(x_3, 0, x_6);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_3, 0);
x_8 = lean_ctor_get(x_3, 1);
lean_inc(x_8);
lean_inc(x_7);
lean_dec(x_3);
x_9 = l_answer(x_7);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_8);
return x_10;
}
}
else
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_3);
if (x_11 == 0)
{
return x_3;
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_12 = lean_ctor_get(x_3, 0);
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_inc(x_12);
lean_dec(x_3);
x_14 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
}
}
}
LEAN_EXPORT lean_object* l_day1__question2(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_day1__inputpath;
x_3 = l_IO_FS_readFile(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; uint8_t x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_3, 1);
lean_inc(x_4);
lean_dec(x_3);
x_5 = 0;
x_6 = lean_sorry(x_5);
x_7 = lean_apply_1(x_6, x_4);
return x_7;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
return x_3;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_3, 0);
x_10 = lean_ctor_get(x_3, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_3);
x_11 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_AdventOfCode(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_test___closed__1 = _init_l_test___closed__1();
lean_mark_persistent(l_test___closed__1);
l_test = _init_l_test();
lean_mark_persistent(l_test);
l_lineBreak___closed__1 = _init_l_lineBreak___closed__1();
lean_mark_persistent(l_lineBreak___closed__1);
l_lineBreak___closed__2 = _init_l_lineBreak___closed__2();
lean_mark_persistent(l_lineBreak___closed__2);
l_lineBreak___closed__3 = _init_l_lineBreak___closed__3();
lean_mark_persistent(l_lineBreak___closed__3);
l_lineBreak = _init_l_lineBreak();
lean_mark_persistent(l_lineBreak);
l_day1__inputpath___closed__1 = _init_l_day1__inputpath___closed__1();
lean_mark_persistent(l_day1__inputpath___closed__1);
l_day1__inputpath = _init_l_day1__inputpath();
lean_mark_persistent(l_day1__inputpath);
l_day2__inputpath___closed__1 = _init_l_day2__inputpath___closed__1();
lean_mark_persistent(l_day2__inputpath___closed__1);
l_day2__inputpath = _init_l_day2__inputpath();
lean_mark_persistent(l_day2__inputpath);
l_day3__inputpath___closed__1 = _init_l_day3__inputpath___closed__1();
lean_mark_persistent(l_day3__inputpath___closed__1);
l_day3__inputpath = _init_l_day3__inputpath();
lean_mark_persistent(l_day3__inputpath);
l_elves___closed__1 = _init_l_elves___closed__1();
lean_mark_persistent(l_elves___closed__1);
l_elves___closed__2 = _init_l_elves___closed__2();
lean_mark_persistent(l_elves___closed__2);
l_elves___closed__3 = _init_l_elves___closed__3();
lean_mark_persistent(l_elves___closed__3);
l_elves___closed__4 = _init_l_elves___closed__4();
lean_mark_persistent(l_elves___closed__4);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
