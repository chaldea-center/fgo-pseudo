void BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  int v3; // w8
  System_Collections_Generic_List_MapControl_QuestInfo__c *v4; // x0
  UnityEngine_Vector3_c *v5; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v8; // x8
  __int64 v9; // d0
  float v10; // s1
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_List_object__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  QAASpotStateController_o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596CE1E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_2213A60(&QAASpotStateController_TypeInfo);
    byte_596CE1E = 1;
  }
  v3 = (unsigned __int8)byte_5969AE0;
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_E9C630;
  if ( !v3 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v4 = System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo;
  v5 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.defaultPinObjectPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.defaultPinObjectPosition.fields.z = z;
  v8 = v5->static_fields;
  v9 = *(_QWORD *)&v8->zeroVector.fields.x;
  v10 = v8->zeroVector.fields.z;
  this->fields.isForward = 1;
  *(_QWORD *)&this->fields.changedUiRootPosition.fields.x = v9;
  this->fields.changedUiRootPosition.fields.z = v10;
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v4);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.areaInfoList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.listBillboardChildWidget,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (QAASpotStateController_o *)sub_2213CCC(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v25, 0);
  this->fields.stateController = v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.stateController,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BlankEarthPoint__ActivateEachComponent(bool value, UnityEngine_Component_array *targets, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo_381076C *v8; // x1
  System_Collections_Generic_IEnumerable_T__o *v9; // x19
  System_Action_object__o *v10; // x20

  if ( (byte_596CE18 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Component__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ExcludeNull_Component___);
    sub_2213A60(&Method_BasicHelper_ForEach_Component___);
    sub_2213A60(&Method_BlankEarthPoint___c__DisplayClass110_0__ActivateEachComponent_b__0__);
    sub_2213A60(&BlankEarthPoint___c__DisplayClass110_0_TypeInfo);
    byte_596CE18 = 1;
  }
  v5 = sub_2213CCC(BlankEarthPoint___c__DisplayClass110_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  v8 = (const MethodInfo_381076C *)Method_BasicHelper_ExcludeNull_Component___;
  *(_BYTE *)(v5 + 16) = value;
  v9 = BasicHelper__ExcludeNull_object_((System_Collections_Generic_IEnumerable_T__o *)targets, v8);
  v10 = (System_Action_object__o *)sub_2213CCC(System_Action_Component__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_BlankEarthPoint___c__DisplayClass110_0__ActivateEachComponent_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v9,
    (System_Action_T__o *)v10,
    (const MethodInfo_381282C *)Method_BasicHelper_ForEach_Component___);
}


void BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v4; // x22
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  __int64 v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BlankEarthPoint_OffsetTargetObject_array *v14; // x8
  __int64 v15; // x20
  unsigned __int64 v16; // x21
  unsigned __int64 max_length_low; // x9
  BlankEarthPoint_OffsetTargetObject_o *v18; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x22
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Object_o *anim; // x20
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  long double v30; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Object_array *v32; // x1
  _QWORD *v33; // x20
  __int64 v34; // x8
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *pinObject; // x20
  float z; // w9
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_596CE0F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_AnimationState___);
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
    sub_2213A60(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__AddRange__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BlankEarthPoint_o *)sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_596CE0F = 1;
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
LABEL_44:
        sub_2213CE4(this);
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v4];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____91732016);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_object___AddRange(
            (System_Collections_Generic_List_object__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v2->fields.uiBillboardTransforms;
          ++v4;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_22;
    }
  }
  offsetTargetObjects = v2->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v7 = sub_2213B20(UnityEngine_Vector3___TypeInfo, LODWORD(offsetTargetObjects->max_length));
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields.defaultLocalPosOffsetTargetObjects,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = v2->fields.offsetTargetObjects;
    if ( !v14 )
      goto LABEL_22;
    v15 = 0;
    v16 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(v14->max_length);
      if ( (__int64)v16 >= (int)max_length_low )
        break;
      if ( v16 >= max_length_low )
        goto LABEL_44;
      v18 = v14->m_Items[v16];
      if ( v18 )
      {
        this = (BlankEarthPoint_o *)v18->fields.targetObject;
        if ( !this )
          goto LABEL_22;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_22;
        if ( v16 >= LODWORD(defaultLocalPosOffsetTargetObjects->max_length) )
          goto LABEL_44;
        defaultLocalPosOffsetTargetObjects->m_Items[v15] = localPosition;
        v14 = v2->fields.offsetTargetObjects;
      }
      ++v16;
      ++v15;
      if ( !v14 )
        goto LABEL_22;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
