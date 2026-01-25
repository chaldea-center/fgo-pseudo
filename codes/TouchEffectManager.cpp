void TouchEffectManager___cctor(const MethodInfo *method)
{
  struct TouchEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v2; // x19
  struct TouchEffectManager_StaticFields *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Action_Vector2__o *v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Action_o *v17; // x19
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct NguiTouchEffectManager_StaticFields *v24; // x0
  System_Action_Vector2__o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct NguiTouchEffectManager_StaticFields *v32; // x0

  if ( (byte_4CED911 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_Vector2__TypeInfo);
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonParticleControlComponent___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_CommonParticleControlComponent__TypeInfo);
    sub_1C7BAE8(&Method_TouchEffectManager_Drag__);
    sub_1C7BAE8(&Method_TouchEffectManager_Press__);
    sub_1C7BAE8(&Method_TouchEffectManager_UnPress__);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    byte_4CED911 = 1;
  }
  static_fields = TouchEffectManager_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->CREATE_EFFECT_MAX = 5;
  static_fields->dragCount = -1.0;
  v2 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_CommonParticleControlComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_CommonParticleControlComponent___ctor__);
  v3 = TouchEffectManager_TypeInfo->static_fields;
  v3->effectList = (struct System_Collections_Generic_List_CommonParticleControlComponent__o *)v2;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v3->effectList, (int32_t)v2, v4, v5, v6, v7, v8, v9);
  TouchEffectManager_TypeInfo->static_fields->effectIdx = 0;
  v10 = (System_Action_Vector2__o *)sub_1C7BD34(System_Action_Vector2__TypeInfo);
  System_Action_Vector2____ctor(v10, 0, Method_TouchEffectManager_Press__, 0);
  if ( !byte_4CED91C )
  {
    sub_1C7BAE8(&NguiTouchEffectManager_TypeInfo);
    byte_4CED91C = 1;
  }
  NguiTouchEffectManager_TypeInfo->static_fields->pressAction = v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)NguiTouchEffectManager_TypeInfo->static_fields,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v17, 0, Method_TouchEffectManager_UnPress__, 0);
  if ( !byte_4CED91D )
  {
    sub_1C7BAE8(&NguiTouchEffectManager_TypeInfo);
    byte_4CED91D = 1;
  }
  v24 = NguiTouchEffectManager_TypeInfo->static_fields;
  v24->unPressAction = v17;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v24->unPressAction, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v25 = (System_Action_Vector2__o *)sub_1C7BD34(System_Action_Vector2__TypeInfo);
  System_Action_Vector2____ctor(v25, 0, Method_TouchEffectManager_Drag__, 0);
  if ( !byte_4CED91E )
  {
    sub_1C7BAE8(&NguiTouchEffectManager_TypeInfo);
    byte_4CED91E = 1;
  }
  v32 = NguiTouchEffectManager_TypeInfo->static_fields;
  v32->dragAction = v25;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v32->dragAction, (int32_t)v25, v26, v27, v28, v29, v30, v31);
}


