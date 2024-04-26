void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  QAASpotStateController_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4351624 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_UIWidget__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
    sub_B70694(&QAASpotStateController_TypeInfo);
    byte_4351624 = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_32EABD0;
  this->fields.defaultPinObjectPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.changedUiRootPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.isForward = 1;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.areaInfoList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.listBillboardChildWidget,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (QAASpotStateController_o *)sub_B70764(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v17, 0LL);
  this->fields.stateController = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.stateController,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass87_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x20

  if ( (byte_435161E & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_Component___ctor__);
    sub_B70694(&System_Action_Component__TypeInfo);
    sub_B70694(&Method_BasicHelper_ExcludeNull_Component___);
    sub_B70694(&Method_BasicHelper_ForEach_Component___);
    sub_B70694(&Method_BlankEarthPoint___c__DisplayClass87_0__ActivateEachComponent_b__0__);
    sub_B70694(&BlankEarthPoint___c__DisplayClass87_0_TypeInfo);
    byte_435161E = 1;
  }
  v5 = (BlankEarthPoint___c__DisplayClass87_0_o *)sub_B70764(BlankEarthPoint___c__DisplayClass87_0_TypeInfo);
  BlankEarthPoint___c__DisplayClass87_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  v5->fields.value = value;
  v8 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
         (System_Collections_Generic_IEnumerable_T__o *)targets,
         (const MethodInfo_1BDCE20 *)Method_BasicHelper_ExcludeNull_Component___);
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B70764(System_Action_Component__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BlankEarthPoint___c__DisplayClass87_0__ActivateEachComponent_b__0__,
    (const MethodInfo_264C148 *)Method_System_Action_Component___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_1BDE02C *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v4; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BlankEarthPoint_OffsetTargetObject_array *v14; // x8
  __int64 v15; // x21
  unsigned __int64 v16; // x22
  unsigned __int64 v17; // x9
  BlankEarthPoint_OffsetTargetObject_o *v18; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v20; // s0
  int v21; // s1
  int v22; // s2
  _DWORD *v23; // x8
  UnityEngine_Object_o *anim; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Int32_array **v32; // x1
  _QWORD **v33; // x22
  __int64 v34; // x20
  __int16 v35; // w8
  __int64 v36; // x20
  __int64 v37; // x20
  __int64 v38; // x20
  UnityEngine_Object_o *pinObject; // x20
  float x; // w8
  float y; // w9
  float z; // w10
  __int64 v43; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4351616 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_AnimationState___);
    sub_B70694(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69251280);
    sub_B70694(&Method_System_Linq_Enumerable_OfType_AnimationState___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_AnimationState___);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__AddRange__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (BlankEarthPoint_o *)sub_B70694(&UnityEngine_Vector3___TypeInfo);
    byte_4351616 = 1;
  }
  uiBillboardTransforms = v2->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v4 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v4 >= max_length )
        break;
      if ( (unsigned int)v4 >= max_length )
      {
LABEL_51:
        v43 = sub_B70798(this);
        sub_B70738(v43, 0LL);
      }
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v4];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_1BE4420 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69251280);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v2->fields.uiBillboardTransforms;
          ++v4;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_50;
    }
  }
  offsetTargetObjects = v2->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v7 = (System_Int32_array **)sub_B706AC(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v7;
    sub_B70630(
      (BattleServantConfConponent_o *)&v2->fields.defaultLocalPosOffsetTargetObjects,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = v2->fields.offsetTargetObjects;
    if ( !v14 )
      goto LABEL_50;
    v15 = 0LL;
    v16 = 0LL;
    while ( 1 )
    {
      v17 = v14->max_length;
      if ( (__int64)v16 >= (int)v17 )
        break;
      if ( v16 >= v17 )
        goto LABEL_51;
      v18 = v14->m_Items[v16];
      if ( v18 )
      {
        this = (BlankEarthPoint_o *)v18->fields.targetObject;
        if ( !this )
          goto LABEL_50;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_50;
        if ( v16 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_51;
        v23 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v15);
        v23[8] = v20;
        v23[9] = v21;
        v23[10] = v22;
        v14 = v2->fields.offsetTargetObjects;
      }
      ++v16;
      v15 += 12LL;
      if ( !v14 )
        goto LABEL_50;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
    goto LABEL_50;
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0LL);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_1CBF924 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v32 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v31,
                                   (const MethodInfo_1CC8794 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v33 = (_QWORD **)Method_System_Array_Empty_AnimationState___;
    v34 = **((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6);
    v35 = *(_WORD *)(v34 + 306);
    if ( (v35 & 1) == 0 )
    {
      sub_B08394(**((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6));
      v35 = *(_WORD *)(v34 + 306);
    }
    if ( (v35 & 0x400) != 0 )
    {
      v36 = *v33[6];
      if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
        sub_B08394(*v33[6]);
      if ( !*(_DWORD *)(v36 + 224) )
      {
        v37 = *v33[6];
        if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
          sub_B08394(*v33[6]);
        j_il2cpp_runtime_class_init_0(v37);
      }
    }
    v38 = *v33[6];
    if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
      sub_B08394(*v33[6]);
    v32 = **(System_Int32_array ****)(v38 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v32;
  sub_B70630((BattleServantConfConponent_o *)&v2->fields.animationStateArray, v32, v25, v26, v27, v28, v29, v30);
  pinObject = (UnityEngine_Object_o *)v2->fields.pinObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    x = v2->fields.defaultPinObjectPosition.fields.x;
    y = v2->fields.defaultPinObjectPosition.fields.y;
    z = v2->fields.defaultPinObjectPosition.fields.z;
    goto LABEL_49;
  }
  this = (BlankEarthPoint_o *)v2->fields.pinObject;
  if ( !this
    || (this = (BlankEarthPoint_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL )
  {
LABEL_50:
    sub_B7076C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v2->fields.defaultPinObjectPosition = localPosition;
LABEL_49:
  v2->fields.changedUiRootPosition.fields.x = x;
  v2->fields.changedUiRootPosition.fields.y = y;
  v2->fields.changedUiRootPosition.fields.z = z;
}


void __fastcall BlankEarthPoint__ChangeSpotImage(BlankEarthPoint_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint__ChangeState(
        BlankEarthPoint_o *this,
        int32_t state,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.stateEndAct,
    (System_Int32_array **)finishCallback,
    (System_String_array **)finishCallback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  stateController = this->fields.stateController;
  if ( !stateController )
    sub_B7076C(0LL, v10);
  QAASpotStateController__SetState(stateController, state, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_4351622 & 1) == 0 )
  {
    sub_B70694(&BlankEarthPoint__CoPlayAnimUntilFinish_d__97_TypeInfo);
    byte_4351622 = 1;
  }
  v7 = sub_B70764(BlankEarthPoint__CoPlayAnimUntilFinish_d__97_TypeInfo);
  BlankEarthPoint__CoPlayAnimUntilFinish_d__97___ctor((BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7076C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  return (System_Collections_IEnumerator_o *)v7;
}


System_String_o *__fastcall BlankEarthPoint__GetAnimName(
        BlankEarthPoint_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_4351623 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_IndexValue_AnimationState___);
    byte_4351623 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               index,
                                               0LL,
                                               (const MethodInfo_1BDEDE8 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v6, 0LL);
  }
  else
  {
    return 0LL;
  }
}


float __fastcall BlankEarthPoint__GetContrast(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return 1.0;
}


int32_t __fastcall BlankEarthPoint__GetCurrentAnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x20
  UnityEngine_Object_o *v5; // x20
  QuestAfterAction_o *Instance; // x0
  const MethodInfo *v7; // x1
  bool IsExistCommand; // w20
  int32_t v9; // w20
  BlankEarthSpotAddMaster_o *v10; // x21
  const MethodInfo *v11; // x5
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0
  struct BlankEarth_o *earthCore; // x8
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_435161F & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    byte_435161F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v3 + 306) & 1) == 0 )
    sub_B08394(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v4 = **(_QWORD **)(v3 + 192);
  if ( (*(_BYTE *)(v4 + 306) & 1) == 0 )
    sub_B08394(v4);
  v5 = **(UnityEngine_Object_o ***)(v4 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v5, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_29;
    IsExistCommand = QuestAfterAction__IsExistCommand(Instance, 0, this->fields._spotId_k__BackingField, 0LL);
  }
  else
  {
    IsExistCommand = 0;
  }
  if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
  }
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v9 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (QuestAfterAction_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  v10 = (BlankEarthSpotAddMaster_o *)Instance;
  Instance = (QuestAfterAction_o *)BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, v7);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                               v10,
                               1,
                               this->fields._spotId_k__BackingField,
                               v9,
                               0,
                               v11);
    if ( PrioredAvailableEntity )
      return PrioredAvailableEntity->fields.targetId;
    return -1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
LABEL_29:
    sub_B7076C(Instance, v7);
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v9,
             0,
             -1,
             v11);
  return -1;
}


int32_t __fastcall BlankEarthPoint__GetDispType(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    return bSpotInfo->fields.dispType;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BlankEarthPoint__GetDotXYZ(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o *vec,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Component_o *earthCore; // x0
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_GameObject_o *v14; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o back; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v7 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  earthCore = (UnityEngine_Component_o *)this->fields.earthCore;
  if ( !earthCore )
    sub_B7076C(0LL, v6);
  v11 = v7;
  v12 = v8;
  v13 = v9;
  v14 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v14, 0LL);
  Position.fields.x = v11 - Position.fields.x;
  Position.fields.y = v12 - Position.fields.y;
  Position.fields.z = v13 - Position.fields.z;
  *vec = Position;
  normalized = UnityEngine_Vector3__get_normalized(Position, (const MethodInfo *)vec);
  x = normalized.fields.x;
  y = normalized.fields.y;
  z = normalized.fields.z;
  *vec = normalized;
  back = UnityEngine_Vector3__get_back(0LL);
  return (float)(z * back.fields.z) + (float)((float)(x * back.fields.x) + (float)(y * back.fields.y));
}


UnityEngine_Vector3_o __fastcall BlankEarthPoint__GetPinObjectDefaultLocalPosition(
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


UnityEngine_Vector3_o __fastcall BlankEarthPoint__GetSpotNameplatePos(
        BlankEarthPoint_o *this,
        const MethodInfo *method)
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


bool __fastcall BlankEarthPoint__IsRevealDispType(BlankEarthPoint_o *this, int32_t dispType, const MethodInfo *method)
{
  return dispType != 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__LateUpdate(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float DotXYZ; // s8
  _BOOL4 isForward; // w23
  unsigned int v6; // s0
  UnityEngine_Object_o *earthCamera; // x20
  float v8; // s9
  UnityEngine_Object_o *pointCol; // x20
  UnityEngine_Camera_o *v10; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  int v13; // s0
  UnityEngine_Object_o *uiRoot; // x20
  const MethodInfo *v17; // x1
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v24; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v26; // x24
  UnityEngine_Object_o *v27; // x20
  struct UnityEngine_Transform_array *v28; // x8
  UnityEngine_Transform_o *v29; // x20
  int v30; // s0
  struct System_Collections_Generic_List_UIWidget__o *listBillboardChildWidget; // x24
  __int64 v34; // x20
  int size; // w8
  unsigned int v36; // w21
  struct System_Collections_Generic_List_UIWidget__o *v37; // x24
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v40; // x24
  __int64 v41; // x25
  unsigned __int64 v42; // x9
  unsigned __int64 v43; // x26
  __int64 v44; // x8
  UnityEngine_Transform_o *v45; // x20
  float v46; // s13
  float y; // s10
  UnityEngine_Object_o *pinObject; // x21
  float x; // s11
  float v50; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v52; // s10
  float v53; // s1
  struct UnityEngine_Vector3_array *v54; // x8
  float v55; // s12
  UnityEngine_Object_o *v56; // x21
  float v57; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v59; // x9
  float *v60; // x8
  UnityEngine_Transform_o *v61; // x0
  float v62; // s0
  float v63; // s1
  float v64; // s2
  UnityEngine_Object_o *v65; // x20
  const MethodInfo *v66; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v70; // s9
  float v71; // s10
  long double v72; // q0
  UnityEngine_Object_o *v73; // x20
  const MethodInfo *v74; // x2
  __int64 v75; // x0
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351617 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_UIWidget__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351617 = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &zero, v3);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  v6 = (unsigned int)UnityEngine_Vector3__get_zero(0LL);
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  v8 = *(float *)&v6;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(earthCamera, 0LL, 0LL) )
  {
    pointCol = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(pointCol, 0LL, 0LL) )
    {
      v10 = this->fields.earthCamera;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_121;
      *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Transform__get_position(transform, 0LL);
      if ( !v10 )
        goto LABEL_121;
      v8 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_41062484(v10, *(UnityEngine_Vector3_o *)&v13, 0LL));
      if ( v8 < 0.0 && this->fields.isForward )
        this->fields.isDisp = 0;
    }
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v17);
    transform = (UnityEngine_Transform_o *)this->fields.uiRoot;
    if ( !transform )
      goto LABEL_121;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !this->fields.earthCore )
      goto LABEL_121;
    v18 = transform;
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_up(0LL);
    if ( !v18 )
      goto LABEL_121;
    UnityEngine_Transform__LookAt(v18, v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v24 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v26 = v24 - 4;
        if ( v24 - 4 >= (int)max_length )
          break;
        if ( v26 >= max_length )
          goto LABEL_122;
        v27 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v24);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          v28 = this->fields.uiBillboardTransforms;
          if ( !v28 )
            goto LABEL_121;
          if ( v26 >= v28->max_length )
          {
LABEL_122:
            v75 = sub_B70798(transform);
            sub_B70738(v75, 0LL);
          }
          v29 = (UnityEngine_Transform_o *)*((_QWORD *)&v28->obj.klass + v24);
          *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v29 )
            goto LABEL_121;
          UnityEngine_Transform__set_eulerAngles(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v24;
        if ( !uiBillboardTransforms )
          goto LABEL_121;
      }
      listBillboardChildWidget = this->fields.listBillboardChildWidget;
      if ( !listBillboardChildWidget )
        goto LABEL_121;
      v34 = 4LL;
      while ( 1 )
      {
        size = listBillboardChildWidget->fields._size;
        v36 = v34 - 4;
        if ( (int)v34 - 4 >= size )
          break;
        if ( size <= v36 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
        transform = (UnityEngine_Transform_o *)*((_QWORD *)&listBillboardChildWidget->fields._items->obj.klass + v34);
        if ( !transform )
          goto LABEL_121;
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0LL);
        if ( !transform )
          goto LABEL_121;
        transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                 (UnityEngine_GameObject_o *)transform,
                                                 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          v37 = this->fields.listBillboardChildWidget;
          if ( !v37 )
            goto LABEL_121;
          if ( v37->fields._size <= v36 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
          transform = (UnityEngine_Transform_o *)*((_QWORD *)&v37->fields._items->obj.klass + v34);
          if ( !transform )
            goto LABEL_121;
          transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, void *))transform->klass[2]._1.namespaze)(
                                                   transform,
                                                   transform->klass[2]._1.byval_arg.data);
        }
        listBillboardChildWidget = this->fields.listBillboardChildWidget;
        ++v34;
        if ( !listBillboardChildWidget )
          goto LABEL_121;
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
          v40 = 0LL;
          v41 = 4LL;
          while ( 1 )
          {
            v42 = offsetTargetObjects->max_length;
            v43 = v41 - 4;
            if ( v41 - 4 >= (int)v42 )
              break;
            if ( v43 >= v42 )
              goto LABEL_122;
            v44 = *((_QWORD *)&offsetTargetObjects->obj.klass + v41);
            if ( v44 )
            {
              v45 = *(UnityEngine_Transform_o **)(v44 + 16);
              if ( !v45 )
                goto LABEL_121;
              v46 = *(float *)(v44 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v44 + 16), 0LL);
              y = lossyScale.fields.y;
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_121;
              position = UnityEngine_Transform__get_position(transform, 0LL);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              x = position.fields.x;
              v50 = position.fields.y;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
              {
                transform = (UnityEngine_Transform_o *)this->fields.pinObject;
                if ( !transform )
                  goto LABEL_121;
                if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)transform, 0LL) )
                {
                  transform = (UnityEngine_Transform_o *)this->fields.pinObject;
                  if ( !transform )
                    goto LABEL_121;
                  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
                  if ( !transform )
                    goto LABEL_121;
                  v79 = UnityEngine_Transform__get_position(transform, 0LL);
                  x = v79.fields.x;
                  v50 = v79.fields.y;
                }
              }
              v80 = UnityEngine_Transform__get_position(v45, 0LL);
              v80.fields.y = (float)(v46 * y) + v50;
              v80.fields.x = x;
              UnityEngine_Transform__set_position(v45, v80, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_121;
              if ( v43 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_122;
              v52 = defaultLocalPosOffsetTargetObjects->m_Items[v40].fields.y;
              *(UnityEngine_Vector3_o *)(&v53 - 1) = UnityEngine_Transform__get_localPosition(v45, 0LL);
              v54 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v54 )
                goto LABEL_121;
              if ( v43 >= v54->max_length )
                goto LABEL_122;
              v55 = v54->m_Items[v40 + 1].fields.x;
              v56 = (UnityEngine_Object_o *)this->fields.pinObject;
              v57 = v53;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
                goto LABEL_86;
              transform = (UnityEngine_Transform_o *)this->fields.pinObject;
              if ( !transform )
                goto LABEL_121;
              transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_activeSelf(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       0LL);
              if ( ((unsigned __int8)transform & 1) != 0 )
                goto LABEL_86;
              notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
              if ( !notDisplayPinTargetOffset )
                goto LABEL_86;
              v59 = this->fields.offsetTargetObjects;
              if ( !v59 )
                goto LABEL_121;
              if ( (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length == v59->max_length )
              {
                if ( v43 >= (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length )
                  goto LABEL_122;
                v60 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v41);
                if ( !v60 )
                  goto LABEL_121;
                v61 = v45;
                v62 = v52 + v60[6];
                v63 = v57 + v60[7];
                v64 = v55 + v60[8];
              }
              else
              {
LABEL_86:
                v61 = v45;
                v62 = v52;
                v63 = v57;
                v64 = v55;
              }
              UnityEngine_Transform__set_localPosition(v61, *(UnityEngine_Vector3_o *)&v62, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v41;
            ++v40;
            if ( !offsetTargetObjects )
              goto LABEL_121;
          }
        }
      }
    }
  }
  if ( !isForward || this->fields.isForward )
  {
    if ( v8 >= 0.0 && !this->fields.isDisp && this->fields.isForward )
    {
      v73 = (UnityEngine_Object_o *)this->fields.pointCol;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
      {
        BlankEarthPoint__SetBtnColliderEnable(this, 1, v74);
        this->fields.isDisp = 1;
      }
    }
  }
  else
  {
    v65 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v66);
    this->fields.isDisp = 0;
  }
  uiRootWidget = (UnityEngine_Object_o *)this->fields.uiRootWidget;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiRootWidget, 0LL, 0LL) )
  {
    dispSpriteDot = this->fields.dispSpriteDot;
    noDispSpriteDot = this->fields.noDispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v70 = this->fields.dispSpriteDot;
    else
      v70 = this->fields.noDispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v71 = this->fields.noDispSpriteDot;
    else
      v71 = this->fields.dispSpriteDot;
    *(float *)&v72 = UnityEngine_Mathf__Clamp(DotXYZ, v70, v71, 0LL);
    transform = (UnityEngine_Transform_o *)this->fields.uiRootWidget;
    if ( transform )
    {
      *(float *)&v72 = (float)(*(float *)&v72 - v70) / (float)(v71 - v70);
      if ( this->fields.dispSpriteDot < this->fields.noDispSpriteDot )
        *(float *)&v72 = 1.0 - *(float *)&v72;
      (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, long double))&transform->klass[1]._1.this_arg.bits)(
        transform,
        transform->klass[1]._1.element_class,
        v72);
      return;
    }
