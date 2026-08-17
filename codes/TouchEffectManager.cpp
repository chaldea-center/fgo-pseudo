void TouchEffectManager___cctor(const MethodInfo *method)
{
  struct TouchEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_CommonParticleControlComponent__c *v2; // x0
  System_Collections_Generic_List_object__o *v3; // x19
  struct TouchEffectManager_StaticFields *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Action_Vector2__c *v11; // x0
  System_Action_Vector2__o *v12; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_o *v19; // x19
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  struct NguiTouchEffectManager_StaticFields *v26; // x0
  System_Action_Vector2__o *v27; // x19
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct NguiTouchEffectManager_StaticFields *v34; // x0

  if ( (byte_596FA2E & 1) == 0 )
  {
    sub_2213A60(&System_Action_Vector2__TypeInfo);
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonParticleControlComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_CommonParticleControlComponent__TypeInfo);
    sub_2213A60(&Method_TouchEffectManager_Drag__);
    sub_2213A60(&Method_TouchEffectManager_Press__);
    sub_2213A60(&Method_TouchEffectManager_UnPress__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596FA2E = 1;
  }
  static_fields = TouchEffectManager_TypeInfo->static_fields;
  v2 = System_Collections_Generic_List_CommonParticleControlComponent__TypeInfo;
  *(_QWORD *)&static_fields->CREATE_EFFECT_MAX = 5;
  static_fields->dragCount = -1.0;
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v2);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_CommonParticleControlComponent___ctor__);
  v4 = TouchEffectManager_TypeInfo->static_fields;
  v4->effectList = (struct System_Collections_Generic_List_CommonParticleControlComponent__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v4->effectList, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = System_Action_Vector2__TypeInfo;
  TouchEffectManager_TypeInfo->static_fields->effectIdx = 0;
  v12 = (System_Action_Vector2__o *)sub_2213CCC(v11);
  System_Action_Vector2____ctor(v12, 0, Method_TouchEffectManager_Press__, 0);
  if ( !byte_596FA39 )
  {
    sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_596FA39 = 1;
  }
  NguiTouchEffectManager_TypeInfo->static_fields->pressAction = v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)NguiTouchEffectManager_TypeInfo->static_fields,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v19, 0, Method_TouchEffectManager_UnPress__, 0);
  if ( !byte_596FA3A )
  {
    sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_596FA3A = 1;
  }
  v26 = NguiTouchEffectManager_TypeInfo->static_fields;
  v26->unPressAction = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v26->unPressAction, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v27 = (System_Action_Vector2__o *)sub_2213CCC(System_Action_Vector2__TypeInfo);
  System_Action_Vector2____ctor(v27, 0, Method_TouchEffectManager_Drag__, 0);
  if ( !byte_596FA3B )
  {
    sub_2213A60(&NguiTouchEffectManager_TypeInfo);
    byte_596FA3B = 1;
  }
  v34 = NguiTouchEffectManager_TypeInfo->static_fields;
  v34->dragAction = v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v34->dragAction, (int32_t)v27, v28, v29, v30, v31, v32, v33);
}


