void __fastcall BlankEarthPoint___ctor(BlankEarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  QAASpotStateController_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7

  if ( (byte_42E7ED2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_UIWidget__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&QAASpotStateController_TypeInfo, v14, v15, v16);
    byte_42E7ED2 = 1;
  }
  this->fields.spotNamePos.fields.z = 0.0;
  *(_OWORD *)&this->fields.dispSpriteDot = xmmword_32A2360;
  this->fields.defaultPinObjectPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.changedUiRootPosition = UnityEngine_Vector3__get_zero(0LL);
  this->fields.isForward = 1;
  v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_MapControl_QuestInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v17,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_MapControl_QuestInfo___ctor__);
  this->fields.areaInfoList = (struct System_Collections_Generic_List_MapControl_QuestInfo__o *)v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.areaInfoList,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.listBillboardChildWidget = (struct System_Collections_Generic_List_UIWidget__o *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.listBillboardChildWidget,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (QAASpotStateController_o *)sub_B5D694(QAASpotStateController_TypeInfo);
  QAASpotStateController___ctor(v31, 0LL);
  this->fields.stateController = v31;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.stateController,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BlankEarthPoint__ActivateEachComponent(
        bool value,
        UnityEngine_Component_array *targets,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  BlankEarthPoint___c__DisplayClass87_0_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_T__o *v24; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x20

  if ( (byte_42E7ECC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Component___ctor__, (_DWORD)targets, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_Component__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_Component___, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_Component___, v12, v13, v14);
    sub_B5D5C4(&Method_BlankEarthPoint___c__DisplayClass87_0__ActivateEachComponent_b__0__, v15, v16, v17);
    sub_B5D5C4(&BlankEarthPoint___c__DisplayClass87_0_TypeInfo, v18, v19, v20);
    byte_42E7ECC = 1;
  }
  v21 = (BlankEarthPoint___c__DisplayClass87_0_o *)sub_B5D694(BlankEarthPoint___c__DisplayClass87_0_TypeInfo);
  BlankEarthPoint___c__DisplayClass87_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.value = value;
  v24 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)targets,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_Component___);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Component__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_BlankEarthPoint___c__DisplayClass87_0__ActivateEachComponent_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_Component___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v24,
    (System_Action_T__o *)v25,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_Component___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__Awake(BlankEarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarthPoint_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v24; // x20
  int max_length; // w9
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BlankEarthPoint_OffsetTargetObject_array *v34; // x8
  __int64 v35; // x21
  unsigned __int64 v36; // x22
  unsigned __int64 v37; // x9
  BlankEarthPoint_OffsetTargetObject_o *v38; // x9
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x23
  int v40; // s0
  int v41; // s1
  int v42; // s2
  _DWORD *v43; // x8
  UnityEngine_Object_o *anim; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  System_Int32_array **v52; // x1
  _QWORD **v53; // x22
  __int64 v54; // x20
  __int16 v55; // w8
  __int64 v56; // x20
  __int64 v57; // x20
  __int64 v58; // x20
  UnityEngine_Object_o *pinObject; // x20
  float x; // w8
  float y; // w9
  float z; // w10
  __int64 v63; // x0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_42E7EC4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_AnimationState___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_AnimationState___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_AnimationState___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__AddRange__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    this = (BlankEarthPoint_o *)sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v20, v21, v22);
    byte_42E7EC4 = 1;
  }
  uiBillboardTransforms = v4->fields.uiBillboardTransforms;
  if ( uiBillboardTransforms )
  {
    v24 = 0LL;
    while ( 1 )
    {
      max_length = uiBillboardTransforms->max_length;
      if ( (int)v24 >= max_length )
        break;
      if ( (unsigned int)v24 >= max_length )
      {
LABEL_51:
        v63 = sub_B5D6C8(this);
        sub_B5D668(v63, 0LL);
      }
      this = (BlankEarthPoint_o *)uiBillboardTransforms->m_Items[v24];
      if ( this )
      {
        this = (BlankEarthPoint_o *)UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                      (UnityEngine_Component_o *)this,
                                      1,
                                      (const MethodInfo_1ADE6CC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____68825880);
        if ( v4->fields.listBillboardChildWidget )
        {
          System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
            (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v4->fields.listBillboardChildWidget,
            (System_Collections_Generic_IEnumerable_T__o *)this,
            (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_UIWidget__AddRange__);
          uiBillboardTransforms = v4->fields.uiBillboardTransforms;
          ++v24;
          if ( uiBillboardTransforms )
            continue;
        }
      }
      goto LABEL_50;
    }
  }
  offsetTargetObjects = v4->fields.offsetTargetObjects;
  if ( offsetTargetObjects )
  {
    v27 = (System_Int32_array **)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, offsetTargetObjects->max_length);
    v4->fields.defaultLocalPosOffsetTargetObjects = (struct UnityEngine_Vector3_array *)v27;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v4->fields.defaultLocalPosOffsetTargetObjects,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
    v34 = v4->fields.offsetTargetObjects;
    if ( !v34 )
      goto LABEL_50;
    v35 = 0LL;
    v36 = 0LL;
    while ( 1 )
    {
      v37 = v34->max_length;
      if ( (__int64)v36 >= (int)v37 )
        break;
      if ( v36 >= v37 )
        goto LABEL_51;
      v38 = v34->m_Items[v36];
      if ( v38 )
      {
        this = (BlankEarthPoint_o *)v38->fields.targetObject;
        if ( !this )
          goto LABEL_50;
        defaultLocalPosOffsetTargetObjects = v4->fields.defaultLocalPosOffsetTargetObjects;
        *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
        if ( !defaultLocalPosOffsetTargetObjects )
          goto LABEL_50;
        if ( v36 >= defaultLocalPosOffsetTargetObjects->max_length )
          goto LABEL_51;
        v43 = (_DWORD *)((char *)defaultLocalPosOffsetTargetObjects + v35);
        v43[8] = v40;
        v43[9] = v41;
        v43[10] = v42;
        v34 = v4->fields.offsetTargetObjects;
      }
      ++v36;
      v35 += 12LL;
      if ( !v34 )
        goto LABEL_50;
    }
  }
  this = (BlankEarthPoint_o *)v4->fields.stateController;
  if ( !this )
    goto LABEL_50;
  QAASpotStateController__Init((QAASpotStateController_o *)this, (QAASpotStateController_IMapSpot_o *)v4, 0LL);
  anim = (UnityEngine_Object_o *)v4->fields.anim;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(anim, 0LL, 0LL) )
  {
    v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                 (System_Collections_IEnumerable_o *)v4->fields.anim,
                                                                 (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_AnimationState___);
    v52 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v51,
                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_AnimationState___);
  }
  else
  {
    v53 = (_QWORD **)Method_System_Array_Empty_AnimationState___;
    v54 = **((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6);
    v55 = *(_WORD *)(v54 + 306);
    if ( (v55 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_AnimationState___ + 6));
      v55 = *(_WORD *)(v54 + 306);
    }
    if ( (v55 & 0x400) != 0 )
    {
      v56 = *v53[6];
      if ( (*(_BYTE *)(v56 + 306) & 1) == 0 )
        sub_AF52C4(*v53[6]);
      if ( !*(_DWORD *)(v56 + 224) )
      {
        v57 = *v53[6];
        if ( (*(_BYTE *)(v57 + 306) & 1) == 0 )
          sub_AF52C4(*v53[6]);
        j_il2cpp_runtime_class_init_0(v57);
      }
    }
    v58 = *v53[6];
    if ( (*(_BYTE *)(v58 + 306) & 1) == 0 )
      sub_AF52C4(*v53[6]);
    v52 = **(System_Int32_array ****)(v58 + 184);
  }
  v4->fields.animationStateArray = (struct UnityEngine_AnimationState_array *)v52;
  sub_B5D560((BattleServantConfConponent_o *)&v4->fields.animationStateArray, v52, v45, v46, v47, v48, v49, v50);
  pinObject = (UnityEngine_Object_o *)v4->fields.pinObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    x = v4->fields.defaultPinObjectPosition.fields.x;
    y = v4->fields.defaultPinObjectPosition.fields.y;
    z = v4->fields.defaultPinObjectPosition.fields.z;
    goto LABEL_49;
  }
  this = (BlankEarthPoint_o *)v4->fields.pinObject;
  if ( !this
    || (this = (BlankEarthPoint_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL)) == 0LL )
  {
LABEL_50:
    sub_B5D69C(this, method);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  x = localPosition.fields.x;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  v4->fields.defaultPinObjectPosition = localPosition;
LABEL_49:
  v4->fields.changedUiRootPosition.fields.x = x;
  v4->fields.changedUiRootPosition.fields.y = y;
  v4->fields.changedUiRootPosition.fields.z = z;
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
  sub_B5D560(
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
    sub_B5D69C(0LL, v10);
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

  if ( (byte_42E7ED0 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthPoint__CoPlayAnimUntilFinish_d__97_TypeInfo, index, (_DWORD)finishCallback, method);
    byte_42E7ED0 = 1;
  }
  v7 = sub_B5D694(BlankEarthPoint__CoPlayAnimUntilFinish_d__97_TypeInfo);
  BlankEarthPoint__CoPlayAnimUntilFinish_d__97___ctor((BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = index;
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_B5D560(
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
  __int64 v3; // x3
  struct UnityEngine_AnimationState_array *animationStateArray; // x0
  UnityEngine_AnimationState_o *v7; // x0

  if ( (byte_42E7ED1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_AnimationState___, index, (_DWORD)method, v3);
    byte_42E7ED1 = 1;
  }
  animationStateArray = this->fields.animationStateArray;
  if ( animationStateArray
    && (v7 = (UnityEngine_AnimationState_o *)BasicHelper__IndexValue_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_(
                                               (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteStandFigure_array *)animationStateArray,
                                               index,
                                               0LL,
                                               (const MethodInfo_1AD9094 *)Method_BasicHelper_IndexValue_AnimationState___)) != 0LL )
  {
    return UnityEngine_AnimationState__get_name(v7, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  __int64 v23; // x20
  __int64 v24; // x20
  UnityEngine_Object_o *v25; // x20
  QuestAfterAction_o *Instance; // x0
  __int64 v27; // x1
  bool IsExistCommand; // w20
  int32_t v29; // w20
  BlankEarthSpotAddMaster_o *v30; // x21
  BlankEarthSpotAddEntity_o *PrioredAvailableEntity; // x0
  struct BlankEarth_o *earthCore; // x8
  BlankEarthSpotAnimStateManager_o *SpotAnimStateManager_k__BackingField; // x0

  if ( (byte_42E7ECD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotAddMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v20, v21, v22);
    byte_42E7ECD = 1;
  }
  v23 = *((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3);
  if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_QuestAfterAction__getInstance__ + 3));
  v24 = **(_QWORD **)(v23 + 192);
  if ( (*(_BYTE *)(v24 + 306) & 1) == 0 )
    sub_AF52C4(v24);
  v25 = **(UnityEngine_Object_o ***)(v24 + 184);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    Instance = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
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
  Instance = (QuestAfterAction_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  v29 = clsQuestCheck__GetBeforeClearQuestId((clsQuestCheck_o *)Instance, IsExistCommand, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (QuestAfterAction_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotAddMaster___);
  if ( !Instance )
    goto LABEL_29;
  v30 = (BlankEarthSpotAddMaster_o *)Instance;
  Instance = (QuestAfterAction_o *)BlankEarthSpotAddMaster__HasAnyRecord((BlankEarthSpotAddMaster_o *)Instance, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    PrioredAvailableEntity = BlankEarthSpotAddMaster__GetPrioredAvailableEntity(
                               v30,
                               1,
                               this->fields._spotId_k__BackingField,
                               v29,
                               0,
                               0LL);
    if ( PrioredAvailableEntity )
      return PrioredAvailableEntity->fields.targetId;
    return -1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
LABEL_29:
    sub_B5D69C(Instance, v27);
  SpotAnimStateManager_k__BackingField = earthCore->fields._SpotAnimStateManager_k__BackingField;
  if ( SpotAnimStateManager_k__BackingField )
    return BlankEarthSpotAnimStateManager__GetCurrentAnimIndex(
             SpotAnimStateManager_k__BackingField,
             this->fields._spotId_k__BackingField,
             v29,
             0,
             -1,
             0LL);
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
    sub_B5D69C(0LL, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x2
  float DotXYZ; // s8
  _BOOL4 isForward; // w23
  unsigned int v14; // s0
  UnityEngine_Object_o *earthCamera; // x20
  float v16; // s9
  UnityEngine_Object_o *pointCol; // x20
  UnityEngine_Camera_o *v18; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v20; // x1
  int v21; // s0
  UnityEngine_Object_o *uiRoot; // x20
  const MethodInfo *v25; // x1
  UnityEngine_Transform_o *v26; // x20
  UnityEngine_Transform_o *v27; // x21
  int v28; // s0
  struct UnityEngine_Transform_array *uiBillboardTransforms; // x8
  __int64 v32; // x21
  unsigned __int64 max_length; // x9
  unsigned __int64 v34; // x24
  UnityEngine_Object_o *v35; // x20
  struct UnityEngine_Transform_array *v36; // x8
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  struct System_Collections_Generic_List_UIWidget__o *listBillboardChildWidget; // x24
  __int64 v42; // x20
  int size; // w8
  unsigned int v44; // w21
  struct System_Collections_Generic_List_UIWidget__o *v45; // x24
  struct BlankEarthPoint_OffsetTargetObject_array *offsetTargetObjects; // x8
  struct MapControl_SpotInfo_o *bSpotInfo; // x9
  __int64 v48; // x24
  __int64 v49; // x25
  unsigned __int64 v50; // x9
  unsigned __int64 v51; // x26
  __int64 v52; // x8
  UnityEngine_Transform_o *v53; // x20
  float v54; // s13
  float y; // s10
  UnityEngine_Object_o *pinObject; // x21
  float x; // s11
  float v58; // s12
  struct UnityEngine_Vector3_array *defaultLocalPosOffsetTargetObjects; // x8
  float v60; // s10
  float v61; // s1
  struct UnityEngine_Vector3_array *v62; // x8
  float v63; // s12
  UnityEngine_Object_o *v64; // x21
  float v65; // s11
  struct BlankEarthPoint_NotDisplayPinTargetOffset_array *notDisplayPinTargetOffset; // x8
  struct BlankEarthPoint_OffsetTargetObject_array *v67; // x9
  float *v68; // x8
  UnityEngine_Transform_o *v69; // x0
  float v70; // s0
  float v71; // s1
  float v72; // s2
  UnityEngine_Object_o *v73; // x20
  const MethodInfo *v74; // x2
  UnityEngine_Object_o *uiRootWidget; // x20
  float dispSpriteDot; // s0
  float noDispSpriteDot; // s1
  float v78; // s9
  float v79; // s10
  long double v80; // q0
  UnityEngine_Object_o *v81; // x20
  const MethodInfo *v82; // x2
  __int64 v83; // x0
  UnityEngine_Vector3_o zero; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o lossyScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7EC5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_UIWidget__get_Item__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E7EC5 = 1;
  }
  zero = UnityEngine_Vector3__get_zero(0LL);
  DotXYZ = BlankEarthPoint__GetDotXYZ(this, &zero, v11);
  isForward = this->fields.isForward;
  this->fields.isForward = DotXYZ > -0.2;
  v14 = (unsigned int)UnityEngine_Vector3__get_zero(0LL);
  earthCamera = (UnityEngine_Object_o *)this->fields.earthCamera;
  v16 = *(float *)&v14;
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
      v18 = this->fields.earthCamera;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_121;
      *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(transform, 0LL);
      if ( !v18 )
        goto LABEL_121;
      v16 = COERCE_FLOAT(UnityEngine_Camera__WorldToViewportPoint_41565356(v18, *(UnityEngine_Vector3_o *)&v21, 0LL));
      if ( v16 < 0.0 && this->fields.isForward )
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
    BlankEarthPoint__UpdateSpotUIToPinObjectPosition(this, v25);
    transform = (UnityEngine_Transform_o *)this->fields.uiRoot;
    if ( !transform )
      goto LABEL_121;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !this->fields.earthCore )
      goto LABEL_121;
    v26 = transform;
    v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.earthCore, 0LL);
    *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Vector3__get_up(0LL);
    if ( !v26 )
      goto LABEL_121;
    UnityEngine_Transform__LookAt(v26, v27, *(UnityEngine_Vector3_o *)&v28, 0LL);
    uiBillboardTransforms = this->fields.uiBillboardTransforms;
    if ( uiBillboardTransforms )
    {
      v32 = 4LL;
      while ( 1 )
      {
        max_length = uiBillboardTransforms->max_length;
        v34 = v32 - 4;
        if ( v32 - 4 >= (int)max_length )
          break;
        if ( v34 >= max_length )
          goto LABEL_122;
        v35 = (UnityEngine_Object_o *)*((_QWORD *)&uiBillboardTransforms->obj.klass + v32);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(v35, 0LL, 0LL);
        if ( ((unsigned __int8)transform & 1) == 0 )
        {
          v36 = this->fields.uiBillboardTransforms;
          if ( !v36 )
            goto LABEL_121;
          if ( v34 >= v36->max_length )
          {
LABEL_122:
            v83 = sub_B5D6C8(transform);
            sub_B5D668(v83, 0LL);
          }
          v37 = (UnityEngine_Transform_o *)*((_QWORD *)&v36->obj.klass + v32);
          *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
          if ( !v37 )
            goto LABEL_121;
          UnityEngine_Transform__set_eulerAngles(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
        }
        uiBillboardTransforms = this->fields.uiBillboardTransforms;
        ++v32;
        if ( !uiBillboardTransforms )
          goto LABEL_121;
      }
      listBillboardChildWidget = this->fields.listBillboardChildWidget;
      if ( !listBillboardChildWidget )
        goto LABEL_121;
      v42 = 4LL;
      while ( 1 )
      {
        size = listBillboardChildWidget->fields._size;
        v44 = v42 - 4;
        if ( (int)v42 - 4 >= size )
          break;
        if ( size <= v44 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        transform = (UnityEngine_Transform_o *)*((_QWORD *)&listBillboardChildWidget->fields._items->obj.klass + v42);
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
          v45 = this->fields.listBillboardChildWidget;
          if ( !v45 )
            goto LABEL_121;
          if ( v45->fields._size <= v44 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          transform = (UnityEngine_Transform_o *)*((_QWORD *)&v45->fields._items->obj.klass + v42);
          if ( !transform )
            goto LABEL_121;
          transform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, void *))transform->klass[2]._1.namespaze)(
                                                   transform,
                                                   transform->klass[2]._1.byval_arg.data);
        }
        listBillboardChildWidget = this->fields.listBillboardChildWidget;
        ++v42;
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
          v48 = 0LL;
          v49 = 4LL;
          while ( 1 )
          {
            v50 = offsetTargetObjects->max_length;
            v51 = v49 - 4;
            if ( v49 - 4 >= (int)v50 )
              break;
            if ( v51 >= v50 )
              goto LABEL_122;
            v52 = *((_QWORD *)&offsetTargetObjects->obj.klass + v49);
            if ( v52 )
            {
              v53 = *(UnityEngine_Transform_o **)(v52 + 16);
              if ( !v53 )
                goto LABEL_121;
              v54 = *(float *)(v52 + 24);
              lossyScale = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)*(_QWORD *)(v52 + 16), 0LL);
              y = lossyScale.fields.y;
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
              if ( !transform )
                goto LABEL_121;
              position = UnityEngine_Transform__get_position(transform, 0LL);
              pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
              x = position.fields.x;
              v58 = position.fields.y;
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
                  v87 = UnityEngine_Transform__get_position(transform, 0LL);
                  x = v87.fields.x;
                  v58 = v87.fields.y;
                }
              }
              v88 = UnityEngine_Transform__get_position(v53, 0LL);
              v88.fields.y = (float)(v54 * y) + v58;
              v88.fields.x = x;
              UnityEngine_Transform__set_position(v53, v88, 0LL);
              defaultLocalPosOffsetTargetObjects = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !defaultLocalPosOffsetTargetObjects )
                goto LABEL_121;
              if ( v51 >= defaultLocalPosOffsetTargetObjects->max_length )
                goto LABEL_122;
              v60 = defaultLocalPosOffsetTargetObjects->m_Items[v48].fields.y;
              *(UnityEngine_Vector3_o *)(&v61 - 1) = UnityEngine_Transform__get_localPosition(v53, 0LL);
              v62 = this->fields.defaultLocalPosOffsetTargetObjects;
              if ( !v62 )
                goto LABEL_121;
              if ( v51 >= v62->max_length )
                goto LABEL_122;
              v63 = v62->m_Items[v48 + 1].fields.x;
              v64 = (UnityEngine_Object_o *)this->fields.pinObject;
              v65 = v61;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
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
              v67 = this->fields.offsetTargetObjects;
              if ( !v67 )
                goto LABEL_121;
              if ( (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length == v67->max_length )
              {
                if ( v51 >= (unsigned int)*(_QWORD *)&notDisplayPinTargetOffset->max_length )
                  goto LABEL_122;
                v68 = (float *)*((_QWORD *)&notDisplayPinTargetOffset->obj.klass + v49);
                if ( !v68 )
                  goto LABEL_121;
                v69 = v53;
                v70 = v60 + v68[6];
                v71 = v65 + v68[7];
                v72 = v63 + v68[8];
              }
              else
              {
LABEL_86:
                v69 = v53;
                v70 = v60;
                v71 = v65;
                v72 = v63;
              }
              UnityEngine_Transform__set_localPosition(v69, *(UnityEngine_Vector3_o *)&v70, 0LL);
            }
            offsetTargetObjects = this->fields.offsetTargetObjects;
            ++v49;
            ++v48;
            if ( !offsetTargetObjects )
              goto LABEL_121;
          }
        }
      }
    }
  }
  if ( !isForward || this->fields.isForward )
  {
    if ( v16 >= 0.0 && !this->fields.isDisp && this->fields.isForward )
    {
      v81 = (UnityEngine_Object_o *)this->fields.pointCol;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
      {
        BlankEarthPoint__SetBtnColliderEnable(this, 1, v82);
        this->fields.isDisp = 1;
      }
    }
  }
  else
  {
    v73 = (UnityEngine_Object_o *)this->fields.pointCol;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
      BlankEarthPoint__SetBtnColliderEnable(this, 0, v74);
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
      v78 = this->fields.dispSpriteDot;
    else
      v78 = this->fields.noDispSpriteDot;
    if ( dispSpriteDot <= noDispSpriteDot )
      v79 = this->fields.noDispSpriteDot;
    else
      v79 = this->fields.dispSpriteDot;
    *(float *)&v80 = UnityEngine_Mathf__Clamp(DotXYZ, v78, v79, 0LL);
    transform = (UnityEngine_Transform_o *)this->fields.uiRootWidget;
    if ( transform )
    {
      *(float *)&v80 = (float)(*(float *)&v80 - v78) / (float)(v79 - v78);
      if ( this->fields.dispSpriteDot < this->fields.noDispSpriteDot )
        *(float *)&v80 = 1.0 - *(float *)&v80;
      (*(void (__fastcall **)(UnityEngine_Transform_o *, Il2CppClass *, long double))&transform->klass[1]._1.this_arg.bits)(
        transform,
        transform->klass[1]._1.element_class,
        v80);
      return;
    }
LABEL_121:
    sub_B5D69C(transform, v20);
  }
}


