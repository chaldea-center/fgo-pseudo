void DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  struct System_String_o *Name; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7

  if ( (byte_4CEE22B & 1) == 0 )
  {
    sub_1C7BAE8(&DataNameKind_TypeInfo);
    byte_4CEE22B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._MasterKind_k__BackingField = kind;
  if ( !DataNameKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataNameKind_TypeInfo);
  Name = DataNameKind__GetName(kind, 0);
  this->fields._MasterName_k__BackingField = Name;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)Name,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


int32_t DataMasterBase__GetRegisteredKind_object_(const MethodInfo_31705F0 *method)
{
  long double v1; // q0
  const MethodInfo_31705F0_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C51BD8();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C51B7C(v1);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *DataMasterBase__GetRegisteredName_object_(const MethodInfo_3170628 *method)
{
  long double v1; // q0
  const MethodInfo_3170628_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C51BD8();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C51B7C(v1);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


bool DataMasterBase__Modified(DataMasterBase_o *this, int32_t revision, const MethodInfo *method)
{
  return this->fields.revision != revision;
}


void DataMasterBase__RegisterKindAndName_object_(int32_t kind, System_String_o *name, const MethodInfo_3170660 *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double v8; // q0
  const MethodInfo_3170660_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C51BD8();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_BYTE *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_1C51B7C(v8);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v14 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(&v14->_2.bitflags2 + 2) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C51B7C(v8);
  *((_QWORD *)v14->static_fields + 1) = name;
  v15 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(&v15->_2.bitflags2 + 2) & 1) == 0 )
    v15 = (Il2CppClass *)sub_1C51B7C(v8);
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)((char *)v15->static_fields + 8),
    (int32_t)name,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


int32_t DataMasterBase__Revision(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields.revision;
}


int32_t DataMasterBase__get_MasterKind(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterKind_k__BackingField;
}


System_String_o *DataMasterBase__get_MasterName(DataMasterBase_o *this, const MethodInfo *method)
{
  return this->fields._MasterName_k__BackingField;
}


bool DataMasterBase__preProcess(DataMasterBase_o *this, const MethodInfo *method)
{
  return 0;
}


void DataMasterBase__set_MasterKind(DataMasterBase_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._MasterKind_k__BackingField = value;
}


void DataMasterBase__set_MasterName(DataMasterBase_o *this, System_String_o *value, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._MasterName_k__BackingField = value;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333FA28 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_333FA30 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C7BD40(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_333FA30 *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c__DisplayClass23_0_object__object__int____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333F974 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object__int____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_333F97C *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C7BD40(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_333F97C *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c__DisplayClass23_0_object__object__long____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333F9B0 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object__long____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_333F9B8 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C7BD40(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_333F9B8 *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333F9EC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object__object____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_333F9F4 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_1C7BD40(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_333F9F4 *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____cctor(const MethodInfo_333B32C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  v4 = sub_1C7BD34(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_1C51B7C();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_1C51B7C();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v16 = (__int64)method->klass;
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C51B7C();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C51B7C();
  **(_QWORD **)(v17 + 184) = v6;
  v18 = (__int64)method->klass;
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C51B7C();
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C51B7C();
  sub_1C7BA8C(*(GrandQuestFolderBoardItem_o **)(v19 + 184), v6, v10, v11, v12, v13, v14, v15);
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333B420 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B428 *method)
{
  ;
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B42C *method)
{
  ;
}


void DataMasterBase___c_object__object__int____cctor(const MethodInfo_333B0C8 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  v4 = (Il2CppObject *)sub_1C7BD34(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C51B7C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C51B7C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C51B7C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C51B7C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C51B7C();
  sub_1C7BA8C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void DataMasterBase___c_object__object__int____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333B184 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B18C *method)
{
  ;
}


void DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B190 *method)
{
  ;
}


void DataMasterBase___c_object__object__long____cctor(const MethodInfo_333B194 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  v4 = (Il2CppObject *)sub_1C7BD34(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C51B7C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C51B7C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C51B7C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C51B7C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C51B7C();
  sub_1C7BA8C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void DataMasterBase___c_object__object__long____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333B250 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B258 *method)
{
  ;
}


void DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B25C *method)
{
  ;
}


void DataMasterBase___c_object__object__object____cctor(const MethodInfo_333B260 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  v4 = (Il2CppObject *)sub_1C7BD34(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C51B7C();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C51B7C();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C51B7C();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C51B7C();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C51B7C();
  sub_1C7BA8C(*(GrandQuestFolderBoardItem_o **)(v14 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void DataMasterBase___c_object__object__object____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_333B31C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B324 *method)
{
  ;
}


void DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_333B328 *method)
{
  ;
}