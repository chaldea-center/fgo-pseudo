void BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Vector3_c *v3; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  __int64 v7; // d0
  float v8; // s1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  QAASpotStateController_o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C535A4 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_1C3E564(&QAASpotStateController_TypeInfo);
    byte_4C535A4 = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_C11FC0;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  v3 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.defaultPinObjectPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.defaultPinObjectPosition.fields.z = z;
  v6 = v3->static_fields;
  v7 = *(_QWORD *)&v6->zeroVector.fields.x;
  v8 = v6->zeroVector.fields.z;
  this->fields.isForward = 1;
  *(_QWORD *)&this->fields.changedUiRootPosition.fields.x = v7;
  this->fields.changedUiRootPosition.fields.z = v8;
  v9 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v9;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.areaInfoList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v12;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.listBillboardChildWidget, (int32_t)v12, v13, v14);
  v15 = (QAASpotStateController_o *)sub_1C3E7B0(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v15, 0);
  this->fields.stateController = v15;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.stateController, (int32_t)v15, v16, v17);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BlankEarthPoint__ActivateEachComponent(bool value, UnityEngine_Component_array *targets, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *v9; // x20

  if ( (byte_4C5359E & 1) == 0 )
  {
    sub_1C3E564(&System_Action_Component__TypeInfo);
    sub_1C3E564(&Method_BasicHelper_ExcludeNull_Component___);
    sub_1C3E564(&Method_BasicHelper_ForEach_Component___);
    sub_1C3E564(&Method_BlankEarthPoint___c__DisplayClass106_0__ActivateEachComponent_b__0__);
    sub_1C3E564(&BlankEarthPoint___c__DisplayClass106_0_TypeInfo);
    byte_4C5359E = 1;
  }
  v5 = sub_1C3E7B0(BlankEarthPoint___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C3E7C0(v6, v7);
  *(_BYTE *)(v5 + 16) = value;
  v8 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)targets,
         (const MethodInfo_30E3764 *)Method_BasicHelper_ExcludeNull_Component___);
  v9 = (System_Action_object__o *)sub_1C3E7B0(System_Action_Component__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthPoint___c__DisplayClass106_0__ActivateEachComponent_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_30E5A30 *)Method_BasicHelper_ForEach_Component___);
}


void BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BlankEarthPoint_OffsetTargetObject_array *v10; // x8
  __int64 v11; // x21
  unsigned __int64 v12; // x22
  unsigned __int64 max_length_low; // x9
  BlankEarthPoint_OffsetTargetObject_o *v14; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  UnityEngine_Object_o *anim; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  System_Object_array *v21; // x1
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C53595 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_AnimationState___);
    sub_1C3E564(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78207768);
    sub_1C3E564(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__AddRange__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    this = (BlankEarthPoint_o *)sub_1C3E564(&UnityEngine_Vector3___TypeInfo);
    byte_4C53595 = 1;
  }
  uiBillboardTransforms = v2->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v4 = 0;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
LABEL_45:
        sub_1C3E7C8(this, method);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v4];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_30F0F64 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____78207768);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v2->fields.uiBillboardTransforms;
          ++v4;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_44;
    }
  }
  offsetTargetObjects = v2->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v7 = sub_1C3E60C(UnityEngine_Vector3___TypeInfo, LODWORD(offsetTargetObjects->max_length));
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v7;
    sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.defaultLocalPosOffsetTargetObjects, v7, v8, v9);
    v10 = v2->fields.offsetTargetObjects;
    if ( !v10 )
      goto LABEL_44;
    v11 = 0;
    v12 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v10->max_length);
      if ( (__int64)v12 >= (int)max_length_low )
        break;
      if ( v12 >= max_length_low )
        goto LABEL_45;
      v14 = v10->m_Items[v12];
      if ( v14 )
      {
        this = (BlankEarthPoint_o *)v14->fields.targetObject;
        if ( !this )
          goto LABEL_44;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_44;
        if ( v12 >= LODWORD(defaultLocalPosOffsetTargetObjects->max_length) )
          goto LABEL_45;
        defaultLocalPosOffsetTargetObjects->m_Items[v11] = localPosition;
        v10 = v2->fields.offsetTargetObjects;
      }
      ++v12;
      ++v11;
      if ( !v10 )
        goto LABEL_44;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
