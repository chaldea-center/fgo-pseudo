void __fastcall BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5D783 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D783 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tag, v6, v7, v8);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tag, v9, v10, v11);
}


void __fastcall BattleLogData___ctor_42785228(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5D784 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D784 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tag, v8, v9, v10);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tag, (int32_t)intag, v11, v12);
}


void __fastcall BattleLogData___ctor_42785440(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5D785 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D785 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tag, v10, v11, v12);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.tag = intag;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tag, (int32_t)intag, v13, v14);
  this->fields.max = inmax;
}


void __fastcall BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *list; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppObject *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4A5D786 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4A5D786 = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  v6 = (Il2CppObject *)System_String__Concat_61707032(this->fields.tag, str, 0LL);
  if ( !list )
    goto LABEL_12;
  items = list->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_12;
  size = list->fields._size;
  v13 = v6;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      v6,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
  }
  v6 = (Il2CppObject *)this->fields.list;
  if ( !v6 )
LABEL_12:
    sub_1B8880C(v6, v7);
  if ( this->fields.max < SLODWORD(v6[1].monitor) )
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)v6,
      0,
      (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *__fastcall BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_4A5D787 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_4A5D787 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_1B8880C(0LL, method);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)list,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}