void TouchEffectManager___ctor(TouchEffectManager_o *this, const MethodInfo *method)
{
  const MethodInfo_47A2F28 *v3; // x1

  if ( (byte_596FA36 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager___ctor__);
    byte_596FA36 = 1;
  }
  v3 = (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_TouchEffectManager___ctor__;
  this->fields.dragUnitLong = 100.0;
  SingletonMonoBehaviour_object____ctor((SingletonMonoBehaviour_T__o *)this, v3);
}


void TouchEffectManager__CreateLocal(
        TouchEffectManager_o *this,
        UnityEngine_GameObject_o *prefab,
        UnityEngine_Vector2_o p,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v8; // x1
  __int64 v9; // x2
  TouchEffectManager_c *v10; // x0
  struct TouchEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *effectList; // x0
  UnityEngine_Transform_o *v13; // x21
  float v14; // s10
  float v15; // s11
  float z; // s12
  struct TouchEffectManager_StaticFields *v17; // x8
  __int64 v18; // x1
  __int64 v19; // x2
  TouchEffectManager_c *v20; // x0
  struct TouchEffectManager_StaticFields *v21; // x8
  int32_t CREATE_EFFECT_MAX; // w10
  int v23; // w9
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_596FA34 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596FA34 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v10 = TouchEffectManager_TypeInfo;
    if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v8, v9);
      v10 = TouchEffectManager_TypeInfo;
    }
    static_fields = v10->static_fields;
    if ( static_fields->blockCount <= 0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v8, v9);
        static_fields = TouchEffectManager_TypeInfo->static_fields;
      }
      effectList = (System_Collections_Generic_List_object__o *)static_fields->effectList;
      if ( !effectList )
        goto LABEL_27;
      effectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  effectList,
                                                                  static_fields->effectIdx,
                                                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
      if ( !effectList )
        goto LABEL_27;
      effectList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)effectList,
                                                                  0);
      if ( !effectList )
        goto LABEL_27;
      effectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(
                                                                  (UnityEngine_GameObject_o *)effectList,
                                                                  0);
      if ( !prefab )
        goto LABEL_27;
      v13 = (UnityEngine_Transform_o *)effectList;
      effectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(prefab, 0);
      if ( !effectList )
        goto LABEL_27;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)effectList, 0);
      effectList = (System_Collections_Generic_List_object__o *)this->fields.effectCamera;
      if ( !effectList )
        goto LABEL_27;
      v14 = localScale.fields.x;
      v15 = localScale.fields.y;
      z = localScale.fields.z;
      v25.fields.z = 0.0;
      v25.fields.x = x;
      v25.fields.y = y;
      v26 = UnityEngine_Camera__ScreenToWorldPoint_83198228((UnityEngine_Camera_o *)effectList, v25, 0);
      if ( !v13 )
        goto LABEL_27;
      UnityEngine_Transform__set_position(v13, v26, 0);
      if ( !byte_5969AE6 )
      {
        sub_2213A60(&UnityEngine_Quaternion_TypeInfo);
        byte_5969AE6 = 1;
      }
      UnityEngine_Transform__set_localRotation(
        v13,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v27.fields.x = v14;
      v27.fields.y = v15;
      v27.fields.z = z;
      UnityEngine_Transform__set_localScale(v13, v27, 0);
      v17 = TouchEffectManager_TypeInfo->static_fields;
      effectList = (System_Collections_Generic_List_object__o *)v17->effectList;
      if ( !effectList
        || (effectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        effectList,
                                                                        v17->effectIdx,
                                                                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__)) == 0 )
      {
LABEL_27:
        sub_2213CDC(effectList, v8);
      }
      CommonParticleControlComponent__particleStart((CommonParticleControlComponent_o *)effectList, 1, 0);
      v20 = TouchEffectManager_TypeInfo;
      v21 = TouchEffectManager_TypeInfo->static_fields;
      CREATE_EFFECT_MAX = v21->CREATE_EFFECT_MAX;
      v23 = v21->effectIdx + 1;
      v21->effectIdx = v23;
      if ( v23 >= CREATE_EFFECT_MAX )
      {
        if ( !*(&v20->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v20, v18, v19);
          v21 = TouchEffectManager_TypeInfo->static_fields;
        }
        v21->effectIdx = 0;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TouchEffectManager__Drag(UnityEngine_Vector2_o v, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  float y; // s8
  float x; // s9
  __int64 v6; // x0
  __int64 v7; // x0
  UnityEngine_Object_o *v8; // x19
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  TouchEffectManager_c *v12; // x0
  float dragCount; // s10
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v15; // s11
  float v16; // s12
  const MethodInfo_47A29F8 *v17; // x0
  float v18; // s8
  Il2CppObject *v19; // x19
  const MethodInfo *v20; // x2
  UnityEngine_GameObject_o *monitor; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  TouchEffectManager_c *v24; // x0

  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_596FA33 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    sub_2213A60(&UICamera_TypeInfo);
    byte_596FA33 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(*(long double *)&v.fields.x);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(*(long double *)&v.fields.x);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( *(float *)&Instance[4].klass > 0.0 )
    {
      v12 = TouchEffectManager_TypeInfo;
      if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v10, v11);
        v12 = TouchEffectManager_TypeInfo;
      }
      dragCount = v12->static_fields->dragCount;
      if ( dragCount >= 0.0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v10, v11);
          dragCount = TouchEffectManager_TypeInfo->static_fields->dragCount;
        }
        if ( !byte_59699C0 )
        {
          sub_2213A60(&UnityEngine_Vector2_TypeInfo);
          byte_59699C0 = 1;
        }
        static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
        v15 = static_fields->zeroVector.fields.x;
        v16 = static_fields->zeroVector.fields.y;
        if ( !byte_59699BF )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_59699BF = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v10, v11);
        v17 = (const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__;
        v18 = dragCount
            + sqrtf((float)((float)(v15 - x) * (float)(v15 - x)) + (float)((float)(v16 - y) * (float)(v16 - y)));
        TouchEffectManager_TypeInfo->static_fields->dragCount = v18;
        Instance = SingletonMonoBehaviour_object___get_Instance(v17);
        if ( Instance )
        {
          if ( v18 <= *(float *)&Instance[4].klass )
            return;
          v19 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
          if ( Instance )
          {
            monitor = (UnityEngine_GameObject_o *)Instance[3].monitor;
            if ( !*(&UICamera_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo, v10, v20);
            if ( v19 )
            {
              TouchEffectManager__CreateLocal(
                (TouchEffectManager_o *)v19,
                monitor,
                UICamera_TypeInfo->static_fields->lastTouchPosition,
                v20);
              v24 = TouchEffectManager_TypeInfo;
              if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v22, v23);
                v24 = TouchEffectManager_TypeInfo;
              }
              v24->static_fields->dragCount = 0.0;
              return;
            }
          }
        }