LABEL_44:
    sub_1C3E7C0(this, method);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anim, 0, 0) )
  {
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_3128D28 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v21 = System_Linq_Enumerable__ToArray_object_(
            v20,
            (const MethodInfo_31391E8 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v22 = Method_System_Array_Empty_AnimationState___;
    v23 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v23 )
    {
      sub_1C8ECD4(Method_System_Array_Empty_AnimationState___);
      v23 = v22[7];
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C8EC78(inited);
    if ( !*(_DWORD *)(v24 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v24);
    v25 = *(_QWORD *)(v22[7] + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C8EC78(inited);
    v21 = **(System_Object_array ***)(v25 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v21;
  sub_1C3E508((CGThumbnailListItem_o *)&v2->fields.animationStateArray, (int32_t)v21, v17, v18);
  pinObject = (UnityEngine_Object_o *)v2->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0, 0) )
  {
    this = (BlankEarthPoint_o *)v2->fields.pinObject;
    if ( this )
    {
      this = (BlankEarthPoint_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( this )
      {
        v2->fields.defaultPinObjectPosition = UnityEngine_Transform__get_localPosition(
                                                (UnityEngine_Transform_o *)this,
                                                0);
        goto LABEL_43;
      }
    }
    goto LABEL_44;
  }
LABEL_43:
  z = v2->fields.defaultPinObjectPosition.fields.z;
  *(_QWORD *)&v2->fields.changedUiRootPosition.fields.x = *(_QWORD *)&v2->fields.defaultPinObjectPosition.fields.x;
  v2->fields.changedUiRootPosition.fields.z = z;
}


void BlankEarthPoint__ChangeSpotImage(BlankEarthPoint_o *this, const MethodInfo *method)
{
  ;
}


void BlankEarthPoint__ChangeState(
        BlankEarthPoint_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v6; // x1
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_1C3E508(
    (CGThumbnailListItem_o *)&this->fields.stateEndAct,
    (int32_t)finishCallback,
    (int32_t)finishCallback,
    method);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1C3E7C0(0, v6);
  QAASpotStateController__SetState(stateController, state, 0);
}


System_Collections_IEnumerator_o *BlankEarthPoint__CoPlayAnimUntilFinish(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C535A2 & 1) == 0 )
  {
    sub_1C3E564(&BlankEarthPoint__CoPlayAnimUntilFinish_d__116_TypeInfo);
    byte_4C535A2 = 1;
  }
  v7 = sub_1C3E7B0(BlankEarthPoint__CoPlayAnimUntilFinish_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v10, v11);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *BlankEarthPoint__GetAnimName(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v6; // x0

  if ( (byte_4C535A3 & 1) == 0 )
  {
    sub_1C3E564(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4C535A3 = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0,
               (const MethodInfo_30E8010 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
  {
    return UnityEngine_AnimationState__get_name((UnityEngine_AnimationState_o *)v6, 0);
  }
  else
  {
    return 0;
  }
}


float BlankEarthPoint__GetContrast(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return 1.0;
}


int32_t BlankEarthPoint__GetCurrentAnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  UnityEngine_Object_o *v6; // x20
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  bool IsExistCommand; // w20
  const MethodInfo *v10; // x2
  int32_t v11; // w20
  BlankEarthSpotAddMaster_o *v12; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0

  if ( (byte_4C5359F & 1) == 0 )
  {
    sub_1C3E564(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C3E564(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_4C5359F = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C8EC78(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8EC78(v2);
  v6 = **(UnityEngine_Object_o ***)(v5 + 184);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    IsExistCommand = QuestAfterAction__IsExistCommand(
                       (QuestAfterAction_o *)Instance,
                       0,
                       this->fields._spotId_k__BackingField,
                       0);
  }
  else
  {
    IsExistCommand = 0;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v11 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, v10);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
LABEL_21:
    sub_1C3E7C0(Instance, v8);
  v12 = (BlankEarthSpotAddMaster_o *)Instance;
  if ( BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0)
    && (PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                                   v12,
                                   1,
                                   this->fields._spotId_k__BackingField,
                                   v11,
                                   0,
                                   0)) != 0 )
  {
    return PrioredAvailableEntity->fields.targetId;
  }
  else
  {
    return -1;
  }
}


int32_t BlankEarthPoint__GetDispType(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    return bSpotInfo->fields.dispType;
  else
    return 0;
}


float BlankEarthPoint__GetDotXYZ(BlankEarthPoint_o *this, UnityEngine_Vector3_o *vec, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Component_o *earthCore; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v11; // x0
  float v12; // s8
  float v13; // s9
  float v14; // s10
  float result; // s0
  UnityEngine_GameObject_o *v16; // x0
  float v17; // s8
  float v18; // s9
  float v19; // s10
  float v20; // s11
  float v21; // s12
  float v22; // s13
  float v23; // s8
  float v24; // s9
  float v25; // s10
  float v26; // s0
  float v27; // s8
  float v28; // s9
  float v29; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v31; // s12
  float v32; // s13
  float v33; // s14
  float v34; // s2
  float v35; // s0
  float v36; // s1
  float v37; // s2
  struct UnityEngine_Vector3_StaticFields *v38; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  earthCore = (UnityEngine_Component_o *)this->fields.earthCore;
  if ( !earthCore )
    goto LABEL_24;
  x = Position.fields.x;
  y = Position.fields.y;
  z = Position.fields.z;
  v11 = UnityEngine_Component__get_gameObject(earthCore, 0);
  v40 = GameObjectExtensions__GetPosition(v11, 0);
  v12 = x - v40.fields.x;
  v13 = y - v40.fields.y;
  v14 = z - v40.fields.z;
  v41 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0);
  vec->fields.x = v12 - v41.fields.x;
  vec->fields.y = v13 - v41.fields.y;
  vec->fields.z = v14 - v41.fields.z;
  result = 1.0;
  if ( this->fields._spotOnType_k__BackingField == 1 )
    return result;
  earthCore = (UnityEngine_Component_o *)this->fields.earthCamera;
  if ( !earthCore )
LABEL_24:
    sub_1C3E7C0(earthCore, v6);
  v16 = UnityEngine_Component__get_gameObject(earthCore, 0);
  v42 = GameObjectExtensions__GetPosition(v16, 0);
  v17 = v42.fields.x;
  v18 = v42.fields.y;
  v19 = v42.fields.z;
  v43 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0);
  v20 = v43.fields.x;
  v21 = v43.fields.y;
  v22 = v43.fields.z;
  if ( !byte_4C506A4 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A4 = 1;
  }
  v23 = v17 - v20;
  v24 = v18 - v21;
  v25 = v19 - v22;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = sqrtf((float)(v25 * v25) + (float)((float)(v23 * v23) + (float)(v24 * v24)));
  if ( v26 <= 0.00001 )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v27 = static_fields->zeroVector.fields.x;
    v28 = static_fields->zeroVector.fields.y;
    v29 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v27 = v23 / v26;
    v28 = v24 / v26;
    v29 = v25 / v26;
  }
  v31 = vec->fields.x;
  v32 = vec->fields.y;
  v33 = vec->fields.z;
  if ( !byte_4C506A4 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = sqrtf((float)(v33 * v33) + (float)((float)(v31 * v31) + (float)(v32 * v32)));
  if ( v34 <= 0.00001 )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    v38 = UnityEngine_Vector3_TypeInfo->static_fields;
    v35 = v38->zeroVector.fields.x;
    v36 = v38->zeroVector.fields.y;
    v37 = v38->zeroVector.fields.z;
  }
  else
  {
    v35 = v31 / v34;
    v36 = v32 / v34;
    v37 = v33 / v34;
  }
  vec->fields.x = v35;
  vec->fields.y = v36;
  result = (float)(v29 * v37) + (float)((float)(v27 * v35) + (float)(v28 * v36));
  vec->fields.z = v37;
  return result;
}


UnityEngine_Vector3_o BlankEarthPoint__GetPinObjectDefaultLocalPosition(
        BlankEarthPoint_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.defaultPinObjectPosition.fields.x;
  y = this->fields.defaultPinObjectPosition.fields.y;
  z = this->fields.defaultPinObjectPosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o BlankEarthPoint__GetSonarPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sonarPoint; // x20
  __int64 v4; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53594 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53594 = 1;
  }
  sonarPoint = (UnityEngine_Object_o *)this->fields.sonarPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(sonarPoint, 0, 0) )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v9 = this->fields.sonarPoint;
    if ( !v9 )
      sub_1C3E7C0(0, v4);
    *(UnityEngine_Vector3_o *)&x = UnityEngine_Transform__get_localPosition(v9, 0);
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o BlankEarthPoint__GetSpotNameplatePos(BlankEarthPoint_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.spotNamePos.fields.x;
  y = this->fields.spotNamePos.fields.y;
  z = this->fields.spotNamePos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool BlankEarthPoint__HasSonarPoint(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *sonarPoint; // x19

  if ( (byte_4C53593 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53593 = 1;
  }
  sonarPoint = (UnityEngine_Object_o *)this->fields.sonarPoint;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(sonarPoint, 0, 0);
}


bool BlankEarthPoint__IsRevealDispType(BlankEarthPoint_o *this, int32_t dispType, const MethodInfo *method)
{
  return dispType != 0;
}


void BlankEarthPoint__LateUpdate(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  float DotXYZ; // s8
  _BOOL4 isForward; // w24
  UnityEngine_Object_o *earthCamera; // x21
  float x; // s9
  UnityEngine_Object_o *pointCol; // x21
  UnityEngine_Camera_o *v11; // x21
  __int64 transform; // x0
  __int64 v13; // x1
  UnityEngine_Object_o *uiRoot; // x21
  const MethodInfo *v15; // x1
  UnityEngine_Transform_o *v16; // x21
  UnityEngine_Transform_o *v17; // x22
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v19; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v21; // x27
  UnityEngine_Object_o *v22; // x21
  struct UnityEngine_Transform_array *v23; // x8
  UnityEngine_Transform_o *v24; // x21
  int32_t v25; // w20
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v28; // x22
  __int64 v29; // x25
  unsigned __int64 v30; // x9
  unsigned __int64 v31; // x26
  __int64 v32; // x8
  UnityEngine_Transform_o *v33; // x20
  float v34; // s13
  float y; // s10
  UnityEngine_Object_o *pinObject; // x21
  float v37; // s11
  float v38; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v40; // s10
  struct UnityEngine_Vector3_array *v41; // x8
  float v42; // s12
  UnityEngine_Object_o *v43; // x21
  float v44; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v46; // x9
  float *v47; // x8
  UnityEngine_Object_o *v48; // x20
  const MethodInfo *v49; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  long double v51; // q0
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v54; // s4
  float v55; // s2
  float v56; // s3
  float v57; // s2
  UnityEngine_Object_o *v58; // x20
  const MethodInfo *v59; // x2
  UnityEngine_Vector3_o v60; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C53596 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C53596 = 1;
  }
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v60.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v60.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v60, v2);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !byte_4C506A1 )
  {
    sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
    byte_4C506A1 = 1;
  }
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(earthCamera, 0, 0) )
  {
    pointCol = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(pointCol, 0, 0) )
    {
      v11 = this->fields.earthCamera;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_123;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( !v11 )
        goto LABEL_123;
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_71147840(v11, position, 0));
      if ( x < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0, 0) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v15);
    transform = (__int64)this->fields.earthCore;
    if ( !transform )
      goto LABEL_123;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !this->fields._spotOnType_k__BackingField )
    {
      transform = (__int64)this->fields.uiRoot;
      if ( !transform )
        goto LABEL_123;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !this->fields.earthCore )
        goto LABEL_123;
      v16 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0);
      v17 = (UnityEngine_Transform_o *)transform;
      if ( !byte_4C506A9 )
      {
        transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A9 = 1;
      }
      if ( !v16 )
        goto LABEL_123;
      UnityEngine_Transform__LookAt(v16, v17, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    }
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v19 = 4;
      while ( 1 )
      {
        max_length_low = LODWORD(uiBillboardTransforms->max_length);
        v21 = v19 - 4;
        if ( v19 - 4 >= (int)max_length_low )
          break;
        if ( v21 >= max_length_low )
          goto LABEL_124;
        v22 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v19);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        transform = UnityEngine_Object__op_Equality(v22, 0, 0);
        if ( (transform & 1) == 0 )
        {
          v23 = this->fields.uiBillboardTransforms;
          if ( !v23 )
            goto LABEL_123;
          if ( v21 >= LODWORD(v23->max_length) )
LABEL_124:
            sub_1C3E7C8(transform, v13);
          v24 = (UnityEngine_Transform_o *)*((_QWORD *)&v23->obj.klass + v19);
          if ( !byte_4C506A1 )
          {
            transform = sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
            byte_4C506A1 = 1;
          }
          if ( !v24 )
            goto LABEL_123;
          UnityEngine_Transform__set_eulerAngles(v24, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v19;
        if ( !uiBillboardTransforms )
          goto LABEL_123;
      }
      transform = (__int64)this->fields.listBillboardChildWidget;
      if ( !transform )
        goto LABEL_123;
      v25 = 0;
      while ( v25 < *(_DWORD *)(transform + 24) )
      {
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v25,
                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
        if ( !transform )
          goto LABEL_123;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_123;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0) )
        {
          transform = (__int64)this->fields.listBillboardChildWidget;
          if ( !transform )
            goto LABEL_123;
          transform = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)transform,
                                 v25,
                                 (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
          if ( !transform )
            goto LABEL_123;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 792LL))(
            transform,
            *(_QWORD *)(*(_QWORD *)transform + 800LL));
        }
        transform = (__int64)this->fields.listBillboardChildWidget;
        ++v25;
        if ( !transform )
          goto LABEL_123;
      }
    }
    offsetTargetObjects = this->fields.offsetTargetObjects;
    if ( offsetTargetObjects )
    {
      bSpotInfo = this->fields.bSpotInfo;
      if ( bSpotInfo )
      {
        if ( bSpotInfo->fields.dispType )
        {
          v28 = 0;
          v29 = 4;
          while ( 1 )
          {
            v30 = LODWORD(offsetTargetObjects->max_length);
            v31 = v29 - 4;
            if ( v29 - 4 >= (int)v30 )
              break;
            if ( v31 >= v30 )
              goto LABEL_124;
            v32 = *((_QWORD *)&offsetTargetObjects->obj.klass + v29);
            if ( v32 )
            {
              v33 = *(UnityEngine_Transform_o **)(v32 + 16);
              if ( !v33 )
                goto LABEL_123;
              v34 = *(float *)(v32 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v32 + 16), 0);
              y = lossyScale.fields.y;
              transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( !transform )
                goto LABEL_123;
              v63 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v37 = v63.fields.x;
              v38 = v63.fields.y;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(pinObject, 0, 0) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_123;
                if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
                {
                  transform = (__int64)this->fields.pinObject;
                  if ( !transform )
                    goto LABEL_123;
                  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
                  if ( !transform )
                    goto LABEL_123;
                  v64 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
                  v37 = v64.fields.x;
                  v38 = v64.fields.y;
                }
              }
              v65 = UnityEngine_Transform__get_position(v33, 0);
              v65.fields.y = (float)(v34 * y) + v38;
              v65.fields.x = v37;
              UnityEngine_Transform__set_position(v33, v65, 0);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_123;
              if ( v31 >= LODWORD(defaultLocalPosOffsetTargetObjects->max_length) )
                goto LABEL_124;
              v40 = defaultLocalPosOffsetTargetObjects->m_Items[v28].fields.x;
              localPosition = UnityEngine_Transform__get_localPosition(v33, 0);
              v41 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v41 )
                goto LABEL_123;
              if ( v31 >= LODWORD(v41->max_length) )
                goto LABEL_124;
              v42 = v41->m_Items[v28].fields.z;
              v43 = (UnityEngine_Object_o *)this->fields.pinObject;
              v44 = localPosition.fields.y;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality(v43, 0, 0) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_123;
                transform = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0);
                if ( (transform & 1) == 0 )
                {
                  notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
                  if ( notDisplayPinTargetOffset )
                  {
                    v46 = this->fields.offsetTargetObjects;
                    if ( !v46 )
                      goto LABEL_123;
                    if ( (unsigned int)notDisplayPinTargetOffset->max_length == LODWORD(v46->max_length) )
                    {
                      if ( v31 >= (unsigned int)notDisplayPinTargetOffset->max_length )
                        goto LABEL_124;
                      v47 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v29);
                      if ( !v47 )
                        goto LABEL_123;
                      v40 = v40 + v47[6];
                      v44 = v44 + v47[7];
                      v42 = v42 + v47[8];
                    }
                  }
                }
              }
              v67.fields.x = v40;
              v67.fields.y = v44;
              v67.fields.z = v42;
              UnityEngine_Transform__set_localPosition(v33, v67, 0);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v29;
            ++v28;
            if ( !offsetTargetObjects )
              goto LABEL_123;
          }
        }
      }
    }
  }
  if ( (isForward & ~this->fields.isForward) != 0 )
  {
    v48 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v48, 0, 0) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v49);
    this->fields.isDisp = 0;
  }
  else if ( !this->fields.isDisp && x >= 0.0 && this->fields.isForward )
  {
    v58 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v58, 0, 0) )
    {
      BlankEarthPoint__SetBtnColliderEnable(this, 1, v59);
      this->fields.isDisp = 1;
    }
  }
  uiRootWidget = (UnityEngine_Object_o *)this->fields.uiRootWidget;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRootWidget, 0, 0) )
  {
    dispSpriteDot = this->fields.dispSpriteDot;
    noDispSpriteDot = this->fields.noDispSpriteDot;
    transform = (__int64)this->fields.uiRootWidget;
    if ( dispSpriteDot <= noDispSpriteDot )
      v54 = this->fields.noDispSpriteDot;
    else
      v54 = this->fields.dispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v55 = this->fields.dispSpriteDot;
    else
      v55 = this->fields.noDispSpriteDot;
    if ( DotXYZ <= v54 )
      v56 = DotXYZ;
    else
      v56 = v54;
    if ( DotXYZ < v55 )
      v56 = v55;
    if ( transform )
    {
      v57 = (float)(v56 - v55) / (float)(v54 - v55);
      if ( dispSpriteDot >= noDispSpriteDot )
        *(float *)&v51 = v57;
      else
        *(float *)&v51 = 1.0 - v57;
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)transform + 440LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 448LL),
        v51);
      return;
    }
