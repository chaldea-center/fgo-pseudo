void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  if ( (byte_43898DD & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_TypeInfo);
    byte_43898DD = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleLogData_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  TranslucentActorVisualInfo_o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x20
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Hashtable_o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Hashtable_o *v66; // x20
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7

  if ( (byte_43898DC & 1) == 0 )
  {
    sub_B775C4(&BattleLogData_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_B775C4(&TranslucentActorVisualInfo_TypeInfo);
    sub_B775C4(&StringLiteral_16548/*"act"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_43898DC = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v3 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v3,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.auraList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  this->fields.actorScale = 1.0;
  v10 = (BattleLogData_o *)sub_B77694(BattleLogData_TypeInfo);
  BattleLogData___ctor_19564036(v10, (System_String_o *)StringLiteral_16548/*"act"*/, 90, 0LL);
  this->fields.battleLog = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.battleLog,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v17,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.buffLoopEffectDict,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  this->fields.reservedEffectBuffEffectIdList = v24;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.reservedEffectBuffEffectIdList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v31 = (TranslucentActorVisualInfo_o *)sub_B77694(TranslucentActorVisualInfo_TypeInfo);
  TranslucentActorVisualInfo___ctor(v31, 0LL);
  this->fields.translucentActorVisualInfo = v31;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.translucentActorVisualInfo,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v38, v39, v40, v41, v42, v43, v44);
  v45 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.partAnimationSaveKey, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_BattleActorControl__o *)v52;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.noblePhantasmObjectVisibleCtrList,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39511352(v59, 0LL);
  this->fields.EventList = v59;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.EventList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39511352(v66, 0LL);
  this->fields.CompleteList = v66;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.CompleteList,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v78 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v78,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v78;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventClassAddedEventDict,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_43898C8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_int___);
    sub_B775C4(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__350_0__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_43898C8 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_B7769C(0LL, method);
  v4 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v5 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__350_0__,
    (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(v4, (System_Action_T__o *)v5, (const MethodInfo_1C66E54 *)Method_BasicHelper_ForEach_int___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ActiveReservedBuffEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  void *buffLoopEffectDict; // x0
  int v6; // w8
  void *v7; // x21
  unsigned int v8; // w22
  __int64 v9; // x0

  if ( (byte_43898C7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Remove__);
    byte_43898C7 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 1, 0LL);
    if ( this->fields.isPlayingNoblePhantasm )
    {
      buffLoopEffectDict = this->fields.buffLoopEffectDict;
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                             effectId,
                             (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      v6 = *((_DWORD *)buffLoopEffectDict + 6);
      v7 = buffLoopEffectDict;
      if ( v6 >= 1 )
      {
        v8 = 0;
        while ( 1 )
        {
          if ( v8 >= v6 )
          {
            v9 = sub_B776C8(buffLoopEffectDict);
            sub_B77668(v9, 0LL);
          }
          buffLoopEffectDict = (void *)*((_QWORD *)v7 + (int)v8 + 4);
          if ( !buffLoopEffectDict )
            break;
          buffLoopEffectDict = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffLoopEffectDict, 0LL);
          if ( !buffLoopEffectDict )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 0, 0LL);
          v6 = *((_DWORD *)v7 + 6);
          if ( (int)++v8 >= v6 )
            goto LABEL_17;
        }
LABEL_22:
        sub_B7769C(buffLoopEffectDict, *(_QWORD *)&effectId);
      }
    }
  }
LABEL_17:
  buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_30E7764 *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void __fastcall BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v6; // x20
  unsigned __int64 v7; // x22
  struct BattleFBXComponent_o **p_fbxcomponent; // x23
  WarBoardManager_TaskList_o *v9; // x21
  __int64 v10; // x0

  v4 = this;
  if ( (byte_43898A2 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    this = (BattleActorControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    byte_43898A2 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                   obj,
                                   (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  actorObject = this->fields.actorObject;
  v6 = this;
  if ( (int)actorObject >= 1 )
  {
    v7 = 0LL;
    p_fbxcomponent = &this->fields.fbxcomponent;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)actorObject )
      {
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
      }
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v9 = (WarBoardManager_TaskList_o *)p_fbxcomponent[v7];
      this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                       v9,
                                       (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
      }
      LODWORD(actorObject) = v6->fields.actorObject;
      if ( (__int64)++v7 >= (int)actorObject )
        return;
    }
LABEL_14:
    sub_B7769C(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddOverwriteEachPhaseAnimation(
        BattleActorControl_o *this,
        int32_t svtId,
        int32_t limitCount,
        bool isEnemy,
        const MethodInfo *method)
{
  ServantAnimationOverwriteMaster_o *Master; // x0
  const MethodInfo *v10; // x1
  ServantAnimationOverwriteEntity_array *v11; // x21
  ChangeBattlePhaseNotify_o *v12; // x20
  ChangeBattlePhaseOverwriteAnimation_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_43898C2 & 1) == 0 )
  {
    sub_B775C4(&ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    byte_43898C2 = 1;
  }
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, *(const MethodInfo **)&svtId);
  Master = ServantAnimationOverwriteMaster__get_Master(0LL);
  if ( !Master )
    goto LABEL_9;
  Master = (ServantAnimationOverwriteMaster_o *)ServantAnimationOverwriteMaster__GetList(
                                                  Master,
                                                  svtId,
                                                  limitCount,
                                                  isEnemy,
                                                  0LL);
  if ( !Master )
    goto LABEL_9;
  v11 = (ServantAnimationOverwriteEntity_array *)Master;
  if ( Master->fields._MasterName_k__BackingField )
  {
    v12 = BattleActorControl__GetChangePhaseNotify(this, v10);
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B77694(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, 0LL);
    this->fields.overwriteAnim = v13;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.overwriteAnim,
      (System_Int32_array **)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, 0LL);
      return;
    }
LABEL_9:
    sub_B7769C(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0

  if ( (byte_43898C6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_43898C6 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
LABEL_7:
    sub_B7769C(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  System_Collections_Generic_List_int___Add(
    reservedEffectBuffEffectIdList,
    effectId,
    (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleActorControl__AddServantVoicePlayed(
        BattleActorControl_o *this,
        System_String_array *playedSoundArray,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v7; // x21

  v4 = this;
  if ( (byte_438986C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_string___ctor__);
    sub_B775C4(&System_Action_string__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_string___);
    sub_B775C4(&Method_BattleActorControl__AddServantVoicePlayed_b__215_0__);
    this = (BattleActorControl_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438986C = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_B7769C(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v7 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v7,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__215_0__,
          (const MethodInfo_26A0868 *)Method_System_Action_string___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v7,
          (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void __fastcall BattleActorControl__ApplySpecialWaitModeFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o **v2; // x19
  BattleActorControl_o *v3; // x8
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t Value; // w0
  int32_t v7; // w20
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v9; // x20
  unsigned __int64 v10; // x26
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  __int64 v16; // x0
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  v2 = (BattleActorControl_o **)this;
  if ( (byte_43898C5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_13592/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_43898C5 = 1;
  }
  v17 = 0;
  v3 = v2[56];
  if ( !v3 )
    goto LABEL_27;
  LOBYTE(v3[1].fields.myShiftData) = BYTE1(v3[1].fields.myShiftData);
  v17 = 1;
  v4 = System_Int32__ToString((int32_t)&v17, 0LL);
  v5 = System_String__Concat_44901936((System_String_o *)StringLiteral_13592/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v4, 0LL);
  Value = ConstantMaster__getValue(v5, 0LL);
  if ( Value != -1 )
  {
    v7 = Value;
    while ( 1 )
    {
      this = v2[56];
      if ( !this )
        goto LABEL_27;
      if ( v7 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v2[52];
        if ( !this )
          goto LABEL_27;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, method);
        if ( !this )
          goto LABEL_27;
        actorObject = this->fields.actorObject;
        v9 = this;
        if ( (int)actorObject >= 1 )
          break;
      }
LABEL_25:
      ++v17;
      v14 = System_Int32__ToString((int32_t)&v17, 0LL);
      v15 = System_String__Concat_44901936((System_String_o *)StringLiteral_13592/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v14, 0LL);
      v7 = ConstantMaster__getValue(v15, 0LL);
      if ( v7 == -1 )
        return;
    }
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)actorObject )
      {
        v16 = sub_B776C8(this);
        sub_B77668(v16, 0LL);
      }
      this = v2[16];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v9->fields.fbxcomponent + v10),
                       0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ServantActor )
          break;
        this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
        if ( !this )
          break;
        if ( BYTE1(this[1].fields.myShiftData) )
        {
          LOBYTE(this[1].fields.myShiftData) = 1;
          BattleActorControl__playAnimation_22508132(ServantActor, (System_String_o *)StringLiteral_23673/*"wait"*/, 0, v12);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_22508132(ServantActor, (System_String_o *)StringLiteral_23673/*"wait"*/, 1, v13);
      }
      LODWORD(actorObject) = v9->fields.actorObject;
      if ( (__int64)++v10 >= (int)actorObject )
        goto LABEL_25;
    }
LABEL_27:
    sub_B7769C(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_MaterialPropertyBlock_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4389840 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    byte_4389840 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_B77694(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0LL);
  this->fields.mpb = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.mpb, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeAnimationCurveEnemy(
        BattleActorControl_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct BattlePerformance_o *performance; // x8
  bool v6; // w21
  __int64 v7; // x22
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x20
  struct BattlePerformance_o *v12; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4389892 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
    this = (BattleActorControl_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389892 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_B7769C(this, enable);
  v6 = enable;
  v7 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_23;
    max_length = e_actorlist->max_length;
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_25;
    v11 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v7);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v12 = v4->fields.performance;
      if ( !v12 )
        goto LABEL_23;
      v13 = v12->fields.e_actorlist;
      if ( !v13 )
        goto LABEL_23;
      if ( v10 >= v13->max_length )
      {
LABEL_25:
        v15 = sub_B776C8(this);
        sub_B77668(v15, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_Dropdown_DropdownItem )
          goto LABEL_23;
        LOBYTE(ComponentInChildren_Dropdown_DropdownItem->fields.m_Text) = v6;
      }
    }
    performance = v4->fields.performance;
    ++v7;
    if ( !performance )
      goto LABEL_23;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeRotationEnemy(
        BattleActorControl_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  __int64 v6; // x22
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x25
  UnityEngine_Object_o *v10; // x21
  struct BattlePerformance_o *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4389891 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
    this = (BattleActorControl_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389891 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_25:
    sub_B7769C(this, enable);
  v6 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_25;
    max_length = e_actorlist->max_length;
    v9 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_27;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v6);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v11 = v4->fields.performance;
      if ( !v11 )
        goto LABEL_25;
      v12 = v11->fields.e_actorlist;
      if ( !v12 )
        goto LABEL_25;
      if ( v9 >= v12->max_length )
      {
LABEL_27:
        v14 = sub_B776C8(this);
        sub_B77668(v14, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v12->obj.klass + v6);
      if ( !this )
        goto LABEL_25;
      ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                            (UnityEngine_GameObject_o *)this,
                                                                            (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       ComponentInChildren_Dropdown_DropdownItem,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_Dropdown_DropdownItem )
          goto LABEL_25;
        if ( enable )
          BattleActorRotationComponent__RotationReStart(
            (BattleActorRotationComponent_o *)ComponentInChildren_Dropdown_DropdownItem,
            0LL);
        else
          BattleActorRotationComponent__RotationStop(
            (BattleActorRotationComponent_o *)ComponentInChildren_Dropdown_DropdownItem,
            0LL);
      }
    }
    performance = v4->fields.performance;
    ++v6;
    if ( !performance )
      goto LABEL_25;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeShadowColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        float duration,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  BattleData_o *data; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  float v12; // s10
  float v13; // s11
  float v14; // s9
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  unsigned __int64 rootfsm; // x8
  BattleData_o *v18; // x19
  unsigned __int64 v19; // x22
  struct PlayMakerFSM_o **p_fsm; // x23
  UnityEngine_Object_o *Component_WebViewObject; // x20
  __int64 v22; // x0
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4389895 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69525944);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    sub_B775C4(&StringLiteral_16311/*"_MainTex"*/);
    byte_4389895 = 1;
  }
  if ( BattleActorControl__IsHideShadow(this, method) )
    return;
  clear = UnityEngine_Color__get_clear(0LL);
  v23.fields.r = r;
  v23.fields.g = g;
  v23.fields.b = b;
  v23.fields.a = a;
  data = (BattleData_o *)UnityEngine_Color__op_Equality(v23, clear, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_47;
    data = performance->fields.data;
    if ( !data )
      goto LABEL_47;
    GroundShadowColor = BattleData__getGroundShadowColor(data, 0LL);
    v12 = GroundShadowColor.fields.r;
    v13 = GroundShadowColor.fields.g;
    v14 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  else
  {
    v14 = 1.0;
    v13 = 1.0;
    v12 = 1.0;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
  {
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    UnityEngine_MaterialPropertyBlock__Clear_41471820((UnityEngine_MaterialPropertyBlock_o *)data, 0LL);
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    v25.fields.r = v12;
    v25.fields.g = v13;
    v25.fields.b = v14;
    v25.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)data,
      (System_String_o *)StringLiteral_16248/*"_Color"*/,
      v25,
      0LL);
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)data,
      (System_String_o *)StringLiteral_16311/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    data = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v12;
    this->fields.currentShadowColor.fields.g = v13;
    this->fields.currentShadowColor.fields.b = v14;
    this->fields.currentShadowColor.fields.a = a;
    if ( !data )
      goto LABEL_47;
    data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                             (UnityEngine_Component_o *)data,
                             (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !data )
      goto LABEL_47;
    UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)data, this->fields.mpb, 0LL);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    return;
  data = (BattleData_o *)this->fields.specialShadowObj;
  if ( !data
    || (data = (BattleData_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                 (UnityEngine_GameObject_o *)data,
                                 1,
                                 (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69525944)) == 0LL )
  {
LABEL_47:
    sub_B7769C(data, v10);
  }
  rootfsm = (unsigned __int64)data->fields.rootfsm;
  v18 = data;
  if ( (int)rootfsm >= 1 )
  {
    v19 = 0LL;
    p_fsm = &data->fields.fsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_38;
      if ( v19 >= (unsigned int)rootfsm )
        goto LABEL_48;
      data = (BattleData_o *)p_fsm[v19];
      if ( !data )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)data,
                                                          (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      rootfsm = LODWORD(v18->fields.rootfsm);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v19 >= rootfsm )
          goto LABEL_48;
        data = (BattleData_o *)p_fsm[v19];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 0, 0LL);
      }
      else
      {
LABEL_38:
        if ( v19 >= (unsigned int)rootfsm )
          goto LABEL_48;
        data = (BattleData_o *)p_fsm[v19];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
        if ( v19 >= LODWORD(v18->fields.rootfsm) )
        {
LABEL_48:
          v22 = sub_B776C8(data);
          sub_B77668(v22, 0LL);
        }
        data = (BattleData_o *)p_fsm[v19];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        v26.fields.r = v12;
        v26.fields.g = v13;
        v26.fields.b = v14;
        v26.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)data, v26, 0LL);
      }
      LODWORD(rootfsm) = v18->fields.rootfsm;
      ++v19;
    }
    while ( (__int64)v19 < (int)rootfsm );
  }
}


void __fastcall BattleActorControl__ChangeShadowParent(
        BattleActorControl_o *this,
        int32_t loadActorLimitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Transform_o *transform; // x0
  bool exist; // w21
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x2

  if ( (byte_4389848 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_11744/*"RootShadow"*/);
    byte_4389848 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11744/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v8;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v8,
                         (System_String_o *)StringLiteral_11744/*"RootShadow"*/,
                         loadActorLimitCount,
                         0,
                         0LL);
    TransformHelper__SafeSetParentNonNull(this->fields.shadowObj, NodeFromLvName, 0LL);
  }
}


void __fastcall BattleActorControl__ChangeShadowTexture(
        BattleActorControl_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  BattlePerformanceBg_o *bgPerf; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *ShadowTexture; // x20
  System_String_o *v10; // x0
  System_String_o *v11; // x0
  UnityEngine_Object_o *v12; // x0
  UnityEngine_Object_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = shadowId;
  if ( (byte_4389894 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Texture2D_TypeInfo);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    sub_B775C4(&StringLiteral_16311/*"_MainTex"*/);
    sub_B775C4(&StringLiteral_2873/*"Battle/Textures/shadow_"*/);
    sub_B775C4(&StringLiteral_2874/*"Battle/Textures/shadow_1"*/);
    byte_4389894 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  bgPerf = (BattlePerformanceBg_o *)UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL);
  if ( ((unsigned __int8)bgPerf & 1) == 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_38;
    bgPerf = performance->fields.bgPerf;
    if ( !bgPerf )
      goto LABEL_38;
    ShadowTexture = (UnityEngine_Object_o *)BattlePerformanceBg__GetShadowTexture(bgPerf, shadowId, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v10 = System_Int32__ToString((int32_t)&v20, 0LL);
      v11 = System_String__Concat_44901936((System_String_o *)StringLiteral_2873/*"Battle/Textures/shadow_"*/, v10, 0LL);
      v12 = UnityEngine_Resources__Load(v11, 0LL);
      if ( v12 )
      {
        if ( (UnityEngine_Texture2D_c *)v12->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v12;
        else
          ShadowTexture = 0LL;
      }
      else
      {
        ShadowTexture = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v13 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_2874/*"Battle/Textures/shadow_1"*/, 0LL);
      if ( v13 )
      {
        if ( (UnityEngine_Texture2D_c *)v13->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v13;
        else
          ShadowTexture = 0LL;
      }
      else
      {
        ShadowTexture = 0LL;
      }
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(ShadowTexture, 0LL, 0LL) )
    {
      bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
      if ( bgPerf )
      {
        UnityEngine_MaterialPropertyBlock__Clear_41471820((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16248/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16311/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.currentShadowTexure,
              (System_Int32_array **)ShadowTexture,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( bgPerf )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)bgPerf, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_38:
      sub_B7769C(bgPerf, v7);
    }
  }
}


System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeCounterAttackWait(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  BattleServantData_o *Instance; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  BattleServantData_o *v16; // x22
  System_String_o *v17; // x21
  int v19; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43898C0 & 1) == 0 )
  {
    sub_B775C4(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_43898C0 = 1;
  }
  v19 = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( Instance->fields.userSvtId.fields.inited )
    return animname;
  if ( this->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = animname;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (System_Int32_array **)animname,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !animname )
    goto LABEL_17;
  if ( !System_String__StartsWith(animname, (System_String_o *)StringLiteral_23673/*"wait"*/, 0LL) )
    return animname;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_17;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return animname;
  v19 = 49;
  Instance = (BattleServantData_o *)j_il2cpp_value_box_0(
                                      HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                                      &v19,
                                      v15);
  if ( !Instance
    || (v16 = Instance,
        v17 = (System_String_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass->vtable._4_unknown.methodPtr),
        v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v16),
        (Instance = (BattleServantData_o *)this->fields.fbxcomponent) == 0LL) )
  {
LABEL_17:
    sub_B7769C(Instance, v8);
  }
  if ( BattleFBXComponent__checkAnimation((BattleFBXComponent_o *)Instance, v17, 0LL) )
    return v17;
  return animname;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x19
  BattleActorControl_o *v10; // x20
  __int64 v11; // x2
  struct BattleServantData_o *battleSvtData; // x8
  BattleActorControl_o *v13; // x22
  System_String_o *v14; // x21
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v9 = (System_Int32_array **)animname;
  v10 = this;
  if ( (byte_43898BF & 1) == 0 )
  {
    sub_B775C4(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_43898BF = 1;
  }
  v16 = 0;
  if ( v10->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    v10->fields.isFirstSaveBeforePlayAnim = 0;
    v10->fields._PlayedOriginalAnimName_k__BackingField = (struct System_String_o *)v9;
    sub_B77560(
      (BattleServantConfConponent_o *)&v10->fields._PlayedOriginalAnimName_k__BackingField,
      v9,
      (System_String_array **)isSaveAnim,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  if ( !v9 )
    goto LABEL_15;
  this = (BattleActorControl_o *)System_String__StartsWith(
                                   (System_String_o *)v9,
                                   (System_String_o *)StringLiteral_23673/*"wait"*/,
                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return (System_String_o *)v9;
  battleSvtData = v10->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_15;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return (System_String_o *)v9;
  v16 = 46;
  this = (BattleActorControl_o *)j_il2cpp_value_box_0(
                                   HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                                   &v16,
                                   v11);
  if ( !this
    || (v13 = this,
        v14 = (System_String_o *)((__int64 (__fastcall *)(BattleActorControl_o *, void *))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass[1]._1.image),
        v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v13),
        (this = (BattleActorControl_o *)v10->fields.fbxcomponent) == 0LL) )
  {
LABEL_15:
    sub_B7769C(this, animname);
  }
  if ( BattleFBXComponent__checkAnimation((BattleFBXComponent_o *)this, v14, 0LL) )
    return v14;
  return (System_String_o *)v9;
}


bool __fastcall BattleActorControl__CheckAuraPriority(
        BattleActorControl_o *this,
        int32_t priority,
        const MethodInfo *method)
{
  return this->fields._currentPriority_k__BackingField <= priority;
}


void __fastcall BattleActorControl__Complete(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Hashtable_o *CompleteList; // x0
  const MethodInfo *v7; // x3
  struct System_Collections_Hashtable_o *v8; // x8
  BattleActorControl_EventClass_o *v9; // x21
  __int64 v10; // x9
  BattleActorControl_o *v11; // x0
  System_String_o *v12; // x1
  BattleActorControl_EventClass_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4389873 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&StringLiteral_1569/*"@OnComplete Fired!\n => <{0}>:"*/);
    byte_4389873 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1569/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_22495744(this, name, 0, v7);
    return;
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList
    || (CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._29_get_Item.method)(
                                                                  CompleteList,
                                                                  name,
                                                                  CompleteList->klass->vtable._30_set_Item.methodPtr),
        (v8 = this->fields.CompleteList) == 0LL)
    || (v9 = (BattleActorControl_EventClass_o *)CompleteList,
        CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._39_Remove.method)(
                                                                  this->fields.CompleteList,
                                                                  name,
                                                                  v8->klass->vtable._40_get_SyncRoot.methodPtr),
        !v9) )
  {
LABEL_12:
    sub_B7769C(CompleteList, v5);
  }
  v10 = *(&BattleActorControl_EventClass_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v9->klass->_2.bitflags2 + 1) >= (unsigned int)v10
    && (BattleActorControl_EventClass_c *)v9->klass->_2.typeHierarchy[v10 - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v9, 0LL);
    goto LABEL_11;
  }
  v11 = (BattleActorControl_o *)sub_B77990(v9);
  BattleActorControl__setAnimationEvent(v11, v12, v13, v14);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_438987D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_438987D = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B7769C(0LL, eventName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (System_Xml_Schema_XmlSchemaObject_o *)motionName,
    (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_438987E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__Remove__);
    byte_438987E = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B7769C(0LL, eventName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (const MethodInfo_2F7F064 *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4389849 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389849 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_int__o v6; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_43898CE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_43898CE = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)System_Linq_Enumerable__ToList_int_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1D402F0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v6;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields.current, v5) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_B7769C(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)buffLoopEffectDict,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_43898BA & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__DestroyAuraEffect_d__328_TypeInfo);
    byte_43898BA = 1;
  }
  v4 = sub_B77694(BattleActorControl__DestroyAuraEffect_d__328_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__328___ctor((BattleActorControl__DestroyAuraEffect_d__328_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B7769C(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_B77560((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)effectObject, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyEffectOnParticleStop(
        BattleActorControl_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_43898CC & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__DestroyEffectOnParticleStop_d__354_TypeInfo);
    byte_43898CC = 1;
  }
  v5 = sub_B77694(BattleActorControl__DestroyEffectOnParticleStop_d__354_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__354___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_438984A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438984A = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DestroyImmediate_36310192(actorObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__DestroyLoopEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  void *buffLoopEffectDict; // x0
  UnityEngine_Object_o *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w24
  __int64 v12; // x8
  _QWORD *v13; // x21
  unsigned __int64 v14; // x25
  UnityEngine_Object_o *v15; // x22
  __int64 v16; // x0

  if ( (byte_43898CD & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69525944);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898CD = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                   effectId,
                                   (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Item, 0LL, 0LL) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v7 = this->fields.buffLoopEffectDict) == 0LL)
    || (v8 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                                       (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v7,
                                       effectId,
                                       (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v8)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                               v8,
                               1,
                               (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69525944)) == 0LL )
  {
LABEL_33:
    sub_B7769C(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v9 = *((_DWORD *)buffLoopEffectDict + 6);
  v10 = buffLoopEffectDict;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        goto LABEL_32;
      buffLoopEffectDict = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_33;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_33;
      v12 = *((_QWORD *)buffLoopEffectDict + 3);
      v13 = buffLoopEffectDict;
      if ( (int)v12 >= 1 )
        break;
LABEL_27:
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_28;
    }
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = (UnityEngine_Object_o *)v13[v14 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v15, 0LL);
      LODWORD(v12) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_27;
    }
LABEL_32:
    v16 = sub_B776C8(buffLoopEffectDict);
    sub_B77668(v16, 0LL);
  }
LABEL_28:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)v8, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleActorControl_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_438984D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438984D = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.specialShadowObj, 0LL, v5, v6, v7, v8, v9, v10);
    BattleActorControl__EnableRenderer(v11, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v12);
  }
}


void __fastcall BattleActorControl__DisplayAnimationEffect(
        BattleActorControl_o *this,
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  System_String_o *TriggerKey; // x20
  System_Collections_Generic_IEnumerable_T__o *Value_string__BattleActorAnimationEffect; // x22
  const MethodInfo *v9; // x1
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_o **p_prevAnimEffectTriggerKey; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x23

  if ( (byte_4389847 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleActorAnimationEffect___ctor__);
    sub_B775C4(&System_Action_BattleActorAnimationEffect__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    sub_B775C4(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
    sub_B775C4(&Method_BattleActorControl__DisplayAnimationEffect_b__138_0__);
    byte_4389847 = 1;
  }
  TriggerKey = BattleActorAnimationEffect__MakeTriggerKey(animName, eventTag, (const MethodInfo *)eventTag);
  Value_string__BattleActorAnimationEffect = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__GetValue_string__BattleActorAnimationEffect___(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                                                                                              TriggerKey,
                                                                                              0LL,
                                                                                              (const MethodInfo_1C68204 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  p_prevAnimEffectTriggerKey = &this->fields.prevAnimEffectTriggerKey;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string__BattleActorAnimationEffect, v9) )
  {
    if ( !*p_prevAnimEffectTriggerKey )
      sub_B7769C(0LL, v10);
    if ( !System_String__Equals_44889276(*p_prevAnimEffectTriggerKey, TriggerKey, 0LL) )
    {
      v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v18,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__138_0__,
        (const MethodInfo_26A0868 *)Method_System_Action_BattleActorAnimationEffect___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        Value_string__BattleActorAnimationEffect,
        (System_Action_T__o *)v18,
        (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  *p_prevAnimEffectTriggerKey = TriggerKey;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey,
    (System_Int32_array **)TriggerKey,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}


void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  UIWidget_o *v6; // x0
  __int64 v7; // x1
  UIWidget_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438984C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_TryGetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438984C = 1;
  }
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_12;
    if ( !UnityEngine_Component__TryGetComponent_UIWidget_(
            target,
            &component,
            (const MethodInfo_1C6DC5C *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v6 = component;
    if ( !component )
LABEL_12:
      sub_B7769C(v6, v7);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)component, isEnable, 0LL);
  }
}


bool __fastcall BattleActorControl__EndServantObjectVisibleCtr(
        BattleActorControl_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, timing, 1, v3);
}


bool __fastcall BattleActorControl__ExecuteServantObjectVisibleCtr(
        BattleActorControl_o *this,
        int32_t timing,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, timing, 0, v3);
}


bool __fastcall BattleActorControl__ExistMotionEvent(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4389859 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
    sub_B775C4(&Method_System_Func_PlayMakerFSM__bool___ctor__);
    sub_B775C4(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass165_0__ExistMotionEvent_b__0__);
    sub_B775C4(&BattleActorControl___c__DisplayClass165_0_TypeInfo);
    byte_4389859 = 1;
  }
  v5 = sub_B77694(BattleActorControl___c__DisplayClass165_0_TypeInfo);
  BattleActorControl___c__DisplayClass165_0___ctor((BattleActorControl___c__DisplayClass165_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 16) = eventName;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)eventName, v8, v9, v10, v11, v12, v13);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass165_0__ExistMotionEvent_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_PlayMakerFSM__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          motionFSM,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v16,
           (const MethodInfo_1D2D438 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_43898AA & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_43898AA = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__StopVoice(uniqueID, fadeoutTime, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetAddColor(BattleActorControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v5; // x19
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438989D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_B775C4(&StringLiteral_16208/*"_AddColor"*/);
    byte_438989D = 1;
  }
  rendererArrayList = this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_14;
  material = (UnityEngine_Material_o *)rendererArrayList->fields._items->m_Items[0];
  if ( !material )
    goto LABEL_15;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
  if ( !material )
    goto LABEL_15;
  material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41467028(
                                         material,
                                         (System_String_o *)StringLiteral_16208/*"_AddColor"*/,
                                         0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_clear(0LL);
    goto BattleActorControl$$GetAddColor;
  }
  v5 = this->fields.rendererArrayList;
  if ( !v5 )
    goto LABEL_15;
  if ( !v5->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  material = (UnityEngine_Material_o *)v5->fields._items->m_Items[0];
  if ( !material || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL)) == 0LL )
LABEL_15:
    sub_B7769C(material, method);
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16208/*"_AddColor"*/, 0LL);
BattleActorControl$$GetAddColor:
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


bool __fastcall BattleActorControl__GetBattleModelObjectVisibleControlComponentsEnable(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x8

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    sub_B7769C(this, method);
  return BattleModelObjectVisibleControlComponents->max_length != 0;
}


ChangeBattlePhaseNotify_o *__fastcall BattleActorControl__GetChangePhaseNotify(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  bool v5; // w8
  ChangeBattlePhaseNotify_o *result; // x0
  struct BattlePerformance_o *v7; // x8
  UnityEngine_Object_o *data; // x20
  bool v9; // w8
  struct BattlePerformance_o *v10; // x8
  struct BattleData_o *v11; // x8

  if ( (byte_43898C1 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898C1 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.performance;
    if ( !v7 )
      goto LABEL_16;
    data = (UnityEngine_Object_o *)v7->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v9 = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    result = 0LL;
    if ( v9 )
    {
      v10 = this->fields.performance;
      if ( v10 )
      {
        v11 = v10->fields.data;
        if ( v11 )
          return v11->fields.changePhaseNotify;
      }
LABEL_16:
      sub_B7769C(0LL, v4);
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 Fsm; // x0
  __int64 v5; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  __int64 v8; // x8
  __int64 v9; // x20
  unsigned __int64 v10; // x21
  System_String_o *v11; // x0
  __int64 v13; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_43898D4 & 1) == 0 )
  {
    sub_B775C4(&char___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&StringLiteral_5373/*"DelayEnd"*/);
    byte_43898D4 = 1;
  }
  result = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_23;
  if ( !motionFSM->max_length )
    goto LABEL_22;
  Fsm = (__int64)motionFSM->m_Items[0];
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
  if ( !Fsm )
    goto LABEL_23;
  Fsm = *(_QWORD *)(Fsm + 88);
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (__int64)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                   (System_String_o *)StringLiteral_5373/*"DelayEnd"*/,
                   0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  if ( System_String__IsNullOrEmpty(Value, 0LL) )
    return v3;
  Fsm = sub_B775DC(char___TypeInfo, 1LL);
  if ( !Fsm )
    goto LABEL_23;
  v5 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_22;
  *(_WORD *)(Fsm + 32) = 44;
  if ( !Value || (Fsm = (__int64)System_String__Split(Value, (System_Char_array *)Fsm, 0LL)) == 0 )
LABEL_23:
    sub_B7769C(Fsm, v5);
  v8 = *(_QWORD *)(Fsm + 24);
  v9 = Fsm;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)v8 )
    {
      v11 = *(System_String_o **)(v9 + 32 + 8 * v10);
      result = 0;
      Fsm = System_Int32__TryParse(v11, &result, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v3,
          result,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v8) = *(_DWORD *)(v9 + 24);
      if ( (__int64)++v10 >= (int)v8 )
        return v3;
    }
LABEL_22:
    v13 = sub_B776C8(Fsm);
    sub_B77668(v13, 0LL);
  }
  return v3;
}


float __fastcall BattleActorControl__GetHeight(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleServantData_o *battleSvtData; // x8
  float actorScale; // s0
  float *p_height; // x8
  BattleActorControl_c *v6; // x0
  float height; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_438987A & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B775C4(&BattleActorControl_TypeInfo);
    byte_438987A = 1;
  }
  height = 0.0;
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_15;
  this = (BattleActorControl_o *)battleSvtData->fields.svtdata;
  if ( !this )
    goto LABEL_15;
  if ( ServantEntity__getBattleHeight((ServantEntity_o *)this, &height, 0LL) )
  {
    actorScale = v2->fields.actorScale;
    p_height = &height;
    return *p_height * actorScale;
  }
  this = (BattleActorControl_o *)v2->fields.battleSvtData;
  if ( !this )
LABEL_15:
    sub_B7769C(this, method);
  if ( BattleServantData__get_BattleSize((BattleServantData_o *)this, 0LL) == 6 )
  {
    p_height = &v2->fields.actorScale;
    actorScale = 15.0;
  }
  else
  {
    v6 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v6 = BattleActorControl_TypeInfo;
    }
    actorScale = v2->fields.actorScale;
    p_height = &v6->static_fields->defaultHeight;
  }
  return *p_height * actorScale;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetMainColor(BattleActorControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v5; // x19
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438989C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    byte_438989C = 1;
  }
  rendererArrayList = this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_14;
  material = (UnityEngine_Material_o *)rendererArrayList->fields._items->m_Items[0];
  if ( !material )
    goto LABEL_15;
  material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL);
  if ( !material )
    goto LABEL_15;
  material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41467028(
                                         material,
                                         (System_String_o *)StringLiteral_16248/*"_Color"*/,
                                         0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v6 = UnityEngine_Color__get_white(0LL);
    goto BattleActorControl$$GetMainColor;
  }
  v5 = this->fields.rendererArrayList;
  if ( !v5 )
    goto LABEL_15;
  if ( !v5->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  material = (UnityEngine_Material_o *)v5->fields._items->m_Items[0];
  if ( !material || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL)) == 0LL )
LABEL_15:
    sub_B7769C(material, method);
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16248/*"_Color"*/, 0LL);
BattleActorControl$$GetMainColor:
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


BattlePlayAnimationComponent_array *__fastcall BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_43898DB & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
    byte_43898DB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
}


System_String_o *__fastcall BattleActorControl__GetPrefixVoiceId(
        BattleActorControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x22
  BattleServantData_o *Instance; // x0
  __int64 v7; // x1
  BattleServantData_o *v8; // x20
  struct BattleActionData_ShiftServant_o *v9; // x8
  int32_t v10; // w1
  int32_t limit; // w2
  int32_t SvtId; // w22
  const MethodInfo *v13; // x1

  if ( (byte_438986F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_438986F = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v8 = Instance;
  if ( !myShiftData )
  {
    Instance = this->fields.battleSvtData;
    if ( Instance )
    {
      SvtId = BattleServantData__getSvtId(Instance, 0LL);
      Instance = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v13);
      if ( v8 )
      {
        limit = (int)Instance;
        Instance = v8;
        v10 = SvtId;
        return ServantAssetLoadManager__GetPrefixVoiceId(
                 (ServantAssetLoadManager_o *)Instance,
                 v10,
                 limit,
                 voiceId,
                 0LL);
      }
    }
LABEL_11:
    sub_B7769C(Instance, v7);
  }
  v9 = this->fields.myShiftData;
  if ( !v9 || !Instance )
    goto LABEL_11;
  v10 = v9->fields.svtId;
  limit = v9->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0LL);
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleActorControl__GetServantObjectVisibleControlActor(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  BattleActionData_o *actiondata; // x0
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x24
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v21; // x22
  Il2CppObject *current; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  _DWORD *monitor; // x8
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438988C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass263_0__GetServantObjectVisibleControlActor_b__0__);
    sub_B775C4(&BattleActorControl___c__DisplayClass263_0_TypeInfo);
    byte_438988C = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v3 = sub_B77694(BattleActorControl___c__DisplayClass263_0_TypeInfo);
  BattleActorControl___c__DisplayClass263_0___ctor((BattleActorControl___c__DisplayClass263_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_27;
  *(_QWORD *)(v3 + 24) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v3 + 16) = v13;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)v13, v14, v15, v16, v17, v18, v19);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, v5),
        v21 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v21,
          (Il2CppObject *)v3,
          Method_BattleActorControl___c__DisplayClass263_0__GetServantObjectVisibleControlActor_b__0__,
          (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v21,
          (const MethodInfo_1C66E54 *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v3 + 16)) == 0LL) )
  {
LABEL_27:
    sub_B7769C(actiondata, v5);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)actiondata,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v31.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v23 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v23 )
    {
      if ( !current )
        sub_B7769C(v23, v24);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)current,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v26 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( !v26 )
      {
        if ( !Component_srcLineSprite )
          sub_B7769C(v26, v27);
        monitor = Component_srcLineSprite[16].monitor;
        if ( !monitor )
          sub_B7769C(v26, v27);
        if ( monitor[6] )
        {
          if ( !v12 )
            sub_B7769C(v26, v27);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v12,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
            (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v12;
}


UnityEngine_GameObject_array *__fastcall BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


PlayMakerFSM_o *__fastcall BattleActorControl__GetUniqueMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  __int64 v4; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_B7769C(this, method);
  if ( !motionFSM->max_length )
  {
    v4 = sub_B776C8(this);
    sub_B77668(v4, 0LL);
  }
  return motionFSM->m_Items[0];
}


void __fastcall BattleActorControl__InitAnimationEffect(
        BattleActorControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass137_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantConfConponent_o *p_dicTriggerAnimEffects; // x19
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_iTween; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  const MethodInfo *v27; // x1
  BattleActorControl___c_c *v28; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__137_1; // x21
  Il2CppObject *v31; // x22
  struct BattleActorControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v39; // x0
  BattleActorControl___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  struct BattleActorControl___c_StaticFields *v42; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__137_2; // x21
  Il2CppObject *v44; // x22
  struct BattleActorControl___c_StaticFields *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct BattleActorControl___c_StaticFields *v52; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__137_3; // x22
  Il2CppObject *v54; // x23
  struct BattleActorControl___c_StaticFields *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7

  if ( (byte_4389846 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
    sub_B775C4(&Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__);
    sub_B775C4(&Method_System_Func_BattleActorAnimationEffect__bool___ctor__);
    sub_B775C4(&Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__);
    sub_B775C4(&Method_System_Func_BattleActorAnimationEffect__string___ctor__);
    sub_B775C4(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
    sub_B775C4(&System_Func_BattleActorAnimationEffect__bool__TypeInfo);
    sub_B775C4(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
    sub_B775C4(&System_Func_BattleActorAnimationEffect__string__TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__InitAnimationEffect_b__137_1__);
    sub_B775C4(&Method_BattleActorControl___c__InitAnimationEffect_b__137_2__);
    sub_B775C4(&Method_BattleActorControl___c__InitAnimationEffect_b__137_3__);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass137_0__InitAnimationEffect_b__0__);
    sub_B775C4(&BattleActorControl___c__DisplayClass137_0_TypeInfo);
    sub_B775C4(&BattleActorControl___c_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389846 = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass137_0_o *)sub_B77694(BattleActorControl___c__DisplayClass137_0_TypeInfo);
  BattleActorControl___c__DisplayClass137_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_36;
  v5->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects, 0LL, v8, v9, v10, v11, v12, v13);
  v15 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v15, v16, v17, v18, v19, v20, v21);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v6 = this->fields.actorObject;
    if ( v6 )
    {
      Components_iTween = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                                 v6,
                                                                                 (const MethodInfo_1DEC270 *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v24,
        (Il2CppObject *)v5,
        Method_BattleActorControl___c__DisplayClass137_0__InitAnimationEffect_b__0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattleActorAnimationEffect__bool___ctor__);
      v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              Components_iTween,
              (System_Func_TSource__bool__o *)v24,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v25,
                                                                   (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v26, v27) )
      {
        v28 = BattleActorControl___c_TypeInfo;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v28 = BattleActorControl___c_TypeInfo;
        }
        static_fields = v28->static_fields;
        _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__137_1;
        if ( !_9__137_1 )
        {
          if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v28);
            static_fields = BattleActorControl___c_TypeInfo->static_fields;
          }
          v31 = (Il2CppObject *)static_fields->__9;
          _9__137_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__137_1,
            v31,
            Method_BattleActorControl___c__InitAnimationEffect_b__137_1__,
            (const MethodInfo_29EAA10 *)Method_System_Func_BattleActorAnimationEffect__string___ctor__);
          v32 = BattleActorControl___c_TypeInfo->static_fields;
          v32->__9__137_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__137_1;
          sub_B77560(
            (BattleServantConfConponent_o *)&v32->__9__137_1,
            (System_Int32_array **)_9__137_1,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
        }
        v39 = System_Linq_Enumerable__GroupBy_object__object_(
                v26,
                (System_Func_TSource__TKey__o *)_9__137_1,
                (const MethodInfo_1D3244C *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v40 = BattleActorControl___c_TypeInfo;
        v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v40 = BattleActorControl___c_TypeInfo;
        }
        v42 = v40->static_fields;
        _9__137_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v42->__9__137_2;
        if ( !_9__137_2 )
        {
          if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v42 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v44 = (Il2CppObject *)v42->__9;
          _9__137_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__137_2,
            v44,
            Method_BattleActorControl___c__InitAnimationEffect_b__137_2__,
            (const MethodInfo_29EAA10 *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__);
          v45 = BattleActorControl___c_TypeInfo->static_fields;
          v45->__9__137_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__137_2;
          sub_B77560(
            (BattleServantConfConponent_o *)&v45->__9__137_2,
            (System_Int32_array **)_9__137_2,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
          v40 = BattleActorControl___c_TypeInfo;
        }
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = BattleActorControl___c_TypeInfo;
        }
        v52 = v40->static_fields;
        _9__137_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v52->__9__137_3;
        if ( !_9__137_3 )
        {
          if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v40);
            v52 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v54 = (Il2CppObject *)v52->__9;
          _9__137_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__137_3,
            v54,
            Method_BattleActorControl___c__InitAnimationEffect_b__137_3__,
            (const MethodInfo_29EAA10 *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__);
          v55 = BattleActorControl___c_TypeInfo->static_fields;
          v55->__9__137_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__137_3;
          sub_B77560(
            (BattleServantConfConponent_o *)&v55->__9__137_3,
            (System_Int32_array **)_9__137_3,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
        }
        v62 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                                       v41,
                                       (System_Func_TSource__TKey__o *)_9__137_2,
                                       (System_Func_TSource__TElement__o *)_9__137_3,
                                       (const MethodInfo_1D3D9DC *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (BattleServantConfConponent_c *)v62;
        sub_B77560(p_dicTriggerAnimEffects, v62, v63, v64, v65, v66, v67, v68);
      }
      return;
    }
LABEL_36:
    sub_B7769C(v6, v7);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v5; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__193_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActorControl___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4389860 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
    sub_B775C4(&Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__);
    sub_B775C4(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__193_0__);
    sub_B775C4(&BattleActorControl___c_TypeInfo);
    byte_4389860 = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v5 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__193_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__193_0;
  if ( !_9__193_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__193_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__193_0,
      v8,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__193_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__);
    v9 = BattleActorControl___c_TypeInfo->static_fields;
    v9->__9__193_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__193_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__193_0,
      (System_Int32_array **)_9__193_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__193_0,
           (const MethodInfo_1D1CBDC *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
}


bool __fastcall BattleActorControl__IsAlreadyDrop(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.IsAlreadyDrop;
}


bool __fastcall BattleActorControl__IsDelayEndSequence(
        BattleActorControl_o *this,
        TreasureDvcEntity_o *entity,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int seqIdFromMstTDSeqWeight; // w21
  int32_t DispLimitCount; // w0

  v4 = this;
  if ( (byte_43898D5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    this = (BattleActorControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_43898D5 = 1;
  }
  if ( !entity )
    return 0;
  delayEndSequenceIdListFromMotion_k__BackingField = v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !delayEndSequenceIdListFromMotion_k__BackingField
    || !delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
  {
    return 0;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_18;
  seqIdFromMstTDSeqWeight = battleSvtData->fields.seqIdFromMstTDSeqWeight;
  if ( seqIdFromMstTDSeqWeight <= 0 )
  {
    if ( TreasureDvcEntity__IsRandomTD(entity, 0LL) )
    {
      seqIdFromMstTDSeqWeight = entity->fields.cacheRandomSeqId;
    }
    else
    {
      this = (BattleActorControl_o *)v4->fields.battleSvtData;
      if ( !this )
        goto LABEL_18;
      DispLimitCount = BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
      seqIdFromMstTDSeqWeight = TreasureDvcEntity__getSeqId(entity, DispLimitCount, 0LL);
    }
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
    goto LABEL_18;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)this,
         -1,
         (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
LABEL_18:
    sub_B7769C(this, entity);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(this, method);
  deckSvt = battleSvtData->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isHideShadow(deckSvt, 0LL);
  return (char)deckSvt;
}


bool __fastcall BattleActorControl__IsMatchFollowingCardType(
        BattleActorControl_o *this,
        int32_t expectedType,
        int32_t targetCardIndexFromNow,
        bool allowCutInOtherSvtCard,
        bool includeTreasureDevice,
        const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8
  UnityEngine_Object_o *performance; // x24
  BattleData_o *v14; // x0
  __int64 v15; // x1
  struct BattlePerformance_o *v16; // x8
  UnityEngine_Object_o *data; // x24
  struct BattlePerformance_o *v18; // x9
  struct BattleActionData_o *v19; // x8
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v21; // x24
  bool isTreasureDvc; // w0
  struct BattleActionData_o *v23; // x8
  struct BattleActionData_o *v24; // x8
  int v25; // w21
  int32_t v26; // w22
  int32_t i; // w20
  struct BattlePerformance_o *v28; // x8

  if ( (byte_43898D7 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898D7 = 1;
  }
  if ( this->fields.isEnemy )
    goto LABEL_4;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return (unsigned __int8)actiondata & 1;
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_38;
  data = (UnityEngine_Object_o *)v16->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_38;
  v19 = this->fields.actiondata;
  if ( !v19 )
    goto LABEL_38;
  v14 = v18->fields.data;
  if ( !v14 )
    goto LABEL_38;
  SelectCommand = BattleData__getSelectCommand(v14, v19->fields.actionIndex + targetCardIndexFromNow, 0LL);
  if ( !SelectCommand
    || (v21 = SelectCommand, this->fields.uniqueID != SelectCommand->fields.uniqueId)
    || BattleCommandData__get_type(SelectCommand, 0LL) != expectedType )
  {
LABEL_4:
    LOBYTE(actiondata) = 0;
  }
  else
  {
    if ( includeTreasureDevice )
    {
      if ( allowCutInOtherSvtCard )
        goto LABEL_37;
      goto LABEL_27;
    }
    isTreasureDvc = BattleCommandData__isTreasureDvc(v21, 0LL);
    LOBYTE(actiondata) = !isTreasureDvc;
    if ( !isTreasureDvc && !allowCutInOtherSvtCard )
    {
LABEL_27:
      v14 = (BattleData_o *)UnityEngine_Mathf__Abs_41473480(targetCardIndexFromNow, 0LL);
      if ( (int)v14 < 2 )
      {
LABEL_37:
        LOBYTE(actiondata) = 1;
        return (unsigned __int8)actiondata & 1;
      }
      v23 = this->fields.actiondata;
      if ( v23 )
      {
        v14 = (BattleData_o *)UnityEngine_Mathf__Min_41473676(
                                v23->fields.actionIndex,
                                v23->fields.actionIndex + targetCardIndexFromNow,
                                0LL);
        v24 = this->fields.actiondata;
        if ( v24 )
        {
          v25 = (int)v14;
          v14 = (BattleData_o *)UnityEngine_Mathf__Max_41473772(
                                  v24->fields.actionIndex,
                                  v24->fields.actionIndex + targetCardIndexFromNow,
                                  0LL);
          v26 = (_DWORD)v14 - 1;
          for ( i = v25 + 1; i <= v26; ++i )
          {
            v28 = this->fields.performance;
            if ( !v28 )
              goto LABEL_38;
            v14 = v28->fields.data;
            if ( !v14 )
              goto LABEL_38;
            v14 = (BattleData_o *)BattleData__getSelectCommand(v14, i, 0LL);
            if ( !v14 )
              goto LABEL_4;
            LOBYTE(actiondata) = 0;
            if ( this->fields.uniqueID != LODWORD(v14->fields.data) )
              return (unsigned __int8)actiondata & 1;
          }
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_B7769C(v14, v15);
    }
  }
  return (unsigned __int8)actiondata & 1;
}


bool __fastcall BattleActorControl__IsNoTouchSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattlePerformance_o *performance; // x8

  if ( BattleActorControl__isNoVoice(this, method) )
    return 1;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_8;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsNoSkipDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 1;
  performance = this->fields.performance;
  if ( !performance || (battleSvtData = (BattleServantData_o *)performance->fields.data) == 0LL )
LABEL_8:
    sub_B7769C(battleSvtData, v3);
  return BattleData__IsNoSkipDeadFirst((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__IsVisibleByTargetNodeScale(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *checkScaleNode; // x20
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x20
  float v6; // s1
  float v7; // s2
  float v8; // s0

  if ( (byte_4389867 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389867 = 1;
  }
  checkScaleNode = (UnityEngine_Object_o *)this->fields.checkScaleNode;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(checkScaleNode, 0LL, 0LL) )
    return 1;
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
    return 0;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = GameObjectExtensions__GetLocalScale(this->fields.checkScaleNode, 0LL);
  result = 0;
  if ( v8 > 0.01 && v6 > 0.01 )
    return v7 > 0.01;
  return result;
}


bool __fastcall BattleActorControl__IsVoiceOffSvt(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  BattleServantData_o *battleSvtData; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  BattleData_o *v10; // x19

  if ( (byte_43898D6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898D6 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_18;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 || this->fields.isEnemy )
    return 0;
  v9 = this->fields.performance;
  if ( !v9
    || (battleSvtData = this->fields.battleSvtData) == 0LL
    || (v10 = v9->fields.data,
        battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !v10) )
  {
LABEL_18:
    sub_B7769C(battleSvtData, v5);
  }
  return BattleData__IsVoiceOffSvt(v10, (int32_t)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v6; // x8
  struct BattleActorControl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__367_0; // x20
  Il2CppObject *v9; // x21
  struct BattleActorControl___c_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x19
  unsigned __int64 v21; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x20
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  System_Int32_array **v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattlePlayAnimationComponent_o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x23
  BattlePlayAnimationComponent_SaveData_o *v45; // x0
  __int64 v46; // x8
  unsigned __int64 v47; // x10
  int *v48; // x11
  __int64 v49; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_43898D8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_B775C4(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
    sub_B775C4(&Method_System_Func_BattlePlayAnimationComponent_SaveData__bool___ctor__);
    sub_B775C4(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_B775C4(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__367_0__);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass367_0__LoadSavedPartAnimation_b__1__);
    sub_B775C4(&BattleActorControl___c__DisplayClass367_0_TypeInfo);
    sub_B775C4(&BattleActorControl___c_TypeInfo);
    byte_43898D8 = 1;
  }
  saveDataArray = 0LL;
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData
    && BattleServantData__TryGetPartAnimationSaveData(
         battleSvtData,
         this->fields.partAnimationSaveKey,
         &saveDataArray,
         0LL) )
  {
    PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                     this,
                                                                                     0,
                                                                                     v4);
    v6 = BattleActorControl___c_TypeInfo;
    if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
      v6 = BattleActorControl___c_TypeInfo;
    }
    static_fields = v6->static_fields;
    _9__367_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__367_0;
    if ( !_9__367_0 )
    {
      if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        static_fields = BattleActorControl___c_TypeInfo->static_fields;
      }
      v9 = (Il2CppObject *)static_fields->__9;
      _9__367_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__367_0,
        v9,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__367_0__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
      v10 = BattleActorControl___c_TypeInfo->static_fields;
      v10->__9__367_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__367_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v10->__9__367_0,
        (System_Int32_array **)_9__367_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__367_0,
            (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v17 )
      sub_B7769C(0LL, v18);
    klass = v17->klass;
    v20 = v17;
    if ( *(_WORD *)&v17->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        ++v21;
        p_offset += 4;
        if ( v21 >= *(unsigned __int16 *)&v17->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_18:
      p_method = sub_B0F4C0(v17, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0LL);
    }
    v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v20,
            *(_QWORD *)(p_method + 8));
    if ( !v25 )
      sub_B7769C(0LL, v24);
    while ( 1 )
    {
      v26 = *(_QWORD *)v25;
      if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
      {
        v27 = 0LL;
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v27;
          v28 += 4;
          if ( v27 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
            goto LABEL_25;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_25:
        v29 = sub_B0F4C0(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
        break;
      v30 = sub_B77694(BattleActorControl___c__DisplayClass367_0_TypeInfo);
      BattleActorControl___c__DisplayClass367_0___ctor((BattleActorControl___c__DisplayClass367_0_o *)v30, 0LL);
      v31 = *(_QWORD *)v25;
      if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
      {
        v32 = 0LL;
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          ++v32;
          v33 += 4;
          if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
            goto LABEL_32;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_32:
        v34 = sub_B0F4C0(v25, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL);
      }
      v35 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
      if ( !v30 )
        sub_B7769C(v35, v35);
      *(_QWORD *)(v30 + 16) = v35;
      sub_B77560((BattleServantConfConponent_o *)(v30 + 16), v35, v36, v37, v38, v39, v40, v41);
      v42 = *(BattlePlayAnimationComponent_o **)(v30 + 16);
      v43 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v44,
        (Il2CppObject *)v30,
        Method_BattleActorControl___c__DisplayClass367_0__LoadSavedPartAnimation_b__1__,
        (const MethodInfo_29E92C4 *)Method_System_Func_BattlePlayAnimationComponent_SaveData__bool___ctor__);
      v45 = (BattlePlayAnimationComponent_SaveData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                         v43,
                                                         (System_Func_TSource__bool__o *)v44,
                                                         (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v42 )
        sub_B7769C(v45, v45);
      BattlePlayAnimationComponent__SetSaveData(v42, v45, 0LL);
    }
    v46 = *(_QWORD *)v25;
    if ( *(_WORD *)(*(_QWORD *)v25 + 298LL) )
    {
      v47 = 0LL;
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        ++v47;
        v48 += 4;
        if ( v47 >= *(unsigned __int16 *)(*(_QWORD *)v25 + 298LL) )
          goto LABEL_41;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_41:
      v49 = sub_B0F4C0(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v49)(v25, *(_QWORD *)(v49 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectParticleSwitch(
        BattleActorControl_o *this,
        bool isPlay,
        bool isNoblePhantasm,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *buffLoopEffectDict; // x0
  _DWORD *m_ParticleSystem; // x0
  __int64 v9; // x1
  _DWORD *v10; // x23
  int v11; // w8
  unsigned int v12; // w27
  _DWORD *v13; // x8
  UnityEngine_ParticleSystem_o *v14; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  UnityEngine_GameObject_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v23; // [xsp+20h] [xbp-70h] BYREF
  _DWORD *v24; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v26; // 0:x0.8

  if ( (byte_43898CB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_43898CB = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v24 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(buffLoopEffectDict, (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B7769C(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_2648B20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v23 = v22;
LABEL_24:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v23,
            (const MethodInfo_2889594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v23.fields.currentValue )
      sub_B7769C(0LL, v20);
    m_ParticleSystem = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                         (UnityEngine_GameObject_o *)v23.fields.currentValue,
                         1,
                         (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    v10 = m_ParticleSystem;
    if ( !m_ParticleSystem )
      sub_B7769C(0LL, v9);
    v11 = m_ParticleSystem[6];
    if ( v11 >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( v12 >= v11 )
        {
          v21 = sub_B776C8(m_ParticleSystem);
          sub_B77668(v21, 0LL);
        }
        v13 = &v10[2 * v12];
        v14 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v13 + 4);
        if ( !v14 )
          sub_B7769C(m_ParticleSystem, v9);
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(*((UnityEngine_ParticleSystem_o **)v13 + 4), 0LL).fields.m_ParticleSystem;
        v24 = m_ParticleSystem;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_B7769C(m_ParticleSystem, v9);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_23;
          UnityEngine_ParticleSystem__Play_51807604(v14, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
          if ( !gameObject )
            sub_B7769C(0LL, v17);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v24;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v25, 0, 0LL);
            v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0LL);
            if ( !v18 )
              sub_B7769C(0LL, v19);
            UnityEngine_GameObject__SetActive(v18, 0, 0LL);
            goto LABEL_23;
          }
          UnityEngine_ParticleSystem__Stop_51807992(v14, 0LL);
        }
        v26.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v24;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v26, !isPlay, 0LL);
LABEL_23:
        v11 = v10[6];
        if ( (int)++v12 >= v11 )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v23,
    (const MethodInfo_2889590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_43898CF & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_13701/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/);
    byte_43898CF = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13701/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_B7769C(0LL, v5);
    BattlePerformance__AllLoopEffectSwitch(performance, isPlay, 1, 0LL);
  }
  else
  {
    BattleActorControl__LoopEffectParticleSwitch(this, isPlay, 1, v6);
  }
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__MoveLoopEffectFromActorObject(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_List_int__o *v4; // x19
  Il2CppObject *value; // x21
  int32_t key; // w22
  _BOOL8 v7; // x0
  __int64 v8; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  UnityEngine_Object_o *parent; // x0
  __int64 v12; // x1
  System_String_o *name; // x23
  UnityEngine_Object_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *v19; // x21
  UnityEngine_Transform_o *v20; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v22; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v23; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_43898D0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898D0 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_B7769C(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v22,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)buffLoopEffectDict,
    (const MethodInfo_2FF475C *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v23 = v22;
  v4 = 0LL;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v23,
            (const MethodInfo_28883E4 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v23.fields.current.fields.key;
    value = v23.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !value )
        sub_B7769C(v7, v8);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_B7769C(0LL, v10);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_B7769C(0LL, v12);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v14 )
        sub_B7769C(0LL, v15);
      v16 = UnityEngine_Object__get_name(v14, 0LL);
      if ( !name )
        sub_B7769C(v16, v16);
      if ( !System_String__Equals_44889276(name, v16, 0LL) )
      {
        if ( !v4 )
        {
          v4 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v4,
            (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
          if ( !v4 )
            sub_B7769C(v17, v18);
        }
        System_Collections_Generic_List_int___Add(
          v4,
          key,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v20 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v19 )
          sub_B7769C(v20, v20);
        UnityEngine_Transform__set_parent(v19, v20, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v23,
    (const MethodInfo_2888550 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v4;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__MoveLoopEffectToActorObject(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *movedEffect,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actorObject; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v7; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  StatusEffectPosOverwriteMaster_o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  WarEntity_o *v14; // x0
  WarEntity_o *v15; // x23
  int32_t coordinate; // w1
  __int64 v17; // x1
  BattleServantData_o *v18; // x0
  int32_t v19; // w24
  int32_t ActorSvtId; // w25
  const MethodInfo *v21; // x1
  __int64 LimitCount; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  UnityEngine_GameObject_o *Item; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x23
  UnityEngine_Object_o *parent; // x0
  __int64 v32; // x1
  System_String_o *name; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  const MethodInfo *v38; // x1
  System_String_o *nodeName; // x25
  UnityEngine_Transform_o *v40; // x24
  int32_t v41; // w2
  UnityEngine_Transform_o *NodeFromLvName; // x24
  __int64 v43; // x0
  __int64 v44; // x1
  float v45; // s0
  float v46; // s1
  float v47; // s2
  struct BattleServantData_o *v48; // x8
  float v49; // s8
  float v50; // s9
  float v51; // s10
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x0
  __int64 v55; // x1
  struct BattleServantData_o *v56; // x8
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v58; // [xsp+20h] [xbp-90h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43898D1 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43898D1 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  entity = 0LL;
  if ( movedEffect )
  {
    actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    buffData = (BattleBuffData_o *)UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL);
    if ( ((unsigned __int8)buffData & 1) == 0 && movedEffect->fields._size >= 1 )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (buffData = battleSvtData->fields.buffData) == 0LL
        || (EffectBuffList = BattleBuffData__GetEffectBuffList(buffData, 0LL),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)buffData,
                                                                                                  (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_B7769C(buffData, v7);
      }
      v11 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v57,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectBuffList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v58 = v57;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v58,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v12 )
          break;
        if ( !v58.fields.current )
          sub_B7769C(v12, v13);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B7769C(v12, v13);
        v14 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)v58.fields.current[1].klass,
                (const MethodInfo_21FB894 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v15 = v14;
        if ( v14 )
        {
          coordinate = (int32_t)v14->fields.coordinate;
          if ( coordinate >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 coordinate,
                 (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v18 = this->fields.battleSvtData;
            if ( !v18 )
              sub_B7769C(0LL, v17);
            v19 = (int32_t)v15->fields.coordinate;
            ActorSvtId = BattleServantData__getActorSvtId(v18, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v21);
            if ( !v11 )
              sub_B7769C(LimitCount, v23);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v11, &entity, v19, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_B7769C(0LL, v24);
              Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                                   (int32_t)v15->fields.coordinate,
                                                   (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_B7769C(0LL, v27);
              transform = UnityEngine_GameObject__get_transform(Item, 0LL);
              v30 = transform;
              if ( !transform )
                sub_B7769C(0LL, v29);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_B7769C(0LL, v32);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_B7769C(name, v34);
              if ( !name )
                sub_B7769C(0LL, v34);
              if ( !System_String__Equals_44889276(name, entity->fields.nodeName, 0LL) )
              {
                zero = UnityEngine_Vector3__get_zero(0LL);
                UnityEngine_Transform__set_localPosition(v30, zero, 0LL);
                identity = UnityEngine_Quaternion__get_identity(0LL);
                UnityEngine_Transform__set_localRotation(v30, identity, 0LL);
                v36 = this->fields.actorObject;
                if ( !v36 )
                  sub_B7769C(0LL, v35);
                v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !entity )
                  sub_B7769C(v37, v38);
                nodeName = entity->fields.nodeName;
                v40 = v37;
                v41 = BattleActorControl__getLimitCount(this, v38);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v40, nodeName, v41, 1, 0LL);
                *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_zero(0LL);
                v48 = this->fields.battleSvtData;
                if ( !v48 )
                  sub_B7769C(v43, v44);
                if ( !entity )
                  sub_B7769C(0LL, v44);
                v49 = v45;
                v50 = v46;
                v51 = v47;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v48->fields.isEnemy, 0LL);
                Offset.fields.x = v49 + Offset.fields.x;
                Offset.fields.y = v50 + Offset.fields.y;
                Offset.fields.z = v51 + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v30, Offset, 0LL);
                if ( !entity )
                  sub_B7769C(0LL, v52);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                v66 = UnityEngine_Quaternion__Euler_36342120(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v30, v66, 0LL);
                if ( !entity )
                  sub_B7769C(0LL, v53);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v30, Scale, 0LL);
                UnityEngine_Transform__set_parent(v30, NodeFromLvName, 0LL);
                v56 = this->fields.battleSvtData;
                if ( !v56 )
                  sub_B7769C(v54, v55);
                if ( v56->fields.isEnemy )
                {
                  localScale = UnityEngine_Transform__get_localScale(v30, 0LL);
                  localScale.fields.x = -localScale.fields.x;
                  UnityEngine_Transform__set_localScale(v30, localScale, 0LL);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v58,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void __fastcall BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_43898A6 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_SkipDead__);
    sub_B775C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_43898A6 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B77694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B7769C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *noblePhantasmObjectVisibleCtrList; // x0
  UnityEngine_Object_o *actorObject; // x20
  UnityEngine_MeshCollider_o *Component_srcLineSprite; // x20
  const MethodInfo *v19; // x1
  struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *extraLoadedVoiceArgsList; // x0
  BattleServantConfConponent_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_Enumerator_T__o v33; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_438983F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438983F = 1;
  }
  memset(&v33, 0, sizeof(v33));
  this->fields.rendererArrayList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.rendererArrayList, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_26;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleActorControl__Clear__);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
  {
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.actorObject;
    if ( !noblePhantasmObjectVisibleCtrList )
      goto LABEL_26;
    Component_srcLineSprite = (UnityEngine_MeshCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)noblePhantasmObjectVisibleCtrList,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
      if ( noblePhantasmObjectVisibleCtrList )
      {
        BattlePerformance__RemoveCollider(
          (BattlePerformance_o *)noblePhantasmObjectVisibleCtrList,
          Component_srcLineSprite,
          0LL);
        goto LABEL_15;
      }
LABEL_26:
      sub_B7769C(noblePhantasmObjectVisibleCtrList, v15);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v15);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v19);
  extraLoadedVoiceArgsList = this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (BattleServantConfConponent_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)extraLoadedVoiceArgsList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v22 )
        break;
      if ( !v33.fields.current )
        sub_B7769C(v22, v23);
      klass = (int32_t)v33.fields.current[1].klass;
      klass_high = HIDWORD(v33.fields.current[1].klass);
      monitor = (int32_t)v33.fields.current[1].monitor;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v33,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_B77560(p_extraLoadedVoiceArgsList, 0LL, v27, v28, v29, v30, v31, v32);
  }
}


void __fastcall BattleActorControl__OnEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleActorControl_o *v5; // x20
  struct BattleFBXComponent_o *fbxcomponent; // x8
  const MethodInfo *v7; // x3
  __int64 v8; // x9
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_4389872 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    byte_4389872 = 1;
  }
  fbxcomponent = v5->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_13;
  BattleActorControl__DisplayAnimationEffect(v5, fbxcomponent->fields.currentCommonAnimName, name, v3);
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, const char *))this->klass[2]._1.gc_desc)(
          this,
          name,
          this->klass[2]._1.name) & 1) == 0 )
  {
LABEL_12:
    BattleActorControl__sendEventFSM_22495744(v5, name, 0, v7);
    return;
  }
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this
    || (this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(BattleActorControl_o *, System_String_o *, void *))&this->klass[2]._1.byval_arg.bits)(
                                         this,
                                         name,
                                         this->klass[2]._1.this_arg.data)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, name);
  }
  v8 = *(&BattleActorControl_EventClass_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v8
    && (BattleActorControl_EventClass_c *)this->klass->_2.typeHierarchy[v8 - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc((BattleActorControl_EventClass_o *)this, 0LL);
    this = (BattleActorControl_o *)v5->fields.EventList;
    if ( this )
    {
      ((void (__fastcall *)(BattleActorControl_o *, System_String_o *, void *))this->klass[2]._2.typeHierarchy)(
        this,
        name,
        this->klass[2]._2.unity_user_data);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v9 = (BattleActorControl_o *)sub_B77990(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void __fastcall BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438987B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438987B = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (BattleServantConfConponent_o *)&this->fields.particleDisconnectorObj;
  v4 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_B77560(p_particleDisconnectorObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  void *performance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v6; // x20
  char *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  TreasureDvcEntity_o *v14; // x20
  int v15; // w8
  struct BattleServantData_o *v16; // x10
  int32_t v17; // w9
  struct BattleServantData_o *v18; // x8
  struct BattleServantData_o *v19; // x8
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *v22; // x0
  __int64 v23; // x0

  if ( (byte_438988E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__266_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_438988E = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_25;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_25;
  if ( !performance )
    goto LABEL_25;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v6 = (BattleSequenceManager_o *)performance;
  performance = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_25;
  performance = TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v6 )
    goto LABEL_25;
  BattleSequenceManager__SetIntactBgms(v6, (System_Int32_array *)performance, 0LL);
  performance = this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_25;
  if ( *((_BYTE *)performance + 455) )
  {
    performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_25;
    v7 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v7 )
      goto LABEL_25;
    *((_QWORD *)v7 + 32) = performance;
    sub_B77560(
      (BattleServantConfConponent_o *)(v7 + 256),
      (System_Int32_array **)performance,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    performance = this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_25;
  }
  performance = BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v14 = (TreasureDvcEntity_o *)performance;
  performance = (void *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v14 )
    goto LABEL_25;
  performance = TreasureDvcEntity__getFixAppearanceInfoArray(v14, (int32_t)performance, 0LL);
  if ( !performance )
    goto LABEL_23;
  if ( *((_DWORD *)performance + 6) < 2u )
  {
    v23 = sub_B776C8(performance);
    sub_B77668(v23, 0LL);
  }
  v15 = *((_DWORD *)performance + 8);
  if ( v15 < 1 )
  {
LABEL_23:
    v22 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_24;
  }
  v16 = this->fields.battleSvtData;
  if ( !v16
    || (v17 = *((_DWORD *)performance + 9), v16->fields.tmpAppearanceId = v15, (v18 = this->fields.battleSvtData) == 0LL)
    || (v18->fields.dressDispId = v17, (v19 = this->fields.battleSvtData) == 0LL) )
  {
LABEL_25:
    sub_B7769C(performance, obj);
  }
  v19->fields.isForceAppearance = 1;
  v20 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__266_0__,
    0LL);
  v22 = BattleActorControl__waitChangeApp(this, v20, v21);
LABEL_24:
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v22, 0LL);
}


void __fastcall BattleActorControl__OnNoblePhantasmPlayComplete(
        BattleActorControl_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *Instance; // x0
  __int64 v6; // x1
  BattlePerformance_o *performance; // x20
  struct BattlePerformance_o *v8; // x8
  struct BattlePerformance_o *v9; // x8
  const MethodInfo *v10; // x1
  struct BattlePerformance_o *v11; // x8
  const MethodInfo *v12; // x2
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *v15; // x0
  const MethodInfo *v16; // x3
  BattleFBXComponent_c *v17; // x0
  struct BattlePerformance_o *v18; // x8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4389890 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__268_0__);
    sub_B775C4(&BattleFBXComponent_TypeInfo);
    sub_B775C4(&System_GC_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&StringLiteral_6499/*"FINISHED"*/);
    byte_4389890 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_47;
  ((void (__fastcall *)(struct BattleServantData_o *, BattleServantData_o *, BattleActorControl_o *, struct BattlePerformance_o *, void *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass[1]._1.image);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_47;
  BattleServantData__changeNp(Instance, Instance->fields.tmpNp + Instance->fields.np, 0, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_47;
  BattleServantData__updateNpGauge(Instance, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  LOBYTE(Instance->fields.nexttpturn) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_44383624(0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_47;
  performance = this->fields.performance;
  Instance = (BattleServantData_o *)BattleServantData__get_TreasureDevice(Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( !performance )
    goto LABEL_47;
  BattlePerformance__endNoblePhantasm(performance, Instance->fields.index, 0LL);
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_47;
  Instance = (BattleServantData_o *)v8->fields.bgPerf;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__setDamageTargetVoiceFlg((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_47;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)Instance, 1, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__changeShadowType((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)Instance, 0LL);
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_47;
  Instance = (BattleServantData_o *)v9->fields.commandPerf;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v10);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__ResetOverwriteNobleDamageAnimationFlg((BattlePerformance_o *)Instance, 0LL);
  v11 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v11 )
    goto LABEL_47;
  Instance = (BattleServantData_o *)v11->fields.logic;
  if ( !Instance )
    goto LABEL_47;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v12);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)Instance, 1, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_47;
  if ( !BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_47;
    BattlePerformance__noblePhantasmWhiteInFade((BattlePerformance_o *)Instance, 0.2, 0.3, 0LL);
    if ( !this->fields.noblePhantasmCallback )
    {
      BattleActorControl__sendEventFSM_22495744(this, (System_String_o *)StringLiteral_6499/*"FINISHED"*/, 0, v16);
      goto LABEL_41;
    }
    v17 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v17 = BattleFBXComponent_TypeInfo;
    }
    v17->static_fields->EnableEvent = 1;
    Instance = (BattleServantData_o *)this->fields.noblePhantasmCallback;
    if ( Instance )
    {
      System_Action__Invoke((System_Action_o *)Instance, 0LL);
      goto LABEL_41;
    }
LABEL_47:
    sub_B7769C(Instance, v6);
  }
  v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__268_0__,
    0LL);
  v15 = BattleActorControl__waitChangeApp(this, v13, v14);
  Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_36304832(
                                      (UnityEngine_MonoBehaviour_o *)this,
                                      v15,
                                      0LL);
LABEL_41:
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_47;
  Instance = (BattleServantData_o *)v18->fields.data;
  if ( !Instance )
    goto LABEL_47;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_47;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v19);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v20);
  }
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_43898A5 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_SkipDead__);
    sub_B775C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_43898A5 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B77694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B7769C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v7, 0LL);
  }
}


System_String_o *__fastcall BattleActorControl__OverwriteAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  bool v4; // w20
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  System_String_o *result; // x0

  v4 = isSaveAnim;
  v6 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, isSaveAnim, method);
  result = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v6, v4, v7);
  if ( this->fields.overwriteAnim )
    return ChangeBattlePhaseOverwriteAnimation__Overwrite(this->fields.overwriteAnim, this, result, 0LL);
  return result;
}


void __fastcall BattleActorControl__PlayMatchPartAnimation(
        BattleActorControl_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v28; // x20

  if ( (byte_43898DA & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattlePlayAnimationComponent___ctor__);
    sub_B775C4(&System_Action_BattlePlayAnimationComponent__TypeInfo);
    sub_B775C4(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_B775C4(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
    sub_B775C4(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass370_0__PlayMatchPartAnimation_b__0__);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass370_0__PlayMatchPartAnimation_b__1__);
    sub_B775C4(&BattleActorControl___c__DisplayClass370_0_TypeInfo);
    byte_43898DA = 1;
  }
  v9 = sub_B77694(BattleActorControl___c__DisplayClass370_0_TypeInfo);
  BattleActorControl___c__DisplayClass370_0___ctor((BattleActorControl___c__DisplayClass370_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 16) = key;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)key, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = animName;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 24), (System_Int32_array **)animName, v18, v19, v20, v21, v22, v23);
  *(float *)(v9 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v24);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass370_0__PlayMatchPartAnimation_b__0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v26,
                                                         (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v28 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass370_0__PlayMatchPartAnimation_b__1__,
    (const MethodInfo_26A0868 *)Method_System_Action_BattlePlayAnimationComponent___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v27,
    (System_Action_T__o *)v28,
    (const MethodInfo_1C676E8 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
}


void __fastcall BattleActorControl__PreDestroyActor(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x19
  UnityEngine_Transform_o *transform; // x1

  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__ProcServantObjectVisibleCtr(
        BattleActorControl_o *this,
        int32_t timing,
        bool isEnd,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x23
  int max_length; // w8
  BattleActorControl_o *v6; // x19
  int v9; // w26
  char v10; // w24
  char v11; // w27
  char v12; // w25
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x22
  BattleModelObjectVisibleControlComponent_o *v15; // x0
  __int64 v17; // x0

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    goto LABEL_21;
  max_length = BattleModelObjectVisibleControlComponents->max_length;
  v6 = this;
  if ( max_length < 1 )
  {
    v12 = 0;
    return v12 & 1;
  }
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  do
  {
    if ( v9 >= (unsigned int)max_length )
    {
      v17 = sub_B776C8(this);
      sub_B77668(v17, 0LL);
    }
    v13 = &BattleModelObjectVisibleControlComponents->obj.klass + v9;
    v14 = v13[4];
    if ( !v14 )
      goto LABEL_21;
    v15 = (BattleModelObjectVisibleControlComponent_o *)v13[4];
    if ( isEnd )
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__EndProc(v15, timing, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__ExecuteProc(v15, timing, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__IsSkinnedMesh(
                                     (BattleModelObjectVisibleControlComponent_o *)v14,
                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = 1;
      v10 = (LOBYTE(v14->_1.byval_arg.bits) != 0) ^ isEnd;
    }
    v12 = 1;
LABEL_13:
    max_length = BattleModelObjectVisibleControlComponents->max_length;
    ++v9;
  }
  while ( v9 < max_length );
  if ( (v11 & 1) != 0 && (v12 & 1) != 0 )
  {
    this = (BattleActorControl_o *)v6->fields.fbxcomponent;
    if ( this )
    {
      BattleFBXComponent__SetActiveActorEffectAll((BattleFBXComponent_o *)this, v10 & 1, 0LL);
      return v12 & 1;
    }
LABEL_21:
    sub_B7769C(this, *(_QWORD *)&timing);
  }
  return v12 & 1;
}


void __fastcall BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v6; // x20
  unsigned __int64 v7; // x22
  struct BattleFBXComponent_o **p_fbxcomponent; // x23
  WarBoardManager_TaskList_o *v9; // x21
  __int64 v10; // x0

  v4 = this;
  if ( (byte_43898A1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    this = (BattleActorControl_o *)sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    byte_43898A1 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                   obj,
                                   (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  actorObject = this->fields.actorObject;
  v6 = this;
  if ( (int)actorObject >= 1 )
  {
    v7 = 0LL;
    p_fbxcomponent = &this->fields.fbxcomponent;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)actorObject )
      {
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
      }
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v9 = (WarBoardManager_TaskList_o *)p_fbxcomponent[v7];
      this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                       v9,
                                       (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                         v9,
                                         (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(actorObject) = v6->fields.actorObject;
      if ( (__int64)++v7 >= (int)actorObject )
        return;
    }
LABEL_14:
    sub_B7769C(this, obj);
  }
}


void __fastcall BattleActorControl__RemoveEventClass(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    sub_B7769C(0LL, eventName);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._39_Remove.method)(
    EventList,
    eventName,
    EventList->klass->vtable._40_get_SyncRoot.methodPtr);
}


void __fastcall BattleActorControl__RemoveOverwriteEachPhaseAnimation(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleObserver_o *overwriteAnim; // x0
  BattleServantConfConponent_o *p_overwriteAnim; // x19
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
  if ( overwriteAnim )
  {
    p_overwriteAnim = (BattleServantConfConponent_o *)&this->fields.overwriteAnim;
    BattleObserver__Remove(overwriteAnim, 0LL);
    p_overwriteAnim->klass = 0LL;
    sub_B77560(p_overwriteAnim, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall BattleActorControl__RemovePartAnimationSaveData(
        BattleActorControl_o *this,
        bool isAll,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  System_String_o *partAnimationSaveKey; // x1

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
  {
    if ( isAll )
      partAnimationSaveKey = 0LL;
    else
      partAnimationSaveKey = this->fields.partAnimationSaveKey;
    BattleServantData__RemovePartAnimationSaveData(battleSvtData, partAnimationSaveKey, 0LL);
  }
}


void __fastcall BattleActorControl__RevertDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_43898C4 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898C4 = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL) )
    {
      v5 = this->fields.fbxcomponent;
      if ( !v5 )
        sub_B7769C(0LL, v4);
      BattleFBXComponent__RevertDefaultAnimation(v5, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass287_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x22

  if ( (byte_43898A0 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_Material___ctor__);
    sub_B775C4(&System_Action_Material__TypeInfo);
    sub_B775C4(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass287_0__SetActorAlpha_b__0__);
    sub_B775C4(&BattleActorControl___c__DisplayClass287_0_TypeInfo);
    byte_43898A0 = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass287_0_o *)sub_B77694(BattleActorControl___c__DisplayClass287_0_TypeInfo);
  BattleActorControl___c__DisplayClass287_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  v5->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_Material__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass287_0__SetActorAlpha_b__0__,
    (const MethodInfo_26A0868 *)Method_System_Action_Material___ctor__);
  BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v9,
    (const MethodInfo_1C6942C *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetAddColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v13; // x1
  UnityEngine_Material_array *v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_438989F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16208/*"_AddColor"*/);
    byte_438989F = 1;
  }
  memset(&v21, 0, sizeof(v21));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v21.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_B7769C(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_B7769C(0LL, v13);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
            {
              v19 = sub_B776C8(materials);
              sub_B77668(v19, 0LL);
            }
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v17 )
                sub_B7769C(materials, v18);
              v22.fields.r = r;
              v22.fields.g = g;
              v22.fields.b = b;
              v22.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v17,
                (System_String_o *)StringLiteral_16208/*"_AddColor"*/,
                v22,
                0LL);
            }
            LODWORD(v15) = v14->max_length;
            ++v16;
          }
          while ( (__int64)v16 < (int)v15 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


void __fastcall BattleActorControl__SetAlreadyDrop(BattleActorControl_o *this, bool isDrop, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    battleSvtData->fields.IsAlreadyDrop = isDrop;
}


void __fastcall BattleActorControl__SetBillBoardGroup(
        BattleActorControl_o *this,
        int32_t gId,
        const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_43898BE & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
    byte_43898BE = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_WebViewObject )
    sub_B7769C(0LL, v6);
  LODWORD(Component_WebViewObject->fields.onHooked) = gId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetDispServant(
        BattleActorControl_o *this,
        bool isShadow,
        bool isChoco,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x22
  _QWORD *p_klass; // x8
  BattleServantConfConponent_o *p_shadowEffectObject; // x21
  unsigned __int64 v9; // x24
  __int64 v10; // x25
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x23
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_c *klass; // x8
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *actorObject; // x23
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x0

  v6 = this;
  if ( (byte_4389893 & 1) == 0 )
  {
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389893 = 1;
  }
  p_shadowEffectObject = (BattleServantConfConponent_o *)&v6->fields.shadowEffectObject;
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  if ( p_klass )
  {
    v9 = 0LL;
    v10 = 32LL;
    while ( 1 )
    {
      v11 = *((unsigned int *)p_klass + 6);
      if ( (__int64)v9 >= (int)v11 )
        break;
      if ( v9 >= v11 )
        goto LABEL_19;
      v12 = (UnityEngine_Object_o *)p_klass[v9 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v12, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v9 >= LODWORD(klass->_1.namespaze) )
        {
LABEL_19:
          v30 = sub_B776C8(this);
          sub_B77668(v30, 0LL);
        }
        *(void **)((char *)&klass->_1.image + v10) = 0LL;
        sub_B77560((BattleServantConfConponent_o *)((char *)klass + v10), 0LL, v13, v14, v15, v16, v17, v18);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v9;
        v10 += 8LL;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_20;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_20:
    sub_B7769C(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  v23 = (System_Int32_array **)BattleEffectUtility__ChangeServantView(
                                 actorObject,
                                 isShadow,
                                 isChoco,
                                 svtlimitaddent,
                                 0LL);
  p_shadowEffectObject->klass = (BattleServantConfConponent_c *)v23;
  sub_B77560(p_shadowEffectObject, v23, v24, v25, v26, v27, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMainColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v10; // x0
  __int64 v11; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v13; // x1
  UnityEngine_Material_array *v14; // x19
  __int64 v15; // x8
  unsigned __int64 v16; // x24
  UnityEngine_Object_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_438989E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    byte_438989E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v21 = v20;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v21.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_B7769C(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_B7769C(0LL, v13);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
            {
              v19 = sub_B776C8(materials);
              sub_B77668(v19, 0LL);
            }
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v17 )
                sub_B7769C(materials, v18);
              v22.fields.r = r;
              v22.fields.g = g;
              v22.fields.b = b;
              v22.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v17,
                (System_String_o *)StringLiteral_16248/*"_Color"*/,
                v22,
                0LL);
            }
            LODWORD(v15) = v14->max_length;
            ++v16;
          }
          while ( (__int64)v16 < (int)v15 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o fadeColour,
        float alpha,
        const MethodInfo *method)
{
  float b; // s10
  float g; // s9
  float r; // s8
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  struct BattleServantData_o *v12; // x8
  int32_t displayType; // w8
  bool v14; // w1
  bool v15; // w2
  int uniqueId; // w8
  BattleServantData_o *v17; // x19
  unsigned int v18; // w22
  float v19; // s8
  float v20; // s9
  float v21; // s10
  float v22; // s12
  BattleServantData_c **v23; // x8
  UnityEngine_Renderer_o *v24; // x20
  float v25; // s4
  float v26; // s5
  float v27; // s6
  float v28; // s7
  float v29; // s4
  float v30; // s5
  float v31; // s6
  float v32; // s7
  __int64 v33; // x8
  BattleServantData_o *v34; // x20
  unsigned __int64 v35; // x26
  UnityEngine_Object_o *v36; // x21
  __int64 v37; // x0
  UnityEngine_Color_o v38; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v41; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_438989B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    sub_B775C4(&StringLiteral_16208/*"_AddColor"*/);
    byte_438989B = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  *(_QWORD *)&v38.fields.r = 0LL;
  *(_QWORD *)&v38.fields.b = 0LL;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_31;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0LL) )
  {
    BattleActorControl__SetMaterialWhite(this, v10);
  }
  else
  {
    v12 = this->fields.battleSvtData;
    if ( v12 )
    {
      displayType = v12->fields.displayType;
      v14 = displayType == 2;
      v15 = displayType == 3;
    }
    else
    {
      v14 = 0;
      v15 = 0;
    }
    BattleActorControl__SetDispServant(this, v14, v15, v11);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_31:
    sub_B7769C(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v17 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v18 = 0;
    v19 = r * alpha;
    v20 = g * alpha;
    v21 = b * alpha;
    v22 = 1.0 - alpha;
    while ( 1 )
    {
      if ( v18 >= uniqueId )
        goto LABEL_30;
      v23 = &v17->klass + (int)v18;
      v24 = (UnityEngine_Renderer_o *)v23[4];
      if ( !v24 )
        goto LABEL_31;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v23[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_31;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      methoda.methodPointer = *(Il2CppMethodPointer *)&color.fields.r;
      methoda.invoker_method = *(void **)&color.fields.b;
      color.fields.r = v22 * color.fields.r;
      color.fields.g = v22 * color.fields.g;
      color.fields.b = v22 * color.fields.b;
      color.fields.a = 1.0;
      UnityEngine_Color___ctor(color, v25, v26, v27, v28, &methoda);
      v41.fields.a = 0.0;
      v41.fields.r = v19;
      v41.fields.g = v20;
      v41.fields.b = v21;
      UnityEngine_Color___ctor(v41, v29, v30, v31, v32, (const MethodInfo *)&v38);
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v24, 0LL);
      if ( !battleSvtData )
        goto LABEL_31;
      v33 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v34 = battleSvtData;
      if ( (int)v33 >= 1 )
        break;
LABEL_28:
      uniqueId = v17->fields.uniqueId;
      if ( (int)++v18 >= uniqueId )
        return;
    }
    v35 = 0LL;
    while ( v35 < (unsigned int)v33 )
    {
      v36 = (UnityEngine_Object_o *)*(&v34->fields.userSvtId.fields.currentCryptoKey + v35);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v36 )
          goto LABEL_31;
        *(_QWORD *)&v42.fields.b = methoda.invoker_method;
        *(_QWORD *)&v42.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v36, (System_String_o *)StringLiteral_16248/*"_Color"*/, v42, 0LL);
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v36, (System_String_o *)StringLiteral_16208/*"_AddColor"*/, v38, 0LL);
      }
      LODWORD(v33) = v34->fields.uniqueId;
      if ( (__int64)++v35 >= (int)v33 )
        goto LABEL_28;
    }
LABEL_30:
    v37 = sub_B776C8(battleSvtData);
    sub_B77668(v37, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v6; // x19
  unsigned int v7; // w22
  unsigned int *v8; // x8
  UnityEngine_Renderer_o *v9; // x20
  unsigned __int64 v10; // x25
  UnityEngine_Material_o *v11; // x21
  int v12; // s0
  __int64 v16; // x0

  if ( (byte_438989A & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    byte_438989A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                             gameObject,
                                             (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_24;
  klass = (int)gameObject[1].klass;
  v6 = gameObject;
  if ( klass >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= klass )
      {
LABEL_25:
        v16 = sub_B776C8(gameObject);
        sub_B77668(v16, 0LL);
      }
      v8 = (unsigned int *)(&v6->klass + (int)v7);
      v9 = (UnityEngine_Renderer_o *)*((_QWORD *)v8 + 4);
      if ( !v9 )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(
                                                 *((UnityEngine_Renderer_o **)v8 + 4),
                                                 0LL);
      if ( !gameObject )
        break;
      v10 = 0LL;
      while ( (__int64)v10 < SLODWORD(gameObject[1].klass) )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(v9, 0LL);
        if ( !gameObject )
          goto LABEL_24;
        if ( v10 >= LODWORD(gameObject[1].klass) )
          goto LABEL_25;
        v11 = (UnityEngine_Material_o *)*((_QWORD *)&gameObject[1].monitor + v10);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v11, 0LL, 0LL) )
        {
          *(UnityEngine_Color_o *)&v12 = UnityEngine_Color__get_white(0LL);
          if ( !v11 )
            goto LABEL_24;
          UnityEngine_Material__SetColor(v11, (System_String_o *)StringLiteral_16248/*"_Color"*/, *(UnityEngine_Color_o *)&v12, 0LL);
        }
        ++v10;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(v9, 0LL);
        if ( !gameObject )
          goto LABEL_24;
      }
      klass = (int)v6[1].klass;
      if ( (int)++v7 >= klass )
        return;
    }
LABEL_24:
    sub_B7769C(gameObject, v4);
  }
}


void __fastcall BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x20
  BattleActorControl___c_c *v5; // x8
  struct BattleActorControl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__368_0; // x21
  Il2CppObject *v8; // x22
  struct BattleActorControl___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BattleActorControl___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  struct BattleActorControl___c_StaticFields *v19; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__368_1; // x21
  Il2CppObject *v21; // x22
  struct BattleActorControl___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  BattlePlayAnimationComponent_SaveData_array *v31; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_43898D9 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_B775C4(&Method_System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___ctor__);
    sub_B775C4(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
    sub_B775C4(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    sub_B775C4(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__368_0__);
    sub_B775C4(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__368_1__);
    sub_B775C4(&BattleActorControl___c_TypeInfo);
    byte_43898D9 = 1;
  }
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v2);
  v5 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__368_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__368_0;
  if ( !_9__368_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__368_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__368_0,
      v8,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__368_0__,
      (const MethodInfo_29E92C4 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
    v9 = BattleActorControl___c_TypeInfo->static_fields;
    v9->__9__368_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__368_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__368_0,
      (System_Int32_array **)_9__368_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          PlayAnimationComponents,
          (System_Func_TSource__bool__o *)_9__368_0,
          (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v17 = BattleActorControl___c_TypeInfo;
  v18 = v16;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v17 = BattleActorControl___c_TypeInfo;
  }
  v19 = v17->static_fields;
  _9__368_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v19->__9__368_1;
  if ( !_9__368_1 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v19 = BattleActorControl___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)v19->__9;
    _9__368_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B77694(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__368_1,
      v21,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__368_1__,
      (const MethodInfo_29EAA10 *)Method_System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___ctor__);
    v22 = BattleActorControl___c_TypeInfo->static_fields;
    v22->__9__368_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__368_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v22->__9__368_1,
      (System_Int32_array **)_9__368_1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)_9__368_1,
                                                         (const MethodInfo_1D39068 *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v30 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v29,
          (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v31 = (BattlePlayAnimationComponent_SaveData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                         (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(battleSvtData, this->fields.partAnimationSaveKey, v31, 0LL);
}


void __fastcall BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *IsHideShadow; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x8
  char v10; // w20
  bool v11; // w1

  if ( (byte_43898D3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898D3 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
      sub_B7769C(IsHideShadow, v8);
    v11 = (v10 & 1) == 0 && active;
    UnityEngine_GameObject__SetActive(IsHideShadow, v11, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  BattleData_o *data; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4389898 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    sub_B775C4(&StringLiteral_16311/*"_MainTex"*/);
    byte_4389898 = 1;
  }
  if ( !BattleActorControl__IsHideShadow(this, method) )
  {
    clear = UnityEngine_Color__get_clear(0LL);
    v12.fields.r = r;
    v12.fields.g = g;
    v12.fields.b = b;
    v12.fields.a = a;
    data = (BattleData_o *)UnityEngine_Color__op_Equality(v12, clear, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_19;
      data = performance->fields.data;
      if ( !data )
        goto LABEL_19;
      GroundShadowColor = BattleData__getGroundShadowColor(data, 0LL);
      r = GroundShadowColor.fields.r;
      g = GroundShadowColor.fields.g;
      b = GroundShadowColor.fields.b;
      a = GroundShadowColor.fields.a;
    }
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
    {
      data = (BattleData_o *)this->fields.mpb;
      if ( data )
      {
        UnityEngine_MaterialPropertyBlock__Clear_41471820((UnityEngine_MaterialPropertyBlock_o *)data, 0LL);
        data = (BattleData_o *)this->fields.mpb;
        if ( data )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)data,
            (System_String_o *)StringLiteral_16311/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          data = (BattleData_o *)this->fields.mpb;
          if ( data )
          {
            v14.fields.r = r;
            v14.fields.g = g;
            v14.fields.b = b;
            v14.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)data,
              (System_String_o *)StringLiteral_16248/*"_Color"*/,
              v14,
              0LL);
            data = (BattleData_o *)this->fields.shadowObj;
            this->fields.currentShadowColor.fields.r = r;
            this->fields.currentShadowColor.fields.g = g;
            this->fields.currentShadowColor.fields.b = b;
            this->fields.currentShadowColor.fields.a = a;
            if ( data )
            {
              data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                       (UnityEngine_Component_o *)data,
                                       (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( data )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)data, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_B7769C(data, v9);
    }
  }
}


void __fastcall BattleActorControl__SetShadowSize(
        BattleActorControl_o *this,
        int32_t btlSize,
        const MethodInfo *method)
{
  BattleActorControl_c *v5; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v6; // x21
  char *ShadowTransform; // x0
  __int64 v8; // x1
  int v9; // w8
  int v10; // w8
  int v11; // w8
  int v12; // w8
  int v13; // w8
  int v14; // w8
  int v15; // w8
  int v16; // w8
  int v17; // w8
  int v18; // w8
  int v19; // w8
  int v20; // w8
  int v21; // w8
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  BattleActorControl_c *v28; // x0
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v31; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v32; // x21
  int v33; // w8
  int v34; // w8
  int v35; // w8
  int v36; // w8
  int v42; // w8
  int v43; // w8
  int v45; // w8
  int v47; // w8
  int v49; // w8
  int v50; // w8
  int v52; // w8
  int v53; // w8
  int v54; // w8
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  BattleActorControl_c *v61; // x0
  struct BattleActorControl_StaticFields *v62; // x0
  BattleActorControl_c *v63; // x0
  BattleActorControl_c *v64; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  WarBoardEvalValueSquare_EvalValueSquare_o *v68; // x22
  System_Int32_array **v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  BattleActorControl_c *v76; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v78; // x23
  BattleActorControl_c *v79; // x0
  UnityEngine_Object_o *v80; // x19
  __int64 v81; // x0

  if ( (byte_4389899 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&UnityEngine_Vector3___TypeInfo);
    sub_B775C4(&StringLiteral_13073/*"Shadow"*/);
    byte_4389899 = 1;
  }
  v5 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v5 = BattleActorControl_TypeInfo;
  }
  if ( !v5->static_fields->ShadowTransform )
  {
    v6 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v6,
      (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v9 = *((_DWORD *)ShadowTransform + 6);
    if ( !v9 )
      goto LABEL_150;
    *((_QWORD *)ShadowTransform + 4) = 0LL;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v9 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 11) = 0;
    *((_QWORD *)ShadowTransform + 6) = 0LL;
    if ( !v6 )
      goto LABEL_151;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      0,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v10 = *((_DWORD *)ShadowTransform + 6);
    if ( !v10 )
      goto LABEL_150;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v10 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      1,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v11 = *((_DWORD *)ShadowTransform + 6);
    if ( !v11 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v11 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      2,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v12 = *((_DWORD *)ShadowTransform + 6);
    if ( !v12 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v12 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      3,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v13 = *((_DWORD *)ShadowTransform + 6);
    if ( !v13 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v13 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      4,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v14 = *((_DWORD *)ShadowTransform + 6);
    if ( !v14 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v14 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      5,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v15 = *((_DWORD *)ShadowTransform + 6);
    if ( !v15 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v15 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      6,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v16 = *((_DWORD *)ShadowTransform + 6);
    if ( !v16 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v16 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      7,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v17 = *((_DWORD *)ShadowTransform + 6);
    if ( !v17 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v17 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      8,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v18 = *((_DWORD *)ShadowTransform + 6);
    if ( !v18 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v18 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      9,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v19 = *((_DWORD *)ShadowTransform + 6);
    if ( !v19 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v19 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      10,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v20 = *((_DWORD *)ShadowTransform + 6);
    if ( !v20 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v20 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      11,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v21 = *((_DWORD *)ShadowTransform + 6);
    if ( !v21 )
      goto LABEL_150;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v21 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v6,
      12,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v28 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v28 = BattleActorControl_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v28->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v6;
    sub_B77560(static_fields, (System_Int32_array **)v6, v22, v23, v24, v25, v26, v27);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v31 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v31 = BattleActorControl_TypeInfo;
    }
    if ( !v31->static_fields->specialShadowTransform )
    {
      v32 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B77694(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v32,
        (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v33 = *((_DWORD *)ShadowTransform + 6);
      if ( !v33 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v33 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 11) = 0;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      if ( !v32 )
        goto LABEL_151;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        0,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v34 = *((_DWORD *)ShadowTransform + 6);
      if ( !v34 )
        goto LABEL_150;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v34 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        1,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v35 = *((_DWORD *)ShadowTransform + 6);
      if ( !v35 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v35 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        2,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v36 = *((_DWORD *)ShadowTransform + 6);
      if ( !v36 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v36 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        3,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v42 = *((_DWORD *)ShadowTransform + 6);
      if ( !v42 )
        goto LABEL_150;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v42 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        4,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v43 = *((_DWORD *)ShadowTransform + 6);
      if ( !v43 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v43 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        5,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v45 = *((_DWORD *)ShadowTransform + 6);
      if ( !v45 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v45 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        6,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v47 = *((_DWORD *)ShadowTransform + 6);
      if ( !v47 )
        goto LABEL_150;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v47 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        7,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v49 = *((_DWORD *)ShadowTransform + 6);
      if ( !v49 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v49 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        8,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v50 = *((_DWORD *)ShadowTransform + 6);
      if ( !v50 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v50 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        9,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v52 = *((_DWORD *)ShadowTransform + 6);
      if ( !v52 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v52 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        10,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v53 = *((_DWORD *)ShadowTransform + 6);
      if ( !v53 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v53 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        11,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B775DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v54 = *((_DWORD *)ShadowTransform + 6);
      if ( !v54 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v54 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v32,
        12,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v61 = BattleActorControl_TypeInfo;
      if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v61 = BattleActorControl_TypeInfo;
      }
      v62 = v61->static_fields;
      v62->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v32;
      sub_B77560(
        (BattleServantConfConponent_o *)&v62->specialShadowTransform,
        (System_Int32_array **)v32,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
  }
  v63 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v63 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v63->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_151;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v64 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v64 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v64->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_151;
    Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v68 = Item;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
    {
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v69 = (System_Int32_array **)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)ShadowTransform,
                                     (System_String_o *)StringLiteral_13073/*"Shadow"*/,
                                     0LL);
      *p_shadowObj = (struct UnityEngine_Transform_o *)v69;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.shadowObj, v69, v70, v71, v72, v73, v74, v75);
    }
    v76 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v76 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v76->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( (BYTE3(v76->vtable._0_Equals.methodPtr) & 4) != 0 && !v76->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v76);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_151;
      }
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v78 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v78, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_151;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v79 = BattleActorControl_TypeInfo;
            if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v79 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v79->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_151;
            v68 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v80 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v80, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_151;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v68 )
        goto LABEL_151;
      if ( LODWORD(v68->fields._EvalValueWarsituation_k__BackingField) )
      {
        if ( !ShadowTransform )
          goto LABEL_151;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v68->fields._EvalValue_k__BackingField,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_151;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v68->fields._EvalValueWarsituation_k__BackingField) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)&v68->fields._BenAdjustmentValueA1_k__BackingField,
              0LL);
            return;
          }
LABEL_151:
          sub_B7769C(ShadowTransform, v8);
        }
      }
LABEL_150:
      v81 = sub_B776C8(ShadowTransform);
      sub_B77668(v81, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetSilentDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v6; // x2
  struct BattleServantData_o *v7; // x8

  BattleActorControl__invisibleSvtModel(this, 1, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (BattleServantData__playDead(battleSvtData, 0LL),
        BattleActorControl__StartDropItem(this, 1, v6),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B7769C(battleSvtData, v4);
  }
  v7->fields.isSilnetDead = 1;
}


void __fastcall BattleActorControl__SetStepInBattle(
        BattleActorControl_o *this,
        bool isInBattle,
        const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = isInBattle;
}


void __fastcall BattleActorControl__SetTempDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v4; // x1
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x0
  BattleFBXComponent_o *v6; // x20

  if ( (byte_43898C3 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898C3 = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL) )
    {
      overwriteAnim = this->fields.overwriteAnim;
      if ( !overwriteAnim
        || (v6 = this->fields.fbxcomponent,
            overwriteAnim = (ChangeBattlePhaseOverwriteAnimation_o *)ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
                                                                       overwriteAnim,
                                                                       this->fields._PlayedOriginalAnimName_k__BackingField,
                                                                       0LL),
            !v6) )
      {
        sub_B7769C(overwriteAnim, v4);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v6, (System_String_o *)overwriteAnim, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ShakePosition(
        BattleActorControl_o *this,
        UnityEngine_Vector3_o range,
        float tm,
        const MethodInfo *method)
{
  this->fields.ShakeRange = range;
  this->fields.ShakeTargetTime = tm;
  this->fields.Shaking = 1;
  this->fields.ShakeTime = 0.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ShiftServantChangeAfter(
        BattleActorControl_o *this,
        bool isShift,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_o **p_myShiftData; // x21
  _BOOL4 isHideShadow; // w22
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  BattleServantData_o *battleSvtData; // x0

  myShiftData = this->fields.myShiftData;
  p_myShiftData = &this->fields.myShiftData;
  if ( myShiftData )
  {
    isHideShadow = myShiftData->fields.isHideShadow;
    if ( ((isHideShadow ^ BattleActorControl__IsHideShadow(this, (const MethodInfo *)isShift)) & 1) != 0 )
      BattleActorControl__UpdateShadow(this, v13);
  }
  this->fields.myShiftData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)p_myShiftData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v14);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, v15);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_43898A9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_12490/*"SKIP_DEAD"*/);
    byte_43898A9 = 1;
  }
  BattleActorControl__sendEventFSM_22495744(this, (System_String_o *)StringLiteral_12490/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleFBXComponent_o *fbxcomponent; // x20
  BattleServantConfConponent_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v6; // x22
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Int32_array **v14; // x8
  struct BattleFBXComponent_o *v15; // x20
  BattleServantConfConponent_o *p_Complete; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v18; // x22
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **NodeFromLvName; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  UnityEngine_Transform_o *v34; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  BattleActorControl_o *v42; // x0
  const MethodInfo *v43; // x1

  v2 = this;
  if ( (byte_438983E & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_Complete__);
    sub_B775C4(&Method_BattleActorControl_OnEvent__);
    sub_B775C4(&StringLiteral_18688/*"en_damage01"*/);
    sub_B775C4(&StringLiteral_18691/*"en_text01"*/);
    this = (BattleActorControl_o *)sub_B775C4(&BattleFBXComponent_onEventDelegate_TypeInfo);
    byte_438983E = 1;
  }
  fbxcomponent = v2->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_10;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (BattleServantConfConponent_o *)&fbxcomponent->fields.OnEvent;
  v6 = (BattleFBXComponent_onEventDelegate_o *)sub_B77694(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v6, (Il2CppObject *)v2, Method_BattleActorControl_OnEvent__, 0LL);
  v7 = (System_Int32_array **)System_Delegate__Combine(OnEvent, (System_Delegate_o *)v6, 0LL);
  v14 = v7;
  if ( v7 && *v7 != (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
    goto LABEL_11;
  p_OnEvent->klass = (BattleServantConfConponent_c *)v7;
  sub_B77560(p_OnEvent, v7, v8, v9, v10, v11, v12, v13);
  v15 = v2->fields.fbxcomponent;
  if ( !v15 )
LABEL_10:
    sub_B7769C(this, method);
  Complete = (System_Delegate_o *)v15->fields.Complete;
  p_Complete = (BattleServantConfConponent_o *)&v15->fields.Complete;
  v18 = (BattleFBXComponent_onEventDelegate_o *)sub_B77694(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v18, (Il2CppObject *)v2, Method_BattleActorControl_Complete__, 0LL);
  v19 = (System_Int32_array **)System_Delegate__Combine(Complete, (System_Delegate_o *)v18, 0LL);
  v14 = v19;
  if ( !v19 || *v19 == (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
  {
    p_Complete->klass = (BattleServantConfConponent_c *)v19;
    sub_B77560(p_Complete, v19, v20, v21, v22, v23, v24, v25);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    NodeFromLvName = (System_Int32_array **)TransformHelper__getNodeFromLvName(
                                              transform,
                                              (System_String_o *)StringLiteral_18691/*"en_text01"*/,
                                              -1,
                                              0,
                                              0LL);
    v2->fields.nodeText = (struct UnityEngine_Transform_o *)NodeFromLvName;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.nodeText, NodeFromLvName, v28, v29, v30, v31, v32, v33);
    v34 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    v35 = (System_Int32_array **)TransformHelper__getNodeFromLvName(
                                   v34,
                                   (System_String_o *)StringLiteral_18688/*"en_damage01"*/,
                                   -1,
                                   0,
                                   0LL);
    v2->fields.nodeDamage = (struct UnityEngine_Transform_o *)v35;
    sub_B77560((BattleServantConfConponent_o *)&v2->fields.nodeDamage, v35, v36, v37, v38, v39, v40, v41);
    return;
  }
LABEL_11:
  v42 = (BattleActorControl_o *)sub_B77990(v14);
  BattleActorControl__OnDestroy(v42, v43);
}


void __fastcall BattleActorControl__StartDeadEffect(
        BattleActorControl_o *this,
        bool enableDropItem,
        float overwriteDuration,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 v8; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 ActorSvtId; // x0
  __int64 v11; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleServantData_o *v22; // x8
  float v23; // s9
  System_String_o *Value; // x0
  const MethodInfo *v25; // x2
  int v26; // w8
  __int64 v27; // x19
  unsigned int v28; // w20
  int v29; // w22
  UnityEngine_GameObject_o *v30; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Object_array *v37; // x20
  System_Int32_array **v38; // x1
  __int64 v39; // x2
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Int32_array **v46; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x1
  const MethodInfo *v54; // x1
  __int64 v55; // x2
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **v62; // x21
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x1
  __int64 v70; // x2
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x21
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x1
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **v112; // x1
  __int64 v113; // x2
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x21
  System_Collections_Hashtable_o *v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  float v124; // [xsp+0h] [xbp-50h] BYREF
  int v125; // [xsp+4h] [xbp-4Ch] BYREF
  float Height; // [xsp+8h] [xbp-48h] BYREF
  int v127; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4389879 & 1) == 0 )
  {
    sub_B775C4(&iTween_EaseType_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23416/*"updateDeadEffect"*/);
    sub_B775C4(&StringLiteral_19296/*"from"*/);
    sub_B775C4(&StringLiteral_18476/*"easetype"*/);
    sub_B775C4(&StringLiteral_10187/*"OnFinishDead"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_12441/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/);
    sub_B775C4(&StringLiteral_21711/*"onupdate"*/);
    sub_B775C4(&StringLiteral_23192/*"to"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_4389879 = 1;
  }
  if ( enableDropItem )
    BattleActorControl__StartDropItem(this, 0, method);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v8 = battleSvtData->fields.displayType == 3;
  else
    v8 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v8 )
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__changeChocoDeadShader(gameObject, 0LL);
  }
  else
  {
    if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__changeDeadShader(gameObject, 0LL);
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_92;
  root_field = performance->fields.root_field;
  ActorSvtId = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ActorSvtId )
    goto LABEL_92;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ActorSvtId, 0LL);
  v15 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v15;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.particleDisconnectorObj,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = this->fields.battleSvtData;
  v23 = 1.3;
  if ( v22 )
  {
    if ( v22->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12441/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, v25);
        if ( !ActorSvtId )
          goto LABEL_92;
        v26 = *(_DWORD *)(ActorSvtId + 24);
        v27 = ActorSvtId;
        if ( v26 >= 1 )
        {
          v28 = 0;
          while ( 1 )
          {
            if ( v28 >= v26 )
              goto LABEL_90;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_92;
            v29 = *(_DWORD *)(v27 + 4LL * (int)v28 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v29 == (_DWORD)ActorSvtId )
              break;
            v26 = *(_DWORD *)(v27 + 24);
            if ( (int)++v28 >= v26 )
              goto LABEL_31;
          }
          v23 = 1.0;
        }
      }
    }
  }
LABEL_31:
  if ( overwriteDuration < 0.0 )
    overwriteDuration = v23;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_B775DC(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_92:
    sub_B7769C(ActorSvtId, v11);
  v37 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19296/*"from"*/;
  if ( StringLiteral_19296/*"from"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_19296/*"from"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v38 = (System_Int32_array **)StringLiteral_19296/*"from"*/;
  }
  else
  {
    v38 = 0LL;
  }
  if ( !v37->max_length )
    goto LABEL_90;
  v37->m_Items[0] = (Il2CppObject *)v38;
  sub_B77560((BattleServantConfConponent_o *)v37->m_Items, v38, v31, v32, v33, v34, v35, v36);
  v127 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v127, v39);
  v46 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B77684(ActorSvtId, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
  }
  if ( v37->max_length <= 1 )
    goto LABEL_90;
  v37->m_Items[1] = (Il2CppObject *)v46;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  ActorSvtId = StringLiteral_23192/*"to"*/;
  if ( StringLiteral_23192/*"to"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_23192/*"to"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v53 = (System_Int32_array **)StringLiteral_23192/*"to"*/;
  }
  else
  {
    v53 = 0LL;
  }
  if ( v37->max_length <= 2 )
    goto LABEL_90;
  v37->m_Items[2] = (Il2CppObject *)v53;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[2], v53, v47, v48, v49, v50, v51, v52);
  Height = BattleActorControl__GetHeight(this, v54);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height, v55);
  v62 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B77684(ActorSvtId, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
  }
  if ( v37->max_length <= 3 )
    goto LABEL_90;
  v37->m_Items[3] = (Il2CppObject *)v62;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[3], v62, v56, v57, v58, v59, v60, v61);
  ActorSvtId = StringLiteral_18476/*"easetype"*/;
  if ( StringLiteral_18476/*"easetype"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_18476/*"easetype"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v69 = (System_Int32_array **)StringLiteral_18476/*"easetype"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( v37->max_length <= 4 )
    goto LABEL_90;
  v37->m_Items[4] = (Il2CppObject *)v69;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[4], v69, v63, v64, v65, v66, v67, v68);
  v125 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v125, v70);
  v77 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B77684(ActorSvtId, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
  }
  if ( v37->max_length <= 5 )
    goto LABEL_90;
  v37->m_Items[5] = (Il2CppObject *)v77;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[5], v77, v71, v72, v73, v74, v75, v76);
  ActorSvtId = StringLiteral_21711/*"onupdate"*/;
  if ( StringLiteral_21711/*"onupdate"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_21711/*"onupdate"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v84 = (System_Int32_array **)StringLiteral_21711/*"onupdate"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( v37->max_length <= 6 )
    goto LABEL_90;
  v37->m_Items[6] = (Il2CppObject *)v84;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[6], v84, v78, v79, v80, v81, v82, v83);
  ActorSvtId = StringLiteral_23416/*"updateDeadEffect"*/;
  if ( StringLiteral_23416/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_23416/*"updateDeadEffect"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v91 = (System_Int32_array **)StringLiteral_23416/*"updateDeadEffect"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v37->max_length <= 7 )
    goto LABEL_90;
  v37->m_Items[7] = (Il2CppObject *)v91;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[7], v91, v85, v86, v87, v88, v89, v90);
  ActorSvtId = StringLiteral_21702/*"oncomplete"*/;
  if ( StringLiteral_21702/*"oncomplete"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_21702/*"oncomplete"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v98 = (System_Int32_array **)StringLiteral_21702/*"oncomplete"*/;
  }
  else
  {
    v98 = 0LL;
  }
  if ( v37->max_length <= 8 )
    goto LABEL_90;
  v37->m_Items[8] = (Il2CppObject *)v98;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[8], v98, v92, v93, v94, v95, v96, v97);
  ActorSvtId = StringLiteral_10187/*"OnFinishDead"*/;
  if ( StringLiteral_10187/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_10187/*"OnFinishDead"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v105 = (System_Int32_array **)StringLiteral_10187/*"OnFinishDead"*/;
  }
  else
  {
    v105 = 0LL;
  }
  if ( v37->max_length <= 9 )
    goto LABEL_90;
  v37->m_Items[9] = (Il2CppObject *)v105;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[9], v105, v99, v100, v101, v102, v103, v104);
  ActorSvtId = StringLiteral_23154/*"time"*/;
  if ( StringLiteral_23154/*"time"*/ )
  {
    ActorSvtId = sub_B77684(StringLiteral_23154/*"time"*/, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v112 = (System_Int32_array **)StringLiteral_23154/*"time"*/;
  }
  else
  {
    v112 = 0LL;
  }
  if ( v37->max_length <= 0xA )
    goto LABEL_90;
  v37->m_Items[10] = (Il2CppObject *)v112;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[10], v112, v106, v107, v108, v109, v110, v111);
  v124 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v124, v113);
  v120 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B77684(ActorSvtId, v37->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_91:
      v123 = sub_B776BC();
      sub_B77668(v123, 0LL);
    }
  }
  if ( v37->max_length <= 0xB )
  {
LABEL_90:
    v122 = sub_B776C8(ActorSvtId);
    sub_B77668(v122, 0LL);
  }
  v37->m_Items[11] = (Il2CppObject *)v120;
  sub_B77560((BattleServantConfConponent_o *)&v37->m_Items[11], v120, v114, v115, v116, v117, v118, v119);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v121 = iTween__Hash(v37, 0LL);
  iTween__ValueTo(v30, v121, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v6; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v8; // x8
  struct BattleServantData_o *v9; // x8
  struct DropInfo_array *droplist; // x27
  struct BattlePerformance_o *v11; // x9
  int32_t ServantIndex; // w21
  const MethodInfo *v13; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v15; // x3
  UnityEngine_Transform_o *v16; // x22
  unsigned __int64 v17; // x23
  DropInfo_o *v18; // x24
  UnityEngine_Object_o *Item_18277696; // x25
  BattlePerformance_o *v20; // x26
  int v21; // s0
  struct BattlePerformance_o *v24; // x8
  BattlePerformance_o *v25; // x20
  __int64 v26; // x0
  bool v27; // [xsp+1Ch] [xbp-54h]

  if ( (byte_4389878 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389878 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_34;
  if ( battleSvtData->fields.isWithdraw )
    goto LABEL_9;
  battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    goto LABEL_9;
  v6 = this->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_34;
  battleSvtData = (BattleServantData_o *)v6->fields.deckSvt;
  if ( !battleSvtData )
    goto LABEL_34;
  battleSvtData = (BattleServantData_o *)BattleDeckServantData__getIsForceDropItem(
                                           (BattleDeckServantData_o *)battleSvtData,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
LABEL_9:
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_34;
    battleSvtData = (BattleServantData_o *)performance->fields.data;
    if ( !battleSvtData )
      goto LABEL_34;
    v27 = isSilent;
    BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
    v8 = this->fields.battleSvtData;
    if ( !v8 )
      goto LABEL_34;
    v8->fields.IsAlreadyDrop = 1;
    v9 = this->fields.battleSvtData;
    if ( !v9 )
      goto LABEL_34;
    droplist = v9->fields.droplist;
    if ( droplist )
    {
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_34;
      battleSvtData = (BattleServantData_o *)v11->fields.data;
      if ( !battleSvtData )
        goto LABEL_34;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)battleSvtData,
                       v9->fields.isEnemy,
                       v9->fields.uniqueId,
                       0LL);
      DropTransform = BattleActorControl__getDropTransform(this, v13);
      LODWORD(v15) = droplist->max_length;
      if ( (int)v15 >= 1 )
      {
        v16 = DropTransform;
        v17 = 0LL;
        while ( 1 )
        {
          if ( v17 >= (unsigned int)v15 )
          {
            v26 = sub_B776C8(DropTransform);
            sub_B77668(v26, 0LL);
          }
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v18 = droplist->m_Items[v17];
          Item_18277696 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_18277696(
                                                    (BattlePerformance_o *)battleSvtData,
                                                    v16,
                                                    v18,
                                                    v15,
                                                    v17,
                                                    ServantIndex,
                                                    this->fields.headupVec,
                                                    0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item_18277696, 0LL, 0LL);
          if ( ((unsigned __int8)battleSvtData & 1) != 0 )
          {
            if ( !v16 )
              break;
            v20 = this->fields.performance;
            *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_position(v16, 0LL);
            if ( !v20 )
              break;
            BattlePerformance__saveOriginalPos(
              v20,
              (UnityEngine_GameObject_o *)Item_18277696,
              *(UnityEngine_Vector3_o *)&v21,
              this->fields.criteriaPos,
              0LL);
          }
          v24 = this->fields.performance;
          if ( !v24 )
            break;
          battleSvtData = (BattleServantData_o *)v24->fields.data;
          if ( !battleSvtData )
            break;
          BattleData__addDropItems((BattleData_o *)battleSvtData, v18, 0LL);
          v15 = *(_QWORD *)&droplist->max_length;
          if ( (__int64)++v17 >= (int)v15 )
            goto LABEL_30;
        }
LABEL_34:
        sub_B7769C(battleSvtData, isSilent);
      }
    }
LABEL_30:
    if ( !v27 )
    {
      v25 = this->fields.performance;
      battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v25 )
        goto LABEL_34;
      BattlePerformance__ShowAll(
        v25,
        (UnityEngine_GameObject_o *)battleSvtData,
        -1,
        0LL,
        0,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0LL,
        0,
        0LL);
    }
  }
}


bool __fastcall BattleActorControl__StopAudioEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  BattleServantData_o *battleSvtData; // x0

  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    LOBYTE(battleSvtData) = myShiftData->fields.isNoVoice;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
      LOBYTE(battleSvtData) = BattleServantData__IsNoVoice(battleSvtData, 0LL);
  }
  return (char)battleSvtData;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__Update(BattleActorControl_o *this, const MethodInfo *method)
{
  float v3; // s8
  float v4; // s9
  __int64 v5; // x1
  float v6; // s0
  UnityEngine_GameObject_o *actorObject; // x0
  float v8; // s10
  float ShakeTime; // s8
  float deltaTime; // s0
  float ShakeTargetTime; // s1
  float v12; // s0
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.Shaking )
  {
    v3 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.x * -0.5, this->fields.ShakeRange.fields.x * 0.5, 0LL);
    v4 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.y * -0.5, this->fields.ShakeRange.fields.y * 0.5, 0LL);
    v6 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.z * -0.5, this->fields.ShakeRange.fields.z * 0.5, 0LL);
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_9;
    v8 = v6;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
    if ( !actorObject )
      goto LABEL_9;
    v17.fields.x = v3;
    v17.fields.y = v4;
    v17.fields.z = v8;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)actorObject, v17, 0LL);
    ShakeTime = this->fields.ShakeTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    ShakeTargetTime = this->fields.ShakeTargetTime;
    v12 = ShakeTime + deltaTime;
    this->fields.ShakeTime = v12;
    if ( v12 < ShakeTargetTime )
      return;
    actorObject = this->fields.actorObject;
    if ( !actorObject
      || (transform = UnityEngine_GameObject__get_transform(actorObject, 0LL),
          *(UnityEngine_Vector3_o *)&v14 = UnityEngine_Vector3__get_zero(0LL),
          !transform) )
    {
LABEL_9:
      sub_B7769C(actorObject, v5);
    }
    UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v14, 0LL);
    this->fields.Shaking = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__UpdateActorVisibilityByBuff(
        BattleActorControl_o *this,
        bool forceUpdate,
        const MethodInfo *method)
{
  bool v3; // w20
  BattleActorControl_o *v4; // x19
  struct BattleServantData_o *battleSvtData; // x8
  BattleServantData_o *v6; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  struct BattleServantData_o *v9; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v11; // x1
  __int64 v12; // x0

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_43898D2 & 1) == 0 )
  {
    sub_B775C4(&BuffList_TypeInfo);
    sub_B775C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&BuffList_TYPE___TypeInfo);
    byte_43898D2 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_24;
  if ( battleSvtData->fields.buffData )
  {
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    this = (BattleActorControl_o *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = v4->fields.battleSvtData;
      if ( !v6 )
        goto LABEL_24;
      buffData = v6->fields.buffData;
      v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B77694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v8, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_24;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_32073936(buffData, 100, v8, 1, 0, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_B775DC(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_24;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.actorObject) )
      {
        v12 = sub_B776C8(this);
        sub_B77668(v12, 0LL);
      }
      LODWORD(this->fields.fbxcomponent) = 163;
      v9 = v4->fields.battleSvtData;
      if ( !v9 )
        goto LABEL_24;
      this = (BattleActorControl_o *)v9->fields.buffData;
      if ( !this )
        goto LABEL_24;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_32053696(
                                       (BattleBuffData_o *)this,
                                       (BuffList_TYPE_array *)forceUpdate,
                                       0LL,
                                       0LL,
                                       0LL);
    }
    *(_QWORD *)&forceUpdate = this;
    if ( !this )
      goto LABEL_24;
    this = (BattleActorControl_o *)v4->fields.translucentActorVisualInfo;
    if ( !this )
      goto LABEL_24;
    if ( v3 || (*(_DWORD *)(forceUpdate + 24LL) == 0) != (LOBYTE(this->fields.actorObject) == 0) )
    {
      TranslucentActorVisualInfo__UpdateByBuffs(
        (TranslucentActorVisualInfo_o *)this,
        (BattleBuffData_BuffData_array *)forceUpdate,
        0LL);
      translucentActorVisualInfo = v4->fields.translucentActorVisualInfo;
      if ( translucentActorVisualInfo )
      {
        BattleActorControl__SetActorAlpha(
          v4,
          translucentActorVisualInfo->fields._Alpha_k__BackingField,
          (const MethodInfo *)forceUpdate);
        BattleActorControl__UpdateShadow(v4, v11);
        return;
      }
LABEL_24:
      sub_B7769C(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateEachServantStatusUiByTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleActionData_o *actiondata; // x0
  const MethodInfo *v4; // x2
  BattleActionData_o *v5; // x20
  _QWORD **v6; // x21
  __int64 v7; // x20
  __int16 v8; // w8
  __int64 v9; // x20
  __int64 v10; // x20
  __int64 v11; // x20
  int endcameraname; // w8
  unsigned int v13; // w23
  struct BattlePerformance_o *performance; // x8
  __int64 v15; // x22
  struct BattlePerformance_o *v16; // x8
  BattleServantData_o *v17; // x21
  int32_t Value; // w0
  __int64 v19; // x0
  __int64 v20; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v21; // 0:x0.8

  if ( (byte_43898AE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_BattleActionData_BuffData___);
    sub_B775C4(&Method_System_Nullable_int__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_int__get_Value__);
    byte_43898AE = 1;
  }
  v20 = 0LL;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_33;
  actiondata = (BattleActionData_o *)BattleActionData__getShiftServant(actiondata, method);
  if ( !actiondata )
    goto LABEL_33;
  if ( !BYTE2(actiondata->fields.type) )
  {
    BYTE2(actiondata->fields.type) = 1;
    if ( !this->fields.actiondata )
      goto LABEL_33;
    actiondata = (BattleActionData_o *)BattleActionData__getBuffList(
                                         this->fields.actiondata,
                                         actiondata->fields.state,
                                         v4);
    v5 = actiondata;
    if ( !actiondata )
    {
      v6 = (_QWORD **)Method_System_Array_Empty_BattleActionData_BuffData___;
      v7 = **((_QWORD **)Method_System_Array_Empty_BattleActionData_BuffData___ + 6);
      v8 = *(_WORD *)(v7 + 306);
      if ( (v8 & 1) == 0 )
      {
        actiondata = (BattleActionData_o *)sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_BattleActionData_BuffData___
                                                       + 6));
        v8 = *(_WORD *)(v7 + 306);
      }
      if ( (v8 & 0x400) != 0 )
      {
        v9 = *v6[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          actiondata = (BattleActionData_o *)sub_B0F2C4(*v6[6]);
        if ( !*(_DWORD *)(v9 + 224) )
        {
          v10 = *v6[6];
          if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
            sub_B0F2C4(*v6[6]);
          j_il2cpp_runtime_class_init_0(v10);
        }
      }
      v11 = *v6[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        actiondata = (BattleActionData_o *)sub_B0F2C4(*v6[6]);
      v5 = **(BattleActionData_o ***)(v11 + 184);
      if ( !v5 )
        goto LABEL_33;
    }
    endcameraname = (int)v5->fields.endcameraname;
    if ( endcameraname >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= endcameraname )
        {
          v19 = sub_B776C8(actiondata);
          sub_B77668(v19, 0LL);
        }
        performance = this->fields.performance;
        if ( !performance )
          break;
        v15 = *((_QWORD *)&v5->fields.actorId + (int)v13);
        if ( !v15 )
          break;
        actiondata = (BattleActionData_o *)performance->fields.data;
        if ( !actiondata )
          break;
        actiondata = (BattleActionData_o *)BattleData__getServantData(
                                             (BattleData_o *)actiondata,
                                             *(_DWORD *)(v15 + 40),
                                             0LL);
        if ( actiondata )
        {
          v16 = this->fields.performance;
          if ( !v16 )
            break;
          v17 = (BattleServantData_o *)actiondata;
          BattleActionData_BuffData__ExecAfterEffectProc((BattleActionData_BuffData_o *)v15, v16->fields.data, 0LL);
          BattleServantData__UpdateNpImmediately(v17, *(_DWORD *)(v15 + 84), 0LL);
          v20 = *(_QWORD *)(v15 + 92);
          if ( (v20 & 0xFF00000000LL) != 0 )
          {
            v21 = (System_Nullable_int__o)&v20;
            Value = System_Nullable_int___get_Value(
                      v21,
                      (const MethodInfo_24765D0 *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v17, Value, v17->fields.maxtpturn, 0LL);
          }
          BattleServantData__updateHp(v17, 0LL);
          BattleServantData__updateBuff(v17, 1, 1, 0LL);
        }
        endcameraname = (int)v5->fields.endcameraname;
        if ( (int)++v13 >= endcameraname )
          return;
      }
LABEL_33:
      sub_B7769C(actiondata, method);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_1C6942C *method)
{
  const MethodInfo_1C6942C_RGCTXs **p_rgctx_data; // x19
  const MethodInfo_1C6942C_RGCTXs *rgctx_data; // t1
  Il2CppClass *_0_BattleActorControl___c__288_T; // x22
  __int16 v10; // w8
  Il2CppClass *v11; // x22
  Il2CppClass *v12; // x22
  Il2CppClass *v13; // x22
  System_Int32_array **v14; // x22
  Il2CppClass *v15; // x22
  __int16 v16; // w8
  Il2CppClass *v17; // x22
  Il2CppClass *v18; // x22
  const MethodInfo_1C6942C_RGCTXs *v19; // x8
  Il2CppClass *v20; // x22
  Il2CppClass *_2_System_Func_T__bool; // x24
  __int64 v22; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  Il2CppClass *v29; // x23
  char *static_fields; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  Il2CppClass *_5_System_Collections_Generic_IEnumerable_T; // x22
  __int64 v35; // x8
  unsigned __int64 v36; // x10
  int *v37; // x11
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x21
  int v41; // w25
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  UnityEngine_Renderer_o *v51; // x0
  __int64 v52; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  Il2CppClass *v54; // x23
  __int16 v55; // w8
  Il2CppClass *v56; // x23
  Il2CppClass *v57; // x23
  Il2CppClass *v58; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v59; // x23
  Il2CppClass *v60; // x23
  __int16 v61; // w8
  Il2CppClass *v62; // x23
  Il2CppClass *v63; // x23
  Il2CppClass *v64; // x23
  Il2CppObject *v65; // x24
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  Il2CppClass *v72; // x24
  char *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  __int64 v75; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x22
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v78; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v81; // x1
  __int64 v82; // x22
  __int64 v83; // x8
  unsigned __int64 v84; // x10
  int *v85; // x11
  __int64 v86; // x0
  __int64 v87; // x8
  unsigned __int64 v88; // x10
  int *v89; // x11
  __int64 v90; // x0
  System_Uri_o *v91; // x0
  int v92; // w24
  __int64 v93; // x8
  unsigned __int64 v94; // x10
  int *v95; // x11
  __int64 v96; // x0
  int v97; // w20
  __int64 v98; // x8
  unsigned __int64 v99; // x10
  int *v100; // x11
  __int64 v101; // x0
  _DWORD v102[2]; // [xsp+10h] [xbp-60h]
  int v103; // [xsp+18h] [xbp-58h]

  if ( (byte_438D981 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_Material__Invoke__);
    sub_B775C4(&Method_System_Linq_Enumerable_Where_Material___);
    sub_B775C4(&Method_System_Func_Material__bool___ctor__);
    sub_B775C4(&System_Func_Material__bool__TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_Material__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_Material__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    byte_438D981 = 1;
  }
  v103 = 0;
  if ( rendererEnumerable )
  {
    rgctx_data = method->rgctx_data;
    p_rgctx_data = &method->rgctx_data;
    _0_BattleActorControl___c__288_T = rgctx_data->_0_BattleActorControl___c__288_T_;
    v10 = WORD1(rgctx_data->_0_BattleActorControl___c__288_T_->vtable[0].methodPtr);
    if ( (v10 & 1) == 0 )
    {
      sub_B0F2C4(_0_BattleActorControl___c__288_T);
      v10 = WORD1(_0_BattleActorControl___c__288_T->vtable[0].methodPtr);
    }
    if ( (v10 & 0x400) != 0 )
    {
      v11 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
      if ( (BYTE2(v11->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
      if ( !v11->_2.cctor_finished )
      {
        v12 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
        if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
          sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        j_il2cpp_runtime_class_init_0(v12);
      }
    }
    v13 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
    v14 = (System_Int32_array **)*((_QWORD *)v13->static_fields + 1);
    if ( !v14 )
    {
      v15 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
      v16 = WORD1(v15->vtable[0].methodPtr);
      if ( (v16 & 1) == 0 )
      {
        sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        v16 = WORD1(v15->vtable[0].methodPtr);
      }
      if ( (v16 & 0x400) != 0 )
      {
        v17 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
        if ( (BYTE2(v17->vtable[0].methodPtr) & 1) == 0 )
          sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        if ( !v17->_2.cctor_finished )
        {
          v18 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
          if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
            sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
          j_il2cpp_runtime_class_init_0(v18);
        }
      }
      v19 = *p_rgctx_data;
      v20 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
      if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        v19 = *p_rgctx_data;
      }
      _2_System_Func_T__bool = v19->_2_System_Func_T__bool_;
      v22 = *(_QWORD *)v20->static_fields;
      if ( (BYTE2(_2_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4(_2_System_Func_T__bool);
      v14 = (System_Int32_array **)sub_B77694(_2_System_Func_T__bool);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_rgctx_data)->_3_System_Func_T__bool___ctor->methodPointer)(
        v14,
        v22,
        (*p_rgctx_data)->_1_BattleActorControl___c__288_T___UpdateMaterialsOnRenderders_b__288_0);
      v29 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
      if ( (BYTE2(v29->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
      static_fields = (char *)v29->static_fields;
      *((_QWORD *)static_fields + 1) = v14;
      sub_B77560((BattleServantConfConponent_o *)(static_fields + 8), v14, v23, v24, v25, v26, v27, v28);
    }
    v31 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Int32_array **))(*p_rgctx_data)->_4_System_Linq_Enumerable_Where_T_->methodPointer)(
            rendererEnumerable,
            v14);
    if ( !v31 )
      sub_B7769C(0LL, v32);
    v33 = v31;
    _5_System_Collections_Generic_IEnumerable_T = (*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_5_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_B0F2C4((*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_);
    v35 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v36 = 0LL;
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((Il2CppClass **)v37 - 1) != _5_System_Collections_Generic_IEnumerable_T )
      {
        ++v36;
        v37 += 4;
        if ( v36 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_39;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_39:
      v38 = sub_B0F4C0(v33, _5_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v40 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v33, *(_QWORD *)(v38 + 8));
    if ( !v40 )
      sub_B7769C(0LL, v39);
    v41 = 0;
    while ( 1 )
    {
      v42 = *(_QWORD *)v40;
      if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
      {
        v43 = 0LL;
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v44 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v43;
          v44 += 4;
          if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
            goto LABEL_47;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_47:
        v45 = sub_B0F4C0(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v40, *(_QWORD *)(v45 + 8)) & 1) == 0 )
        break;
      _6_System_Collections_Generic_IEnumerator_T = (*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4((*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_);
      v47 = *(_QWORD *)v40;
      if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
      {
        v48 = 0LL;
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((Il2CppClass **)v49 - 1) != _6_System_Collections_Generic_IEnumerator_T )
        {
          ++v48;
          v49 += 4;
          if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
            goto LABEL_56;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_56:
        v50 = sub_B0F4C0(v40, _6_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v51 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v40, *(_QWORD *)(v50 + 8));
      if ( !v51 )
        sub_B7769C(0LL, v52);
      materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v51, 0LL);
      v54 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
      v55 = WORD1(v54->vtable[0].methodPtr);
      if ( (v55 & 1) == 0 )
      {
        sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        v55 = WORD1(v54->vtable[0].methodPtr);
      }
      if ( (v55 & 0x400) != 0 )
      {
        v56 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
        if ( (BYTE2(v56->vtable[0].methodPtr) & 1) == 0 )
          sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        if ( !v56->_2.cctor_finished )
        {
          v57 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
          if ( (BYTE2(v57->vtable[0].methodPtr) & 1) == 0 )
            sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
          j_il2cpp_runtime_class_init_0(v57);
        }
      }
      v58 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
      if ( (BYTE2(v58->vtable[0].methodPtr) & 1) == 0 )
        sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
      v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v58->static_fields + 2);
      if ( !v59 )
      {
        v60 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
        v61 = WORD1(v60->vtable[0].methodPtr);
        if ( (v61 & 1) == 0 )
        {
          sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
          v61 = WORD1(v60->vtable[0].methodPtr);
        }
        if ( (v61 & 0x400) != 0 )
        {
          v62 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
          if ( (BYTE2(v62->vtable[0].methodPtr) & 1) == 0 )
            sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
          if ( !v62->_2.cctor_finished )
          {
            v63 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
            if ( (BYTE2(v63->vtable[0].methodPtr) & 1) == 0 )
              sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
            j_il2cpp_runtime_class_init_0(v63);
          }
        }
        v64 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
        if ( (BYTE2(v64->vtable[0].methodPtr) & 1) == 0 )
          sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        v65 = *(Il2CppObject **)v64->static_fields;
        v59 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_Material__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v59,
          v65,
          (intptr_t)(*p_rgctx_data)->_8_BattleActorControl___c__288_T___UpdateMaterialsOnRenderders_b__288_1,
          (const MethodInfo_29E92C4 *)Method_System_Func_Material__bool___ctor__);
        v72 = (*p_rgctx_data)->_0_BattleActorControl___c__288_T_;
        if ( (BYTE2(v72->vtable[0].methodPtr) & 1) == 0 )
          sub_B0F2C4((*p_rgctx_data)->_0_BattleActorControl___c__288_T_);
        v73 = (char *)v72->static_fields;
        *((_QWORD *)v73 + 2) = v59;
        sub_B77560((BattleServantConfConponent_o *)(v73 + 16), (System_Int32_array **)v59, v66, v67, v68, v69, v70, v71);
      }
      v74 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              materials,
              (System_Func_TSource__bool__o *)v59,
              (const MethodInfo_1D41C94 *)Method_System_Linq_Enumerable_Where_Material___);
      v76 = v74;
      if ( !v74 )
        sub_B7769C(0LL, v75);
      klass = v74->klass;
      if ( *(_WORD *)&v74->klass->_2.bitflags1 )
      {
        v78 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
        {
          ++v78;
          p_offset += 4;
          if ( v78 >= *(unsigned __int16 *)&v74->klass->_2.bitflags1 )
            goto LABEL_90;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_90:
        p_method = sub_B0F4C0(v74, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
      }
      v82 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v76,
              *(_QWORD *)(p_method + 8));
      if ( !v82 )
        sub_B7769C(0LL, v81);
      while ( 1 )
      {
        v83 = *(_QWORD *)v82;
        if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
        {
          v84 = 0LL;
          v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v85 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v84;
            v85 += 4;
            if ( v84 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
              goto LABEL_97;
          }
          v86 = v83 + 16LL * *v85 + 312;
        }
        else
        {
LABEL_97:
          v86 = sub_B0F4C0(v82, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8)) & 1) == 0 )
          break;
        v87 = *(_QWORD *)v82;
        if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
        {
          v88 = 0LL;
          v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_Material__c **)v89 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
          {
            ++v88;
            v89 += 4;
            if ( v88 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
              goto LABEL_104;
          }
          v90 = v87 + 16LL * *v89 + 312;
        }
        else
        {
LABEL_104:
          v90 = sub_B0F4C0(v82, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
        }
        v91 = (System_Uri_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v90)(v82, *(_QWORD *)(v90 + 8));
        if ( !updateFunc )
          sub_B7769C(v91, v91);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)updateFunc,
          v91,
          (const MethodInfo_26A087C *)Method_System_Action_Material__Invoke__);
      }
      v102[v41] = 143;
      v92 = ++v103;
      v93 = *(_QWORD *)v82;
      if ( *(_WORD *)(*(_QWORD *)v82 + 298LL) )
      {
        v94 = 0LL;
        v95 = (int *)(*(_QWORD *)(v93 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v95 - 1) != System_IDisposable_TypeInfo )
        {
          ++v94;
          v95 += 4;
          if ( v94 >= *(unsigned __int16 *)(*(_QWORD *)v82 + 298LL) )
            goto LABEL_113;
        }
        v96 = v93 + 16LL * *v95 + 312;
      }
      else
      {
LABEL_113:
        v96 = sub_B0F4C0(v82, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v96)(v82, *(_QWORD *)(v96 + 8));
      v41 = 0;
      if ( v92 )
      {
        v41 = v92;
        if ( v102[v92 - 1] == 143 )
        {
          v103 = v92 - 1;
          v41 = v92 - 1;
        }
      }
    }
    v102[v41] = 163;
    v97 = ++v103;
    v98 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v99 = 0LL;
      v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v100 - 1) != System_IDisposable_TypeInfo )
      {
        ++v99;
        v100 += 4;
        if ( v99 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_126;
      }
      v101 = v98 + 16LL * *v100 + 312;
    }
    else
    {
LABEL_126:
      v101 = sub_B0F4C0(v40, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v101)(v40, *(_QWORD *)(v101 + 8));
    if ( v97 && v102[v97 - 1] == 163 )
      v103 = v97 - 1;
  }
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *IsHideShadow; // x0
  __int64 v5; // x1
  struct BattleServantData_o *v6; // x8
  UnityEngine_Object_o *v7; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *shadowObj; // x20
  struct BattleServantData_o *v11; // x8
  BattleBgMaster_o *v12; // x20
  int32_t v13; // w21
  int32_t BgShadowImageId; // w0
  const MethodInfo *v15; // x2
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v17; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v19; // x8
  const MethodInfo *v20; // x1
  struct BattlePerformance_o *v21; // x8
  BattleServantData_o *v22; // x20
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x2
  int SpecialShadowEffectId; // w21
  UnityEngine_Object_o *v26; // x21
  int uniqueId; // w8
  unsigned int v28; // w21
  int v29; // w22
  int32_t BattleSize; // w1
  const MethodInfo *v31; // x2
  __int64 v32; // x0
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438984B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BattleBgMaster___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438984B = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (BattleServantData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_76;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v6 = this->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_76;
  if ( !v6->fields.isHideShadow )
  {
    translucentActorVisualInfo = this->fields.translucentActorVisualInfo;
    if ( !translucentActorVisualInfo )
      goto LABEL_76;
    if ( !translucentActorVisualInfo->fields._IsActive_k__BackingField
      || translucentActorVisualInfo->fields._IsDrawShadow_k__BackingField )
    {
      shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
      {
        IsHideShadow = this->fields.battleSvtData;
        if ( !IsHideShadow )
          goto LABEL_76;
        IsHideShadow = (BattleServantData_o *)BattleServantData__isAlive(IsHideShadow, 0, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v11 = this->fields.battleSvtData;
          if ( !v11 )
            goto LABEL_76;
          if ( v11->fields.isEntry )
          {
            IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
            if ( !IsHideShadow )
              goto LABEL_76;
            IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsHideShadow,
                                                    0LL);
            if ( !IsHideShadow )
              goto LABEL_76;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
          }
        }
      }
      IsHideShadow = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IsHideShadow )
        goto LABEL_76;
      IsHideShadow = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsHideShadow,
                                              (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_76;
      v12 = (BattleBgMaster_o *)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_76;
      v13 = (int)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v12 )
        goto LABEL_76;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v12, v13, (int32_t)IsHideShadow, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v15);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v17 = this->fields.performance;
        if ( !v17 )
          goto LABEL_76;
        data = (UnityEngine_Object_o *)v17->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v19 = this->fields.performance;
          if ( !v19 )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)v19->fields.data;
          if ( !IsHideShadow )
            goto LABEL_76;
          GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v20);
          v21 = this->fields.performance;
          if ( !v21 )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)v21->fields.data;
          if ( !IsHideShadow )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)BattleData__GetShadowOffSvtIds((BattleData_o *)IsHideShadow, 0LL);
          if ( !this->fields.performance )
            goto LABEL_76;
          v22 = IsHideShadow;
          SpecialShadowEffectId = BattlePerformance__GetSpecialShadowEffectId(this->fields.performance, 0LL);
          if ( this->fields.currentSpShadowEffectId != SpecialShadowEffectId )
          {
            this->fields.currentSpShadowEffectId = SpecialShadowEffectId;
            BattleActorControl__DestroySpShadowObj(this, v23);
          }
          if ( SpecialShadowEffectId >= 1 )
            BattleActorControl__changeSpecialShadow(this, SpecialShadowEffectId, v24);
          v26 = (UnityEngine_Object_o *)this->fields.shadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
          if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_76;
            uniqueId = v22->fields.uniqueId;
            if ( uniqueId >= 1 )
            {
              v28 = 0;
              while ( 1 )
              {
                if ( v28 >= uniqueId )
                {
                  v32 = sub_B776C8(IsHideShadow);
                  sub_B77668(v32, 0LL);
                }
                IsHideShadow = this->fields.battleSvtData;
                if ( !IsHideShadow )
                  goto LABEL_76;
                v29 = *((_DWORD *)&v22->fields.userSvtId.fields.currentCryptoKey + (int)v28);
                IsHideShadow = (BattleServantData_o *)BattleServantData__getActorSvtId(IsHideShadow, 0LL);
                if ( v29 == (_DWORD)IsHideShadow )
                  break;
                uniqueId = v22->fields.uniqueId;
                if ( (int)++v28 >= uniqueId )
                  goto LABEL_74;
              }
              IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
              if ( !IsHideShadow )
                goto LABEL_76;
              IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)IsHideShadow,
                                                      0LL);
              if ( !IsHideShadow )
                goto LABEL_76;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
            }
          }
        }
      }
LABEL_74:
      IsHideShadow = this->fields.battleSvtData;
      if ( !IsHideShadow )
        goto LABEL_76;
      BattleSize = BattleServantData__get_BattleSize(IsHideShadow, 0LL);
      BattleActorControl__SetShadowSize(this, BattleSize, v31);
      return;
    }
    IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
    if ( IsHideShadow )
    {
      IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)IsHideShadow,
                                              0LL);
      if ( IsHideShadow )
      {
LABEL_70:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        return;
      }
    }
LABEL_76:
    sub_B7769C(IsHideShadow, v5);
  }
  v7 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
  {
    IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
    if ( IsHideShadow )
    {
      IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)IsHideShadow,
                                              0LL);
      if ( IsHideShadow )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        goto LABEL_13;
      }
    }
    goto LABEL_76;
  }
LABEL_13:
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (BattleServantData_o *)this->fields.specialShadowObj;
    if ( !IsHideShadow )
      goto LABEL_76;
    goto LABEL_70;
  }
}


void __fastcall BattleActorControl__ValidateAbusingEventClass(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        System_String_o *logOnInvalid,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438987F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    byte_438987F = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B7769C(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
         (System_Xml_XmlQualifiedName_o *)eventName,
         &value,
         (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    System_String__op_Inequality(motionName, (System_String_o *)value, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__WaitToNoblePhantasmPlay(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438988F & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__WaitToNoblePhantasmPlay_d__267_TypeInfo);
    byte_438988F = 1;
  }
  v3 = sub_B77694(BattleActorControl__WaitToNoblePhantasmPlay_d__267_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__267___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__215_0(
        BattleActorControl_o *this,
        System_String_o *playedSoundId,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *battleSvtData; // x9
  BattleData_o *data; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_43898DE & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_43898DE = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_10;
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_10;
  data = performance->fields.data;
  v9 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v9;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v10, 0LL);
  if ( !data )
LABEL_10:
    sub_B7769C(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__138_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__266_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__268_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  const MethodInfo *v4; // x3
  BattleFBXComponent_c *v5; // x0

  if ( (byte_43898E1 & 1) == 0 )
  {
    sub_B775C4(&BattleFBXComponent_TypeInfo);
    sub_B775C4(&StringLiteral_6499/*"FINISHED"*/);
    byte_43898E1 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_11;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  if ( this->fields.noblePhantasmCallback )
  {
    v5 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v5 = BattleFBXComponent_TypeInfo;
    }
    v5->static_fields->EnableEvent = 1;
    performance = (BattlePerformance_o *)this->fields.noblePhantasmCallback;
    if ( performance )
    {
      System_Action__Invoke((System_Action_o *)performance, 0LL);
      return;
    }
LABEL_11:
    sub_B7769C(performance, method);
  }
  BattleActorControl__sendEventFSM_22495744(this, (System_String_o *)StringLiteral_6499/*"FINISHED"*/, 0, v4);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__264_0(BattleActorControl_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_BattleActorControl__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43898DF & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_43898DF = 1;
  }
  memset(&v9, 0, sizeof(v9));
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    if ( !v4 )
      break;
    current = v9.fields.current;
    if ( !v9.fields.current )
      sub_B7769C(v4, v5);
    BattleActorControl__playAnimation_22508132(
      (BattleActorControl_o *)v9.fields.current,
      (System_String_o *)StringLiteral_23673/*"wait"*/,
      0,
      v6);
    BattleActorControl__ProcServantObjectVisibleCtr((BattleActorControl_o *)current, 1, 1, v8);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
LABEL_11:
    sub_B7769C(noblePhantasmObjectVisibleCtrList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleActorControl__Clear__);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__264_1(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleSequenceManager_o *Instance; // x0
  __int64 v4; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v6; // x20
  __int64 v7; // x21
  __int64 v8; // x22
  int32_t v9; // w21
  BattleSequenceManager_o *v10; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v12; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v15; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v17; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_43898E0 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B775C4(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_43898E0 = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  v6 = Instance;
  v8 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v18.fields.currentCryptoKey = v8;
  *(_QWORD *)&v18.fields.fakeValue = v7;
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v18, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_13;
  v9 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !Instance )
    goto LABEL_13;
  v10 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_13;
  m_CachedPtr = v10->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0LL);
  v12 = this->fields.battleSvtData;
  if ( !v12
    || (overwriteSvtVoiceId = v12->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v12->fields.treasuredvcLevel,
        v15 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v17 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B77694(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v6) )
  {
LABEL_13:
    sub_B7769C(Instance, v4);
  }
  BattleSequenceManager__loadSequence(
    v6,
    v9,
    m_CachedPtr,
    v15,
    overwriteSvtVoiceId,
    treasuredvcLevel,
    NpChargeStage,
    v17,
    0LL);
}


void __fastcall BattleActorControl__addAura(
        BattleActorControl_o *this,
        int32_t auraEffectId,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleActorControl__coAddAura(this, auraEffectId, priority, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__addBuffLoopEffect(
        BattleActorControl_o *this,
        BuffEntity_o *buffEntity,
        const MethodInfo *method)
{
  const MethodInfo *effectId; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v8; // x8
  __int64 v9; // x9
  BattleEffectUtility_BuffEffectLoadArgument_o *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w22
  UnityEngine_GameObject_o *v13; // x23
  UnityEngine_GameObject_o *v14; // x24
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float v18; // s8
  float v19; // s9
  float v20; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v22; // x1
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  UnityEngine_Transform_o *transform; // x22
  int v26; // s0
  UnityEngine_Transform_o *v29; // x22
  int v30; // s0
  StatusEffectPosOverwriteMaster_o *v34; // x22
  int32_t v35; // w23
  int32_t v36; // w24
  const MethodInfo *v37; // x1
  int32_t v38; // w0
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 isEnemy; // w25
  UnityEngine_Transform_o *v41; // x22
  System_String_o *nodeName; // x24
  UnityEngine_Transform_o *v43; // x23
  int32_t v44; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x23
  float v46; // s0
  float v47; // s1
  float v48; // s2
  float v49; // s8
  float v50; // s9
  float v51; // s10
  float v52; // s0
  float v53; // s1
  float v54; // s2
  struct BattleServantData_o *v55; // x8
  float x; // s10
  float y; // s8
  float z; // s9
  bool v59; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_43898C9 & 1) == 0 )
  {
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_7235/*"HIDE_STATUS_EFFECT_IDS"*/);
    byte_43898C9 = 1;
  }
  entity = 0LL;
  if ( !buffEntity )
    return;
  effectId = (const MethodInfo *)(unsigned int)buffEntity->fields.effectId;
  if ( (int)effectId < 1 )
    return;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         buffLoopEffectDict,
         (int32_t)effectId,
         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                    (DataManager_o *)buffLoopEffectDict,
                                                                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7235/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v8 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v8 < 1 )
  {
LABEL_15:
    v10 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B77694(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v10, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12 = buffEntity->fields.effectId;
    v13 = gameObject;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL);
    buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      v18 = v15;
      v19 = v16;
      v20 = v17;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v22);
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      v61.fields.x = v18;
      v61.fields.y = v19;
      v61.fields.z = v20;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v13,
                                               v12,
                                               v14,
                                               v61,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v10,
                                               0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
      if ( ((unsigned __int8)buffLoopEffectDict & 1) == 0 )
        return;
      if ( EffectToNode )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
        *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
          v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
          *(UnityEngine_Quaternion_o *)&v30 = UnityEngine_Quaternion__get_identity(0LL);
          if ( v29 )
          {
            UnityEngine_Transform__set_localRotation(v29, *(UnityEngine_Quaternion_o *)&v30, 0LL);
            buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)buffLoopEffectDict, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( buffLoopEffectDict )
              {
                v34 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_47;
                v35 = buffEntity->fields.effectId;
                v36 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
                v38 = BattleActorControl__getLimitCount(this, v37);
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)StatusEffectPosOverwriteMaster__TryGetEntity(v34, &entity, v35, v36, v38, 0LL);
                if ( ((unsigned __int8)buffLoopEffectDict & 1) != 0 )
                {
                  battleSvtData = this->fields.battleSvtData;
                  if ( !battleSvtData )
                    goto LABEL_47;
                  isEnemy = battleSvtData->fields.isEnemy;
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                  if ( !this->fields.actorObject )
                    goto LABEL_47;
                  v41 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_47;
                  nodeName = entity->fields.nodeName;
                  v43 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v44 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v43, nodeName, v44, 1, 0LL);
                  *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_zero(0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  v49 = v46;
                  v50 = v47;
                  v51 = v48;
                  *(UnityEngine_Vector3_o *)&v52 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v41 )
                    goto LABEL_47;
                  v62.fields.x = v49 + v52;
                  v62.fields.y = v50 + v53;
                  v62.fields.z = v51 + v54;
                  UnityEngine_Transform__set_localPosition(v41, v62, 0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  v67 = UnityEngine_Quaternion__Euler_36342120(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v41, v67, 0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v41, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v41, NodeFromLvName, 0LL);
                }
              }
              v55 = this->fields.battleSvtData;
              if ( !v55 )
                goto LABEL_47;
              if ( v55->fields.isEnemy )
              {
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_47;
                localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, 0LL);
                x = localScale.fields.x;
                y = localScale.fields.y;
                z = localScale.fields.z;
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_47;
                v66.fields.x = -x;
                v66.fields.y = y;
                v66.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v66, 0LL);
              }
              buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v59 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v59, 0LL);
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectToNode,
                    (const MethodInfo_2FF4178 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B7769C(buffLoopEffectDict, effectId);
  }
  v9 = 0LL;
  while ( ValueArray->m_Items[v9 + 1] != buffEntity->fields.effectId )
  {
    if ( (int)++v9 >= (int)v8 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B7769C(0LL, method);
  BattlePerformance__callServant(performance, this->fields.actiondata, 0LL);
}


void __fastcall BattleActorControl__changeShadowType(
        BattleActorControl_o *this,
        bool isNormal,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_4389897 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389897 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(specialShadowObj, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !Component_WebViewObject
        || (Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                   Component_WebViewObject,
                                                                   (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, isNormal, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_B7769C(Component_WebViewObject, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, !isNormal, 0LL);
    }
  }
}


void __fastcall BattleActorControl__changeSpecialShadow(
        BattleActorControl_o *this,
        int32_t shadowEffectId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *Component_WebViewObject; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v16; // w21
  System_Action_o *v17; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_4389896 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass275_0__changeSpecialShadow_b__0__);
    sub_B775C4(&BattleActorControl___c__DisplayClass275_0_TypeInfo);
    byte_4389896 = 1;
  }
  v5 = sub_B77694(BattleActorControl___c__DisplayClass275_0_TypeInfo);
  BattleActorControl___c__DisplayClass275_0___ctor((BattleActorControl___c__DisplayClass275_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_19;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 24) = shadowEffectId;
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    {
      Component_WebViewObject = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( Component_WebViewObject )
      {
        Component_WebViewObject = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                               Component_WebViewObject,
                                                               (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_WebViewObject )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, 0, 0LL);
          v16 = *(_DWORD *)(v5 + 24);
          v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v5,
            Method_BattleActorControl___c__DisplayClass275_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          BattleEffectUtility__LoadEffectAssetIfNotYet(v16, v17, performance, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B7769C(Component_WebViewObject, v7);
    }
  }
}


bool __fastcall BattleActorControl__checkAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        const MethodInfo *method)
{
  BattleFBXComponent_o *fbxcomponent; // x0

  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_B7769C(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_43898B0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleActorControl_endChangeAppearance__);
    byte_43898B0 = 1;
  }
  performance = this->fields.performance;
  v4 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_B7769C(v5, v6);
  BattlePerformance__checkChangeAppearance(performance, v4, 0LL);
}


bool __fastcall BattleActorControl__checkGEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  __int64 actindex; // x9
  int actorObject; // w8
  BattleActorControl_o *v7; // x20
  unsigned int v8; // w21
  System_String_o *EventName; // x0
  __int64 v11; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_13;
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= motionFSM->max_length )
  {
LABEL_14:
    v11 = sub_B776C8(this);
    sub_B77668(v11, 0LL);
  }
  this = (BattleActorControl_o *)motionFSM->m_Items[actindex];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, name);
  }
  actorObject = (int)this->fields.actorObject;
  v7 = this;
  if ( actorObject < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= actorObject )
      goto LABEL_14;
    this = (BattleActorControl_o *)*((_QWORD *)&v7->fields.fbxcomponent + (int)v8);
    if ( !this )
      goto LABEL_13;
    EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0LL);
    this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    actorObject = (int)v7->fields.actorObject;
    if ( (int)++v8 >= actorObject )
      return 0;
  }
}


bool __fastcall BattleActorControl__checkID(BattleActorControl_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.uniqueID == id;
}


bool __fastcall BattleActorControl__checkMotionEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  int actorObject; // w8
  BattleActorControl_o *v6; // x20
  unsigned int v7; // w21
  System_String_o *EventName; // x0
  __int64 v10; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_13;
  if ( !motionFSM->max_length )
  {
LABEL_14:
    v10 = sub_B776C8(this);
    sub_B77668(v10, 0LL);
  }
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B7769C(this, name);
  }
  actorObject = (int)this->fields.actorObject;
  v6 = this;
  if ( actorObject < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= actorObject )
      goto LABEL_14;
    this = (BattleActorControl_o *)*((_QWORD *)&v6->fields.fbxcomponent + (int)v7);
    if ( !this )
      goto LABEL_13;
    EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0LL);
    this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    actorObject = (int)v6->fields.actorObject;
    if ( (int)++v7 >= actorObject )
      return 0;
  }
}


bool __fastcall BattleActorControl__checkNextAttackMe(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.nextattackme;
}


bool __fastcall BattleActorControl__checkPrevAttackMe(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.prevattackme;
}


bool __fastcall BattleActorControl__checkScriptValue(
        BattleActorControl_o *this,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, key);
  return BattleServantData__checkScriptValue(battleSvtData, key, value, 0LL);
}


bool __fastcall BattleActorControl__checkStepFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.stepFlg;
}


bool __fastcall BattleActorControl__checkStepIn(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t StepRate; // w19

  if ( (byte_438985A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22908/*"summon"*/);
    byte_438985A = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_22908/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_B7769C(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_36343764(0, 1000, 0LL) < StepRate;
}


bool __fastcall BattleActorControl__checkVoice(
        BattleActorControl_o *this,
        int32_t type,
        bool isNp,
        const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4389868 & 1) == 0 )
  {
    sub_B775C4(&Voice_TypeInfo);
    byte_4389868 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_22503936(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_22503936(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        bool isNp,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w21
  int32_t svtId; // w23
  int32_t overwriteSvtVoiceId; // w22
  bool v11; // w4
  int32_t v12; // w0
  int32_t v13; // w1
  int32_t v14; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t v16; // w21
  const MethodInfo *v17; // x1
  struct BattleServantData_o *v18; // x8
  int32_t v19; // w22
  int32_t v20; // w23

  if ( (byte_4389869 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_4389869 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    svtId = myShiftData->fields.svtId;
    limit = myShiftData->fields.limit;
    overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v11 = isNp;
    v12 = svtId;
    v13 = limit;
    v14 = overwriteSvtVoiceId;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData
      || (v16 = BattleServantData__getSvtId(battleSvtData, 0LL),
          battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v17),
          (v18 = this->fields.battleSvtData) == 0LL) )
    {
      sub_B7769C(battleSvtData, voiceTypeId);
    }
    v19 = (int)battleSvtData;
    v20 = v18->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v11 = isNp;
    v12 = v16;
    v13 = v19;
    v14 = v20;
  }
  return ServantAssetLoadManager__checkBattleVoice(v12, v13, v14, voiceTypeId, v11, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__coAddAura(
        BattleActorControl_o *this,
        int32_t auraEffectId,
        int32_t priority,
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

  if ( (byte_43898B8 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__coAddAura_d__326_TypeInfo);
    byte_43898B8 = 1;
  }
  v7 = sub_B77694(BattleActorControl__coAddAura_d__326_TypeInfo);
  BattleActorControl__coAddAura_d__326___ctor((BattleActorControl__coAddAura_d__326_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_DWORD *)(v7 + 40) = auraEffectId;
  *(_DWORD *)(v7 + 56) = priority;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colShiftServant(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_43898BB & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__colShiftServant_d__332_TypeInfo);
    byte_43898BB = 1;
  }
  v9 = sub_B77694(BattleActorControl__colShiftServant_d__332_TypeInfo);
  BattleActorControl__colShiftServant_d__332___ctor((BattleActorControl__colShiftServant_d__332_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B7769C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)shiftSvt, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_B77560(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)finishCallback,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colShiftServantChange(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
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

  if ( (byte_43898BC & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__colShiftServantChange_d__333_TypeInfo);
    byte_43898BC = 1;
  }
  v7 = sub_B77694(BattleActorControl__colShiftServantChange_d__333_TypeInfo);
  BattleActorControl__colShiftServantChange_d__333___ctor(
    (BattleActorControl__colShiftServantChange_d__333_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B7769C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_B77560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)shiftSvt, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v7 + 48) = isShift;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__collChangeAppearance(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43898B4 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__collChangeAppearance_d__321_TypeInfo);
    byte_43898B4 = 1;
  }
  v3 = sub_B77694(BattleActorControl__collChangeAppearance_d__321_TypeInfo);
  BattleActorControl__collChangeAppearance_d__321___ctor(
    (BattleActorControl__collChangeAppearance_d__321_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadDressServant(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_43898AF & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__colloadDressServant_d__316_TypeInfo);
    byte_43898AF = 1;
  }
  v5 = sub_B77694(BattleActorControl__colloadDressServant_d__316_TypeInfo);
  BattleActorControl__colloadDressServant_d__316___ctor((BattleActorControl__colloadDressServant_d__316_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v5 + 40) = flg;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadTransformServant(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43898AD & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__colloadTransformServant_d__313_TypeInfo);
    byte_43898AD = 1;
  }
  v3 = sub_B77694(BattleActorControl__colloadTransformServant_d__313_TypeInfo);
  BattleActorControl__colloadTransformServant_d__313___ctor(
    (BattleActorControl__colloadTransformServant_d__313_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__coroutinePostCallBack(
        BattleActorControl_o *this,
        BattleCallBackBase_o *callBack,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v6; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4389865 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__coroutinePostCallBack_d__206_TypeInfo);
    byte_4389865 = 1;
  }
  v6 = sub_B77694(BattleActorControl__coroutinePostCallBack_d__206_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__206___ctor(
    (BattleActorControl__coroutinePostCallBack_d__206_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B7769C(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_B77560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callBack, v9, v10, v11, v12, v13, v14);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_43898B3 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_5626/*"END_LOAD"*/);
    byte_43898B3 = 1;
  }
  BattleActorControl__sendEventFSM_22495744(this, (System_String_o *)StringLiteral_5626/*"END_LOAD"*/, 0, v2);
}


void __fastcall BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v7; // x2
  struct BattleActionData_o *actiondata; // x8
  struct BattleServantData_o *v9; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *v11; // x8
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4389866 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_8950/*"MOTION_BACK"*/);
    byte_4389866 = 1;
  }
  BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_26;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v7);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_26;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_26;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsExecOverwriteTreasureDevice(
                                           battleSvtData,
                                           actiondata->fields.treasureDvcId,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_26;
    BattleServantData__ResetOverwriteTreasureDevice(battleSvtData, 0LL);
  }
  v9 = this->fields.battleSvtData;
  if ( !v9 )
    goto LABEL_26;
  isEnemy = v9->fields.isEnemy;
  v11 = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !v11 )
      goto LABEL_26;
    if ( v11->fields.treasureDvcId >= 1 )
      goto LABEL_16;
  }
  else if ( !v11 )
  {
    goto LABEL_26;
  }
  if ( System_String__op_Equality(v11->fields.motionname, (System_String_o *)StringLiteral_8950/*"MOTION_BACK"*/, 0LL) )
  {
LABEL_16:
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v12);
  }
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_26;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, v4) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_26;
    if ( !BattleServantData__isDeadStand(battleSvtData, 0LL) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_26;
      if ( !BattleServantData__isDeadWait(battleSvtData, 0LL) )
        BattleActorControl__invisibleSvtModel(this, 1, v13);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_26:
    sub_B7769C(battleSvtData, v4);
  BattlePerformance__endActionData((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_22495744(this, call, 0, v3);
}


void __fastcall BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  int v5; // w8
  _DWORD *v6; // x19
  unsigned int v7; // w21
  char *v8; // x8
  UnityEngine_Component_o *v9; // x20
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w24
  __int64 v13; // x0

  if ( (byte_43898BD & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_B775C4(&StringLiteral_18565/*"ef_pig_return01"*/);
    byte_43898BD = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_B7769C(transform, v4);
  }
  v5 = *((_DWORD *)transform + 6);
  v6 = transform;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
        goto LABEL_21;
      v8 = (char *)&v6[2 * v7];
      v9 = (UnityEngine_Component_o *)*((_QWORD *)v8 + 4);
      if ( !v9 )
        goto LABEL_20;
      transform = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v8 + 4), 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = (void *)System_String__Contains(
                            (System_String_o *)transform,
                            (System_String_o *)StringLiteral_18565/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                      v9,
                      (const MethodInfo_1C6DAB8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !transform )
          goto LABEL_20;
        v10 = *((_DWORD *)transform + 6);
        v11 = transform;
        if ( v10 >= 1 )
          break;
      }
LABEL_18:
      v5 = v6[6];
      if ( (int)++v7 >= v5 )
        return;
    }
    v12 = 0;
    while ( v12 < v10 )
    {
      transform = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_ParticleSystem__set_loop((UnityEngine_ParticleSystem_o *)transform, 0, 0LL);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_18;
    }
LABEL_21:
    v13 = sub_B776C8(transform);
    sub_B77668(v13, 0LL);
  }
}


void __fastcall BattleActorControl__finishMotion(
        BattleActorControl_o *this,
        System_String_o *finishFsmName,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  BattleCallBackBase_o *v8; // x0
  const MethodInfo *v9; // x1
  BattleCallBackBase_o *v10; // x20
  const MethodInfo *v11; // x2
  System_Collections_IEnumerator_o *v12; // x0
  const MethodInfo *v13; // x3

  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)finishFsmName);
  if ( !v5 )
    goto LABEL_11;
  if ( !BattleActorControl_ActorMotionActiveCheck__inactiveFSM(v5, finishFsmName, 0LL) )
  {
    BattleActorControl__finishMotion_22502596(this, v7);
    return;
  }
  v5 = BattleActorControl__get_CheckMotion(this, v7);
  if ( !v5 )
    goto LABEL_11;
  v8 = BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(v5, 0LL);
  if ( !v8 )
    goto LABEL_7;
  v10 = v8;
  v5 = BattleActorControl__get_CheckMotion(this, v9);
  if ( !v5 )
LABEL_11:
    sub_B7769C(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_22502596(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4389864 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389864 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) && this->fields.actiondata )
  {
    MotionSkip = this->fields.performance;
    if ( !MotionSkip
      || (MotionSkip = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(MotionSkip, 0LL)) == 0LL
      || (((void (__fastcall *)(BattlePerformance_o *, void *))MotionSkip->klass[1]._1.typeMetadataHandle)(
            MotionSkip,
            MotionSkip->klass[1]._1.interopData),
          (MotionSkip = this->fields.performance) == 0LL) )
    {
      sub_B7769C(MotionSkip, v4);
    }
    BattlePerformance__finishMotion(MotionSkip, this, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffect(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  BattleServantData_o *v6; // x8
  int32_t index; // w21
  struct BattleServantData_o *v8; // x8
  int32_t v9; // w20
  int32_t seqIdFromMstTDSeqWeight; // w22

  if ( (byte_4389843 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_4389843 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL)
    || (index = v6->fields.index,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B7769C(battleSvtData, name);
  }
  v9 = (int)battleSvtData;
  seqIdFromMstTDSeqWeight = v8->fields.seqIdFromMstTDSeqWeight;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__loadNoblePhantasmEffect(index, v9, name, seqIdFromMstTDSeqWeight, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffectFromActor(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t v6; // w20
  BattleServantData_o *v7; // x8
  int32_t v8; // w21
  int32_t WeaponGroup; // w22

  if ( (byte_4389844 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_4389844 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v6 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B7769C(battleSvtData, name);
  }
  v8 = (int)battleSvtData;
  WeaponGroup = BattleServantData__getWeaponGroup(v7, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__loadActorEffectFromActor(v6, v8, WeaponGroup, name, 0LL);
}


int32_t __fastcall BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getActorSvtId(battleSvtData, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getBaseScale(BattleActorControl_o *this, const MethodInfo *method)
{
  float actorScale; // s3
  float v4; // s0
  float v5; // s1
  float v6; // s2
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  one = UnityEngine_Vector3__get_one(0LL);
  actorScale = this->fields.actorScale;
  v4 = one.fields.x * actorScale;
  v5 = one.fields.y * actorScale;
  v6 = one.fields.z * actorScale;
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v4;
  return result;
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getCriterialPos(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.criteriaPos.fields.x;
  y = this->fields.criteriaPos.fields.y;
  z = this->fields.criteriaPos.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getDropTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B7769C(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_B7769C(this, method);
  return performance->fields.root_field;
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getHeadUpObject(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getHeadUpY(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  float x; // s8
  float y; // s9
  float v6; // s1
  float v7; // s2
  float v8; // s0
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  x = this->fields.headupVec.fields.x;
  y = this->fields.headupVec.fields.y;
  v6 = (float)(y + 0.5) + BattleServantData__getheadUpY(battleSvtData, 0LL);
  v7 = 0.0;
  v8 = x;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v8;
  return result;
}


int32_t __fastcall BattleActorControl__getLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL);
}


int32_t __fastcall BattleActorControl__getNobleChainCount(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  if ( actiondata )
    return actiondata->fields.chainCount;
  else
    return 0;
}


int32_t __fastcall BattleActorControl__getOriginLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(this, method);
  return battleSvtData->fields.overwriteSvtVoiceId;
}


int32_t __fastcall BattleActorControl__getScriptValue(
        BattleActorControl_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getStrParam(battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleActorControl__getTargetObjectVec(
        BattleActorControl_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s11
  UnityEngine_Object_o *targetObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v11; // s1
  float v12; // s2
  float v13; // s0
  float v14; // s0
  float v15; // s0
  float v16; // s1
  float v17; // s2
  struct BattlePerformance_o *v18; // x8
  float v19; // s10
  float v20; // s8
  float v21; // s9
  float v22; // s2
  float v23; // s0
  float v24; // s1
  float v25; // s0
  float v26; // s1
  float v27; // s2
  struct BattlePerformance_o *v28; // x8
  float v29; // s0
  float v30; // s1
  float v31; // s2
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_438985E & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438985E = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_37;
  distanceofactor = performance->fields.distanceofactor;
  zero = UnityEngine_Vector3__get_zero(0LL);
  targetObject = (UnityEngine_Object_o *)v4->fields.targetObject;
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(targetObject, 0LL, 0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.targetObject;
    if ( this )
    {
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( this )
      {
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        goto LABEL_11;
      }
    }
LABEL_37:
    sub_B7769C(this, *(_QWORD *)&pos);
  }
LABEL_11:
  if ( !v4->fields.dir )
    distanceofactor = -distanceofactor;
  switch ( pos )
  {
    case 0:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = distanceofactor + v13;
      goto LABEL_20;
    case 1:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v11 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v14 - distanceofactor;
LABEL_20:
      y = v11 + 0.0;
      z = v12 + 0.0;
      break;
    case 3:
      x = v4->fields.criteriaPos.fields.x;
      y = v4->fields.criteriaPos.fields.y;
      z = v4->fields.criteriaPos.fields.z;
      break;
    case 4:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_37;
      goto LABEL_29;
    case 5:
      this = (BattleActorControl_o *)v4->fields.enemyStage;
      if ( !this )
        goto LABEL_37;
LABEL_29:
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      v34 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v34.fields.x;
      y = v34.fields.y;
      z = v34.fields.z;
      break;
    case 6:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v18 = v4->fields.performance;
      if ( !v18 )
        goto LABEL_37;
      v19 = v17;
      v20 = v15;
      v21 = v16;
      v22 = UnityEngine_Mathf__InverseLerp(40.0, 70.0, v18->fields.currentFov, 0LL);
      v23 = 2.0;
      v24 = 14.0;
      goto LABEL_35;
    case 7:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v28 = v4->fields.performance;
      if ( !v28 )
        goto LABEL_37;
      v19 = v27;
      v20 = v25;
      v21 = v26;
      v22 = UnityEngine_Mathf__InverseLerp(40.0, 70.0, v28->fields.currentFov, 0LL);
      v23 = 3.0;
      v24 = 8.0;
LABEL_35:
      x = v20 + (float)(distanceofactor * UnityEngine_Mathf__LerpUnclamped(v23, v24, v22, 0LL));
      y = v21 + 0.0;
      z = v19 + 0.0;
      break;
    default:
      break;
  }
  v29 = x;
  v30 = y;
  v31 = z;
  result.fields.z = v31;
  result.fields.y = v30;
  result.fields.x = v29;
  return result;
}


int32_t __fastcall BattleActorControl__getWaveCount(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  struct BattleData_o *data; // x8

  if ( (byte_4389842 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389842 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.performance;
  if ( !v6 || (data = v6->fields.data) == 0LL )
    sub_B7769C(v4, v5);
  return data->fields.wavecount;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__getWeaponColor(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  *(UnityEngine_Color_o *)&v3 = BattleServantData__getWeaponColor(battleSvtData, 0LL);
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


int32_t __fastcall BattleActorControl__getWeaponGroup(
        BattleActorControl_o *this,
        bool isEffect,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return BattleServantData__getWeaponScale(battleSvtData, 0LL);
}


BattleActionData_o *__fastcall BattleActorControl__get_ActionData(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.actiondata;
}


BattleServantData_o *__fastcall BattleActorControl__get_BattleSvtData(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.battleSvtData;
}


System_String_o *__fastcall BattleActorControl__get_BuffEffectNodeName(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffEffectNodeName_k__BackingField;
}


BattleActorControl_ActorMotionActiveCheck_o *__fastcall BattleActorControl__get_CheckMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *result; // x0
  BattleActorControl_ActorMotionActiveCheck_o *v4; // x21
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_438985F & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    byte_438985F = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_B77694(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0LL);
    this->fields._checkMotion = v4;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._checkMotion,
      (System_Int32_array **)v4,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    return this->fields._checkMotion;
  }
  return result;
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  return ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))battleSvtData->klass->vtable._15_get_IsAiNpc.method)(
           battleSvtData,
           battleSvtData->klass->vtable._16_getSaveData.methodPtr);
}


bool __fastcall BattleActorControl__get_IsEnemy(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.isEnemy;
}


bool __fastcall BattleActorControl__get_IsStepInBattle(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._IsStepInBattle_k__BackingField;
}


int32_t __fastcall BattleActorControl__get_Level(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w19
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w20

  if ( (byte_4389841 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_4389841 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(0LL, method);
  SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
  LimitCount = BattleActorControl__getLimitCount(this, v5);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__GetLimitImageIndex(SvtId, LimitCount, 0, 0LL);
}


BaseMotionSkip_o *__fastcall BattleActorControl__get_MotionSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B7769C(0LL, method);
  return BattlePerformance__get_MotionSkip(performance, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeDamage(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.nodeDamage;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeText(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.nodeText;
}


System_String_o *__fastcall BattleActorControl__get_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._PlayedOriginalAnimName_k__BackingField;
}


int32_t __fastcall BattleActorControl__get_PrevSkillVoiceType(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.prevSkillVoiceType;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_ShadowObj(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowObj;
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__get_SpecialShadowObj(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.specialShadowObj;
}


int32_t __fastcall BattleActorControl__get_currentPriority(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._currentPriority_k__BackingField;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__get_delayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
}


System_String_array *__fastcall BattleActorControl__getlog(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_438983D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    byte_438983D = 1;
  }
  v2 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v2,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  if ( !v2 )
    sub_B7769C(v3, v4);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v2,
                                  (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


void __fastcall BattleActorControl__invisibleSvtModel(
        BattleActorControl_o *this,
        bool hideFlg,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    sub_B7769C(0LL, hideFlg);
  v5 = !hideFlg;
  UnityEngine_GameObject__SetActive(actorObject, v5, 0LL);
  BattleActorControl__SetShadowActive(this, v5, v6);
  BattleActorControl__LoopEffectParticleSwitch(this, v5, 0, v7);
}


bool __fastcall BattleActorControl__isChocoServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.displayType == 3;
}


bool __fastcall BattleActorControl__isFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && !actiondata->fields.three && !actiondata->fields.pair;
}


bool __fastcall BattleActorControl__isMonsterServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B7769C(this, method);
  return battleSvtData->fields.svtType == 4;
}


bool __fastcall BattleActorControl__isNoVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  struct BattleActionData_ShiftServant_o *myShiftData; // x8

  if ( BattleActorControl__IsVoiceOffSvt(this, method) )
  {
    LOBYTE(battleSvtData) = 1;
  }
  else
  {
    myShiftData = this->fields.myShiftData;
    if ( myShiftData )
    {
      LOBYTE(battleSvtData) = myShiftData->fields.isNoVoice;
    }
    else
    {
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
        LOBYTE(battleSvtData) = BattleServantData__IsNoVoice(battleSvtData, 0LL);
    }
  }
  return (char)battleSvtData;
}


bool __fastcall BattleActorControl__isPairFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && actiondata->fields.pair;
}


bool __fastcall BattleActorControl__isShadowServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.displayType == 2;
}


bool __fastcall BattleActorControl__isSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v4; // x8
  unsigned __int64 v5; // x21
  UnityEngine_Object_o *v6; // x19
  __int64 v8; // x0

  v2 = this;
  if ( (byte_4389857 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_13408/*"SummonEndFlag"*/);
    byte_4389857 = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B7769C(this, method);
  v4 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v5 = 0LL;
  while ( 1 )
  {
    if ( v5 >= (unsigned int)v4 )
    {
      v8 = sub_B776C8(this);
      sub_B77668(v8, 0LL);
    }
    v6 = (UnityEngine_Object_o *)motionFSM->m_Items[v5];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v6 )
        goto LABEL_19;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v6, 0LL);
      if ( !this )
        goto LABEL_19;
      this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
      if ( !this )
        goto LABEL_19;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13408/*"SummonEndFlag"*/,
                                       0LL);
      if ( this )
      {
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmBool__get_Value(
                                         (HutongGames_PlayMaker_FsmBool_o *)this,
                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
    }
    LODWORD(v4) = motionFSM->max_length;
    if ( (__int64)++v5 >= (int)v4 )
      return 0;
  }
}


bool __fastcall BattleActorControl__isThree(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && !actiondata->fields.flash && actiondata->fields.three;
}


bool __fastcall BattleActorControl__isThreeFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && actiondata->fields.three;
}


void __fastcall BattleActorControl__loadDressServant(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleActorControl__colloadDressServant(this, flg, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_B7769C(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_BackStep(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+28h] [xbp-38h] BYREF
  float v56; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4389883 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_moveStep__);
    sub_B775C4(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_12608/*"STEP_START"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    sub_B775C4(&StringLiteral_19536/*"hight"*/);
    sub_B775C4(&StringLiteral_22801/*"step_back"*/);
    byte_4389883 = 1;
  }
  this->fields.targetObject = target;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_22508132(this, (System_String_o *)StringLiteral_22801/*"step_back"*/, 0, v36);
  v37 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    sub_B7769C(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)v38, v41, v42, v43, v44, v45, v46);
  v56 = hight;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v47);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_19536/*"hight"*/,
    v48,
    0LL);
  v55 = time;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_23154/*"time"*/,
    v50,
    0LL);
  v54 = pos;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v54, v51);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_21964/*"pos"*/,
    v52,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12608/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
    v53);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4389885 & 1) == 0 )
  {
    sub_B775C4(&iTween_TypeInfo);
    byte_4389885 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43295052(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_Jump(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+28h] [xbp-38h] BYREF
  float v56; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4389880 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_moveJump__);
    sub_B775C4(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_8451/*"JUMP_UP"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_20492/*"jump"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    sub_B775C4(&StringLiteral_19536/*"hight"*/);
    byte_4389880 = 1;
  }
  this->fields.targetObject = target;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_22508132(this, (System_String_o *)StringLiteral_20492/*"jump"*/, 0, v36);
  v37 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v37 )
    sub_B7769C(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)v38, v41, v42, v43, v44, v45, v46);
  v56 = hight;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v47);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_19536/*"hight"*/,
    v48,
    0LL);
  v55 = time;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_23154/*"time"*/,
    v50,
    0LL);
  v54 = pos;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v54, v51);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_21964/*"pos"*/,
    v52,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8451/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v37,
    v53);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_Step(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+28h] [xbp-38h] BYREF
  float v56; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4389882 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_moveStep__);
    sub_B775C4(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_12608/*"STEP_START"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    sub_B775C4(&StringLiteral_19536/*"hight"*/);
    sub_B775C4(&StringLiteral_22802/*"step_front"*/);
    byte_4389882 = 1;
  }
  this->fields.targetObject = target;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_22508132(this, (System_String_o *)StringLiteral_22802/*"step_front"*/, 0, v36);
  v37 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    sub_B7769C(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)v38, v41, v42, v43, v44, v45, v46);
  v56 = hight;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v47);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_19536/*"hight"*/,
    v48,
    0LL);
  v55 = time;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_23154/*"time"*/,
    v50,
    0LL);
  v54 = pos;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v54, v51);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_21964/*"pos"*/,
    v52,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12608/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
    v53);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_StepWait(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  __int64 v54; // x20
  BattleActorControl_EndCallEvent_o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x3
  int32_t v63; // [xsp+Ch] [xbp-54h] BYREF
  float v64; // [xsp+28h] [xbp-38h] BYREF
  float v65; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4389881 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_moveStep__);
    sub_B775C4(&Method_BattleActorControl_playAnimation__);
    sub_B775C4(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_12608/*"STEP_START"*/);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    sub_B775C4(&StringLiteral_19536/*"hight"*/);
    sub_B775C4(&StringLiteral_21436/*"name"*/);
    sub_B775C4(&StringLiteral_22802/*"step_front"*/);
    sub_B775C4(&StringLiteral_12607/*"STEP_END_02"*/);
    byte_4389881 = 1;
  }
  this->fields.targetObject = target;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_22508132(this, (System_String_o *)StringLiteral_22802/*"step_front"*/, 0, v36);
  v37 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    goto LABEL_6;
  *(_QWORD *)(v37 + 16) = v38;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)v38, v41, v42, v43, v44, v45, v46);
  v65 = hight;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v65, v47);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_19536/*"hight"*/,
    v48,
    0LL);
  v64 = time;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v64, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_23154/*"time"*/,
    v50,
    0LL);
  v63 = pos;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v63, v51);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_21964/*"pos"*/,
    v52,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12608/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
    v53);
  v54 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v54, 0LL);
  v55 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v55, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v54 )
LABEL_6:
    sub_B7769C(v39, v40);
  *(_QWORD *)(v54 + 16) = v55;
  sub_B77560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v54,
    (System_String_o *)StringLiteral_21436/*"name"*/,
    (Il2CppObject *)StringLiteral_23673/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12607/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v54,
    v62);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__motion_TreasureArms(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *target,
        float hight,
        float time,
        int32_t pos,
        System_String_o *pmevent,
        UnityEngine_GameObject_o *sendEventCallObject,
        System_String_o *sendEventCallMethod,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x2
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  Il2CppObject *v52; // x0
  const MethodInfo *v53; // x3
  int32_t v54; // [xsp+Ch] [xbp-54h] BYREF
  float v55; // [xsp+28h] [xbp-38h] BYREF
  float v56; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4389884 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_moveStep__);
    sub_B775C4(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23268/*"treasure_arms"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_12608/*"STEP_START"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    sub_B775C4(&StringLiteral_19536/*"hight"*/);
    byte_4389884 = 1;
  }
  this->fields.targetObject = target;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_22508132(this, (System_String_o *)StringLiteral_23268/*"treasure_arms"*/, 0, v36);
  v37 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    sub_B7769C(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_B77560((BattleServantConfConponent_o *)(v37 + 16), (System_Int32_array **)v38, v41, v42, v43, v44, v45, v46);
  v56 = hight;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v56, v47);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_19536/*"hight"*/,
    v48,
    0LL);
  v55 = time;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_23154/*"time"*/,
    v50,
    0LL);
  v54 = pos;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v54, v51);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_21964/*"pos"*/,
    v52,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12608/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
    v53);
}


void __fastcall BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v16; // [xsp+8h] [xbp-28h] BYREF
  int v17; // [xsp+Ch] [xbp-24h] BYREF
  char v18[4]; // [xsp+18h] [xbp-18h] BYREF
  int v19; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_438988B & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&iTween_EaseType_TypeInfo);
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_18476/*"easetype"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_23893/*"y"*/);
    sub_B775C4(&StringLiteral_20375/*"islocal"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438988B = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39511352(v5, 0LL);
  v19 = 0;
  v7 = j_il2cpp_value_box_0(int_TypeInfo, &v19, v6);
  if ( !v5 )
    sub_B7769C(v7, v8);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_23893/*"y"*/,
    v7,
    v5->klass->vtable._24_Clear.methodPtr);
  v18[0] = 1;
  v10 = j_il2cpp_value_box_0(bool_TypeInfo, v18, v9);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_20375/*"islocal"*/,
    v10,
    v5->klass->vtable._24_Clear.methodPtr);
  v17 = 0;
  v12 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v17, v11);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_18476/*"easetype"*/,
    v12,
    v5->klass->vtable._24_Clear.methodPtr);
  v16 = time;
  v14 = j_il2cpp_value_box_0(float_TypeInfo, &v16, v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_23154/*"time"*/,
    v14,
    v5->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43177188(actorObject, v5, 0LL);
}


void __fastcall BattleActorControl__moveJump(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x21
  float v7; // s8
  float v8; // s9
  int32_t v9; // w1
  const MethodInfo *v10; // x2
  BattleActorControl_o *v11; // x0
  float v12; // s0
  float v13; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4389887 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_19536/*"hight"*/);
    byte_4389887 = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19536/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_23154/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_21964/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v5) )
  {
LABEL_12:
    sub_B7769C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B77990(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B77990(v6);
    goto LABEL_15;
  }
  v7 = *(float *)&this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v11 = (BattleActorControl_o *)sub_B77990(v3);
    goto LABEL_11;
  }
  v8 = *(float *)&this->klass;
  v9 = *(_DWORD *)j_il2cpp_object_unbox_0(v3);
  v11 = v4;
  v12 = v7;
  v13 = v8;
LABEL_11:
  BattleActorControl__moveJump_22520816(v11, v12, v13, v9, v10);
}


void __fastcall BattleActorControl__moveJump_22520816(
        BattleActorControl_o *this,
        float hight,
        float time,
        int32_t pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v9; // x1

  BattleActorControl__movePos(
    this,
    pos,
    time + time,
    this->fields.endmotionevent,
    this->fields.endmotionCallObject,
    this->fields.endmotionCallMethod,
    v5);
  BattleActorControl__moveUp_22519688(this, hight, time, v9);
}


void __fastcall BattleActorControl__movePos(
        BattleActorControl_o *this,
        int32_t pos,
        float time,
        System_String_o *endcall,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackEvent,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v13; // x22
  const MethodInfo *v14; // x2
  __int64 v15; // x2
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x0
  __int64 v20; // x2
  __int64 v21; // x0
  bool v22; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x19
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+0h] [xbp-50h] BYREF
  float v26; // [xsp+18h] [xbp-38h] BYREF
  int v27; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4389888 & 1) == 0 )
  {
    sub_B775C4(&iTween_EaseType_TypeInfo);
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&UnityEngine_Vector3_TypeInfo);
    sub_B775C4(&StringLiteral_18476/*"easetype"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21703/*"oncompleteparams"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_21965/*"position"*/);
    sub_B775C4(&StringLiteral_18721/*"endMotion"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_4389888 = 1;
  }
  v13 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39511352(v13, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v14);
  v16 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec, v15);
  if ( !v13 )
    sub_B7769C(v16, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_21965/*"position"*/,
    v16,
    v13->klass->vtable._24_Clear.methodPtr);
  v27 = 1;
  v19 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v27, v18);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_18476/*"easetype"*/,
    v19,
    v13->klass->vtable._24_Clear.methodPtr);
  v26 = time;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v26, v20);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_23154/*"time"*/,
    v21,
    v13->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v22 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_21704/*"oncompletetarget"*/,
        callbackObject,
        v13->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_21702/*"oncomplete"*/,
        callbackEvent,
        v13->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_21704/*"oncompletetarget"*/,
        gameObject,
        v13->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_21702/*"oncomplete"*/,
        StringLiteral_18721/*"endMotion"*/,
        v13->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
      v13,
      StringLiteral_21703/*"oncompleteparams"*/,
      endcall,
      v13->klass->vtable._24_Clear.methodPtr);
  }
  v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43177188(v24, v13, 0LL);
}


void __fastcall BattleActorControl__moveStep(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x21
  float v7; // s8
  float v8; // s9
  int32_t v9; // w1
  const MethodInfo *v10; // x2
  BattleActorControl_o *v11; // x0
  float v12; // s0
  float v13; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4389886 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_POS_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21964/*"pos"*/);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_19536/*"hight"*/);
    byte_4389886 = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19536/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_23154/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_21964/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v5) )
  {
LABEL_12:
    sub_B7769C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B77990(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B77990(v6);
    goto LABEL_15;
  }
  v7 = *(float *)&this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v11 = (BattleActorControl_o *)sub_B77990(v3);
    goto LABEL_11;
  }
  v8 = *(float *)&this->klass;
  v9 = *(_DWORD *)j_il2cpp_object_unbox_0(v3);
  v11 = v4;
  v12 = v7;
  v13 = v8;
LABEL_11:
  BattleActorControl__moveStep_22518792(v11, v12, v13, v9, v10);
}


void __fastcall BattleActorControl__moveStep_22518792(
        BattleActorControl_o *this,
        float hight,
        float time,
        int32_t pos,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  const MethodInfo *v9; // x1

  BattleActorControl__movePos(
    this,
    pos,
    time + time,
    this->fields.endmotionevent,
    this->fields.endmotionCallObject,
    this->fields.endmotionCallMethod,
    v5);
  BattleActorControl__moveUp_22519688(this, hight, time, v9);
}


void __fastcall BattleActorControl__moveUp(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x21
  float v6; // s8
  float v7; // s1
  const MethodInfo *v8; // x1
  BattleActorControl_o *v9; // x0
  const MethodInfo *v10; // x1
  float v11; // s0

  v3 = table;
  v4 = this;
  if ( (byte_4389889 & 1) == 0 )
  {
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_19536/*"hight"*/);
    byte_4389889 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
         v3,
         StringLiteral_19536/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                   v3,
                                   StringLiteral_23154/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  if ( !v5 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B77990(v5);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5);
  if ( !v3 )
LABEL_9:
    sub_B7769C(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v6 = *(float *)&this->klass;
    v7 = *(float *)j_il2cpp_object_unbox_0(v3);
    BattleActorControl__moveUp_22519688(v4, v6, v7, v8);
    return;
  }
LABEL_11:
  v9 = (BattleActorControl_o *)sub_B77990(v3);
  BattleActorControl__moveDown(v9, v11, v10);
}


void __fastcall BattleActorControl__moveUp_22519688(
        BattleActorControl_o *this,
        float hight,
        float time,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v21; // [xsp+Ch] [xbp-44h] BYREF
  float v22; // [xsp+10h] [xbp-40h] BYREF
  int v23; // [xsp+14h] [xbp-3Ch] BYREF
  char v24[4]; // [xsp+18h] [xbp-38h] BYREF
  float v25; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_438988A & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&iTween_EaseType_TypeInfo);
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_18476/*"easetype"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21703/*"oncompleteparams"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_23893/*"y"*/);
    sub_B775C4(&StringLiteral_20375/*"islocal"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    sub_B775C4(&StringLiteral_20997/*"moveDown"*/);
    sub_B775C4(&iTween_TypeInfo);
    byte_438988A = 1;
  }
  v7 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39511352(v7, 0LL);
  v25 = hight;
  v9 = j_il2cpp_value_box_0(float_TypeInfo, &v25, v8);
  if ( !v7 )
    sub_B7769C(v9, v10);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_23893/*"y"*/,
    v9,
    v7->klass->vtable._24_Clear.methodPtr);
  v24[0] = 1;
  v12 = j_il2cpp_value_box_0(bool_TypeInfo, v24, v11);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_20375/*"islocal"*/,
    v12,
    v7->klass->vtable._24_Clear.methodPtr);
  v23 = 1;
  v14 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v23, v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_18476/*"easetype"*/,
    v14,
    v7->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_21704/*"oncompletetarget"*/,
    gameObject,
    v7->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_21702/*"oncomplete"*/,
    StringLiteral_20997/*"moveDown"*/,
    v7->klass->vtable._24_Clear.methodPtr);
  v22 = time;
  v17 = j_il2cpp_value_box_0(float_TypeInfo, &v22, v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_21703/*"oncompleteparams"*/,
    v17,
    v7->klass->vtable._24_Clear.methodPtr);
  v21 = time;
  v19 = j_il2cpp_value_box_0(float_TypeInfo, &v21, v18);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_23154/*"time"*/,
    v19,
    v7->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43177188(actorObject, v7, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_43898A4 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_skipVoice__);
    sub_B775C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_43898A4 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B77694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B7769C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  BattlePerformanceStatus_o *v4; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_43898AC & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_B775C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_43898AC = 1;
  }
  klass = v2[8].klass;
  if ( !klass
    || (v4 = *(BattlePerformanceStatus_o **)&klass->_2.static_fields_size,
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B77694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v4) )
  {
    sub_B7769C(this, method);
  }
  BattlePerformanceStatus__setTouchOff(v4, v5, 0LL);
}


void __fastcall BattleActorControl__onTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_43898A3 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_skipVoice__);
    sub_B775C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_43898A3 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B77694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B7769C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x8
  BattlePerformanceStatus_o *v4; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_43898AB & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_B775C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_43898AB = 1;
  }
  klass = v2[8].klass;
  if ( !klass
    || (v4 = *(BattlePerformanceStatus_o **)&klass->_2.static_fields_size,
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B77694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v4) )
  {
    sub_B7769C(this, method);
  }
  BattlePerformanceStatus__setTouchOn(v4, v5, 0LL);
}


void __fastcall BattleActorControl__playAnimation(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  BattleActorControl_o *v7; // x0
  System_String_o *v8; // x1
  bool v9; // w2
  const MethodInfo *v10; // x3

  v4 = this;
  if ( (byte_4389875 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_21436/*"name"*/);
    byte_4389875 = 1;
  }
  if ( !table )
    sub_B7769C(this, table);
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_21436/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v5 && v5->klass != string_TypeInfo )
  {
    v7 = (BattleActorControl_o *)sub_B77990(v5);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v7, v8, v9, v10);
  }
  else
  {
    BattleActorControl__playAnimation_22508132(v4, v5, 0, v6);
  }
}


void __fastcall BattleActorControl__playAnimationFtag(
        BattleActorControl_o *this,
        System_String_o *animname,
        System_String_o *tag,
        const MethodInfo *method)
{
  System_String_o *v7; // x0
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x21
  __int64 v10; // x1
  BattleFBXComponent_o *fbxcomponent; // x0

  if ( (byte_4389877 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1575/*"@playAnim\n =>{0},{1}"*/);
    byte_4389877 = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_44897472((System_String_o *)StringLiteral_1575/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_B7769C(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_22508132(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isDontOverwrite,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  __int64 v9; // x1
  BattleFBXComponent_o *fbxcomponent; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v13; // x19
  float length; // s0
  float v15; // s0
  UnityEngine_Object_o *v16; // x21
  struct BattleFBXComponent_o *v17; // x22
  BattleFBXComponent_c *klass; // x8
  BattleFBXComponent_o *v19; // x19
  unsigned __int64 v20; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v22; // x0
  float v23; // s0
  float v24; // s0

  if ( (byte_4389876 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SimpleAnimation_State_TypeInfo);
    sub_B775C4(&StringLiteral_23673/*"wait"*/);
    sub_B775C4(&StringLiteral_1574/*"@playAnim\n =>{0}"*/);
    byte_4389876 = 1;
  }
  v8 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v8 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v8, 1, v7);
  System_String__Format((System_String_o *)StringLiteral_1574/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v8, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_35;
  BattleFBXComponent__playAnimation(fbxcomponent, v8, 0LL);
  if ( System_String__op_Equality(v8, (System_String_o *)StringLiteral_23673/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_35;
    ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                          (UnityEngine_GameObject_o *)fbxcomponent,
                                                                          (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(
                                             ComponentInChildren_Dropdown_DropdownItem,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
    {
      if ( !ComponentInChildren_Dropdown_DropdownItem )
        goto LABEL_35;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem,
                                                 v8,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v13 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem,
                                                 v8,
                                                 0LL);
        if ( fbxcomponent )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)fbxcomponent, 0LL);
          v15 = UnityEngine_Random__Range(0.0, length, 0LL);
          if ( v13 )
          {
            v13->fields.currentAnimTime = v15;
            return;
          }
        }
LABEL_35:
        sub_B7769C(fbxcomponent, v9);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_35;
      v16 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                      (UnityEngine_GameObject_o *)fbxcomponent,
                                      (const MethodInfo_1DEC070 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_35;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v16, v8, 0LL) )
        {
          v17 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v16, v8, 0LL);
          if ( !fbxcomponent )
            goto LABEL_35;
          klass = fbxcomponent->klass;
          v19 = fbxcomponent;
          if ( *(_WORD *)&fbxcomponent->klass->_2.bitflags1 )
          {
            v20 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v20;
              p_offset += 2;
              if ( v20 >= *(unsigned __int16 *)&fbxcomponent->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            v22 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_29:
            v22 = sub_B0F4C0(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v22)(
                                                   v19,
                                                   *(_QWORD *)(v22 + 8));
          if ( !fbxcomponent )
            goto LABEL_35;
          v23 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0LL);
          v24 = UnityEngine_Random__Range(0.0, v23, 0LL);
          if ( !v17 )
            goto LABEL_35;
          v17->fields.currentAnimTime = v24;
        }
      }
    }
  }
}


void __fastcall BattleActorControl__playBattleActionData(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v9; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v10; // x22
  BattleCallBack_T__o *v11; // x20

  if ( (byte_4389862 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_BattleActionData___ctor__);
    sub_B775C4(&System_Action_BattleActionData__TypeInfo);
    sub_B775C4(&Method_BattleActorControl_playBattleActionDataLocal__);
    sub_B775C4(&Method_BattleCallBack_BattleActionData___ctor__);
    sub_B775C4(&BattleCallBack_BattleActionData__TypeInfo);
    byte_4389862 = 1;
  }
  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v5 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v5, 0LL) )
  {
    v9 = BattleActorControl__get_CheckMotion(this, v7);
    v10 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_BattleActionData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v10,
      (Il2CppObject *)this,
      Method_BattleActorControl_playBattleActionDataLocal__,
      (const MethodInfo_26A0868 *)Method_System_Action_BattleActionData___ctor__);
    v11 = (BattleCallBack_T__o *)sub_B77694(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v11,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v10,
      (const MethodInfo_2CAE170 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v9 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v9, (BattleCallBackBase_o *)v11, 0LL);
      return;
    }
LABEL_8:
    sub_B7769C(v5, v6);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v8);
}


void __fastcall BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x1
  BattleActionData_o *actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  int32_t type; // w21
  BattleActionData_c *v28; // x0
  const MethodInfo *v29; // x3
  BattleActionData_o *v30; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  const MethodInfo *v33; // x1
  System_String_o *v34; // x0
  BattleServantData_o *battleSvtData; // x0

  if ( (byte_4389863 & 1) == 0 )
  {
    sub_B775C4(&BattleActionData_TypeInfo);
    sub_B775C4(&StringLiteral_8948/*"MOTION_"*/);
    byte_4389863 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  this->fields.actiondata = badata;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.actiondata,
    (System_Int32_array **)badata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleActorControl__setActionData(this, this->fields.actiondata, v11);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_34;
  ShiftServant = BattleActionData__getShiftServant(actiondata, v12);
  this->fields.myShiftData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.myShiftData, 0LL, v15, v16, v17, v18, v19, v20);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.myShiftData,
      (System_Int32_array **)ShiftServant,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !badata )
    goto LABEL_34;
  if ( badata->fields.noOperation )
  {
    actiondata = (BattleActionData_o *)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0LL);
      return;
    }
    goto LABEL_34;
  }
  if ( !*p_actiondata )
    goto LABEL_34;
  type = (*p_actiondata)->fields.type;
  v28 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v28 = BattleActionData_TypeInfo;
  }
  if ( type == v28->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = *p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_34;
  actiondata = (BattleActionData_o *)BattleActionData__isCommandAttack(actiondata, v12);
  if ( ((unsigned __int8)actiondata & 1) != 0 )
    goto LABEL_20;
  if ( !*p_actiondata )
    goto LABEL_34;
  if ( ((*p_actiondata)->fields.type & 0xFFFFFFFE) == 10 )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, (const MethodInfo *)v22);
  actiondata = (BattleActionData_o *)this->fields.performance;
  if ( !actiondata
    || (actiondata = (BattleActionData_o *)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0LL
    || (actiondata = (BattleActionData_o *)((__int64 (__fastcall *)(BattleActionData_o *, void *))actiondata->klass->vtable._9_ExecAction.method)(
                                             actiondata,
                                             actiondata->klass[1]._1.image),
        (v30 = *p_actiondata) == 0LL) )
  {
LABEL_34:
    sub_B7769C(actiondata, v12);
  }
  motionname = v30->fields.motionname;
  IsVanishSkill = v30->fields.IsVanishSkill;
  if ( !motionname )
  {
    v34 = System_Int32__ToString((int)v30 + 48, 0LL);
    motionname = System_String__Concat_44901936((System_String_o *)StringLiteral_8948/*"MOTION_"*/, v34, 0LL);
    if ( IsVanishSkill )
      goto LABEL_26;
LABEL_28:
    BattleActorControl__sendMotionEventFSM(this, motionname, 0, v29);
    goto LABEL_29;
  }
  if ( !v30->fields.IsVanishSkill )
    goto LABEL_28;
LABEL_26:
  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_22495744(this, motionname, 0, v29);
LABEL_29:
  if ( *p_actiondata && BattleActionData__isDeadMotion(*p_actiondata, v33) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
      BattleServantData__playDead(battleSvtData, 0LL);
  }
}


void __fastcall BattleActorControl__playCallAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        System_String_o *endevent,
        System_String_o *starttag,
        const MethodInfo *method)
{
  __int64 v9; // x23
  BattleActorControl_EndCallEvent_o *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4389874 & 1) == 0 )
  {
    sub_B775C4(&Method_BattleActorControl_sendEventFSM__);
    sub_B775C4(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_B775C4(&BattleActorControl_EventClass_TypeInfo);
    sub_B775C4(&StringLiteral_1576/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/);
    sub_B775C4(&StringLiteral_18820/*"event"*/);
    byte_4389874 = 1;
  }
  System_String__Format_44903000(
    (System_String_o *)StringLiteral_1576/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v9 = sub_B77694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v9, 0LL);
  v10 = (BattleActorControl_EndCallEvent_o *)sub_B77694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v9 )
    sub_B7769C(v11, v12);
  *(_QWORD *)(v9 + 16) = v10;
  sub_B77560((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)v10, v13, v14, v15, v16, v17, v18);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v9,
    (System_String_o *)StringLiteral_18820/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v9, v19);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v20);
  else
    BattleActorControl__playAnimation_22508132(this, animname, 0, v20);
}


void __fastcall BattleActorControl__playMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendMotionEventFSM(this, name, 0, v3);
}


void __fastcall BattleActorControl__playNoActionDataMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        float afterWaitTime,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x3

  v7 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)name);
  if ( !v7 )
    sub_B7769C(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.actiondata, 0LL, v9, v10, v11, v12, v13, v14);
  BattleActorControl__sendMotionEventFSM(this, name, 1, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleActorControl__playSideEffect(
        BattleActorControl_o *this,
        System_String_o *effectname,
        UnityEngine_Vector3_o vec3,
        bool sideflip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  UnityEngine_GameObject_o *result; // x0
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  bool v14; // w8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v16; // x23
  int v17; // s0
  UnityEngine_Transform_o *v20; // x23
  int v21; // s0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_438985C & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
    sub_B775C4(&StringLiteral_16262/*"_ENEMY"*/);
    byte_438985C = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.battleSvtData;
  if ( !result )
    goto LABEL_28;
  WeaponGroup = BattleServantData__getWeaponGroup((BattleServantData_o *)result, 1, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadEffect(effectname, WeaponGroup, 0, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Equality(Manager__loadEffect, 0LL, 0LL);
  result = 0LL;
  if ( !v14 )
  {
    if ( Manager__loadEffect )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
      result = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( result )
      {
        result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(result, 0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)result, 0LL);
          v16 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
          *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Vector3__get_zero(0LL);
          if ( v16 )
          {
            UnityEngine_Transform__set_localPosition(v16, *(UnityEngine_Vector3_o *)&v17, 0LL);
            v20 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
            *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Vector3__get_one(0LL);
            if ( v20 )
            {
              UnityEngine_Transform__set_localScale(v20, *(UnityEngine_Vector3_o *)&v21, 0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v25.fields.x = -x;
                  v25.fields.y = y;
                  v25.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v25, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_28;
                    if ( System_String__Equals_44889276(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16262/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_28;
                      v26.fields.x = x;
                      v26.fields.y = y;
                      v26.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v26, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_28;
                      UnityEngine_Transform__Rotate_36432168((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
                    }
                  }
                  result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                         0LL);
                  performance = this->fields.performance;
                  if ( performance && result )
                  {
                    UnityEngine_Transform__set_parent(
                      (UnityEngine_Transform_o *)result,
                      performance->fields.root_field,
                      0LL);
                    return (UnityEngine_GameObject_o *)Manager__loadEffect;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_B7769C(result, effectname);
  }
  return result;
}


void __fastcall BattleActorControl__playVoice(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  BattleActorControl_c *v11; // x0
  struct SePlayer_o *prevDeadVoice; // x8
  __int64 v13; // x1
  int v14; // w24
  System_String_o *FileName; // x0
  const MethodInfo *v16; // x4
  SePlayer_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array **v24; // x19
  BattleActorControl_c *v25; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_438986A & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_TypeInfo);
    sub_B775C4(&Voice_TypeInfo);
    byte_438986A = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( !Voice__IsDeadVoice(type, 0LL) )
  {
    v14 = 0;
    goto LABEL_21;
  }
  v11 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v11 = BattleActorControl_TypeInfo;
  }
  prevDeadVoice = v11->static_fields->prevDeadVoice;
  if ( prevDeadVoice )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleActorControl_TypeInfo;
      prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice;
      if ( !prevDeadVoice )
        goto LABEL_30;
    }
    if ( !prevDeadVoice->fields.isStop )
    {
      if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) == 0
        || v11->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v11),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0LL);
        goto LABEL_19;
      }
LABEL_30:
      sub_B7769C(v11, v13);
    }
  }
LABEL_19:
  v14 = 1;
LABEL_21:
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v17 = BattleActorControl__playVoice_22504652(this, FileName, volume, callback, isSaveVoicePlayed, v16);
  if ( v14 )
  {
    v24 = (System_Int32_array **)v17;
    v25 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v25 = BattleActorControl_TypeInfo;
    }
    static_fields = v25->static_fields;
    static_fields->prevDeadVoice = (struct SePlayer_o *)v24;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->prevDeadVoice, v24, v18, v19, v20, v21, v22, v23);
  }
}


void __fastcall BattleActorControl__playVoiceNp(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *FileName; // x1
  const MethodInfo *v10; // x3

  if ( (byte_438986D & 1) == 0 )
  {
    sub_B775C4(&Voice_TypeInfo);
    byte_438986D = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_22505712(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_22505712(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t svtId; // w22
  int32_t limit; // w23
  int32_t overwriteSvtVoiceId; // w24
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v15; // x1
  struct BattleServantData_o *v16; // x8
  int32_t uniqueID; // w21

  if ( (byte_438986E & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438986E = 1;
  }
  if ( BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId) )
  {
    ActionExtensions__Call(callback, 0LL);
  }
  else
  {
    myShiftData = this->fields.myShiftData;
    if ( myShiftData )
    {
      svtId = myShiftData->fields.svtId;
      limit = myShiftData->fields.limit;
      overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    }
    else
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (svtId = BattleServantData__getSvtId(battleSvtData, 0LL),
            battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v15),
            (v16 = this->fields.battleSvtData) == 0LL) )
      {
        sub_B7769C(battleSvtData, v9);
      }
      limit = (int)battleSvtData;
      overwriteSvtVoiceId = v16->fields.overwriteSvtVoiceId;
    }
    uniqueID = this->fields.uniqueID;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__playBattleVoice(
      svtId,
      limit,
      overwriteSvtVoiceId,
      voiceTypeId,
      volume,
      callback,
      uniqueID,
      1,
      0LL);
  }
}


SePlayer_o *__fastcall BattleActorControl__playVoiceSe(
        BattleActorControl_o *this,
        System_String_o *fileName,
        float volume,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w20
  int32_t svtId; // w22
  int32_t overwriteSvtVoiceId; // w21
  int32_t v11; // w0
  int32_t v12; // w1
  int32_t v13; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t v15; // w21
  const MethodInfo *v16; // x1
  struct BattleServantData_o *v17; // x8
  int32_t v18; // w20
  int32_t v19; // w22

  if ( (byte_4389870 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_4389870 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    svtId = myShiftData->fields.svtId;
    limit = myShiftData->fields.limit;
    overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v11 = svtId;
    v12 = limit;
    v13 = overwriteSvtVoiceId;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData
      || (v15 = BattleServantData__getSvtId(battleSvtData, 0LL),
          battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v16),
          (v17 = this->fields.battleSvtData) == 0LL) )
    {
      sub_B7769C(battleSvtData, fileName);
    }
    v18 = (int)battleSvtData;
    v19 = v17->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v11 = v15;
    v12 = v18;
    v13 = v19;
  }
  return ServantAssetLoadManager__playBattleVoiceSe(v11, v12, v13, fileName, volume, 0LL);
}


SePlayer_o *__fastcall BattleActorControl__playVoice_22504652(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 isNoVoice; // x0
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  __int64 v21; // x22
  const MethodInfo *v22; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v25; // w24
  int32_t v26; // w22
  int32_t uniqueID; // w21
  int32_t v28; // w0
  int32_t v29; // w1
  int32_t v30; // w2
  int32_t SvtId; // w22
  const MethodInfo *v32; // x1
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v34; // w23
  int32_t overwriteSvtVoiceId; // w24
  __int64 v36; // x0
  __int64 v37; // x0

  if ( (byte_438986B & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    byte_438986B = 1;
  }
  isNoVoice = BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId);
  if ( (isNoVoice & 1) != 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return 0LL;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_30;
  isNoVoice = (__int64)performance->fields.data;
  if ( !isNoVoice )
    goto LABEL_30;
  isNoVoice = (__int64)BattleData__getServantData((BattleData_o *)isNoVoice, this->fields.uniqueID, 0LL);
  if ( !isNoVoice )
    goto LABEL_30;
  if ( BattleServantData__HasAvailablePermanentSleepBuff((BattleServantData_o *)isNoVoice, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
    return 0LL;
  }
  if ( isSaveVoicePlayed )
  {
    isNoVoice = sub_B775DC(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_30;
    v21 = isNoVoice;
    if ( voiceTypeId )
    {
      isNoVoice = sub_B77684(voiceTypeId, *(_QWORD *)(*(_QWORD *)isNoVoice + 64LL));
      if ( !isNoVoice )
      {
        v37 = sub_B776BC();
        sub_B77668(v37, 0LL);
      }
    }
    if ( !*(_DWORD *)(v21 + 24) )
    {
      v36 = sub_B776C8(isNoVoice);
      sub_B77668(v36, 0LL);
    }
    *(_QWORD *)(v21 + 32) = voiceTypeId;
    sub_B77560(
      (BattleServantConfConponent_o *)(v21 + 32),
      (System_Int32_array **)voiceTypeId,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    BattleActorControl__AddServantVoicePlayed(this, (System_String_array *)v21, v22);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (__int64)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
      isNoVoice = BattleActorControl__getLimitCount(this, v32);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v34 = isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v28 = SvtId;
        v29 = v34;
        v30 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v28, v29, v30, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_30:
    sub_B7769C(isNoVoice, v12);
  }
  v25 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v26 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  v28 = v25;
  v29 = limit;
  v30 = v26;
  return ServantAssetLoadManager__playBattleVoice(v28, v29, v30, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
}


void __fastcall BattleActorControl__printLog(
        BattleActorControl_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__resetAura(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *v6; // x20
  unsigned __int64 v7; // x23
  int32_t v8; // w21
  UnityEngine_Object_o *Item; // x22
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x0

  if ( (byte_43898B5 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43898B5 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           auraList,
           (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)System_Linq_Enumerable__ToArray_int_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_21;
  entries = auraList->fields.entries;
  v6 = auraList;
  if ( (int)entries >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)entries )
      {
        v11 = sub_B776C8(auraList);
        sub_B77668(v11, 0LL);
      }
      auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v8 = *(&v6->fields.count + v7);
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
                                       v8,
                                       (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)UnityEngine_Object__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
        if ( !auraList )
          break;
        v10 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
                                        v8,
                                        (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980(v10, 0LL);
      }
      LODWORD(entries) = v6->fields.entries;
      if ( (__int64)++v7 >= (int)entries )
        goto LABEL_19;
    }
LABEL_21:
    sub_B7769C(auraList, method);
  }
LABEL_19:
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)auraList,
    (const MethodInfo_2FF4354 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43898B7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_43898B7 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          auraList,
          (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values((System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)auraList, (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_21:
    sub_B7769C(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_2648B20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v6,
            (const MethodInfo_2889594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v6.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
    if ( ((unsigned __int8)auraList & 1) == 0 )
    {
      if ( !currentValue )
        goto LABEL_21;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)currentValue,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_21;
        BillBoard__ResetFlip((BillBoard_o *)Component_srcLineSprite, 0LL);
      }
    }
  }
}


void __fastcall BattleActorControl__resetSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v4; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v6; // x19
  __int64 v7; // x0

  v2 = this;
  if ( (byte_4389856 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_13408/*"SummonEndFlag"*/);
    byte_4389856 = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_B7769C(this, method);
  v4 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v4 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v4; ++i )
    {
      if ( i >= (unsigned int)v4 )
      {
        v7 = sub_B776C8(this);
        sub_B77668(v7, 0LL);
      }
      v6 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v6 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v6, 0LL);
        if ( !this )
          goto LABEL_18;
        this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
        if ( !this )
          goto LABEL_18;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13408/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.specialShadowObj) = 0;
      }
      LODWORD(v4) = motionFSM->max_length;
    }
  }
}


void __fastcall BattleActorControl__resumeAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  float resumetimescale; // w8
  struct BattleFBXComponent_o *fbxcomponent; // x9

  resumetimescale = this->fields.resumetimescale;
  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = resumetimescale;
  if ( !fbxcomponent )
    sub_B7769C(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4389861 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_8954/*"MOTION_DAMAGE"*/);
    byte_4389861 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_B7769C(0LL, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8954/*"MOTION_DAMAGE"*/, 0, v5);
}


void __fastcall BattleActorControl__sendEventFSM(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  System_String_c **v5; // x0
  const MethodInfo *v6; // x3
  System_String_o *v7; // x8
  BattleActorControl_o *v8; // x0
  System_String_o *v9; // x1
  bool v10; // w2

  v4 = this;
  if ( (byte_4389858 & 1) == 0 )
  {
    sub_B775C4(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_18820/*"event"*/);
    byte_4389858 = 1;
  }
  if ( !table )
    sub_B7769C(this, table);
  v5 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_18820/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v7 = (System_String_o *)v5;
  if ( v5 && *v5 != string_TypeInfo )
  {
    v8 = (BattleActorControl_o *)sub_B77990(v5);
  }
  else
  {
    v8 = v4;
    v9 = v7;
    v10 = 0;
  }
  BattleActorControl__sendEventFSM_22495744(v8, v9, v10, v6);
}


void __fastcall BattleActorControl__sendEventFSM_22495744(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 Fsm; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x22
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v26; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v28; // x8
  __int64 v29; // x9
  int max_length; // w10
  UnityEngine_Object_o *v31; // x22
  struct PlayMakerFSM_array *v32; // x8
  __int64 v33; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v34; // x21
  struct PlayMakerFSM_array *v35; // x8
  __int64 v36; // x9
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_438985B & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&string___TypeInfo);
    sub_B775C4(&StringLiteral_23741/*"weapon"*/);
    sub_B775C4(&StringLiteral_1578/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/);
    sub_B775C4(&StringLiteral_17968/*"common"*/);
    byte_438985B = 1;
  }
  Fsm = sub_B775DC(string___TypeInfo, 2LL);
  if ( !Fsm )
    goto LABEL_38;
  v15 = Fsm;
  Fsm = StringLiteral_23741/*"weapon"*/;
  if ( StringLiteral_23741/*"weapon"*/ )
  {
    Fsm = sub_B77684(StringLiteral_23741/*"weapon"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( !Fsm )
      goto LABEL_39;
    v16 = (System_Int32_array **)StringLiteral_23741/*"weapon"*/;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_37;
  *(_QWORD *)(v15 + 32) = v16;
  sub_B77560((BattleServantConfConponent_o *)(v15 + 32), v16, v9, v10, v11, v12, v13, v14);
  Fsm = StringLiteral_17968/*"common"*/;
  if ( StringLiteral_17968/*"common"*/ )
  {
    Fsm = sub_B77684(StringLiteral_17968/*"common"*/, *(_QWORD *)(*(_QWORD *)v15 + 64LL));
    if ( Fsm )
    {
      v23 = (System_Int32_array **)StringLiteral_17968/*"common"*/;
      goto LABEL_13;
    }
LABEL_39:
    v38 = sub_B776BC();
    sub_B77668(v38, 0LL);
  }
  v23 = 0LL;
LABEL_13:
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_37;
  *(_QWORD *)(v15 + 40) = v23;
  sub_B77560((BattleServantConfConponent_o *)(v15 + 40), v23, v17, v18, v19, v20, v21, v22);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v15 + 24) )
    goto LABEL_37;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_38;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_37;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_38;
  v26 = *(Il2CppObject **)(v15 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_44903000(
                   (System_String_o *)StringLiteral_1578/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v26,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v28 = this->fields.motionFSM;
  if ( v28 )
  {
    v29 = this->fields.actindex;
    max_length = v28->max_length;
    if ( (int)v29 < max_length )
    {
      if ( (unsigned int)v29 >= max_length )
        goto LABEL_37;
      v31 = (UnityEngine_Object_o *)v28->m_Items[v29];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Fsm = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v8);
          v32 = this->fields.motionFSM;
          if ( !v32 )
            goto LABEL_38;
          v33 = this->fields.actindex;
          if ( (unsigned int)v33 >= v32->max_length )
            goto LABEL_37;
          v34 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v32->m_Items[v33];
          if ( !Fsm )
            goto LABEL_38;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_38;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v34 )
            goto LABEL_38;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v34, (System_String_o *)Fsm, 0LL);
        }
        v35 = this->fields.motionFSM;
        if ( !v35 )
          goto LABEL_38;
        v36 = this->fields.actindex;
        if ( (unsigned int)v36 < v35->max_length )
        {
          Fsm = (__int64)v35->m_Items[v36];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_38:
          sub_B7769C(Fsm, v8);
        }
LABEL_37:
        v37 = sub_B776C8(Fsm);
        sub_B77668(v37, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__sendMotionEventFSM(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  v7 = BattleActorControl__checkMotionEvent(this, name, (const MethodInfo *)isCallFinishInterrupt);
  if ( !this )
    sub_B7769C(v7, v8);
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_22495744(this, name, isCallFinishInterrupt, v9);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_22495744(this, name, 0, v3);
}


void __fastcall BattleActorControl__setActionData(
        BattleActorControl_o *this,
        BattleActionData_o *actiondata,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  BattleActorControl_o *v6; // x21
  struct PlayMakerFSM_array *v7; // x8
  struct PlayMakerFSM_array *v8; // x8
  struct PlayMakerFSM_array *v9; // x8
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x21
  const MethodInfo *v11; // x1
  struct PlayMakerFSM_array *v12; // x8
  struct PlayMakerFSM_array *v13; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_4389853 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_4542/*"Count_Action"*/);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_4543/*"Count_Hit"*/);
    byte_4389853 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_43;
  if ( !motionFSM->max_length )
    goto LABEL_44;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4542/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_43;
  v6 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(
                                   actiondata,
                                   (const MethodInfo *)actiondata);
  if ( !v6 )
    goto LABEL_43;
  LODWORD(v6->fields.specialShadowObj) = (_DWORD)this;
  v7 = v4->fields.motionFSM;
  if ( !v7 )
    goto LABEL_43;
  if ( !v7->max_length )
    goto LABEL_44;
  this = (BattleActorControl_o *)v7->m_Items[0];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4543/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.specialShadowObj) = actiondata->fields.attackcount;
  v8 = v4->fields.motionFSM;
  if ( !v8 )
    goto LABEL_43;
  if ( v8->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v8->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField) == 0LL )
  {
LABEL_43:
    sub_B7769C(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4542/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v9 = v4->fields.motionFSM;
    if ( !v9 )
      goto LABEL_43;
    if ( v9->max_length <= 1 )
      goto LABEL_44;
    this = (BattleActorControl_o *)v9->m_Items[1];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
    if ( !this )
      goto LABEL_43;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4542/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, v11);
    if ( !FsmInt )
      goto LABEL_43;
    FsmInt->fields.value = (int)this;
  }
  v12 = v4->fields.motionFSM;
  if ( !v12 )
    goto LABEL_43;
  if ( v12->max_length <= 1 )
  {
LABEL_44:
    v14 = sub_B776C8(this);
    sub_B77668(v14, 0LL);
  }
  this = (BattleActorControl_o *)v12->m_Items[1];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4543/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v13 = v4->fields.motionFSM;
  if ( !v13 )
    goto LABEL_43;
  if ( v13->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v13->m_Items[1];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4543/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.specialShadowObj) = actiondata->fields.attackcount;
}


void __fastcall BattleActorControl__setAddAura(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v5; // x2

  if ( !svtdata )
    sub_B7769C(this, 0LL);
  AuraIdList = BattleServantData__getAuraIdList(svtdata, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v5);
}


void __fastcall BattleActorControl__setAnimationComplete(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *CompleteList; // x0

  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr,
          method) & 1) != 0 )
  {
    CompleteList = this->fields.CompleteList;
    if ( !CompleteList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._39_Remove.method)(
      CompleteList,
      name,
      CompleteList->klass->vtable._40_get_SyncRoot.methodPtr);
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
LABEL_7:
    sub_B7769C(CompleteList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))CompleteList->klass->vtable._23_Add.method)(
    CompleteList,
    name,
    ec,
    CompleteList->klass->vtable._24_Clear.methodPtr);
}


void __fastcall BattleActorControl__setAnimationEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))EventList->klass->vtable._26_Contains.method)(
          EventList,
          name,
          EventList->klass->vtable._27_ContainsKey.methodPtr,
          method) & 1) != 0 )
  {
    EventList = this->fields.EventList;
    if ( !EventList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._39_Remove.method)(
      EventList,
      name,
      EventList->klass->vtable._40_get_SyncRoot.methodPtr);
  }
  EventList = this->fields.EventList;
  if ( !EventList )
LABEL_7:
    sub_B7769C(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))EventList->klass->vtable._23_Add.method)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._24_Clear.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setAuraFlip(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *auraList; // x0
  bool v6; // w19
  Il2CppObject *currentValue; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_43898B6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_43898B6 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          auraList,
          (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values((System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)auraList, (const MethodInfo_2FF3F1C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_B7769C(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_2648B20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
         &v9,
         (const MethodInfo_2889594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v6 = flg;
    do
    {
      currentValue = v9.fields.currentValue;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL);
      if ( ((unsigned __int8)auraList & 1) == 0 )
      {
        if ( !currentValue )
          goto LABEL_22;
        Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                            (UnityEngine_GameObject_o *)currentValue,
                                                            (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL);
        if ( ((unsigned __int8)auraList & 1) != 0 )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_22;
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, v6, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v9,
              (const MethodInfo_2889594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void __fastcall BattleActorControl__setCamera(
        BattleActorControl_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_438984E & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_438984E = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_B7769C(gameObject, v6);
  }
  *((_QWORD *)gameObject + 3) = camera;
  sub_B77560(
    (BattleServantConfConponent_o *)(gameObject + 24),
    (System_Int32_array **)camera,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


void __fastcall BattleActorControl__setCriteriaPos(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *tr,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  unsigned int position; // s8
  float y; // s9
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438985D & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438985D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tr, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( gameObject )
      {
        position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( gameObject )
          {
            v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
            y = v10.fields.y;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
              if ( gameObject )
              {
                tr = (UnityEngine_Transform_o *)gameObject;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_17:
    sub_B7769C(gameObject, v6);
  }
  if ( !tr )
    goto LABEL_17;
  position = (unsigned int)UnityEngine_Transform__get_position(tr, 0LL);
  v9 = UnityEngine_Transform__get_position(tr, 0LL);
  y = v9.fields.y;
LABEL_16:
  v11 = UnityEngine_Transform__get_position(tr, 0LL);
  LODWORD(this->fields.criteriaPos.fields.x) = position;
  this->fields.criteriaPos.fields.y = y;
  this->fields.criteriaPos.fields.z = v11.fields.z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDir(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t dir; // w8
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  float v10; // s0
  float scale; // s1
  float v12; // s2
  UnityEngine_Transform_o *transform; // x20
  int v14; // s0

  dir = this->fields.dir;
  if ( !dir )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      *(UnityEngine_Quaternion_o *)&v14 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v14, 0LL);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
          if ( actorObject )
          {
            scale = this->fields.scale;
            v10 = -scale;
            v12 = scale;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_15:
    sub_B7769C(actorObject, method);
  }
  if ( dir == 1 )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      v5 = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Euler(0.0, 90.0, 0.0, 0LL);
      if ( v5 )
      {
        UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
          if ( actorObject )
          {
            v10 = this->fields.scale;
            scale = v10;
            v12 = v10;
LABEL_13:
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)actorObject,
              *(UnityEngine_Vector3_o *)&v10,
              0LL);
            return;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDirLeft(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject
    || (transform = UnityEngine_GameObject__get_transform(actorObject, 0LL),
        *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Quaternion__Euler(0.0, 90.0, 0.0, 0LL),
        !transform)
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v5, 0LL),
        (actorObject = this->fields.actorObject) == 0LL)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL)) == 0LL )
  {
    sub_B7769C(actorObject, method);
  }
  v9.fields.x = this->fields.scale;
  v9.fields.y = v9.fields.x;
  v9.fields.z = v9.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v9, 0LL);
  this->fields.dir = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDirRight(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject
    || (transform = UnityEngine_GameObject__get_transform(actorObject, 0LL),
        *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL),
        !transform)
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v5, 0LL),
        (actorObject = this->fields.actorObject) == 0LL)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL)) == 0LL )
  {
    sub_B7769C(actorObject, method);
  }
  v9.fields.y = this->fields.scale;
  v9.fields.x = -v9.fields.y;
  v9.fields.z = v9.fields.y;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v9, 0LL);
  this->fields.dir = 0;
}


void __fastcall BattleActorControl__setEnemyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.enemyStage = obj;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.enemyStage,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__setID(BattleActorControl_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.uniqueID = id;
}


void __fastcall BattleActorControl__setInitActionBattle(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActorControl__setCriteriaPos(this, 0LL, v2);
}


void __fastcall BattleActorControl__setLimitedPeriod(BattleActorControl_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1
  int v6; // w20
  unsigned __int64 i; // x9
  struct PlayMakerFSM_array *v8; // x8
  unsigned __int64 v9; // x24
  UnityEngine_Object_o *v10; // x21
  struct PlayMakerFSM_array *v11; // x8
  struct PlayMakerFSM_array *v12; // x8
  __int64 v13; // x0

  if ( (byte_4389852 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_8685/*"LimitedPeriod"*/);
    sub_B775C4(&StringLiteral_8534/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4389852 = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8534/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                           0LL);
      v6 = (int)Master_WarQuestSelectionMaster;
      for ( i = 0LL; ; i = 1LL )
      {
        v8 = this->fields.motionFSM;
        if ( !v8 )
          break;
        v9 = i;
        if ( i >= v8->max_length )
          goto LABEL_32;
        v10 = (UnityEngine_Object_o *)v8->m_Items[i];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          v11 = this->fields.motionFSM;
          if ( !v11 )
            break;
          if ( v9 >= v11->max_length )
            goto LABEL_32;
          Master_WarQuestSelectionMaster = v11->m_Items[v9];
          if ( !Master_WarQuestSelectionMaster )
            break;
          Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Master_WarQuestSelectionMaster, 0LL);
          if ( !Master_WarQuestSelectionMaster )
            break;
          Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)Master_WarQuestSelectionMaster[1].fields.fsmTemplate;
          if ( !Master_WarQuestSelectionMaster )
            break;
          Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                               (HutongGames_PlayMaker_FsmVariables_o *)Master_WarQuestSelectionMaster,
                                                               (System_String_o *)StringLiteral_8685/*"LimitedPeriod"*/,
                                                               0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            v12 = this->fields.motionFSM;
            if ( !v12 )
              break;
            if ( v9 >= v12->max_length )
            {
LABEL_32:
              v13 = sub_B776C8(Master_WarQuestSelectionMaster);
              sub_B77668(v13, 0LL);
            }
            Master_WarQuestSelectionMaster = v12->m_Items[v9];
            if ( !Master_WarQuestSelectionMaster )
              break;
            Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(
                                                                 Master_WarQuestSelectionMaster,
                                                                 0LL);
            if ( !Master_WarQuestSelectionMaster )
              break;
            Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)Master_WarQuestSelectionMaster[1].fields.fsmTemplate;
            if ( !Master_WarQuestSelectionMaster )
              break;
            Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                                 (HutongGames_PlayMaker_FsmVariables_o *)Master_WarQuestSelectionMaster,
                                                                 (System_String_o *)StringLiteral_8685/*"LimitedPeriod"*/,
                                                                 0LL);
            if ( !Master_WarQuestSelectionMaster )
              break;
            LODWORD(Master_WarQuestSelectionMaster[1].klass) = v6;
          }
        }
        if ( v9 )
          return;
      }
    }
    sub_B7769C(Master_WarQuestSelectionMaster, v5);
  }
}


void __fastcall BattleActorControl__setMotionListForDemo(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        UnityEngine_GameObject_o *commonMotionPrefab,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *v11; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 gameObject; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v22; // x4
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v24; // x25
  int32_t v25; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v27; // x26
  struct PlayMakerFSM_array *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x26
  struct PlayMakerFSM_array *v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x24
  unsigned int v44; // w8
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v46; // x9
  unsigned int v47; // w26
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct PlayMakerFSM_array *v56; // x8
  struct PlayMakerFSM_array *v57; // x8
  struct PlayMakerFSM_array *v58; // x8
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  struct PlayMakerFSM_array *v65; // x8
  struct PlayMakerFSM_array *v66; // x8
  char v67; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v70; // x8
  struct BattlePerformance_o *v71; // x8
  struct PlayMakerFSM_array *v72; // x8
  struct BattlePerformance_o *v73; // x8
  System_String_o *StrParam; // x20
  struct PlayMakerFSM_array *v75; // x8
  PlayMakerFSM_o *v76; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v80; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v83; // x1
  struct PlayMakerFSM_array *v84; // x8
  PlayMakerFSM_o *v85; // x0
  HutongGames_PlayMaker_Fsm_o *v86; // x0
  __int64 v87; // x1
  HutongGames_PlayMaker_FsmVariables_o *v88; // x0
  HutongGames_PlayMaker_FsmInt_o *v89; // x0
  __int64 v90; // x1
  _BOOL8 v91; // x0
  __int64 v92; // x1
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v97; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v98; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4389851 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B775C4(&PlayMakerFSM___TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&StringLiteral_13825/*"TargetFrontPos"*/);
    sub_B775C4(&StringLiteral_13824/*"TargetBackPos"*/);
    sub_B775C4(&StringLiteral_3598/*"Camera"*/);
    sub_B775C4(&StringLiteral_1909/*"ActorObject"*/);
    sub_B775C4(&StringLiteral_16262/*"_ENEMY"*/);
    sub_B775C4(&StringLiteral_3604/*"CameraFsm"*/);
    sub_B775C4(&StringLiteral_10836/*"Performance"*/);
    sub_B775C4(&StringLiteral_1910/*"ActorSide"*/);
    byte_4389851 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  v11 = (struct PlayMakerFSM_array *)sub_B775DC(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v11;
  p_motionFSM = &this->fields.motionFSM;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)transform, commonMotionPrefab, transform, 0LL, v22);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v24 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v25 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v24, v25, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  v27 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v28 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v27,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v28 )
    goto LABEL_107;
  v35 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B77684(gameObject, v28->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_122;
  }
  if ( !v28->max_length )
    goto LABEL_108;
  v28->m_Items[0] = (PlayMakerFSM_o *)v35;
  sub_B77560((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
  if ( !Object )
    goto LABEL_107;
  v36 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          Object,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v36 )
    goto LABEL_107;
  v43 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B77684(gameObject, v36->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_122:
      v96 = sub_B776BC();
      sub_B77668(v96, 0LL);
    }
  }
  if ( v36->max_length <= 1 )
  {
LABEL_108:
    v93 = sub_B776C8(gameObject);
    sub_B77668(v93, 0LL);
  }
  v36->m_Items[1] = (PlayMakerFSM_o *)v43;
  sub_B77560((BattleServantConfConponent_o *)&v36->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
  v44 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v46 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v47 = v44;
    if ( v44 >= v46->max_length )
      goto LABEL_108;
    gameObject = (__int64)v46->m_Items[v44];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_1909/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v49 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v47 >= v49->max_length )
      goto LABEL_108;
    gameObject = (__int64)v49->m_Items[v47];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_1910/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    *(_QWORD *)(gameObject + 56) = side;
    sub_B77560(
      (BattleServantConfConponent_o *)(gameObject + 56),
      (System_Int32_array **)side,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v56 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v47 >= v56->max_length )
      goto LABEL_108;
    gameObject = (__int64)v56->m_Items[v47];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3598/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v57 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v47 >= v57->max_length )
      goto LABEL_108;
    gameObject = (__int64)v57->m_Items[v47];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3604/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v47 >= v58->max_length )
      goto LABEL_108;
    gameObject = (__int64)v58->m_Items[v47];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10836/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
    v65 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v47 >= v65->max_length )
      goto LABEL_108;
    gameObject = (__int64)v65->m_Items[v47];
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_107;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13825/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_107;
      gameObject = System_String__Equals_44889276(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16262/*"_ENEMY"*/,
                     0LL);
      v66 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v47 >= v66->max_length )
        goto LABEL_108;
      v67 = gameObject;
      gameObject = (__int64)v66->m_Items[v47];
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_107;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_107;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13825/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_107;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v67 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v70 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v47 >= v70->max_length )
          goto LABEL_108;
        gameObject = (__int64)v70->m_Items[v47];
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13824/*"TargetBackPos"*/,
                                0LL);
        v71 = this->fields.performance;
        if ( !v71 || !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = v71->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v72 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v47 >= v72->max_length )
          goto LABEL_108;
        gameObject = (__int64)v72->m_Items[v47];
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_107;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13824/*"TargetBackPos"*/,
                                0LL);
        v73 = this->fields.performance;
        if ( !v73 || !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -v73->fields.distanceofactor;
      }
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v44 = 1;
  }
  while ( !v47 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_107:
    sub_B7769C(gameObject, v20);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v97,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)gameObject,
    (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v98 = v97;
  while ( 1 )
  {
    v91 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v98,
            (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v91 )
      break;
    v75 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B7769C(v91, v92);
    if ( !v75->max_length )
    {
      v94 = sub_B776C8(v91);
      sub_B77668(v94, 0LL);
    }
    v76 = v75->m_Items[0];
    if ( !v76 )
      sub_B7769C(0LL, v92);
    key = v98.fields.current.fields.key;
    value = v98.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v76, 0LL);
    if ( !Fsm )
      sub_B7769C(0LL, v80);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B7769C(0LL, v80);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v84 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B7769C(FsmInt, v83);
      if ( !v84->max_length )
      {
        v95 = sub_B776C8(FsmInt);
        sub_B77668(v95, 0LL);
      }
      v85 = v84->m_Items[0];
      if ( !v85 )
        sub_B7769C(0LL, v83);
      v86 = PlayMakerFSM__get_Fsm(v85, 0LL);
      if ( !v86 )
        sub_B7769C(0LL, v87);
      v88 = v86->fields.variables;
      if ( !v88 )
        sub_B7769C(0LL, v87);
      v89 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v88, (System_String_o *)key, 0LL);
      if ( !v89 )
        sub_B7769C(0LL, v90);
      if ( !value )
        sub_B7769C(v89, v90);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_B77990(value);
        goto LABEL_122;
      }
      v89->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v98,
    (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
}


void __fastcall BattleActorControl__setMotionlist(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *v9; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 gameObject; // x0
  __int64 v18; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo *v22; // x4
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v24; // x25
  int32_t v25; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v27; // x26
  struct PlayMakerFSM_array *v28; // x25
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x26
  struct PlayMakerFSM_array *v36; // x25
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x24
  unsigned int v44; // w8
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v46; // x9
  unsigned int v47; // w26
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v49; // x8
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct PlayMakerFSM_array *v56; // x8
  struct PlayMakerFSM_array *v57; // x8
  struct PlayMakerFSM_array *v58; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v59; // x25
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  struct PlayMakerFSM_array *v66; // x8
  struct PlayMakerFSM_array *v67; // x8
  char v68; // w25
  struct BattlePerformance_o *v69; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v71; // x8
  struct BattlePerformance_o *v72; // x8
  struct PlayMakerFSM_array *v73; // x8
  struct BattlePerformance_o *v74; // x8
  System_String_o *StrParam; // x21
  struct PlayMakerFSM_array *v76; // x8
  PlayMakerFSM_o *v77; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v81; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v84; // x1
  struct PlayMakerFSM_array *v85; // x8
  PlayMakerFSM_o *v86; // x0
  HutongGames_PlayMaker_Fsm_o *v87; // x0
  __int64 v88; // x1
  HutongGames_PlayMaker_FsmVariables_o *v89; // x0
  HutongGames_PlayMaker_FsmInt_o *v90; // x0
  __int64 v91; // x1
  _BOOL8 v92; // x0
  __int64 v93; // x1
  const MethodInfo *v94; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  const MethodInfo *v102; // x1
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x0
  __int64 v106; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v107; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v108; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_438984F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B775C4(&PlayMakerFSM___TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&StringLiteral_13825/*"TargetFrontPos"*/);
    sub_B775C4(&StringLiteral_13824/*"TargetBackPos"*/);
    sub_B775C4(&StringLiteral_3598/*"Camera"*/);
    sub_B775C4(&StringLiteral_1909/*"ActorObject"*/);
    sub_B775C4(&StringLiteral_16262/*"_ENEMY"*/);
    sub_B775C4(&StringLiteral_3604/*"CameraFsm"*/);
    sub_B775C4(&StringLiteral_10836/*"Performance"*/);
    sub_B775C4(&StringLiteral_1910/*"ActorSide"*/);
    byte_438984F = 1;
  }
  memset(&v108, 0, sizeof(v108));
  v9 = (struct PlayMakerFSM_array *)sub_B775DC(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v9;
  p_motionFSM = &this->fields.motionFSM;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_109;
  commonMotionPrefab = performance->fields.commonMotionPrefab;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)transform, commonMotionPrefab, transform, 0LL, v22);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v24 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v25 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v24, v25, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  v27 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v28 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v27,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v28 )
    goto LABEL_109;
  v35 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B77684(gameObject, v28->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_124;
  }
  if ( !v28->max_length )
    goto LABEL_110;
  v28->m_Items[0] = (PlayMakerFSM_o *)v35;
  sub_B77560((BattleServantConfConponent_o *)v28->m_Items, v35, v29, v30, v31, v32, v33, v34);
  if ( !Object )
    goto LABEL_109;
  v36 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          Object,
                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v36 )
    goto LABEL_109;
  v43 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B77684(gameObject, v36->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_124:
      v106 = sub_B776BC();
      sub_B77668(v106, 0LL);
    }
  }
  if ( v36->max_length <= 1 )
  {
LABEL_110:
    v103 = sub_B776C8(gameObject);
    sub_B77668(v103, 0LL);
  }
  v36->m_Items[1] = (PlayMakerFSM_o *)v43;
  sub_B77560((BattleServantConfConponent_o *)&v36->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
  v44 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v46 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    v47 = v44;
    if ( v44 >= v46->max_length )
      goto LABEL_110;
    gameObject = (__int64)v46->m_Items[v44];
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_109;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_1909/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v49 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v47 >= v49->max_length )
      goto LABEL_110;
    gameObject = (__int64)v49->m_Items[v47];
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_1910/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    *(_QWORD *)(gameObject + 56) = side;
    sub_B77560(
      (BattleServantConfConponent_o *)(gameObject + 56),
      (System_Int32_array **)side,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
    v56 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v47 >= v56->max_length )
      goto LABEL_110;
    gameObject = (__int64)v56->m_Items[v47];
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3598/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v57 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v47 >= v57->max_length )
      goto LABEL_110;
    gameObject = (__int64)v57->m_Items[v47];
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3604/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v47 >= v58->max_length )
      goto LABEL_110;
    gameObject = (__int64)v58->m_Items[v47];
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10836/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_109;
    v59 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v59 )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v59, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65);
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v47 >= v66->max_length )
      goto LABEL_110;
    gameObject = (__int64)v66->m_Items[v47];
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_109;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13825/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_109;
      gameObject = System_String__Equals_44889276(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16262/*"_ENEMY"*/,
                     0LL);
      v67 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_109;
      if ( v47 >= v67->max_length )
        goto LABEL_110;
      v68 = gameObject;
      gameObject = (__int64)v67->m_Items[v47];
      if ( !gameObject )
        goto LABEL_109;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_109;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_109;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13825/*"TargetFrontPos"*/,
                              0LL);
      v69 = this->fields.performance;
      if ( !v69 )
        goto LABEL_109;
      distanceofactor = v69->fields.distanceofactor;
      if ( (v68 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v71 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v47 >= v71->max_length )
          goto LABEL_110;
        gameObject = (__int64)v71->m_Items[v47];
        if ( !gameObject )
          goto LABEL_109;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_109;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_109;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13824/*"TargetBackPos"*/,
                                0LL);
        v72 = this->fields.performance;
        if ( !v72 || !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = v72->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v73 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v47 >= v73->max_length )
          goto LABEL_110;
        gameObject = (__int64)v73->m_Items[v47];
        if ( !gameObject )
          goto LABEL_109;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_109;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_109;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13824/*"TargetBackPos"*/,
                                0LL);
        v74 = this->fields.performance;
        if ( !v74 || !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = -v74->fields.distanceofactor;
      }
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v44 = 1;
  }
  while ( !v47 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_109;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_109:
    sub_B7769C(gameObject, v18);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v107,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)gameObject,
    (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v108 = v107;
  while ( 1 )
  {
    v92 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v108,
            (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v92 )
      break;
    v76 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B7769C(v92, v93);
    if ( !v76->max_length )
    {
      v104 = sub_B776C8(v92);
      sub_B77668(v104, 0LL);
    }
    v77 = v76->m_Items[0];
    if ( !v77 )
      sub_B7769C(0LL, v93);
    key = v108.fields.current.fields.key;
    value = v108.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v77, 0LL);
    if ( !Fsm )
      sub_B7769C(0LL, v81);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B7769C(0LL, v81);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v85 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B7769C(FsmInt, v84);
      if ( !v85->max_length )
      {
        v105 = sub_B776C8(FsmInt);
        sub_B77668(v105, 0LL);
      }
      v86 = v85->m_Items[0];
      if ( !v86 )
        sub_B7769C(0LL, v84);
      v87 = PlayMakerFSM__get_Fsm(v86, 0LL);
      if ( !v87 )
        sub_B7769C(0LL, v88);
      v89 = v87->fields.variables;
      if ( !v89 )
        sub_B7769C(0LL, v88);
      v90 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v89, (System_String_o *)key, 0LL);
      if ( !v90 )
        sub_B7769C(0LL, v91);
      if ( !value )
        sub_B7769C(v90, v91);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_B77990(value);
        goto LABEL_124;
      }
      v90->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v108,
    (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v94);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (System_Int32_array **)DelayEndSequenceIdListFromMotion,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  BattleActorControl__setLimitedPeriod(this, v102);
}


void __fastcall BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.myStage = obj;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.myStage,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setNpDamageVoice(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  bool v8; // w22
  UnityEngine_Object_o *v9; // x19
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x19
  __int64 v11; // x0

  v4 = this;
  if ( (byte_4389871 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_9774/*"Noble_Check"*/);
    byte_4389871 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B7769C(this, flg);
  v6 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = flg;
    do
    {
      if ( v7 >= (unsigned int)v6 )
      {
        v11 = sub_B776C8(this);
        sub_B77668(v11, 0LL);
      }
      v9 = (UnityEngine_Object_o *)motionFSM->m_Items[v7];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_19;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v9, 0LL);
        if ( !this )
          goto LABEL_19;
        BuffEffectNodeName_k__BackingField = this->fields._BuffEffectNodeName_k__BackingField;
        if ( BuffEffectNodeName_k__BackingField )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this->fields._BuffEffectNodeName_k__BackingField,
                                           (System_String_o *)StringLiteral_9774/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)BuffEffectNodeName_k__BackingField,
                                             (System_String_o *)StringLiteral_9774/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_19;
            LOBYTE(this->fields.specialShadowObj) = v8;
          }
        }
      }
      LODWORD(v6) = motionFSM->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)v6 );
  }
}


void __fastcall BattleActorControl__setPerformance(
        BattleActorControl_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.performance = perf;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.performance,
    (System_Int32_array **)perf,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setReloadWeaponMotion(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  UnityEngine_GameObject_o *v5; // x20
  int32_t v6; // w21
  int32_t WeaponGroup; // w22
  UnityEngine_GameObject_o *v8; // x21
  struct PlayMakerFSM_array *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Int32_array **v16; // x21
  struct PlayMakerFSM_array *v17; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v18; // x20
  struct PlayMakerFSM_array *v19; // x8
  struct PlayMakerFSM_array *v20; // x8
  BattleActorControl_o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct PlayMakerFSM_array *v28; // x8
  struct PlayMakerFSM_array *v29; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v30; // x20
  struct PlayMakerFSM_array *v31; // x8
  struct PlayMakerFSM_array *v32; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v33; // x20
  struct PlayMakerFSM_array *v34; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v35; // x20
  struct PlayMakerFSM_array *v36; // x8
  struct PlayMakerFSM_array *v37; // x8
  char v38; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v41; // x8
  struct BattlePerformance_o *v42; // x8
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v45; // x1
  struct PlayMakerFSM_array *v46; // x8
  struct BattlePerformance_o *v47; // x8
  System_String_o *StrParam; // x20
  struct PlayMakerFSM_array *v49; // x8
  PlayMakerFSM_o *v50; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v54; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v57; // x1
  struct PlayMakerFSM_array *v58; // x8
  PlayMakerFSM_o *v59; // x0
  HutongGames_PlayMaker_Fsm_o *v60; // x0
  __int64 v61; // x1
  HutongGames_PlayMaker_FsmVariables_o *v62; // x0
  HutongGames_PlayMaker_FsmInt_o *v63; // x0
  __int64 v64; // x1
  _BOOL8 v65; // x0
  __int64 v66; // x1
  const MethodInfo *v67; // x1
  System_Int32_array **DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v80; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4389850 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_B775C4(&long_TypeInfo);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&StringLiteral_13825/*"TargetFrontPos"*/);
    sub_B775C4(&StringLiteral_13824/*"TargetBackPos"*/);
    sub_B775C4(&StringLiteral_3598/*"Camera"*/);
    sub_B775C4(&StringLiteral_1909/*"ActorObject"*/);
    sub_B775C4(&StringLiteral_16262/*"_ENEMY"*/);
    sub_B775C4(&StringLiteral_3604/*"CameraFsm"*/);
    sub_B775C4(&StringLiteral_10836/*"Performance"*/);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_1910/*"ActorSide"*/);
    byte_4389850 = 1;
  }
  memset(&v80, 0, sizeof(v80));
  if ( !flg )
  {
    motionFSM = v4->fields.motionFSM;
    if ( motionFSM )
    {
      if ( !motionFSM->max_length )
        goto LABEL_141;
      this = (BattleActorControl_o *)motionFSM->m_Items[0];
      if ( this )
      {
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
        if ( this )
        {
          this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
          if ( this )
          {
            FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                              (HutongGames_PlayMaker_FsmVariables_o *)this,
                              (System_String_o *)StringLiteral_1909/*"ActorObject"*/,
                              0LL);
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
            if ( FsmGameObject )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)this, 0LL);
              goto LABEL_126;
            }
          }
        }
      }
    }
    goto LABEL_127;
  }
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_127;
  v5 = (UnityEngine_GameObject_o *)this;
  this = (BattleActorControl_o *)BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_127;
  v6 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(v4->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(v5, v6, WeaponGroup, 0LL);
  if ( !this )
    goto LABEL_127;
  v8 = (UnityEngine_GameObject_o *)this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v8,
                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v9 )
    goto LABEL_127;
  v16 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_B77684(this, v9->obj.klass->_1.element_class);
    if ( !this )
    {
      v78 = sub_B776BC();
      sub_B77668(v78, 0LL);
    }
  }
  if ( !v9->max_length )
  {
LABEL_141:
    v77 = sub_B776C8(this);
    sub_B77668(v77, 0LL);
  }
  v9->m_Items[0] = (PlayMakerFSM_o *)v16;
  sub_B77560((BattleServantConfConponent_o *)v9->m_Items, v16, v10, v11, v12, v13, v14, v15);
  v17 = v4->fields.motionFSM;
  if ( !v17 )
    goto LABEL_127;
  if ( !v17->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  v18 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_1909/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v18 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v18, (UnityEngine_GameObject_o *)this, 0LL);
  v19 = v4->fields.motionFSM;
  if ( !v19 )
    goto LABEL_127;
  if ( !v19->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v19->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_1910/*"ActorSide"*/,
                                   0LL);
  v20 = v4->fields.motionFSM;
  if ( !v20 )
    goto LABEL_127;
  if ( v20->max_length <= 1 )
    goto LABEL_141;
  v21 = this;
  this = (BattleActorControl_o *)v20->m_Items[1];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_1910/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v21 )
    goto LABEL_127;
  v21->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)this;
  sub_B77560(
    (BattleServantConfConponent_o *)&v21->fields.specialShadowObj,
    (System_Int32_array **)this,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  v28 = v4->fields.motionFSM;
  if ( !v28 )
    goto LABEL_127;
  if ( !v28->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v28->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3598/*"Camera"*/,
                                   0LL);
  v29 = v4->fields.motionFSM;
  if ( !v29 )
    goto LABEL_127;
  if ( v29->max_length <= 1 )
    goto LABEL_141;
  v30 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)v29->m_Items[1];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3598/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v30 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v30, (UnityEngine_GameObject_o *)this, 0LL);
  v31 = v4->fields.motionFSM;
  if ( !v31 )
    goto LABEL_127;
  if ( !v31->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v31->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3604/*"CameraFsm"*/,
                                   0LL);
  v32 = v4->fields.motionFSM;
  if ( !v32 )
    goto LABEL_127;
  if ( v32->max_length <= 1 )
    goto LABEL_141;
  v33 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)v32->m_Items[1];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3604/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v33 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v33, (UnityEngine_GameObject_o *)this, 0LL);
  v34 = v4->fields.motionFSM;
  if ( !v34 )
    goto LABEL_127;
  if ( !v34->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v34->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_10836/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_127;
  v35 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v35 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v35, (UnityEngine_GameObject_o *)this, 0LL);
  v36 = v4->fields.motionFSM;
  if ( !v36 )
    goto LABEL_127;
  if ( !v36->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v36->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
         (HutongGames_PlayMaker_FsmVariables_o *)this,
         (System_String_o *)StringLiteral_13825/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( this )
    {
      this = (BattleActorControl_o *)System_String__Equals_44889276(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_16262/*"_ENEMY"*/,
                                       0LL);
      v37 = v4->fields.motionFSM;
      if ( v37 )
      {
        if ( !v37->max_length )
          goto LABEL_141;
        v38 = (char)this;
        this = (BattleActorControl_o *)v37->m_Items[0];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( this )
          {
            this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13825/*"TargetFrontPos"*/,
                                               0LL);
              performance = v4->fields.performance;
              if ( performance )
              {
                distanceofactor = performance->fields.distanceofactor;
                if ( (v38 & 1) != 0 )
                {
                  if ( this )
                  {
                    *(float *)&this->fields.specialShadowObj = -distanceofactor;
                    HIDWORD(this->fields.specialShadowObj) = 0;
                    this->fields.currentSpShadowEffectId = 0;
                    v41 = v4->fields.motionFSM;
                    if ( v41 )
                    {
                      if ( !v41->max_length )
                        goto LABEL_141;
                      this = (BattleActorControl_o *)v41->m_Items[0];
                      if ( this )
                      {
                        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
                        if ( this )
                        {
                          this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
                          if ( this )
                          {
                            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                                             (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                             (System_String_o *)StringLiteral_13824/*"TargetBackPos"*/,
                                                             0LL);
                            v42 = v4->fields.performance;
                            if ( v42 )
                            {
                              if ( this )
                              {
                                *(float *)&this->fields.specialShadowObj = v42->fields.distanceofactor;
LABEL_102:
                                HIDWORD(this->fields.specialShadowObj) = 0;
                                this->fields.currentSpShadowEffectId = 0;
                                goto LABEL_103;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else if ( this )
                {
                  *(float *)&this->fields.specialShadowObj = distanceofactor;
                  HIDWORD(this->fields.specialShadowObj) = 0;
                  this->fields.currentSpShadowEffectId = 0;
                  v46 = v4->fields.motionFSM;
                  if ( v46 )
                  {
                    if ( !v46->max_length )
                      goto LABEL_141;
                    this = (BattleActorControl_o *)v46->m_Items[0];
                    if ( this )
                    {
                      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
                      if ( this )
                      {
                        this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
                        if ( this )
                        {
                          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                           (System_String_o *)StringLiteral_13824/*"TargetBackPos"*/,
                                                           0LL);
                          v47 = v4->fields.performance;
                          if ( v47 )
                          {
                            if ( this )
                            {
                              *(float *)&this->fields.specialShadowObj = -v47->fields.distanceofactor;
                              goto LABEL_102;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_127:
    sub_B7769C(this, flg);
  }
LABEL_103:
  this = (BattleActorControl_o *)v4->fields.battleSvtData;
  if ( !this )
    goto LABEL_127;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)this, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BattleActorControl_o *)JsonManager__getDictionary(StrParam, 0LL);
  if ( !this )
    goto LABEL_127;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v79,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
    (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v65 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v80,
            (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v65 )
      break;
    v49 = v4->fields.motionFSM;
    if ( !v49 )
      sub_B7769C(v65, v66);
    if ( !v49->max_length )
    {
      v75 = sub_B776C8(v65);
      sub_B77668(v75, 0LL);
    }
    v50 = v49->m_Items[0];
    if ( !v50 )
      sub_B7769C(0LL, v66);
    key = v80.fields.current.fields.key;
    value = v80.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v50, 0LL);
    if ( !Fsm )
      sub_B7769C(0LL, v54);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B7769C(0LL, v54);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v58 = v4->fields.motionFSM;
      if ( !v58 )
        sub_B7769C(FsmInt, v57);
      if ( !v58->max_length )
      {
        v76 = sub_B776C8(FsmInt);
        sub_B77668(v76, 0LL);
      }
      v59 = v58->m_Items[0];
      if ( !v59 )
        sub_B7769C(0LL, v57);
      v60 = PlayMakerFSM__get_Fsm(v59, 0LL);
      if ( !v60 )
        sub_B7769C(0LL, v61);
      v62 = v60->fields.variables;
      if ( !v62 )
        sub_B7769C(0LL, v61);
      v63 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v62, (System_String_o *)key, 0LL);
      if ( !v63 )
        sub_B7769C(0LL, v64);
      if ( !value )
        sub_B7769C(v63, v64);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        this = (BattleActorControl_o *)sub_B77990(value);
        goto LABEL_141;
      }
      v63->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v80,
    (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = (System_Int32_array **)BattleActorControl__GetDelayEndSequenceIdListFromMotion(
                                                              v4,
                                                              v67);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = (struct System_Collections_Generic_List_int__o *)DelayEndSequenceIdListFromMotion;
  sub_B77560(
    (BattleServantConfConponent_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    DelayEndSequenceIdListFromMotion,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
LABEL_126:
  BattleActorControl__setLimitedPeriod(v4, v45);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v5; // x20
  DataManager_o *Instance; // x0
  struct UnityEngine_GameObject_o *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleServantData_o **p_battleSvtData; // x25
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantData_o *v21; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x21
  __int64 v23; // x20
  __int64 v24; // x22
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x20
  ServantEntity_o *v27; // x26
  struct UnityEngine_Transform_o *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  int32_t v35; // w22
  int v36; // w20
  int32_t v37; // w23
  UnityEngine_GameObject_o *v38; // x21
  int32_t v39; // w24
  _BOOL4 isForceAppearance; // w27
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  UnityEngine_Transform_o *transform; // x20
  int v50; // s0
  const MethodInfo *v53; // x2
  BattlePerformance_o *performance; // x20
  int32_t datalist; // w21
  System_String_o *v56; // x21
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v59; // x27
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_o *HideInAnimNodeName; // x26
  bool v67; // w0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  UnityEngine_Transform_o *v74; // x0
  UnityEngine_Transform_o *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct System_String_o *v82; // x1
  UnityEngine_GameObject_o *v83; // x26
  UnityEngine_Transform_o *v84; // x20
  UnityEngine_Transform_o *v85; // x20
  int v86; // s0
  int32_t v89; // w27
  UnityEngine_Transform_o *v90; // x20
  int v91; // s0
  UnityEngine_Transform_o *v94; // x20
  int v95; // s0
  UnityEngine_Transform_o *v98; // x21
  BattleFBXComponent_o *fbxcomponent; // x20
  _BOOL4 v100; // w20
  const MethodInfo *v101; // x2
  const MethodInfo *v102; // x1
  const MethodInfo *v103; // x3
  int32_t displayType; // w8
  bool v105; // w1
  bool v106; // w2
  System_Collections_Generic_IEnumerable_T__o *v107; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v108; // x21
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  const MethodInfo *v115; // x2
  UnityEngine_Transform_o *v116; // x20
  float v117; // s0
  float v118; // s1
  float v119; // s2
  float actorScale; // s3
  Il2CppObject *v121; // x20
  struct BattlePerformance_o *v122; // x8
  struct BattleData_o *data; // x8
  int32_t v124; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  struct BattleActorControl___c_StaticFields *saveNameList; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__136_0; // x21
  Il2CppObject *v128; // x20
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  UnityEngine_SkinnedMeshRenderer_o *v136; // x25
  UnityEngine_Object_o *Component_srcLineSprite; // x26
  struct BattlePerformance_o *v138; // x8
  bool IsEnemyPosCountNormal; // w27
  UnityEngine_Mesh_o *v140; // x21
  BattlePerformance_o *v141; // x28
  int32_t monitor; // w21
  __int64 v143; // x20
  __int64 v144; // x22
  int32_t v145; // w22
  System_Action_o *v146; // x20
  struct BattlePerformance_o *v147; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 monitor_low; // x9
  UnityEngine_Object_o *Component_WebViewObject; // x21
  struct BattlePerformance_o *v153; // x8
  UnityEngine_Camera_o *actorcamera; // x25
  UnityEngine_Camera_o *uicamera; // x26
  UnityEngine_GameObject_o *v156; // x22
  const MethodInfo *v157; // x1
  int v158; // s0
  iTween_array *Components_iTween; // x0
  System_String_array **v162; // x2
  System_String_array **v163; // x3
  System_Boolean_array **v164; // x4
  System_Int32_array **v165; // x5
  System_Int32_array *v166; // x6
  System_Int32_array *v167; // x7
  const MethodInfo *v168; // x3
  const MethodInfo *v169; // x4
  const MethodInfo *v170; // x1
  __int64 v171; // x0
  int32_t v172; // [xsp+Ch] [xbp-64h]
  BattleServantData_o *v173; // [xsp+10h] [xbp-60h]
  Il2CppObject *object; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v175; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v176; // 0:x0.16
  UnityEngine_Vector3_o v177; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4389845 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_System_Array_IndexOf_int___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
    sub_B775C4(&UnityEngine_GameObject_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
    sub_B775C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___69406352);
    sub_B775C4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    sub_B775C4(&UnityEngine_Mesh_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_System_Predicate_SkinnedMeshRenderer___ctor__);
    sub_B775C4(&System_Predicate_SkinnedMeshRenderer__TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_BattleActorControl___c__setServantData_b__136_0__);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass136_0__setServantData_b__1__);
    sub_B775C4(&BattleActorControl___c__DisplayClass136_0_TypeInfo);
    sub_B775C4(&BattleActorControl___c_TypeInfo);
    sub_B775C4(&StringLiteral_18683/*"en_Head"*/);
    sub_B775C4(&StringLiteral_13073/*"Shadow"*/);
    sub_B775C4(&StringLiteral_18687/*"en_buff01"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_4389845 = 1;
  }
  v5 = sub_B77694(BattleActorControl___c__DisplayClass136_0_TypeInfo);
  BattleActorControl___c__DisplayClass136_0___ctor((BattleActorControl___c__DisplayClass136_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_119;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.battleSvtData,
    (System_Int32_array **)svtdata,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  object = (Il2CppObject *)v5;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v175.fields.currentCryptoKey = v24;
  *(_QWORD *)&v175.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v175, 0LL);
  if ( !v22 )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v22,
             (int32_t)Instance,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v27 = (ServantEntity_o *)Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_119;
    v28 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_13073/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v28;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.shadowObj,
      (System_Int32_array **)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  Instance = (DataManager_o *)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v35 = (int)Instance;
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v36 = (int)Instance;
  v37 = v35 == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v36 : 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_119;
  v38 = (UnityEngine_GameObject_o *)Instance;
  v172 = v35;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v39 = (int)Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v38,
                               v39,
                               v37,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.actorObject,
    (System_Int32_array **)Manager__loadBattleActor,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  *(UnityEngine_Vector3_o *)&v50 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v50, 0LL);
  BattleActorControl__ChangeShadowParent(this, v37, v53);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  performance = this->fields.performance;
  datalist = (int32_t)Instance->fields.datalist;
  Instance = (DataManager_o *)BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_119;
  BattlePerformance__registerCameraAction(performance, datalist, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  v173 = svtdata;
  v56 = (System_String_o *)StringLiteral_18683/*"en_Head"*/;
  v57 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v57, v56, v37, 0, 0LL);
  if ( !Instance )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v59 = gameObject;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.checkScaleNode, 0LL, v60, v61, v62, v63, v64, v65);
  if ( v27 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v27, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v56 )
      goto LABEL_119;
    v67 = System_String__Equals_44889276(v56, HideInAnimNodeName, 0LL);
    v7 = v59;
    if ( !v67 )
    {
      Instance = (DataManager_o *)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_119;
      v74 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v74, HideInAnimNodeName, v37, 0, 0LL);
      if ( !Instance )
        goto LABEL_119;
      v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.checkScaleNode,
      (System_Int32_array **)v7,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
  }
  v75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v82 = TransformHelper__ExistNodeFromLvName(v75, (System_String_o *)StringLiteral_18687/*"en_buff01"*/, -1, 0, 0LL)
      ? (struct System_String_o *)StringLiteral_18687/*"en_buff01"*/
      : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v82;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (System_Int32_array **)v82,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v83 = (UnityEngine_GameObject_o *)sub_B77694(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_41438932(v83, 0LL);
  if ( !v83 )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v83, 0LL);
  if ( !v59 )
    goto LABEL_119;
  v84 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v59, 0LL);
  if ( !v84 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v84, (UnityEngine_Transform_o *)Instance, 0LL);
  v85 = UnityEngine_GameObject__get_transform(v83, 0LL);
  *(UnityEngine_Vector3_o *)&v86 = UnityEngine_Vector3__get_zero(0LL);
  v89 = v35;
  if ( !v85 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v85, *(UnityEngine_Vector3_o *)&v86, 0LL);
  v90 = UnityEngine_GameObject__get_transform(v83, 0LL);
  *(UnityEngine_Vector3_o *)&v91 = UnityEngine_Vector3__get_up(0LL);
  if ( !v90 )
    goto LABEL_119;
  UnityEngine_Transform__set_localEulerAngles(v90, *(UnityEngine_Vector3_o *)&v91, 0LL);
  v94 = UnityEngine_GameObject__get_transform(v83, 0LL);
  *(UnityEngine_Vector3_o *)&v95 = UnityEngine_Vector3__get_one(0LL);
  if ( !v94 )
    goto LABEL_119;
  UnityEngine_Transform__set_localScale(v94, *(UnityEngine_Vector3_o *)&v95, 0LL);
  v98 = UnityEngine_GameObject__get_transform(v83, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v98 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v98, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v83, 0LL);
  if ( !Instance )
    goto LABEL_119;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)v83, 0LL);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  fbxcomponent = this->fields.fbxcomponent;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__set_RootTransform(fbxcomponent, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_119;
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v35, v37, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v100 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Instance = (DataManager_o *)ServantAssetLoadManager__loadAnimEvents(v35, v37, v100, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__loadAnimationEvents(this->fields.fbxcomponent, (UnityEngine_TextAsset_o *)Instance, v35, v37, 0LL);
  BattleActorControl__InitAnimationEffect(this, v37, v101);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v105 = displayType == 2;
      v106 = displayType == 3;
    }
    else
    {
      v105 = 0;
      v106 = 0;
    }
    BattleActorControl__SetDispServant(this, v105, v106, v103);
  }
  BattleActorControl__UpdateShadow(this, v102);
  this->fields.stepFlg = 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  v107 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v108 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v108,
    v107,
    (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___69406352);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v108;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.rendererArrayList,
    (System_Int32_array **)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v115);
  if ( !svtdata )
    goto LABEL_119;
  this->fields.actorScale = BattleServantData__getActorScale(svtdata, 0LL);
  v116 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v117 = UnityEngine_Vector3__get_one(0LL);
  if ( !v116 )
    goto LABEL_119;
  actorScale = this->fields.actorScale;
  v177.fields.x = v117 * actorScale;
  v177.fields.y = v118 * actorScale;
  v177.fields.z = v119 * actorScale;
  UnityEngine_Transform__set_localScale(v116, v177, 0LL);
  v121 = object;
  if ( !svtdata->fields.isEnemy )
    goto LABEL_117;
  v122 = this->fields.performance;
  if ( !v122 )
    goto LABEL_119;
  data = v122->fields.data;
  if ( !data )
    goto LABEL_119;
  v124 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           svtdata->fields.uniqueId,
           (const MethodInfo_2005430 *)Method_System_Array_IndexOf_int___);
  LODWORD(object[1].monitor) = v124;
  if ( v124 == -1 )
    goto LABEL_117;
  rendererArrayList = this->fields.rendererArrayList;
  Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
  }
  saveNameList = (struct BattleActorControl___c_StaticFields *)Instance[1].fields.saveNameList;
  _9__136_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)saveNameList->__9__136_0;
  if ( !_9__136_0 )
  {
    if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      saveNameList = BattleActorControl___c_TypeInfo->static_fields;
    }
    v128 = (Il2CppObject *)saveNameList->__9;
    _9__136_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_SkinnedMeshRenderer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__136_0,
      v128,
      Method_BattleActorControl___c__setServantData_b__136_0__,
      (const MethodInfo_2C3248C *)Method_System_Predicate_SkinnedMeshRenderer___ctor__);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__136_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)_9__136_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&static_fields->__9__136_0,
      (System_Int32_array **)_9__136_0,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
    v121 = object;
  }
  if ( !rendererArrayList )
    goto LABEL_119;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)rendererArrayList,
                                (System_Predicate_T__o *)_9__136_0,
                                (const MethodInfo_3053B58 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_119;
  v136 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *p_actorObject,
                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)*p_actorObject;
    if ( !*p_actorObject )
      goto LABEL_119;
    Instance = (DataManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_119;
    Component_srcLineSprite = (UnityEngine_Object_o *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_srcLineSprite, 0, 0LL);
  }
  v138 = this->fields.performance;
  if ( !v138 )
    goto LABEL_119;
  Instance = (DataManager_o *)v138->fields.data;
  if ( !Instance )
    goto LABEL_119;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v140 = (UnityEngine_Mesh_o *)sub_B77694(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v140, 0LL);
  if ( !v136 )
    goto LABEL_119;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v136, v140, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_119;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_srcLineSprite, v140, 0LL);
  v141 = this->fields.performance;
  monitor = (int32_t)v121[1].monitor;
  v144 = *(_QWORD *)&v173->fields.svtId.fields.currentCryptoKey;
  v143 = *(_QWORD *)&v173->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v176.fields.currentCryptoKey = v144;
  *(_QWORD *)&v176.fields.fakeValue = v143;
  v145 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v176, 0LL);
  v146 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v146, object, Method_BattleActorControl___c__DisplayClass136_0__setServantData_b__1__, 0LL);
  if ( !v141 )
    goto LABEL_119;
  BattlePerformance__AddCollider(
    v141,
    (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
    v136,
    monitor,
    v145,
    v146,
    IsEnemyPosCountNormal,
    0LL);
  v147 = this->fields.performance;
  if ( !v147 )
    goto LABEL_119;
  statusPerf = v147->fields.statusPerf;
  svtdata = v173;
  v89 = v172;
  if ( !statusPerf )
    goto LABEL_119;
  enemyPref = statusPerf->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_119;
  svtHeadUpList = enemyPref->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_119;
  monitor_low = SLODWORD(object[1].monitor);
  if ( (unsigned int)monitor_low >= svtHeadUpList->max_length )
  {
    v171 = sub_B776C8(Instance);
    sub_B77668(v171, 0LL);
  }
  Instance = (DataManager_o *)svtHeadUpList->m_Items[monitor_low];
  if ( !Instance )
LABEL_119:
    sub_B7769C(Instance, v7);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v153 = this->fields.performance;
    if ( v153 )
    {
      actorcamera = v153->fields.actorcamera;
      uicamera = v153->fields.uicamera;
      v156 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v158 = BattleActorControl__getHeadUpY(this, v157);
      if ( Component_WebViewObject )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)Component_WebViewObject,
          actorcamera,
          uicamera,
          v156,
          *(UnityEngine_Vector3_o *)&v158,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)Component_WebViewObject, 0LL);
        goto LABEL_117;
      }
    }
    goto LABEL_119;
  }
LABEL_117:
  Instance = (DataManager_o *)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  Components_iTween = UnityEngine_GameObject__GetComponents_iTween_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_1DEC270 *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_iTween;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (System_Int32_array **)Components_iTween,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, 0, v168);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v89, v37, svtdata->fields.isEnemy, v169);
  BattleActorControl__LoadSavedPartAnimation(this, v170);
}


void __fastcall BattleActorControl__setStepFlg(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  this->fields.stepFlg = flg;
}


void __fastcall BattleActorControl__setSummonMasterObject(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v6; // x8
  struct PlayMakerFSM_array *v7; // x8
  struct PlayMakerFSM_array *v8; // x8
  __int64 v9; // x0

  v4 = this;
  if ( (byte_4389855 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_13409/*"SummonMasterObject"*/);
    byte_4389855 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( !motionFSM->max_length )
      goto LABEL_31;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13409/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_30;
      if ( !v6->max_length )
        goto LABEL_31;
      this = (BattleActorControl_o *)v6->m_Items[0];
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13409/*"SummonMasterObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_30;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
    }
    v7 = v4->fields.motionFSM;
    if ( !v7 )
      goto LABEL_30;
    if ( v7->max_length <= 1 )
    {
LABEL_31:
      v9 = sub_B776C8(this);
      sub_B77668(v9, 0LL);
    }
    this = (BattleActorControl_o *)v7->m_Items[1];
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13409/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v8 = v4->fields.motionFSM;
      if ( !v8 )
        goto LABEL_30;
      if ( v8->max_length > 1 )
      {
        this = (BattleActorControl_o *)v8->m_Items[1];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( this )
          {
            this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13409/*"SummonMasterObject"*/,
                                               0LL);
              if ( this )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_30:
        sub_B7769C(this, obj);
      }
      goto LABEL_31;
    }
  }
}


void __fastcall BattleActorControl__setTargetObject(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v6; // x8
  __int64 v7; // x0

  v4 = this;
  if ( (byte_4389854 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_13827/*"TargetObject"*/);
    byte_4389854 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( motionFSM->max_length )
    {
      this = (BattleActorControl_o *)motionFSM->m_Items[0];
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13827/*"TargetObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_17;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_17;
      if ( v6->max_length > 1 )
      {
        this = (BattleActorControl_o *)v6->m_Items[1];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( this )
          {
            this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13827/*"TargetObject"*/,
                                               0LL);
              if ( this )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_17:
        sub_B7769C(this, obj);
      }
    }
    v7 = sub_B776C8(this);
    sub_B77668(v7, 0LL);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_B7769C(this, method);
  fbxcomponent->fields.timescale = time;
}


void __fastcall BattleActorControl__setTypeEnemy(BattleActorControl_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 1;
}


void __fastcall BattleActorControl__setTypePlayer(BattleActorControl_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 0;
}


void __fastcall BattleActorControl__set_BuffEffectNodeName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BuffEffectNodeName_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__set_IsStepInBattle(
        BattleActorControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = value;
}


void __fastcall BattleActorControl__set_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PlayedOriginalAnimName_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__set_PrevSkillVoiceType(
        BattleActorControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.prevSkillVoiceType = value;
}


void __fastcall BattleActorControl__set_currentPriority(
        BattleActorControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._currentPriority_k__BackingField = value;
}


void __fastcall BattleActorControl__set_delayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl__skipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0

  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_B7769C(0LL, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattlePerformance_o *performance; // x8
  bool v4; // zf
  int32_t uniqueID; // w20
  float v6; // s8
  const MethodInfo *v7; // x3

  v2 = this;
  if ( (byte_43898A7 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&StringLiteral_12494/*"SKIP_VOICE"*/);
    byte_43898A7 = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_B7769C(this, method);
  v4 = !BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v2->fields.uniqueID;
  if ( v4 )
    v6 = 1.0;
  else
    v6 = 0.5;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__StopVoice(uniqueID, v6, 0LL);
  BattleActorControl__sendEventFSM_22495744(v2, (System_String_o *)StringLiteral_12494/*"SKIP_VOICE"*/, 0, v7);
}


void __fastcall BattleActorControl__startBattleUIFade(
        BattleActorControl_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B7769C(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_43898B1 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleActorControl_endChangeAppearance__);
    byte_43898B1 = 1;
  }
  v3 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v5 = BattleActorControl__waitChangeApp(this, v3, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *noblePhantasmObjectVisibleCtrList; // x0
  const MethodInfo *v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x22
  __int64 v13; // x1
  struct System_Collections_Generic_List_BattleActorControl__o *v14; // x0
  System_Action_o *v15; // x22
  struct System_Action_o *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v24; // x8
  const MethodInfo *v25; // x2
  struct BattlePerformance_o *v26; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x21
  BattleFBXComponent_c *v28; // x0
  struct BattlePerformance_o *v29; // x8
  WebViewManager_o *Instance; // x0
  BattlePerformance_o *v31; // x21
  BattleSequenceManager_o *v32; // x22
  struct BattlePerformance_o *v33; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v35; // x8
  struct BattleActionData_o *actiondata; // x8
  TreasureDvcEntity_o *Entity; // x0
  TreasureDvcEntity_o *v38; // x20
  struct BattleActionData_o *v39; // x8
  AssetManager_o *v40; // x20
  AssetManager_ResourceUnloadEventHandler_o *v41; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v43; // x20
  __int64 v44; // x21
  __int64 v45; // x22
  int32_t v46; // w21
  System_Collections_Generic_List_XWeaponTrail_Element__o *v47; // x8
  int32_t items; // w22
  struct BattleServantData_o *v49; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v52; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v54; // x27
  UnityEngine_Object_o *v55; // x20
  struct BattlePerformance_o *v56; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v58; // x8
  struct BattleData_o *v59; // x8
  void *v60; // x0
  int v61; // w1
  __int64 v62; // x22
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16

  if ( (byte_438988D & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_B775C4(&Method_BattleActorControl__startNoblePhantasm_b__264_0__);
    sub_B775C4(&Method_BattleActorControl__startNoblePhantasm_b__264_1__);
    sub_B775C4(&BattleFBXComponent_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_B775C4(&Method_FieldMotionManager_SetVariables_GameObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&StringLiteral_9533/*"NPACTOR"*/);
    sub_B775C4(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_438988D = 1;
  }
  memset(&v64, 0, sizeof(v64));
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_BattleActorControl__Clear__);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                                                                                   this,
                                                                                                   v8);
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  v64 = v63;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v64,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    if ( !v9 )
      break;
    current = v64.fields.current;
    if ( !v64.fields.current )
      sub_B7769C(v9, v10);
    if ( BattleActorControl__ProcServantObjectVisibleCtr((BattleActorControl_o *)v64.fields.current, 1, 0, v11) )
    {
      v14 = this->fields.noblePhantasmObjectVisibleCtrList;
      if ( !v14 )
        sub_B7769C(0LL, v13);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v14,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    v15 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleActorControl__startNoblePhantasm_b__264_0__, 0LL);
    v16 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)callback,
                                      (System_Delegate_o *)v15,
                                      0LL);
    if ( !v16 || v16->klass == System_Action_TypeInfo )
      break;
    v60 = (void *)sub_B77990(v16);
    if ( v61 != 1 )
      _Unwind_Resume(v60);
    v62 = *(_QWORD *)__cxa_begin_catch(v60);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v64,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v62 )
      sub_B77668(v62, 0LL);
  }
  this->fields.noblePhantasmCallback = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.noblePhantasmCallback,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.fbxcomponent;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)noblePhantasmObjectVisibleCtrList, 0, 0LL);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_77;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)performance->fields.bgPerf;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)noblePhantasmObjectVisibleCtrList, 1, 0LL);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)noblePhantasmObjectVisibleCtrList, 0, 0LL);
  v24 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 1;
  if ( !v24 )
    goto LABEL_77;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v24->fields.logic;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattleLogic__ChangePhase((BattleLogic_o *)noblePhantasmObjectVisibleCtrList, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 0, v25);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__AllServantClassIconEffectStartStop(
    (BattlePerformance_o *)noblePhantasmObjectVisibleCtrList,
    0,
    0LL);
  v26 = this->fields.performance;
  if ( !v26 )
    goto LABEL_77;
  fmManager_k__BackingField = v26->fields._fmManager_k__BackingField;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)this,
                                                                                                   0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_77;
  FieldMotionManager__SetVariables_string_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9533/*"NPACTOR"*/,
    (System_String_o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_1DEB33C *)Method_FieldMotionManager_SetVariables_GameObject___);
  v28 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v28 = BattleFBXComponent_TypeInfo;
  }
  v28->static_fields->EnableEvent = 0;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__changeShadowType((BattlePerformance_o *)noblePhantasmObjectVisibleCtrList, 1, 0LL);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)noblePhantasmObjectVisibleCtrList, 0LL);
  v29 = this->fields.performance;
  if ( !v29 )
    goto LABEL_77;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v29->fields.commandPerf;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformanceCommandCard__SetCommandCardEffectActive(
    (BattlePerformanceCommandCard_o *)noblePhantasmObjectVisibleCtrList,
    0,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v31 = this->fields.performance;
  v32 = (BattleSequenceManager_o *)Instance;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)this,
                                                                                                   0LL);
  v33 = this->fields.performance;
  if ( !v33 )
    goto LABEL_77;
  bgPerf = v33->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_77;
  if ( !v32 )
    goto LABEL_77;
  BattleSequenceManager__init(
    v32,
    v31,
    (UnityEngine_GameObject_o *)noblePhantasmObjectVisibleCtrList,
    v33->fields.p_actorlist,
    v33->fields.e_actorlist,
    v33->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v35 = this->fields.performance;
  if ( !v35 )
    goto LABEL_77;
  v35->fields.isNoblePhantasmWhiteInFlg = flg;
  if ( this->fields.actiondata )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = this->fields.actiondata;
    if ( !actiondata || !noblePhantasmObjectVisibleCtrList )
      goto LABEL_77;
    Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)noblePhantasmObjectVisibleCtrList,
                                      actiondata->fields.treasureDvcId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v38 = Entity;
      if ( TreasureDvcEntity__IsRandomTD(Entity, 0LL) )
      {
        noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleSvtData;
        if ( !noblePhantasmObjectVisibleCtrList )
          goto LABEL_77;
        noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleServantData__getDispLimitCount((BattleServantData_o *)noblePhantasmObjectVisibleCtrList, 1, 0LL);
        v39 = this->fields.actiondata;
        if ( !v39 )
          goto LABEL_77;
        TreasureDvcEntity__getRandomSeqIdEachLimit(
          v38,
          (int32_t)noblePhantasmObjectVisibleCtrList,
          v39->fields.ActSetId,
          0LL);
      }
    }
  }
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattleSequenceManager__SetAfterChangeField(
    (BattleSequenceManager_o *)noblePhantasmObjectVisibleCtrList,
    this->fields.actiondata,
    0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v40 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v41 = (AssetManager_ResourceUnloadEventHandler_o *)sub_B77694(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v41,
      (Il2CppObject *)this,
      Method_BattleActorControl__startNoblePhantasm_b__264_1__,
      0LL);
    if ( !v40 )
      goto LABEL_77;
    AssetManager__RequestUnloadUnusedAssets(v40, v41, 0LL);
  }
  else
  {
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_77;
    v43 = (BattleSequenceManager_o *)noblePhantasmObjectVisibleCtrList;
    v45 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v44 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v65.fields.currentCryptoKey = v45;
    *(_QWORD *)&v65.fields.fakeValue = v44;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                                                                     v65,
                                                                                                     0LL);
    if ( !this->fields.battleSvtData )
      goto LABEL_77;
    v46 = (int)noblePhantasmObjectVisibleCtrList;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleServantData__get_TreasureDevice(
                                                                                                     this->fields.battleSvtData,
                                                                                                     0LL);
    if ( !noblePhantasmObjectVisibleCtrList )
      goto LABEL_77;
    v47 = noblePhantasmObjectVisibleCtrList;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleSvtData;
    if ( !noblePhantasmObjectVisibleCtrList )
      goto LABEL_77;
    items = (int32_t)v47->fields._items;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleServantData__getDispLimitCount(
                                                                                                     (BattleServantData_o *)noblePhantasmObjectVisibleCtrList,
                                                                                                     1,
                                                                                                     0LL);
    v49 = this->fields.battleSvtData;
    if ( !v49 )
      goto LABEL_77;
    overwriteSvtVoiceId = v49->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v49->fields.treasuredvcLevel;
    v52 = (int)noblePhantasmObjectVisibleCtrList;
    NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL);
    v54 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B77694(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v54,
      (Il2CppObject *)this,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v43 )
      goto LABEL_77;
    BattleSequenceManager__loadSequence(
      v43,
      v46,
      items,
      v52,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v54,
      0LL);
  }
  v55 = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Inequality(
                                                                                                   v55,
                                                                                                   0LL,
                                                                                                   0LL);
  if ( ((unsigned __int8)noblePhantasmObjectVisibleCtrList & 1) != 0 )
  {
    v56 = this->fields.performance;
    if ( !v56 )
      goto LABEL_77;
    data = (UnityEngine_Object_o *)v56->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Inequality(
                                                                                                     data,
                                                                                                     0LL,
                                                                                                     0LL);
    if ( ((unsigned __int8)noblePhantasmObjectVisibleCtrList & 1) != 0 && !this->fields.isEnemy )
    {
      v58 = this->fields.performance;
      if ( v58 )
      {
        v59 = v58->fields.data;
        if ( v59 )
        {
          ++v59->fields.playerNpCount;
          return;
        }
      }
LABEL_77:
      sub_B7769C(noblePhantasmObjectVisibleCtrList, callback);
    }
  }
}


void __fastcall BattleActorControl__startWaitDeadEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleActorControl_o *v3; // x19
  struct BattleServantData_o *v4; // x8
  const MethodInfo *v5; // x1
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v7; // x2

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_7;
  v3 = this;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this
    || (BattleBuffData__clearActiveBuff((BattleBuffData_o *)this, 0LL), (v4 = v3->fields.battleSvtData) == 0LL)
    || (this = (BattleActorControl_o *)v4->fields.buffData) == 0LL
    || (BattleBuffData__clearAuraBuff((BattleBuffData_o *)this, 0LL),
        BattleActorControl__updateBuffLoopEffect(v3, v5),
        (this = (BattleActorControl_o *)v3->fields.battleSvtData) == 0LL) )
  {
LABEL_7:
    sub_B7769C(this, method);
  }
  AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)this, 0LL);
  BattleActorControl__updateAura(v3, AuraIdList, v7);
}


void __fastcall BattleActorControl__stopAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.resumetimescale = this->fields.animetimescale;
  if ( !fbxcomponent )
    sub_B7769C(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_43898A8 & 1) == 0 )
  {
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_43898A8 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    ServantAssetLoadManager__StopVoice(uniqueID, 0.0, 0LL);
  }
}


void __fastcall BattleActorControl__updateAura(
        BattleActorControl_o *this,
        System_Int32_array *auraEffectList,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v6; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v10; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *_9__327_0; // x20
  Il2CppObject *v13; // x21
  struct BattleActorControl___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_int__o *v21; // x22
  __int64 v22; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v23; // x21
  unsigned __int64 v24; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v29; // x22
  unsigned __int64 v30; // x25
  int32_t v31; // w23
  UnityEngine_GameObject_o *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x22
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  System_Collections_IEnumerator_o *v40; // x0
  __int64 v41; // x0

  v4 = this;
  if ( (byte_43898B9 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Remove_int__GameObject___);
    sub_B775C4(&Method_DataManager_GetMasterData_AuraEffectMaster___);
    sub_B775C4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_Except_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_B775C4(&Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_BattleActorControl___c__updateAura_b__327_0__);
    this = (BattleActorControl_o *)sub_B775C4(&BattleActorControl___c_TypeInfo);
    byte_43898B9 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_64;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_64;
  this = (BattleActorControl_o *)BattleBuffData__GetIgnoreAuraBuffIds((BattleBuffData_o *)this, 0LL);
  if ( !this )
    goto LABEL_18;
  v6 = v4->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_64;
  buffData = v6->fields.buffData;
  if ( !buffData )
    goto LABEL_64;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v6->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_18:
    v21 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v21,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( auraEffectList )
      {
        v22 = *(_QWORD *)&auraEffectList->max_length;
        v23 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
        if ( (int)v22 >= 1 )
        {
          v24 = 0LL;
          while ( v24 < (unsigned int)v22 )
          {
            if ( !v23 )
              goto LABEL_64;
            this = (BattleActorControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v23,
                                             auraEffectList->m_Items[v24 + 1],
                                             (const MethodInfo_21FB894 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v21 )
                goto LABEL_64;
              System_Collections_Generic_List_int___Add(
                v21,
                *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1),
                (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            }
            LODWORD(v22) = auraEffectList->max_length;
            if ( (__int64)++v24 >= (int)v22 )
              goto LABEL_28;
          }
          goto LABEL_65;
        }
LABEL_28:
        this = (BattleActorControl_o *)v4->fields.auraList;
        if ( this )
        {
          Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                   (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this,
                   (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
          v27 = System_Linq_Enumerable__Except_int_(
                  v26,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                  (const MethodInfo_1D2FA5C *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v27,
                                           (const MethodInfo_1D3D440 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            actorObject = this->fields.actorObject;
            v29 = this;
            if ( (int)actorObject >= 1 )
            {
              v30 = 0LL;
              while ( v30 < (unsigned int)actorObject )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                v31 = *((_DWORD *)&v29->fields.fbxcomponent + v30);
                Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                     v31,
                                                     (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
                {
                  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4,
                                                   0LL);
                  if ( !this )
                    goto LABEL_64;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_68;
                  if ( !Item )
                    goto LABEL_64;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_gameObject(Item, 0LL);
                  if ( !this )
                    goto LABEL_64;
                  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(
                                        (UnityEngine_GameObject_o *)this,
                                        0LL);
                  if ( activeInHierarchy )
                  {
                    v35 = BattleActorControl__DestroyAuraEffect((BattleActorControl_o *)activeInHierarchy, Item, v34);
                    UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)v4, v35, 0LL);
                  }
                  else
                  {
LABEL_68:
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
                  v31,
                  (const MethodInfo_2FF5B54 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                 (const MethodInfo_2FF3D74 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(actorObject) = v29->fields.actorObject;
                if ( (__int64)++v30 >= (int)actorObject )
                  goto LABEL_53;
              }
              goto LABEL_65;
            }
LABEL_53:
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
            if ( this )
            {
              this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v36 = *(_QWORD *)&auraEffectList->max_length;
              if ( (int)v36 < 1 )
                return;
              v37 = 0LL;
              while ( v37 < (unsigned int)v36 )
              {
                if ( !v23 )
                  goto LABEL_64;
                this = (BattleActorControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v23,
                                                 auraEffectList->m_Items[v37 + 1],
                                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v39 = (int32_t)this->fields.actorObject;
                  if ( v4->fields._currentPriority_k__BackingField <= v39 )
                  {
                    v40 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1),
                            v39,
                            v38);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_36304832(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v40,
                                                     0LL);
                  }
                }
                LODWORD(v36) = auraEffectList->max_length;
                if ( (__int64)++v37 >= (int)v36 )
                  return;
              }
LABEL_65:
              v41 = sub_B776C8(this);
              sub_B77668(v41, 0LL);
            }
          }
        }
      }
    }
LABEL_64:
    sub_B7769C(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v10 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v10 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__327_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)static_fields->__9__327_0;
  if ( !_9__327_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__327_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B77694(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
      _9__327_0,
      v13,
      Method_BattleActorControl___c__updateAura_b__327_0__,
      (const MethodInfo_29D5D98 *)Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__);
    v14 = BattleActorControl___c_TypeInfo->static_fields;
    v14->__9__327_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__327_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v14->__9__327_0,
      (System_Int32_array **)_9__327_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__327_0,
    (const MethodInfo_1C686E4 *)Method_BasicHelper_Remove_int__GameObject___);
}


void __fastcall BattleActorControl__updateBuffIcon(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActorControl_o *v3; // x19
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattlePerformance_o *performance; // x8
  __int64 v8; // x0

  if ( !actionData )
    goto LABEL_12;
  v3 = this;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, (const MethodInfo *)actionData);
  if ( !this )
    goto LABEL_12;
  actorObject = this->fields.actorObject;
  v5 = this;
  if ( (int)actorObject >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)actorObject )
      {
        v8 = sub_B776C8(this);
        sub_B77668(v8, 0LL);
      }
      performance = v3->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v5->fields.fbxcomponent + v6),
                                       0LL);
      if ( this )
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
      LODWORD(actorObject) = v5->fields.actorObject;
      if ( (__int64)++v6 >= (int)actorObject )
        return;
    }
LABEL_12:
    sub_B7769C(this, actionData);
  }
}


void __fastcall BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v6; // x20
  int size; // w8
  int v8; // w24
  BattleBuffData_BuffData_o *v9; // x8
  BuffEntity_o *Entity; // x23
  const MethodInfo *v11; // x2
  int actorObject; // w8
  BattleActorControl_o *v13; // x23
  unsigned int v14; // w27
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t current; // w21
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *v20; // x1
  __int64 v21; // x0
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-90h] BYREF

  v2 = this;
  if ( (byte_43898CA & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_B775C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____69525936);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    this = (BattleActorControl_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_43898CA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_35;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_35;
  EffectBuffList = BattleBuffData__GetEffectBuffList((BattleBuffData_o *)this, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_BuffMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( !EffectBuffList )
    goto LABEL_35;
  size = EffectBuffList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = EffectBuffList->fields._items->m_Items[v8];
      if ( !v9 )
        goto LABEL_35;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_35;
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v9->fields.buffId,
                                 (const MethodInfo_21FB894 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v11);
      if ( !Entity || !v6 )
        goto LABEL_35;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v6,
                                       Entity->fields.effectId,
                                       (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        System_Collections_Generic_List_int___Add(
          v6,
          Entity->fields.effectId,
          (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
        this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_35;
        this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                         Entity->fields.effectId,
                                         (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_35;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_35;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____69525936);
          if ( !this )
            goto LABEL_35;
          actorObject = (int)this->fields.actorObject;
          v13 = this;
          if ( actorObject >= 1 )
            break;
        }
      }
LABEL_26:
      size = EffectBuffList->fields._size;
      if ( ++v8 >= size )
        goto LABEL_27;
    }
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= actorObject )
      {
        v21 = sub_B776C8(this);
        sub_B77668(v21, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v13->fields.fbxcomponent + (int)v14);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v8 * 0.01) + -1.0,
        0LL);
      actorObject = (int)v13->fields.actorObject;
      if ( (int)++v14 >= actorObject )
        goto LABEL_26;
    }
LABEL_35:
    sub_B7769C(this, method);
  }
LABEL_27:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_35;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this,
           (const MethodInfo_2FF3D84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_1D402F0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v16 )
      break;
    if ( !v6 )
      sub_B7769C(v16, v17);
    current = v23.fields.current;
    if ( !System_Collections_Generic_List_int___Contains(
            v6,
            v23.fields.current,
            (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v20 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)v2, v20, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  void *material; // x0
  __int64 v7; // x1
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w22
  char *v11; // x8
  UnityEngine_Renderer_o *v12; // x21
  BattleActorControl_c *v13; // x0
  float defaultHeight; // s9
  float v15; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  UnityEngine_Material_o *v19; // x21
  float v20; // s4
  float v21; // s5
  float v22; // s6
  float v23; // s7
  int v24; // w8
  int v25; // w23
  char *v26; // x8
  UnityEngine_Component_o *v27; // x20
  __int64 v28; // x8
  _QWORD *v29; // x21
  unsigned __int64 v30; // x28
  UnityEngine_Material_o *v31; // x22
  System_String_o *v32; // x1
  UnityEngine_Material_o *v33; // x0
  float v34; // s0
  float y; // s9
  float v36; // s10
  float v37; // s11
  __int64 v38; // x0
  int *v39; // [xsp+0h] [xbp-C0h]
  MethodInfo methoda; // [xsp+8h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438987C & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_16244/*"_ClipSharpnessY"*/);
    sub_B775C4(&StringLiteral_16248/*"_Color"*/);
    sub_B775C4(&StringLiteral_23741/*"weapon"*/);
    sub_B775C4(&StringLiteral_17215/*"body"*/);
    byte_438987C = 1;
  }
  memset(&methoda.klass, 0, 24);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  material = (void *)UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL);
  if ( ((unsigned __int8)material & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_47;
    material = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !material )
      goto LABEL_47;
    v8 = *((_DWORD *)material + 6);
    v9 = material;
    if ( v8 >= 1 )
    {
      v10 = 0;
      while ( v10 < v8 )
      {
        v11 = (char *)&v9[2 * v10];
        v12 = (UnityEngine_Renderer_o *)*((_QWORD *)v11 + 4);
        if ( !v12 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_material(*((UnityEngine_Renderer_o **)v11 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)UnityEngine_Material__HasProperty_41467028(
                             (UnityEngine_Material_o *)material,
                             (System_String_o *)StringLiteral_16248/*"_Color"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
        {
          v13 = BattleActorControl_TypeInfo;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v13 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v13->static_fields->defaultHeight;
          material = UnityEngine_Renderer__get_material(v12, 0LL);
          if ( !material )
            goto LABEL_47;
          v15 = val / defaultHeight;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)material, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          v19 = UnityEngine_Renderer__get_material(v12, 0LL);
          v45.fields.a = 1.0 - v15;
          v45.fields.r = r;
          v45.fields.g = g;
          v45.fields.b = b;
          methoda.methodPointer = 0LL;
          methoda.invoker_method = 0LL;
          UnityEngine_Color___ctor(v45, v20, v21, v22, v23, &methoda);
          if ( !v19 )
            goto LABEL_47;
          *(_QWORD *)&v46.fields.r = methoda.methodPointer;
          *(_QWORD *)&v46.fields.b = methoda.invoker_method;
          UnityEngine_Material__set_color(v19, v46, 0LL);
        }
        v8 = v9[6];
        if ( (int)++v10 >= v8 )
          goto LABEL_22;
      }
LABEL_48:
      v38 = sub_B776C8(material);
      sub_B77668(v38, 0LL);
    }
LABEL_22:
    material = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__31376384(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1DEC400 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !material )
LABEL_47:
      sub_B7769C(material, v7);
    v24 = *((_DWORD *)material + 6);
    if ( v24 >= 1 )
    {
      v25 = 0;
      v39 = (int *)material;
      while ( 1 )
      {
        if ( v25 >= (unsigned int)v24 )
          goto LABEL_48;
        v26 = (char *)material + 8 * v25;
        v27 = (UnityEngine_Component_o *)*((_QWORD *)v26 + 4);
        if ( !v27 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v26 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        v28 = *((_QWORD *)material + 3);
        v29 = material;
        if ( (int)v28 >= 1 )
          break;
LABEL_45:
        material = v39;
        ++v25;
        v24 = v39[6];
        if ( v25 >= v24 )
          return;
      }
      v30 = 0LL;
      while ( v30 < (unsigned int)v28 )
      {
        v31 = (UnityEngine_Material_o *)v29[v30 + 4];
        material = UnityEngine_Component__get_gameObject(v27, 0LL);
        if ( !material )
          goto LABEL_47;
        material = UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)System_String__StartsWith(
                             (System_String_o *)material,
                             (System_String_o *)StringLiteral_17215/*"body"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
          goto LABEL_37;
        material = UnityEngine_Component__get_gameObject(v27, 0LL);
        if ( !material )
          goto LABEL_47;
        material = UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)System_String__StartsWith(
                             (System_String_o *)material,
                             (System_String_o *)StringLiteral_23741/*"weapon"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
        {
LABEL_37:
          if ( !v31 )
            goto LABEL_47;
          v32 = (System_String_o *)StringLiteral_16244/*"_ClipSharpnessY"*/;
          v33 = v31;
          v34 = val;
        }
        else
        {
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v27,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          center = UnityEngine_Bounds__get_center((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          y = center.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v27,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          extents = UnityEngine_Bounds__get_extents((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          v36 = extents.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v27,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          material = BattleActorControl_TypeInfo;
          v37 = size.fields.y;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          }
          if ( !v31 )
            goto LABEL_47;
          v32 = (System_String_o *)StringLiteral_16244/*"_ClipSharpnessY"*/;
          v33 = v31;
          v34 = (float)(y - v36)
              + (float)((float)((float)(v37 + 0.2) / BattleActorControl_TypeInfo->static_fields->defaultHeight) * val);
        }
        UnityEngine_Material__SetFloat(v33, v32, v34, 0LL);
        LODWORD(v28) = *((_DWORD *)v29 + 6);
        if ( (__int64)++v30 >= (int)v28 )
          goto LABEL_45;
      }
      goto LABEL_48;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__waitChangeApp(
        BattleActorControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_43898B2 & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl__waitChangeApp_d__319_TypeInfo);
    byte_43898B2 = 1;
  }
  v5 = sub_B77694(BattleActorControl__waitChangeApp_d__319_TypeInfo);
  BattleActorControl__waitChangeApp_d__319___ctor((BattleActorControl__waitChangeApp_d__319_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B7769C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438AB5D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
    sub_B775C4(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
    byte_438AB5D = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._activeFsmNameList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B77694(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v12,
    (const MethodInfo_2F22A90 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v12;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._callBackQueue,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.battleActor,
    (System_Int32_array **)actor,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x20

  if ( (byte_438AB5F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    byte_438AB5F = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B7769C(v5, v6);
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeFsmNameList,
          (WarBoardManager_TaskList_o *)fsmName,
          (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__) )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeFsmNameList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)fsmName,
      (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_438AB61 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
    byte_438AB61 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B7769C(0LL, v5);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    callBackQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)callBack,
    (const MethodInfo_2F23084 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_438AB62 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__);
    byte_438AB62 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v3);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B7769C(0LL, v4);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_2F2329C *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
}


System_Collections_Generic_List_string__o *__fastcall BattleActorControl_ActorMotionActiveCheck__get_ActiveFsmNameList(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  return this->fields._activeFsmNameList;
}


System_Collections_Generic_Queue_BattleCallBackBase__o *__fastcall BattleActorControl_ActorMotionActiveCheck__get_CallBackQueue(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  return this->fields._callBackQueue;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_438AB5C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_438AB5C = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B7769C(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *activeFsmNameList; // x0

  if ( (byte_438AB60 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Remove__);
    byte_438AB60 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B7769C(0LL, v5);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
           activeFsmNameList,
           (WarBoardManager_TaskList_o *)fsmName,
           (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_438AB5E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
    byte_438AB5E = 1;
  }
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_10;
  if ( this->fields.uniqueId == battleActor->fields.uniqueID )
  {
    wave = this->fields.wave;
    if ( wave == BattleActorControl__getWaveCount(battleActor, 0LL) )
      return;
    battleActor = this->fields.battleActor;
    if ( !battleActor )
      goto LABEL_10;
  }
  this->fields.uniqueId = battleActor->fields.uniqueID;
  battleActor = (BattleActorControl_o *)BattleActorControl__getWaveCount(battleActor, 0LL);
  activeFsmNameList = this->fields._activeFsmNameList;
  this->fields.wave = (int)battleActor;
  if ( !activeFsmNameList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeFsmNameList,
          (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_string__Clear__),
        (battleActor = (BattleActorControl_o *)this->fields._callBackQueue) == 0LL) )
  {
LABEL_10:
    sub_B7769C(battleActor, method);
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)battleActor,
    (const MethodInfo_2F22D24 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl_EndCallEvent___ctor(
        BattleActorControl_EndCallEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall BattleActorControl_EndCallEvent__BeginInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6[2]; // [xsp+0h] [xbp-10h] BYREF

  v6[0] = (__int64)hash;
  v6[1] = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall BattleActorControl_EndCallEvent__Invoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  BattleActorControl_EndCallEvent_o **v7; // x25
  __int64 i; // x26
  unsigned int v9; // w22
  __int64 class_0; // x0
  System_Collections_Hashtable_c *v11; // x8
  unsigned __int64 v12; // x10
  int32_t *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  unsigned int v16; // w23
  __int64 v17; // x0
  __int64 v18; // x8
  unsigned __int64 v19; // x10
  _DWORD *v20; // x11
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  void (__fastcall **v24)(System_Collections_Hashtable_o *, _QWORD); // x0
  __int64 v25; // x0
  void (__fastcall **v26)(__int64 *, System_Collections_Hashtable_o *, _QWORD); // x0
  BattleActorControl_EndCallEvent_o *v27; // x8
  __int64 v28; // x21
  __int64 *v29; // x22
  void (__fastcall *v30)(System_Collections_Hashtable_o *, __int64); // x23
  char v31; // w0
  int v32; // w8
  char v33; // w23
  char v34; // w0
  __int64 v35; // x8
  __int64 v36; // x1
  __int64 v37; // x2
  unsigned __int64 v38; // x10
  _DWORD *v39; // x11
  char v40; // w22
  char v41; // w0
  System_Collections_Hashtable_c *klass; // x8
  __int64 v43; // x1
  __int64 v44; // x2
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  BattleActorControl_EndCallEvent_o *v47; // [xsp+8h] [xbp-48h] BYREF

  v47 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v47;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (BattleActorControl_EndCallEvent_o **)(v3 + 32);
LABEL_5:
    for ( i = 0LL; i != v6; ++i )
    {
      v27 = v7[i];
      v29 = *(__int64 **)&v27->fields.method;
      v28 = *(_QWORD *)&v27->fields.extra_arg;
      v30 = *(void (__fastcall **)(System_Collections_Hashtable_o *, __int64))&v27->fields.method_ptr;
      if ( *(__int16 *)(v28 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v27->fields.extra_arg, hash);
      v31 = sub_B775F4(v28);
      v32 = *(unsigned __int8 *)(v28 + 74);
      if ( (v31 & 1) != 0 )
      {
        if ( v32 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v32 != 1 )
        {
          if ( *(__int16 *)(v28 + 72) != -1 && this->fields.m_target )
          {
            v40 = sub_B775EC(v28);
            v41 = sub_B779F0(v28);
            if ( (v40 & 1) != 0 )
            {
              if ( (v41 & 1) != 0 )
              {
                klass = hash->klass;
                v43 = *(_QWORD *)(v28 + 24);
                v44 = *(unsigned __int16 *)(v28 + 72);
                if ( *(_WORD *)&hash->klass->_2.bitflags1 )
                {
                  v45 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v43 )
                  {
                    ++v45;
                    p_offset += 4;
                    if ( v45 >= *(unsigned __int16 *)&hash->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v23 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v44);
                }
                else
                {
LABEL_57:
                  v23 = sub_B0F4C0(hash, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))sub_B77674(v15, v28);
              (*v24)(hash, v24);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v28 + 72);
              if ( (v41 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v28);
                v11 = hash->klass;
                if ( *(_WORD *)&hash->klass->_2.bitflags1 )
                {
                  v12 = 0LL;
                  v13 = &v11->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v13 - 1) != class_0 )
                  {
                    ++v12;
                    v13 += 4;
                    if ( v12 >= *(unsigned __int16 *)&hash->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v14 = (__int64)(&v11->vtable._0_Equals.method + 2 * (int)(*v13 + v9));
                }
                else
                {
LABEL_11:
                  v14 = sub_B0F4C0(hash, class_0, v9);
                }
                (*(void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))v14)(hash, *(_QWORD *)(v14 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))&hash->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v28 + 72)))(
                  hash,
                  *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v30(hash, v28);
          continue;
        }
        if ( !v29 )
          goto LABEL_58;
        if ( *(__int16 *)(v28 + 72) != -1 && (*(_BYTE *)(*v29 + 277) & 1) == 0 && this->fields.m_target )
        {
          v33 = sub_B775EC(v28);
          v34 = sub_B779F0(v28);
          if ( (v33 & 1) != 0 )
          {
            if ( (v34 & 1) != 0 )
            {
              v35 = *v29;
              v36 = *(_QWORD *)(v28 + 24);
              v37 = *(unsigned __int16 *)(v28 + 72);
              if ( *(_WORD *)(*v29 + 298) )
              {
                v38 = 0LL;
                v39 = (_DWORD *)(*(_QWORD *)(v35 + 176) + 8LL);
                while ( *((_QWORD *)v39 - 1) != v36 )
                {
                  ++v38;
                  v39 += 4;
                  if ( v38 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_48;
                }
                v25 = v35 + 16LL * (*v39 + (int)v37) + 312;
              }
              else
              {
LABEL_48:
                v25 = sub_B0F4C0(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))sub_B77674(v22, v28);
            (*v26)(v29, hash, v26);
          }
          else
          {
            v16 = *(unsigned __int16 *)(v28 + 72);
            if ( (v34 & 1) != 0 )
            {
              v17 = j_il2cpp_method_get_class_0(v28);
              v18 = *v29;
              if ( *(_WORD *)(*v29 + 298) )
              {
                v19 = 0LL;
                v20 = (_DWORD *)(*(_QWORD *)(v18 + 176) + 8LL);
                while ( *((_QWORD *)v20 - 1) != v17 )
                {
                  ++v19;
                  v20 += 4;
                  if ( v19 >= *(unsigned __int16 *)(*v29 + 298) )
                    goto LABEL_19;
                }
                v21 = v18 + 16LL * (int)(*v20 + v16) + 312;
              }
              else
              {
LABEL_19:
                v21 = sub_B0F4C0(v29, v17, v16);
              }
              (*(void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))v21)(
                v29,
                hash,
                *(_QWORD *)(v21 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))(*v29
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v28 + 72)
                                                                                          + 312))(
                v29,
                hash,
                *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_Collections_Hashtable_o *, __int64))v30)(v29, hash, v28);
    }
  }
}


void __fastcall BattleActorControl_EventClass___ctor(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl_EventClass__Add(
        BattleActorControl_EventClass_o *this,
        System_String_o *key,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  void *klass; // x0
  BattleServantConfConponent_o *p_table; // x21
  struct System_Collections_Hashtable_o *table; // t1
  System_Collections_Hashtable_o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1

  if ( (byte_438AB63 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    byte_438AB63 = 1;
  }
  table = this->fields.table;
  p_table = (BattleServantConfConponent_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39511352(v10, 0LL);
    p_table->klass = (BattleServantConfConponent_c *)v10;
    sub_B77560(p_table, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_B7769C(0LL, v17);
  }
  (*(void (__fastcall **)(void *, System_String_o *, Il2CppObject *, _QWORD))(*(_QWORD *)klass + 680LL))(
    klass,
    key,
    obj,
    *(_QWORD *)(*(_QWORD *)klass + 688LL));
}


void __fastcall BattleActorControl_EventClass__Proc(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.eventcall )
    sub_B7769C(this, method);
  BattleActorControl_EndCallEvent__Invoke(this->fields.eventcall, this->fields.table, v2);
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs___ctor(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_438AB64 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438AB64 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B7769C(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v9, 0LL);
  this->fields._dispLimitCount_k__BackingField = BattleServantData__getDispLimitCount(svtData, 1, 0LL);
  this->fields._overwriteSvtVoiceId_k__BackingField = svtData->fields.overwriteSvtVoiceId;
}


int32_t __fastcall BattleActorControl_ExtraLoadedVoiceArgs__get_dispLimitCount(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._dispLimitCount_k__BackingField;
}


int32_t __fastcall BattleActorControl_ExtraLoadedVoiceArgs__get_overwriteSvtVoiceId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._overwriteSvtVoiceId_k__BackingField;
}


int32_t __fastcall BattleActorControl_ExtraLoadedVoiceArgs__get_svtId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._svtId_k__BackingField;
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs__set_dispLimitCount(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._dispLimitCount_k__BackingField = value;
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs__set_overwriteSvtVoiceId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._overwriteSvtVoiceId_k__BackingField = value;
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs__set_svtId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._svtId_k__BackingField = value;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__328___ctor(
        BattleActorControl__DestroyAuraEffect_d__328_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__328__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__328_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyAuraEffect_d__328_o *v8; // x19
  int32_t _1__state; // w8
  bool result; // w0
  BattleActorControl__DestroyAuraEffect_d__328_o **p_effectObject; // x22
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t *p_aliveCount_5__3; // x23
  BattleActorControl__DestroyAuraEffect_d__328_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__328_o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 v25; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x20
  BattleActorControl__DestroyAuraEffect_d__328_o *v27; // x19
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__328_o *v29; // x19
  unsigned __int64 v30; // x24
  UnityEngine_Object_o *v31; // x20
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v33; // x8
  BattleActorControl__DestroyAuraEffect_d__328_o *v34; // x20
  unsigned __int64 v35; // x25
  UnityEngine_Object_o *v36; // x21
  BattleActorControl__DestroyAuraEffect_d__328_o *v37; // x19
  __int64 v38; // x1
  __int64 v39; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x10
  int *v42; // x11
  __int64 v43; // x0
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  UnityEngine_ParticleSystem_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x8
  unsigned __int64 v51; // x10
  int *v52; // x11
  __int64 v53; // x0
  struct UnityEngine_ParticleSystem_array *v54; // x21
  __int64 v55; // x8
  unsigned __int64 v56; // x22
  UnityEngine_Object_o *v57; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  __int64 v59; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v61; // 0:x0.8

  v8 = this;
  if ( (byte_4389FB7 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_ExcludeNull_ParticleSystem___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69525944);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__328_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389FB7 = 1;
  }
  m_ParticleSystem = 0LL;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    p_aliveCount_5__3 = &v8->fields._aliveCount_5__3;
    v8->fields.__1__state = -1;
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    p_effectObject = (BattleActorControl__DestroyAuraEffect_d__328_o **)&v8->fields.effectObject;
    this = (BattleActorControl__DestroyAuraEffect_d__328_o *)v8->fields.effectObject;
    v8->fields.__1__state = -1;
    if ( !this )
      goto LABEL_98;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_srcLineSprite,
                                                               0LL,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_98;
      if ( *(&Component_srcLineSprite->fields.mtIsUpdate + 2) )
        goto LABEL_23;
    }
    this = *p_effectObject;
    if ( !*p_effectObject )
      goto LABEL_98;
    v13 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   (UnityEngine_GameObject_o *)this,
                                   1,
                                   (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v13;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v13, v14, v15, v16, v17, v18, v19);
    this = (BattleActorControl__DestroyAuraEffect_d__328_o *)v8->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_98;
    v8->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    p_aliveCount_5__3 = &v8->fields._aliveCount_5__3;
    this = (BattleActorControl__DestroyAuraEffect_d__328_o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    if ( !this )
      goto LABEL_98;
    klass = this->klass;
    v22 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v23 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
      {
        ++v23;
        p_offset += 4;
        if ( v23 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v25 = sub_B0F4C0(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
    }
    v39 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__328_o *, _QWORD))v25)(
            v22,
            *(_QWORD *)(v25 + 8));
    if ( !v39 )
      sub_B7769C(0LL, v38);
    while ( 1 )
    {
      v40 = *(_QWORD *)v39;
      if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
      {
        v41 = 0LL;
        v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v41;
          v42 += 4;
          if ( v41 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
            goto LABEL_63;
        }
        v43 = v40 + 16LL * *v42 + 312;
      }
      else
      {
LABEL_63:
        v43 = sub_B0F4C0(v39, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
        break;
      v44 = *(_QWORD *)v39;
      if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
      {
        v45 = 0LL;
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v46 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
        {
          ++v45;
          v46 += 4;
          if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
            goto LABEL_70;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_70:
        v47 = sub_B0F4C0(v39, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
      }
      v48 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
      if ( !v48 )
        sub_B7769C(0LL, v49);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v48, 0LL).fields.m_ParticleSystem;
      v61.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v61, 0, 0LL);
    }
    v50 = *(_QWORD *)v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v51 = 0LL;
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_78;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_78:
      v53 = sub_B0F4C0(v39, System_IDisposable_TypeInfo, 0LL);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__328_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(
                                                               v39,
                                                               *(_QWORD *)(v53 + 8));
  }
  p_particleArray_5__2 = &v8->fields._particleArray_5__2;
  if ( v8->fields._aliveCount_5__3 <= 0 )
  {
    v8->fields._particleArray_5__2 = 0LL;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    p_effectObject = (BattleActorControl__DestroyAuraEffect_d__328_o **)&v8->fields.effectObject;
LABEL_23:
    v27 = *p_effectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
      return 0;
    this = *p_effectObject;
    if ( *p_effectObject )
    {
      this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 1,
                                                                 (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____69525944);
      if ( this )
      {
        _2__current = this->fields.__2__current;
        v29 = this;
        if ( (int)_2__current >= 1 )
        {
          v30 = 0LL;
          while ( 1 )
          {
            if ( v30 >= (unsigned int)_2__current )
              goto LABEL_97;
            v31 = (UnityEngine_Object_o *)*((_QWORD *)&v29->fields.effectObject + v30);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v31 )
                goto LABEL_98;
              materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                (UnityEngine_Renderer_o *)v31,
                                                                0LL);
              this = (BattleActorControl__DestroyAuraEffect_d__328_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_Renderer__get_materials(
                                                                           (UnityEngine_Renderer_o *)v31,
                                                                           0LL);
                if ( !this )
                  goto LABEL_98;
                v33 = this->fields.__2__current;
                v34 = this;
                if ( (int)v33 >= 1 )
                  break;
              }
            }
LABEL_51:
            LODWORD(_2__current) = v29->fields.__2__current;
            if ( (__int64)++v30 >= (int)_2__current )
              goto LABEL_52;
          }
          v35 = 0LL;
          while ( v35 < (unsigned int)v33 )
          {
            v36 = (UnityEngine_Object_o *)*((_QWORD *)&v34->fields.effectObject + v35);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_Object__op_Equality(v36, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_36309980(v36, 0LL);
            }
            LODWORD(v33) = v34->fields.__2__current;
            if ( (__int64)++v35 >= (int)v33 )
              goto LABEL_51;
          }
          goto LABEL_97;
        }
LABEL_52:
        v37 = *p_effectObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_36309980((UnityEngine_Object_o *)v37, 0LL);
        return 0;
      }
    }
LABEL_98:
    sub_B7769C(this, method);
  }
  *p_aliveCount_5__3 = 0;
  v54 = *p_particleArray_5__2;
  if ( !*p_particleArray_5__2 )
    goto LABEL_98;
  v55 = *(_QWORD *)&v54->max_length;
  if ( (int)v55 >= 1 )
  {
    v56 = 0LL;
    while ( v56 < (unsigned int)v55 )
    {
      v57 = (UnityEngine_Object_o *)v54->m_Items[v56];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_Object__op_Equality(v57, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v57 )
          goto LABEL_98;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v57, 0LL) )
          UnityEngine_ParticleSystem__Stop_51807992((UnityEngine_ParticleSystem_o *)v57, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__328_o *)UnityEngine_ParticleSystem__IsAlive_51808292(
                                                                   (UnityEngine_ParticleSystem_o *)v57,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v55) = v54->max_length;
      if ( (__int64)++v56 >= (int)v55 )
        goto LABEL_95;
    }
LABEL_97:
    v59 = sub_B776C8(this);
    sub_B77668(v59, 0LL);
  }
LABEL_95:
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__328__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__328_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__328__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__328_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__DestroyAuraEffect_d__328_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__328__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__328_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__328__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__328_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__354___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__354_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__354__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__354_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyEffectOnParticleStop_d__354_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Int32_array **v11; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int aliveCount_5__3; // w8
  int32_t *p_aliveCount_5__3; // x21
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x22
  __int64 v22; // x8
  unsigned __int64 v23; // x23
  UnityEngine_Object_o *v24; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 v27; // x0

  v8 = this;
  if ( (byte_4389FB8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389FB8 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    p_aliveCount_5__3 = &v8->fields._aliveCount_5__3;
    aliveCount_5__3 = v8->fields._aliveCount_5__3;
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_36;
    v11 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   (UnityEngine_GameObject_o *)this,
                                   1,
                                   (const MethodInfo_1DEC424 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____69525928);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v11;
    p_particleArray_5__2 = &v8->fields._particleArray_5__2;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v11, v13, v14, v15, v16, v17, v18);
    if ( !v8->fields._particleArray_5__2 )
      goto LABEL_33;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !this )
      goto LABEL_36;
    if ( BYTE2(this->fields.__4__this) )
    {
LABEL_33:
      BattleActorControl__DestroyLoopEffect(_4__this, v8->fields.key, 0LL);
      return 0;
    }
    if ( !*p_particleArray_5__2 )
      goto LABEL_36;
    aliveCount_5__3 = (*p_particleArray_5__2)->max_length;
    v8->fields._aliveCount_5__3 = aliveCount_5__3;
    p_aliveCount_5__3 = &v8->fields._aliveCount_5__3;
  }
  if ( aliveCount_5__3 <= 0 )
  {
    if ( _4__this )
      goto LABEL_33;
LABEL_36:
    sub_B7769C(this, method);
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_36;
  v22 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v22 >= 1 )
  {
    v23 = 0LL;
    do
    {
      if ( v23 >= (unsigned int)v22 )
      {
        v27 = sub_B776C8(this);
        sub_B77668(v27, 0LL);
      }
      v24 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v23];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)UnityEngine_Object__op_Equality(v24, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v24 )
          goto LABEL_36;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v24, 0LL) )
          UnityEngine_ParticleSystem__Stop_51807992((UnityEngine_ParticleSystem_o *)v24, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__354_o *)UnityEngine_ParticleSystem__IsAlive_51808292(
                                                                             (UnityEngine_ParticleSystem_o *)v24,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v22) = particleArray_5__2->max_length;
      ++v23;
    }
    while ( (__int64)v23 < (int)v22 );
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__354__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__354_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__354__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__354_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__354_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__354__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__354_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__354__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__354_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__267___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__267__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *v8; // x20
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v13; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v15; // x0
  struct BattlePerformance_o *v16; // x8
  UnityEngine_Transform_o *transform; // x20
  int v18; // s0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  BattleServantData_o *v23; // x20
  int v24; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *v26; // x20
  unsigned __int64 v27; // x26
  BattleActorControl_o *ServantActor; // x21
  struct BattleServantData_o *v29; // x8
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  WebViewManager_o *Instance; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v33; // x21
  struct BattlePerformance_o *v34; // x8
  int i_5__2; // w8
  UnityEngine_WaitForEndOfFrame_o *v36; // x19
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  BattleServantConfConponent_o *v44; // x20
  __int64 v45; // x0
  int v46; // [xsp+Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_4389FB9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_USSequencer___ctor__);
    sub_B775C4(&System_Action_USSequencer__TypeInfo);
    sub_B775C4(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__);
    sub_B775C4(&BattlePerformance_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_B775C4(&StringLiteral_13592/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)sub_B775C4(&StringLiteral_23673/*"wait"*/);
    byte_4389FB9 = 1;
  }
  v46 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)BattleServantData__IsTDAppearance(
                                                                         (BattleServantData_o *)this,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          battleSvtData = _4__this->fields.battleSvtData;
          if ( !battleSvtData )
            goto LABEL_57;
          battleSvtData->fields.dressDispId = -1;
          v13 = _4__this->fields.battleSvtData;
          if ( !v13 )
            goto LABEL_57;
          v13->fields.isForceAppearance = 0;
        }
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v15 = BattlePerformance_TypeInfo;
              if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v15 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v15->static_fields->DefaultFov, 0LL);
              v16 = _4__this->fields.performance;
              if ( v16 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)v16->fields.actorcamera;
                if ( this )
                {
                  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                  *(UnityEngine_Vector3_o *)&v18 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v18, 0LL);
                    v46 = 1;
                    v21 = System_Int32__ToString((int32_t)&v46, 0LL);
                    v22 = System_String__Concat_44901936((System_String_o *)StringLiteral_13592/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v21, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)ConstantMaster__getValue(v22, 0LL);
                    v23 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_45:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v23 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v23->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v23,
                          this,
                          _4__this,
                          v23->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v33 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B77694(System_Action_USSequencer__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v33,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          (const MethodInfo_26A0868 *)Method_System_Action_USSequencer___ctor__);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v33,
                            0LL);
                          v34 = _4__this->fields.performance;
                          if ( v34 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)v34->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)BattleData__getStageEntity(
                                                                                               (BattleData_o *)this,
                                                                                               0LL);
                              if ( this )
                              {
                                if ( StageEntity__Is3_6BossBattle((StageEntity_o *)this, 0LL) )
                                {
                                  BattleActorControl__ChangeRotationEnemy(_4__this, 0, 0LL);
                                  BattleActorControl__ChangeAnimationCurveEnemy(_4__this, 0, 0LL);
                                }
                                return 0;
                              }
                            }
                          }
                        }
                      }
                    }
                    else
                    {
                      v24 = (int)this;
                      while ( 1 )
                      {
                        if ( !v23 )
                          goto LABEL_57;
                        if ( v24 == BattleServantData__getSvtId(v23, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_57;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_57;
                          _2__current = this->fields.__2__current;
                          v26 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_44:
                        ++v46;
                        v30 = System_Int32__ToString((int32_t)&v46, 0LL);
                        v31 = System_String__Concat_44901936((System_String_o *)StringLiteral_13592/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v30, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)ConstantMaster__getValue(
                                                                                         v31,
                                                                                         0LL);
                        v23 = _4__this->fields.battleSvtData;
                        v24 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_45;
                      }
                      v27 = 0LL;
                      while ( 1 )
                      {
                        if ( v27 >= (unsigned int)_2__current )
                        {
                          v45 = sub_B776C8(this);
                          sub_B77668(v45, 0LL);
                        }
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v26->fields.__4__this + v27),
                                         0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].klass) )
                          {
                            LOBYTE(this[17].klass) = 0;
                            v29 = ServantActor->fields.battleSvtData;
                            if ( !v29 )
                              break;
                            v29->fields.isSleepWaitModeReady = 1;
                            BattleActorControl__playAnimation_22508132(
                              ServantActor,
                              (System_String_o *)StringLiteral_23673/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_22508132(
                              ServantActor,
                              (System_String_o *)StringLiteral_23673/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v26->fields.__2__current;
                        if ( (__int64)++v27 >= (int)_2__current )
                          goto LABEL_44;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_57:
    sub_B7769C(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v8->fields._i_5__2;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= 3 )
    {
      v36 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v36, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v36;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B77560(p__2__current, (System_Int32_array **)v36, v38, v39, v40, v41, v42, v43);
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 2;
      return 1;
    }
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = 0;
  }
  v8->fields.__2__current = 0LL;
  v44 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B77560(v44, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&v44[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__267__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__267__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__267_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__267__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__267__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__267_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389FAE & 1) == 0 )
  {
    sub_B775C4(&BattleActorControl___c_TypeInfo);
    byte_4389FAE = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActorControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__137_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__137_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4389FB0 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_B775C4(&System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo);
    byte_4389FB0 = 1;
  }
  if ( !x )
    sub_B7769C(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v5 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_string__BattleActorAnimationEffect__c **)p_offset - 1) != System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo )
    {
      ++v5;
      p_offset += 4;
      if ( v5 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_B0F4C0(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__137_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4389FB1 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    byte_4389FB1 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__193_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__367_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.isSaveAnimation;
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__368_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__368_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__136_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  System_String_o *v4; // x20

  if ( (byte_4389FAF & 1) == 0 )
  {
    sub_B775C4(&BattleFBXComponent_TypeInfo);
    this = (BattleActorControl___c_o *)sub_B775C4(&StringLiteral_17215/*"body"*/);
    byte_4389FAF = 1;
  }
  if ( !x )
    goto LABEL_15;
  this = (BattleActorControl___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !this )
    goto LABEL_15;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL)
    && UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x, 0LL) )
  {
    this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
    v4 = (System_String_o *)this;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    }
    if ( !v4 )
      goto LABEL_15;
    if ( System_String__Contains(v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17215/*"body"*/, 0LL);
LABEL_15:
      sub_B7769C(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__327_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4389FB2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389FB2 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__288_object____cctor(const MethodInfo_1F81B4C *method)
{
  BattleActorControl___c__288_T__c *klass; // x20
  Il2CppClass *_0_BattleActorControl___c__288_T; // x20
  __int64 v4; // x0
  BattleActorControl___c__288_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleActorControl___c__288_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleActorControl___c__288_T__c *v16; // x19
  Il2CppClass *_2_BattleActorControl___c__288_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B0F2C4(method->klass);
  _0_BattleActorControl___c__288_T = klass->rgctx_data->_0_BattleActorControl___c__288_T_;
  if ( (BYTE2(_0_BattleActorControl___c__288_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(_0_BattleActorControl___c__288_T);
  v4 = sub_B77694(_0_BattleActorControl___c__288_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_B0F2C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleActorControl___c__288_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_B0F2C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleActorControl___c__288_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_B0F2C4(v16);
  _2_BattleActorControl___c__288_T = v16->rgctx_data->_2_BattleActorControl___c__288_T_;
  if ( (BYTE2(_2_BattleActorControl___c__288_T->vtable[0].methodPtr) & 1) == 0 )
    sub_B0F2C4(_2_BattleActorControl___c__288_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleActorControl___c__288_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B77560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleActorControl___c__288_object____ctor(
        BattleActorControl___c__288_T__o *this,
        const MethodInfo_1F81C28 *method)
{
  if ( !this )
    sub_B7769C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__288_object____UpdateMaterialsOnRenderders_b__288_0(
        BattleActorControl___c__288_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F81C40 *method)
{
  if ( (byte_438F329 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F329 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__288_object____UpdateMaterialsOnRenderders_b__288_1(
        BattleActorControl___c__288_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_1F81CA8 *method)
{
  if ( (byte_438F32A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438F32A = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass136_0___ctor(
        BattleActorControl___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass136_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_B7769C(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass137_0___ctor(
        BattleActorControl___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass137_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass137_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_B7769C(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, method);
}


void __fastcall BattleActorControl___c__DisplayClass165_0___ctor(
        BattleActorControl___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass165_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass165_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4389FB3 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_FsmTransition___);
    sub_B775C4(&Method_System_Func_FsmTransition__bool___ctor__);
    sub_B775C4(&System_Func_FsmTransition__bool__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass165_0__ExistMotionEvent_b__1__);
    byte_4389FB3 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !fsm )
    sub_B7769C(v5, v6);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_B77694(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass165_0__ExistMotionEvent_b__1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_FsmTransition__bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v9,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass165_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass165_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_B7769C(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass263_0___ctor(
        BattleActorControl___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass263_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass263_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass263_0_o *v4; // x20
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *targets; // x20

  v4 = this;
  if ( (byte_4389FB4 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass263_0_o *)sub_B775C4(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4389FB4 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass263_0_o *)_4__this->fields.performance) == 0LL
    || (targets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v4->fields.targets,
        this = (BattleActorControl___c__DisplayClass263_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0LL),
        !targets) )
  {
    sub_B7769C(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    targets,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleActorControl___c__DisplayClass275_0___ctor(
        BattleActorControl___c__DisplayClass275_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass275_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass275_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass275_0_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v6; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v8; // x20
  int32_t shadowEffectId; // w22
  UnityEngine_GameObject_o *v10; // x21
  UnityEngine_GameObject_o *v11; // x23
  int32_t v12; // w24
  int32_t LimitCount; // w25
  System_Int32_array **EffectToNode_22927716; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct BattleActorControl_o *v21; // x8
  UnityEngine_Object_o *v22; // x20
  struct BattleActorControl_o *v23; // x8
  UnityEngine_Transform_o *transform; // x20
  int v25; // s0
  struct BattleActorControl_o *v28; // x8
  UnityEngine_Transform_o *v29; // x20
  int v30; // s0
  struct BattleActorControl_o *v34; // x8
  UnityEngine_Transform_o *v35; // x20
  int v36; // s0
  struct BattleActorControl_o *v39; // x8

  v2 = this;
  if ( (byte_4389FB5 & 1) == 0 )
  {
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl___c__DisplayClass275_0_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_4389FB5 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_45;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    this = (BattleActorControl___c__DisplayClass275_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_45;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl___c__DisplayClass275_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v2->fields.__4__this;
      if ( !v6 )
        goto LABEL_45;
      if ( v6->fields.currentSpShadowEffectId == v2->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v6->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleActorControl___c__DisplayClass275_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v8 = v2->fields.__4__this;
          if ( !v8 )
            goto LABEL_45;
          this = (BattleActorControl___c__DisplayClass275_0_o *)v8->fields.shadowObj;
          if ( !this )
            goto LABEL_45;
          this = (BattleActorControl___c__DisplayClass275_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_45;
          shadowEffectId = v2->fields.shadowEffectId;
          v10 = (UnityEngine_GameObject_o *)this;
          this = (BattleActorControl___c__DisplayClass275_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_45;
          v11 = (UnityEngine_GameObject_o *)this;
          this = (BattleActorControl___c__DisplayClass275_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_45;
          v12 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0LL);
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          EffectToNode_22927716 = (System_Int32_array **)BattleEffectUtility__loadEffectToNode_22927716(
                                                           v10,
                                                           shadowEffectId,
                                                           v11,
                                                           v12,
                                                           LimitCount,
                                                           0LL);
          v8->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)EffectToNode_22927716;
          sub_B77560(
            (BattleServantConfConponent_o *)&v8->fields.specialShadowObj,
            EffectToNode_22927716,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          v21 = v2->fields.__4__this;
          if ( !v21 )
            goto LABEL_45;
          v22 = (UnityEngine_Object_o *)v21->fields.specialShadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleActorControl___c__DisplayClass275_0_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v23 = v2->fields.__4__this;
            if ( v23 )
            {
              this = (BattleActorControl___c__DisplayClass275_0_o *)v23->fields.specialShadowObj;
              if ( this )
              {
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
                  v28 = v2->fields.__4__this;
                  if ( v28 )
                  {
                    this = (BattleActorControl___c__DisplayClass275_0_o *)v28->fields.specialShadowObj;
                    if ( this )
                    {
                      v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                      *(UnityEngine_Quaternion_o *)&v30 = UnityEngine_Quaternion__get_identity(0LL);
                      if ( v29 )
                      {
                        UnityEngine_Transform__set_localRotation(v29, *(UnityEngine_Quaternion_o *)&v30, 0LL);
                        v34 = v2->fields.__4__this;
                        if ( v34 )
                        {
                          this = (BattleActorControl___c__DisplayClass275_0_o *)v34->fields.specialShadowObj;
                          if ( this )
                          {
                            v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                            *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
                            if ( v35 )
                            {
                              UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
                              v39 = v2->fields.__4__this;
                              if ( v39 )
                              {
                                this = (BattleActorControl___c__DisplayClass275_0_o *)v39->fields.specialShadowObj;
                                if ( this )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LABEL_45:
            sub_B7769C(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass287_0___ctor(
        BattleActorControl___c__DisplayClass287_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass287_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass287_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass287_0_o *v4; // x20

  v4 = this;
  if ( (byte_4389FB6 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass287_0_o *)sub_B775C4(&StringLiteral_16451/*"_fade"*/);
    byte_4389FB6 = 1;
  }
  if ( !material )
    sub_B7769C(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16451/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass326_0___ctor(
        BattleActorControl___c__DisplayClass326_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass326_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass326_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass367_0___ctor(
        BattleActorControl___c__DisplayClass367_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass367_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass367_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass367_0_o *)this->fields.component) == 0LL )
    sub_B7769C(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass370_0___ctor(
        BattleActorControl___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass370_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass370_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass370_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass370_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__326___ctor(
        BattleActorControl__coAddAura_d__326_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__326__MoveNext(
        BattleActorControl__coAddAura_d__326_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__coAddAura_d__326_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *Item; // x21
  System_Int32_array **Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleActorControl___c__DisplayClass326_0_o *v20; // x23
  BattleServantConfConponent_o *p__8__1; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t id; // w22
  Il2CppObject *klass; // x24
  System_Action_o *v30; // x23
  BattlePerformance_o *v31; // x24
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  System_String_o **p_effectPath_5__3; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  BattleServantConfConponent_o *v41; // x19
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *static_fields; // x8
  System_Int32_array **Empty; // x1
  int v57; // w22
  int32_t WeaponGroup; // w0
  __int64 v59; // x2
  Il2CppObject *v60; // x22
  __int64 v61; // x2
  Il2CppObject *v62; // x0
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  BattleEffectUtility_BuffEffectLoadArgument_o *v70; // x21
  const MethodInfo *v71; // x2
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *actorcamera; // x1
  Il2CppObject *v96; // x0
  int32_t v97; // [xsp+Ch] [xbp-64h] BYREF
  int32_t EffectFolder; // [xsp+18h] [xbp-58h] BYREF
  int32_t v99; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_438AB55 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&BattleEffectUtility_TypeInfo);
    sub_B775C4(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_B775C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_B775C4(&Method_UnityEngine_GameObject_AddComponent_BillBoard___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&string_TypeInfo);
    sub_B775C4(&Method_BattleActorControl___c__DisplayClass326_0__coAddAura_b__0__);
    sub_B775C4(&BattleActorControl___c__DisplayClass326_0_TypeInfo);
    sub_B775C4(&StringLiteral_6011/*"Effect/weapon/{0}"*/);
    this = (BattleActorControl__coAddAura_d__326_o *)sub_B775C4(&StringLiteral_6012/*"Effect/weapon/{0}/{1}"*/);
    byte_438AB55 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    p_effectPath_5__3 = &v8->fields._effectPath_5__3;
    v8->fields.__1__state = -1;
    goto LABEL_28;
  }
  if ( _1__state == 1 )
  {
    p__8__1 = (BattleServantConfConponent_o *)&v8->fields.__8__1;
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_68;
    this = (BattleActorControl__coAddAura_d__326_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_68;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
           v8->fields.auraEffectId,
           (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__326_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_68;
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                       v8->fields.auraEffectId,
                                       (const MethodInfo_2FF40B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__326_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_68;
    this = (BattleActorControl__coAddAura_d__326_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_68;
    Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      v8->fields.auraEffectId,
                                      (const MethodInfo_21FB894 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    p_effectEntity_5__2 = &v8->fields._effectEntity_5__2;
    v8->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    sub_B77560((BattleServantConfConponent_o *)&v8->fields._effectEntity_5__2, Entity, v14, v15, v16, v17, v18, v19);
    if ( !v8->fields._effectEntity_5__2 )
    {
LABEL_43:
      v70 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B77694(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v70, _4__this, v71);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v8->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        zero = UnityEngine_Vector3__get_zero(0LL);
        x = zero.fields.x;
        y = zero.fields.y;
        z = zero.fields.z;
        ActorSvtId = BattleActorControl__getActorSvtId(_4__this, 0LL);
        LimitCount = BattleActorControl__getLimitCount(_4__this, 0LL);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v101.fields.x = x;
        v101.fields.y = y;
        v101.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v101,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v70,
                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleActorControl__coAddAura_d__326_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_64;
        if ( v8->fields.priority > _4__this->fields._currentPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0LL);
          _4__this->fields._currentPriority_k__BackingField = v8->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)EffectToNode,
                                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleActorControl__coAddAura_d__326_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__326_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_1DEBEC8 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_68;
            Component_srcLineSprite = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_68;
            actorcamera = (Il2CppObject *)performance->fields.actorcamera;
            this->fields.__2__current = actorcamera;
            sub_B77560(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)actorcamera,
              v88,
              v89,
              v90,
              v91,
              v92,
              v93);
          }
          else if ( !Component_srcLineSprite )
          {
            goto LABEL_68;
          }
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__326_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
              v8->fields.auraEffectId,
              (WarBoardAIRoute_RouteData_o *)EffectToNode,
              (const MethodInfo_2FF4150 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_64:
            v8->fields._effectEntity_5__2 = 0LL;
            sub_B77560(
              (BattleServantConfConponent_o *)&v8->fields._effectEntity_5__2,
              0LL,
              v81,
              v82,
              v83,
              v84,
              v85,
              v86);
            return 0;
          }
        }
      }
LABEL_68:
      sub_B7769C(this, method);
    }
    v20 = (BattleActorControl___c__DisplayClass326_0_o *)sub_B77694(BattleActorControl___c__DisplayClass326_0_TypeInfo);
    BattleActorControl___c__DisplayClass326_0___ctor(v20, 0LL);
    v8->fields.__8__1 = v20;
    p__8__1 = (BattleServantConfConponent_o *)&v8->fields.__8__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v8->fields.__8__1,
      (System_Int32_array **)v20,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    if ( !v8->fields.__8__1 )
      goto LABEL_68;
    v8->fields.__8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_68;
    id = (*p_effectEntity_5__2)->fields.id;
    klass = (Il2CppObject *)p__8__1->klass;
    v30 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v30, klass, Method_BattleActorControl___c__DisplayClass326_0__coAddAura_b__0__, 0LL);
    v31 = _4__this->fields.performance;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v30, v31, 0LL);
  }
  if ( !p__8__1->klass )
    goto LABEL_68;
  if ( LOBYTE(p__8__1->klass->_1.name) )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B77560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    return result;
  }
  v8->fields.__8__1 = 0LL;
  sub_B77560(p__8__1, 0LL, v2, v3, v4, v5, v6, v7);
  effectEntity_5__2 = v8->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_43;
  static_fields = string_TypeInfo->static_fields;
  Empty = (System_Int32_array **)static_fields->Empty;
  v8->fields._effectPath_5__3 = static_fields->Empty;
  p_effectPath_5__3 = &v8->fields._effectPath_5__3;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields._effectPath_5__3, Empty, v48, v49, v50, v51, v52, v53);
  if ( !_4__this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__326_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__326_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_68;
  v57 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v57 )
  {
    v99 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__326_o *)j_il2cpp_value_box_0(int_TypeInfo, &v99, v59);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_68;
    v60 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder, v61);
    v63 = (System_Int32_array **)System_String__Format_44897472((System_String_o *)StringLiteral_6012/*"Effect/weapon/{0}/{1}"*/, v60, v62, 0LL);
  }
  else
  {
    v97 = WeaponGroup;
    v96 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v59);
    v63 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_6011/*"Effect/weapon/{0}"*/, v96, 0LL);
  }
  *p_effectPath_5__3 = (System_String_o *)v63;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields._effectPath_5__3, v63, v64, v65, v66, v67, v68, v69);
LABEL_28:
  this = (BattleActorControl__coAddAura_d__326_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__326_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     *p_effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8->fields.__2__current = 0LL;
    v41 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B77560(v41, 0LL, v35, v36, v37, v38, v39, v40);
    *(_DWORD *)&v41[-1].fields.isOpenAfter = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__326_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_68;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v8->fields.auraEffectId,
          (const MethodInfo_2FF43EC *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    *p_effectPath_5__3 = 0LL;
    sub_B77560((BattleServantConfConponent_o *)p_effectPath_5__3, 0LL, v42, v43, v44, v45, v46, v47);
    goto LABEL_43;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__326__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__326_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__326__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__326_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__coAddAura_d__326_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__326__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__326_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__326__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__326_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__333___ctor(
        BattleActorControl__colShiftServantChange_d__333_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__colShiftServantChange_d__333__MoveNext(
        BattleActorControl__colShiftServantChange_d__333_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colShiftServantChange_d__333_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  NGUIFader_o *fadeComp_5__2; // x20
  int v20; // s0
  DefCoroutine_c *v24; // x0
  System_Int32_array **milliSecTwo; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct BattleActionData_ShiftServant_o *v28; // x8
  __int64 v29; // x2
  System_Int32_array **v30; // x0
  BattleServantConfConponent_o *v31; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int v38; // w8
  __int64 v39; // x2
  System_Int32_array **v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *v48; // x21
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *gameObject; // x20
  __int64 v58; // x2
  System_Int32_array **v59; // x0
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  BattleServantConfConponent_o *p_moveEffect_5__3; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x2
  System_Int32_array **v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  __int64 v81; // x2
  System_Int32_array **v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  NGUIFader_o *v89; // x21
  int v90; // s0
  struct BattlePerformance_o *v94; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v96; // x8
  struct BattleData_o *data; // x8
  System_Int32_array **v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  BattleServantConfConponent_o *p_fadeComp_5__2; // x19
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x0
  int v113; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_438AB57 & 1) == 0 )
  {
    sub_B775C4(&DefCoroutine_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__colShiftServantChange_d__333_o *)sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438AB57 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)v2->fields.shiftSvt;
      if ( !this )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__333_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      shiftSvt = v2->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_85;
      if ( !shiftSvt->fields.isChange )
        goto LABEL_80;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_85;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v2->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_srcLineSprite;
      sub_B77560(
        (BattleServantConfConponent_o *)&v2->fields._fadeComp_5__2,
        Component_srcLineSprite,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      if ( !v2->fields.isShift )
        goto LABEL_13;
      fadeComp_5__2 = v2->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
      if ( !fadeComp_5__2 )
        goto LABEL_85;
      NGUIFader__FadeStart(fadeComp_5__2, *(UnityEngine_Color_o *)&v20, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v24 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v24 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (System_Int32_array **)v24->static_fields->milliSecTwo;
      v2->fields.__2__current = (Il2CppObject *)milliSecTwo;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, milliSecTwo, v13, v14, v15, v16, v17, v18);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_85;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_85;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v113 = 0;
      v74 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113, v73);
      v2->fields.__2__current = (Il2CppObject *)v74;
      v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v31, v74, v75, v76, v77, v78, v79, v80);
      v38 = 2;
      goto LABEL_78;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_85;
      v28 = v2->fields.shiftSvt;
      if ( !v28 )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_85;
      BattlePerformance__unloadServantSet_18316492((BattlePerformance_o *)this, v28->fields.loadedAssetArgs, 0, 0LL);
      v113 = 0;
      v30 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113, v29);
      v2->fields.__2__current = (Il2CppObject *)v30;
      v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v31, v30, v32, v33, v34, v35, v36, v37);
      v38 = 3;
      goto LABEL_78;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_85;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_25:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colShiftServantChange_d__333_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v113 = 0;
        v40 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113, v39);
        v2->fields.__2__current = (Il2CppObject *)v40;
        v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v31, v40, v41, v42, v43, v44, v45, v46);
        v38 = 4;
LABEL_78:
        *(_DWORD *)&v31[-1].fields.isOpenAfter = v38;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_85;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_42;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_85;
      v48 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)this,
                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v48, 0LL, 0LL) )
        goto LABEL_42;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v48, 0LL);
LABEL_42:
        v49 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v2->fields._moveEffect_5__3 = (struct System_Collections_Generic_List_int__o *)v49;
        sub_B77560((BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3, v49, v50, v51, v52, v53, v54, v55);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
          {
            v112 = sub_B776C8(this);
            sub_B77668(v112, 0LL);
          }
          this = (BattleActorControl__colShiftServantChange_d__333_o *)motionFSM->m_Items[0];
          if ( this )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_36310192(gameObject, 0LL);
            v113 = 0;
            v59 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113, v58);
            v2->fields.__2__current = (Il2CppObject *)v59;
            v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
            sub_B77560(v31, v59, v60, v61, v62, v63, v64, v65);
            v38 = 5;
            goto LABEL_78;
          }
        }
      }
      goto LABEL_85;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_25;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_85;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_58:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colShiftServantChange_d__333_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v113 = 0;
        v82 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113, v81);
        v2->fields.__2__current = (Il2CppObject *)v82;
        v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v31, v82, v83, v84, v85, v86, v87, v88);
        v38 = 6;
        goto LABEL_78;
      }
      if ( !_4__this )
        goto LABEL_85;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v2->fields.isShift )
        goto LABEL_67;
      v89 = v2->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
      if ( !v89 )
        goto LABEL_85;
      NGUIFader__FadeStart(v89, *(UnityEngine_Color_o *)&v90, 0.2, 1, 0LL, 0, 0LL);
LABEL_67:
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_76;
      v94 = _4__this->fields.performance;
      if ( !v94 )
        goto LABEL_85;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)v94->fields.data;
      if ( !this )
        goto LABEL_85;
      BattleData__replaceCommandCard(
        (BattleData_o *)this,
        battleSvtData->fields.uniqueId,
        battleSvtData->fields.uniqueId,
        0LL);
      v96 = _4__this->fields.performance;
      if ( !v96 )
        goto LABEL_85;
      data = v96->fields.data;
      if ( !data )
        goto LABEL_85;
      this = (BattleActorControl__colShiftServantChange_d__333_o *)data->fields.logic;
      if ( !this )
        goto LABEL_85;
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_76:
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      if ( v2->fields._moveEffect_5__3 )
      {
        v113 = 0;
        v98 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113, v67);
        v2->fields.__2__current = (Il2CppObject *)v98;
        v31 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v31, v98, v99, v100, v101, v102, v103, v104);
        v38 = 7;
        goto LABEL_78;
      }
LABEL_79:
      v2->fields._fadeComp_5__2 = 0LL;
      p_fadeComp_5__2 = (BattleServantConfConponent_o *)&v2->fields._fadeComp_5__2;
      sub_B77560(p_fadeComp_5__2, 0LL, v67, v68, v69, v70, v71, v72);
      p_fadeComp_5__2->monitor = 0LL;
      sub_B77560(p_moveEffect_5__3, 0LL, v106, v107, v108, v109, v110, v111);
LABEL_80:
      this = (BattleActorControl__colShiftServantChange_d__333_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__333_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0LL)) == 0LL )
      {
LABEL_85:
        sub_B7769C(this, method);
      }
      BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)this, 0LL);
      return 0;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_58;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_85;
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_79;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__333__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__333_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__333__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__333_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__colShiftServantChange_d__333_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__333__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__333_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__333__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__333_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__332___ctor(
        BattleActorControl__colShiftServant_d__332_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__332__MoveNext(
        BattleActorControl__colShiftServant_d__332_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  bool result; // w0
  __int64 v13; // x2
  Il2CppObject *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Action_o *finishCallback; // x0
  int v22; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438AB56 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    byte_438AB56 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    finishCallback = this->fields.finishCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(finishCallback, 0LL);
    return 0;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      if ( _4__this )
      {
        v5 = (Il2CppObject *)BattleActorControl__colShiftServantChange(
                               _4__this,
                               this->fields.shiftSvt,
                               this->fields.isShift,
                               0LL);
        this->fields.__2__current = v5;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)v5,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
LABEL_13:
      sub_B7769C(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  v22 = 0;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v13);
  this->fields.__2__current = v14;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.__1__state = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__332__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__332_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__332__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__332_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__colShiftServant_d__332_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__332__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__332_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__332__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__332_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__321___ctor(
        BattleActorControl__collChangeAppearance_d__321_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__321__MoveNext(
        BattleActorControl__collChangeAppearance_d__321_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__321_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  __int64 v4; // x2
  System_Int32_array **v5; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  bool result; // w0
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  __int64 v16; // x2
  System_Int32_array **v17; // x0
  BattleServantConfConponent_o *v18; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w8
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v28; // x0
  BattleServantConfConponent_o *p_moveEffect_5__2; // x19
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x2
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct BattleServantData_o *v44; // x8
  ServantAssetArgs_o *v45; // x21
  _BOOL4 isForceAppearance; // w22
  __int64 v47; // x2
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x2
  System_Int32_array **v56; // x0
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int v63; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_438AB58 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__collChangeAppearance_d__321_o *)sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    byte_438AB58 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__321_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_50;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__321_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_50;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v63 = 0;
      v5 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v63, v4);
      v2->fields.__2__current = (Il2CppObject *)v5;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, v5, v7, v8, v9, v10, v11, v12);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_27;
      this = (BattleActorControl__collChangeAppearance_d__321_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_50;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_27;
      this = (BattleActorControl__collChangeAppearance_d__321_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_50;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_27:
      v28 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = (struct System_Collections_Generic_List_int__o *)v28;
      p_moveEffect_5__2 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__2;
      sub_B77560(p_moveEffect_5__2, v28, v30, v31, v32, v33, v34, v35);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v63 = 0;
      v37 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v63, v36);
      p_moveEffect_5__2[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v37;
      sub_B77560((BattleServantConfConponent_o *)((char *)p_moveEffect_5__2 - 16), v37, v38, v39, v40, v41, v42, v43);
      *(_DWORD *)&p_moveEffect_5__2[-1].fields.isEquip = 2;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_50;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__unloadBattleActor(LoadedAssetArgs_k__BackingField, 0LL);
      v63 = 0;
      v17 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v63, v16);
      v2->fields.__2__current = (Il2CppObject *)v17;
      v18 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v18, v17, v19, v20, v21, v22, v23, v24);
      v25 = 3;
      goto LABEL_46;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__321_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_50;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__321_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__321_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0LL);
      v44 = _4__this->fields.battleSvtData;
      if ( !v44 )
        goto LABEL_50;
      v45 = (ServantAssetArgs_o *)this;
      isForceAppearance = v44->fields.isForceAppearance;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadBattleActor(v45, isForceAppearance, 0LL);
LABEL_36:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__collChangeAppearance_d__321_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v63 = 0;
        v48 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v63, v47);
        v2->fields.__2__current = (Il2CppObject *)v48;
        v18 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v18, v48, v49, v50, v51, v52, v53, v54);
        v25 = 4;
      }
      else
      {
        if ( !_4__this )
LABEL_50:
          sub_B7769C(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( !v2->fields._moveEffect_5__2 )
          return 0;
        v63 = 0;
        v56 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v63, v55);
        v2->fields.__2__current = (Il2CppObject *)v56;
        v18 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v18, v56, v57, v58, v59, v60, v61, v62);
        v25 = 5;
      }
LABEL_46:
      *(_DWORD *)&v18[-1].fields.isOpenAfter = v25;
      return 1;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_36;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__321__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__321_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__321__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__321_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__collChangeAppearance_d__321_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__321__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__321_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__321__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__321_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__316___ctor(
        BattleActorControl__colloadDressServant_d__316_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__316__MoveNext(
        BattleActorControl__colloadDressServant_d__316_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__316_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  __int64 v5; // x2
  __int64 v6; // x2
  System_Int32_array **v7; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v18; // x0
  BattleServantConfConponent_o *p_moveEffect_5__3; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x2
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  __int64 v36; // x2
  System_Int32_array **v37; // x0
  BattleServantConfConponent_o *v38; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int v45; // w8
  struct BattleServantData_o *v46; // x8
  ServantAssetArgs_o *updated; // x21
  __int64 v48; // x2
  System_Int32_array **v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleServantConfConponent_o *v56; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct BattleServantData_o *v63; // x8
  ServantAssetArgs_o *v64; // x21
  __int64 v65; // x2
  System_Int32_array **v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x2
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int v95; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_438AB59 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl__colloadDressServant_d__316_o *)sub_B775C4(&StringLiteral_5626/*"END_LOAD"*/);
    byte_438AB59 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_62;
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_73;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_73;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v95 = 0;
      v7 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v6);
      v2->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, v7, v9, v10, v11, v12, v13, v14);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_23;
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_73;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_23;
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_73;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_23:
      v18 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__3 = (struct System_Collections_Generic_List_int__o *)v18;
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      sub_B77560(p_moveEffect_5__3, v18, v20, v21, v22, v23, v24, v25);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v95 = 0;
      v27 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v26);
      *(_QWORD *)&p_moveEffect_5__3[-1].fields.isEquip = v27;
      sub_B77560((BattleServantConfConponent_o *)((char *)p_moveEffect_5__3 - 24), v27, v28, v29, v30, v31, v32, v33);
      LODWORD(p_moveEffect_5__3[-1].fields.BattleAssetUIAtlas) = 2;
      break;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_73;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( v2->fields.flg )
      {
        if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
        v95 = 0;
        v37 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v36);
        v2->fields.__2__current = (Il2CppObject *)v37;
        v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v38, v37, v39, v40, v41, v42, v43, v44);
        v45 = 3;
      }
      else
      {
        if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
        v95 = 0;
        v88 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v87);
        v2->fields.__2__current = (Il2CppObject *)v88;
        v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v38, v88, v89, v90, v91, v92, v93, v94);
        v45 = 5;
      }
      goto LABEL_63;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v46 = _4__this->fields.battleSvtData;
      if ( !v46 )
        goto LABEL_73;
      v46->fields.dressDispId = v2->fields._dressId_5__2;
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      updated = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(updated, 0, 0LL);
LABEL_38:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colloadDressServant_d__316_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_58;
      v95 = 0;
      v49 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v48);
      v2->fields.__2__current = (Il2CppObject *)v49;
      v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v38, v49, v50, v51, v52, v53, v54, v55);
      v45 = 4;
      goto LABEL_63;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_38;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v63 = _4__this->fields.battleSvtData;
      if ( !v63 )
        goto LABEL_73;
      v63->fields.dressDispId = -1;
      this = (BattleActorControl__colloadDressServant_d__316_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      v64 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(v64, 0, 0LL);
LABEL_53:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colloadDressServant_d__316_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v95 = 0;
        v66 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v65);
        v2->fields.__2__current = (Il2CppObject *)v66;
        v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v38, v66, v67, v68, v69, v70, v71, v72);
        v45 = 6;
      }
      else
      {
LABEL_58:
        if ( !_4__this )
LABEL_73:
          sub_B7769C(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        v56 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
        if ( v2->fields._moveEffect_5__3 )
        {
          v95 = 0;
          v73 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v57);
          v2->fields.__2__current = (Il2CppObject *)v73;
          v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B77560(v38, v73, v74, v75, v76, v77, v78, v79);
          v45 = 7;
        }
        else
        {
LABEL_61:
          v56->klass = 0LL;
          sub_B77560(v56, 0LL, v57, v58, v59, v60, v61, v62);
LABEL_62:
          v95 = 0;
          v80 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v95, v5);
          v2->fields.__2__current = (Il2CppObject *)v80;
          v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B77560(v38, v80, v81, v82, v83, v84, v85, v86);
          v45 = 8;
        }
      }
LABEL_63:
      *(_DWORD *)&v38[-1].fields.isOpenAfter = v45;
      break;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_53;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v56 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_61;
    case 8:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      BattleActorControl__sendEventFSM_22495744(_4__this, (System_String_o *)StringLiteral_5626/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__316__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__316_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__316__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__316_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__colloadDressServant_d__316_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__316__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__316_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__316__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__316_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__313___ctor(
        BattleActorControl__colloadTransformServant_d__313_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__313__MoveNext(
        BattleActorControl__colloadTransformServant_d__313_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadTransformServant_d__313_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v14; // x20
  __int64 v15; // x2
  System_Int32_array **v16; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  bool result; // w0
  System_Int32_array **v25; // x0
  BattleServantConfConponent_o *v26; // x19
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // w8
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v35; // x21
  const MethodInfo *v36; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x23
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **ShiftServant; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct BattleActionData_ShiftServant_o *v62; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 v64; // x11
  BattleServantSnapShotShiftServant_o *v65; // x1
  __int64 v66; // x2
  __int64 v67; // x2
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v76; // x8
  struct BattlePerformance_o *v77; // x8
  System_Int32_array **v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x0
  int v93; // [xsp+Ch] [xbp-34h] BYREF

  v2 = this;
  if ( (byte_438AB5A & 1) == 0 )
  {
    sub_B775C4(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_B775C4(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
    sub_B775C4(&System_GC_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
    sub_B775C4(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&OptionManager_TypeInfo);
    sub_B775C4(&ServantAssetLoadManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (BattleActorControl__colloadTransformServant_d__313_o *)sub_B775C4(&StringLiteral_5626/*"END_LOAD"*/);
    byte_438AB5A = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_81;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_81;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_81;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_81;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_18:
      v6 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = (struct System_Collections_Generic_List_int__o *)v6;
      sub_B77560((BattleServantConfConponent_o *)&v2->fields._moveEffect_5__2, v6, v7, v8, v9, v10, v11, v12);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_81;
      if ( !motionFSM->max_length )
      {
        v92 = sub_B776C8(this);
        sub_B77668(v92, 0LL);
      }
      v14 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36309980(v14, 0LL);
      v93 = 0;
      v16 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v93, v15);
      v2->fields.__2__current = (Il2CppObject *)v16;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(p__2__current, v16, v18, v19, v20, v21, v22, v23);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      battleSvtData = _4__this->fields.battleSvtData;
      v35 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_B77694(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v35, battleSvtData, v36);
      if ( !v35 )
        goto LABEL_81;
      svtId_k__BackingField = v35->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v35->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v35->fields._overwriteSvtVoiceId_k__BackingField;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0LL);
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v40,
          (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v40;
        sub_B77560(
          (BattleServantConfConponent_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (System_Int32_array **)v40,
          v41,
          v42,
          v43,
          v44,
          v45,
          v46);
        this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_81;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_81;
      ShiftServant = (System_Int32_array **)BattleActionData__getShiftServant((BattleActionData_o *)this, 0LL);
      v2->fields._shiftSvtData_5__3 = (struct BattleActionData_ShiftServant_o *)ShiftServant;
      sub_B77560(
        (BattleServantConfConponent_o *)&v2->fields._shiftSvtData_5__3,
        ShiftServant,
        v48,
        v49,
        v50,
        v51,
        v52,
        v53);
      shiftSvtData_5__3 = v2->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_81;
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_81;
      BattlePerformance__unloadServantSet_18316492(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0LL);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleActorControl__colloadTransformServant_d__313_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_44383624(0LL);
        v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v55, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v55;
        v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B77560(v26, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
        v33 = 2;
        goto LABEL_80;
      }
LABEL_48:
      v62 = v2->fields._shiftSvtData_5__3;
      if ( !v62 )
        goto LABEL_81;
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_81;
      AfterSvtCache_k__BackingField = v62->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (v64 = *(&BattleServantSnapShotShiftServant_TypeInfo->_2.bitflags2 + 1),
            *(&AfterSvtCache_k__BackingField->klass->_2.bitflags2 + 1) >= (unsigned int)v64) )
      {
        v65 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[v64 - 1] == BattleServantSnapShotShiftServant_TypeInfo
            ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
            : 0LL;
      }
      else
      {
        v65 = 0LL;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v65, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_81;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_63:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colloadTransformServant_d__313_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
          BattleActorControl__setDir(_4__this, 0LL);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0LL);
          this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v76 = _4__this->fields.battleSvtData;
              if ( v76 )
              {
                this = (BattleActorControl__colloadTransformServant_d__313_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard((BattleData_o *)this, v76->fields.uniqueId, v76->fields.uniqueId, 0LL);
                  v77 = _4__this->fields.performance;
                  if ( v77 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__313_o *)v77->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v77->fields.data,
                        _4__this->fields.battleSvtData,
                        0LL);
                      this = (BattleActorControl__colloadTransformServant_d__313_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__313_o *)BattlePerformance__get_FieldEnvData(
                                                                                         (BattlePerformance_o *)this,
                                                                                         0LL);
                        if ( this )
                        {
                          BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
                            (BattleFieldEnvironmentData_o *)this,
                            0LL);
                          if ( v2->fields._moveEffect_5__2 )
                          {
                            v93 = 0;
                            v78 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v93, v66);
                            v2->fields.__2__current = (Il2CppObject *)v78;
                            v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                            sub_B77560(v26, v78, v79, v80, v81, v82, v83, v84);
                            v33 = 5;
                          }
                          else
                          {
LABEL_79:
                            v93 = 0;
                            v85 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v93, v66);
                            v2->fields.__2__current = (Il2CppObject *)v85;
                            v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                            sub_B77560(v26, v85, v86, v87, v88, v89, v90, v91);
                            v33 = 6;
                          }
                          goto LABEL_80;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_81:
        sub_B7769C(this, method);
      }
      v93 = 0;
      v68 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v93, v67);
      v2->fields.__2__current = (Il2CppObject *)v68;
      v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v26, v68, v69, v70, v71, v72, v73, v74);
      v33 = 4;
LABEL_80:
      *(_DWORD *)&v26[-1].fields.isOpenAfter = v33;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__313_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_81;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__313_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_81;
      v25 = (System_Int32_array **)AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v25;
      v26 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B77560(v26, v25, v27, v28, v29, v30, v31, v32);
      v33 = 3;
      goto LABEL_80;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      goto LABEL_48;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_63;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      goto LABEL_79;
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      BattleActorControl__sendEventFSM_22495744(_4__this, (System_String_o *)StringLiteral_5626/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__313__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__313_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__313__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__313_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__colloadTransformServant_d__313_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__313__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__313_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__313__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__313_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__206___ctor(
        BattleActorControl__coroutinePostCallBack_d__206_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__206__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__206_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v12; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v14; // x1
  Il2CppObject **v15; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v17; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_438AB5B & 1) == 0 )
  {
    sub_B775C4(&DefCoroutine_TypeInfo);
    sub_B775C4(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_438AB5B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B7769C(0LL, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, const char *))callBack->klass[1]._1.gc_desc)(
      callBack,
      callBack->klass[1]._1.name);
    return 0;
  }
  if ( _1__state )
    return 0;
  waitTime = this->fields.waitTime;
  this->fields.__1__state = -1;
  if ( waitTime >= 0.0 )
  {
    v17 = (UnityEngine_WaitForSeconds_o *)sub_B77694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v17, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = &this->fields.__2__current;
    sub_B77560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v17, v19, v20, v21, v22, v23, v24);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v12 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v12 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v12->static_fields;
    v14 = *static_fields;
    this->fields.__2__current = *static_fields;
    v15 = &this->fields.__2__current;
    sub_B77560((BattleServantConfConponent_o *)v15, (System_Int32_array **)v14, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v15 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__206__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__206_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__206__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__206_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__coroutinePostCallBack_d__206_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__206__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__206_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__206__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__206_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__319___ctor(
        BattleActorControl__waitChangeApp_d__319_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__319__MoveNext(
        BattleActorControl__waitChangeApp_d__319_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl__waitChangeApp_d__319_o *v3; // x19
  BattleActorControl_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x0
  System_Int32_array **started; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0

  _1__state = this->fields.__1__state;
  v3 = this;
  if ( _1__state == 1 )
  {
    this = (BattleActorControl__waitChangeApp_d__319_o *)this->fields.callback;
    v3->fields.__1__state = -1;
    if ( !this )
      goto LABEL_8;
    System_Action__Invoke((System_Action_o *)this, 0LL);
  }
  else if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = BattleActorControl__collChangeAppearance(_4__this, 0LL);
      started = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_36304832(
                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                         v5,
                                         0LL);
      v3->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
      sub_B77560(p__2__current, started, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_8:
    sub_B7769C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__319__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__319_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__319__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__319_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_BattleActorControl__waitChangeApp_d__319_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__319__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__319_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__319__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__319_o *this,
        const MethodInfo *method)
{
  ;
}