LABEL_33:
        sub_2213CDC(Instance, v10);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TouchEffectManager__Press(UnityEngine_Vector2_o p, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  float y; // s8
  float x; // s9
  __int64 v6; // x0
  __int64 v7; // x0
  UnityEngine_Object_o *v8; // x19
  Il2CppObject *Instance; // x19
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  TouchEffectManager_c *v15; // x0
  UnityEngine_Vector2_o v16; // 0:s0.4,4:s1.4

  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_596FA31 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596FA31 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__ + 4);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(*(long double *)&p.fields.x);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(*(long double *)&p.fields.x);
  v8 = **(UnityEngine_Object_o ***)(v7 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v2, v3);
  if ( !UnityEngine_Object__op_Equality(v8, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    v10 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    if ( !v10 || !Instance )
      sub_2213CDC(v10, v11);
    v16.fields.x = x;
    v16.fields.y = y;
    TouchEffectManager__CreateLocal(
      (TouchEffectManager_o *)Instance,
      (UnityEngine_GameObject_o *)v10[3].klass,
      v16,
      v12);
    v15 = TouchEffectManager_TypeInfo;
    if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v13, v14);
      v15 = TouchEffectManager_TypeInfo;
    }
    v15->static_fields->dragCount = 0.0;
  }
}


void TouchEffectManager__SetBlock(bool isBlock, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  TouchEffectManager_c *v10; // x0
  int v11; // w8
  struct TouchEffectManager_StaticFields *static_fields; // x8
  int v13; // w10
  int blockCount; // w9
  int32_t v15; // w9
  int v16; // w9
  Il2CppObject *Instance; // x0
  const MethodInfo *v18; // x1

  if ( (byte_596FA30 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596FA30 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__ + 4);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(v7, 0, 0) )
  {
    v10 = TouchEffectManager_TypeInfo;
    v11 = *(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1);
    if ( isBlock )
    {
      if ( !v11 )
      {
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v8, v9);
        v10 = TouchEffectManager_TypeInfo;
      }
      static_fields = v10->static_fields;
      v13 = *(&v10->_2.cctor_finished + 1);
      blockCount = static_fields->blockCount;
      if ( blockCount > 0 )
      {
        if ( !v13 )
        {
          j_il2cpp_runtime_class_init_0(v10, v8, v9);
          static_fields = TouchEffectManager_TypeInfo->static_fields;
          blockCount = static_fields->blockCount;
        }
        v15 = blockCount + 1;
LABEL_23:
        static_fields->blockCount = v15;
        return;
      }
      if ( !v13 )
      {
        j_il2cpp_runtime_class_init_0(v10, v8, v9);
        static_fields = TouchEffectManager_TypeInfo->static_fields;
      }
      static_fields->blockCount = 1;
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
      if ( !Instance )
        sub_2213CDC(0, v18);
      TouchEffectManager__StopLocal((TouchEffectManager_o *)Instance, v18);
    }
    else
    {
      if ( !v11 )
      {
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v8, v9);
        v10 = TouchEffectManager_TypeInfo;
      }
      static_fields = v10->static_fields;
      v16 = static_fields->blockCount;
      if ( v16 >= 1 )
      {
        if ( !*(&v10->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v10, v8, v9);
          static_fields = TouchEffectManager_TypeInfo->static_fields;
          v16 = static_fields->blockCount;
        }
        v15 = v16 - 1;
        goto LABEL_23;
      }
    }
  }
}


void TouchEffectManager__Start(TouchEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int *Component_object; // x0
  __int64 v5; // x8
  int32_t i; // w28
  struct TouchEffectManager_StaticFields *static_fields; // x8
  Il2CppObject *tapPrefab; // x20
  UnityEngine_Component_o *v9; // x20
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_Component_o *transform; // x0
  int32_t layer; // w0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  TouchEffectManager_c *v19; // x0
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  __int64 v23; // x8

  if ( (byte_596FA2F & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CommonParticleControlComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonParticleControlComponent__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Count__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    sub_2213A60(&StringLiteral_15157/*"TouchEffect"*/);
    byte_596FA2F = 1;
  }
  Component_object = (int *)TouchEffectManager_TypeInfo;
  if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method, v2);
    Component_object = (int *)TouchEffectManager_TypeInfo;
  }
  v5 = *(_QWORD *)(*((_QWORD *)Component_object + 23) + 16LL);
  if ( !v5 )