LABEL_123:
    sub_1C3E7C0(transform, v13);
  }
}


void BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4C5359D & 1) == 0 )
  {
    sub_1C3E564(&Method_BlankEarthPoint_OnClickSpot__);
    byte_4C5359D = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1C3E7C0(0, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, 0) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3E57C(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3E548(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1C3E7C0(0, method);
  BlankEarth__OnPress(earthCore, 0);
}


void BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_1C3E7C0(0, method);
  BlankEarth__OnRelease(earthCore, 0);
}


void BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_4C5359C & 1) == 0 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C5359C = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C50C86 )
  {
    sub_1C3E564(&TerminalSceneComponent_TypeInfo);
    byte_4C50C86 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventBgSp->klass;
  if ( !klass
    || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0
    || (TitleInfoControl__setBackBtnSprite(genericContainerHandle, 3, 1, 0),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0)
    || (BlankEarth__SetFocusPoint(
          (BlankEarth_o *)genericContainerHandle,
          this->fields._spotId_k__BackingField,
          this->fields._spotOnType_k__BackingField,
          0),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0) )
  {
    sub_1C3E7C0(genericContainerHandle, method);
  }
  BlankEarth__SetState((BlankEarth_o *)genericContainerHandle, 3, 0);
}


void BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthPoint__PlaySpotUniqueAnim(
        BlankEarthPoint_o *this,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  if ( isQuick )
  {
    BlankEarthPoint__SetAnimationToEnd(this, animIndex, (const MethodInfo *)isQuick);
    ActionExtensions__Call(finishCallback, 0);
  }
  else
  {
    this->fields.animIndex = animIndex;
    BlankEarthPoint__ChangeState(this, 9, finishCallback, (const MethodInfo *)finishCallback);
  }
}


