void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  __int64 v25; // x2
  QAASpotStateController_o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_42140F9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_UIWidget__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v6);
    sub_B0D8A4(&QAASpotStateController_TypeInfo, v7);
    byte_42140F9 = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  this->fields.isForward = 1;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_3203460;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.areaInfoList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_UIWidget__TypeInfo,
                                                                                                  v15,
                                                                                                  v16);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listBillboardChildWidget,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = (QAASpotStateController_o *)sub_B0D974(QAASpotStateController_TypeInfo, v24, v25);
  QAASpotStateController___ctor(v26, 0LL);
  this->fields.stateController = v26;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.stateController,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  BlankEarthPoint___c__DisplayClass81_0_o *v10; // x21
  __int64 v11; // x0
  System_Collections_Generic_IEnumerable_T__o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x20

  if ( (byte_42140F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_Component___ctor__, targets);
    sub_B0D8A4(&System_Action_Component__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_Component___, v6);
    sub_B0D8A4(&Method_BasicHelper_ForEach_Component___, v7);
    sub_B0D8A4(&Method_BlankEarthPoint___c__DisplayClass81_0__ActivateEachComponent_b__0__, v8);
    sub_B0D8A4(&BlankEarthPoint___c__DisplayClass81_0_TypeInfo, v9);
    byte_42140F3 = 1;
  }
  v10 = (BlankEarthPoint___c__DisplayClass81_0_o *)sub_B0D974(
                                                     BlankEarthPoint___c__DisplayClass81_0_TypeInfo,
                                                     targets,
                                                     method);
  BlankEarthPoint___c__DisplayClass81_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.value = value;
  v12 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_Component___);
  v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_Component__TypeInfo,
                                                                               v13,
                                                                               v14);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_BlankEarthPoint___c__DisplayClass81_0__ActivateEachComponent_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_Component___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v12,
    (System_Action_T__o *)v15,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarthPoint_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v10; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct BlankEarthPoint_OffsetTargetObject_array *v20; // x8
  __int64 v21; // x21
  unsigned __int64 v22; // x22
  unsigned __int64 v23; // x9
  BlankEarthPoint_OffsetTargetObject_o *v24; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v26; // s0
  int v27; // s1
  int v28; // s2
  _DWORD *v29; // x8
  UnityEngine_Object_o *anim; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int32_array **v38; // x1
  _QWORD **v39; // x21
  __int64 v40; // x20
  __int16 v41; // w8
  __int64 v42; // x20
  __int64 v43; // x20
  __int64 v44; // x20
  __int64 v45; // x0

  v2 = this;
  if ( (byte_42140EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_AnimationState___, method);
    sub_B0D8A4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_AnimationState___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    this = (BlankEarthPoint_o *)sub_B0D8A4(&UnityEngine_Vector3___TypeInfo, v8);
    byte_42140EB = 1;
  }
  uiBillboardTransforms = v2->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v10 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v10 >= max_length )
        break;
      if ( (unsigned int)v10 >= max_length )
      {
LABEL_43:
        v45 = sub_B0D9A8(this);
        sub_B0D948(v45, 0LL);
      }
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v10];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_170EAD0 *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67969408);
        if ( v2->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v2->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v2->fields.uiBillboardTransforms;
          ++v10;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_42;
    }
  }
  offsetTargetObjects = v2->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v13 = (System_Int32_array **)sub_B0D8BC(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v2->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v13;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v2->fields.defaultLocalPosOffsetTargetObjects,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v20 = v2->fields.offsetTargetObjects;
    if ( !v20 )
      goto LABEL_42;
    v21 = 0LL;
    v22 = 0LL;
    while ( 1 )
    {
      v23 = v20->max_length;
      if ( (__int64)v22 >= (int)v23 )
        break;
      if ( v22 >= v23 )
        goto LABEL_43;
      v24 = v20->m_Items[v22];
      if ( v24 )
      {
        this = (BlankEarthPoint_o *)v24->fields.targetObject;
        if ( !this )
          goto LABEL_42;
        defaultLocalPosOffsetTargetObjects = v2->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_42;
        if ( v22 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_43;
        v29 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v21);
        v29[8] = v26;
        v29[9] = v27;
        v29[10] = v28;
        v20 = v2->fields.offsetTargetObjects;
      }
      ++v22;
      v21 += 12LL;
      if ( !v20 )
        goto LABEL_42;
    }
  }
  this = (BlankEarthPoint_o *)v2->fields.stateController;
  if ( !this )