void __fastcall BlankEarthPoint__OnClickSpot(BlankEarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BlankEarth_o *earthCore; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42E7ECB & 1) == 0 )
  {
    sub_B5D5C4(&Method_BlankEarthPoint_OnClickSpot__, (_DWORD)method, v2, v3);
    byte_42E7ECB = 1;
  }
  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B5D69C(0LL, method);
  if ( (unsigned int)(BlankEarth__GetState(earthCore, method) - 1) <= 1 )
  {
    v6 = Method_BlankEarthPoint_OnClickSpot__;
    if ( (*((_BYTE *)Method_BlankEarthPoint_OnClickSpot__ + 75) & 2) != 0 )
      v6 = (_QWORD *)sub_B5D5CC(Method_BlankEarthPoint_OnClickSpot__);
    v7 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v6, v6[3]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
    BlankEarthPoint__OpenQuestList(this, v8);
  }
}


void __fastcall BlankEarthPoint__OnPress(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B5D69C(this, method);
  earthCore->fields.isTouch = 1;
}


void __fastcall BlankEarthPoint__OnRelease(BlankEarthPoint_o *this, const MethodInfo *method)
{
  struct BlankEarth_o *earthCore; // x8

  earthCore = this->fields.earthCore;
  if ( !earthCore )
    sub_B5D69C(this, method);
  earthCore->fields.isTouch = 0;
}