void BlankEarthPoint__RevealOrConcealSpotAnim(
        BlankEarthPoint_o *this,
        int32_t dispType,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  bool v5; // zf
  int v6; // w8
  int v7; // w9
  int32_t v8; // w1

  if ( dispType )
  {
    if ( dispType == 2 )
    {
      v5 = !isQuick;
      v6 = 3;
      v7 = 6;
    }
    else
    {
      if ( dispType != 1 )
      {
        ActionExtensions__Call(finishCallback, 0);
        return;
      }
      v5 = !isQuick;
      v6 = 4;
      v7 = 7;
    }
  }
  else
  {
    v5 = !isQuick;
    v6 = 2;
    v7 = 5;
  }
  if ( v5 )
    v8 = v6;
  else
    v8 = v7;
  BlankEarthPoint__ChangeState(this, v8, finishCallback, (const MethodInfo *)finishCallback);
}


void BlankEarthPoint__SetAnimationToEnd(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_String_o *AnimName; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4C535A0 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C535A0 = 1;
  }
  AnimName = BlankEarthPoint__GetAnimName(this, index, method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  v7 = AnimName;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) && !System_String__IsNullOrEmpty(v7, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (UnityEngine_Animation__Rewind(Item, 0), (Item = this->fields.anim) == 0)
      || (UnityEngine_Animation__Play_71086848(Item, v7, 0), (Item = this->fields.anim) == 0)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0)) == 0 )
    {
      sub_1C3E7C0(Item, v8);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0);
  }
}


void BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 bSpotInfo; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct UISprite_o *loopIconSprite; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct UILabel_o *lastTimeLabel; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v20; // x2
  Il2CppObject *Master_object; // x0
  UnityEngine_Object_o *v22; // x21
  WarReleaseMaster_o *v23; // x20
  bool IsOpen; // w21
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppClass *klass; // x8
  WarReleaseEntity_o *OpenEntity; // x0
  UnityEngine_Object_o *v29; // x21
  struct MapControl_SpotInfo_o *v30; // x8
  int32_t freeQuestCount; // w22
  UnityEngine_Object_o *v32; // x21
  int32_t spotId_k__BackingField; // w21
  TerminalPramsManager_c *v34; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v36; // w21
  UILabel_o *v37; // x21
  UnityEngine_Object_o *v38; // x21
  struct MapControl_SpotInfo_o *v39; // x8
  int32_t questCount; // w23
  int32_t v41; // w21
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x24
  Il2CppClass *v45; // x8
  WarReleaseEntity_o *v46; // x0
  __int64 v47; // x1
  Il2CppClass *v48; // x8
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C53598 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Component___TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    sub_1C3E564(&StringLiteral_12297/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_4C53598 = 1;
  }
  memset(&v51, 0, sizeof(v51));
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_1C3E60C(UnityEngine_Component___TypeInfo, 4);
  if ( !bSpotInfo )
    goto LABEL_85;
  nextSprite = this->fields.nextSprite;
  v10 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_1C3E6A0(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_86;
  v10->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_1C3E508((CGThumbnailListItem_o *)v10->m_Items, (int32_t)nextSprite, v7, v8);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_1C3E6A0(this->fields.loopIconSprite, v10->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( LODWORD(v10->max_length) <= 1 )
    goto LABEL_86;
  v10->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[1], (int32_t)loopIconSprite, v11, v12);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_1C3E6A0(this->fields.lastTimeLabel, v10->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_87;
  }
  if ( LODWORD(v10->max_length) <= 2 )
    goto LABEL_86;
  v10->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[2], (int32_t)lastTimeLabel, v14, v15);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_1C3E6A0(this->fields.noticeNumberComp, v10->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_87:
      v49 = sub_1C3E7E4();
      sub_1C3E68C(v49, 0);
    }
  }
  if ( LODWORD(v10->max_length) <= 3 )