void TouchEffectManager___ctor(TouchEffectManager_o *this, const MethodInfo *method)
{
  if ( (byte_4CED919 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager___ctor__);
    byte_4CED919 = 1;
  }
  this->fields.dragUnitLong = 100.0;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_TouchEffectManager___ctor__);
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
  TouchEffectManager_c *v9; // x0
  struct TouchEffectManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *effectList; // x0
  UnityEngine_Transform_o *v12; // x21
  float v13; // s10
  float v14; // s11
  float z; // s12
  struct TouchEffectManager_StaticFields *v16; // x8
  TouchEffectManager_c *v17; // x0
  struct TouchEffectManager_StaticFields *v18; // x8
  int32_t CREATE_EFFECT_MAX; // w10
  int v20; // w9
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_4CED917 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    byte_4CED917 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)prefab, 0, 0) )
  {
    v9 = TouchEffectManager_TypeInfo;
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
      v9 = TouchEffectManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    if ( static_fields->blockCount <= 0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        static_fields = TouchEffectManager_TypeInfo->static_fields;
      }
      effectList = (System_Collections_Generic_List_object__o *)static_fields->effectList;
      if ( !effectList )
        goto LABEL_27;
      effectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  effectList,
                                                                  static_fields->effectIdx,
                                                                  (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
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
      v12 = (UnityEngine_Transform_o *)effectList;
      effectList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__get_transform(prefab, 0);
      if ( !effectList )
        goto LABEL_27;
      localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)effectList, 0);
      effectList = (System_Collections_Generic_List_object__o *)this->fields.effectCamera;
      if ( !effectList )
        goto LABEL_27;
      v13 = localScale.fields.x;
      v14 = localScale.fields.y;
      z = localScale.fields.z;
      v22.fields.z = 0.0;
      v22.fields.x = x;
      v22.fields.y = y;
      v23 = UnityEngine_Camera__ScreenToWorldPoint_71674744((UnityEngine_Camera_o *)effectList, v22, 0);
      if ( !v12 )
        goto LABEL_27;
      UnityEngine_Transform__set_position(v12, v23, 0);
      if ( !byte_4CE7E5F )
      {
        sub_1C7BAE8(&UnityEngine_Quaternion_TypeInfo);
        byte_4CE7E5F = 1;
      }
      UnityEngine_Transform__set_localRotation(
        v12,
        UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
        0);
      v24.fields.x = v13;
      v24.fields.y = v14;
      v24.fields.z = z;
      UnityEngine_Transform__set_localScale(v12, v24, 0);
      v16 = TouchEffectManager_TypeInfo->static_fields;
      effectList = (System_Collections_Generic_List_object__o *)v16->effectList;
      if ( !effectList
        || (effectList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                        effectList,
                                                                        v16->effectIdx,
                                                                        (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__)) == 0 )
      {
LABEL_27:
        sub_1C7BD40(effectList, v8);
      }
      CommonParticleControlComponent__particleStart((CommonParticleControlComponent_o *)effectList, 1, 0);
      v17 = TouchEffectManager_TypeInfo;
      v18 = TouchEffectManager_TypeInfo->static_fields;
      CREATE_EFFECT_MAX = v18->CREATE_EFFECT_MAX;
      v20 = v18->effectIdx + 1;
      v18->effectIdx = v20;
      if ( v20 >= CREATE_EFFECT_MAX )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v18 = TouchEffectManager_TypeInfo->static_fields;
        }
        v18->effectIdx = 0;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TouchEffectManager__Drag(UnityEngine_Vector2_o v, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x19
  void *Instance; // x0
  __int64 v8; // x1
  TouchEffectManager_c *v9; // x0
  float dragCount; // s10
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v12; // s11
  float v13; // s12
  float v14; // s9
  float v15; // s8
  float v16; // s8
  Il2CppObject *v17; // x19
  const MethodInfo *v18; // x2
  UnityEngine_GameObject_o *v19; // x20
  TouchEffectManager_c *v20; // x0

  y = v.fields.y;
  x = v.fields.x;
  if ( (byte_4CED916 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    sub_1C7BAE8(&UICamera_TypeInfo);
    byte_4CED916 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C51B7C(*(long double *)&v.fields.x);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C51B7C(*(long double *)&v.fields.x);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    if ( !Instance )
      goto LABEL_33;
    if ( *((float *)Instance + 16) > 0.0 )
    {
      v9 = TouchEffectManager_TypeInfo;
      if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        v9 = TouchEffectManager_TypeInfo;
      }
      dragCount = v9->static_fields->dragCount;
      if ( dragCount >= 0.0 )
      {
        if ( !v9->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v9);
          dragCount = TouchEffectManager_TypeInfo->static_fields->dragCount;
        }
        if ( !byte_4CE7D39 )
        {
          sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
          byte_4CE7D39 = 1;
        }
        static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
        v12 = static_fields->zeroVector.fields.x;
        v13 = static_fields->zeroVector.fields.y;
        if ( !byte_4CE7D38 )
        {
          sub_1C7BAE8(&System_Math_TypeInfo);
          byte_4CE7D38 = 1;
        }
        v14 = v12 - x;
        v15 = v13 - y;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v16 = dragCount + sqrtf((float)(v14 * v14) + (float)(v15 * v15));
        TouchEffectManager_TypeInfo->static_fields->dragCount = v16;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
        if ( Instance )
        {
          if ( v16 <= *((float *)Instance + 16) )
            return;
          v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
          if ( Instance )
          {
            v19 = (UnityEngine_GameObject_o *)*((_QWORD *)Instance + 7);
            Instance = UICamera_TypeInfo;
            if ( !UICamera_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UICamera_TypeInfo);
              Instance = UICamera_TypeInfo;
            }
            if ( v17 )
            {
              TouchEffectManager__CreateLocal(
                (TouchEffectManager_o *)v17,
                v19,
                *(UnityEngine_Vector2_o *)(*((_QWORD *)Instance + 23) + 60LL),
                v18);
              v20 = TouchEffectManager_TypeInfo;
              if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
                v20 = TouchEffectManager_TypeInfo;
              }
              v20->static_fields->dragCount = 0.0;
              return;
            }
          }
        }
LABEL_33:
        sub_1C7BD40(Instance, v8);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void TouchEffectManager__Press(UnityEngine_Vector2_o p, const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x19
  Il2CppObject *Instance; // x19
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  TouchEffectManager_c *v11; // x0
  UnityEngine_Vector2_o v12; // 0:s0.4,4:s1.4

  y = p.fields.y;
  x = p.fields.x;
  if ( (byte_4CED914 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    byte_4CED914 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C51B7C(*(long double *)&p.fields.x);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C51B7C(*(long double *)&p.fields.x);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    if ( !v8 || !Instance )
      sub_1C7BD40(v8, v9);
    v12.fields.x = x;
    v12.fields.y = y;
    TouchEffectManager__CreateLocal((TouchEffectManager_o *)Instance, (UnityEngine_GameObject_o *)v8[3].klass, v12, v10);
    v11 = TouchEffectManager_TypeInfo;
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
      v11 = TouchEffectManager_TypeInfo;
    }
    v11->static_fields->dragCount = 0.0;
  }
}


void TouchEffectManager__SetBlock(bool isBlock, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  TouchEffectManager_c *v7; // x0
  struct TouchEffectManager_StaticFields *static_fields; // x9
  int32_t *p_blockCount; // x8
  int blockCount; // w21
  struct TouchEffectManager_StaticFields *v11; // x8
  int32_t v12; // t1
  Il2CppObject *Instance; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CED913 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    byte_4CED913 = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_TouchEffectManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C51B7C(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C51B7C(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v6, 0, 0) )
  {
    v7 = TouchEffectManager_TypeInfo;
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
      v7 = TouchEffectManager_TypeInfo;
    }
    static_fields = v7->static_fields;
    p_blockCount = &static_fields->blockCount;
    blockCount = static_fields->blockCount;
    if ( isBlock )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        static_fields = TouchEffectManager_TypeInfo->static_fields;
      }
      if ( blockCount <= 0 )
      {
        static_fields->blockCount = 1;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_TouchEffectManager__get_Instance__);
        if ( !Instance )
          sub_1C7BD40(0, v14);
        TouchEffectManager__StopLocal((TouchEffectManager_o *)Instance, v14);
      }
      else
      {
        ++static_fields->blockCount;
      }
    }
    else if ( blockCount >= 1 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v11 = TouchEffectManager_TypeInfo->static_fields;
        v12 = v11->blockCount;
        p_blockCount = &v11->blockCount;
        blockCount = v12;
      }
      *p_blockCount = blockCount - 1;
    }
  }
}