void __fastcall BlankEarthPoint__OpenQuestList(BlankEarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_42E7ECA & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7ECA = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
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
    || (BlankEarth__SetFocusEarthPoint((BlankEarth_o *)genericContainerHandle, this->fields._spotId_k__BackingField, v7),
        (genericContainerHandle = (TitleInfoControl_o *)this->fields.earthCore) == 0LL) )
  {
    sub_B5D69C(genericContainerHandle, method);
  }
  BlankEarth__SetState((BlankEarth_o *)genericContainerHandle, 3, v8);
}


void __fastcall BlankEarthPoint__PlayAnim(
        BlankEarthPoint_o *this,
        int32_t index,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BlankEarthPoint__CoPlayAnimUntilFinish(this, index, finishCallback, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  __int64 v3; // x3
  System_String_o *AnimName; // x0
  UnityEngine_Object_o *anim; // x21
  System_String_o *v8; // x20
  __int64 v9; // x1
  UnityEngine_Animation_o *Item; // x0

  if ( (byte_42E7ECE & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, index, (_DWORD)method, v3);
    byte_42E7ECE = 1;
  }
  AnimName = BlankEarthPoint__GetAnimName(this, index, method);
  anim = (UnityEngine_Object_o *)this->fields.anim;
  v8 = AnimName;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL) && !System_String__IsNullOrEmpty(v8, 0LL) )
  {
    Item = this->fields.anim;
    if ( !Item
      || (UnityEngine_Animation__Rewind(Item, 0LL), (Item = this->fields.anim) == 0LL)
      || (UnityEngine_Animation__Play_51249124(Item, v8, 0LL), (Item = this->fields.anim) == 0LL)
      || (Item = (UnityEngine_Animation_o *)UnityEngine_Animation__get_Item(Item, v8, 0LL)) == 0LL )
    {
      sub_B5D69C(Item, v9);
    }
    UnityEngine_AnimationState__set_normalizedTime((UnityEngine_AnimationState_o *)Item, 1.0, 0LL);
  }
}