LABEL_121:
    sub_B7076C(transform, v12);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_435161D & 1) == 0 )
  {
    sub_B70694(&Method_BlankEarthPoint_OnClickSpot__);
    byte_435161D = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B7076C(0LL, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, 0LL) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B7069C(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_B70678(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B7076C(0LL, method);
  BlankEarth__OnPress(earthCore, 0LL);
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B7076C(0LL, method);
  BlankEarth__OnRelease(earthCore, 0LL);
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8

  if ( (byte_435161C & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_435161C = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventItemEventBtn->klass;
  if ( !klass
    || (genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle) == 0LL
    || (TitleInfoControl__setBackBtnSprite(genericContainerHandle, 3, 0LL),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0LL)
    || (BlankEarth__SetFocusEarthPoint(
          (BlankEarth_o *)genericContainerHandle,
          this->fields._spotId_k__BackingField,
          0LL),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_B7076C(genericContainerHandle, method);
  }
  BlankEarth__SetState((BlankEarth_o *)genericContainerHandle, 3, 0LL);
}


void __fastcall BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__PlaySpotUniqueAnim(
        BlankEarthPoint_o *this,
        int32_t animIndex,
        bool isQuick,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  if ( isQuick )
  {
    BlankEarthPoint__SetAnimationToEnd(this, animIndex, (const MethodInfo *)isQuick);
    ActionExtensions__Call(finishCallback, 0LL);
  }
  else
  {
    this->fields.animIndex = animIndex;
    BlankEarthPoint__ChangeState(this, 9, finishCallback, (const MethodInfo *)finishCallback);
  }
}


void __fastcall BlankEarthPoint__RevealOrConcealSpotAnim(
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
        ActionExtensions__Call(finishCallback, 0LL);
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


void __fastcall BlankEarthPoint__SetAnimationToEnd(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_String_o *AnimName; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_o *v7; // x20
  __int64 v8; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_4351620 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351620 = 1;
  }
  AnimName = BlankEarthPoint__GetAnimName(this, index, method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  v7 = AnimName;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) && !System_String__IsNullOrEmpty(v7, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (UnityEngine_Animation__Rewind(Item, 0LL), (Item = this->fields.anim) == 0LL)
      || (UnityEngine_Animation__Play_51542184(Item, v7, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0LL)) == 0LL )
    {
      sub_B7076C(Item, v8);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
  }
}


void __fastcall BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 bSpotInfo; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **nextSprite; // x22
  UnityEngine_Component_array *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **loopIconSprite; // x22
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **lastTimeLabel; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **noticeNumberComp; // x22
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *v37; // x20
  bool v38; // w20
  Il2CppClass *klass; // x8
  _BOOL8 v40; // x0
  __int64 v41; // x1
  UnityEngine_Object_o *v42; // x20
  struct MapControl_SpotInfo_o *v43; // x8
  int32_t freeQuestCount; // w21
  UnityEngine_Object_o *v45; // x20
  int32_t spotId_k__BackingField; // w20
  TerminalPramsManager_c *v47; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v49; // w20
  UILabel_o *v50; // x20
  UnityEngine_Object_o *v51; // x20
  struct MapControl_SpotInfo_o *v52; // x8
  int32_t questCount; // w20
  Il2CppClass *v54; // x8
  _BOOL8 v55; // x0
  __int64 v56; // x1
  int v57; // w21
  __int64 v58; // x0
  __int64 v59; // x0
  System_Collections_Generic_List_Enumerator_T__o v60; // [xsp+8h] [xbp-78h] BYREF
  int v61[2]; // [xsp+20h] [xbp-60h]
  int v62; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_4351619 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Component___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&StringLiteral_12484/*"SPOT_FREE_QUEST_LAST_TIME"*/);
    byte_4351619 = 1;
  }
  memset(&v63, 0, sizeof(v63));
  v62 = 0;
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_B706AC(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_84;
  nextSprite = (System_Int32_array **)this->fields.nextSprite;
  v14 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_B70754(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( !v14->max_length )
    goto LABEL_85;
  v14->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_B70630((BattleServantConfConponent_o *)v14->m_Items, nextSprite, v7, v8, v9, v10, v11, v12);
  loopIconSprite = (System_Int32_array **)this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_B70754(this->fields.loopIconSprite, v14->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( v14->max_length <= 1 )
    goto LABEL_85;
  v14->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[1], loopIconSprite, v15, v16, v17, v18, v19, v20);
  lastTimeLabel = (System_Int32_array **)this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_B70754(this->fields.lastTimeLabel, v14->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( v14->max_length <= 2 )
    goto LABEL_85;
  v14->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[2], lastTimeLabel, v22, v23, v24, v25, v26, v27);
  noticeNumberComp = (System_Int32_array **)this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_B70754(this->fields.noticeNumberComp, v14->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_86:
      v59 = sub_B7078C(bSpotInfo);
      sub_B70738(v59, 0LL);
    }
  }
  if ( v14->max_length <= 3 )
  {
LABEL_85:
    v58 = sub_B70798(bSpotInfo);
    sub_B70738(v58, 0LL);
  }
  v14->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_B70630((BattleServantConfConponent_o *)&v14->m_Items[3], noticeNumberComp, v29, v30, v31, v32, v33, v34);
  BlankEarthPoint__ActivateEachComponent(0, v14, v36);
  if ( !isDisp )
    return;
  v37 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v37, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_84;
    v38 = bSpotInfo;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v60,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.areaInfoList,
      (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v63 = v60;
    while ( 1 )
    {
      v40 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v63,
              (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v40 )
        break;
      if ( !v63.fields.current )
        sub_B7076C(v40, v41);
      klass = v63.fields.current[7].klass;
      if ( !klass )
        sub_B7076C(v40, v41);
      v38 = LOBYTE(klass->_1.byval_arg.bits) != 0;
    }
    v61[0] = 152;
    v62 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v63,
      (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v62 = 0;
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, v38, 0LL);
  }
  v42 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bSpotInfo = UnityEngine_Object__op_Inequality(v42, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v43 = this->fields.bSpotInfo;
    if ( !v43 )
      goto LABEL_84;
    freeQuestCount = v43->fields.freeQuestCount;
    v45 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v45, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434EFC3 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434EFC3 = 1;
      }
      v47 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v47 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v47->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v49 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_84;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v49, 0LL);
      v50 = this->fields.lastTimeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12484/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v50 )
        goto LABEL_84;
      UILabel__set_text(v50, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v51 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bSpotInfo = UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v52 = this->fields.bSpotInfo;
    if ( v52 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v52->fields.questCount;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v60,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bSpotInfo,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v63 = v60;
        while ( 1 )
        {
          v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v63,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v55 )
            break;
          if ( !v63.fields.current )
            sub_B7076C(v55, v56);
          v54 = v63.fields.current[7].klass;
          if ( !v54 )
            sub_B7076C(v55, v56);
          questCount += LODWORD(v54->_1.namespaze);
        }
        v61[0] = 375;
        v57 = ++v62;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v63,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        if ( v57 && v61[v57 - 1] == 375 )
          v62 = v57 - 1;
        bSpotInfo = (__int64)this->fields.noticeNumberComp;
        if ( bSpotInfo )
        {
          NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)bSpotInfo, questCount, 0LL);
          if ( questCount )
            return;
          bSpotInfo = (__int64)this->fields.noticeNumberComp;
          if ( bSpotInfo )
          {
            bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
            if ( bSpotInfo )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_84:
    sub_B7076C(bSpotInfo, v6);
  }
}


void __fastcall BlankEarthPoint__SetBtnColliderEnable(
        BlankEarthPoint_o *this,
        bool isEnabled,
        const MethodInfo *method)
{
  UnityEngine_Collider_o *pointCol; // x0
  bool v5; // w1

  pointCol = (UnityEngine_Collider_o *)this->fields.pointCol;
  if ( !pointCol )
    sub_B7076C(0LL, isEnabled);
  v5 = !this->fields.isForceTouchDisabled && isEnabled;
  UnityEngine_Collider__set_enabled(pointCol, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetChangedUiRootLocalPosition(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o position,
        const MethodInfo *method)
{
  this->fields.changedUiRootPosition = position;
}


void __fastcall BlankEarthPoint__SetContrast(BlankEarthPoint_o *this, float val, const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint__SetDispType(BlankEarthPoint_o *this, int32_t dispType, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    bSpotInfo->fields.dispType = dispType;
}


void __fastcall BlankEarthPoint__SetEarthObj(
        BlankEarthPoint_o *this,
        BlankEarthSpotEntity_o *spotEnt,
        BlankEarth_o *obj,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  UnityEngine_Object_o *nextSprite; // x23
  QuestTree_o *questInfoList; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  UISprite_o *v18; // x23
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x0
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v42; // x0
  __int64 v43; // x1
  _DWORD *data; // x9
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v45; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v47; // x0
  const MethodInfo *v48; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x2
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4351618 & 1) == 0 )
  {
    sub_B70694(&AtlasManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&StringLiteral_19673/*"icon_spot_next"*/);
    byte_4351618 = 1;
  }
  memset(&methoda.name, 0, 24);
  LODWORD(methoda.invoker_method) = 0;
  methoda.methodPointer = 0LL;
  nextSprite = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  questInfoList = (QuestTree_o *)UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL);
  if ( ((unsigned __int8)questInfoList & 1) != 0 )
  {
    v18 = this->fields.nextSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    questInfoList = (QuestTree_o *)AtlasManager__SetEventUI(v18, (System_String_o *)StringLiteral_19673/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_31;
  this->fields._warId_k__BackingField = spotEnt->fields.warId;
  this->fields._spotId_k__BackingField = spotEnt->fields.id;
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._spotName_k__BackingField,
    (System_Int32_array **)name,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.earthCore,
    (System_Int32_array **)obj,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.earthCamera = camera;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.earthCamera,
    (System_Int32_array **)camera,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  questInfoList = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !questInfoList )
    goto LABEL_31;
  SpotInfo = QuestTree__GetSpotInfo(questInfoList, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bSpotInfo,
    (System_Int32_array **)SpotInfo,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  areaInfoList = this->fields.areaInfoList;
  if ( !areaInfoList )
    goto LABEL_28;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)areaInfoList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (questInfoList = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_31:
    sub_B7076C(questInfoList, v11);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)questInfoList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v42 )
      break;
    if ( !methoda.return_type )
      sub_B7076C(v42, v43);
    data = methoda.return_type[7].data;
    if ( data && this->fields._spotId_k__BackingField == data[18] )
    {
      v45 = this->fields.areaInfoList;
      if ( !v45 )
        sub_B7076C(0LL, v43);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v45,
        (EventMissionProgressRequest_Argument_ProgressData_o *)methoda.return_type,
        (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  methoda.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&methoda.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &methoda);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v56 = UnityEngine_Quaternion__LookRotation_36098220(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v56;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v56, 0LL);
  v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v47, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v48);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v50);
  BlankEarthPoint__UpdateDisp(this, 1, v51);
  this->fields.isForceTouchDisabled = (spotEnt->fields.flag & 2) != 0;
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v52);
}