void TouchEffectManager__Start(TouchEffectManager_o *this, const MethodInfo *method)
{
  int *Component_object; // x0
  __int64 v4; // x8
  int32_t i; // w23
  struct TouchEffectManager_StaticFields *static_fields; // x8
  Il2CppObject *tapPrefab; // x20
  UnityEngine_Component_o *v8; // x20
  UnityEngine_GameObject_o *v9; // x21
  UnityEngine_Component_o *transform; // x0
  int32_t layer; // w0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  TouchEffectManager_c *v18; // x0
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  __int64 v22; // x8

  if ( (byte_4CED912 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CommonParticleControlComponent___);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonParticleControlComponent__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Count__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_14619/*"TouchEffect"*/);
    byte_4CED912 = 1;
  }
  Component_object = (int *)TouchEffectManager_TypeInfo;
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    Component_object = (int *)TouchEffectManager_TypeInfo;
  }
  v4 = *(_QWORD *)(*((_QWORD *)Component_object + 23) + 16LL);
  if ( !v4 )
LABEL_30:
    sub_1C7BD40(Component_object, method);
  if ( !*(_DWORD *)(v4 + 24) )
  {
    for ( i = 0; ; ++i )
    {
      if ( !Component_object[56] )
      {
        j_il2cpp_runtime_class_init_0(Component_object);
        Component_object = (int *)TouchEffectManager_TypeInfo;
      }
      static_fields = (struct TouchEffectManager_StaticFields *)*((_QWORD *)Component_object + 23);
      if ( i >= static_fields->CREATE_EFFECT_MAX )
        break;
      tapPrefab = (Il2CppObject *)this->fields.tapPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Component_object = (int *)UnityEngine_Object__Instantiate_object_(
                                  tapPrefab,
                                  (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( !Component_object )
        goto LABEL_30;
      Component_object = (int *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)Component_object,
                                  (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CommonParticleControlComponent___);
      if ( !Component_object )
        goto LABEL_30;
      v8 = (UnityEngine_Component_o *)Component_object;
      Component_object = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0);
      if ( !this->fields.effectParent )
        goto LABEL_30;
      v9 = (UnityEngine_GameObject_o *)Component_object;
      transform = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(this->fields.effectParent, 0);
      GameObjectExtensions__SafeSetParent(v9, transform, 0);
      Component_object = (int *)UnityEngine_Component__get_gameObject(v8, 0);
      if ( !Component_object )
        goto LABEL_30;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)Component_object, (System_String_o *)StringLiteral_14619/*"TouchEffect"*/, 0);
      Component_object = (int *)this->fields.effectParent;
      if ( !Component_object )
        goto LABEL_30;
      layer = UnityEngine_GameObject__get_layer((UnityEngine_GameObject_o *)Component_object, 0);
      CommonParticleControlComponent__init((CommonParticleControlComponent_o *)v8, layer, 0);
      v18 = TouchEffectManager_TypeInfo;
      if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
        v18 = TouchEffectManager_TypeInfo;
      }
      Component_object = (int *)v18->static_fields->effectList;
      if ( !Component_object )
        goto LABEL_30;
      v19 = *((_QWORD *)Component_object + 2);
      v20 = Method_System_Collections_Generic_List_CommonParticleControlComponent__Add__;
      ++Component_object[7];
      if ( !v19 )
        goto LABEL_30;
      v21 = Component_object[6];
      if ( (unsigned int)v21 >= *(_DWORD *)(v19 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Component_object,
          (Il2CppObject *)v8,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = v19 + 8 * v21;
        Component_object[6] = v21 + 1;
        *(_QWORD *)(v22 + 32) = v8;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)v8, v12, v13, v14, v15, v16, v17);
      }
      Component_object = (int *)TouchEffectManager_TypeInfo;
    }
    if ( !Component_object[56] )
    {
      j_il2cpp_runtime_class_init_0(Component_object);
      static_fields = TouchEffectManager_TypeInfo->static_fields;
    }
    static_fields->effectIdx = 0;
  }
}