LABEL_22:
    sub_2213CDC(this, method);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
  if ( UnityEngine_Object__op_Inequality(anim, 0, 0) )
  {
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_388851C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v32 = System_Linq_Enumerable__ToArray_object_(
            v31,
            (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v33 = Method_System_Array_Empty_AnimationState___;
    v34 = *((_QWORD *)Method_System_Array_Empty_AnimationState___ + 7);
    if ( !v34 )
    {
      sub_224B964(Method_System_Array_Empty_AnimationState___);
      v34 = v33[7];
    }
    v35 = *(_QWORD *)(v34 + 16);
    if ( (*(_WORD *)(v35 + 309) & 1) == 0 )
      v35 = sub_224B908(v30);
    if ( !*(_DWORD *)(v35 + 228) )
      *(__n128 *)&v30 = j_il2cpp_runtime_class_init_0(v35, v23, v24);
    v36 = *(_QWORD *)(v33[7] + 16LL);
    if ( (*(_WORD *)(v36 + 309) & 1) == 0 )
      v36 = sub_224B908(v30);
    v32 = **(System_Object_array ***)(v36 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v32;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v2->fields.animationStateArray,
    (int32_t)v32,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  pinObject = (UnityEngine_Object_o *)v2->fields.pinObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v38);
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
    goto LABEL_22;
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v10; // x1
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.stateEndAct,
    (int32_t)finishCallback,
    (System_String_o *)finishCallback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_2213CDC(0, v10);
  QAASpotStateController__SetState(stateController, state, 0);
}


System_Collections_IEnumerator_o *BlankEarthPoint__CoPlayAnimUntilFinish(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_596CE1C & 1) == 0 )
  {
    sub_2213A60(&BlankEarthPoint__CoPlayAnimUntilFinish_d__120_TypeInfo);
    byte_596CE1C = 1;
  }
  v7 = sub_2213CCC(BlankEarthPoint__CoPlayAnimUntilFinish_d__120_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *BlankEarthPoint__GetAnimName(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_Object_array *animationStateArray; // x0
  Il2CppObject *v6; // x0

  if ( (byte_596CE1D & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_596CE1D = 1;
  }
  animationStateArray = (System_Object_array *)this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = BasicHelper__IndexValue_object_(
               animationStateArray,
               index,
               0,
               (const MethodInfo_3814CA8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0 )
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
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  UnityEngine_Object_o *v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  bool IsExistCommand; // w20
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w20
  BlankEarthSpotAddMaster_o *v15; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0

  if ( (byte_596CE19 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_2213A60(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    byte_596CE19 = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 4);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_224B908(v3);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_224B908(v3);
  v7 = **(UnityEngine_Object_o ***)(v6 + 184);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  v14 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, v11);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12, v13);
  Instance = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
LABEL_21:
    sub_2213CDC(Instance, v9);
  v15 = (BlankEarthSpotAddMaster_o *)Instance;
  if ( BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0)
    && (PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                                   v15,
                                   1,
                                   this->fields._spotId_k__BackingField,
                                   v14,
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
  __int64 v20; // x1
  __int64 v21; // x2
  float v22; // s11
  float v23; // s12
  float v24; // s13
  float v25; // s8
  float v26; // s9
  float v27; // s10
  float v28; // s0
  float v29; // s8
  float v30; // s9
  float v31; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v33; // s12
  float v34; // s13
  float v35; // s14
  float v36; // s0
  float v37; // s1
  float v38; // s2
  float v39; // s3
  struct UnityEngine_Vector3_StaticFields *v40; // x8
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = GameObjectExtensions__GetPosition(gameObject, 0);
  earthCore = (UnityEngine_Component_o *)this->fields.earthCore;
  if ( !earthCore )
    goto LABEL_24;
  x = Position.fields.x;
  y = Position.fields.y;
  z = Position.fields.z;
  v11 = UnityEngine_Component__get_gameObject(earthCore, 0);
  v42 = GameObjectExtensions__GetPosition(v11, 0);
  v12 = x - v42.fields.x;
  v13 = y - v42.fields.y;
  v14 = z - v42.fields.z;
  v43 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0);
  vec->fields.x = v12 - v43.fields.x;
  vec->fields.y = v13 - v43.fields.y;
  result = 1.0;
  vec->fields.z = v14 - v43.fields.z;
  if ( this->fields._spotOnType_k__BackingField == 1 )
    return result;
  earthCore = (UnityEngine_Component_o *)this->fields.earthCamera;
  if ( !earthCore )
LABEL_24:
    sub_2213CDC(earthCore, v6);
  v16 = UnityEngine_Component__get_gameObject(earthCore, 0);
  v44 = GameObjectExtensions__GetPosition(v16, 0);
  v17 = v44.fields.x;
  v18 = v44.fields.y;
  v19 = v44.fields.z;
  v45 = GameObjectExtensions__GetPosition(this->fields.earthCoreRoot, 0);
  v22 = v45.fields.x;
  v23 = v45.fields.y;
  v24 = v45.fields.z;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v25 = v17 - v22;
  v26 = v18 - v23;
  v27 = v19 - v24;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20, v21);
  v28 = sqrtf((float)(v27 * v27) + (float)((float)(v25 * v25) + (float)(v26 * v26)));
  if ( v28 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v29 = static_fields->zeroVector.fields.x;
    v30 = static_fields->zeroVector.fields.y;
    v31 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v29 = v25 / v28;
    v30 = v26 / v28;
    v31 = v27 / v28;
  }
  v33 = vec->fields.x;
  v34 = vec->fields.y;
  v35 = vec->fields.z;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v20, v21);
  v36 = sqrtf((float)(v35 * v35) + (float)((float)(v33 * v33) + (float)(v34 * v34)));
  if ( v36 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    v40 = UnityEngine_Vector3_TypeInfo->static_fields;
    v37 = v40->zeroVector.fields.x;
    v38 = v40->zeroVector.fields.y;
    v39 = v40->zeroVector.fields.z;
  }
  else
  {
    v37 = v33 / v36;
    v38 = v34 / v36;
    v39 = v35 / v36;
  }
  vec->fields.x = v37;
  vec->fields.y = v38;
  vec->fields.z = v39;
  return (float)(v31 * v39) + (float)((float)(v29 * v37) + (float)(v30 * v38));
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
  __int64 v2; // x2
  UnityEngine_Object_o *sonarPoint; // x20
  __int64 v5; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0 OVERLAPPED
  float y; // s1
  float z; // s2
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CE0E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE0E = 1;
  }
  sonarPoint = (UnityEngine_Object_o *)this->fields.sonarPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(sonarPoint, 0, 0) )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    v10 = this->fields.sonarPoint;
    if ( !v10 )
      sub_2213CDC(0, v5);
    *(UnityEngine_Vector3_o *)&x = UnityEngine_Transform__get_localPosition(v10, 0);
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
  __int64 v2; // x2
  UnityEngine_Object_o *sonarPoint; // x19

  if ( (byte_596CE0D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE0D = 1;
  }
  sonarPoint = (UnityEngine_Object_o *)this->fields.sonarPoint;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
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
  __int64 v6; // x1
  __int64 v7; // x2
  float DotXYZ; // s8
  int v9; // w8
  _BOOL4 isForward; // w24
  UnityEngine_Object_o *earthCamera; // x21
  float x; // s9
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *pointCol; // x21
  UnityEngine_Camera_o *v16; // x21
  __int64 transform; // x0
  const MethodInfo *v18; // x1
  UnityEngine_Object_o *uiRoot; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *v22; // x22
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v24; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v26; // x27
  UnityEngine_Object_o *v27; // x21
  struct UnityEngine_Transform_array *v28; // x8
  UnityEngine_Transform_o *v29; // x21
  int32_t v30; // w20
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v33; // x22
  __int64 v34; // x25
  unsigned __int64 v35; // x9
  unsigned __int64 v36; // x26
  __int64 v37; // x8
  UnityEngine_Transform_o *v38; // x20
  float v39; // s13
  float y; // s10
  __int64 v41; // x1
  __int64 v42; // x2
  float v43; // s11
  float v44; // s12
  UnityEngine_Object_o *pinObject; // x21
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v47; // s10
  __int64 v48; // x2
  struct UnityEngine_Vector3_array *v49; // x8
  float v50; // s11
  float v51; // s12
  UnityEngine_Object_o *v52; // x21
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v54; // x9
  float *v55; // x8
  UnityEngine_Object_o *v56; // x20
  UnityEngine_Object_o *uiRootWidget; // x20
  long double v58; // q0
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v61; // s2
  float v62; // s3
  float v63; // s4
  float v64; // s2
  float v65; // s2
  UnityEngine_Object_o *v66; // x20
  UnityEngine_Vector3_o v67; // [xsp+0h] [xbp-90h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CE10 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE10 = 1;
  }
  v67.fields.z = 0.0;
  *(_QWORD *)&v67.fields.x = 0;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&v67.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  v67.fields.z = z;
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &v67, v2);
  v9 = (unsigned __int8)byte_5969AE0;
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  if ( !v9 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  x = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector.fields.x;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(earthCamera, 0, 0) )
  {
    pointCol = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( UnityEngine_Object__op_Inequality(pointCol, 0, 0) )
    {
      v16 = this->fields.earthCamera;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !transform )
        goto LABEL_89;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
      if ( !v16 )
        goto LABEL_89;
      x = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_83198212(v16, position, 0));
      if ( x < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0, 0) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v18);
    transform = (__int64)this->fields.earthCore;
    if ( !transform )
      goto LABEL_89;
    transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !this->fields._spotOnType_k__BackingField )
    {
      transform = (__int64)this->fields.uiRoot;
      if ( !transform )
        goto LABEL_89;
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( !this->fields.earthCore )
        goto LABEL_89;
      v21 = (UnityEngine_Transform_o *)transform;
      transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0);
      v22 = (UnityEngine_Transform_o *)transform;
      if ( !byte_5969AE8 )
      {
        transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE8 = 1;
      }
      if ( !v21 )
        goto LABEL_89;
      UnityEngine_Transform__LookAt(v21, v22, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
    }
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v24 = 4;
      while ( 1 )
      {
        max_length_low = LODWORD(uiBillboardTransforms->max_length);
        v26 = v24 - 4;
        if ( v24 - 4 >= (int)max_length_low )
          break;
        if ( v26 >= max_length_low )
          goto LABEL_123;
        v27 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v24);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v20);
        transform = UnityEngine_Object__op_Equality(v27, 0, 0);
        if ( (transform & 1) == 0 )
        {
          v28 = this->fields.uiBillboardTransforms;
          if ( !v28 )
            goto LABEL_89;
          if ( v26 >= LODWORD(v28->max_length) )
LABEL_123:
            sub_2213CE4(transform);
          v29 = (UnityEngine_Transform_o *)*((_QWORD *)&v28->obj.klass + v24);
          if ( !byte_5969AE0 )
          {
            transform = sub_2213A60(&UnityEngine_Vector3_TypeInfo);
            byte_5969AE0 = 1;
          }
          if ( !v29 )
            goto LABEL_89;
          UnityEngine_Transform__set_eulerAngles(v29, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v24;
        if ( !uiBillboardTransforms )
          goto LABEL_89;
      }
      transform = (__int64)this->fields.listBillboardChildWidget;
      if ( !transform )
        goto LABEL_89;
      v30 = 0;
      while ( v30 < *(_DWORD *)(transform + 24) )
      {
        transform = (__int64)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)transform,
                               v30,
                               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
        if ( !transform )
          goto LABEL_89;
        transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
        if ( !transform )
          goto LABEL_89;
        if ( UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)transform, 0) )
        {
          transform = (__int64)this->fields.listBillboardChildWidget;
          if ( !transform )
            goto LABEL_89;
          transform = (__int64)System_Collections_Generic_List_object___get_Item(
                                 (System_Collections_Generic_List_object__o *)transform,
                                 v30,
                                 (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIWidget__get_Item__);
          if ( !transform )
            goto LABEL_89;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)transform + 792LL))(
            transform,
            *(_QWORD *)(*(_QWORD *)transform + 800LL));
        }
        transform = (__int64)this->fields.listBillboardChildWidget;
        ++v30;
        if ( !transform )
          goto LABEL_89;
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
          v33 = 0;
          v34 = 4;
          while ( 1 )
          {
            v35 = LODWORD(offsetTargetObjects->max_length);
            v36 = v34 - 4;
            if ( v34 - 4 >= (int)v35 )
              break;
            if ( v36 >= v35 )
              goto LABEL_123;
            v37 = *((_QWORD *)&offsetTargetObjects->obj.klass + v34);
            if ( v37 )
            {
              v38 = *(UnityEngine_Transform_o **)(v37 + 16);
              if ( !v38 )
                goto LABEL_89;
              v39 = *(float *)(v37 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v37 + 16), 0);
              y = lossyScale.fields.y;
              transform = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              if ( !transform )
                goto LABEL_89;
              v70 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
              v43 = v70.fields.x;
              v44 = v70.fields.y;
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
              if ( UnityEngine_Object__op_Inequality(pinObject, 0, 0) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_89;
                if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0) )
                {
                  transform = (__int64)this->fields.pinObject;
                  if ( !transform )
                    goto LABEL_89;
                  transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
                  if ( !transform )
                    goto LABEL_89;
                  v71 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)transform, 0);
                  v43 = v71.fields.x;
                  v44 = v71.fields.y;
                }
              }
              v72 = UnityEngine_Transform__get_position(v38, 0);
              v72.fields.y = (float)(v39 * y) + v44;
              v72.fields.x = v43;
              UnityEngine_Transform__set_position(v38, v72, 0);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_89;
              if ( v36 >= LODWORD(defaultLocalPosOffsetTargetObjects->max_length) )
                goto LABEL_123;
              v47 = defaultLocalPosOffsetTargetObjects->m_Items[v33].fields.x;
              localPosition = UnityEngine_Transform__get_localPosition(v38, 0);
              v49 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v49 )
                goto LABEL_89;
              if ( v36 >= LODWORD(v49->max_length) )
                goto LABEL_123;
              v50 = localPosition.fields.y;
              v51 = v49->m_Items[v33].fields.z;
              v52 = (UnityEngine_Object_o *)this->fields.pinObject;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v48);
              if ( UnityEngine_Object__op_Inequality(v52, 0, 0) )
              {
                transform = (__int64)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_89;
                transform = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0);
                if ( (transform & 1) == 0 )
                {
                  notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
                  if ( notDisplayPinTargetOffset )
                  {
                    v54 = this->fields.offsetTargetObjects;
                    if ( !v54 )
                      goto LABEL_89;
                    if ( (unsigned int)notDisplayPinTargetOffset->max_length == LODWORD(v54->max_length) )
                    {
                      if ( v36 >= (unsigned int)notDisplayPinTargetOffset->max_length )
                        goto LABEL_123;
                      v55 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v34);
                      if ( !v55 )
                        goto LABEL_89;
                      v51 = v51 + v55[8];
                      v47 = v47 + v55[6];
                      v50 = v50 + v55[7];
                    }
                  }
                }
              }
              v74.fields.x = v47;
              v74.fields.y = v50;
              v74.fields.z = v51;
              UnityEngine_Transform__set_localPosition(v38, v74, 0);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v34;
            ++v33;
            if ( !offsetTargetObjects )
              goto LABEL_89;
          }
        }
      }
    }
  }
  if ( (isForward & (this->fields.isForward ^ 0xFF)) != 0 )
  {
    v56 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v20);
    if ( UnityEngine_Object__op_Inequality(v56, 0, 0) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v20);
    this->fields.isDisp = 0;
  }
  else if ( !this->fields.isDisp && this->fields.isForward && x >= 0.0 )
  {
    v66 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v20);
    if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
    {
      BlankEarthPoint__SetBtnColliderEnable(this, 1, v20);
      this->fields.isDisp = 1;
    }
  }
  uiRootWidget = (UnityEngine_Object_o *)this->fields.uiRootWidget;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v20);
  if ( UnityEngine_Object__op_Inequality(uiRootWidget, 0, 0) )
  {
    transform = (__int64)this->fields.uiRootWidget;
    if ( transform )
    {
      dispSpriteDot = this->fields.dispSpriteDot;
      noDispSpriteDot = this->fields.noDispSpriteDot;
      if ( dispSpriteDot <= noDispSpriteDot )
        v61 = this->fields.noDispSpriteDot;
      else
        v61 = this->fields.dispSpriteDot;
      if ( dispSpriteDot <= noDispSpriteDot )
        v62 = this->fields.dispSpriteDot;
      else
        v62 = this->fields.noDispSpriteDot;
      if ( DotXYZ <= v61 )
        v63 = DotXYZ;
      else
        v63 = v61;
      v64 = v61 - v62;
      if ( DotXYZ < v62 )
        v63 = v62;
      v65 = (float)(v63 - v62) / v64;
      if ( dispSpriteDot >= noDispSpriteDot )
        *(float *)&v58 = v65;
      else
        *(float *)&v58 = 1.0 - v65;
      (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)transform + 440LL))(
        transform,
        *(_QWORD *)(*(_QWORD *)transform + 448LL),
        v58);
      return;
    }