void __fastcall BlankEarthPoint__SetBlankEarthSpotUI(BlankEarthPoint_o *this, bool isDisp, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  char v15; // w1
  int v16; // w2
  __int64 v17; // x3
  char v18; // w1
  int v19; // w2
  __int64 v20; // x3
  char v21; // w1
  int v22; // w2
  __int64 v23; // x3
  char v24; // w1
  int v25; // w2
  __int64 v26; // x3
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  __int64 bSpotInfo; // x0
  __int64 v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **nextSprite; // x22
  UnityEngine_Component_array *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **loopIconSprite; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **lastTimeLabel; // x22
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **noticeNumberComp; // x22
  const MethodInfo *v61; // x2
  UnityEngine_Object_o *v62; // x20
  bool v63; // w20
  Il2CppClass *klass; // x8
  _BOOL8 v65; // x0
  __int64 v66; // x1
  UnityEngine_Object_o *v67; // x20
  struct MapControl_SpotInfo_o *v68; // x8
  int32_t freeQuestCount; // w21
  UnityEngine_Object_o *v70; // x20
  int v71; // w2
  __int64 v72; // x3
  int32_t spotId_k__BackingField; // w20
  TerminalPramsManager_c *v74; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  bool v76; // w20
  UILabel_o *v77; // x20
  UnityEngine_Object_o *v78; // x20
  struct MapControl_SpotInfo_o *v79; // x8
  int32_t questCount; // w20
  Il2CppClass *v81; // x8
  _BOOL8 v82; // x0
  __int64 v83; // x1
  int v84; // w21
  __int64 v85; // x0
  __int64 v86; // x0
  System_Collections_Generic_List_Enumerator_T__o v87; // [xsp+8h] [xbp-78h] BYREF
  int v88[2]; // [xsp+20h] [xbp-60h]
  int v89; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v90; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_42E7EC7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Component___TypeInfo, isDisp, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12463/*"SPOT_FREE_QUEST_LAST_TIME"*/, v27, v28, v29);
    byte_42E7EC7 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v89 = 0;
  if ( !this->fields.bSpotInfo || !this->fields.areaInfoList )
    return;
  bSpotInfo = sub_B5D5DC(UnityEngine_Component___TypeInfo, 4LL);
  if ( !bSpotInfo )
    goto LABEL_84;
  nextSprite = (System_Int32_array **)this->fields.nextSprite;
  v39 = (UnityEngine_Component_array *)bSpotInfo;
  if ( nextSprite )
  {
    bSpotInfo = sub_B5D684(this->fields.nextSprite, *(_QWORD *)(*(_QWORD *)bSpotInfo + 64LL));
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( !v39->max_length )
    goto LABEL_85;
  v39->m_Items[0] = (UnityEngine_Component_o *)nextSprite;
  sub_B5D560((BattleServantConfConponent_o *)v39->m_Items, nextSprite, v32, v33, v34, v35, v36, v37);
  loopIconSprite = (System_Int32_array **)this->fields.loopIconSprite;
  if ( loopIconSprite )
  {
    bSpotInfo = sub_B5D684(this->fields.loopIconSprite, v39->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_85;
  v39->m_Items[1] = (UnityEngine_Component_o *)loopIconSprite;
  sub_B5D560((BattleServantConfConponent_o *)&v39->m_Items[1], loopIconSprite, v40, v41, v42, v43, v44, v45);
  lastTimeLabel = (System_Int32_array **)this->fields.lastTimeLabel;
  if ( lastTimeLabel )
  {
    bSpotInfo = sub_B5D684(this->fields.lastTimeLabel, v39->obj.klass->_1.element_class);
    if ( !bSpotInfo )
      goto LABEL_86;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_85;
  v39->m_Items[2] = (UnityEngine_Component_o *)lastTimeLabel;
  sub_B5D560((BattleServantConfConponent_o *)&v39->m_Items[2], lastTimeLabel, v47, v48, v49, v50, v51, v52);
  noticeNumberComp = (System_Int32_array **)this->fields.noticeNumberComp;
  if ( noticeNumberComp )
  {
    bSpotInfo = sub_B5D684(this->fields.noticeNumberComp, v39->obj.klass->_1.element_class);
    if ( !bSpotInfo )
    {
LABEL_86:
      v86 = sub_B5D6BC(bSpotInfo);
      sub_B5D668(v86, 0LL);
    }
  }
  if ( v39->max_length <= 3 )
  {
LABEL_85:
    v85 = sub_B5D6C8(bSpotInfo);
    sub_B5D668(v85, 0LL);
  }
  v39->m_Items[3] = (UnityEngine_Component_o *)noticeNumberComp;
  sub_B5D560((BattleServantConfConponent_o *)&v39->m_Items[3], noticeNumberComp, v54, v55, v56, v57, v58, v59);
  BlankEarthPoint__ActivateEachComponent(0, v39, v61);
  if ( !isDisp )
    return;
  v62 = (UnityEngine_Object_o *)this->fields.nextSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
  {
    bSpotInfo = (__int64)this->fields.bSpotInfo;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = MapControl_SpotInfo__IsNextDisp((MapControl_SpotInfo_o *)bSpotInfo, 0LL);
    if ( !this->fields.areaInfoList )
      goto LABEL_84;
    v63 = bSpotInfo;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v87,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.areaInfoList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
    v90 = v87;
    while ( 1 )
    {
      v65 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v90,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
      if ( !v65 )
        break;
      if ( !v90.fields.current )
        sub_B5D69C(v65, v66);
      klass = v90.fields.current[7].klass;
      if ( !klass )
        sub_B5D69C(v65, v66);
      v63 = LOBYTE(klass->_1.byval_arg.bits) != 0;
    }
    v88[0] = 152;
    v89 = 1;
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v90,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
    v89 = 0;
    bSpotInfo = (__int64)this->fields.nextSprite;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, v63, 0LL);
  }
  v67 = (UnityEngine_Object_o *)this->fields.loopIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bSpotInfo = UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v68 = this->fields.bSpotInfo;
    if ( !v68 )
      goto LABEL_84;
    freeQuestCount = v68->fields.freeQuestCount;
    v70 = (UnityEngine_Object_o *)this->fields.lastTimeLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    {
      spotId_k__BackingField = this->fields._spotId_k__BackingField;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E5CDB )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_BYTE)v31, v71, v72);
        byte_42E5CDB = 1;
      }
      v74 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v74 = TerminalPramsManager_TypeInfo;
      }
      static_fields = v74->static_fields;
      bSpotInfo = (__int64)this->fields.lastTimeLabel;
      v76 = spotId_k__BackingField == static_fields->_LastPlayedFreeQuestSpotId_k__BackingField;
      if ( !bSpotInfo )
        goto LABEL_84;
      bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
      if ( !bSpotInfo )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0 && v76, 0LL);
      v77 = this->fields.lastTimeLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      bSpotInfo = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_12463/*"SPOT_FREE_QUEST_LAST_TIME"*/, 0LL);
      if ( !v77 )
        goto LABEL_84;
      UILabel__set_text(v77, (System_String_o *)bSpotInfo, 0LL);
    }
    bSpotInfo = (__int64)this->fields.loopIconSprite;
    if ( !bSpotInfo )
      goto LABEL_84;
    bSpotInfo = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bSpotInfo, 0LL);
    if ( !bSpotInfo )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bSpotInfo, freeQuestCount > 0, 0LL);
  }
  v78 = (UnityEngine_Object_o *)this->fields.noticeNumberComp;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bSpotInfo = UnityEngine_Object__op_Inequality(v78, 0LL, 0LL);
  if ( (bSpotInfo & 1) != 0 )
  {
    v79 = this->fields.bSpotInfo;
    if ( v79 )
    {
      bSpotInfo = (__int64)this->fields.areaInfoList;
      if ( bSpotInfo )
      {
        questCount = v79->fields.questCount;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v87,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bSpotInfo,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
        v90 = v87;
        while ( 1 )
        {
          v82 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v90,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
          if ( !v82 )
            break;
          if ( !v90.fields.current )
            sub_B5D69C(v82, v83);
          v81 = v90.fields.current[7].klass;
          if ( !v81 )
            sub_B5D69C(v82, v83);
          questCount += LODWORD(v81->_1.namespaze);
        }
        v88[0] = 375;
        v84 = ++v89;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v90,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
        if ( v84 && v88[v84 - 1] == 375 )
          v89 = v84 - 1;
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
    sub_B5D69C(bSpotInfo, v31);
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
    sub_B5D69C(0LL, isEnabled);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  UnityEngine_Object_o *nextSprite; // x23
  QuestTree_o *questInfoList; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UISprite_o *v48; // x23
  struct System_String_o *name; // x1
  struct BlankEarth_o **p_earthCore; // x23
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct MapControl_SpotInfo_o *SpotInfo; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *areaInfoList; // x0
  struct ScrTerminalListTop_CaldeaFolderInfo_o *ordealCallFolderInfo; // x8
  _BOOL8 v72; // x0
  __int64 v73; // x1
  _DWORD *data; // x9
  struct System_Collections_Generic_List_MapControl_QuestInfo__o *v75; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v77; // x0
  const MethodInfo *v78; // x1
  int32_t CurrentAnimIndex; // w0
  const MethodInfo *v80; // x2
  const MethodInfo *v81; // x2
  const MethodInfo *v82; // x2
  MethodInfo methoda; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o normalized; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v86; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7EC6 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, (_DWORD)spotEnt, (_DWORD)obj, camera);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__, v24, v25, v26);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v30, v31, v32);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_19614/*"icon_spot_next"*/, v36, v37, v38);
    byte_42E7EC6 = 1;
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
    v48 = this->fields.nextSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    questInfoList = (QuestTree_o *)AtlasManager__SetEventUI(v48, (System_String_o *)StringLiteral_19614/*"icon_spot_next"*/, 0LL);
  }
  if ( !spotEnt )
    goto LABEL_31;
  this->fields._warId_k__BackingField = spotEnt->fields.warId;
  this->fields._spotId_k__BackingField = spotEnt->fields.id;
  name = spotEnt->fields.name;
  this->fields._spotName_k__BackingField = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._spotName_k__BackingField,
    (System_Int32_array **)name,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.earthCore = obj;
  p_earthCore = &this->fields.earthCore;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.earthCore,
    (System_Int32_array **)obj,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.earthCamera = camera;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.earthCamera,
    (System_Int32_array **)camera,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
  }
  questInfoList = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !questInfoList )
    goto LABEL_31;
  SpotInfo = QuestTree__GetSpotInfo(questInfoList, this->fields._spotId_k__BackingField, 0LL);
  this->fields.bSpotInfo = SpotInfo;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.bSpotInfo,
    (System_Int32_array **)SpotInfo,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  areaInfoList = this->fields.areaInfoList;
  if ( !areaInfoList )
    goto LABEL_28;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)areaInfoList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Clear__);
  if ( !*p_earthCore
    || (ordealCallFolderInfo = (*p_earthCore)->fields.ordealCallFolderInfo) == 0LL
    || (questInfoList = (QuestTree_o *)ordealCallFolderInfo->fields.questInfoList) == 0LL )
  {
LABEL_31:
    sub_B5D69C(questInfoList, v41);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)questInfoList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapControl_QuestInfo__GetEnumerator__);
  while ( 1 )
  {
    v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__MoveNext__);
    if ( !v72 )
      break;
    if ( !methoda.return_type )
      sub_B5D69C(v72, v73);
    data = methoda.return_type[7].data;
    if ( data && this->fields._spotId_k__BackingField == data[18] )
    {
      v75 = this->fields.areaInfoList;
      if ( !v75 )
        sub_B5D69C(0LL, v73);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v75,
        (EventMissionProgressRequest_Argument_ProgressData_o *)methoda.return_type,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_MapControl_QuestInfo__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&methoda.name,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapControl_QuestInfo__Dispose__);
