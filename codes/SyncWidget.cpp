void SyncWidget___ctor(SyncWidget_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  long double v8; // q0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x0
  __int64 v13; // x0
  struct SyncWidget_SyncParamType_array **v14; // x8
  struct SyncWidget_SyncParamType_array *v15; // x1
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  long double v23; // q0
  _QWORD *v24; // x20
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x0
  struct System_Action_array **v28; // x8
  struct System_Action_array *v29; // x1

  if ( (byte_597208B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_Action___);
    sub_2213A60(&Method_System_Array_Empty_SyncWidget_SyncParamType___);
    byte_597208B = 1;
  }
  v10 = Method_System_Array_Empty_SyncWidget_SyncParamType___;
  v11 = *((_QWORD *)Method_System_Array_Empty_SyncWidget_SyncParamType___ + 7);
  if ( !v11 )
  {
    sub_224B964(Method_System_Array_Empty_SyncWidget_SyncParamType___);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
    v12 = sub_224B908(v8);
  if ( !*(_DWORD *)(v12 + 228) )
    *(__n128 *)&v8 = j_il2cpp_runtime_class_init_0(v12, method);
  v13 = *(_QWORD *)(v10[7] + 16LL);
  if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
    v13 = sub_224B908(v8);
  v14 = *(struct SyncWidget_SyncParamType_array ***)(v13 + 184);
  v15 = *v14;
  this->fields.syncParamTypeArray = *v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.syncParamTypeArray,
    (int32_t)v15,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  v24 = Method_System_Array_Empty_Action___;
  *(struct UnityEngine_Vector2_o *)&v23 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.blankSize = *(struct UnityEngine_Vector2_o *)&v23;
  v25 = v24[7];
  if ( !v25 )
  {
    sub_224B964(v24);
    v25 = v24[7];
  }
  v26 = *(_QWORD *)(v25 + 16);
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_224B908(v23);
  if ( !*(_DWORD *)(v26 + 228) )
    *(__n128 *)&v23 = j_il2cpp_runtime_class_init_0(v26, v16);
  v27 = *(_QWORD *)(v24[7] + 16LL);
  if ( (*(_WORD *)(v27 + 309) & 1) == 0 )
    v27 = sub_224B908(v23);
  v28 = *(struct System_Action_array ***)(v27 + 184);
  v29 = *v28;
  this->fields.syncActionArray = *v28;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.syncActionArray,
    (int32_t)v29,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SyncWidget__Awake(SyncWidget_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_IEnumerable_TSource__o *syncParamTypeArray; // x20
  System_Func_T__TResult__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5972088 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_Action___);
    sub_2213A60(&System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
    byte_5972088 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  this->fields.self = (struct UIWidget_o *)Component_object;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.self, (int32_t)Component_object, v4, v5, v6, v7, v8, v9);
  syncParamTypeArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.syncParamTypeArray;
  v11 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_SyncWidget_SyncParamType__Action__TypeInfo);
  System_Func_Int32Enum__object____ctor(
    v11,
    (Il2CppObject *)this,
    (intptr_t)this->klass->vtable._4_ConvertTypeToAction.method,
    0);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_Int32Enum__object_(
                                                               syncParamTypeArray,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_388EECC *)Method_System_Linq_Enumerable_Select_SyncWidget_SyncParamType__Action___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_Action___);
  this->fields.syncActionArray = (struct System_Action_array *)v13;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.syncActionArray,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ((void (__fastcall *)(SyncWidget_o *, const MethodInfo *))this->klass->vtable._5_InitSync.methodPtr)(
    this,
    this->klass->vtable._5_InitSync.method);
}