LABEL_86:
    sub_1C3E7C8(bSpotInfo, v6);
  v10->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_1C3E508((CGThumbnailListItem_o *)&v10->m_Items[3], (int32_t)noticeNumberComp, v17, v18);
  BlankEarthPoint__ActivateEachComponent(0, v10, v20);
  if ( !isDisp )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v22 = (UnityEngine_Object_o *)this->fields.nextSprite;
  v23 = (WarReleaseMaster_o *)Master_object;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0);
    if ( !this->fields.areaInfoList )
      goto LABEL_85;
    IsOpen = bSpotInfo;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v50,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v51 = v50;
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v51,
              (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v25 )
        break;
      if ( !v51.fields._current )
        sub_1C3E7C0(v25, v26);
      klass = v51.fields._current[7].klass;
      if ( !klass )
        sub_1C3E7C0(v25, v26);
      IsOpen = 0;
      if ( LOBYTE(klass->_1.byval_arg.bits) )
      {
        if ( !v23 )
          sub_1C3E7C0(v25, v26);
        OpenEntity = WarReleaseMaster__GetOpenEntity(v23, HIDWORD(klass->_1.name), 0);
        IsOpen = 1;
        if ( OpenEntity )
          IsOpen = WarReleaseEntity__IsOpen(OpenEntity, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v51,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, IsOpen, 0);
  }
  v29 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v29, 0, 0);
  if ( (bSpotInfo & 1) != 0 )
  {
    v30 = this->fields.bSpotInfo;
    if ( !v30 )
      goto LABEL_85;
    freeQuestCount = v30->fields.freeQuestCount;
    v32 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v32, 0, 0) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C5362A )
      {
        sub_1C3E564(&TerminalPramsManager_TypeInfo);
        byte_4C5362A = 1;
      }
      v34 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v34 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v34->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v36 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_85;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0);
      if ( !bSpotInfo )
        goto LABEL_85;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v36, 0);
      v37 = this->fields.lastTimeLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12297/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0);
      if ( !v37 )
        goto LABEL_85;
      UILabel__set_text(v37, (System_String_o *)bSpotInfo, 0);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_85;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0);
    if ( !bSpotInfo )
      goto LABEL_85;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0);
  }
  v38 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bSpotInfo = UnityEngine_Object__op_Inequality(v38, 0, 0);
  if ( (bSpotInfo & 1) != 0 )
  {
    v39 = this->fields.bSpotInfo;
    if ( v39 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v39->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v50,
          (System_Collections_Generic_List_object__o *)bSpotInfo,
          (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v41 = questCount;
        v51 = v50;
        while ( 1 )
        {
          v42 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v51,
                  (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v42 )
            break;
          current = v51.fields._current;
          if ( !v51.fields._current )
            sub_1C3E7C0(v42, v43);
          v45 = v51.fields._current[7].klass;
          if ( !v45 )
            sub_1C3E7C0(v42, v43);
          if ( !v23 )
            sub_1C3E7C0(v42, v43);
          v46 = WarReleaseMaster__GetOpenEntity(v23, HIDWORD(v45->_1.name), 0);
          if ( v46 )
          {
            v46 = (WarReleaseEntity_o *)WarReleaseEntity__IsOpen(v46, 0);
            if ( ((unsigned __int8)v46 & 1) == 0 )
              continue;
          }
          v48 = current[7].klass;
          if ( !v48 )
            sub_1C3E7C0(v46, v47);
          v41 += LODWORD(v48->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v51,
          (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        bSpotInfo = (__int64)this->fields.noticeNumberComp;
        if ( bSpotInfo )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)bSpotInfo, v41, 0);
          if ( v41 )
            return;
          bSpotInfo = (__int64)this->fields.noticeNumberComp;
          if ( bSpotInfo )
          {
            bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0);
            if ( bSpotInfo )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_85:
    sub_1C3E7C0(bSpotInfo, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthPoint__SetBtnColliderEnable(BlankEarthPoint_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_Collider_o *pointCol; // x0

  pointCol = (UnityEngine_Collider_o *)this->fields.pointCol;
  if ( !pointCol )
    sub_1C3E7C0(0, isEnabled);
  UnityEngine_Collider__set_enabled(pointCol, !this->fields.isForceTouchDisabled && isEnabled, 0);
}


void BlankEarthPoint__SetChangedUiRootLocalPosition(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  this->fields.changedUiRootPosition = position;
}


void BlankEarthPoint__SetContrast(BlankEarthPoint_o *this, float val, const MethodInfo *method)
{
  ;
}


void BlankEarthPoint__SetDispType(BlankEarthPoint_o *this, int32_t dispType, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    bSpotInfo->fields.dispType = dispType;
}


void BlankEarthPoint__SetDispUIDotRange(
        BlankEarthPoint_o *this,
        float inputDispUiDot,
        float inputNoDispUiDot,
        const MethodInfo *method)
{
  this->fields.dispSpriteDot = inputDispUiDot;
  this->fields.noDispSpriteDot = inputNoDispUiDot;
}


void BlankEarthPoint__SetEarthObj(
        BlankEarthPoint_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        BlankEarth_o *obj,
        UnityEngine_Camera_o *camera,
        UnityEngine_GameObject_o *coreRoot,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextSprite; // x24
  QuestTree_o *Instance; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UISprite_o *v16; // x24
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x24
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v30; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v38; // x0
  struct System_Object_array *items; // x9
  _QWORD *v40; // x10
  __int64 v41; // x11
  Il2CppClass **v42; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  float v47; // s2
  float v48; // s0
  float v49; // s1
  float v50; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v52; // x0
  const MethodInfo *v53; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v55; // x2
  const MethodInfo *v56; // x2
  const MethodInfo *v57; // x2
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C53597 & 1) == 0 )
  {
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C3E564(&StringLiteral_20254/*"icon_spot_next"*/);
    byte_4C53597 = 1;
  }
  memset(&v59, 0, sizeof(v59));
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v16 = this->fields.nextSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v16, (System_String_o *)StringLiteral_20254/*"icon_spot_next"*/, 0);
  }
  if ( !spotEnt )
    goto LABEL_41;
  *(int32x2_t *)&this->fields._warId_k__BackingField = vrev64_s32(*(int32x2_t *)&spotEnt->fields.id);
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._spotName_k__BackingField, (int32_t)name, v14, v15);
  this->fields._spotOnType_k__BackingField = spotEnt->fields.onObjectType;
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.earthCore, (int32_t)obj, v19, v20);
  this->fields.earthCamera = camera;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.earthCamera, (int32_t)camera, v21, v22);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39FFA98 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_41;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0);
  this->fields.bSpotInfo = SpotInfo;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.bSpotInfo, (int32_t)SpotInfo, v24, v25);
  this->fields.earthCoreRoot = coreRoot;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.earthCoreRoot, (int32_t)coreRoot, v26, v27);
  areaInfoList = this->fields.areaInfoList;
  *(_QWORD *)&this->fields._DefaultDispSpriteDot_k__BackingField = *(_QWORD *)&this->fields.dispSpriteDot;
  if ( !areaInfoList )
    goto LABEL_28;
  size = areaInfoList->fields._size;
  v30 = areaInfoList->fields._version + 1;
  areaInfoList->fields._size = 0;
  areaInfoList->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0
    || (Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0 )
  {
LABEL_41:
    sub_1C3E7C0(Instance, v13);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)Instance,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  v59 = v58;
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v59,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v32 )
      break;
    current = v59.fields._current;
    if ( !v59.fields._current )
      sub_1C3E7C0(v32, v33);
    klass = v59.fields._current[7].klass;
    if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
    {
      v38 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
      if ( !v38 )
        sub_1C3E7C0(0, v33);
      items = v38->fields._items;
      v40 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
      ++v38->fields._version;
      if ( !items )
        sub_1C3E7C0(v38, v33);
      v41 = v38->fields._size;
      if ( (unsigned int)v41 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v38,
          current,
          *(const MethodInfo_37B5460 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v42 = &items->obj.klass + v41;
        v38->fields._size = v41 + 1;
        v42[4] = (Il2CppClass *)current;
        sub_1C3E508((CGThumbnailListItem_o *)(v42 + 4), (int32_t)current, v34, v35);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v59,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_4C506A4 )
  {
    sub_1C3E564(&System_Math_TypeInfo);
    byte_4C506A4 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v47 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v47 <= 0.00001 )
  {
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v48 = static_fields->zeroVector.fields.x;
    v49 = static_fields->zeroVector.fields.y;
    v50 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v48 = x / v47;
    v49 = y / v47;
    v50 = z / v47;
  }
  v61.fields.x = -v48;
  v61.fields.y = -v49;
  v61.fields.z = -v50;
  v62 = UnityEngine_Quaternion__LookRotation_71280408(v61, 0);
  this->fields._FocusQua_k__BackingField = v62;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v62, 0);
  v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v52, 0);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v53);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v55);
  BlankEarthPoint__UpdateDisp(this, 1, v56);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v57);
}


void BlankEarthPoint__SetGrandSetting(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  this->fields.isForceTouchDisabled = 1;
  BlankEarthPoint__SetBtnColliderEnable(this, 0, v2);
  BlankEarthPoint__SetBlankEarthSpotUI(this, 0, v4);
}