LABEL_30:
    sub_2213CDC(Component_object, method);
  if ( !*(_DWORD *)(v5 + 24) )
  {
    for ( i = 0; ; ++i )
    {
      if ( !Component_object[57] )
      {
        j_il2cpp_runtime_class_init_0(Component_object, method, v2);
        Component_object = (int *)TouchEffectManager_TypeInfo;
      }
      static_fields = (struct TouchEffectManager_StaticFields *)*((_QWORD *)Component_object + 23);
      if ( i >= static_fields->CREATE_EFFECT_MAX )
        break;
      tapPrefab = (Il2CppObject *)this->fields.tapPrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
      Component_object = (int *)UnityEngine_Object__Instantiate_object_(
                                  tapPrefab,
                                  (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Component_object )
        goto LABEL_30;
      Component_object = (int *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Component_object,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CommonParticleControlComponent___);
      if ( !Component_object )
        goto LABEL_30;
      v9 = (UnityEngine_Component_o *)Component_object;
      Component_object = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !this->fields.effectParent )
        goto LABEL_30;
      v10 = (UnityEngine_GameObject_o *)Component_object;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.effectParent, 0);
      GameObjectExtensions__SafeSetParent(v10, transform, 0);
      Component_object = (int *)UnityEngine_Component__get_gameObject(v9, 0);
      if ( !Component_object )
        goto LABEL_30;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_15157/*"TouchEffect"*/, 0);
      Component_object = (int *)this->fields.effectParent;
      if ( !Component_object )
        goto LABEL_30;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
      CommonParticleControlComponent__init((CommonParticleControlComponent_o *)v9, layer, 0);
      v19 = TouchEffectManager_TypeInfo;
      if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method, v13);
        v19 = TouchEffectManager_TypeInfo;
      }
      Component_object = (int *)v19->static_fields->effectList;
      if ( !Component_object )
        goto LABEL_30;
      v20 = *((_QWORD *)Component_object + 2);
      v21 = Method_System_Collections_Generic_List_CommonParticleControlComponent__Add__;
      ++Component_object[7];
      if ( !v20 )
        goto LABEL_30;
      v22 = Component_object[6];
      if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v9,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = v20 + 8 * v22;
        Component_object[6] = v22 + 1;
        *(_QWORD *)(v23 + 32) = v9;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v23 + 32), (int32_t)v9, v13, v14, v15, v16, v17, v18);
      }
      Component_object = (int *)TouchEffectManager_TypeInfo;
    }
    if ( !Component_object[57] )
    {
      j_il2cpp_runtime_class_init_0(Component_object, method, v2);
      static_fields = TouchEffectManager_TypeInfo->static_fields;
    }
    static_fields->effectIdx = 0;
  }
}


void TouchEffectManager__StopLocal(TouchEffectManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t i; // w19
  CommonParticleControlComponent_o *Item; // x0
  System_Collections_Generic_List_object__o *kernelEvent; // x8

  if ( (byte_596FA35 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596FA35 = 1;
  }
  for ( i = 0; ; ++i )
  {
    Item = (CommonParticleControlComponent_o *)TouchEffectManager_TypeInfo;
    if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, method, v2);
      Item = (CommonParticleControlComponent_o *)TouchEffectManager_TypeInfo;
    }
    kernelEvent = (System_Collections_Generic_List_object__o *)Item[4].fields.m_CancellationTokenSource->fields._kernelEvent;
    if ( !kernelEvent )
LABEL_13:
      sub_2213CDC(Item, method);
    if ( i >= kernelEvent->fields._size )
      break;
    if ( !HIDWORD(Item[5].fields.m_CancellationTokenSource) )
    {
      j_il2cpp_runtime_class_init_0(Item, method, v2);
      kernelEvent = (System_Collections_Generic_List_object__o *)TouchEffectManager_TypeInfo->static_fields->effectList;
      if ( !kernelEvent )
        goto LABEL_13;
    }
    Item = (CommonParticleControlComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 kernelEvent,
                                                 i,
                                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
    if ( !Item )
      goto LABEL_13;
    CommonParticleControlComponent__particleAllStop(Item, 1, 0);
  }
}


void TouchEffectManager__UnPress(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  TouchEffectManager_c *v3; // x0

  if ( (byte_596FA32 & 1) == 0 )
  {
    sub_2213A60(&TouchEffectManager_TypeInfo);
    byte_596FA32 = 1;
  }
  v3 = TouchEffectManager_TypeInfo;
  if ( !*(&TouchEffectManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo, v1, v2);
    v3 = TouchEffectManager_TypeInfo;
  }
  v3->static_fields->dragCount = -1.0;
}