LABEL_42:
    sub_B0D97C(this);
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v2, 0LL);
  anim = (UnityEngine_Object_o *)v2->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                 (System_Collections_IEnumerable_o *)v2->fields.anim,
                                                                 (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v38 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v37,
                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v39 = (_QWORD **)Method_System_Array_Empty_AnimationState___;
    v40 = **((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6);
    v41 = *(_WORD *)(v40 + 306);
    if ( (v41 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6));
      v41 = *(_WORD *)(v40 + 306);
    }
    if ( (v41 & 0x400) != 0 )
    {
      v42 = *v39[6];
      if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
        sub_AA65A4(*v39[6]);
      if ( !*(_DWORD *)(v42 + 224) )
      {
        v43 = *v39[6];
        if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
          sub_AA65A4(*v39[6]);
        j_il2cpp_runtime_class_init_0(v43);
      }
    }
    v44 = *v39[6];
    if ( (*(_BYTE *)(v44 + 306) & 1) == 0 )
      sub_AA65A4(*v39[6]);
    v38 = **(System_Int32_array ****)(v44 + 184);
  }
  v2->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v38;
  sub_B0D840((BattleServantConfConponent_o *)&v2->fields.animationStateArray, v38, v31, v32, v33, v34, v35, v36);
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
  sub_B0D840(
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
    sub_B0D97C(0LL);
  QAASpotStateController__SetState(stateController, state, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BlankEarthPoint__CoPlayAnimUntilFinish(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
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

  if ( (byte_42140F7 & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthPoint__CoPlayAnimUntilFinish_d__91_TypeInfo, *(_QWORD *)&index);
    byte_42140F7 = 1;
  }
  v7 = sub_B0D974(BlankEarthPoint__CoPlayAnimUntilFinish_d__91_TypeInfo, *(_QWORD *)&index, finishCallback);
  BlankEarthPoint__CoPlayAnimUntilFinish_d__91___ctor((BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B0D97C(v8);
  *(_QWORD *)(v7 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v7 + 48),
    (System_Int32_array **)finishCallback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BlankEarthPoint__GetAnimName(
        BlankEarthPoint_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v6; // x0

  if ( (byte_42140F8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_AnimationState___, *(_QWORD *)&index);
    byte_42140F8 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v6 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               index,
                                               0LL,
                                               (const MethodInfo_1709498 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
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
  QuestAfterAction_o *Instance; // x0
  bool IsExistCommand; // w20
  struct BlankEarth_o *earthCore; // x8
  int32_t v13; // w2
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_42140F4 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v6);
    byte_42140F4 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v7 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v8 = **(_QWORD **)(v7 + 192);
  if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
    sub_AA65A4(v8);
  v9 = **(UnityEngine_Object_o ***)(v8 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
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
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance
    || (Instance = (QuestAfterAction_o *)clsQuestCheck__GetBeforeClearQuestId(
                                           (clsQuestCheck_o *)Instance,
                                           IsExistCommand,
                                           0LL),
        (earthCore = this->fields.earthCore) == 0LL) )
  {
LABEL_22:
    sub_B0D97C(Instance);
  }
  v13 = (int)Instance;
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v13,
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
    sub_B0D97C(0LL);
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
  UnityEngine_Transform_o *v18; // x20
  UnityEngine_Transform_o *v19; // x21
  int v20; // s0
  const MethodInfo *v23; // x1
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v25; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v27; // x24
  UnityEngine_Object_o *v28; // x20
  struct UnityEngine_Transform_array *v29; // x8
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  struct System_Collections_Generic_List_UIWidget__o *listBillboardChildWidget; // x24
  __int64 v35; // x20
  int size; // w8
  unsigned int v37; // w21
  struct System_Collections_Generic_List_UIWidget__o *v38; // x24
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v41; // x24
  __int64 v42; // x25
  unsigned __int64 v43; // x9
  unsigned __int64 v44; // x26
  __int64 v45; // x8
  UnityEngine_Transform_o *v46; // x20
  float v47; // s12
  float y; // s11
  float v49; // s10
  float v50; // s12
  float v51; // s11
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v53; // s10
  float v54; // s1
  struct UnityEngine_Vector3_array *v55; // x8
  float x; // s12
  UnityEngine_Object_o *pinObject; // x21
  float v58; // s11
  UnityEngine_Transform_o *v59; // x0
  float v60; // s0
  float v61; // s1
  float v62; // s2
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  float *v64; // x8
  UnityEngine_Object_o *v65; // x20
  UnityEngine_Object_o *v66; // x20
  UnityEngine_Object_o *uiRootWidget; // x20
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v70; // s9
  float v71; // s10
  long double v72; // q0
  __int64 v73; // x0
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42140EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__get_Count__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42140EC = 1;
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
      v10 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_40755064(v12, *(UnityEngine_Vector3_o *)&v14, 0LL));
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
    transform = (UnityEngine_Transform_o *)this->fields.uiRoot;
    if ( !transform )
      goto LABEL_113;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !this->fields.earthCore )
      goto LABEL_113;
    v18 = transform;
    v19 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
    *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_up(0LL);
    if ( !v18 )
      goto LABEL_113;
    UnityEngine_Transform__LookAt(v18, v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v25 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v27 = v25 - 4;
        if ( v25 - 4 >= (int)max_length )
          break;
        if ( v27 >= max_length )
          goto LABEL_114;
        v28 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v25);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          v29 = this->fields.uiBillboardTransforms;
          if ( !v29 )
            goto LABEL_113;
          if ( v27 >= v29->max_length )
          {
LABEL_114:
            v73 = sub_B0D9A8(transform);
            sub_B0D948(v73, 0LL);
          }
          v30 = (UnityEngine_Transform_o *)*((_QWORD *)&v29->obj.klass + v25);
          *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v30 )
            goto LABEL_113;
          UnityEngine_Transform__set_eulerAngles(v30, *(UnityEngine_Vector3_o *)&v31, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v25;
        if ( !uiBillboardTransforms )
          goto LABEL_113;
      }
      listBillboardChildWidget = this->fields.listBillboardChildWidget;
      if ( !listBillboardChildWidget )
        goto LABEL_113;
      v35 = 4LL;
      while ( 1 )
      {
        size = listBillboardChildWidget->fields._size;
        v37 = v35 - 4;
        if ( (int)v35 - 4 >= size )
          break;
        if ( size <= v37 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        transform = (UnityEngine_Transform_o *)*((_QWORD *)&listBillboardChildWidget->fields._items->obj.klass + v35);
        if ( !transform )
          goto LABEL_113;
        transform = (UnityEngine_Transform_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)transform,
                                                 0LL);
        if ( !transform )
          goto LABEL_113;
        transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                 (UnityEngine_GameObject_o *)transform,
                                                 0LL);
        if ( ((unsigned __int8)transform & 1) != 0 )
        {
          v38 = this->fields.listBillboardChildWidget;
          if ( !v38 )
            goto LABEL_113;
          if ( v38->fields._size <= v37 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
          transform = (UnityEngine_Transform_o *)*((_QWORD *)&v38->fields._items->obj.klass + v35);
          if ( !transform )
            goto LABEL_113;
          transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, void *))transform->klass[2]._1.namespaze)(
                                                   transform,
                                                   transform->klass[2]._1.byval_arg.data);
        }
        listBillboardChildWidget = this->fields.listBillboardChildWidget;
        ++v35;
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
          v41 = 0LL;
          v42 = 4LL;
          while ( 1 )
          {
            v43 = offsetTargetObjects->max_length;
            v44 = v42 - 4;
            if ( v42 - 4 >= (int)v43 )
              break;
            if ( v44 >= v43 )
              goto LABEL_114;
            v45 = *((_QWORD *)&offsetTargetObjects->obj.klass + v42);
            if ( v45 )
            {
              v46 = *(UnityEngine_Transform_o **)(v45 + 16);
              if ( !v46 )
                goto LABEL_113;
              v47 = *(float *)(v45 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v45 + 16), 0LL);
              y = lossyScale.fields.y;
              LODWORD(v49) = (unsigned int)UnityEngine_Transform__get_position(v46, 0LL);
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_113;
              v50 = v47 * y;
              position = UnityEngine_Transform__get_position(transform, 0LL);
              v51 = position.fields.y;
              v77 = UnityEngine_Transform__get_position(v46, 0LL);
              v77.fields.y = v50 + v51;
              v77.fields.x = v49;
              UnityEngine_Transform__set_position(v46, v77, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_113;
              if ( v44 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_114;
              v53 = defaultLocalPosOffsetTargetObjects->m_Items[v41].fields.y;
              *(UnityEngine_Vector3_o *)(&v54 - 1) = UnityEngine_Transform__get_localPosition(v46, 0LL);
              v55 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v55 )
                goto LABEL_113;
              if ( v44 >= v55->max_length )
                goto LABEL_114;
              x = v55->m_Items[v41 + 1].fields.x;
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              v58 = v54;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
                goto LABEL_71;
              transform = (UnityEngine_Transform_o *)this->fields.pinObject;
              if ( !transform )
                goto LABEL_113;
              transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__get_activeSelf(
                                                       (UnityEngine_GameObject_o *)transform,
                                                       0LL);
              if ( ((unsigned __int8)transform & 1) == 0 )
              {
                notDisplayPinTargetOffset = this->fields.notDisplayPinTargetOffset;
                if ( !notDisplayPinTargetOffset )
                  goto LABEL_113;
                if ( v44 >= notDisplayPinTargetOffset->max_length )
                  goto LABEL_114;
                v64 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v42);
                if ( !v64 )
                  goto LABEL_113;
                v59 = v46;
                v60 = v53 + v64[6];
                v61 = v58 + v64[7];
                v62 = x + v64[8];
              }
              else
              {
LABEL_71:
                v59 = v46;
                v60 = v53;
                v61 = v58;
                v62 = x;
              }
              UnityEngine_Transform__set_localPosition(v59, *(UnityEngine_Vector3_o *)&v60, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v42;
            ++v41;
            if ( !offsetTargetObjects )
              goto LABEL_113;
          }
        }
      }
    }
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v23);
  }
  if ( !isForward || this->fields.isForward )
  {
    if ( v10 >= 0.0 && !this->fields.isDisp && this->fields.isForward )
    {
      v66 = (UnityEngine_Object_o *)this->fields.pointCol;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v66, 0LL, 0LL) )
      {
        transform = (UnityEngine_Transform_o *)this->fields.pointCol;
        if ( !transform )
          goto LABEL_113;
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
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
    {
      transform = (UnityEngine_Transform_o *)this->fields.pointCol;
      if ( !transform )
        goto LABEL_113;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
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
LABEL_113:
    sub_B0D97C(transform);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  BlankEarth_o *earthCore; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42140F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BlankEarthPoint_OnClickSpot__, method);
    byte_42140F2 = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B0D97C(0LL);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v4 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 75) & 2) != 0 )
      v4 = (_QWORD *)sub_B0D8AC(Method_BlankEarthPoint_OnClickSpot__);
    v5 = (System_Reflection_MethodBase_o *)sub_B0D888(v4, v4[3]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v6);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B0D97C(this);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B0D97C(this);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42140F1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_42140F1 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    || (BlankEarth__SetFocusEarthPoint((BlankEarth_o *)genericContainerHandle, this->fields._spotId_k__BackingField, v5),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_B0D97C(genericContainerHandle);
  }
  BlankEarth__SetState((BlankEarth_o *)genericContainerHandle, 3, v6);
}