void BlankEarthPoint__SetTouchType(BlankEarthPoint_o *this, int32_t touchType, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    bSpotInfo->fields.touchType = touchType;
}


void BlankEarthPoint__ShowQAADispEffect(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *qaaDispEffObj; // x20
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  UnityEngine_Object_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C535A1 & 1) == 0 )
  {
    sub_1C3E564(&Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C535A1 = 1;
  }
  qaaDispEffObj = (UnityEngine_Object_o *)this->fields.qaaDispEffObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(qaaDispEffObj, 0, 0) )
  {
    spotDispEffectObj = (UnityEngine_Object_o *)this->fields.spotDispEffectObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    p_spotDispEffectObj = &this->fields.spotDispEffectObj;
    if ( UnityEngine_Object__op_Inequality(spotDispEffectObj, 0, 0) )
    {
      v6 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71341564(v6, 0);
      *p_spotDispEffectObj = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.spotDispEffectObj, 0, v7, v8);
    }
    v9 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C3E7C0(0, v11);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v13 = UnityEngine_Object__Instantiate_object__51929056(
            v9,
            transform,
            (const MethodInfo_3185FE0 *)Method_UnityEngine_Object_Instantiate_GameObject____78272896);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v13, this->fields.spotRevealedEffectOffset, 0);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v13, 0);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v13;
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.spotDispEffectObj, (int32_t)v13, v14, v15);
  }
}


void BlankEarthPoint__StateQaaEnd(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *stateEndAct; // x19

  stateEndAct = this->fields.stateEndAct;
  BlankEarthPoint__ChangeState(this, 1, 0, v2);
  ActionExtensions__Call(stateEndAct, 0);
}


void BlankEarthPoint__SwitchDispUIRoot(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_4C5359B & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5359B = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0, 0) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_1C3E7C0(0, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0);
  }
}


void BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_1C3E7C0(0, method);
  QAASpotStateController__Update(stateController, 0);
}


void BlankEarthPoint__UpdateAreaInfoList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v5; // w9
  struct BlankEarth_o *earthCore; // x8
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x8
  Il2CppClass *klass; // x9
  System_Collections_Generic_List_object__o *v14; // x0
  struct System_Object_array *items; // x9
  _QWORD *v16; // x10
  __int64 v17; // x11
  Il2CppClass **v18; // x9
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4C53599 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    this = (BlankEarthPoint_o *)sub_1C3E564(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_4C53599 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  areaInfoList = v2->fields.areaInfoList;
  if ( areaInfoList )
  {
    size = areaInfoList->fields._size;
    v5 = areaInfoList->fields._version + 1;
    areaInfoList->fields._size = 0;
    areaInfoList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0);
    earthCore = v2->fields.earthCore;
    if ( !earthCore
      || (ordealCallFolderInfo = earthCore->fields.ordealCallFolderInfo) == 0
      || (this = (BlankEarthPoint_o *)ordealCallFolderInfo->fields.questInfoList) == 0 )
    {
      sub_1C3E7C0(this, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v20 = v19;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v20,
             (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v8 )
        break;
      current = v20.fields._current;
      if ( !v20.fields._current )
        sub_1C3E7C0(v8, v9);
      klass = v20.fields._current[7].klass;
      if ( klass && v2->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
      {
        v14 = (System_Collections_Generic_List_object__o *)v2->fields.areaInfoList;
        if ( !v14 )
          sub_1C3E7C0(0, v9);
        items = v14->fields._items;
        v16 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__;
        ++v14->fields._version;
        if ( !items )
          sub_1C3E7C0(v14, v9);
        v17 = v14->fields._size;
        if ( (unsigned int)v17 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v14,
            current,
            *(const MethodInfo_37B5460 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + v17;
          v14->fields._size = v17 + 1;
          v18[4] = (Il2CppClass *)current;
          sub_1C3E508((CGThumbnailListItem_o *)(v18 + 4), (int32_t)current, v10, v11);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
  }
}


void BlankEarthPoint__UpdateDisp(BlankEarthPoint_o *this, bool isForce, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8
  int32_t dispType; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float *p_y; // x9
  float *p_z; // x10
  bool v10; // w21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields._mtIsUpdate_k__BackingField && !isForce )
    return;
  bSpotInfo = this->fields.bSpotInfo;
  if ( !bSpotInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    goto LABEL_7;
  }
  dispType = bSpotInfo->fields.dispType;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !dispType )
  {
LABEL_7:
    if ( !byte_4C506A1 )
    {
      sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
      byte_4C506A1 = 1;
    }
    v10 = 0;
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    p_y = &static_fields->zeroVector.fields.y;
    p_z = &static_fields->zeroVector.fields.z;
    goto LABEL_10;
  }
  static_fields = (struct UnityEngine_Vector3_StaticFields *)&this->fields._selfScale_k__BackingField;
  p_y = &this->fields._selfScale_k__BackingField.fields.y;
  p_z = &this->fields._selfScale_k__BackingField.fields.z;
  v10 = 1;
LABEL_10:
  v14.fields.z = *p_z;
  v14.fields.y = *p_y;
  v14.fields.x = static_fields->zeroVector.fields.x;
  GameObjectExtensions__SetLocalScale(gameObject, v14, 0);
  if ( !v10 )
  {
    anim = this->fields.anim;
    if ( !anim )
      sub_1C3E7C0(0, v11);
    UnityEngine_Animation__Stop(anim, 0);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v12);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


void BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  struct UnityEngine_Vector3_StaticFields *p_changedUiRootPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C5359A & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C5359A = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0, 0) )
  {
    v5 = this->fields.pinObject;
    if ( !v5 )
      sub_1C3E7C0(0, v4);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v5, 0);
    uiRoot = this->fields.uiRoot;
    if ( activeSelf )
    {
      p_changedUiRootPosition = (struct UnityEngine_Vector3_StaticFields *)&this->fields.changedUiRootPosition;
      p_y = &this->fields.changedUiRootPosition.fields.y;
      p_z = &this->fields.changedUiRootPosition.fields.z;
    }
    else
    {
      if ( !byte_4C506A1 )
      {
        sub_1C3E564(&UnityEngine_Vector3_TypeInfo);
        byte_4C506A1 = 1;
      }
      p_changedUiRootPosition = UnityEngine_Vector3_TypeInfo->static_fields;
      p_y = &p_changedUiRootPosition->zeroVector.fields.y;
      p_z = &p_changedUiRootPosition->zeroVector.fields.z;
    }
    v11.fields.y = *p_y;
    v11.fields.x = p_changedUiRootPosition->zeroVector.fields.x;
    v11.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(uiRoot, v11, 0);
  }
}


int32_t BlankEarthPoint__get_AnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.animIndex;
}