LABEL_28:
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition(gameObject, 0LL);
  methoda.methodPointer = *(Il2CppMethodPointer *)&LocalPosition.fields.x;
  *(float *)&methoda.invoker_method = LocalPosition.fields.z;
  normalized = UnityEngine_Vector3__get_normalized(LocalPosition, &methoda);
  normalized.fields.x = -normalized.fields.x;
  normalized.fields.y = -normalized.fields.y;
  normalized.fields.z = -normalized.fields.z;
  v86 = UnityEngine_Quaternion__LookRotation_35651248(normalized, 0LL);
  this->fields._FocusQua_k__BackingField = v86;
  this->fields._FocusQua_k__BackingField = UnityEngine_Quaternion__Inverse(v86, 0LL);
  v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this->fields._selfScale_k__BackingField = GameObjectExtensions__GetLocalScale(v77, 0LL);
  CurrentAnimIndex = BlankEarthPoint__GetCurrentAnimIndex(this, v78);
  this->fields.animIndex = CurrentAnimIndex;
  BlankEarthPoint__SetAnimationToEnd(this, CurrentAnimIndex, v80);
  BlankEarthPoint__UpdateDisp(this, 1, v81);
  this->fields.isForceTouchDisabled = BlankEarthSpotEntity__IsForceTouchDisabled(spotEnt, 0LL);
  BlankEarthPoint__SetBtnColliderEnable(this, 1, v82);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *qaaDispEffObj; // x20
  UnityEngine_Object_o *spotDispEffectObj; // x21
  struct UnityEngine_GameObject_o **p_spotDispEffectObj; // x20
  UnityEngine_Object_o *v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_GameObject_o *v18; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7ECF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E7ECF = 1;
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
      v11 = (UnityEngine_Object_o *)*p_spotDispEffectObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v11, 0LL);
      *p_spotDispEffectObj = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.spotDispEffectObj, 0LL, v12, v13, v14, v15, v16, v17);
    }
    v18 = this->fields.qaaDispEffObj;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_B5D69C(0LL, v20);
    transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_UILabel_(
                                        (UILabel_o *)v18,
                                        transform,
                                        (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
    GameObjectExtensions__SetLocalPosition(v22, this->fields.spotRevealedEffectOffset, 0LL);
    GameObjectExtensions__ResetTransform(v22, 0LL);
    this->fields.spotDispEffectObj = v22;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.spotDispEffectObj,
      (System_Int32_array **)v22,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
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
  __int64 v3; // x3
  UnityEngine_Object_o *uiRoot; // x21
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0

  if ( (byte_42E7EC9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isDisp, (_DWORD)method, v3);
    byte_42E7EC9 = 1;
  }
  uiRoot = (UnityEngine_Object_o *)this->fields.uiRoot;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(uiRoot, 0LL, 0LL) )
  {
    v8 = this->fields.uiRoot;
    if ( !v8 )
      sub_B5D69C(0LL, v7);
    UnityEngine_GameObject__SetActive(v8, isDisp, 0LL);
  }
}


