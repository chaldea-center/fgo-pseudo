void __fastcall SyncWidget___ctor(SyncWidget_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  struct SyncWidget_SyncParamType_array **v10; // x8
  struct SyncWidget_SyncParamType_array *v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  _QWORD *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  struct System_Action_array **v19; // x8
  struct System_Action_array *v20; // x1

  if ( (byte_49FF986 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_Action___, method);
    sub_1B64870(&Method_System_Array_Empty_SyncWidget_SyncParamType___, v5);
    byte_49FF986 = 1;
  }
  v6 = Method_System_Array_Empty_SyncWidget_SyncParamType___;
  v7 = *((_QWORD *)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 7);
  if ( !v7 )
  {
    sub_1BB67A8(Method_System_Array_Empty_SyncWidget_SyncParamType___);
    v7 = v6[7];
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BB674C(v8);
  if ( !*(_DWORD *)(v8 + 224) )
    j_il2cpp_runtime_class_init_0(v8);
  v9 = *(_QWORD *)(v6[7] + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB674C(v9);
  v10 = *(struct SyncWidget_SyncParamType_array ***)(v9 + 184);
  v11 = *v10;
  this->fields.syncParamTypeArray = *v10;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.syncParamTypeArray, (int32_t)v11, v2, v3);
  if ( !byte_49F90FA )
  {
    sub_1B64870(&UnityEngine_Vector2_TypeInfo, v12);
    byte_49F90FA = 1;
  }
  this->fields.blankSize = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v15 = Method_System_Array_Empty_Action___;
  v16 = *((_QWORD *)Method_System_Array_Empty_Action___ + 7);
  if ( !v16 )
  {
    sub_1BB67A8(Method_System_Array_Empty_Action___);
    v16 = v15[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1BB674C(v17);
  if ( !*(_DWORD *)(v17 + 224) )
    j_il2cpp_runtime_class_init_0(v17);
  v18 = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1BB674C(v18);
  v19 = *(struct System_Action_array ***)(v18 + 184);
  v20 = *v19;
  this->fields.syncActionArray = *v19;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.syncActionArray, (int32_t)v20, v13, v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SyncWidget__Awake(SyncWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_IEnumerable_TSource__o *syncParamTypeArray; // x20
  System_Func_T__TResult__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  System_Object_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FF983 & 1) == 0 )
  {
    sub_1B64870(&Method_UnityEngine_Component_GetComponent_UIWidget___, method);
    sub_1B64870(&Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___, v3);
    sub_1B64870(&Method_System_Linq_Enumerable_ToArray_Action___, v4);
    sub_1B64870(&System_Func_SyncWidget_SyncParamType__Action__TypeInfo, v5);
    byte_49FF983 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E3216C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.self = (struct UIWidget_o *)Component_object;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.self, (int32_t)Component_object, v7, v8);
  syncParamTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.syncParamTypeArray;
  v10 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
  System_Func_Int32Enum__object____ctor(
    v10,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._5_InitSync.methodPtr,
    0LL);
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__object_(
                                                               syncParamTypeArray,
                                                               (System_Func_TSource__TResult__o *)v10,
                                                               (const MethodInfo_2E69E78 *)Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
  v12 = System_Linq_Enumerable__ToArray_object_(
          v11,
          (const MethodInfo_2E736A0 *)Method_System_Linq_Enumerable_ToArray_Action___);
  this->fields.syncActionArray = (struct System_Action_array *)v12;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.syncActionArray, (int32_t)v12, v13, v14);
  ((void (__fastcall *)(SyncWidget_o *, Il2CppMethodPointer))this->klass->vtable._5_InitSync.method)(
    this,
    this->klass->vtable._6_DisabledSync.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
System_Action_o *__fastcall SyncWidget__ConvertTypeToAction(SyncWidget_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Action_o *v11; // x0
  __int64 *v12; // x8
  SyncWidget___c_c *v13; // x0
  System_Action_o *_9__9_3; // x19
  Il2CppObject *v15; // x20
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_o *result; // x0
  System_Action_o *v20; // x20

  if ( (byte_49FF985 & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_1B64870(&Method_SyncWidget_SyncColorAlpha__, v5);
    sub_1B64870(&Method_SyncWidget__ConvertTypeToAction_b__9_0__, v6);
    sub_1B64870(&Method_SyncWidget__ConvertTypeToAction_b__9_1__, v7);
    sub_1B64870(&Method_SyncWidget__ConvertTypeToAction_b__9_2__, v8);
    sub_1B64870(&Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, v9);
    sub_1B64870(&SyncWidget___c_TypeInfo, v10);
    byte_49FF985 = 1;
  }
  switch ( type )
  {
    case 0:
      v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v12 = &Method_SyncWidget__ConvertTypeToAction_b__9_0__;
      goto LABEL_15;
    case 1:
      v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v12 = &Method_SyncWidget__ConvertTypeToAction_b__9_1__;
      goto LABEL_15;
    case 2:
      v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v12 = &Method_SyncWidget__ConvertTypeToAction_b__9_2__;
      goto LABEL_15;
    case 3:
      v11 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
      v12 = &Method_SyncWidget_SyncColorAlpha__;
LABEL_15:
      v20 = v11;
      System_Action___ctor(v11, (Il2CppObject *)this, *v12, 0LL);
      result = v20;
      break;
    default:
      v13 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v13 = SyncWidget___c_TypeInfo;
      }
      _9__9_3 = v13->static_fields->__9__9_3;
      if ( !_9__9_3 )
      {
        if ( !v13->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v13);
          v13 = SyncWidget___c_TypeInfo;
        }
        v15 = (Il2CppObject *)v13->static_fields->__9;
        _9__9_3 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(_9__9_3, v15, Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, 0LL);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__9_3 = _9__9_3;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__9_3, (int32_t)_9__9_3, v17, v18);
      }
      result = _9__9_3;
      break;
  }
  return result;
}


bool __fastcall SyncWidget__DisabledSync(SyncWidget_o *this, const MethodInfo *method)
{
  return 0;
}


void __fastcall SyncWidget__InitSync(SyncWidget_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void __fastcall SyncWidget__LateUpdate(SyncWidget_o *this, const MethodInfo *method)
{
  SyncWidget__Sync(this, method);
}


void __fastcall SyncWidget__Sync(SyncWidget_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Object_o *self; // x20
  UnityEngine_Object_o *syncFrom; // x20
  System_Collections_Generic_IEnumerable_T__o *syncActionArray; // x19
  SyncWidget___c_c *v10; // x0
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v12; // x21
  struct SyncWidget___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FF984 & 1) == 0 )
  {
    sub_1B64870(&System_Action_Action__TypeInfo, method);
    sub_1B64870(&Method_BasicHelper_ForEach_Action___, v3);
    sub_1B64870(&UnityEngine_Object_TypeInfo, v4);
    sub_1B64870(&Method_SyncWidget___c__Sync_b__8_0__, v5);
    sub_1B64870(&SyncWidget___c_TypeInfo, v6);
    byte_49FF984 = 1;
  }
  self = (UnityEngine_Object_o *)this->fields.self;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(self, 0LL, 0LL) )
  {
    syncFrom = (UnityEngine_Object_o *)this->fields.syncFrom;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(syncFrom, 0LL, 0LL)
      && (((__int64 (__fastcall *)(SyncWidget_o *, void *))this->klass->vtable._6_DisabledSync.method)(
            this,
            this->klass[1]._1.image) & 1) == 0 )
    {
      syncActionArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.syncActionArray;
      v10 = SyncWidget___c_TypeInfo;
      if ( !SyncWidget___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo);
        v10 = SyncWidget___c_TypeInfo;
      }
      _9__8_0 = (System_Action_object__o *)v10->static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !v10->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v10);
          v10 = SyncWidget___c_TypeInfo;
        }
        v12 = (Il2CppObject *)v10->static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_1B64ABC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(_9__8_0, v12, Method_SyncWidget___c__Sync_b__8_0__, 0LL);
        static_fields = SyncWidget___c_TypeInfo->static_fields;
        static_fields->__9__8_0 = (struct System_Action_Action__o *)_9__8_0;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v14, v15);
      }
      BasicHelper__ForEach_object_(
        syncActionArray,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_2E28B3C *)Method_BasicHelper_ForEach_Action___);
    }
  }
}