void __fastcall BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_42140F5 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&index);
    byte_42140F5 = 1;
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
      || (UnityEngine_Animation__Play_50564840(Item, v7, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v7, 0LL)) == 0LL )
    {
      sub_B0D97C(Item);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
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
  __int64 bSpotInfo; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **nextSprite; // x22
  UnityEngine_Component_array *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **loopIconSprite; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **lastTimeLabel; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **noticeNumberComp; // x22
  const MethodInfo *v43; // x2
  UnityEngine_Object_o *v44; // x20
  bool v45; // w20
  Il2CppClass *klass; // x8
  _BOOL8 v47; // x0
  UnityEngine_Object_o *v48; // x20
  struct MapControl_SpotInfo_o *v49; // x8
  int32_t freeQuestCount; // w21
  UnityEngine_Object_o *v51; // x20
  __int64 v52; // x1
  int32_t spotId_k__BackingField; // w20
  TerminalPramsManager_c *v54; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v56; // w20
  UILabel_o *v57; // x20
  UnityEngine_Object_o *v58; // x20
  struct MapControl_SpotInfo_o *v59; // x8
  int32_t questCount; // w20
  Il2CppClass *v61; // x8
  _BOOL8 v62; // x0
  int v63; // w21
  __int64 v64; // x0
  __int64 v65; // x0
  System_Collections_Generic_List_Enumerator_T__o v66; // [xsp+8h] [xbp-78h] BYREF
  int v67[2]; // [xsp+20h] [xbp-60h]
  int v68; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42140EE & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Component___TypeInfo, isDisp);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v8);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v11);
    sub_B0D8A4(&StringLiteral_12354/*"SPOT_FREE_QUEST_LAST_TIME"*/, v12);
    byte_42140EE = 1;
  }
  memset(&v69, 0, sizeof(v69));
  v68 = 0;
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_B0D8BC(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_84;
  nextSprite = (System_Int32_array **)this->fields.nextSprite;
  v21 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_B0D964(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( !v21->max_length )
    goto LABEL_85;
  v21->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_B0D840((BattleServantConfConponent_o *)v21->m_Items, nextSprite, v14, v15, v16, v17, v18, v19);
  loopIconSprite = (System_Int32_array **)this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_B0D964(this->fields.loopIconSprite, v21->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( v21->max_length <= 1 )
    goto LABEL_85;
  v21->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[1], loopIconSprite, v22, v23, v24, v25, v26, v27);
  lastTimeLabel = (System_Int32_array **)this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_B0D964(this->fields.lastTimeLabel, v21->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( v21->max_length <= 2 )
    goto LABEL_85;
  v21->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[2], lastTimeLabel, v29, v30, v31, v32, v33, v34);
  noticeNumberComp = (System_Int32_array **)this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_B0D964(this->fields.noticeNumberComp, v21->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_86:
      v65 = sub_B0D99C(bSpotInfo);
      sub_B0D948(v65, 0LL);
    }
  }
  if ( v21->max_length <= 3 )
  {
LABEL_85:
    v64 = sub_B0D9A8(bSpotInfo);
    sub_B0D948(v64, 0LL);
  }
  v21->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_B0D840((BattleServantConfConponent_o *)&v21->m_Items[3], noticeNumberComp, v36, v37, v38, v39, v40, v41);
  BlankEarthPoint__ActivateEachComponent(0, v21, v43);
  if ( !isDisp )
    return;
  v44 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v44, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_84;
    v45 = bSpotInfo;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v66,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.areaInfoList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v69 = v66;
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v69,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v47 )
        break;
      if ( !v69.fields.current )
        sub_B0D97C(v47);
      klass = v69.fields.current[7].klass;
      if ( !klass )
        sub_B0D97C(v47);
      v45 = LOBYTE(klass->_1.byval_arg.bits) != 0;
    }
    v67[0] = 152;
    v68 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v69,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v68 = 0;
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, v45, 0LL);
  }
  v48 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bSpotInfo = UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v49 = this->fields.bSpotInfo;
    if ( !v49 )
      goto LABEL_84;
    freeQuestCount = v49->fields.freeQuestCount;
    v51 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4211ADA )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v52);
        byte_4211ADA = 1;
      }
      v54 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v54 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v54->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v56 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_84;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v56, 0LL);
      v57 = this->fields.lastTimeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12354/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v57 )
        goto LABEL_84;
      UILabel__set_text(v57, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v58 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bSpotInfo = UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v59 = this->fields.bSpotInfo;
    if ( v59 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v59->fields.questCount;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v66,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bSpotInfo,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v69 = v66;
        while ( 1 )
        {
          v62 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v69,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v62 )
            break;
          if ( !v69.fields.current )
            sub_B0D97C(v62);
          v61 = v69.fields.current[7].klass;
          if ( !v61 )
            sub_B0D97C(v62);
          questCount += LODWORD(v61->_1.namespaze);
        }
        v67[0] = 375;
        v63 = ++v68;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v69,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        if ( v63 && v67[v63 - 1] == 375 )
          v68 = v63 - 1;
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
    sub_B0D97C(bSpotInfo);
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
  QuestTree_o *questInfoList; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UISprite_o *v27; // x23
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x22
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x0
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v51; // x0
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

  if ( (byte_42140ED & 1) == 0 )
  {
    sub_B0D8A4(&AtlasManager_TypeInfo, spotEnt);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v14);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v15);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v16);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_19431/*"icon_spot_next"*/, v18);
    byte_42140ED = 1;
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
    v27 = this->fields.nextSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    questInfoList = (QuestTree_o *)AtlasManager__SetEventUI(v27, (System_String_o *)StringLiteral_19431/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_31;
  this->fields._warId_k__BackingField = spotEnt->fields.warId;
  this->fields._spotId_k__BackingField = spotEnt->fields.id;
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._spotName_k__BackingField,
    (System_Int32_array **)name,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.earthCore,
    (System_Int32_array **)obj,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.earthCamera = camera;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.earthCamera,
    (System_Int32_array **)camera,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  questInfoList = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !questInfoList )
    goto LABEL_31;
  SpotInfo = QuestTree__GetSpotInfo(questInfoList, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_B0D840(
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
    (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (questInfoList = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_31:
    sub_B0D97C(questInfoList);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)questInfoList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v51 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v51 )
      break;
    if ( !methoda.return_type )
      sub_B0D97C(v51);
    data = methoda.return_type[7].data;
    if ( data && this->fields._spotId_k__BackingField == data[18] )
    {
      v53 = this->fields.areaInfoList;
      if ( !v53 )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
        (EventMissionProgressRequest_Argument_ProgressData_o *)methoda.return_type,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  methoda.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&methoda.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &methoda);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v63 = UnityEngine_Quaternion__LookRotation_34966288(normalized, 0LL);
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

  if ( (byte_42140F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject____68025336, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v3);
    byte_42140F6 = 1;
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
      UnityEngine_Object__Destroy_34935276(v7, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.spotDispEffectObj, 0LL, v8, v9, v10, v11, v12, v13);
    }
    v14 = this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B0D97C(0LL);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v17 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)v14,
                                        transform,
                                        (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_GameObject____68025336);
    GameObjectExtensions__SetLocalPosition(v17, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform(v17, 0LL);
    this->fields.spotDispEffectObj = v17;
    sub_B0D840(
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

  if ( (byte_42140F0 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, isDisp);
    byte_42140F0 = 1;
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
      sub_B0D97C(0LL);
    UnityEngine_GameObject__SetActive(v6, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v11);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *pinObject; // x20
  UnityEngine_GameObject_o *transform; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  int v7; // s0

  if ( (byte_42140EF & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42140EF = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    transform = this->fields.pinObject;
    if ( transform )
    {
      activeSelf = UnityEngine_GameObject__get_activeSelf(transform, 0LL);
      uiRoot = this->fields.uiRoot;
      if ( !activeSelf )
      {
        *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Vector3__get_zero(0LL);
        goto LABEL_14;
      }
      transform = this->fields.pinObject;
      if ( transform )
      {
        transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL);
        if ( transform )
        {
          *(UnityEngine_Vector3_o *)&v7 = UnityEngine_Transform__get_localPosition(
                                            (UnityEngine_Transform_o *)transform,
                                            0LL);
LABEL_14:
          GameObjectExtensions__SetLocalPosition(uiRoot, *(UnityEngine_Vector3_o *)&v7, 0LL);
          return;
        }
      }
    }
    sub_B0D97C(transform);
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
  sub_B0D840(
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
  BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *v2; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  System_String_o *AnimName; // x0
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v2 = this;
  if ( (byte_4211DBD & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211DBD = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_25;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)UnityEngine_Animation__get_Item(
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
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v2->fields.__2__current = 0LL;
            p__2__current = &v2->fields.__2__current;
            sub_B0D840(p__2__current, 0LL);
            result = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return result;
          }
          goto LABEL_23;
        }
LABEL_25:
        sub_B0D97C(this);
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
    AnimName = BlankEarthPoint__GetAnimName(_4__this, v2->fields.index, 0LL);
    v2->fields._animName_5__2 = AnimName;
    sub_B0D840(&v2->fields._animName_5__2, AnimName);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(v2->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_25;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__91_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_25;
      UnityEngine_Animation__Play_50564840((UnityEngine_Animation_o *)this, v2->fields._animName_5__2, 0LL);
      v2->fields._totalTime_5__3 = 0.0;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__91_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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
  BlankEarthPoint___c__DisplayClass81_0_o *v3; // x19

  if ( !x
    || (v3 = this,
        (this = (BlankEarthPoint___c__DisplayClass81_0_o *)UnityEngine_Component__get_gameObject(x, 0LL)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}