// local variable allocation has failed, the output may be wrong!
System_Action_o *SyncWidget__ConvertTypeToAction(SyncWidget_o *this, int32_t type, const MethodInfo *method)
{
  System_Action_o *v5; // x0
  intptr_t *v6; // x8
  SyncWidget___c_c *v7; // x0
  struct SyncWidget___c_StaticFields *static_fields; // x8
  System_Action_o *_9__9_3; // x20
  Il2CppObject *v10; // x19
  struct SyncWidget___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_597208A & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_SyncWidget_SyncColorAlpha__);
    sub_2213A60(&Method_SyncWidget__ConvertTypeToAction_b__9_0__);
    sub_2213A60(&Method_SyncWidget__ConvertTypeToAction_b__9_1__);
    sub_2213A60(&Method_SyncWidget__ConvertTypeToAction_b__9_2__);
    sub_2213A60(&Method_SyncWidget___c__ConvertTypeToAction_b__9_3__);
    sub_2213A60(&SyncWidget___c_TypeInfo);
    byte_597208A = 1;
  }
  if ( type > 1 )
  {
    if ( type == 2 )
    {
      v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_2__;
      goto LABEL_18;
    }
    if ( type == 3 )
    {
      v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v6 = &Method_SyncWidget_SyncColorAlpha__;
      goto LABEL_18;
    }
  }
  else
  {
    if ( !type )
    {
      v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_0__;
      goto LABEL_18;
    }
    if ( type == 1 )
    {
      v5 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      v6 = &Method_SyncWidget__ConvertTypeToAction_b__9_1__;
LABEL_18:
      _9__9_3 = v5;
      System_Action___ctor(v5, (Il2CppObject *)this, *v6, 0);
      return _9__9_3;
    }
  }
  v7 = SyncWidget___c_TypeInfo;
  if ( !*(&SyncWidget___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo, *(_QWORD *)&type);
    v7 = SyncWidget___c_TypeInfo;
  }
  static_fields = v7->static_fields;
  _9__9_3 = static_fields->__9__9_3;
  if ( !_9__9_3 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, *(_QWORD *)&type);
      static_fields = SyncWidget___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__9_3 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(_9__9_3, v10, Method_SyncWidget___c__ConvertTypeToAction_b__9_3__, 0);
    v11 = SyncWidget___c_TypeInfo->static_fields;
    v11->__9__9_3 = _9__9_3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__9_3, (int32_t)_9__9_3, v12, v13, v14, v15, v16, v17);
  }
  return _9__9_3;
}


bool SyncWidget__DisabledSync(SyncWidget_o *this, const MethodInfo *method)
{
  return 0;
}


void SyncWidget__InitSync(SyncWidget_o *this, const MethodInfo *method)
{
  ;
}


// attributes: thunk
void SyncWidget__LateUpdate(SyncWidget_o *this, const MethodInfo *method)
{
  SyncWidget__Sync(this, method);
}


void SyncWidget__Sync(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *self; // x20
  __int64 v4; // x1
  UnityEngine_Object_o *syncFrom; // x20
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *syncActionArray; // x19
  SyncWidget___c_c *v8; // x0
  struct SyncWidget___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__8_0; // x20
  Il2CppObject *v11; // x21
  struct SyncWidget___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5972089 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Action__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_Action___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SyncWidget___c__Sync_b__8_0__);
    sub_2213A60(&SyncWidget___c_TypeInfo);
    byte_5972089 = 1;
  }
  self = (UnityEngine_Object_o *)this->fields.self;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(self, 0, 0) )
  {
    syncFrom = (UnityEngine_Object_o *)this->fields.syncFrom;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    if ( !UnityEngine_Object__op_Equality(syncFrom, 0, 0)
      && (((__int64 (__fastcall *)(SyncWidget_o *, const MethodInfo *))this->klass->vtable._6_DisabledSync.methodPtr)(
            this,
            this->klass->vtable._6_DisabledSync.method)
        & 1) == 0 )
    {
      syncActionArray = (System_Collections_Generic_IEnumerable_T__o *)this->fields.syncActionArray;
      v8 = SyncWidget___c_TypeInfo;
      if ( !*(&SyncWidget___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SyncWidget___c_TypeInfo, v6);
        v8 = SyncWidget___c_TypeInfo;
      }
      static_fields = v8->static_fields;
      _9__8_0 = (System_Action_object__o *)static_fields->__9__8_0;
      if ( !_9__8_0 )
      {
        if ( !*(&v8->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v8, v6);
          static_fields = SyncWidget___c_TypeInfo->static_fields;
        }
        v11 = (Il2CppObject *)static_fields->__9;
        _9__8_0 = (System_Action_object__o *)sub_2213CCC(System_Action_Action__TypeInfo);
        System_Action_object____ctor(_9__8_0, v11, Method_SyncWidget___c__Sync_b__8_0__, 0);
        v12 = SyncWidget___c_TypeInfo->static_fields;
        v12->__9__8_0 = (struct System_Action_Action__o *)_9__8_0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v12->__9__8_0, (int32_t)_9__8_0, v13, v14, v15, v16, v17, v18);
      }
      BasicHelper__ForEach_object_(
        syncActionArray,
        (System_Action_T__o *)_9__8_0,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_Action___);
    }
  }
}