void __fastcall BlankEarthPoint__Update(BlankEarthPoint_o *this, const MethodInfo *method)
{
  QAASpotStateController_o *stateController; // x0

  stateController = this->fields.stateController;
  if ( !stateController )
    sub_B5D69C(0LL, method);
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
      sub_B5D69C(0LL, v11);
    UnityEngine_Animation__Stop(anim, 0LL);
  }
  BlankEarthPoint__SetBlankEarthSpotUI(this, v10, v12);
  this->fields._mtIsUpdate_k__BackingField = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BlankEarthPoint__UpdateSpotUIToPinObjectPosition(BlankEarthPoint_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *pinObject; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  bool activeSelf; // w0
  UnityEngine_GameObject_o *uiRoot; // x20
  float x; // s0
  float y; // s1
  float z; // s2

  if ( (byte_42E7EC8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7EC8 = 1;
  }
  pinObject = (UnityEngine_Object_o *)this->fields.pinObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pinObject, 0LL, 0LL) )
  {
    v7 = this->fields.pinObject;
    if ( !v7 )
      sub_B5D69C(0LL, v6);
    activeSelf = UnityEngine_GameObject__get_activeSelf(v7, 0LL);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *v4; // x19
  int32_t _1__state; // w8
  struct BlankEarthPoint_o *_4__this; // x20
  UnityEngine_Object_o *anim; // x22
  float totalTime_5__3; // s8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_42E5E15 & 1) == 0 )
  {
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)sub_B5D5C4(
                                                               &UnityEngine_Object_TypeInfo,
                                                               (_DWORD)method,
                                                               v2,
                                                               v3);
    byte_42E5E15 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
    if ( !this )
      goto LABEL_25;
    this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)UnityEngine_Animation__get_Item(
                                                               (UnityEngine_Animation_o *)this,
                                                               v4->fields._animName_5__2,
                                                               0LL);
    if ( !this )
      goto LABEL_25;
    if ( UnityEngine_AnimationState__get_normalizedTime((UnityEngine_AnimationState_o *)this, 0LL) < 1.0 )
    {
      totalTime_5__3 = v4->fields._totalTime_5__3;
      if ( totalTime_5__3 <= 10.0 )
      {
        v4->fields._totalTime_5__3 = totalTime_5__3 + UnityEngine_Time__get_deltaTime(0LL);
LABEL_20:
        this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
        if ( this )
        {
          if ( UnityEngine_Animation__get_isPlaying((UnityEngine_Animation_o *)this, 0LL) )
          {
            v4->fields.__2__current = 0LL;
            p__2__current = &v4->fields.__2__current;
            sub_B5D560(p__2__current);
            result = 1;
            *((_DWORD *)p__2__current - 2) = 1;
            return result;
          }
          goto LABEL_23;
        }
LABEL_25:
        sub_B5D69C(this, method);
      }
    }
LABEL_23:
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    v4->fields._animName_5__2 = BlankEarthPoint__GetAnimName(_4__this, v4->fields.index, 0LL);
    sub_B5D560(&v4->fields._animName_5__2);
    anim = (UnityEngine_Object_o *)_4__this->fields.anim;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(anim, 0LL, 0LL)
      && !System_String__IsNullOrEmpty(v4->fields._animName_5__2, 0LL) )
    {
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_25;
      UnityEngine_Animation__Rewind((UnityEngine_Animation_o *)this, 0LL);
      this = (BlankEarthPoint__CoPlayAnimUntilFinish_d__97_o *)_4__this->fields.anim;
      if ( !this )
        goto LABEL_25;
      UnityEngine_Animation__Play_51249124((UnityEngine_Animation_o *)this, v4->fields._animName_5__2, 0LL);
      v4->fields._totalTime_5__3 = 0.0;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BlankEarthPoint__CoPlayAnimUntilFinish_d__97_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
    sub_B5D69C(this, x);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v3->fields.value, 0LL);
}