float BlankEarthPoint__get_DefaultDispSpriteDot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._DefaultDispSpriteDot_k__BackingField;
}


float BlankEarthPoint__get_DefaultNoDispSpriteDot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._DefaultNoDispSpriteDot_k__BackingField;
}


UnityEngine_Quaternion_o BlankEarthPoint__get_FocusQua(BlankEarthPoint_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  float w; // s3
  UnityEngine_Quaternion_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  x = this->fields._FocusQua_k__BackingField.fields.x;
  y = this->fields._FocusQua_k__BackingField.fields.y;
  z = this->fields._FocusQua_k__BackingField.fields.z;
  w = this->fields._FocusQua_k__BackingField.fields.w;
  result.fields.w = w;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


bool BlankEarthPoint__get_mRequestDontUpdateDisp(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._mRequestDontUpdateDisp_k__BackingField;
}


bool BlankEarthPoint__get_mtIsUpdate(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._mtIsUpdate_k__BackingField;
}


UnityEngine_Vector3_o BlankEarthPoint__get_selfScale(BlankEarthPoint_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields._selfScale_k__BackingField.fields.x;
  y = this->fields._selfScale_k__BackingField.fields.y;
  z = this->fields._selfScale_k__BackingField.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t BlankEarthPoint__get_spotId(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotId_k__BackingField;
}


System_String_o *BlankEarthPoint__get_spotName(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotName_k__BackingField;
}


int32_t BlankEarthPoint__get_spotOnType(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotOnType_k__BackingField;
}


UnityEngine_GameObject_o *BlankEarthPoint__get_tweenTarget(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
}


int32_t BlankEarthPoint__get_warId(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._warId_k__BackingField;
}


void BlankEarthPoint__set_DefaultDispSpriteDot(BlankEarthPoint_o *this, float value, const MethodInfo *method)
{
  this->fields._DefaultDispSpriteDot_k__BackingField = value;
}


void BlankEarthPoint__set_DefaultNoDispSpriteDot(BlankEarthPoint_o *this, float value, const MethodInfo *method)
{
  this->fields._DefaultNoDispSpriteDot_k__BackingField = value;
}


void BlankEarthPoint__set_FocusQua(BlankEarthPoint_o *this, UnityEngine_Quaternion_o value, const MethodInfo *method)
{
  this->fields._FocusQua_k__BackingField = value;
}


void BlankEarthPoint__set_mRequestDontUpdateDisp(BlankEarthPoint_o *this, bool value, const MethodInfo *method)
{
  this->fields._mRequestDontUpdateDisp_k__BackingField = value;
}


void BlankEarthPoint__set_mtIsUpdate(BlankEarthPoint_o *this, bool value, const MethodInfo *method)
{
  this->fields._mtIsUpdate_k__BackingField = value;
}


void BlankEarthPoint__set_selfScale(BlankEarthPoint_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  this->fields._selfScale_k__BackingField = value;
}


void BlankEarthPoint__set_spotId(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spotId_k__BackingField = value;
}


void BlankEarthPoint__set_spotName(BlankEarthPoint_o *this, System_String_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._spotName_k__BackingField = value;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields._spotName_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BlankEarthPoint__set_spotOnType(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spotOnType_k__BackingField = value;
}


void BlankEarthPoint__set_warId(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._warId_k__BackingField = value;
}


void BlankEarthPoint_NotDisplayPinTargetOffset___ctor(
        BlankEarthPoint_NotDisplayPinTargetOffset_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthPoint_OffsetTargetObject___ctor(BlankEarthPoint_OffsetTargetObject_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthPoint__CoPlayAnimUntilFinish_d__116___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BlankEarthPoint__CoPlayAnimUntilFinish_d__116__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *v3; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  System_String_o *AnimName; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_4C535A5 & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *)sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C535A5 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *)UnityEngine_Animation__get_Item(
                                                                (UnityEngine_Animation_o *)this,
                                                                v3->fields._animName_5__2,
                                                                0);
    if ( !this )
      goto LABEL_24;
    if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0) < 1.0 )
    {
      totalTime_5__3 = v3->fields._totalTime_5__3;
      if ( totalTime_5__3 <= 10.0 )
      {
        v3->fields._totalTime_5__3 = totalTime_5__3 + UnityEngine_Time__get_deltaTime(0);
LABEL_19:
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0) )
          {
            v3->fields.__2__current = 0;
            p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
            sub_1C3E508(p__2__current, 0, v11, v12);
            result = 1;
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_1C3E7C0(this, method);
      }
    }
LABEL_22:
    ActionExtensions__Call(v3->fields.finishCallback, 0);
    return 0;
  }
  if ( !_1__state )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    AnimName = BlankEarthPoint__GetAnimName(_4__this, v3->fields.index, v2);
    v3->fields._animName_5__2 = AnimName;
    sub_1C3E508((CGThumbnailListItem_o *)&v3->fields._animName_5__2, (int32_t)AnimName, v7, v8);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(anim, 0, 0) && !System_String__IsNullOrEmpty(v3->fields._animName_5__2, 0) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Play_71086848((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0);
      v3->fields._totalTime_5__3 = 0.0;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  return 0;
}


Il2CppObject *BlankEarthPoint__CoPlayAnimUntilFinish_d__116__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__116__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__116_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
}


Il2CppObject *BlankEarthPoint__CoPlayAnimUntilFinish_d__116__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BlankEarthPoint__CoPlayAnimUntilFinish_d__116__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__116_o *this,
        const MethodInfo *method)
{
  ;
}


void BlankEarthPoint___c__DisplayClass106_0___ctor(
        BlankEarthPoint___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthPoint___c__DisplayClass106_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass106_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass106_0_o *v3; // x19

  if ( !x
    || (v3 = this, (this = (BlankEarthPoint___c__DisplayClass106_0_o *)UnityEngine_Component__get_gameObject(x, 0)) == 0) )
  {
    sub_1C3E7C0(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0);
}