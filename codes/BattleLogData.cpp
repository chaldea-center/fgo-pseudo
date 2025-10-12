void BattleLogData___ctor(BattleLogData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3A4CF & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A4CF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v3, v4, v5);
  v6 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tag, v6, v7, v8);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tag, v9, v10, v11);
}


void BattleLogData___ctor_46001088(BattleLogData_o *this, System_String_o *intag, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3A4D0 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A4D0 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
  v8 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tag, v8, v9, v10);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.tag = intag;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tag, (int32_t)intag, v11, v12);
}


void BattleLogData___ctor_46001300(
        BattleLogData_o *this,
        System_String_o *intag,
        int32_t inmax,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3A4D1 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3A4D1 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.list = (struct System_Collections_Generic_List_string__o *)v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v7, v8, v9);
  v10 = StringLiteral_1/*""*/;
  this->fields.tag = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tag, v10, v11, v12);
  this->fields.max = 10;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.tag = intag;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.tag, (int32_t)intag, v13, v14);
  this->fields.max = inmax;
}


void BattleLogData__addStr(BattleLogData_o *this, System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *list; // x20
  Il2CppObject *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppObject *v12; // x1
  Il2CppClass **v13; // x0

  if ( (byte_4C3A4D2 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C3A4D2 = 1;
  }
  list = (System_Collections_Generic_List_object__o *)this->fields.list;
  v6 = (Il2CppObject *)System_String__Concat_63518544(this->fields.tag, str, 0);
  if ( !list )
    goto LABEL_12;
  items = list->fields._items;
  v10 = Method_System_Collections_Generic_List_string__Add__;
  ++list->fields._version;
  if ( !items )
    goto LABEL_12;
  size = list->fields._size;
  v12 = v6;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      list,
      v6,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    list->fields._size = size + 1;
    v13[4] = (Il2CppClass *)v12;
    sub_1C32BC4((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
  }
  v6 = (Il2CppObject *)this->fields.list;
  if ( !v6 )
LABEL_12:
    sub_1C32E7C(v6);
  if ( this->fields.max < SLODWORD(v6[1].monitor) )
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)v6,
      0,
      (const MethodInfo_3799F90 *)Method_System_Collections_Generic_List_string__RemoveAt__);
}


System_String_array *BattleLogData__getStringList(BattleLogData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *list; // x0

  if ( (byte_4C3A4D3 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    byte_4C3A4D3 = 1;
  }
  list = this->fields.list;
  if ( !list )
    sub_1C32E7C(0);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  (System_Collections_Generic_List_object__o *)list,
                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
}