void __fastcall SyncWidget__SyncColorAlpha(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *self; // x9
  struct UIWidget_o *syncFrom; // x8
  SyncWidget_o *v4; // x19
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v9; // s12
  float v10; // s1
  float v11; // s2
  float v12; // s0
  float Epsilon; // s3
  struct UIWidget_o *v14; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  self = this->fields.self;
  if ( !self )
    goto LABEL_14;
  syncFrom = this->fields.syncFrom;
  v4 = this;
  if ( !syncFrom )
    goto LABEL_14;
  r = self->fields.mColor.fields.r;
  g = self->fields.mColor.fields.g;
  b = self->fields.mColor.fields.b;
  a = self->fields.mColor.fields.a;
  v9 = syncFrom->fields.mColor.fields.a;
  if ( !byte_49F9205 )
  {
    this = (SyncWidget_o *)sub_1B64870(&UnityEngine_Mathf_TypeInfo, method);
    byte_49F9205 = 1;
  }
  v10 = fabsf(a);
  v11 = fabsf(v9);
  if ( v10 <= v11 )
    v10 = v11;
  v12 = v10 * 0.000001;
  Epsilon = UnityEngine_Mathf_TypeInfo->static_fields->Epsilon;
  if ( (float)(v10 * 0.000001) <= (float)(Epsilon * 8.0) )
    v12 = Epsilon * 8.0;
  if ( vabds_f32(v9, a) >= v12 )
  {
    v14 = v4->fields.syncFrom;
    if ( v14 )
    {
      this = (SyncWidget_o *)v4->fields.self;
      if ( this )
      {
        v15.fields.a = v14->fields.mColor.fields.a;
        v15.fields.r = r;
        v15.fields.g = g;
        v15.fields.b = b;
        UIWidget__set_color((UIWidget_o *)this, v15, 0LL);
        return;
      }
    }
LABEL_14:
    sub_1B64ACC(this, method);
  }
}


