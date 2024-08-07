void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A010FC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v3);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_4A010FC = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tag, v8, v9, v10);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tag, v11, v12, v13);
}


void __fastcall BattleLogData___ctor_42442276(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A010FD & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_4A010FD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tag, v10, v11, v12);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tag, (int32_t)intag, v13, v14);
}


void __fastcall BattleLogData___ctor_42442488(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A010FE & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, intag);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_1B64A00(&StringLiteral_1/*""*/, v8);
    byte_4A010FE = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v9, v10, v11);
  v12 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tag, v12, v13, v14);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.tag, (int32_t)intag, v15, v16);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *list; // x20
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppObject *v15; // x1
  Il2CppClass **v16; // x0

  if ( (byte_4A010FF & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, str);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__RemoveAt__, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    byte_4A010FF = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  v8 = (Il2CppObject *)System_String__Concat_61385136(this->fields.tag, str, 0LL);
  if ( !list )
    goto LABEL_12;
  items = list->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_12;
  size = list->fields._size;
  v15 = v8;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      v8,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v16[4] = (Il2CppClass *)v15;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v16 + 4), (int32_t)v15, v10, v11);
  }
  v8 = (Il2CppObject *)this->fields.list;
  if ( !v8 )
LABEL_12:
    sub_1B64C5C(v8, v9);
  if ( this->fields.max < SLODWORD(v8[1].monitor) )
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)v8,
      0,
      (const MethodInfo_34B183C *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_4A01100 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string__ToArray__, method);
    byte_4A01100 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_1B64C5C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)list,
                                  (const MethodInfo_34B1BC0 *)Method_System_Collections_Generic_List_string__ToArray__);
}