void SyncWidget__SyncColorAlpha(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *self; // x8
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v4; // x19
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v9; // s12
  float v10; // s0
  float v11; // s1
  struct UnityEngine_Mathf_StaticFields *static_fields; // x8
  float v13; // s0
  struct UIWidget_o *v14; // x8
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  self = this->fields.self;
  if ( !self )
    goto LABEL_13;
  syncFrom = this->fields.syncFrom;
  v4 = this;
  if ( !syncFrom )
    goto LABEL_13;
  r = self->fields.mColor.fields.r;
  g = self->fields.mColor.fields.g;
  b = self->fields.mColor.fields.b;
  a = self->fields.mColor.fields.a;
  v9 = syncFrom->fields.mColor.fields.a;
  if ( !byte_5969AE4 )
  {
    this = (SyncWidget_o *)sub_2213A60(&UnityEngine_Mathf_TypeInfo);
    byte_5969AE4 = 1;
  }
  v10 = fabsf(a);
  v11 = fabsf(v9);
  static_fields = UnityEngine_Mathf_TypeInfo->static_fields;
  if ( v10 <= v11 )
    v10 = v11;
  v13 = v10 * 0.000001;
  if ( v13 <= (float)(static_fields->Epsilon * 8.0) )
    v13 = static_fields->Epsilon * 8.0;
  if ( vabds_f32(v9, a) >= v13 )
  {
    v14 = v4->fields.syncFrom;
    if ( v14 )
    {
      this = (SyncWidget_o *)v4->fields.self;
      if ( this )
      {
        v15.fields.r = r;
        v15.fields.g = g;
        v15.fields.a = v14->fields.mColor.fields.a;
        v15.fields.b = b;
        UIWidget__set_color((UIWidget_o *)this, v15, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(this, method);
  }
}


void SyncWidget___ConvertTypeToAction_b__9_0(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  float x; // s0
  int32_t mWidth; // w8
  float v6; // s0
  int v7; // w9

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0) )
    sub_2213CDC(this, method);
  x = v3->fields.blankSize.fields.x;
  mWidth = syncFrom->fields.mWidth;
  v6 = x + x;
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_width((UIWidget_o *)this, v7 + mWidth, 0);
}


void SyncWidget___ConvertTypeToAction_b__9_1(SyncWidget_o *this, const MethodInfo *method)
{
  struct UIWidget_o *syncFrom; // x9
  SyncWidget_o *v3; // x8
  float y; // s0
  int32_t mHeight; // w8
  float v6; // s0
  int v7; // w9

  syncFrom = this->fields.syncFrom;
  if ( !syncFrom || (v3 = this, (this = (SyncWidget_o *)this->fields.self) == 0) )
    sub_2213CDC(this, method);
  y = v3->fields.blankSize.fields.y;
  mHeight = syncFrom->fields.mHeight;
  v6 = y + y;
  if ( v6 == INFINITY )
    v7 = 0x80000000;
  else
    v7 = (int)v6;
  UIWidget__set_height((UIWidget_o *)this, v7 + mHeight, 0);
}


void SyncWidget___ConvertTypeToAction_b__9_2(SyncWidget_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *self; // x0
  UnityEngine_Component_o *syncFrom; // x8
  UnityEngine_Transform_o *v5; // x19
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  self = (UnityEngine_Component_o *)this->fields.self;
  if ( !self
    || (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(self, 0),
        (syncFrom = (UnityEngine_Component_o *)this->fields.syncFrom) == 0)
    || (v5 = (UnityEngine_Transform_o *)self,
        (self = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(syncFrom, 0)) == 0)
    || (localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)self, 0), !v5) )
  {
    sub_2213CDC(self, method);
  }
  UnityEngine_Transform__set_localScale(v5, localScale, 0);
}


void SyncWidget___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597208C & 1) == 0 )
  {
    sub_2213A60(&SyncWidget___c_TypeInfo);
    byte_597208C = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SyncWidget___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SyncWidget___c_TypeInfo->static_fields->__9 = (struct SyncWidget___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SyncWidget___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SyncWidget___c___ctor(SyncWidget___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SyncWidget___c___ConvertTypeToAction_b__9_3(SyncWidget___c_o *this, const MethodInfo *method)
{
  ;
}


void SyncWidget___c___Sync_b__8_0(SyncWidget___c_o *this, System_Action_o *x, const MethodInfo *method)
{
  ActionExtensions__Call(x, 0);
}