void __fastcall BlankEarthPoint__SetTouchType(BlankEarthPoint_o *this, int32_t touchType, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8

  bSpotInfo = this->fields.bSpotInfo;
  if ( bSpotInfo )
    bSpotInfo->fields.touchType = touchType;
}


void __fastcall BlankEarthPoint__ShowQAADispEffect(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *qaaDispEffObj; // x20
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  UnityEngine_Object_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4351621 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4351621 = 1;
  }
  qaaDispEffObj = (UnityEngine_Object_o *)this->fields.qaaDispEffObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(qaaDispEffObj, 0LL, 0LL) )
  {
    spotDispEffectObj = (UnityEngine_Object_o *)this->fields.spotDispEffectObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    p_spotDispEffectObj = &this->fields.spotDispEffectObj;
    if ( UnityEngine_Object__op_Inequality(spotDispEffectObj, 0LL, 0LL) )
    {
      v6 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v6, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.spotDispEffectObj, 0LL, v7, v8, v9, v10, v11, v12);
    }
    v13 = this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B7076C(0LL, v15);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)v13,
                                        transform,
                                        (const MethodInfo_1D588A0 *)Method_UnityEngine_Object_Instantiate_GameObject____69308712);
    GameObjectExtensions__SetLocalPosition(v17, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform(v17, 0LL);
    this->fields.spotDispEffectObj = v17;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.spotDispEffectObj,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
}