LABEL_89:
    sub_2213CDC(transform, v18);
  }
}


void BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_596CE17 & 1) == 0 )
  {
    sub_2213A60(&Method_BlankEarthPoint_OnClickSpot__);
    byte_596CE17 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_2213CDC(0, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, 0) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_2213CDC(0, method);
  BlankEarth__OnPress(earthCore, 0);
}


void BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_2213CDC(0, method);
  BlankEarth__OnRelease(earthCore, 0);
}


void BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w20
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8

  if ( (byte_596CE16 & 1) == 0 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596CE16 = 1;
  }
  if ( this->fields._IsPlanetMap_k__BackingField )
    v4 = 2;
  else
    v4 = 3;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
  if ( !byte_596A090 )
  {
    sub_2213A60(&TerminalSceneComponent_TypeInfo);
    byte_596A090 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method, v2);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.particleAssetName->klass;
  if ( !klass
    || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0
    || (TitleInfoControl__setBackBtnSprite(genericContainerHandle, v4, 1, 0),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0)
    || (BlankEarth__SetFocusPoint(
          (BlankEarth_o *)genericContainerHandle,
          this->fields._spotId_k__BackingField,
          this->fields._spotOnType_k__BackingField,
          0),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0) )
  {
    sub_2213CDC(genericContainerHandle, method);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
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
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *anim; // x21
  System_String_o *v9; // x20
  __int64 v10; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_596CE1A & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE1A = 1;
  }
  AnimName = BlankEarthPoint__GetAnimName(this, index, method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  v9 = AnimName;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( !UnityEngine_Object__op_Equality(anim, 0, 0) && !System_String__IsNullOrEmpty(v9, 0) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (UnityEngine_Animation__Rewind(Item, 0), (Item = this->fields.anim) == 0)
      || (UnityEngine_Animation__Play_83078544(Item, v9, 0), (Item = this->fields.anim) == 0)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v9, 0)) == 0 )
    {
      sub_2213CDC(Item, v10);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0);
  }
}


void BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8
  __int64 IsNextDisp; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct UISprite_o *nextSprite; // x22
  UnityEngine_Component_array *v15; // x21
  __int64 v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct UISprite_o *loopIconSprite; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct UILabel_o *lastTimeLabel; // x22
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct NoticeNumberComponent_o *noticeNumberComp; // x22
  const MethodInfo *v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *Master_object; // x20
  UnityEngine_Object_o *v44; // x21
  __int64 v45; // x2
  bool IsOpen; // w21
  _BOOL8 v47; // x0
  __int64 v48; // x1
  Il2CppClass *klass; // x8
  WarReleaseEntity_o *OpenEntity; // x0
  UnityEngine_Object_o *v51; // x21
  __int64 v52; // x2
  struct MapControl_SpotInfo_o *v53; // x8
  int freeQuestCount; // w22
  UnityEngine_Object_o *v55; // x21
  __int64 v56; // x2
  int32_t spotId_k__BackingField; // w21
  TerminalPramsManager_c *v58; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  int32_t LastPlayedFreeQuestSpotId_k__BackingField; // w8
  bool v62; // w21
  __int64 v63; // x1
  __int64 v64; // x2
  UILabel_o *v65; // x21
  UnityEngine_Object_o *v66; // x21
  struct MapControl_SpotInfo_o *v67; // x8
  int32_t questCount; // w23
  int32_t v69; // w21
  _BOOL8 v70; // x0
  __int64 v71; // x1
  Il2CppObject *current; // x24
  Il2CppClass *v73; // x8
  WarReleaseEntity_o *v74; // x0
  __int64 v75; // x1
  Il2CppClass *v76; // x8
  __int64 v77; // x0
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596CE12 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Component___TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&TerminalPramsManager_TypeInfo);
    sub_2213A60(&StringLiteral_12813/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_596CE12 = 1;
  }
  bSpotInfo = this->fields.bSpotInfo;
  memset(&v79, 0, sizeof(v79));
  if ( !bSpotInfo || !this->fields.areaInfoList )
    return;
  IsNextDisp = sub_2213B20(UnityEngine_Component___TypeInfo, 4);
  if ( !IsNextDisp )
    goto LABEL_91;
  nextSprite = this->fields.nextSprite;
  v15 = (UnityEngine_Component_array *)IsNextDisp;
  if ( nextSprite )
  {
    IsNextDisp = sub_2213BB4(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)IsNextDisp + 64LL));
    if ( !IsNextDisp )
      goto LABEL_93;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_92;
  v15->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v15->m_Items, (int32_t)nextSprite, v8, v9, v10, v11, v12, v13);
  loopIconSprite = this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    IsNextDisp = sub_2213BB4(this->fields.loopIconSprite, v15->obj.klass->_1.element_class);
    if ( !IsNextDisp )
      goto LABEL_93;
  }
  if ( (v15->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_92;
  v15->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15->m_Items[1],
    (int32_t)loopIconSprite,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  lastTimeLabel = this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    IsNextDisp = sub_2213BB4(this->fields.lastTimeLabel, v15->obj.klass->_1.element_class);
    if ( !IsNextDisp )
      goto LABEL_93;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_92;
  v15->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15->m_Items[2],
    (int32_t)lastTimeLabel,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  noticeNumberComp = this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    IsNextDisp = sub_2213BB4(this->fields.noticeNumberComp, v15->obj.klass->_1.element_class);
    if ( !IsNextDisp )
    {
LABEL_93:
      v77 = sub_2213D00(IsNextDisp, v16);
      sub_2213BA0(v77, 0);
    }
  }
  if ( (v15->max_length & 0xFFFFFFFC) == 0 )
LABEL_92:
    sub_2213CE4(IsNextDisp);
  v15->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15->m_Items[3],
    (int32_t)noticeNumberComp,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  BlankEarthPoint__ActivateEachComponent(0, v15, v38);
  if ( !isDisp )
    return;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39, v40);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  v44 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v41, v42);
  if ( UnityEngine_Object__op_Inequality(v44, 0, 0) )
  {
    IsNextDisp = (__int64)this->fields.bSpotInfo;
    if ( !IsNextDisp )
      goto LABEL_91;
    IsNextDisp = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)IsNextDisp, 0);
    if ( !this->fields.areaInfoList )
      goto LABEL_91;
    IsOpen = IsNextDisp;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v78,
      (System_Collections_Generic_List_object__o *)this->fields.areaInfoList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v79 = v78;
    v78.fields._list = 0;
    *(_QWORD *)&v78.fields._index = &v79;
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v79,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v47 )
        break;
      if ( !v79.fields._current )
        sub_2213CDC(v47, v48);
      klass = v79.fields._current[7].klass;
      if ( !klass )
        sub_2213CDC(v47, v48);
      IsOpen = 0;
      if ( LOBYTE(klass->_1.byval_arg.bits) )
      {
        if ( !Master_object )
          sub_2213CDC(v47, v48);
        OpenEntity = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, HIDWORD(klass->_1.name), 0);
        IsOpen = 1;
        if ( OpenEntity )
          IsOpen = WarReleaseEntity__IsOpen(OpenEntity, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v79,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    IsNextDisp = (__int64)this->fields.nextSprite;
    if ( !IsNextDisp )
      goto LABEL_91;
    IsNextDisp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNextDisp, 0);
    if ( !IsNextDisp )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNextDisp, IsOpen, 0);
  }
  v51 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v45);
  IsNextDisp = UnityEngine_Object__op_Inequality(v51, 0, 0);
  if ( (IsNextDisp & 1) != 0 )
  {
    v53 = this->fields.bSpotInfo;
    if ( !v53 )
      goto LABEL_91;
    freeQuestCount = v53->fields.freeQuestCount;
    v55 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v52);
    if ( UnityEngine_Object__op_Inequality(v55, 0, 0) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v56);
      if ( !byte_596CEAD )
      {
        sub_2213A60(&TerminalPramsManager_TypeInfo);
        byte_596CEAD = 1;
      }
      v58 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v7, v56);
        v58 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v58->static_fields;
      IsNextDisp = (__int64)this->fields.lastTimeLabel;
      LastPlayedFreeQuestSpotId_k__BackingField = static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      v62 = freeQuestCount > 0 && spotId_k__BackingField == LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !IsNextDisp )
        goto LABEL_91;
      IsNextDisp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNextDisp, 0);
      if ( !IsNextDisp )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNextDisp, v62, 0);
      v65 = this->fields.lastTimeLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v63, v64);
      IsNextDisp = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12813/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0);
      if ( !v65 )
        goto LABEL_91;
      UILabel__set_text(v65, (System_String_o *)IsNextDisp, 0);
    }
    IsNextDisp = (__int64)this->fields.loopIconSprite;
    if ( !IsNextDisp )
      goto LABEL_91;
    IsNextDisp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNextDisp, 0);
    if ( !IsNextDisp )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNextDisp, freeQuestCount > 0, 0);
  }
  v66 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v52);
  IsNextDisp = UnityEngine_Object__op_Inequality(v66, 0, 0);
  if ( (IsNextDisp & 1) != 0 )
  {
    v67 = this->fields.bSpotInfo;
    if ( v67 )
    {
      IsNextDisp = (__int64)this->fields.areaInfoList;
      if ( IsNextDisp )
      {
        questCount = v67->fields.questCount;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v78,
          (System_Collections_Generic_List_object__o *)IsNextDisp,
          (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v69 = questCount;
        v79 = v78;
        v78.fields._list = 0;
        *(_QWORD *)&v78.fields._index = &v79;
        while ( 1 )
        {
          v70 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v79,
                  (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v70 )
            break;
          current = v79.fields._current;
          if ( !v79.fields._current )
            sub_2213CDC(v70, v71);
          v73 = v79.fields._current[7].klass;
          if ( !v73 )
            sub_2213CDC(v70, v71);
          if ( !Master_object )
            sub_2213CDC(v70, v71);
          v74 = WarReleaseMaster__GetOpenEntity((WarReleaseMaster_o *)Master_object, HIDWORD(v73->_1.name), 0);
          if ( v74 )
          {
            v74 = (WarReleaseEntity_o *)WarReleaseEntity__IsOpen(v74, 0);
            if ( ((unsigned __int8)v74 & 1) == 0 )
              continue;
          }
          v76 = current[7].klass;
          if ( !v76 )
            sub_2213CDC(v74, v75);
          v69 += LODWORD(v76->_1.namespaze);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v79,
          (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        IsNextDisp = (__int64)this->fields.noticeNumberComp;
        if ( IsNextDisp )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)IsNextDisp, v69, 0);
          if ( v69 )
            return;
          IsNextDisp = (__int64)this->fields.noticeNumberComp;
          if ( IsNextDisp )
          {
            IsNextDisp = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsNextDisp, 0);
            if ( IsNextDisp )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsNextDisp, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_91:
    sub_2213CDC(IsNextDisp, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void BlankEarthPoint__SetBtnColliderEnable(BlankEarthPoint_o *this, bool isEnabled, const MethodInfo *method)
{
  _BOOL4 isForceTouchDisabled; // w8
  UnityEngine_Collider_o *pointCol; // x0

  isForceTouchDisabled = this->fields.isForceTouchDisabled;
  pointCol = (UnityEngine_Collider_o *)this->fields.pointCol;
  if ( !isForceTouchDisabled )
  {
    if ( pointCol )
      goto LABEL_5;
LABEL_6:
    sub_2213CDC(pointCol, isEnabled);
  }
  if ( !pointCol )
    goto LABEL_6;
  isEnabled = 0;
LABEL_5:
  UnityEngine_Collider__set_enabled(pointCol, isEnabled, 0);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UISprite_o *v20; // x24
  struct System_String_o *name; // x1
  int32_t onObjectType; // w8
  struct BlankEarth_o **p_earthCore; // x24
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  __int64 v49; // x1
  __int64 v50; // x2
  DataManager_c *v51; // x0
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x8
  int32_t size; // w2
  int v54; // w9
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  Il2CppObject *current; // x1
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *v65; // x0
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  float v76; // s2
  float v77; // s0
  float v78; // s1
  float v79; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_GameObject_o *v81; // x0
  const MethodInfo *v82; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x2
  const MethodInfo *v86; // x2
  System_Collections_Generic_List_Enumerator_object__o v87; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+20h] [xbp-80h] BYREF
  MapEntity_o *entity; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v91; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v92; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596CE11 & 1) == 0 )
  {
    sub_2213A60(&AtlasManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_MapMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_2213A60(&StringLiteral_21213/*"icon_spot_next"*/);
    byte_596CE11 = 1;
  }
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  entity = 0;
  memset(&v88, 0, sizeof(v88));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, spotEnt, obj);
  Instance = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v20 = this->fields.nextSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v13, v14);
    Instance = (QuestTree_o *)AtlasManager__SetEventUI(v20, (System_String_o *)StringLiteral_21213/*"icon_spot_next"*/, 0);
  }
  if ( !spotEnt )
    goto LABEL_45;
  this->fields._warId_k__BackingField = spotEnt->fields.warId;
  this->fields._spotId_k__BackingField = spotEnt->fields.id;
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._spotName_k__BackingField,
    (int32_t)name,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  onObjectType = spotEnt->fields.onObjectType;
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  this->fields._spotOnType_k__BackingField = onObjectType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.earthCore, (int32_t)obj, v24, v25, v26, v27, v28, v29);
  this->fields.earthCamera = camera;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.earthCamera,
    (int32_t)camera,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  Instance = (QuestTree_o *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  SpotInfo = QuestTree__GetSpotInfo(Instance, this->fields._spotId_k__BackingField, 0);
  this->fields.bSpotInfo = SpotInfo;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.bSpotInfo,
    (int32_t)SpotInfo,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.earthCoreRoot = coreRoot;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.earthCoreRoot,
    (int32_t)coreRoot,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  v51 = DataManager_TypeInfo;
  *(_QWORD *)&this->fields._DefaultDispSpriteDot_k__BackingField = *(_QWORD *)&this->fields.dispSpriteDot;
  if ( !*(&v51->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v51, v49, v50);
  Instance = (QuestTree_o *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_MapMaster___);
  if ( !Instance )
    goto LABEL_45;
  MapMaster__TryGetEntity((MapMaster_o *)Instance, &entity, spotEnt->fields.mapId, spotEnt->fields.warId, 0);
  Instance = (QuestTree_o *)entity;
  if ( entity )
    Instance = (QuestTree_o *)MapEntity__IsPlanetMap(entity, 0);
  areaInfoList = this->fields.areaInfoList;
  this->fields._IsPlanetMap_k__BackingField = (unsigned __int8)Instance & 1;
  if ( areaInfoList )
  {
    size = areaInfoList->fields._size;
    v54 = areaInfoList->fields._version + 1;
    areaInfoList->fields._size = 0;
    areaInfoList->fields._version = v54;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)areaInfoList->fields._items, 0, size, 0);
    if ( *p_earthCore )
    {
      ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo;
      if ( ordealCallFolderInfo )
      {
        Instance = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList;
        if ( Instance )
        {
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v87,
            (System_Collections_Generic_List_object__o *)Instance,
            (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
          v88 = v87;
          v87.fields._list = 0;
          *(_QWORD *)&v87.fields._index = &v88;
          while ( 1 )
          {
            v56 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v88,
                    (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
            if ( !v56 )
              break;
            current = v88.fields._current;
            if ( !v88.fields._current )
              sub_2213CDC(v56, 0);
            klass = v88.fields._current[7].klass;
            if ( klass && this->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
            {
              v65 = (System_Collections_Generic_List_object__o *)this->fields.areaInfoList;
              if ( !v65
                || (items = v65->fields._items,
                    v67 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
                    ++v65->fields._version,
                    !items) )
              {
                sub_2213CDC(v65, current);
              }
              v68 = v65->fields._size;
              if ( (unsigned int)v68 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v65,
                  current,
                  *(const MethodInfo_4483C64 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
              }
              else
              {
                v69 = &items->obj.klass + v68;
                v65->fields._size = v68 + 1;
                v69[4] = (Il2CppClass *)current;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)(v69 + 4),
                  (int32_t)current,
                  v57,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62);
              }
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v88,
            (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
          goto LABEL_33;
        }
      }
    }
LABEL_45:
    sub_2213CDC(Instance, v13);
  }
LABEL_33:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0);
  x = LocalPosition.fields.x;
  y = LocalPosition.fields.y;
  z = LocalPosition.fields.z;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v71, v72);
  v76 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v76 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v77 = static_fields->zeroVector.fields.x;
    v78 = static_fields->zeroVector.fields.y;
    v79 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v77 = x / v76;
    v78 = y / v76;
    v79 = z / v76;
  }
  v91.fields.x = -v77;
  v91.fields.y = -v78;
  v91.fields.z = -v79;
  v92 = UnityEngine_Quaternion__LookRotation_83371248(v91, 0);
  this->fields._FocusQua_k__BackingField = v92;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v92, 0);
  v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v81, 0);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v82);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v84);
  BlankEarthPoint__UpdateDisp(this, 1, v85);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v86);
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
  __int64 v2; // x2
  UnityEngine_Object_o *qaaDispEffObj; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *spotDispEffectObj; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *v17; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v23; // x20
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_596CE1B & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE1B = 1;
  }
  qaaDispEffObj = (UnityEngine_Object_o *)this->fields.qaaDispEffObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(qaaDispEffObj, 0, 0) )
  {
    spotDispEffectObj = (UnityEngine_Object_o *)this->fields.spotDispEffectObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(spotDispEffectObj, 0, 0) )
    {
      v10 = (UnityEngine_Object_o *)this->fields.spotDispEffectObj;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
      UnityEngine_Object__Destroy_83459800(v10, 0);
      this->fields.spotDispEffectObj = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spotDispEffectObj, 0, v11, v12, v13, v14, v15, v16);
    }
    v17 = (Il2CppObject *)this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_2213CDC(0, v19);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20, v21);
    v23 = UnityEngine_Object__Instantiate_object__59717116(
            v17,
            transform,
            (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v23, this->fields.spotRevealedEffectOffset, 0);
    GameObjectExtensions__ResetTransform((UnityEngine_GameObject_o *)v23, 0);
    this->fields.spotDispEffectObj = (struct UnityEngine_GameObject_o *)v23;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.spotDispEffectObj,
      (int32_t)v23,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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


// local variable allocation has failed, the output may be wrong!
void BlankEarthPoint__SwitchDispUIRoot(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_596CE15 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE15 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isDisp, method);
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0, 0) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_2213CDC(0, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0);
  }
}


void BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_2213CDC(0, method);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *current; // x1
  Il2CppClass *klass; // x8
  System_Collections_Generic_List_object__o *v17; // x0
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x8
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_596CE13 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    this = (BlankEarthPoint_o *)sub_2213A60(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    byte_596CE13 = 1;
  }
  areaInfoList = v2->fields.areaInfoList;
  memset(&v23, 0, sizeof(v23));
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
      sub_2213CDC(this, method);
    }
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v23 = v22;
    v22.fields._list = 0;
    *(_QWORD *)&v22.fields._index = &v23;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v23,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v8 )
        break;
      current = v23.fields._current;
      if ( !v23.fields._current )
        sub_2213CDC(v8, 0);
      klass = v23.fields._current[7].klass;
      if ( klass && v2->fields._spotId_k__BackingField == LODWORD(klass->_1.castClass) )
      {
        v17 = (System_Collections_Generic_List_object__o *)v2->fields.areaInfoList;
        if ( !v17
          || (items = v17->fields._items,
              v19 = Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__,
              ++v17->fields._version,
              !items) )
        {
          sub_2213CDC(v17, current);
        }
        v20 = v17->fields._size;
        if ( (unsigned int)v20 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v17,
            current,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v21 = &items->obj.klass + v20;
          v17->fields._size = v20 + 1;
          v21[4] = (Il2CppClass *)current;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)current, v9, v10, v11, v12, v13, v14);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v23,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
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
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
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
      sub_2213CDC(0, v11);
    UnityEngine_Animation__Stop(anim, 0);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v12);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


void BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *pinObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *v6; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  struct UnityEngine_Vector3_StaticFields *p_changedUiRootPosition; // x8
  float *p_y; // x9
  float *p_z; // x10
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596CE14 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE14 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(pinObject, 0, 0) )
  {
    v6 = this->fields.pinObject;
    if ( !v6 )
      sub_2213CDC(0, v5);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v6, 0);
    uiRoot = this->fields.uiRoot;
    if ( activeSelf )
    {
      p_changedUiRootPosition = (struct UnityEngine_Vector3_StaticFields *)&this->fields.changedUiRootPosition;
      p_y = &this->fields.changedUiRootPosition.fields.y;
      p_z = &this->fields.changedUiRootPosition.fields.z;
    }
    else
    {
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      p_changedUiRootPosition = UnityEngine_Vector3_TypeInfo->static_fields;
      p_y = &p_changedUiRootPosition->zeroVector.fields.y;
      p_z = &p_changedUiRootPosition->zeroVector.fields.z;
    }
    v12.fields.x = p_changedUiRootPosition->zeroVector.fields.x;
    v12.fields.y = *p_y;
    v12.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(uiRoot, v12, 0);
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


bool BlankEarthPoint__get_IsPlanetMap(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._IsPlanetMap_k__BackingField;
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


void BlankEarthPoint__set_IsPlanetMap(BlankEarthPoint_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsPlanetMap_k__BackingField = value;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._spotName_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._spotName_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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


void BlankEarthPoint__CoPlayAnimUntilFinish_d__120___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BlankEarthPoint__CoPlayAnimUntilFinish_d__120__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *v3; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  System_String_o *AnimName; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0

  v3 = this;
  if ( (byte_596CE1F & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596CE1F = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_24;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *)UnityEngine_Animation__get_Item(
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
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0) )
          {
            v3->fields.__2__current = 0;
            p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
            sub_2213A04(p__2__current, 0, v17, v18, v19, v20, v21, v22);
            result = 1;
            p__2__current[-1].fields._BoardType_k__BackingField = 1;
            return result;
          }
          goto LABEL_22;
        }
LABEL_24:
        sub_2213CDC(this, method);
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v3->fields._animName_5__2,
      (int32_t)AnimName,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    if ( !UnityEngine_Object__op_Equality(anim, 0, 0) && !System_String__IsNullOrEmpty(v3->fields._animName_5__2, 0) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_24;
      UnityEngine_Animation__Play_83078544((UnityEngine_Animation_o *)this, v3->fields._animName_5__2, 0);
      v3->fields._totalTime_5__3 = 0.0;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  return 0;
}


Il2CppObject *BlankEarthPoint__CoPlayAnimUntilFinish_d__120__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__120__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__120_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *BlankEarthPoint__CoPlayAnimUntilFinish_d__120__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BlankEarthPoint__CoPlayAnimUntilFinish_d__120__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__120_o *this,
        const MethodInfo *method)
{
  ;
}


void BlankEarthPoint___c__DisplayClass110_0___ctor(
        BlankEarthPoint___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BlankEarthPoint___c__DisplayClass110_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass110_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass110_0_o *v3; // x19

  if ( !x
    || (v3 = this, (this = (BlankEarthPoint___c__DisplayClass110_0_o *)UnityEngine_Component__get_gameObject(x, 0)) == 0) )
  {
    sub_2213CDC(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0);
}