void TouchEffectManager__StopLocal(TouchEffectManager_o *this, const MethodInfo *method)
{
  int32_t i; // w19
  CommonParticleControlComponent_o *Item; // x0
  System_Collections_Generic_List_object__o *kernelEvent; // x8

  if ( (byte_4CED918 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    byte_4CED918 = 1;
  }
  for ( i = 0; ; ++i )
  {
    Item = (CommonParticleControlComponent_o *)TouchEffectManager_TypeInfo;
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
      Item = (CommonParticleControlComponent_o *)TouchEffectManager_TypeInfo;
    }
    kernelEvent = (System_Collections_Generic_List_object__o *)Item[4].fields.m_CancellationTokenSource->fields._kernelEvent;
    if ( !kernelEvent )
LABEL_13:
      sub_1C7BD40(Item, method);
    if ( i >= kernelEvent->fields._size )
      break;
    if ( !LODWORD(Item[5].fields.m_CancellationTokenSource) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      kernelEvent = (System_Collections_Generic_List_object__o *)TouchEffectManager_TypeInfo->static_fields->effectList;
      if ( !kernelEvent )
        goto LABEL_13;
    }
    Item = (CommonParticleControlComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                 kernelEvent,
                                                 i,
                                                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_CommonParticleControlComponent__get_Item__);
    if ( !Item )
      goto LABEL_13;
    CommonParticleControlComponent__particleAllStop(Item, 1, 0);
  }
}


void TouchEffectManager__UnPress(const MethodInfo *method)
{
  TouchEffectManager_c *v1; // x0

  if ( (byte_4CED915 & 1) == 0 )
  {
    sub_1C7BAE8(&TouchEffectManager_TypeInfo);
    byte_4CED915 = 1;
  }
  v1 = TouchEffectManager_TypeInfo;
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    v1 = TouchEffectManager_TypeInfo;
  }
  v1->static_fields->dragCount = -1.0;
}