void __fastcall BlankEarthPoint__StateQaaEnd(BlankEarthPoint_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Action_o *stateEndAct; // x19

  stateEndAct = this->fields.stateEndAct;
  BlankEarthPoint__ChangeState(this, 1, 0LL, v2);
  ActionExtensions__Call(stateEndAct, 0LL);
}


void __fastcall BlankEarthPoint__SwitchDispUIRoot(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0

  if ( (byte_435161B & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435161B = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v7 = this->fields.uiRoot;
    if ( !v7 )
      sub_B7076C(0LL, v6);
    UnityEngine_GameObject__SetActive(v7, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_B7076C(0LL, method);
  QAASpotStateController__Update(stateController, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__UpdateDisp(BlankEarthPoint_o *this, bool isForce, const MethodInfo *method)
{
  struct MapControl_SpotInfo_o *bSpotInfo; // x8
  int32_t dispType; // w21
  UnityEngine_GameObject_o *gameObject; // x20
  float x; // s0
  float y; // s1
  float z; // s2
  bool v10; // w21
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  UnityEngine_Animation_o *anim; // x0

  if ( !this->fields._mtIsUpdate_k__BackingField && !isForce )
    return;
  bSpotInfo = this->fields.bSpotInfo;
  if ( !bSpotInfo )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    goto LABEL_7;
  }
  dispType = bSpotInfo->fields.dispType;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !dispType )
  {
LABEL_7:
    *(UnityEngine_Vector3_o *)&x = UnityEngine_Vector3__get_zero(0LL);
    v10 = 0;
    goto LABEL_8;
  }
  x = this->fields._selfScale_k__BackingField.fields.x;
  y = this->fields._selfScale_k__BackingField.fields.y;
  z = this->fields._selfScale_k__BackingField.fields.z;
  v10 = 1;
LABEL_8:
  GameObjectExtensions__SetLocalScale(gameObject, *(UnityEngine_Vector3_o *)&x, 0LL);
  if ( !v10 )
  {
    anim = this->fields.anim;
    if ( !anim )
      sub_B7076C(0LL, v11);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v12);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  float x; // s0
  float y; // s1
  float z; // s2

  if ( (byte_435161A & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435161A = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v5 = this->fields.pinObject;
    if ( !v5 )
      sub_B7076C(0LL, v4);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v5, 0LL);
    uiRoot = this->fields.uiRoot;
    if ( activeSelf )
    {
      x = this->fields.changedUiRootPosition.fields.x;
      y = this->fields.changedUiRootPosition.fields.y;
      z = this->fields.changedUiRootPosition.fields.z;
    }
    else
    {
      *(UnityEngine_Vector3_o *)&x = UnityEngine_Vector3__get_zero(0LL);
    }
    GameObjectExtensions__SetLocalPosition(uiRoot, *(UnityEngine_Vector3_o *)&x, 0LL);
  }
}


int32_t __fastcall BlankEarthPoint__get_AnimIndex(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields.animIndex;
}


UnityEngine_Quaternion_o __fastcall BlankEarthPoint__get_FocusQua(BlankEarthPoint_o *this, const MethodInfo *method)
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


bool __fastcall BlankEarthPoint__get_mRequestDontUpdateDisp(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._mRequestDontUpdateDisp_k__BackingField;
}


bool __fastcall BlankEarthPoint__get_mtIsUpdate(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._mtIsUpdate_k__BackingField;
}


UnityEngine_Vector3_o __fastcall BlankEarthPoint__get_selfScale(BlankEarthPoint_o *this, const MethodInfo *method)
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


int32_t __fastcall BlankEarthPoint__get_spotId(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotId_k__BackingField;
}


System_String_o *__fastcall BlankEarthPoint__get_spotName(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._spotName_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall BlankEarthPoint__get_tweenTarget(
        BlankEarthPoint_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


int32_t __fastcall BlankEarthPoint__get_warId(BlankEarthPoint_o *this, const MethodInfo *method)
{
  return this->fields._warId_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__set_FocusQua(
        BlankEarthPoint_o *this,
        UnityEngine_Quaternion_o value,
        const MethodInfo *method)
{
  this->fields._FocusQua_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_mRequestDontUpdateDisp(
        BlankEarthPoint_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._mRequestDontUpdateDisp_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_mtIsUpdate(BlankEarthPoint_o *this, bool value, const MethodInfo *method)
{
  this->fields._mtIsUpdate_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__set_selfScale(
        BlankEarthPoint_o *this,
        UnityEngine_Vector3_o value,
        const MethodInfo *method)
{
  this->fields._selfScale_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_spotId(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._spotId_k__BackingField = value;
}


void __fastcall BlankEarthPoint__set_spotName(
        BlankEarthPoint_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._spotName_k__BackingField = value;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._spotName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BlankEarthPoint__set_warId(BlankEarthPoint_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._warId_k__BackingField = value;
}


void __fastcall BlankEarthPoint_NotDisplayPinTargetOffset___ctor(
        BlankEarthPoint_NotDisplayPinTargetOffset_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint_OffsetTargetObject___ctor(
        BlankEarthPoint_OffsetTargetObject_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *v2; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_434ED30 & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434ED30 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_25;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)UnityEngine_Animation__get_Item(
                                                               (UnityEngine_Animation_o *)this,
                                                               v2->fields._animName_5__2,
                                                               0LL);
    if ( !this )
      goto LABEL_25;
    if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) < 1.0 )
    {
      totalTime_5__3 = v2->fields._totalTime_5__3;
      if ( totalTime_5__3 <= 10.0 )
      {
        v2->fields._totalTime_5__3 = totalTime_5__3 + UnityEngine_Time__get_deltaTime(0LL);
LABEL_20:
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v2->fields.__2__current = 0LL;
            p__2__current = &v2->fields.__2__current;
            sub_B70630(p__2__current);
            result = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return result;
          }
          goto LABEL_23;
        }
LABEL_25:
        sub_B7076C(this, method);
      }
    }
LABEL_23:
    ActionExtensions__Call(v2->fields.finishCallback, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    v2->fields._animName_5__2 = BlankEarthPoint__GetAnimName(_4__this, v2->fields.index, 0LL);
    sub_B70630(&v2->fields._animName_5__2);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(v2->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_25;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_25;
      UnityEngine_Animation__Play_51542184((UnityEngine_Animation_o *)this, v2->fields._animName_5__2, 0LL);
      v2->fields._totalTime_5__3 = 0.0;
      goto LABEL_20;
    }
    goto LABEL_23;
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__97_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__97__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint___c__DisplayClass87_0___ctor(
        BlankEarthPoint___c__DisplayClass87_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint___c__DisplayClass87_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass87_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  BlankEarthPoint___c__DisplayClass87_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BlankEarthPoint___c__DisplayClass87_0_o *)UnityEngine_Component__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_B7076C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}