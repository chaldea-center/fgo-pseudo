void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  QAASpotStateController_o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_40F90E2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_UIWidget__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v8);
    sub_B16FFC(&QAASpotStateController_TypeInfo, v9);
    byte_40F90E2 = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  this->fields.isForward = 1;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_3134EC0;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.areaInfoList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v17,
                                                                                                  v18,
                                                                                                  v19,
                                                                                                  v20);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v21,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listBillboardChildWidget,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v32 = (QAASpotStateController_o *)sub_B170CC(QAASpotStateController_TypeInfo, v28, v29, v30, v31);
  QAASpotStateController___ctor(v32, 0LL);
  this->fields.stateController = v32;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stateController,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BlankEarthPoint___c__DisplayClass81_0_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x20

  if ( (byte_40F90DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Component___ctor__, targets);
    sub_B16FFC(&System_Action_Component__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_Component___, v8);
    sub_B16FFC(&Method_BasicHelper_ForEach_Component___, v9);
    sub_B16FFC(&Method_BlankEarthPoint___c__DisplayClass81_0__ActivateEachComponent_b__0__, v10);
    sub_B16FFC(&BlankEarthPoint___c__DisplayClass81_0_TypeInfo, v11);
    byte_40F90DC = 1;
  }
  v12 = (BlankEarthPoint___c__DisplayClass81_0_o *)sub_B170CC(
                                                     BlankEarthPoint___c__DisplayClass81_0_TypeInfo,
                                                     targets,
                                                     method,
                                                     v3,
                                                     v4);
  BlankEarthPoint___c__DisplayClass81_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.value = value;
  v13 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_Component___);
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Component__TypeInfo,
                                                                               v14,
                                                                               v15,
                                                                               v16,
                                                                               v17);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_BlankEarthPoint___c__DisplayClass81_0__ActivateEachComponent_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_Component___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v13,
    (System_Action_T__o *)v18,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BlankEarthPoint_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v11; // x20
  int max_length; // w9
  UnityEngine_Component_o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BlankEarthPoint_OffsetTargetObject_array *v23; // x8
  __int64 v24; // x21
  unsigned __int64 v25; // x22
  unsigned __int64 v26; // x9
  BlankEarthPoint_OffsetTargetObject_o *v27; // x9
  UnityEngine_Transform_o *targetObject; // x0
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v30; // s0
  int v31; // s1
  int v32; // s2
  _DWORD *v33; // x8
  QAASpotStateController_o *stateController; // x0
  UnityEngine_Object_o *anim; // x20
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Int32_array **v43; // x1
  _QWORD **v44; // x21
  __int64 v45; // x20
  __int16 v46; // w8
  __int64 v47; // x20
  __int64 v48; // x20
  __int64 v49; // x20

  v3 = this;
  if ( (byte_40F90D4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_AnimationState___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_OfType_AnimationState___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    this = (BlankEarthPoint_o *)sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v9);
    byte_40F90D4 = 1;
  }
  uiBillboardTransforms = v3->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v11 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v11 >= max_length )
        break;
      if ( (unsigned int)v11 >= max_length )
      {
LABEL_43:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v13 = (UnityEngine_Component_o *)uiBillboardTransforms->m_Items[v11];
      if ( v13 )
      {
        ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(v13, 1, (const MethodInfo_18BD854 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____66819968);
        if ( v3->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v3->fields.listBillboardChildWidget,
            ComponentsInChildren_WarBoardControlPlayTalkUiComponent,
            (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v3->fields.uiBillboardTransforms;
          ++v11;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_42;
    }
  }
  offsetTargetObjects = v3->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v16 = (System_Int32_array **)sub_B17014(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length, v2);
    v3->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v16;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v3->fields.defaultLocalPosOffsetTargetObjects,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v23 = v3->fields.offsetTargetObjects;
    if ( !v23 )
      goto LABEL_42;
    v24 = 0LL;
    v25 = 0LL;
    while ( 1 )
    {
      v26 = v23->max_length;
      if ( (__int64)v25 >= (int)v26 )
        break;
      if ( v25 >= v26 )
        goto LABEL_43;
      v27 = v23->m_Items[v25];
      if ( v27 )
      {
        targetObject = v27->fields.targetObject;
        if ( !targetObject )
          goto LABEL_42;
        defaultLocalPosOffsetTargetObjects = v3->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(targetObject, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_42;
        if ( v25 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_43;
        v33 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v24);
        v33[8] = v30;
        v33[9] = v31;
        v33[10] = v32;
        v23 = v3->fields.offsetTargetObjects;
      }
      ++v25;
      v24 += 12LL;
      if ( !v23 )
        goto LABEL_42;
    }
  }
  stateController = v3->fields.stateController;
  if ( !stateController )
LABEL_42:
    sub_B170D4();
  QAASpotStateController__Init(stateController, (QAASpotStateController_IMapSpot_o *)v3, 0LL);
  anim = (UnityEngine_Object_o *)v3->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v42 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)v3->fields.anim,
                                                                 (const MethodInfo_19BD52C *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v43 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v42,
                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v44 = (_QWORD **)Method_System_Array_Empty_AnimationState___;
    v45 = **((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6);
    v46 = *(_WORD *)(v45 + 306);
    if ( (v46 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6));
      v46 = *(_WORD *)(v45 + 306);
    }
    if ( (v46 & 0x400) != 0 )
    {
      v47 = *v44[6];
      if ( (*(_BYTE *)(v47 + 306) & 1) == 0 )
        sub_AAFCFC(*v44[6]);
      if ( !*(_DWORD *)(v47 + 224) )
      {
        v48 = *v44[6];
        if ( (*(_BYTE *)(v48 + 306) & 1) == 0 )
          sub_AAFCFC(*v44[6]);
        j_il2cpp_runtime_class_init_0(v48);
      }
    }
    v49 = *v44[6];
    if ( (*(_BYTE *)(v49 + 306) & 1) == 0 )
      sub_AAFCFC(*v44[6]);
    v43 = **(System_Int32_array ****)(v49 + 184);
  }
  v3->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v43;
  sub_B16F98((BattleServantConfConponent_o *)&v3->fields.animationStateArray, v43, v36, v37, v38, v39, v40, v41);
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
  QAASpotStateController_o *stateController; // x0

  this->fields.stateEndAct = finishCallback;
  sub_B16F98(
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
    sub_B170D4();
  QAASpotStateController__SetState(stateController, state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_40F90E0 & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthPoint__CoPlayAnimUntilFinish_d__91_TypeInfo, *(_QWORD *)&index);
    byte_40F90E0 = 1;
  }
  v8 = sub_B170CC(BlankEarthPoint__CoPlayAnimUntilFinish_d__91_TypeInfo, *(_QWORD *)&index, finishCallback, method, v4);
  BlankEarthPoint__CoPlayAnimUntilFinish_d__91___ctor((BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = index;
  *(_QWORD *)(v8 + 48) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v8 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BlankEarthPoint__GetAnimName(
        BlankEarthPoint_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_40F90E1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index);
    byte_40F90E1 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               index,
                                               0LL,
                                               (const MethodInfo_18B82A4 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x20
  UnityEngine_Object_o *v9; // x20
  WebViewManager_o *Instance; // x0
  bool IsExistCommand; // w20
  clsQuestCheck_o *v12; // x0
  int32_t v13; // w0
  struct BlankEarth_o *earthCore; // x8
  int32_t v15; // w2
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_40F90DD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v5);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    byte_40F90DD = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AAFCFC(v8);
  v9 = **(UnityEngine_Object_o ***)(v8 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    IsExistCommand = QuestAfterAction__IsExistCommand(
                       (QuestAfterAction_o *)Instance,
                       0,
                       this->fields._spotId_k__BackingField,
                       0LL);
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
  v12 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !v12
    || (v13 = clsQuestCheck__GetBeforeClearQuestId(v12, IsExistCommand, 0LL), (earthCore = this->fields.earthCore) == 0LL) )
  {
LABEL_22:
    sub_B170D4();
  }
  v15 = v13;
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v15,
             0,
             -1,
             0LL);
  else
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
  float v6; // s0
  float v7; // s1
  float v8; // s2
  UnityEngine_Component_o *earthCore; // x0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_GameObject_o *v13; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o back; // 0:s0.4,4:s1.4,8:s2.4

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v6 = GameObjectExtensions__GetPosition(gameObject, 0LL);
  earthCore = (UnityEngine_Component_o *)this->fields.earthCore;
  if ( !earthCore )
    sub_B170D4();
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = UnityEngine_Component__get_gameObject(earthCore, 0LL);
  Position = GameObjectExtensions__GetPosition(v13, 0LL);
  Position.fields.x = v10 - Position.fields.x;
  Position.fields.y = v11 - Position.fields.y;
  Position.fields.z = v12 - Position.fields.z;
  *vec = Position;
  normalized = UnityEngine_Vector3__get_normalized(Position, (const MethodInfo *)vec);
  x = normalized.fields.x;
  y = normalized.fields.y;
  z = normalized.fields.z;
  *vec = normalized;
  back = UnityEngine_Vector3__get_back(0LL);
  return (float)(z * back.fields.z) + (float)((float)(x * back.fields.x) + (float)(y * back.fields.y));
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
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  float DotXYZ; // s8
  _BOOL4 isForward; // w23
  unsigned int v8; // s0
  UnityEngine_Object_o *earthCamera; // x20
  float v10; // s9
  UnityEngine_Object_o *pointCol; // x20
  UnityEngine_Camera_o *v12; // x20
  UnityEngine_Transform_o *transform; // x0
  int v14; // s0
  UnityEngine_Object_o *uiRoot; // x20
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  UnityEngine_Transform_o *v20; // x20
  UnityEngine_Transform_o *v21; // x21
  int v22; // s0
  __int64 activeInHierarchy; // x0
  const MethodInfo *v26; // x1
  __int64 v27; // x2
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v29; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v31; // x24
  UnityEngine_Object_o *v32; // x20
  struct UnityEngine_Transform_array *v33; // x8
  UnityEngine_Transform_o *v34; // x20
  int v35; // s0
  struct System_Collections_Generic_List_UIWidget__o *listBillboardChildWidget; // x24
  __int64 v39; // x20
  int size; // w8
  unsigned int v41; // w21
  UnityEngine_Component_o *v42; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_UIWidget__o *v44; // x24
  __int64 v45; // x0
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v48; // x24
  __int64 v49; // x25
  unsigned __int64 v50; // x9
  unsigned __int64 v51; // x26
  __int64 v52; // x8
  UnityEngine_Transform_o *v53; // x20
  float v54; // s12
  float y; // s11
  float v56; // s10
  UnityEngine_Transform_o *v57; // x0
  float v58; // s12
  float v59; // s11
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v61; // s10
  float v62; // s1
  struct UnityEngine_Vector3_array *v63; // x8
  float x; // s12
  UnityEngine_Object_o *pinObject; // x21
  float v66; // s11
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_Transform_o *v68; // x0
  float v69; // s0
  float v70; // s1
  float v71; // s2
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  float *v73; // x8
  UnityEngine_Object_o *v74; // x20
  UnityEngine_Collider_o *v75; // x0
  UnityEngine_Object_o *v76; // x20
  UnityEngine_Collider_o *v77; // x0
  UnityEngine_Object_o *uiRootWidget; // x20
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v81; // s9
  float v82; // s10
  long double v83; // q0
  struct UIWidget_o *v84; // x0
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F90D5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F90D5 = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &zero, v5);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  v8 = (unsigned int)UnityEngine_Vector3__get_zero(0LL);
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  v10 = *(float *)&v8;
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
      v12 = this->fields.earthCamera;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_113;
      *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Transform__get_position(transform, 0LL);
      if ( !v12 )
        goto LABEL_113;
      v10 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_40663552(v12, *(UnityEngine_Vector3_o *)&v14, 0LL));
      if ( v10 < 0.0 && this->fields.isForward )
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
    v18 = this->fields.uiRoot;
    if ( !v18 )
      goto LABEL_113;
    v19 = UnityEngine_GameObject__get_transform(v18, 0LL);
    if ( !this->fields.earthCore )
      goto LABEL_113;
    v20 = v19;
    v21 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
    *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_up(0LL);
    if ( !v20 )
      goto LABEL_113;
    UnityEngine_Transform__LookAt(v20, v21, *(UnityEngine_Vector3_o *)&v22, 0LL);
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v29 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v31 = v29 - 4;
        if ( v29 - 4 >= (int)max_length )
          break;
        if ( v31 >= max_length )
          goto LABEL_114;
        v32 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v29);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        activeInHierarchy = UnityEngine_Object__op_Equality(v32, 0LL, 0LL);
        if ( (activeInHierarchy & 1) == 0 )
        {
          v33 = this->fields.uiBillboardTransforms;
          if ( !v33 )
            goto LABEL_113;
          if ( v31 >= v33->max_length )
          {
LABEL_114:
            sub_B17100(activeInHierarchy, v26, v27);
            sub_B170A0();
          }
          v34 = (UnityEngine_Transform_o *)*((_QWORD *)&v33->obj.klass + v29);
          *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v34 )
            goto LABEL_113;
          UnityEngine_Transform__set_eulerAngles(v34, *(UnityEngine_Vector3_o *)&v35, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v29;
        if ( !uiBillboardTransforms )
          goto LABEL_113;
      }
      listBillboardChildWidget = this->fields.listBillboardChildWidget;
      if ( !listBillboardChildWidget )
        goto LABEL_113;
      v39 = 4LL;
      while ( 1 )
      {
        size = listBillboardChildWidget->fields._size;
        v41 = v39 - 4;
        if ( (int)v39 - 4 >= size )
          break;
        if ( size <= v41 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v42 = (UnityEngine_Component_o *)*((_QWORD *)&listBillboardChildWidget->fields._items->obj.klass + v39);
        if ( !v42 )
          goto LABEL_113;
        gameObject = UnityEngine_Component__get_gameObject(v42, 0LL);
        if ( !gameObject )
          goto LABEL_113;
        activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL);
        if ( (activeInHierarchy & 1) != 0 )
        {
          v44 = this->fields.listBillboardChildWidget;
          if ( !v44 )
            goto LABEL_113;
          if ( v44->fields._size <= v41 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v45 = *((_QWORD *)&v44->fields._items->obj.klass + v39);
          if ( !v45 )
            goto LABEL_113;
          activeInHierarchy = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 792LL))(
                                v45,
                                *(_QWORD *)(*(_QWORD *)v45 + 800LL));
        }
        listBillboardChildWidget = this->fields.listBillboardChildWidget;
        ++v39;
        if ( !listBillboardChildWidget )
          goto LABEL_113;
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
          v48 = 0LL;
          v49 = 4LL;
          while ( 1 )
          {
            v50 = offsetTargetObjects->max_length;
            v51 = v49 - 4;
            if ( v49 - 4 >= (int)v50 )
              break;
            if ( v51 >= v50 )
              goto LABEL_114;
            v52 = *((_QWORD *)&offsetTargetObjects->obj.klass + v49);
            if ( v52 )
            {
              v53 = *(UnityEngine_Transform_o **)(v52 + 16);
              if ( !v53 )
                goto LABEL_113;
              v54 = *(float *)(v52 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v52 + 16), 0LL);
              y = lossyScale.fields.y;
              LODWORD(v56) = (unsigned int)UnityEngine_Transform__get_position(v53, 0LL);
              v57 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !v57 )
                goto LABEL_113;
              v58 = v54 * y;
              position = UnityEngine_Transform__get_position(v57, 0LL);
              v59 = position.fields.y;
              v88 = UnityEngine_Transform__get_position(v53, 0LL);
              v88.fields.y = v58 + v59;
              v88.fields.x = v56;
              UnityEngine_Transform__set_position(v53, v88, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_113;
              if ( v51 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_114;
              v61 = defaultLocalPosOffsetTargetObjects->m_Items[v48].fields.y;
              *(UnityEngine_Vector3_o *)(&v62 - 1) = UnityEngine_Transform__get_localPosition(v53, 0LL);
              v63 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v63 )
                goto LABEL_113;
              if ( v51 >= v63->max_length )
                goto LABEL_114;
              x = v63->m_Items[v48 + 1].fields.x;
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v66 = v62;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
                goto LABEL_71;
              v67 = this->fields.pinObject;
              if ( !v67 )
                goto LABEL_113;
              activeInHierarchy = UnityEngine_GameObject__get_activeSelf(v67, 0LL);
              if ( (activeInHierarchy & 1) == 0 )
              {
                notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
                if ( !notDisplayPinTargetOffset )
                  goto LABEL_113;
                if ( v51 >= notDisplayPinTargetOffset->max_length )
                  goto LABEL_114;
                v73 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v49);
                if ( !v73 )
                  goto LABEL_113;
                v68 = v53;
                v69 = v61 + v73[6];
                v70 = v66 + v73[7];
                v71 = x + v73[8];
              }
              else
              {
LABEL_71:
                v68 = v53;
                v69 = v61;
                v70 = v66;
                v71 = x;
              }
              UnityEngine_Transform__set_localPosition(v68, *(UnityEngine_Vector3_o *)&v69, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v49;
            ++v48;
            if ( !offsetTargetObjects )
              goto LABEL_113;
          }
        }
      }
    }
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v26);
  }
  if ( !isForward || this->fields.isForward )
  {
    if ( v10 >= 0.0 && !this->fields.isDisp && this->fields.isForward )
    {
      v76 = (UnityEngine_Object_o *)this->fields.pointCol;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      {
        v77 = (UnityEngine_Collider_o *)this->fields.pointCol;
        if ( !v77 )
          goto LABEL_113;
        UnityEngine_Collider__set_enabled(v77, 1, 0LL);
        this->fields.isDisp = 1;
      }
    }
  }
  else
  {
    v74 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
    {
      v75 = (UnityEngine_Collider_o *)this->fields.pointCol;
      if ( !v75 )
        goto LABEL_113;
      UnityEngine_Collider__set_enabled(v75, 0, 0LL);
    }
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
      v81 = this->fields.dispSpriteDot;
    else
      v81 = this->fields.noDispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v82 = this->fields.noDispSpriteDot;
    else
      v82 = this->fields.dispSpriteDot;
    *(float *)&v83 = UnityEngine_Mathf__Clamp(DotXYZ, v81, v82, 0LL);
    v84 = this->fields.uiRootWidget;
    if ( v84 )
    {
      *(float *)&v83 = (float)(*(float *)&v83 - v81) / (float)(v82 - v81);
      if ( this->fields.dispSpriteDot < this->fields.noDispSpriteDot )
        *(float *)&v83 = 1.0 - *(float *)&v83;
      ((void (__fastcall *)(struct UIWidget_o *, Il2CppMethodPointer, long double))v84->klass->vtable._8_set_alpha.method)(
        v84,
        v84->klass->vtable._9_CalculateFinalAlpha.methodPtr,
        v83);
      return;
    }
LABEL_113:
    sub_B170D4();
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40F90DB & 1) == 0 )
  {
    sub_B16FFC(&Method_BlankEarthPoint_OnClickSpot__, method);
    byte_40F90DB = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B170D4();
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B17004(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_B16FE0(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B170D4();
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B170D4();
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v3; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TitleInfoControl_o *mTitleInfo; // x0
  const MethodInfo *v6; // x2
  BlankEarth_o *earthCore; // x0
  const MethodInfo *v8; // x2
  BlankEarth_o *v9; // x0

  if ( (byte_40F90DA & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F90DA = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v3->static_fields->mInstance;
  if ( !mInstance
    || (mTitleInfo = mInstance->fields.mTitleInfo) == 0LL
    || (TitleInfoControl__setBackBtnSprite(mTitleInfo, 3, 0LL), (earthCore = this->fields.earthCore) == 0LL)
    || (BlankEarth__SetFocusEarthPoint(earthCore, this->fields._spotId_k__BackingField, v6),
        (v9 = this->fields.earthCore) == 0LL) )
  {
    sub_B170D4();
  }
  BlankEarth__SetState(v9, 3, v8);
}


void __fastcall BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetAnimationToEnd(BlankEarthPoint_o *this, int32_t index, const MethodInfo *method)
{
  System_String_o *AnimName; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_o *v7; // x20
  UnityEngine_Animation_o *v8; // x0
  UnityEngine_Animation_o *v9; // x0
  UnityEngine_Animation_o *v10; // x0
  UnityEngine_AnimationState_o *Item; // x0

  if ( (byte_40F90DE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_40F90DE = 1;
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
    v8 = this->fields.anim;
    if ( !v8
      || (UnityEngine_Animation__Rewind(v8, 0LL), (v9 = this->fields.anim) == 0LL)
      || (UnityEngine_Animation__Play_49744236(v9, v7, 0LL), (v10 = this->fields.anim) == 0LL)
      || (Item = UnityEngine_Animation__get_Item(v10, v7, 0LL)) == 0LL )
    {
      sub_B170D4();
    }
    UnityEngine_AnimationState__set_normalizedTime(Item, 1.0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **nextSprite; // x22
  UnityEngine_Component_array *v22; // x21
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **loopIconSprite; // x22
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Int32_array **lastTimeLabel; // x22
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **noticeNumberComp; // x22
  const MethodInfo *v41; // x2
  UnityEngine_Object_o *v42; // x20
  MapControl_SpotInfo_o *bSpotInfo; // x0
  bool IsNextDisp; // w0
  bool v45; // w20
  Il2CppClass *klass; // x8
  UnityEngine_Component_o *v47; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *v49; // x20
  struct MapControl_SpotInfo_o *v50; // x8
  int32_t freeQuestCount; // w21
  UnityEngine_Object_o *v52; // x20
  __int64 v53; // x1
  int32_t spotId_k__BackingField; // w20
  TerminalPramsManager_c *v55; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  UnityEngine_Component_o *v57; // x0
  bool v58; // w20
  UnityEngine_GameObject_o *v59; // x0
  UILabel_o *v60; // x20
  System_String_o *v61; // x0
  UnityEngine_Component_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Object_o *v64; // x20
  struct MapControl_SpotInfo_o *v65; // x8
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x0
  int32_t questCount; // w20
  Il2CppClass *v68; // x8
  int v69; // w21
  NoticeNumberComponent_o *v70; // x0
  UnityEngine_Component_o *v71; // x0
  UnityEngine_GameObject_o *v72; // x0
  System_Collections_Generic_List_Enumerator_T__o v73; // [xsp+8h] [xbp-78h] BYREF
  int v74[2]; // [xsp+20h] [xbp-60h]
  int v75; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_40F90D7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Component___TypeInfo, isDisp);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_12263, v12);
    byte_40F90D7 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v75 = 0;
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  v13 = sub_B17014(UnityEngine_Component___TypeInfo, 4LL, method);
  if ( !v13 )
    goto LABEL_84;
  nextSprite = (System_Int32_array **)this->fields.nextSprite;
  v22 = (UnityEngine_Component_array *)v13;
  if ( nextSprite )
  {
    v13 = sub_B170BC(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
    if ( !v13 )
      goto LABEL_86;
  }
  if ( !v22->max_length )
    goto LABEL_85;
  v22->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_B16F98((BattleServantConfConponent_o *)v22->m_Items, nextSprite, v15, v16, v17, v18, v19, v20);
  loopIconSprite = (System_Int32_array **)this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    v13 = sub_B170BC(this->fields.loopIconSprite, v22->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_86;
  }
  if ( v22->max_length <= 1 )
    goto LABEL_85;
  v22->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[1], loopIconSprite, v15, v23, v24, v25, v26, v27);
  lastTimeLabel = (System_Int32_array **)this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    v13 = sub_B170BC(this->fields.lastTimeLabel, v22->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_86;
  }
  if ( v22->max_length <= 2 )
    goto LABEL_85;
  v22->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[2], lastTimeLabel, v15, v29, v30, v31, v32, v33);
  noticeNumberComp = (System_Int32_array **)this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    v13 = sub_B170BC(this->fields.noticeNumberComp, v22->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_86:
      sub_B170F4(v13);
      sub_B170A0();
    }
  }
  if ( v22->max_length <= 3 )
  {
LABEL_85:
    sub_B17100(v13, v14, v15);
    sub_B170A0();
  }
  v22->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_B16F98((BattleServantConfConponent_o *)&v22->m_Items[3], noticeNumberComp, v15, v35, v36, v37, v38, v39);
  BlankEarthPoint__ActivateEachComponent(0, v22, v41);
  if ( !isDisp )
    return;
  v42 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v42, 0LL, 0LL) )
  {
    bSpotInfo = this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_84;
    IsNextDisp = MapControl_SpotInfo__IsNextDisp(bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_84;
    v45 = IsNextDisp;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v73,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.areaInfoList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v76 = v73;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v76,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
    {
      if ( !v76.fields.current )
        sub_B170D4();
      klass = v76.fields.current[7].klass;
      if ( !klass )
        sub_B170D4();
      v45 = LOBYTE(klass->_1.byval_arg.bits) != 0;
    }
    v74[0] = 152;
    v75 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v76,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v75 = 0;
    v47 = (UnityEngine_Component_o *)this->fields.nextSprite;
    if ( !v47 )
      goto LABEL_84;
    gameObject = UnityEngine_Component__get_gameObject(v47, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, v45, 0LL);
  }
  v49 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v49, 0LL, 0LL) )
  {
    v50 = this->fields.bSpotInfo;
    if ( !v50 )
      goto LABEL_84;
    freeQuestCount = v50->fields.freeQuestCount;
    v52 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v52, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6E3D )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v53);
        byte_40F6E3D = 1;
      }
      v55 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v55 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v55->static_fields;
      v57 = (UnityEngine_Component_o *)this->fields.lastTimeLabel;
      v58 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !v57 )
        goto LABEL_84;
      v59 = UnityEngine_Component__get_gameObject(v57, 0LL);
      if ( !v59 )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(v59, freeQuestCount > 0 && v58, 0LL);
      v60 = this->fields.lastTimeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v61 = LocalizationManager__Get((System_String_o *)StringLiteral_12263, 0LL);
      if ( !v60 )
        goto LABEL_84;
      UILabel__set_text(v60, v61, 0LL);
    }
    v62 = (UnityEngine_Component_o *)this->fields.loopIconSprite;
    if ( !v62 )
      goto LABEL_84;
    v63 = UnityEngine_Component__get_gameObject(v62, 0LL);
    if ( !v63 )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(v63, freeQuestCount > 0, 0LL);
  }
  v64 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
  {
    v65 = this->fields.bSpotInfo;
    if ( v65 )
    {
      areaInfoList = this->fields.areaInfoList;
      if ( areaInfoList )
      {
        questCount = v65->fields.questCount;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v73,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)areaInfoList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v76 = v73;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v76,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
        {
          if ( !v76.fields.current )
            sub_B170D4();
          v68 = v76.fields.current[7].klass;
          if ( !v68 )
            sub_B170D4();
          questCount += LODWORD(v68->_1.namespaze);
        }
        v74[0] = 375;
        v69 = ++v75;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v76,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        if ( v69 && v74[v69 - 1] == 375 )
          v75 = v69 - 1;
        v70 = this->fields.noticeNumberComp;
        if ( v70 )
        {
          NoticeNumberComponent__SetNumber(v70, questCount, 0LL);
          if ( questCount )
            return;
          v71 = (UnityEngine_Component_o *)this->fields.noticeNumberComp;
          if ( v71 )
          {
            v72 = UnityEngine_Component__get_gameObject(v71, 0LL);
            if ( v72 )
            {
              UnityEngine_GameObject__SetActive(v72, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_84:
    sub_B170D4();
  }
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *nextSprite; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UISprite_o *v26; // x23
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  QuestTree_o *v41; // x0
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x0
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *questInfoList; // x0
  _DWORD *data; // x9
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v53; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v55; // x0
  const MethodInfo *v56; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v58; // x2
  const MethodInfo *v59; // x2
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F90D6 & 1) == 0 )
  {
    sub_B16FFC(&AtlasManager_TypeInfo, spotEnt);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v17);
    sub_B16FFC(&StringLiteral_19296, v18);
    byte_40F90D6 = 1;
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
  if ( UnityEngine_Object__op_Inequality(nextSprite, 0LL, 0LL) )
  {
    v26 = this->fields.nextSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI(v26, (System_String_o *)StringLiteral_19296, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_31;
  this->fields._warId_k__BackingField = spotEnt->fields.warId;
  this->fields._spotId_k__BackingField = spotEnt->fields.id;
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._spotName_k__BackingField,
    (System_Int32_array **)name,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.earthCore,
    (System_Int32_array **)obj,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  this->fields.earthCamera = camera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.earthCamera,
    (System_Int32_array **)camera,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  v41 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !v41 )
    goto LABEL_31;
  SpotInfo = QuestTree__GetSpotInfo(v41, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.bSpotInfo,
    (System_Int32_array **)SpotInfo,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  areaInfoList = this->fields.areaInfoList;
  if ( !areaInfoList )
    goto LABEL_28;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)areaInfoList,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (questInfoList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_31:
    sub_B170D4();
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    questInfoList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__) )
  {
    if ( !methoda.return_type )
      sub_B170D4();
    data = methoda.return_type[7].data;
    if ( data && this->fields._spotId_k__BackingField == data[18] )
    {
      v53 = this->fields.areaInfoList;
      if ( !v53 )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)methoda.return_type,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  methoda.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&methoda.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &methoda);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v63 = UnityEngine_Quaternion__LookRotation_34840476(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v63;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v63, 0LL);
  v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v55, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v56);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v58);
  BlankEarthPoint__UpdateDisp(this, 1, v59);
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
  __int64 v3; // x1
  UnityEngine_Object_o *qaaDispEffObj; // x20
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  UnityEngine_Object_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v17; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_40F90DF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F90DF = 1;
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
      v7 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v7, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.spotDispEffectObj, 0LL, v8, v9, v10, v11, v12, v13);
    }
    v14 = this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B170D4();
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)v14,
                                        transform,
                                        (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
    GameObjectExtensions__SetLocalPosition(v17, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform(v17, 0LL);
    this->fields.spotDispEffectObj = v17;
    sub_B16F98(
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__SwitchDispUIRoot(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Object_o *uiRoot; // x21
  UnityEngine_GameObject_o *v6; // x0

  if ( (byte_40F90D9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isDisp);
    byte_40F90D9 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v6 = this->fields.uiRoot;
    if ( !v6 )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_B170D4();
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
  const MethodInfo *v11; // x2
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
      sub_B170D4();
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v11);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  UnityEngine_GameObject_o *v4; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_Transform_o *transform; // x0
  int v9; // s0

  if ( (byte_40F90D8 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F90D8 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v4 = this->fields.pinObject;
    if ( v4 )
    {
      activeSelf = UnityEngine_GameObject__get_activeSelf(v4, 0LL);
      uiRoot = this->fields.uiRoot;
      if ( !activeSelf )
      {
        *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Vector3__get_zero(0LL);
        goto LABEL_14;
      }
      v7 = this->fields.pinObject;
      if ( v7 )
      {
        transform = UnityEngine_GameObject__get_transform(v7, 0LL);
        if ( transform )
        {
          *(UnityEngine_Vector3_o *)&v9 = UnityEngine_Transform__get_localPosition(transform, 0LL);
LABEL_14:
          GameObjectExtensions__SetLocalPosition(uiRoot, *(UnityEngine_Vector3_o *)&v9, 0LL);
          return;
        }
      }
    }
    sub_B170D4();
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
  sub_B16F98(
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


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__91___ctor(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__91__MoveNext(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  struct System_String_o *AnimName; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o *v12; // x22
  UnityEngine_Animation_o *v13; // x0
  UnityEngine_Animation_o *v14; // x0
  UnityEngine_Animation_o *anim; // x0
  UnityEngine_AnimationState_o *Item; // x0
  float totalTime_5__3; // s8
  UnityEngine_Animation_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( (byte_40F7086 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7086 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    anim = _4__this->fields.anim;
    if ( !anim )
      goto LABEL_25;
    Item = UnityEngine_Animation__get_Item(anim, this->fields._animName_5__2, 0LL);
    if ( !Item )
      goto LABEL_25;
    if ( UnityEngine_AnimationState__get_normalizedTime(Item, 0LL) < 1.0 )
    {
      totalTime_5__3 = this->fields._totalTime_5__3;
      if ( totalTime_5__3 <= 10.0 )
      {
        this->fields._totalTime_5__3 = totalTime_5__3 + UnityEngine_Time__get_deltaTime(0LL);
LABEL_20:
        v18 = _4__this->fields.anim;
        if ( v18 )
        {
          if ( UnityEngine_Animation__get_isPlaying(v18, 0LL) )
          {
            this->fields.__2__current = 0LL;
            p__2__current = &this->fields.__2__current;
            sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v19, v20, v21, v22, v23, v24);
            result = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return result;
          }
          goto LABEL_23;
        }
LABEL_25:
        sub_B170D4();
      }
    }
LABEL_23:
    ActionExtensions__Call(this->fields.finishCallback, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    AnimName = BlankEarthPoint__GetAnimName(_4__this, this->fields.index, 0LL);
    this->fields._animName_5__2 = AnimName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._animName_5__2,
      (System_Int32_array **)AnimName,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    v12 = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(v12, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(this->fields._animName_5__2, 0LL) )
    {
      v13 = _4__this->fields.anim;
      if ( !v13 )
        goto LABEL_25;
      UnityEngine_Animation__Rewind(v13, 0LL);
      v14 = _4__this->fields.anim;
      if ( !v14 )
        goto LABEL_25;
      UnityEngine_Animation__Play_49744236(v14, this->fields._animName_5__2, 0LL);
      this->fields._totalTime_5__3 = 0.0;
      goto LABEL_20;
    }
    goto LABEL_23;
  }
  return 0;
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__91__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BlankEarthPoint__CoPlayAnimUntilFinish_d__91__System_Collections_IEnumerator_Reset(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__91_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
}


Il2CppObject *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__91__System_Collections_IEnumerator_get_Current(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BlankEarthPoint__CoPlayAnimUntilFinish_d__91__System_IDisposable_Dispose(
        BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BlankEarthPoint___c__DisplayClass81_0___ctor(
        BlankEarthPoint___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BlankEarthPoint___c__DisplayClass81_0___ActivateEachComponent_b__0(
        BlankEarthPoint___c__DisplayClass81_0_o *this,
        UnityEngine_Component_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( !x || (gameObject = UnityEngine_Component__get_gameObject(x, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, this->fields.value, 0LL);
}