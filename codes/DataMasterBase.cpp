void DataMasterBase___ctor(DataMasterBase_o *this, int32_t kind, const MethodInfo *method)
{
  __int64 v5; // x1
  DataNameKind_c *v6; // x0
  struct System_String_o *Name; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_59703A9 & 1) == 0 )
  {
    sub_2213A60(&DataNameKind_TypeInfo);
    byte_59703A9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v6 = DataNameKind_TypeInfo;
  this->fields._MasterKind_k__BackingField = kind;
  if ( !*(&v6->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v6, v5);
  Name = DataNameKind__GetName(kind, 0);
  this->fields._MasterName_k__BackingField = Name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)Name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


int32_t DataMasterBase__GetRegisteredKind_object_(const MethodInfo_3856550 *method)
{
  long double v1; // q0
  const MethodInfo_3856550_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_WORD *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_224B908(v1);
  return **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184);
}


System_String_o *DataMasterBase__GetRegisteredName_object_(const MethodInfo_385658C *method)
{
  long double v1; // q0
  const MethodInfo_385658C_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_WORD *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_224B908(v1);
  return *(System_String_o **)(*(_QWORD *)(_1_DataMasterBase_Registration_TMaster + 184) + 8LL);
}


bool DataMasterBase__Modified(DataMasterBase_o *this, int32_t revision, const MethodInfo *method)
{
  return this->fields.revision != revision;
}


void DataMasterBase__RegisterKindAndName_object_(int32_t kind, System_String_o *name, const MethodInfo_38565C8 *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  const MethodInfo_38565C8_RGCTXs *rgctx_data; // x8
  __int64 _1_DataMasterBase_Registration_TMaster; // x0
  Il2CppClass *v14; // x0
  Il2CppClass *v15; // x0

  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_224B964();
    rgctx_data = method->rgctx_data;
  }
  _1_DataMasterBase_Registration_TMaster = (__int64)rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*(_WORD *)(_1_DataMasterBase_Registration_TMaster + 309) & 1) == 0 )
    _1_DataMasterBase_Registration_TMaster = sub_224B908(v8);
  **(_DWORD **)(_1_DataMasterBase_Registration_TMaster + 184) = kind;
  v14 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*((_WORD *)&v14->_2.bitflags2 + 1) & 1) == 0 )
    v14 = (Il2CppClass *)sub_224B908(v8);
  *((_QWORD *)v14->static_fields + 1) = name;
  v15 = method->rgctx_data->_1_DataMasterBase_Registration_TMaster_;
  if ( (*((_WORD *)&v15->_2.bitflags2 + 1) & 1) == 0 )
    v15 = (Il2CppClass *)sub_224B908(v8);
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)((char *)v15->static_fields + 8),
    (int32_t)name,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._MasterName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._MasterName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3B021AC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object____Il2CppFullySharedGenericType____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_3B021B4 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_2213CDC(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_3B021B4 *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c__DisplayClass23_0_object__object__int____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3B020F8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object__int____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_3B02100 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_2213CDC(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_3B02100 *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c__DisplayClass23_0_object__object__long____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3B02134 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object__long____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_3B0213C *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_2213CDC(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_3B0213C *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c__DisplayClass23_0_object__object__object____ctor(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3B02170 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DataMasterBase___c__DisplayClass23_0_object__object__object____RemoveEntity_b__0(
        DataMasterBase___c__DisplayClass23_0_TMaster__TEntity__PKType__o *this,
        Il2CppObject *item,
        const MethodInfo_3B02178 *method)
{
  System_String_o *v4; // x0

  if ( !item )
    sub_2213CDC(this, 0);
  v4 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *, const MethodInfo_3B02178 *))item->klass->vtable[4].methodPtr)(
                            item,
                            item->klass->vtable[4].method,
                            method);
  return System_String__op_Equality(v4, this->fields.targetPrimaryKey, 0);
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____cctor(const MethodInfo_3AFBCAC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x8
  __int64 v6; // x20
  __int16 v7; // w9
  __int64 v8; // x0
  void (__fastcall *v9)(__int64, _QWORD); // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = sub_2213CCC(v3);
  v5 = (__int64)method->klass;
  v6 = v4;
  v7 = *(_WORD *)(v5 + 309);
  if ( (v7 & 1) != 0 )
  {
    v8 = (__int64)method->klass;
  }
  else
  {
    v8 = sub_224B908();
    v5 = (__int64)method->klass;
    v7 = *(_WORD *)(v5 + 309);
  }
  v9 = **(void (__fastcall ***)(__int64, _QWORD))(*(_QWORD *)(v8 + 192) + 8LL);
  if ( (v7 & 1) == 0 )
    v5 = sub_224B908();
  v9(v6, *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL));
  v16 = (__int64)method->klass;
  if ( (*(_WORD *)(v16 + 309) & 1) == 0 )
    v16 = sub_224B908();
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
    v17 = sub_224B908();
  v18 = *(__int64 **)(v17 + 184);
  v19 = (__int64)method->klass;
  *v18 = v6;
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_224B908();
  v20 = *(_QWORD *)(*(_QWORD *)(v19 + 192) + 16LL);
  if ( (*(_WORD *)(v20 + 309) & 1) == 0 )
    v20 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v20 + 184), v6, v10, v11, v12, v13, v14, v15);
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3AFBDB8 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBDC0 *method)
{
  ;
}


void DataMasterBase___c_object__object____Il2CppFullySharedGenericType____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBDC4 *method)
{
  ;
}


void DataMasterBase___c_object__object__int____cctor(const MethodInfo_3AFB9F4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void DataMasterBase___c_object__object__int____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3AFBACC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBAD4 *method)
{
  ;
}


void DataMasterBase___c_object__object__int____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBAD8 *method)
{
  ;
}


void DataMasterBase___c_object__object__long____cctor(const MethodInfo_3AFBADC *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void DataMasterBase___c_object__object__long____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3AFBBB4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBBBC *method)
{
  ;
}


void DataMasterBase___c_object__object__long____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBBC0 *method)
{
  ;
}


void DataMasterBase___c_object__object__object____cctor(const MethodInfo_3AFBBC4 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x0
  __int64 v12; // x0
  Il2CppObject **v13; // x8
  __int64 v14; // x0
  __int64 v15; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_224B908();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_224B908();
  v4 = (Il2CppObject *)sub_2213CCC(v3);
  if ( (*((_WORD *)&method->klass->_2.bitflags2 + 1) & 1) == 0 )
    sub_224B908();
  System_Object___ctor(v4, 0);
  v11 = (__int64)method->klass;
  if ( (*(_WORD *)(v11 + 309) & 1) == 0 )
    v11 = sub_224B908();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908();
  v13 = *(Il2CppObject ***)(v12 + 184);
  v14 = (__int64)method->klass;
  *v13 = v4;
  if ( (*(_WORD *)(v14 + 309) & 1) == 0 )
    v14 = sub_224B908();
  v15 = *(_QWORD *)(*(_QWORD *)(v14 + 192) + 16LL);
  if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
    v15 = sub_224B908();
  sub_2213A04(*(MissionNaviTransitionBoardItem_o **)(v15 + 184), (int32_t)v4, v5, v6, v7, v8, v9, v10);
}


void DataMasterBase___c_object__object__object____ctor(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        const MethodInfo_3AFBC9C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_0(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBCA4 *method)
{
  ;
}


void DataMasterBase___c_object__object__object____abstractGetListForThread_b__14_1(
        DataMasterBase___c_TMaster__TEntity__PKType__o *this,
        Il2CppObject *_,
        const MethodInfo_3AFBCA8 *method)
{
  ;
}