void __fastcall SyncWidget___ConvertTypeToAction_b__9_0(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  int32_t mWidth; // w9
  float v5; // s0
  int v6; // w8

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0LL) )
    sub_1B64ACC(this, method);
  mWidth = syncFrom->fields.mWidth;
  v5 = v3->fields.blankSize.fields.x + v3->fields.blankSize.fields.x;
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  UIWidget__set_width((UIWidget_o *)this, v6 + mWidth, 0LL);
}


void __fastcall SyncWidget___ConvertTypeToAction_b__9_1(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  int32_t mHeight; // w9
  float v5; // s0
  int v6; // w8

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0LL) )
    sub_1B64ACC(this, method);
  mHeight = syncFrom->fields.mHeight;
  v5 = v3->fields.blankSize.fields.y + v3->fields.blankSize.fields.y;
  v6 = (int)v5;
  if ( v5 == INFINITY )
    v6 = 0x80000000;
  UIWidget__set_height((UIWidget_o *)this, v6 + mHeight, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SyncWidget___ConvertTypeToAction_b__9_2(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *self; // x0
  UnityEngine_Component_o *syncFrom; // x8
  UnityEngine_Transform_o *v5; // x19
  int v6; // s0

  self = (UnityEngine_Component_o *)this->fields.self;
  if ( !self
    || (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(self, 0LL),
        (syncFrom = (UnityEngine_Component_o *)this->fields.syncFrom) == 0LL)
    || (v5 = (UnityEngine_Transform_o *)self,
        (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(syncFrom, 0LL)) == 0LL)
    || (*(UnityEngine_Vector3_o *)&v6 = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)self, 0LL), !v5) )
  {
    sub_1B64ACC(self, method);
  }
  UnityEngine_Transform__set_localScale(v5, *(UnityEngine_Vector3_o *)&v6, 0LL);
}


void __fastcall SyncWidget___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_49FF987 & 1) == 0 )
  {
    sub_1B64870(&SyncWidget___c_TypeInfo, v1);
    byte_49FF987 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(SyncWidget___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SyncWidget___c_TypeInfo->static_fields->__9 = (struct SyncWidget___c_o *)v2;
  sub_1B64814((ServantStatusBattleListViewItem_o *)SyncWidget___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SyncWidget___c___ctor(SyncWidget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SyncWidget___c___ConvertTypeToAction_b__9_3(SyncWidget___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SyncWidget___c___Sync_b__8_0(SyncWidget___c_o *this, System_Action_o *x, const MethodInfo *method)
{
  ActionExtensions__Call(x, 0LL);
}