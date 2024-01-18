void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418B8FE & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_TypeInfo, v1);
    byte_418B8FE = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleLogData_o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_int__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  TranslucentActorVisualInfo_o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Int32_array **v55; // x1
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Hashtable_o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Hashtable_o *v69; // x20
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v81; // x20
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7

  if ( (byte_418B8FD & 1) == 0 )
  {
    sub_B2C35C(&BattleLogData_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v9);
    sub_B2C35C(&TranslucentActorVisualInfo_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_16232/*"act"*/, v11);
    sub_B2C35C(&StringLiteral_1/*""*/, v12);
    byte_418B8FD = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v13 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v13,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.auraList,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.actorScale = 1.0;
  v20 = (BattleLogData_o *)sub_B2C42C(BattleLogData_TypeInfo);
  BattleLogData___ctor_19398020(v20, (System_String_o *)StringLiteral_16232/*"act"*/, 90, 0LL);
  this->fields.battleLog = v20;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battleLog,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v27,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v27;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.buffLoopEffectDict,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v34,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v34;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.reservedEffectBuffEffectIdList,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v41 = (TranslucentActorVisualInfo_o *)sub_B2C42C(TranslucentActorVisualInfo_TypeInfo);
  TranslucentActorVisualInfo___ctor(v41, 0LL);
  this->fields.translucentActorVisualInfo = v41;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.translucentActorVisualInfo,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v48, v49, v50, v51, v52, v53, v54);
  v55 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.partAnimationSaveKey, v55, v56, v57, v58, v59, v60, v61);
  v62 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v62, 0LL);
  this->fields.EventList = v62;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.EventList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v69 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v69, 0LL);
  this->fields.CompleteList = v69;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.CompleteList,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v81 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v81,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v81;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventClassAddedEventDict,
    (System_Int32_array **)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  System_Action_int__o *v9; // x21

  if ( (byte_418B8E9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_int___, v4);
    sub_B2C35C(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__341_0__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    byte_418B8E9 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_B2C434(0LL, method);
  v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v9 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v9,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__341_0__,
    (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(v8, (System_Action_T__o *)v9, (const MethodInfo_17273BC *)Method_BasicHelper_ForEach_int___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ActiveReservedBuffEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *buffLoopEffectDict; // x0
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w22
  __int64 v13; // x0

  if ( (byte_418B8E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v8);
    byte_418B8E8 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                             (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      v10 = *((_DWORD *)buffLoopEffectDict + 6);
      v11 = buffLoopEffectDict;
      if ( v10 >= 1 )
      {
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= v10 )
          {
            v13 = sub_B2C460(buffLoopEffectDict);
            sub_B2C400(v13, 0LL);
          }
          buffLoopEffectDict = (void *)*((_QWORD *)v11 + (int)v12 + 4);
          if ( !buffLoopEffectDict )
            break;
          buffLoopEffectDict = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffLoopEffectDict, 0LL);
          if ( !buffLoopEffectDict )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 0, 0LL);
          v10 = *((_DWORD *)v11 + 6);
          if ( (int)++v12 >= v10 )
            goto LABEL_17;
        }
LABEL_22:
        sub_B2C434(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void __fastcall BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v8; // x20
  unsigned __int64 v9; // x22
  struct BattleFBXComponent_o **p_fbxcomponent; // x23
  WarBoardManager_TaskList_o *v11; // x21
  __int64 v12; // x0

  v4 = this;
  if ( (byte_418B8C4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v5);
    this = (BattleActorControl_o *)sub_B2C35C(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__,
                                     v6);
    byte_418B8C4 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                   obj,
                                   (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  actorObject = this->fields.actorObject;
  v8 = this;
  if ( (int)actorObject >= 1 )
  {
    v9 = 0LL;
    p_fbxcomponent = &this->fields.fbxcomponent;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)actorObject )
      {
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v11 = (WarBoardManager_TaskList_o *)p_fbxcomponent[v9];
      this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                       v11,
                                       (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
      }
      LODWORD(actorObject) = v8->fields.actorObject;
      if ( (__int64)++v9 >= (int)actorObject )
        return;
    }
LABEL_14:
    sub_B2C434(this, obj);
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

  if ( (byte_418B8E3 & 1) == 0 )
  {
    sub_B2C35C(&ChangeBattlePhaseOverwriteAnimation_TypeInfo, *(_QWORD *)&svtId);
    byte_418B8E3 = 1;
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
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B2C42C(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, 0LL);
    this->fields.overwriteAnim = v13;
    sub_B2C2F8(
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
    sub_B2C434(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0

  if ( (byte_418B8E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&effectId);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_418B8E7 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
LABEL_7:
    sub_B2C434(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  System_Collections_Generic_List_int___Add(
    reservedEffectBuffEffectIdList,
    effectId,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleActorControl__AddServantVoicePlayed(
        BattleActorControl_o *this,
        System_String_array *playedSoundArray,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v11; // x21

  v4 = this;
  if ( (byte_418B88F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_string___ctor__, playedSoundArray);
    sub_B2C35C(&System_Action_string__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_string___, v6);
    sub_B2C35C(&Method_BattleActorControl__AddServantVoicePlayed_b__208_0__, v7);
    this = (BattleActorControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418B88F = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_B2C434(this, playedSoundArray);
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
        v11 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v11,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__208_0__,
          (const MethodInfo_24BBAD8 *)Method_System_Action_string___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v11,
          (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void __fastcall BattleActorControl__ApplySpecialWaitModeFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o **v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  BattleActorControl_o *v5; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t Value; // w0
  int32_t v9; // w20
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v11; // x20
  unsigned __int64 v12; // x26
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  __int64 v18; // x0
  int v19; // [xsp+Ch] [xbp-44h] BYREF

  v2 = (BattleActorControl_o **)this;
  if ( (byte_418B8E6 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_13342/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v3);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_23190/*"wait"*/, v4);
    byte_418B8E6 = 1;
  }
  v19 = 0;
  v5 = v2[53];
  if ( !v5 )
    goto LABEL_27;
  LOBYTE(v5[1].fields.buffLoopEffectDict) = BYTE1(v5[1].fields.buffLoopEffectDict);
  v19 = 1;
  v6 = System_Int32__ToString((int32_t)&v19, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_13342/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v6, 0LL);
  Value = ConstantMaster__getValue(v7, 0LL);
  if ( Value != -1 )
  {
    v9 = Value;
    while ( 1 )
    {
      this = v2[53];
      if ( !this )
        goto LABEL_27;
      if ( v9 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v2[49];
        if ( !this )
          goto LABEL_27;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, 0LL);
        if ( !this )
          goto LABEL_27;
        actorObject = this->fields.actorObject;
        v11 = this;
        if ( (int)actorObject >= 1 )
          break;
      }
LABEL_25:
      ++v19;
      v16 = System_Int32__ToString((int32_t)&v19, 0LL);
      v17 = System_String__Concat_44305532((System_String_o *)StringLiteral_13342/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v16, 0LL);
      v9 = ConstantMaster__getValue(v17, 0LL);
      if ( v9 == -1 )
        return;
    }
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)actorObject )
      {
        v18 = sub_B2C460(this);
        sub_B2C400(v18, 0LL);
      }
      this = v2[16];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v11->fields.fbxcomponent + v12),
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
        if ( BYTE1(this[1].fields.buffLoopEffectDict) )
        {
          LOBYTE(this[1].fields.buffLoopEffectDict) = 1;
          BattleActorControl__playAnimation_32449920(ServantActor, (System_String_o *)StringLiteral_23190/*"wait"*/, 0, v14);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_32449920(ServantActor, (System_String_o *)StringLiteral_23190/*"wait"*/, 1, v15);
      }
      LODWORD(actorObject) = v11->fields.actorObject;
      if ( (__int64)++v12 >= (int)actorObject )
        goto LABEL_25;
    }
LABEL_27:
    sub_B2C434(this, method);
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

  if ( (byte_418B863 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_MaterialPropertyBlock_TypeInfo, method);
    byte_418B863 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_B2C42C(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0LL);
  this->fields.mpb = v3;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.mpb, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeAnimationCurveEnemy(
        BattleActorControl_o *this,
        bool enable,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  bool v7; // w21
  __int64 v8; // x22
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x25
  UnityEngine_Object_o *v12; // x20
  struct BattlePerformance_o *v13; // x8
  struct UnityEngine_GameObject_array *v14; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  __int64 v16; // x0

  v4 = this;
  if ( (byte_418B8B4 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___, enable);
    this = (BattleActorControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418B8B4 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_B2C434(this, enable);
  v7 = enable;
  v8 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_23;
    max_length = e_actorlist->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_25;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v8);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v13 = v4->fields.performance;
      if ( !v13 )
        goto LABEL_23;
      v14 = v13->fields.e_actorlist;
      if ( !v14 )
        goto LABEL_23;
      if ( v11 >= v14->max_length )
      {
LABEL_25:
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v14->obj.klass + v8);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
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
        LOBYTE(ComponentInChildren_Dropdown_DropdownItem->fields.m_Text) = v7;
      }
    }
    performance = v4->fields.performance;
    ++v8;
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
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  __int64 v7; // x22
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x26
  UnityEngine_Object_o *v11; // x21
  struct BattlePerformance_o *v12; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  __int64 v15; // x0

  v4 = this;
  if ( (byte_418B8B3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___, enable);
    this = (BattleActorControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418B8B3 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_25:
    sub_B2C434(this, enable);
  v7 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_25;
    max_length = e_actorlist->max_length;
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_27;
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
        goto LABEL_25;
      v13 = v12->fields.e_actorlist;
      if ( !v13 )
        goto LABEL_25;
      if ( v10 >= v13->max_length )
      {
LABEL_27:
        v15 = sub_B2C460(this);
        sub_B2C400(v15, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_25;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
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
          goto LABEL_25;
        if ( enable )
          LOBYTE(ComponentInChildren_Dropdown_DropdownItem->fields.m_Text) = 1;
        else
          BattleActorRotationComponent__RotationStop(
            (BattleActorRotationComponent_o *)ComponentInChildren_Dropdown_DropdownItem,
            (const MethodInfo *)enable);
      }
    }
    performance = v4->fields.performance;
    ++v7;
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleData_o *data; // x0
  __int64 v15; // x1
  struct BattlePerformance_o *performance; // x8
  float v17; // s10
  float v18; // s11
  float v19; // s9
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  unsigned __int64 rootfsm; // x8
  BattleData_o *v23; // x19
  unsigned __int64 v24; // x22
  struct PlayMakerFSM_o **p_fsm; // x23
  UnityEngine_Object_o *Component_WebViewObject; // x20
  __int64 v27; // x0
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v31; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_418B8B7 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v12);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v13);
    byte_418B8B7 = 1;
  }
  if ( BattleActorControl__IsHideShadow(this, method) )
    return;
  clear = UnityEngine_Color__get_clear(0LL);
  v28.fields.r = r;
  v28.fields.g = g;
  v28.fields.b = b;
  v28.fields.a = a;
  data = (BattleData_o *)UnityEngine_Color__op_Equality(v28, clear, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_47;
    data = performance->fields.data;
    if ( !data )
      goto LABEL_47;
    GroundShadowColor = BattleData__getGroundShadowColor(data, 0LL);
    v17 = GroundShadowColor.fields.r;
    v18 = GroundShadowColor.fields.g;
    v19 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  else
  {
    v19 = 1.0;
    v18 = 1.0;
    v17 = 1.0;
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
    UnityEngine_MaterialPropertyBlock__Clear_40692848((UnityEngine_MaterialPropertyBlock_o *)data, 0LL);
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    v30.fields.r = v17;
    v30.fields.g = v18;
    v30.fields.b = v19;
    v30.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)data,
      (System_String_o *)StringLiteral_15954/*"_Color"*/,
      v30,
      0LL);
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)data,
      (System_String_o *)StringLiteral_16013/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    data = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v17;
    this->fields.currentShadowColor.fields.g = v18;
    this->fields.currentShadowColor.fields.b = v19;
    this->fields.currentShadowColor.fields.a = a;
    if ( !data )
      goto LABEL_47;
    data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                             (UnityEngine_Component_o *)data,
                             (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
                                 (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288)) == 0LL )
  {
LABEL_47:
    sub_B2C434(data, v15);
  }
  rootfsm = (unsigned __int64)data->fields.rootfsm;
  v23 = data;
  if ( (int)rootfsm >= 1 )
  {
    v24 = 0LL;
    p_fsm = &data->fields.fsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_38;
      if ( v24 >= (unsigned int)rootfsm )
        goto LABEL_48;
      data = (BattleData_o *)p_fsm[v24];
      if ( !data )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)data,
                                                          (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      rootfsm = LODWORD(v23->fields.rootfsm);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v24 >= rootfsm )
          goto LABEL_48;
        data = (BattleData_o *)p_fsm[v24];
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
        if ( v24 >= (unsigned int)rootfsm )
          goto LABEL_48;
        data = (BattleData_o *)p_fsm[v24];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
        if ( v24 >= LODWORD(v23->fields.rootfsm) )
        {
LABEL_48:
          v27 = sub_B2C460(data);
          sub_B2C400(v27, 0LL);
        }
        data = (BattleData_o *)p_fsm[v24];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        v31.fields.r = v17;
        v31.fields.g = v18;
        v31.fields.b = v19;
        v31.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)data, v31, 0LL);
      }
      LODWORD(rootfsm) = v23->fields.rootfsm;
      ++v24;
    }
    while ( (__int64)v24 < (int)rootfsm );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeShadowParent(
        BattleActorControl_o *this,
        int32_t loadActorLimitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Transform_o *transform; // x0
  bool exist; // w21
  UnityEngine_Transform_o *v9; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x2

  if ( (byte_418B86B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&loadActorLimitCount);
    sub_B2C35C(&StringLiteral_11529/*"RootShadow"*/, v5);
    byte_418B86B = 1;
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
              (System_String_o *)StringLiteral_11529/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v9;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v9,
                         (System_String_o *)StringLiteral_11529/*"RootShadow"*/,
                         loadActorLimitCount,
                         0,
                         0LL);
    TransformHelper__SafeSetParentNonNull(this->fields.shadowObj, NodeFromLvName, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeShadowTexture(
        BattleActorControl_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *shadowObj; // x21
  BattlePerformanceBg_o *bgPerf; // x0
  __int64 v13; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *ShadowTexture; // x20
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  UnityEngine_Object_o *v18; // x0
  UnityEngine_Object_o *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  v26 = shadowId;
  if ( (byte_418B8B6 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, *(_QWORD *)&shadowId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Texture2D_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v7);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v8);
    sub_B2C35C(&StringLiteral_2764/*"Battle/Textures/shadow_"*/, v9);
    sub_B2C35C(&StringLiteral_2765/*"Battle/Textures/shadow_1"*/, v10);
    byte_418B8B6 = 1;
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
      v16 = System_Int32__ToString((int32_t)&v26, 0LL);
      v17 = System_String__Concat_44305532((System_String_o *)StringLiteral_2764/*"Battle/Textures/shadow_"*/, v16, 0LL);
      v18 = UnityEngine_Resources__Load(v17, 0LL);
      if ( v18 )
      {
        if ( (UnityEngine_Texture2D_c *)v18->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v18;
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
      v19 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_2765/*"Battle/Textures/shadow_1"*/, 0LL);
      if ( v19 )
      {
        if ( (UnityEngine_Texture2D_c *)v19->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v19;
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
        UnityEngine_MaterialPropertyBlock__Clear_40692848((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_15954/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16013/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.currentShadowTexure,
              (System_Int32_array **)ShadowTexture,
              v20,
              v21,
              v22,
              v23,
              v24,
              v25);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_B2C434(bgPerf, v13);
    }
  }
}


System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeCounterAttackWait(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  BattleServantData_o *Instance; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  BattleServantData_o *v17; // x22
  System_String_o *v18; // x21
  int v20; // [xsp+Ch] [xbp-24h] BYREF

  v5 = animname;
  if ( (byte_418B8E1 & 1) == 0 )
  {
    sub_B2C35C(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v8);
    byte_418B8E1 = 1;
  }
  v20 = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( Instance->fields.userSvtId.fields.inited )
    return v5;
  if ( this->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (System_Int32_array **)v5,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v5 )
    goto LABEL_17;
  if ( !System_String__StartsWith(v5, (System_String_o *)StringLiteral_23190/*"wait"*/, 0LL) )
    return v5;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_17;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return v5;
  v20 = 49;
  Instance = (BattleServantData_o *)j_il2cpp_value_box_0(
                                      HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                                      &v20);
  if ( !Instance
    || (v17 = Instance,
        v18 = (System_String_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass->vtable._4_unknown.methodPtr),
        v20 = *(_DWORD *)j_il2cpp_object_unbox_0(v17),
        (Instance = (BattleServantData_o *)this->fields.fbxcomponent) == 0LL) )
  {
LABEL_17:
    sub_B2C434(Instance, v10);
  }
  if ( BattleFBXComponent__checkAnimation((BattleFBXComponent_o *)Instance, v18, 0LL) )
    return v18;
  return v5;
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
  __int64 v11; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleActorControl_o *v13; // x22
  System_String_o *v14; // x21
  int v16; // [xsp+Ch] [xbp-24h] BYREF

  v9 = (System_Int32_array **)animname;
  v10 = this;
  if ( (byte_418B8E0 & 1) == 0 )
  {
    sub_B2C35C(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_23190/*"wait"*/, v11);
    byte_418B8E0 = 1;
  }
  v16 = 0;
  if ( v10->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    v10->fields.isFirstSaveBeforePlayAnim = 0;
    v10->fields._PlayedOriginalAnimName_k__BackingField = (struct System_String_o *)v9;
    sub_B2C2F8(
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
                                   (System_String_o *)StringLiteral_23190/*"wait"*/,
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
                                   &v16);
  if ( !this
    || (v13 = this,
        v14 = (System_String_o *)((__int64 (__fastcall *)(BattleActorControl_o *, void *))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass[1]._1.image),
        v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v13),
        (this = (BattleActorControl_o *)v10->fields.fbxcomponent) == 0LL) )
  {
LABEL_15:
    sub_B2C434(this, animname);
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
  __int64 v6; // x1
  struct System_Collections_Hashtable_o *CompleteList; // x0
  const MethodInfo *v8; // x3
  struct System_Collections_Hashtable_o *v9; // x8
  BattleActorControl_EventClass_o *v10; // x21
  __int64 v11; // x9
  BattleActorControl_o *v12; // x0
  System_String_o *v13; // x1
  BattleActorControl_EventClass_o *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_418B896 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, name);
    sub_B2C35C(&StringLiteral_1537/*"@OnComplete Fired!\n => <{0}>:"*/, v5);
    byte_418B896 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1537/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_32437564(this, name, 0, v8);
    return;
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList
    || (CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._29_get_Item.method)(
                                                                  CompleteList,
                                                                  name,
                                                                  CompleteList->klass->vtable._30_set_Item.methodPtr),
        (v9 = this->fields.CompleteList) == 0LL)
    || (v10 = (BattleActorControl_EventClass_o *)CompleteList,
        CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._39_Remove.method)(
                                                                  this->fields.CompleteList,
                                                                  name,
                                                                  v9->klass->vtable._40_get_SyncRoot.methodPtr),
        !v10) )
  {
LABEL_12:
    sub_B2C434(CompleteList, v6);
  }
  v11 = *(&BattleActorControl_EventClass_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (BattleActorControl_EventClass_c *)v10->klass->_2.typeHierarchy[v11 - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v10, 0LL);
    goto LABEL_11;
  }
  sub_B2C728(v10);
  BattleActorControl__setAnimationEvent(v12, v13, v14, v15);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_418B8A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, eventName);
    byte_418B8A0 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B2C434(0LL, eventName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (System_Xml_Schema_XmlSchemaObject_o *)motionName,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_418B8A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__Remove__, eventName);
    byte_418B8A1 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B2C434(0LL, eventName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_418B86C & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B86C = 1;
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
  UnityEngine_Object__Destroy_35314896(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_418B8EF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    byte_418B8EF = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)System_Linq_Enumerable__ToList_int_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v12;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields.current, v11) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_B2C434(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)buffLoopEffectDict,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
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

  if ( (byte_418B8DB & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__DestroyAuraEffect_d__319_TypeInfo, effectObject);
    byte_418B8DB = 1;
  }
  v4 = sub_B2C42C(BattleActorControl__DestroyAuraEffect_d__319_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__319___ctor((BattleActorControl__DestroyAuraEffect_d__319_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B2C434(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_B2C2F8((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)effectObject, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v4;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418B8ED & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__DestroyEffectOnParticleStop_d__345_TypeInfo, *(_QWORD *)&key);
    byte_418B8ED = 1;
  }
  v5 = sub_B2C42C(BattleActorControl__DestroyEffectOnParticleStop_d__345_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__345___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_418B86D & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B86D = 1;
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
  UnityEngine_Object__DestroyImmediate_35315108(actorObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__DestroyLoopEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *buffLoopEffectDict; // x0
  UnityEngine_Object_o *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v11; // x8
  UnityEngine_GameObject_o *v12; // x19
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w24
  __int64 v16; // x8
  _QWORD *v17; // x21
  unsigned __int64 v18; // x25
  UnityEngine_Object_o *v19; // x22
  __int64 v20; // x0

  if ( (byte_418B8EE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_418B8EE = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                   effectId,
                                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                               (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v11 = this->fields.buffLoopEffectDict) == 0LL)
    || (v12 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                                       (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v11,
                                       effectId,
                                       (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v12)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                               v12,
                               1,
                               (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288)) == 0LL )
  {
LABEL_33:
    sub_B2C434(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v13 = *((_DWORD *)buffLoopEffectDict + 6);
  v14 = buffLoopEffectDict;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        goto LABEL_32;
      buffLoopEffectDict = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_33;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_33;
      v16 = *((_QWORD *)buffLoopEffectDict + 3);
      v17 = buffLoopEffectDict;
      if ( (int)v16 >= 1 )
        break;
LABEL_27:
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_28;
    }
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      v19 = (UnityEngine_Object_o *)v17[v18 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v19, 0LL);
      LODWORD(v16) = *((_DWORD *)v17 + 6);
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_27;
    }
LABEL_32:
    v20 = sub_B2C460(buffLoopEffectDict);
    sub_B2C400(v20, 0LL);
  }
LABEL_28:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v12, 0LL);
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

  if ( (byte_418B870 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B870 = 1;
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
    UnityEngine_Object__Destroy_35314896(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.specialShadowObj, 0LL, v5, v6, v7, v8, v9, v10);
    BattleActorControl__EnableRenderer(v11, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v12);
  }
}


void __fastcall BattleActorControl__DisplayAnimationEffect(
        BattleActorControl_o *this,
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *TriggerKey; // x20
  System_Collections_Generic_IEnumerable_T__o *Value_string__BattleActorAnimationEffect; // x21
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_o **p_prevAnimEffectTriggerKey; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x23

  if ( (byte_418B86A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleActorAnimationEffect___ctor__, animName);
    sub_B2C35C(&System_Action_BattleActorAnimationEffect__TypeInfo, v7);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___, v8);
    sub_B2C35C(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____, v9);
    sub_B2C35C(&Method_BattleActorControl__DisplayAnimationEffect_b__131_0__, v10);
    byte_418B86A = 1;
  }
  TriggerKey = BattleActorAnimationEffect__MakeTriggerKey(animName, eventTag, (const MethodInfo *)eventTag);
  Value_string__BattleActorAnimationEffect = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__GetValue_string__BattleActorAnimationEffect___(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                                                                                              TriggerKey,
                                                                                              0LL,
                                                                                              (const MethodInfo_172876C *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  p_prevAnimEffectTriggerKey = &this->fields.prevAnimEffectTriggerKey;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string__BattleActorAnimationEffect, 0LL) )
  {
    if ( !*p_prevAnimEffectTriggerKey )
      sub_B2C434(0LL, v13);
    if ( !System_String__Equals_44292872(*p_prevAnimEffectTriggerKey, TriggerKey, 0LL) )
    {
      v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__131_0__,
        (const MethodInfo_24BBAD8 *)Method_System_Action_BattleActorAnimationEffect___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        Value_string__BattleActorAnimationEffect,
        (System_Action_T__o *)v21,
        (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  *p_prevAnimEffectTriggerKey = TriggerKey;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey,
    (System_Int32_array **)TriggerKey,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UIWidget_o *v7; // x0
  __int64 v8; // x1
  UIWidget_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418B86F & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_TryGetComponent_Renderer___, target);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418B86F = 1;
  }
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_12;
    if ( !UnityEngine_Component__TryGetComponent_UIWidget_(
            target,
            &component,
            (const MethodInfo_172E13C *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v7 = component;
    if ( !component )
LABEL_12:
      sub_B2C434(v7, v8);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)component, isEnable, 0LL);
  }
}


bool __fastcall BattleActorControl__ExistMotionEvent(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_418B87C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___, eventName);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___, v5);
    sub_B2C35C(&Method_System_Func_PlayMakerFSM__bool___ctor__, v6);
    sub_B2C35C(&System_Func_PlayMakerFSM__bool__TypeInfo, v7);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass158_0__ExistMotionEvent_b__0__, v8);
    sub_B2C35C(&BattleActorControl___c__DisplayClass158_0_TypeInfo, v9);
    byte_418B87C = 1;
  }
  v10 = sub_B2C42C(BattleActorControl___c__DisplayClass158_0_TypeInfo);
  BattleActorControl___c__DisplayClass158_0___ctor((BattleActorControl___c__DisplayClass158_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  *(_QWORD *)(v10 + 16) = eventName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)eventName, v13, v14, v15, v16, v17, v18);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v10,
    Method_BattleActorControl___c__DisplayClass158_0__ExistMotionEvent_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_PlayMakerFSM__bool___ctor__);
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          motionFSM,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v21,
           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_418B8CC & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_418B8CC = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v7; // x19
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B8BF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v4);
    byte_418B8BF = 1;
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
  material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40688736(
                                         material,
                                         (System_String_o *)StringLiteral_15916/*"_AddColor"*/,
                                         0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_clear(0LL);
    goto BattleActorControl$$GetAddColor;
  }
  v7 = this->fields.rendererArrayList;
  if ( !v7 )
    goto LABEL_15;
  if ( !v7->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  material = (UnityEngine_Material_o *)v7->fields._items->m_Items[0];
  if ( !material || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL)) == 0LL )
LABEL_15:
    sub_B2C434(material, method);
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, 0LL);
BattleActorControl$$GetAddColor:
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v8;
  return result;
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

  if ( (byte_418B8E2 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B8E2 = 1;
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
      sub_B2C434(0LL, v4);
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 Fsm; // x0
  __int64 v9; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  __int64 v12; // x8
  __int64 v13; // x20
  unsigned __int64 v14; // x21
  System_String_o *v15; // x0
  __int64 v17; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418B8F5 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_B2C35C(&StringLiteral_5236/*"DelayEnd"*/, v6);
    byte_418B8F5 = 1;
  }
  result = 0;
  v7 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
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
                   (System_String_o *)StringLiteral_5236/*"DelayEnd"*/,
                   0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  if ( System_String__IsNullOrEmpty(Value, 0LL) )
    return v7;
  Fsm = sub_B2C374(char___TypeInfo, 1LL);
  if ( !Fsm )
    goto LABEL_23;
  v9 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_22;
  *(_WORD *)(Fsm + 32) = 44;
  if ( !Value || (Fsm = (__int64)System_String__Split(Value, (System_Char_array *)Fsm, 0LL)) == 0 )
LABEL_23:
    sub_B2C434(Fsm, v9);
  v12 = *(_QWORD *)(Fsm + 24);
  v13 = Fsm;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = *(System_String_o **)(v13 + 32 + 8 * v14);
      result = 0;
      Fsm = System_Int32__TryParse(v15, &result, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( !v7 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v7,
          result,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v12) = *(_DWORD *)(v13 + 24);
      if ( (__int64)++v14 >= (int)v12 )
        return v7;
    }
LABEL_22:
    v17 = sub_B2C460(Fsm);
    sub_B2C400(v17, 0LL);
  }
  return v7;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetMainColor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v7; // x19
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B8BE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v4);
    byte_418B8BE = 1;
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
  material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_40688736(
                                         material,
                                         (System_String_o *)StringLiteral_15954/*"_Color"*/,
                                         0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v8 = UnityEngine_Color__get_white(0LL);
    goto BattleActorControl$$GetMainColor;
  }
  v7 = this->fields.rendererArrayList;
  if ( !v7 )
    goto LABEL_15;
  if ( !v7->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  material = (UnityEngine_Material_o *)v7->fields._items->m_Items[0];
  if ( !material || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL)) == 0LL )
LABEL_15:
    sub_B2C434(material, method);
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_15954/*"_Color"*/, 0LL);
BattleActorControl$$GetMainColor:
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
BattlePlayAnimationComponent_array *__fastcall BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_418B8FC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___, includeInactive);
    byte_418B8FC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
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

  if ( (byte_418B892 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, voiceId);
    byte_418B892 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_B2C434(Instance, v7);
  }
  v9 = this->fields.myShiftData;
  if ( !v9 || !Instance )
    goto LABEL_11;
  v10 = v9->fields.svtId;
  limit = v9->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0LL);
}


UnityEngine_GameObject_array *__fastcall BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__InitAnimationEffect(
        BattleActorControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  BattleActorControl___c__DisplayClass130_0_o *v25; // x21
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  BattleServantConfConponent_o *p_dicTriggerAnimEffects; // x19
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_iTween; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x20
  BattleActorControl___c_c *v47; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__130_1; // x21
  Il2CppObject *v50; // x22
  struct BattleActorControl___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v58; // x0
  BattleActorControl___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  struct BattleActorControl___c_StaticFields *v61; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__130_2; // x21
  Il2CppObject *v63; // x22
  struct BattleActorControl___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct BattleActorControl___c_StaticFields *v71; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__130_3; // x22
  Il2CppObject *v73; // x23
  struct BattleActorControl___c_StaticFields *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x0
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7

  if ( (byte_418B869 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___, *(_QWORD *)&limitCount);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, v5);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____,
      v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___, v7);
    sub_B2C35C(
      &Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__,
      v8);
    sub_B2C35C(&Method_System_Func_BattleActorAnimationEffect__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__, v10);
    sub_B2C35C(&Method_System_Func_BattleActorAnimationEffect__string___ctor__, v11);
    sub_B2C35C(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo, v12);
    sub_B2C35C(&System_Func_BattleActorAnimationEffect__bool__TypeInfo, v13);
    sub_B2C35C(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v14);
    sub_B2C35C(&System_Func_BattleActorAnimationEffect__string__TypeInfo, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&Method_BattleActorControl___c__InitAnimationEffect_b__130_1__, v18);
    sub_B2C35C(&Method_BattleActorControl___c__InitAnimationEffect_b__130_2__, v19);
    sub_B2C35C(&Method_BattleActorControl___c__InitAnimationEffect_b__130_3__, v20);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass130_0__InitAnimationEffect_b__0__, v21);
    sub_B2C35C(&BattleActorControl___c__DisplayClass130_0_TypeInfo, v22);
    sub_B2C35C(&BattleActorControl___c_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_1/*""*/, v24);
    byte_418B869 = 1;
  }
  v25 = (BattleActorControl___c__DisplayClass130_0_o *)sub_B2C42C(BattleActorControl___c__DisplayClass130_0_TypeInfo);
  BattleActorControl___c__DisplayClass130_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_36;
  v25->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects, 0LL, v28, v29, v30, v31, v32, v33);
  v35 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v35, v36, v37, v38, v39, v40, v41);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v26 = this->fields.actorObject;
    if ( v26 )
    {
      Components_iTween = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                                 v26,
                                                                                 (const MethodInfo_1AA7B88 *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v44,
        (Il2CppObject *)v25,
        Method_BattleActorControl___c__DisplayClass130_0__InitAnimationEffect_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattleActorAnimationEffect__bool___ctor__);
      v45 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              Components_iTween,
              (System_Func_TSource__bool__o *)v44,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v46 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v45,
                                                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v46, 0LL) )
      {
        v47 = BattleActorControl___c_TypeInfo;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v47 = BattleActorControl___c_TypeInfo;
        }
        static_fields = v47->static_fields;
        _9__130_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__130_1;
        if ( !_9__130_1 )
        {
          if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v47);
            static_fields = BattleActorControl___c_TypeInfo->static_fields;
          }
          v50 = (Il2CppObject *)static_fields->__9;
          _9__130_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__130_1,
            v50,
            Method_BattleActorControl___c__InitAnimationEffect_b__130_1__,
            (const MethodInfo_2713350 *)Method_System_Func_BattleActorAnimationEffect__string___ctor__);
          v51 = BattleActorControl___c_TypeInfo->static_fields;
          v51->__9__130_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__130_1;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v51->__9__130_1,
            (System_Int32_array **)_9__130_1,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57);
        }
        v58 = System_Linq_Enumerable__GroupBy_object__object_(
                v46,
                (System_Func_TSource__TKey__o *)_9__130_1,
                (const MethodInfo_1A915A4 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v59 = BattleActorControl___c_TypeInfo;
        v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v58;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v59 = BattleActorControl___c_TypeInfo;
        }
        v61 = v59->static_fields;
        _9__130_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v61->__9__130_2;
        if ( !_9__130_2 )
        {
          if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v59);
            v61 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v63 = (Il2CppObject *)v61->__9;
          _9__130_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__130_2,
            v63,
            Method_BattleActorControl___c__InitAnimationEffect_b__130_2__,
            (const MethodInfo_2713350 *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__);
          v64 = BattleActorControl___c_TypeInfo->static_fields;
          v64->__9__130_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__130_2;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v64->__9__130_2,
            (System_Int32_array **)_9__130_2,
            v65,
            v66,
            v67,
            v68,
            v69,
            v70);
          v59 = BattleActorControl___c_TypeInfo;
        }
        if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v59);
          v59 = BattleActorControl___c_TypeInfo;
        }
        v71 = v59->static_fields;
        _9__130_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v71->__9__130_3;
        if ( !_9__130_3 )
        {
          if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v59);
            v71 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v73 = (Il2CppObject *)v71->__9;
          _9__130_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__130_3,
            v73,
            Method_BattleActorControl___c__InitAnimationEffect_b__130_3__,
            (const MethodInfo_2713350 *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__);
          v74 = BattleActorControl___c_TypeInfo->static_fields;
          v74->__9__130_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__130_3;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v74->__9__130_3,
            (System_Int32_array **)_9__130_3,
            v75,
            v76,
            v77,
            v78,
            v79,
            v80);
        }
        v81 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                                       v60,
                                       (System_Func_TSource__TKey__o *)_9__130_2,
                                       (System_Func_TSource__TElement__o *)_9__130_3,
                                       (const MethodInfo_1A9B3C0 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (BattleServantConfConponent_c *)v81;
        sub_B2C2F8(p_dicTriggerAnimEffects, v81, v82, v83, v84, v85, v86, v87);
      }
      return;
    }
LABEL_36:
    sub_B2C434(v26, v27);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v9; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__186_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActorControl___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_418B883 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___, method);
    sub_B2C35C(&Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__, v3);
    sub_B2C35C(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo, v4);
    sub_B2C35C(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__186_0__, v5);
    sub_B2C35C(&BattleActorControl___c_TypeInfo, v6);
    byte_418B883 = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v9 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v9 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__186_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__186_0;
  if ( !_9__186_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__186_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__186_0,
      v12,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__186_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__);
    v13 = BattleActorControl___c_TypeInfo->static_fields;
    v13->__9__186_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__186_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__186_0,
      (System_Int32_array **)_9__186_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__186_0,
           (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int seqIdFromMstTDSeqWeight; // w21
  int32_t DispLimitCount; // w0

  v4 = this;
  if ( (byte_418B8F6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, entity);
    this = (BattleActorControl_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    byte_418B8F6 = 1;
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
         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
LABEL_18:
    sub_B2C434(this, entity);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(this, method);
  deckSvt = battleSvtData->fields.deckSvt;
  if ( deckSvt )
    LOBYTE(deckSvt) = BattleDeckServantData__isHideShadow(deckSvt, 0LL);
  return (char)deckSvt;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418B8F8 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&expectedType);
    byte_418B8F8 = 1;
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
      v14 = (BattleData_o *)UnityEngine_Mathf__Abs_40694508(targetCardIndexFromNow, 0LL);
      if ( (int)v14 < 2 )
      {
LABEL_37:
        LOBYTE(actiondata) = 1;
        return (unsigned __int8)actiondata & 1;
      }
      v23 = this->fields.actiondata;
      if ( v23 )
      {
        v14 = (BattleData_o *)UnityEngine_Mathf__Min_40694704(
                                v23->fields.actionIndex,
                                v23->fields.actionIndex + targetCardIndexFromNow,
                                0LL);
        v24 = this->fields.actiondata;
        if ( v24 )
        {
          v25 = (int)v14;
          v14 = (BattleData_o *)UnityEngine_Mathf__Max_40694800(
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
      sub_B2C434(v14, v15);
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
    sub_B2C434(battleSvtData, v3);
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

  if ( (byte_418B88A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B88A = 1;
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

  if ( (byte_418B8F7 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B8F7 = 1;
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
    sub_B2C434(battleSvtData, v5);
  }
  return BattleData__IsVoiceOffSvt(v10, (int32_t)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v19; // x8
  struct BattleActorControl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__358_0; // x20
  Il2CppObject *v22; // x21
  struct BattleActorControl___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  unsigned __int64 v35; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v38; // x1
  __int64 v39; // x3
  __int64 v40; // x19
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x3
  __int64 v46; // x20
  __int64 v47; // x3
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  BattlePlayAnimationComponent_o *v59; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v61; // x23
  BattlePlayAnimationComponent_SaveData_o *v62; // x0
  __int64 v63; // x8
  unsigned __int64 v64; // x10
  int *v65; // x11
  __int64 v66; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418B8F9 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v3);
    sub_B2C35C(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__, v4);
    sub_B2C35C(&Method_System_Func_BattlePlayAnimationComponent_SaveData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v6);
    sub_B2C35C(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo, v7);
    sub_B2C35C(&System_IDisposable_TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, v9);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, v10);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_B2C35C(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__358_0__, v12);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass358_0__LoadSavedPartAnimation_b__1__, v13);
    sub_B2C35C(&BattleActorControl___c__DisplayClass358_0_TypeInfo, v14);
    sub_B2C35C(&BattleActorControl___c_TypeInfo, v15);
    byte_418B8F9 = 1;
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
                                                                                     v17);
    v19 = BattleActorControl___c_TypeInfo;
    if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
      v19 = BattleActorControl___c_TypeInfo;
    }
    static_fields = v19->static_fields;
    _9__358_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__358_0;
    if ( !_9__358_0 )
    {
      if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        static_fields = BattleActorControl___c_TypeInfo->static_fields;
      }
      v22 = (Il2CppObject *)static_fields->__9;
      _9__358_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__358_0,
        v22,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__358_0__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
      v23 = BattleActorControl___c_TypeInfo->static_fields;
      v23->__9__358_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__358_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v23->__9__358_0,
        (System_Int32_array **)_9__358_0,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
    }
    v30 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__358_0,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v30 )
      sub_B2C434(0LL, v31);
    klass = v30->klass;
    v34 = v30;
    if ( *(_WORD *)&v30->klass->_2.bitflags1 )
    {
      v35 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        ++v35;
        p_offset += 4;
        if ( v35 >= *(unsigned __int16 *)&v30->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_18:
      p_method = sub_AC5258(
                   v30,
                   System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo,
                   0LL,
                   v32);
    }
    v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v34,
            *(_QWORD *)(p_method + 8));
    if ( !v40 )
      sub_B2C434(0LL, v38);
    while ( 1 )
    {
      v41 = *(_QWORD *)v40;
      if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
      {
        v42 = 0LL;
        v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v42;
          v43 += 4;
          if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
            goto LABEL_25;
        }
        v44 = v41 + 16LL * *v43 + 312;
      }
      else
      {
LABEL_25:
        v44 = sub_AC5258(v40, System_Collections_IEnumerator_TypeInfo, 0LL, v39);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8)) & 1) == 0 )
        break;
      v46 = sub_B2C42C(BattleActorControl___c__DisplayClass358_0_TypeInfo);
      BattleActorControl___c__DisplayClass358_0___ctor((BattleActorControl___c__DisplayClass358_0_o *)v46, 0LL);
      v48 = *(_QWORD *)v40;
      if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
      {
        v49 = 0LL;
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v50 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          ++v49;
          v50 += 4;
          if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
            goto LABEL_32;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_32:
        v51 = sub_AC5258(v40, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL, v47);
      }
      v52 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v40, *(_QWORD *)(v51 + 8));
      if ( !v46 )
        sub_B2C434(v52, v52);
      *(_QWORD *)(v46 + 16) = v52;
      sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 16), v52, v53, v54, v55, v56, v57, v58);
      v59 = *(BattlePlayAnimationComponent_o **)(v46 + 16);
      v60 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v61 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v61,
        (Il2CppObject *)v46,
        Method_BattleActorControl___c__DisplayClass358_0__LoadSavedPartAnimation_b__1__,
        (const MethodInfo_2711C04 *)Method_System_Func_BattlePlayAnimationComponent_SaveData__bool___ctor__);
      v62 = (BattlePlayAnimationComponent_SaveData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                         v60,
                                                         (System_Func_TSource__bool__o *)v61,
                                                         (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v59 )
        sub_B2C434(v62, v62);
      BattlePlayAnimationComponent__SetSaveData(v59, v62, 0LL);
    }
    v63 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v64 = 0LL;
      v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
      {
        ++v64;
        v65 += 4;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_41;
      }
      v66 = v63 + 16LL * *v65 + 312;
    }
    else
    {
LABEL_41:
      v66 = sub_AC5258(v40, System_IDisposable_TypeInfo, 0LL, v45);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v66)(v40, *(_QWORD *)(v66 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectParticleSwitch(
        BattleActorControl_o *this,
        bool isPlay,
        bool isNoblePhantasm,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *buffLoopEffectDict; // x0
  _DWORD *m_ParticleSystem; // x0
  __int64 v14; // x1
  _DWORD *v15; // x23
  int v16; // w8
  unsigned int v17; // w27
  _DWORD *v18; // x8
  UnityEngine_ParticleSystem_o *v19; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UnityEngine_GameObject_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-70h] BYREF
  _DWORD *v29; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v30; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v31; // 0:x0.8

  if ( (byte_418B8EC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, isPlay);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v11);
    byte_418B8EC = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v29 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(buffLoopEffectDict, (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B2C434(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v28 = v27;
LABEL_24:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v28,
            (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v28.fields.currentValue )
      sub_B2C434(0LL, v25);
    m_ParticleSystem = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                         (UnityEngine_GameObject_o *)v28.fields.currentValue,
                         1,
                         (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272);
    v15 = m_ParticleSystem;
    if ( !m_ParticleSystem )
      sub_B2C434(0LL, v14);
    v16 = m_ParticleSystem[6];
    if ( v16 >= 1 )
    {
      v17 = 0;
      while ( 1 )
      {
        if ( v17 >= v16 )
        {
          v26 = sub_B2C460(m_ParticleSystem);
          sub_B2C400(v26, 0LL);
        }
        v18 = &v15[2 * v17];
        v19 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v18 + 4);
        if ( !v19 )
          sub_B2C434(m_ParticleSystem, v14);
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(*((UnityEngine_ParticleSystem_o **)v18 + 4), 0LL).fields.m_ParticleSystem;
        v29 = m_ParticleSystem;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_B2C434(m_ParticleSystem, v14);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_23;
          UnityEngine_ParticleSystem__Play_50259112(v19, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
          if ( !gameObject )
            sub_B2C434(0LL, v22);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v29;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v30, 0, 0LL);
            v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0LL);
            if ( !v23 )
              sub_B2C434(0LL, v24);
            UnityEngine_GameObject__SetActive(v23, 0, 0LL);
            goto LABEL_23;
          }
          UnityEngine_ParticleSystem__Stop_50259500(v19, 0LL);
        }
        v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v29;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v31, !isPlay, 0LL);
LABEL_23:
        v16 = v15[6];
        if ( (int)++v17 >= v16 )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v28,
    (const MethodInfo_277F154 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_418B8F0 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_13451/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, isPlay);
    byte_418B8F0 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13451/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_B2C434(0LL, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_List_int__o *v13; // x19
  Il2CppObject *value; // x21
  int32_t key; // w22
  _BOOL8 v16; // x0
  __int64 v17; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  UnityEngine_Object_o *parent; // x0
  __int64 v21; // x1
  System_String_o *name; // x23
  UnityEngine_Object_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *v28; // x21
  UnityEngine_Transform_o *v29; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v32; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_418B8F1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_418B8F1 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v31,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)buffLoopEffectDict,
    (const MethodInfo_2E64D30 *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v32 = v31;
  v13 = 0LL;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v32,
            (const MethodInfo_277DFA8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v32.fields.current.fields.key;
    value = v32.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !value )
        sub_B2C434(v16, v17);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_B2C434(0LL, v19);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_B2C434(0LL, v21);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v23 )
        sub_B2C434(0LL, v24);
      v25 = UnityEngine_Object__get_name(v23, 0LL);
      if ( !name )
        sub_B2C434(v25, v25);
      if ( !System_String__Equals_44292872(name, v25, 0LL) )
      {
        if ( !v13 )
        {
          v13 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v13,
            (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v13 )
            sub_B2C434(v26, v27);
        }
        System_Collections_Generic_List_int___Add(
          v13,
          key,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v28 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v29 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v28 )
          sub_B2C434(v29, v29);
        UnityEngine_Transform__set_parent(v28, v29, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v32,
    (const MethodInfo_277E114 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__MoveLoopEffectToActorObject(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *movedEffect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_Object_o *actorObject; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v18; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  StatusEffectPosOverwriteMaster_o *v22; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  WarEntity_o *v25; // x0
  WarEntity_o *v26; // x23
  int32_t coordinate; // w1
  __int64 v28; // x1
  BattleServantData_o *v29; // x0
  int32_t v30; // w24
  int32_t ActorSvtId; // w25
  const MethodInfo *v32; // x1
  __int64 LimitCount; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  UnityEngine_GameObject_o *Item; // x0
  __int64 v38; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v40; // x1
  UnityEngine_Transform_o *v41; // x23
  UnityEngine_Object_o *parent; // x0
  __int64 v43; // x1
  System_String_o *name; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  const MethodInfo *v49; // x1
  System_String_o *nodeName; // x25
  UnityEngine_Transform_o *v51; // x24
  int32_t v52; // w2
  UnityEngine_Transform_o *NodeFromLvName; // x24
  __int64 v54; // x0
  __int64 v55; // x1
  float v56; // s0
  float v57; // s1
  float v58; // s2
  struct BattleServantData_o *v59; // x8
  float v60; // s8
  float v61; // s9
  float v62; // s10
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  struct BattleServantData_o *v67; // x8
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-90h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v77; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B8F2 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, movedEffect);
    sub_B2C35C(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_418B8F2 = 1;
  }
  memset(&v69, 0, sizeof(v69));
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
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)buffData,
                                                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_B2C434(buffData, v18);
      }
      v22 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v68,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectBuffList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v69 = v68;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v69,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v23 )
          break;
        if ( !v69.fields.current )
          sub_B2C434(v23, v24);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B2C434(v23, v24);
        v25 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)v69.fields.current[1].klass,
                (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v26 = v25;
        if ( v25 )
        {
          coordinate = (int32_t)v25->fields.coordinate;
          if ( coordinate >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 coordinate,
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v29 = this->fields.battleSvtData;
            if ( !v29 )
              sub_B2C434(0LL, v28);
            v30 = (int32_t)v26->fields.coordinate;
            ActorSvtId = BattleServantData__getActorSvtId(v29, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v32);
            if ( !v22 )
              sub_B2C434(LimitCount, v34);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v22, &entity, v30, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_B2C434(0LL, v35);
              Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                                   (int32_t)v26->fields.coordinate,
                                                   (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_B2C434(0LL, v38);
              transform = UnityEngine_GameObject__get_transform(Item, 0LL);
              v41 = transform;
              if ( !transform )
                sub_B2C434(0LL, v40);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_B2C434(0LL, v43);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_B2C434(name, v45);
              if ( !name )
                sub_B2C434(0LL, v45);
              if ( !System_String__Equals_44292872(name, entity->fields.nodeName, 0LL) )
              {
                zero = UnityEngine_Vector3__get_zero(0LL);
                UnityEngine_Transform__set_localPosition(v41, zero, 0LL);
                identity = UnityEngine_Quaternion__get_identity(0LL);
                UnityEngine_Transform__set_localRotation(v41, identity, 0LL);
                v47 = this->fields.actorObject;
                if ( !v47 )
                  sub_B2C434(0LL, v46);
                v48 = UnityEngine_GameObject__get_transform(v47, 0LL);
                if ( !entity )
                  sub_B2C434(v48, v49);
                nodeName = entity->fields.nodeName;
                v51 = v48;
                v52 = BattleActorControl__getLimitCount(this, v49);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v51, nodeName, v52, 1, 0LL);
                *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_zero(0LL);
                v59 = this->fields.battleSvtData;
                if ( !v59 )
                  sub_B2C434(v54, v55);
                if ( !entity )
                  sub_B2C434(0LL, v55);
                v60 = v56;
                v61 = v57;
                v62 = v58;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v59->fields.isEnemy, 0LL);
                Offset.fields.x = v60 + Offset.fields.x;
                Offset.fields.y = v61 + Offset.fields.y;
                Offset.fields.z = v62 + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v41, Offset, 0LL);
                if ( !entity )
                  sub_B2C434(0LL, v63);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                v77 = UnityEngine_Quaternion__Euler_35347036(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v41, v77, 0LL);
                if ( !entity )
                  sub_B2C434(0LL, v64);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v41, Scale, 0LL);
                UnityEngine_Transform__set_parent(v41, NodeFromLvName, 0LL);
                v67 = this->fields.battleSvtData;
                if ( !v67 )
                  sub_B2C434(v65, v66);
                if ( v67->fields.isEnemy )
                {
                  localScale = UnityEngine_Transform__get_localScale(v41, 0LL);
                  localScale.fields.x = -localScale.fields.x;
                  UnityEngine_Transform__set_localScale(v41, localScale, 0LL);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v69,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void __fastcall BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_418B8C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_SkipDead__, method);
    sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_418B8C8 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B2C42C(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B2C434(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v8, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UnityEngine_Object_o *actorObject; // x20
  const MethodInfo *v16; // x1
  UnityEngine_GameObject_o *performance; // x0
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

  if ( (byte_418B862 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__,
      method);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__,
      v9);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__,
      v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v14);
    byte_418B862 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  this->fields.rendererArrayList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.rendererArrayList, 0LL, v2, v3, v4, v5, v6, v7);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
  {
    performance = this->fields.actorObject;
    if ( !performance )
      goto LABEL_25;
    Component_srcLineSprite = (UnityEngine_MeshCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              performance,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      performance = (UnityEngine_GameObject_o *)this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)performance, Component_srcLineSprite, 0LL);
        goto LABEL_14;
      }
LABEL_25:
      sub_B2C434(performance, v16);
    }
  }
LABEL_14:
  BattleActorControl__DestroyAllLoopEffect(this, v16);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v19);
  extraLoadedVoiceArgsList = this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (BattleServantConfConponent_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v33,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)extraLoadedVoiceArgsList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v33,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v22 )
        break;
      if ( !v33.fields.current )
        sub_B2C434(v22, v23);
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
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_B2C2F8(p_extraLoadedVoiceArgsList, 0LL, v27, v28, v29, v30, v31, v32);
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
  if ( (byte_418B895 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, name);
    byte_418B895 = 1;
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
    BattleActorControl__sendEventFSM_32437564(v5, name, 0, v7);
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
    sub_B2C434(this, name);
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
  sub_B2C728(this);
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

  if ( (byte_418B89E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B89E = 1;
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
    UnityEngine_Object__Destroy_35314896(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_B2C2F8(p_particleDisconnectorObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  void *performance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v8; // x20
  char *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  TreasureDvcEntity_o *v16; // x20
  int v17; // w8
  struct BattleServantData_o *v18; // x10
  int32_t v19; // w9
  struct BattleServantData_o *v20; // x8
  struct BattleServantData_o *v21; // x8
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2
  System_Collections_IEnumerator_o *v24; // x0
  __int64 v25; // x0

  if ( (byte_418B8B0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__258_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_418B8B0 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_25;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_25;
  if ( !performance )
    goto LABEL_25;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v8 = (BattleSequenceManager_o *)performance;
  performance = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_25;
  performance = TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v8 )
    goto LABEL_25;
  BattleSequenceManager__SetIntactBgms(v8, (System_Int32_array *)performance, 0LL);
  performance = this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_25;
  if ( *((_BYTE *)performance + 455) )
  {
    performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_25;
    v9 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v9 )
      goto LABEL_25;
    *((_QWORD *)v9 + 32) = performance;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v9 + 256),
      (System_Int32_array **)performance,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    performance = this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_25;
  }
  performance = BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v16 = (TreasureDvcEntity_o *)performance;
  performance = (void *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v16 )
    goto LABEL_25;
  performance = TreasureDvcEntity__getFixAppearanceInfoArray(v16, (int32_t)performance, 0LL);
  if ( !performance )
    goto LABEL_23;
  if ( *((_DWORD *)performance + 6) < 2u )
  {
    v25 = sub_B2C460(performance);
    sub_B2C400(v25, 0LL);
  }
  v17 = *((_DWORD *)performance + 8);
  if ( v17 < 1 )
  {
LABEL_23:
    v24 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_24;
  }
  v18 = this->fields.battleSvtData;
  if ( !v18
    || (v19 = *((_DWORD *)performance + 9), v18->fields.tmpAppearanceId = v17, (v20 = this->fields.battleSvtData) == 0LL)
    || (v20->fields.dressDispId = v19, (v21 = this->fields.battleSvtData) == 0LL) )
  {
LABEL_25:
    sub_B2C434(performance, obj);
  }
  v21->fields.isForceAppearance = 1;
  v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__258_0__,
    0LL);
  v24 = BattleActorControl__waitChangeApp(this, v22, v23);
LABEL_24:
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v24, 0LL);
}


void __fastcall BattleActorControl__OnNoblePhantasmPlayComplete(
        BattleActorControl_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *Instance; // x0
  __int64 v13; // x1
  BattlePerformance_o *performance; // x20
  struct BattlePerformance_o *v15; // x8
  struct BattlePerformance_o *v16; // x8
  const MethodInfo *v17; // x1
  struct BattlePerformance_o *v18; // x8
  const MethodInfo *v19; // x2
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *v22; // x0
  const MethodInfo *v23; // x3
  BattleFBXComponent_c *v24; // x0
  struct BattleServantData_o *v25; // x8
  struct BattlePerformance_o *v26; // x8
  const MethodInfo *v27; // x2
  const MethodInfo *v28; // x2

  if ( (byte_418B8B2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, seq);
    sub_B2C35C(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__260_0__, v4);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v5);
    sub_B2C35C(&System_GC_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_6351/*"FINISHED"*/, v10);
    byte_418B8B2 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_46;
  ((void (__fastcall *)(struct BattleServantData_o *, BattleServantData_o *, BattleActorControl_o *, struct BattlePerformance_o *, void *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass[1]._1.image);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_46;
  BattleServantData__changeNp(Instance, Instance->fields.tmpNp + Instance->fields.np, 0, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_46;
  BattleServantData__updateNpGauge(Instance, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43492776(0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_46;
  performance = this->fields.performance;
  Instance = (BattleServantData_o *)BattleServantData__get_TreasureDevice(Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  if ( !performance )
    goto LABEL_46;
  BattlePerformance__endNoblePhantasm(performance, Instance->fields.index, 0LL);
  v15 = this->fields.performance;
  if ( !v15 )
    goto LABEL_46;
  Instance = (BattleServantData_o *)v15->fields.bgPerf;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformance__setDamageTargetVoiceFlg((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_46;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)Instance, 1, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformance__changeShadowType((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)Instance, 0LL);
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_46;
  Instance = (BattleServantData_o *)v16->fields.commandPerf;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v17);
  v18 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v18 )
    goto LABEL_46;
  Instance = (BattleServantData_o *)v18->fields.logic;
  if ( !Instance )
    goto LABEL_46;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v19);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)Instance, 1, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_46;
  if ( !BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_46;
    BattlePerformance__noblePhantasmWhiteInFade((BattlePerformance_o *)Instance, 0.2, 0.3, 0LL);
    if ( !this->fields.noblePhantasmCallback )
    {
      BattleActorControl__sendEventFSM_32437564(this, (System_String_o *)StringLiteral_6351/*"FINISHED"*/, 0, v23);
      goto LABEL_39;
    }
    v24 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v24 = BattleFBXComponent_TypeInfo;
    }
    v24->static_fields->EnableEvent = 1;
    Instance = (BattleServantData_o *)this->fields.noblePhantasmCallback;
    if ( Instance )
    {
      System_Action__Invoke((System_Action_o *)Instance, 0LL);
      goto LABEL_39;
    }
LABEL_46:
    sub_B2C434(Instance, v13);
  }
  v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__260_0__,
    0LL);
  v22 = BattleActorControl__waitChangeApp(this, v20, v21);
  Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                                      (UnityEngine_MonoBehaviour_o *)this,
                                      v22,
                                      0LL);
LABEL_39:
  v25 = this->fields.battleSvtData;
  if ( !v25 )
    goto LABEL_46;
  ++v25->fields.playedNPCount;
  v26 = this->fields.performance;
  if ( !v26 )
    goto LABEL_46;
  Instance = (BattleServantData_o *)v26->fields.data;
  if ( !Instance )
    goto LABEL_46;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v27);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v28);
  }
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_418B8C7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_SkipDead__, method);
    sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_418B8C7 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B2C42C(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B2C434(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v8, 0LL);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  const MethodInfo *v32; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x20
  System_Collections_Generic_IEnumerable_T__o *v35; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v36; // x20

  if ( (byte_418B8FB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattlePlayAnimationComponent___ctor__, key);
    sub_B2C35C(&System_Action_BattlePlayAnimationComponent__TypeInfo, v9);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v11);
    sub_B2C35C(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__, v12);
    sub_B2C35C(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v13);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass361_0__PlayMatchPartAnimation_b__0__, v14);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass361_0__PlayMatchPartAnimation_b__1__, v15);
    sub_B2C35C(&BattleActorControl___c__DisplayClass361_0_TypeInfo, v16);
    byte_418B8FB = 1;
  }
  v17 = sub_B2C42C(BattleActorControl___c__DisplayClass361_0_TypeInfo);
  BattleActorControl___c__DisplayClass361_0___ctor((BattleActorControl___c__DisplayClass361_0_o *)v17, 0LL);
  if ( !v17 )
    sub_B2C434(v18, v19);
  *(_QWORD *)(v17 + 16) = key;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)key, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = animName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)animName, v26, v27, v28, v29, v30, v31);
  *(float *)(v17 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v32);
  v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v34,
    (Il2CppObject *)v17,
    Method_BattleActorControl___c__DisplayClass361_0__PlayMatchPartAnimation_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
  v35 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v34,
                                                         (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v36 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v36,
    (Il2CppObject *)v17,
    Method_BattleActorControl___c__DisplayClass361_0__PlayMatchPartAnimation_b__1__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_BattlePlayAnimationComponent___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v35,
    (System_Action_T__o *)v36,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
}


void __fastcall BattleActorControl__PreDestroyActor(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x19
  UnityEngine_Transform_o *transform; // x1

  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
}


void __fastcall BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v8; // x20
  unsigned __int64 v9; // x22
  struct BattleFBXComponent_o **p_fbxcomponent; // x23
  WarBoardManager_TaskList_o *v11; // x21
  __int64 v12; // x0

  v4 = this;
  if ( (byte_418B8C3 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v5);
    this = (BattleActorControl_o *)sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v6);
    byte_418B8C3 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                   obj,
                                   (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  actorObject = this->fields.actorObject;
  v8 = this;
  if ( (int)actorObject >= 1 )
  {
    v9 = 0LL;
    p_fbxcomponent = &this->fields.fbxcomponent;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)actorObject )
      {
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v11 = (WarBoardManager_TaskList_o *)p_fbxcomponent[v9];
      this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                       v11,
                                       (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                         v11,
                                         (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(actorObject) = v8->fields.actorObject;
      if ( (__int64)++v9 >= (int)actorObject )
        return;
    }
LABEL_14:
    sub_B2C434(this, obj);
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
    sub_B2C434(0LL, eventName);
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
    sub_B2C2F8(p_overwriteAnim, 0LL, v5, v6, v7, v8, v9, v10);
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

  if ( (byte_418B8E5 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B8E5 = 1;
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
        sub_B2C434(0LL, v4);
      BattleFBXComponent__RevertDefaultAnimation(v5, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleActorControl___c__DisplayClass279_0_o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v13; // x22

  if ( (byte_418B8C2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Material___ctor__, method);
    sub_B2C35C(&System_Action_Material__TypeInfo, v5);
    sub_B2C35C(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___, v6);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass279_0__SetActorAlpha_b__0__, v7);
    sub_B2C35C(&BattleActorControl___c__DisplayClass279_0_TypeInfo, v8);
    byte_418B8C2 = 1;
  }
  v9 = (BattleActorControl___c__DisplayClass279_0_o *)sub_B2C42C(BattleActorControl___c__DisplayClass279_0_TypeInfo);
  BattleActorControl___c__DisplayClass279_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v13 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_Material__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass279_0__SetActorAlpha_b__0__,
    (const MethodInfo_24BBAD8 *)Method_System_Action_Material___ctor__);
  BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v13,
    (const MethodInfo_1729974 *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v18; // x1
  UnityEngine_Material_array *v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_418B8C1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v12);
    byte_418B8C1 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v26.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_B2C434(v15, v16);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v19 = materials;
        if ( !materials )
          sub_B2C434(0LL, v18);
        v20 = *(_QWORD *)&materials->max_length;
        if ( (int)v20 >= 1 )
        {
          v21 = 0LL;
          do
          {
            if ( v21 >= (unsigned int)v20 )
            {
              v24 = sub_B2C460(materials);
              sub_B2C400(v24, 0LL);
            }
            v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v22 )
                sub_B2C434(materials, v23);
              v27.fields.r = r;
              v27.fields.g = g;
              v27.fields.b = b;
              v27.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v22,
                (System_String_o *)StringLiteral_15916/*"_AddColor"*/,
                v27,
                0LL);
            }
            LODWORD(v20) = v19->max_length;
            ++v21;
          }
          while ( (__int64)v21 < (int)v20 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


void __fastcall BattleActorControl__SetAlreadyDrop(BattleActorControl_o *this, bool isDrop, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    battleSvtData->fields.IsAlreadyDrop = isDrop;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetBillBoardGroup(
        BattleActorControl_o *this,
        int32_t gId,
        const MethodInfo *method)
{
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v6; // x1

  if ( (byte_418B8DF & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___, *(_QWORD *)&gId);
    byte_418B8DF = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_WebViewObject )
    sub_B2C434(0LL, v6);
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
  __int64 v7; // x1
  _QWORD *p_klass; // x8
  BattleServantConfConponent_o *p_shadowEffectObject; // x21
  unsigned __int64 v10; // x24
  __int64 v11; // x25
  unsigned __int64 v12; // x9
  UnityEngine_Object_o *v13; // x23
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_c *klass; // x8
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *actorObject; // x23
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x0

  v6 = this;
  if ( (byte_418B8B5 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, isShadow);
    this = (BattleActorControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_418B8B5 = 1;
  }
  p_shadowEffectObject = (BattleServantConfConponent_o *)&v6->fields.shadowEffectObject;
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  if ( p_klass )
  {
    v10 = 0LL;
    v11 = 32LL;
    while ( 1 )
    {
      v12 = *((unsigned int *)p_klass + 6);
      if ( (__int64)v10 >= (int)v12 )
        break;
      if ( v10 >= v12 )
        goto LABEL_19;
      v13 = (UnityEngine_Object_o *)p_klass[v10 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v13, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v10 >= LODWORD(klass->_1.namespaze) )
        {
LABEL_19:
          v31 = sub_B2C460(this);
          sub_B2C400(v31, 0LL);
        }
        *(void **)((char *)&klass->_1.image + v11) = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)klass + v11), 0LL, v14, v15, v16, v17, v18, v19);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v10;
        v11 += 8LL;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_20;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_20:
    sub_B2C434(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  v24 = (System_Int32_array **)BattleEffectUtility__ChangeServantView(
                                 actorObject,
                                 isShadow,
                                 isChoco,
                                 svtlimitaddent,
                                 0LL);
  p_shadowEffectObject->klass = (BattleServantConfConponent_c *)v24;
  sub_B2C2F8(p_shadowEffectObject, v24, v25, v26, v27, v28, v29, v30);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v18; // x1
  UnityEngine_Material_array *v19; // x19
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  UnityEngine_Object_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x0
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_418B8C0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v12);
    byte_418B8C0 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v26 = v25;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v26,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v26.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_B2C434(v15, v16);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v19 = materials;
        if ( !materials )
          sub_B2C434(0LL, v18);
        v20 = *(_QWORD *)&materials->max_length;
        if ( (int)v20 >= 1 )
        {
          v21 = 0LL;
          do
          {
            if ( v21 >= (unsigned int)v20 )
            {
              v24 = sub_B2C460(materials);
              sub_B2C400(v24, 0LL);
            }
            v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v22 )
                sub_B2C434(materials, v23);
              v27.fields.r = r;
              v27.fields.g = g;
              v27.fields.b = b;
              v27.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v22,
                (System_String_o *)StringLiteral_15954/*"_Color"*/,
                v27,
                0LL);
            }
            LODWORD(v20) = v19->max_length;
            ++v21;
          }
          while ( (__int64)v21 < (int)v20 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v26,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  struct BattleServantData_o *v15; // x8
  int32_t displayType; // w8
  bool v17; // w1
  bool v18; // w2
  int uniqueId; // w8
  BattleServantData_o *v20; // x19
  unsigned int v21; // w22
  float v22; // s8
  float v23; // s9
  float v24; // s10
  float v25; // s12
  BattleServantData_c **v26; // x8
  UnityEngine_Renderer_o *v27; // x20
  float v28; // s4
  float v29; // s5
  float v30; // s6
  float v31; // s7
  float v32; // s4
  float v33; // s5
  float v34; // s6
  float v35; // s7
  __int64 v36; // x8
  BattleServantData_o *v37; // x20
  unsigned __int64 v38; // x26
  UnityEngine_Object_o *v39; // x21
  __int64 v40; // x0
  UnityEngine_Color_o v41; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_418B8BD & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v10);
    sub_B2C35C(&StringLiteral_15916/*"_AddColor"*/, v11);
    byte_418B8BD = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  *(_QWORD *)&v41.fields.r = 0LL;
  *(_QWORD *)&v41.fields.b = 0LL;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_31;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0LL) )
  {
    BattleActorControl__SetMaterialWhite(this, v13);
  }
  else
  {
    v15 = this->fields.battleSvtData;
    if ( v15 )
    {
      displayType = v15->fields.displayType;
      v17 = displayType == 2;
      v18 = displayType == 3;
    }
    else
    {
      v17 = 0;
      v18 = 0;
    }
    BattleActorControl__SetDispServant(this, v17, v18, v14);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_31:
    sub_B2C434(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v20 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v21 = 0;
    v22 = r * alpha;
    v23 = g * alpha;
    v24 = b * alpha;
    v25 = 1.0 - alpha;
    while ( 1 )
    {
      if ( v21 >= uniqueId )
        goto LABEL_30;
      v26 = &v20->klass + (int)v21;
      v27 = (UnityEngine_Renderer_o *)v26[4];
      if ( !v27 )
        goto LABEL_31;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_31;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      methoda.methodPointer = *(Il2CppMethodPointer *)&color.fields.r;
      methoda.invoker_method = *(void **)&color.fields.b;
      color.fields.r = v25 * color.fields.r;
      color.fields.g = v25 * color.fields.g;
      color.fields.b = v25 * color.fields.b;
      color.fields.a = 1.0;
      UnityEngine_Color___ctor(color, v28, v29, v30, v31, &methoda);
      v44.fields.a = 0.0;
      v44.fields.r = v22;
      v44.fields.g = v23;
      v44.fields.b = v24;
      UnityEngine_Color___ctor(v44, v32, v33, v34, v35, (const MethodInfo *)&v41);
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v27, 0LL);
      if ( !battleSvtData )
        goto LABEL_31;
      v36 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v37 = battleSvtData;
      if ( (int)v36 >= 1 )
        break;
LABEL_28:
      uniqueId = v20->fields.uniqueId;
      if ( (int)++v21 >= uniqueId )
        return;
    }
    v38 = 0LL;
    while ( v38 < (unsigned int)v36 )
    {
      v39 = (UnityEngine_Object_o *)*(&v37->fields.userSvtId.fields.currentCryptoKey + v38);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v39, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v39 )
          goto LABEL_31;
        *(_QWORD *)&v45.fields.b = methoda.invoker_method;
        *(_QWORD *)&v45.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v39, (System_String_o *)StringLiteral_15954/*"_Color"*/, v45, 0LL);
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v39, (System_String_o *)StringLiteral_15916/*"_AddColor"*/, v41, 0LL);
      }
      LODWORD(v36) = v37->fields.uniqueId;
      if ( (__int64)++v38 >= (int)v36 )
        goto LABEL_28;
    }
LABEL_30:
    v40 = sub_B2C460(battleSvtData);
    sub_B2C400(v40, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v8; // x19
  unsigned int v9; // w22
  unsigned int *v10; // x8
  UnityEngine_Renderer_o *v11; // x20
  unsigned __int64 v12; // x25
  UnityEngine_Material_o *v13; // x21
  int v14; // s0
  __int64 v18; // x0

  if ( (byte_418B8BC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v4);
    byte_418B8BC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                             gameObject,
                                             (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_24;
  klass = (int)gameObject[1].klass;
  v8 = gameObject;
  if ( klass >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= klass )
      {
LABEL_25:
        v18 = sub_B2C460(gameObject);
        sub_B2C400(v18, 0LL);
      }
      v10 = (unsigned int *)(&v8->klass + (int)v9);
      v11 = (UnityEngine_Renderer_o *)*((_QWORD *)v10 + 4);
      if ( !v11 )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(
                                                 *((UnityEngine_Renderer_o **)v10 + 4),
                                                 0LL);
      if ( !gameObject )
        break;
      v12 = 0LL;
      while ( (__int64)v12 < SLODWORD(gameObject[1].klass) )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(v11, 0LL);
        if ( !gameObject )
          goto LABEL_24;
        if ( v12 >= LODWORD(gameObject[1].klass) )
          goto LABEL_25;
        v13 = (UnityEngine_Material_o *)*((_QWORD *)&gameObject[1].monitor + v12);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
        {
          *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
          if ( !v13 )
            goto LABEL_24;
          UnityEngine_Material__SetColor(v13, (System_String_o *)StringLiteral_15954/*"_Color"*/, *(UnityEngine_Color_o *)&v14, 0LL);
        }
        ++v12;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(v11, 0LL);
        if ( !gameObject )
          goto LABEL_24;
      }
      klass = (int)v8[1].klass;
      if ( (int)++v9 >= klass )
        return;
    }
LABEL_24:
    sub_B2C434(gameObject, v6);
  }
}


void __fastcall BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x20
  BattleActorControl___c_c *v15; // x8
  struct BattleActorControl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__359_0; // x21
  Il2CppObject *v18; // x22
  struct BattleActorControl___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  BattleActorControl___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  struct BattleActorControl___c_StaticFields *v29; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__359_1; // x21
  Il2CppObject *v31; // x22
  struct BattleActorControl___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  BattlePlayAnimationComponent_SaveData_array *v41; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_418B8FA & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___, method);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___,
      v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v6);
    sub_B2C35C(&Method_System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___ctor__, v7);
    sub_B2C35C(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__, v8);
    sub_B2C35C(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo, v9);
    sub_B2C35C(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v10);
    sub_B2C35C(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__359_0__, v11);
    sub_B2C35C(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__359_1__, v12);
    sub_B2C35C(&BattleActorControl___c_TypeInfo, v13);
    byte_418B8FA = 1;
  }
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v2);
  v15 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v15 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__359_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__359_0;
  if ( !_9__359_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__359_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__359_0,
      v18,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__359_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
    v19 = BattleActorControl___c_TypeInfo->static_fields;
    v19->__9__359_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__359_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v19->__9__359_0,
      (System_Int32_array **)_9__359_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          PlayAnimationComponents,
          (System_Func_TSource__bool__o *)_9__359_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v27 = BattleActorControl___c_TypeInfo;
  v28 = v26;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v27 = BattleActorControl___c_TypeInfo;
  }
  v29 = v27->static_fields;
  _9__359_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v29->__9__359_1;
  if ( !_9__359_1 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v29 = BattleActorControl___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)v29->__9;
    _9__359_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__359_1,
      v31,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__359_1__,
      (const MethodInfo_2713350 *)Method_System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___ctor__);
    v32 = BattleActorControl___c_TypeInfo->static_fields;
    v32->__9__359_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__359_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v32->__9__359_1,
      (System_Int32_array **)_9__359_1,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                         v28,
                                                         (System_Func_TSource__TResult__o *)_9__359_1,
                                                         (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v40 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v39,
          (const MethodInfo_1726A44 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v41 = (BattlePlayAnimationComponent_SaveData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v40,
                                                         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(battleSvtData, this->fields.partAnimationSaveKey, v41, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *IsHideShadow; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x8
  char v10; // w20
  bool v11; // w1

  if ( (byte_418B8F4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, active);
    byte_418B8F4 = 1;
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
      sub_B2C434(IsHideShadow, v8);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  BattleData_o *data; // x0
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_418B8BA & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v9);
    sub_B2C35C(&StringLiteral_16013/*"_MainTex"*/, v10);
    byte_418B8BA = 1;
  }
  if ( !BattleActorControl__IsHideShadow(this, method) )
  {
    clear = UnityEngine_Color__get_clear(0LL);
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    data = (BattleData_o *)UnityEngine_Color__op_Equality(v15, clear, 0LL);
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
        UnityEngine_MaterialPropertyBlock__Clear_40692848((UnityEngine_MaterialPropertyBlock_o *)data, 0LL);
        data = (BattleData_o *)this->fields.mpb;
        if ( data )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)data,
            (System_String_o *)StringLiteral_16013/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          data = (BattleData_o *)this->fields.mpb;
          if ( data )
          {
            v17.fields.r = r;
            v17.fields.g = g;
            v17.fields.b = b;
            v17.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)data,
              (System_String_o *)StringLiteral_15954/*"_Color"*/,
              v17,
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
                                       (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_B2C434(data, v12);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowSize(
        BattleActorControl_o *this,
        int32_t btlSize,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleActorControl_c *v13; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v14; // x21
  char *ShadowTransform; // x0
  __int64 v16; // x1
  int v17; // w8
  int v18; // w8
  int v19; // w8
  int v20; // w8
  int v21; // w8
  int v22; // w8
  int v23; // w8
  int v24; // w8
  int v25; // w8
  int v26; // w8
  int v27; // w8
  int v28; // w8
  int v29; // w8
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  BattleActorControl_c *v36; // x0
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v39; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v40; // x21
  int v41; // w8
  int v42; // w8
  int v43; // w8
  int v44; // w8
  int v50; // w8
  int v51; // w8
  int v53; // w8
  int v55; // w8
  int v57; // w8
  int v58; // w8
  int v60; // w8
  int v61; // w8
  int v62; // w8
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  BattleActorControl_c *v69; // x0
  struct BattleActorControl_StaticFields *v70; // x0
  BattleActorControl_c *v71; // x0
  BattleActorControl_c *v72; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  WarBoardEvalValueSquare_EvalValueSquare_o *v76; // x22
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  BattleActorControl_c *v84; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v86; // x23
  BattleActorControl_c *v87; // x0
  UnityEngine_Object_o *v88; // x19
  __int64 v89; // x0

  if ( (byte_418B8BB & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_TypeInfo, *(_QWORD *)&btlSize);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__, v8);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Vector3___TypeInfo, v11);
    sub_B2C35C(&StringLiteral_12830/*"Shadow"*/, v12);
    byte_418B8BB = 1;
  }
  v13 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v13 = BattleActorControl_TypeInfo;
  }
  if ( !v13->static_fields->ShadowTransform )
  {
    v14 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v14,
      (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v17 = *((_DWORD *)ShadowTransform + 6);
    if ( !v17 )
      goto LABEL_150;
    *((_QWORD *)ShadowTransform + 4) = 0LL;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v17 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 11) = 0;
    *((_QWORD *)ShadowTransform + 6) = 0LL;
    if ( !v14 )
      goto LABEL_151;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      0,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v18 = *((_DWORD *)ShadowTransform + 6);
    if ( !v18 )
      goto LABEL_150;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v18 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      1,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v19 = *((_DWORD *)ShadowTransform + 6);
    if ( !v19 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v19 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      2,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v20 = *((_DWORD *)ShadowTransform + 6);
    if ( !v20 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v20 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      3,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v21 = *((_DWORD *)ShadowTransform + 6);
    if ( !v21 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v21 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      4,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v22 = *((_DWORD *)ShadowTransform + 6);
    if ( !v22 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v22 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      5,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v23 = *((_DWORD *)ShadowTransform + 6);
    if ( !v23 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v23 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      6,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v24 = *((_DWORD *)ShadowTransform + 6);
    if ( !v24 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v24 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      7,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v25 = *((_DWORD *)ShadowTransform + 6);
    if ( !v25 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v25 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      8,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v26 = *((_DWORD *)ShadowTransform + 6);
    if ( !v26 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v26 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      9,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v27 = *((_DWORD *)ShadowTransform + 6);
    if ( !v27 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v27 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      10,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v28 = *((_DWORD *)ShadowTransform + 6);
    if ( !v28 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v28 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      11,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v29 = *((_DWORD *)ShadowTransform + 6);
    if ( !v29 )
      goto LABEL_150;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v29 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v14,
      12,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v36 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v36 = BattleActorControl_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v36->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v14;
    sub_B2C2F8(static_fields, (System_Int32_array **)v14, v30, v31, v32, v33, v34, v35);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v39 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v39 = BattleActorControl_TypeInfo;
    }
    if ( !v39->static_fields->specialShadowTransform )
    {
      v40 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v40,
        (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v41 = *((_DWORD *)ShadowTransform + 6);
      if ( !v41 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v41 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 11) = 0;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      if ( !v40 )
        goto LABEL_151;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        0,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v42 = *((_DWORD *)ShadowTransform + 6);
      if ( !v42 )
        goto LABEL_150;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v42 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        1,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v43 = *((_DWORD *)ShadowTransform + 6);
      if ( !v43 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v43 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        2,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v44 = *((_DWORD *)ShadowTransform + 6);
      if ( !v44 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v44 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        3,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v50 = *((_DWORD *)ShadowTransform + 6);
      if ( !v50 )
        goto LABEL_150;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v50 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        4,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v51 = *((_DWORD *)ShadowTransform + 6);
      if ( !v51 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v51 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        5,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v53 = *((_DWORD *)ShadowTransform + 6);
      if ( !v53 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v53 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        6,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v55 = *((_DWORD *)ShadowTransform + 6);
      if ( !v55 )
        goto LABEL_150;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v55 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        7,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v57 = *((_DWORD *)ShadowTransform + 6);
      if ( !v57 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v57 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        8,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v58 = *((_DWORD *)ShadowTransform + 6);
      if ( !v58 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v58 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        9,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v60 = *((_DWORD *)ShadowTransform + 6);
      if ( !v60 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v60 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        10,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v61 = *((_DWORD *)ShadowTransform + 6);
      if ( !v61 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v61 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        11,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B2C374(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v62 = *((_DWORD *)ShadowTransform + 6);
      if ( !v62 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v62 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v40,
        12,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v69 = BattleActorControl_TypeInfo;
      if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v69 = BattleActorControl_TypeInfo;
      }
      v70 = v69->static_fields;
      v70->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v40;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v70->specialShadowTransform,
        (System_Int32_array **)v40,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
    }
  }
  v71 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v71 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v71->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_151;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v72 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v72 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v72->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_151;
    Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v76 = Item;
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
      v77 = (System_Int32_array **)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)ShadowTransform,
                                     (System_String_o *)StringLiteral_12830/*"Shadow"*/,
                                     0LL);
      *p_shadowObj = (struct UnityEngine_Transform_o *)v77;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.shadowObj, v77, v78, v79, v80, v81, v82, v83);
    }
    v84 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v84 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v84->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v84);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_151;
      }
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v86 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v86, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_151;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v87 = BattleActorControl_TypeInfo;
            if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v87 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v87->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_151;
            v76 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v88 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_151;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v76 )
        goto LABEL_151;
      if ( LODWORD(v76->fields._EvalValueWarsituation_k__BackingField) )
      {
        if ( !ShadowTransform )
          goto LABEL_151;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v76->fields._EvalValue_k__BackingField,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_151;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v76->fields._EvalValueWarsituation_k__BackingField) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)&v76->fields._BenAdjustmentValueA1_k__BackingField,
              0LL);
            return;
          }
LABEL_151:
          sub_B2C434(ShadowTransform, v16);
        }
      }
LABEL_150:
      v89 = sub_B2C460(ShadowTransform);
      sub_B2C400(v89, 0LL);
    }
  }
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

  if ( (byte_418B8E4 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B8E4 = 1;
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
        sub_B2C434(overwriteAnim, v4);
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
  sub_B2C2F8((BattleServantConfConponent_o *)p_myShiftData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v14);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, v15);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418B8CB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_12258/*"SKIP_DEAD"*/, method);
    byte_418B8CB = 1;
  }
  BattleActorControl__sendEventFSM_32437564(this, (System_String_o *)StringLiteral_12258/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleFBXComponent_o *fbxcomponent; // x20
  BattleServantConfConponent_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v10; // x22
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Int32_array **v18; // x8
  struct BattleFBXComponent_o *v19; // x20
  BattleServantConfConponent_o *p_Complete; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v22; // x22
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **NodeFromLvName; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  UnityEngine_Transform_o *v38; // x0
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattleActorControl_o *v46; // x0
  const MethodInfo *v47; // x1

  v2 = this;
  if ( (byte_418B861 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_Complete__, method);
    sub_B2C35C(&Method_BattleActorControl_OnEvent__, v3);
    sub_B2C35C(&StringLiteral_18322/*"en_damage01"*/, v4);
    sub_B2C35C(&StringLiteral_18325/*"en_text01"*/, v5);
    this = (BattleActorControl_o *)sub_B2C35C(&BattleFBXComponent_onEventDelegate_TypeInfo, v6);
    byte_418B861 = 1;
  }
  fbxcomponent = v2->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_10;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (BattleServantConfConponent_o *)&fbxcomponent->fields.OnEvent;
  v10 = (BattleFBXComponent_onEventDelegate_o *)sub_B2C42C(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v10, (Il2CppObject *)v2, Method_BattleActorControl_OnEvent__, 0LL);
  v11 = (System_Int32_array **)System_Delegate__Combine(OnEvent, (System_Delegate_o *)v10, 0LL);
  v18 = v11;
  if ( v11 && *v11 != (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
    goto LABEL_11;
  p_OnEvent->klass = (BattleServantConfConponent_c *)v11;
  sub_B2C2F8(p_OnEvent, v11, v12, v13, v14, v15, v16, v17);
  v19 = v2->fields.fbxcomponent;
  if ( !v19 )
LABEL_10:
    sub_B2C434(this, method);
  Complete = (System_Delegate_o *)v19->fields.Complete;
  p_Complete = (BattleServantConfConponent_o *)&v19->fields.Complete;
  v22 = (BattleFBXComponent_onEventDelegate_o *)sub_B2C42C(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v22, (Il2CppObject *)v2, Method_BattleActorControl_Complete__, 0LL);
  v23 = (System_Int32_array **)System_Delegate__Combine(Complete, (System_Delegate_o *)v22, 0LL);
  v18 = v23;
  if ( !v23 || *v23 == (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
  {
    p_Complete->klass = (BattleServantConfConponent_c *)v23;
    sub_B2C2F8(p_Complete, v23, v24, v25, v26, v27, v28, v29);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    NodeFromLvName = (System_Int32_array **)TransformHelper__getNodeFromLvName(
                                              transform,
                                              (System_String_o *)StringLiteral_18325/*"en_text01"*/,
                                              -1,
                                              0,
                                              0LL);
    v2->fields.nodeText = (struct UnityEngine_Transform_o *)NodeFromLvName;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.nodeText, NodeFromLvName, v32, v33, v34, v35, v36, v37);
    v38 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
    v39 = (System_Int32_array **)TransformHelper__getNodeFromLvName(
                                   v38,
                                   (System_String_o *)StringLiteral_18322/*"en_damage01"*/,
                                   -1,
                                   0,
                                   0LL);
    v2->fields.nodeDamage = (struct UnityEngine_Transform_o *)v39;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.nodeDamage, v39, v40, v41, v42, v43, v44, v45);
    return;
  }
LABEL_11:
  sub_B2C728(v18);
  BattleActorControl__OnDestroy(v46, v47);
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
      sub_B2C434(actorObject, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleServantData_o *v8; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v10; // x22
  struct BattleServantData_o *v11; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v13; // x1
  __int64 v14; // x0

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_418B8F3 & 1) == 0 )
  {
    sub_B2C35C(&BuffList_TypeInfo, forceUpdate);
    sub_B2C35C(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    this = (BattleActorControl_o *)sub_B2C35C(&BuffList_TYPE___TypeInfo, v6);
    byte_418B8F3 = 1;
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
      v8 = v4->fields.battleSvtData;
      if ( !v8 )
        goto LABEL_24;
      buffData = v8->fields.buffData;
      v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B2C42C(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v10, v8, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_24;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_30942396(buffData, 100, v10, 1, 0, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_B2C374(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_24;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.actorObject) )
      {
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
      }
      LODWORD(this->fields.fbxcomponent) = 163;
      v11 = v4->fields.battleSvtData;
      if ( !v11 )
        goto LABEL_24;
      this = (BattleActorControl_o *)v11->fields.buffData;
      if ( !this )
        goto LABEL_24;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_30922488(
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
        BattleActorControl__UpdateShadow(v4, v13);
        return;
      }
LABEL_24:
      sub_B2C434(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_1729974 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo_1729974_RGCTXs **p_rgctx_data; // x19
  const MethodInfo_1729974_RGCTXs *rgctx_data; // t1
  Il2CppClass *_0_BattleActorControl___c__280_T; // x22
  __int16 v17; // w8
  Il2CppClass *v18; // x22
  Il2CppClass *v19; // x22
  Il2CppClass *v20; // x22
  System_Int32_array **v21; // x22
  Il2CppClass *v22; // x22
  __int16 v23; // w8
  Il2CppClass *v24; // x22
  Il2CppClass *v25; // x22
  const MethodInfo_1729974_RGCTXs *v26; // x8
  Il2CppClass *v27; // x22
  Il2CppClass *_2_System_Func_T__bool; // x24
  __int64 v29; // x23
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  Il2CppClass *v36; // x23
  char *static_fields; // x0
  __int64 v38; // x0
  __int64 v39; // x1
  __int64 v40; // x3
  __int64 v41; // x21
  Il2CppClass *_5_System_Collections_Generic_IEnumerable_T; // x22
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x3
  __int64 v49; // x21
  int v50; // w25
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  __int64 v55; // x3
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  UnityEngine_Renderer_o *v61; // x0
  __int64 v62; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  Il2CppClass *v64; // x23
  __int16 v65; // w8
  Il2CppClass *v66; // x23
  Il2CppClass *v67; // x23
  Il2CppClass *v68; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v69; // x23
  Il2CppClass *v70; // x23
  __int16 v71; // w8
  Il2CppClass *v72; // x23
  Il2CppClass *v73; // x23
  Il2CppClass *v74; // x23
  Il2CppObject *v75; // x24
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  Il2CppClass *v82; // x24
  char *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  __int64 v85; // x1
  __int64 v86; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x22
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v89; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v92; // x1
  __int64 v93; // x3
  __int64 v94; // x22
  __int64 v95; // x8
  unsigned __int64 v96; // x10
  int *v97; // x11
  __int64 v98; // x0
  __int64 v99; // x3
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  System_Uri_o *v104; // x0
  int v105; // w24
  __int64 v106; // x8
  unsigned __int64 v107; // x10
  int *v108; // x11
  __int64 v109; // x0
  int v110; // w20
  __int64 v111; // x8
  unsigned __int64 v112; // x10
  int *v113; // x11
  __int64 v114; // x0
  _DWORD v115[2]; // [xsp+10h] [xbp-60h]
  int v116; // [xsp+18h] [xbp-58h]

  if ( (byte_4187255 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_Material__Invoke__, rendererEnumerable);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_Material___, v7);
    sub_B2C35C(&Method_System_Func_Material__bool___ctor__, v8);
    sub_B2C35C(&System_Func_Material__bool__TypeInfo, v9);
    sub_B2C35C(&System_IDisposable_TypeInfo, v10);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v11);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v12);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_4187255 = 1;
  }
  v116 = 0;
  if ( rendererEnumerable )
  {
    rgctx_data = method->rgctx_data;
    p_rgctx_data = &method->rgctx_data;
    _0_BattleActorControl___c__280_T = rgctx_data->_0_BattleActorControl___c__280_T_;
    v17 = WORD1(rgctx_data->_0_BattleActorControl___c__280_T_->vtable[0].methodPtr);
    if ( (v17 & 1) == 0 )
    {
      sub_AC505C(_0_BattleActorControl___c__280_T);
      v17 = WORD1(_0_BattleActorControl___c__280_T->vtable[0].methodPtr);
    }
    if ( (v17 & 0x400) != 0 )
    {
      v18 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
      if ( !v18->_2.cctor_finished )
      {
        v19 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
        if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        j_il2cpp_runtime_class_init_0(v19);
      }
    }
    v20 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
    if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
    v21 = (System_Int32_array **)*((_QWORD *)v20->static_fields + 1);
    if ( !v21 )
    {
      v22 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
      v23 = WORD1(v22->vtable[0].methodPtr);
      if ( (v23 & 1) == 0 )
      {
        sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        v23 = WORD1(v22->vtable[0].methodPtr);
      }
      if ( (v23 & 0x400) != 0 )
      {
        v24 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
        if ( (BYTE2(v24->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        if ( !v24->_2.cctor_finished )
        {
          v25 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
          if ( (BYTE2(v25->vtable[0].methodPtr) & 1) == 0 )
            sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
          j_il2cpp_runtime_class_init_0(v25);
        }
      }
      v26 = *p_rgctx_data;
      v27 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
      if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        v26 = *p_rgctx_data;
      }
      _2_System_Func_T__bool = v26->_2_System_Func_T__bool_;
      v29 = *(_QWORD *)v27->static_fields;
      if ( (BYTE2(_2_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(_2_System_Func_T__bool);
      v21 = (System_Int32_array **)sub_B2C42C(_2_System_Func_T__bool);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_rgctx_data)->_3_System_Func_T__bool___ctor->methodPointer)(
        v21,
        v29,
        (*p_rgctx_data)->_1_BattleActorControl___c__280_T___UpdateMaterialsOnRenderders_b__280_0);
      v36 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
      if ( (BYTE2(v36->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
      static_fields = (char *)v36->static_fields;
      *((_QWORD *)static_fields + 1) = v21;
      sub_B2C2F8((BattleServantConfConponent_o *)(static_fields + 8), v21, v30, v31, v32, v33, v34, v35);
    }
    v38 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Int32_array **))(*p_rgctx_data)->_4_System_Linq_Enumerable_Where_T_->methodPointer)(
            rendererEnumerable,
            v21);
    if ( !v38 )
      sub_B2C434(0LL, v39);
    v41 = v38;
    _5_System_Collections_Generic_IEnumerable_T = (*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_5_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C((*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_);
    v43 = *(_QWORD *)v41;
    if ( *(_WORD *)(*(_QWORD *)v41 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((Il2CppClass **)v45 - 1) != _5_System_Collections_Generic_IEnumerable_T )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v41 + 298LL) )
          goto LABEL_39;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_39:
      v46 = sub_AC5258(v41, _5_System_Collections_Generic_IEnumerable_T, 0LL, v40);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8));
    if ( !v49 )
      sub_B2C434(0LL, v47);
    v50 = 0;
    while ( 1 )
    {
      v51 = *(_QWORD *)v49;
      if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
      {
        v52 = 0LL;
        v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v53 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v52;
          v53 += 4;
          if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
            goto LABEL_47;
        }
        v54 = v51 + 16LL * *v53 + 312;
      }
      else
      {
LABEL_47:
        v54 = sub_AC5258(v49, System_Collections_IEnumerator_TypeInfo, 0LL, v48);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v49, *(_QWORD *)(v54 + 8)) & 1) == 0 )
        break;
      _6_System_Collections_Generic_IEnumerator_T = (*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C((*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_);
      v57 = *(_QWORD *)v49;
      if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((Il2CppClass **)v59 - 1) != _6_System_Collections_Generic_IEnumerator_T )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
            goto LABEL_56;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_56:
        v60 = sub_AC5258(v49, _6_System_Collections_Generic_IEnumerator_T, 0LL, v55);
      }
      v61 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v49, *(_QWORD *)(v60 + 8));
      if ( !v61 )
        sub_B2C434(0LL, v62);
      materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v61, 0LL);
      v64 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
      v65 = WORD1(v64->vtable[0].methodPtr);
      if ( (v65 & 1) == 0 )
      {
        sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        v65 = WORD1(v64->vtable[0].methodPtr);
      }
      if ( (v65 & 0x400) != 0 )
      {
        v66 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
        if ( (BYTE2(v66->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        if ( !v66->_2.cctor_finished )
        {
          v67 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
          if ( (BYTE2(v67->vtable[0].methodPtr) & 1) == 0 )
            sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
          j_il2cpp_runtime_class_init_0(v67);
        }
      }
      v68 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
      if ( (BYTE2(v68->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
      v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v68->static_fields + 2);
      if ( !v69 )
      {
        v70 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
        v71 = WORD1(v70->vtable[0].methodPtr);
        if ( (v71 & 1) == 0 )
        {
          sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
          v71 = WORD1(v70->vtable[0].methodPtr);
        }
        if ( (v71 & 0x400) != 0 )
        {
          v72 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
          if ( (BYTE2(v72->vtable[0].methodPtr) & 1) == 0 )
            sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
          if ( !v72->_2.cctor_finished )
          {
            v73 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
            if ( (BYTE2(v73->vtable[0].methodPtr) & 1) == 0 )
              sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
            j_il2cpp_runtime_class_init_0(v73);
          }
        }
        v74 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
        if ( (BYTE2(v74->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        v75 = *(Il2CppObject **)v74->static_fields;
        v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_Material__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v69,
          v75,
          (intptr_t)(*p_rgctx_data)->_8_BattleActorControl___c__280_T___UpdateMaterialsOnRenderders_b__280_1,
          (const MethodInfo_2711C04 *)Method_System_Func_Material__bool___ctor__);
        v82 = (*p_rgctx_data)->_0_BattleActorControl___c__280_T_;
        if ( (BYTE2(v82->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C((*p_rgctx_data)->_0_BattleActorControl___c__280_T_);
        v83 = (char *)v82->static_fields;
        *((_QWORD *)v83 + 2) = v69;
        sub_B2C2F8((BattleServantConfConponent_o *)(v83 + 16), (System_Int32_array **)v69, v76, v77, v78, v79, v80, v81);
      }
      v84 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              materials,
              (System_Func_TSource__bool__o *)v69,
              (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_Material___);
      v87 = v84;
      if ( !v84 )
        sub_B2C434(0LL, v85);
      klass = v84->klass;
      if ( *(_WORD *)&v84->klass->_2.bitflags1 )
      {
        v89 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
        {
          ++v89;
          p_offset += 4;
          if ( v89 >= *(unsigned __int16 *)&v84->klass->_2.bitflags1 )
            goto LABEL_90;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_90:
        p_method = sub_AC5258(v84, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL, v86);
      }
      v94 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v87,
              *(_QWORD *)(p_method + 8));
      if ( !v94 )
        sub_B2C434(0LL, v92);
      while ( 1 )
      {
        v95 = *(_QWORD *)v94;
        if ( *(_WORD *)(*(_QWORD *)v94 + 298LL) )
        {
          v96 = 0LL;
          v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v97 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v96;
            v97 += 4;
            if ( v96 >= *(unsigned __int16 *)(*(_QWORD *)v94 + 298LL) )
              goto LABEL_97;
          }
          v98 = v95 + 16LL * *v97 + 312;
        }
        else
        {
LABEL_97:
          v98 = sub_AC5258(v94, System_Collections_IEnumerator_TypeInfo, 0LL, v93);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8)) & 1) == 0 )
          break;
        v100 = *(_QWORD *)v94;
        if ( *(_WORD *)(*(_QWORD *)v94 + 298LL) )
        {
          v101 = 0LL;
          v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_Material__c **)v102 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
          {
            ++v101;
            v102 += 4;
            if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v94 + 298LL) )
              goto LABEL_104;
          }
          v103 = v100 + 16LL * *v102 + 312;
        }
        else
        {
LABEL_104:
          v103 = sub_AC5258(v94, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL, v99);
        }
        v104 = (System_Uri_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v103)(v94, *(_QWORD *)(v103 + 8));
        if ( !updateFunc )
          sub_B2C434(v104, v104);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)updateFunc,
          v104,
          (const MethodInfo_24BBAEC *)Method_System_Action_Material__Invoke__);
      }
      v115[v50] = 143;
      v105 = ++v116;
      v106 = *(_QWORD *)v94;
      if ( *(_WORD *)(*(_QWORD *)v94 + 298LL) )
      {
        v107 = 0LL;
        v108 = (int *)(*(_QWORD *)(v106 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v108 - 1) != System_IDisposable_TypeInfo )
        {
          ++v107;
          v108 += 4;
          if ( v107 >= *(unsigned __int16 *)(*(_QWORD *)v94 + 298LL) )
            goto LABEL_113;
        }
        v109 = v106 + 16LL * *v108 + 312;
      }
      else
      {
LABEL_113:
        v109 = sub_AC5258(v94, System_IDisposable_TypeInfo, 0LL, v99);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v109)(v94, *(_QWORD *)(v109 + 8));
      v50 = 0;
      if ( v105 )
      {
        v50 = v105;
        if ( v115[v105 - 1] == 143 )
        {
          v116 = v105 - 1;
          v50 = v105 - 1;
        }
      }
    }
    v115[v50] = 163;
    v110 = ++v116;
    v111 = *(_QWORD *)v49;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v112 = 0LL;
      v113 = (int *)(*(_QWORD *)(v111 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v113 - 1) != System_IDisposable_TypeInfo )
      {
        ++v112;
        v113 += 4;
        if ( v112 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_126;
      }
      v114 = v111 + 16LL * *v113 + 312;
    }
    else
    {
LABEL_126:
      v114 = sub_AC5258(v49, System_IDisposable_TypeInfo, 0LL, v55);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v114)(v49, *(_QWORD *)(v114 + 8));
    if ( v110 && v115[v110 - 1] == 163 )
      v116 = v110 - 1;
  }
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *IsHideShadow; // x0
  __int64 v7; // x1
  struct BattleServantData_o *v8; // x8
  UnityEngine_Object_o *v9; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *shadowObj; // x20
  struct BattleServantData_o *v13; // x8
  BattleBgMaster_o *v14; // x20
  int32_t v15; // w21
  int32_t BgShadowImageId; // w0
  const MethodInfo *v17; // x2
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v19; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v21; // x8
  const MethodInfo *v22; // x1
  struct BattlePerformance_o *v23; // x8
  BattleServantData_o *v24; // x20
  const MethodInfo *v25; // x1
  const MethodInfo *v26; // x2
  int SpecialShadowEffectId; // w21
  UnityEngine_Object_o *v28; // x21
  int uniqueId; // w8
  unsigned int v30; // w21
  int v31; // w22
  int32_t BattleSize; // w1
  const MethodInfo *v33; // x2
  __int64 v34; // x0
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B86E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BattleBgMaster___, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418B86E = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (BattleServantData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_76;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v8 = this->fields.battleSvtData;
  if ( !v8 )
    goto LABEL_76;
  if ( !v8->fields.isHideShadow )
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
          v13 = this->fields.battleSvtData;
          if ( !v13 )
            goto LABEL_76;
          if ( v13->fields.isEntry )
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
      IsHideShadow = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IsHideShadow )
        goto LABEL_76;
      IsHideShadow = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsHideShadow,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_76;
      v14 = (BattleBgMaster_o *)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_76;
      v15 = (int)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v14 )
        goto LABEL_76;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v14, v15, (int32_t)IsHideShadow, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v17);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v19 = this->fields.performance;
        if ( !v19 )
          goto LABEL_76;
        data = (UnityEngine_Object_o *)v19->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v21 = this->fields.performance;
          if ( !v21 )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)v21->fields.data;
          if ( !IsHideShadow )
            goto LABEL_76;
          GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v22);
          v23 = this->fields.performance;
          if ( !v23 )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)v23->fields.data;
          if ( !IsHideShadow )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)BattleData__GetShadowOffSvtIds((BattleData_o *)IsHideShadow, 0LL);
          if ( !this->fields.performance )
            goto LABEL_76;
          v24 = IsHideShadow;
          SpecialShadowEffectId = BattlePerformance__GetSpecialShadowEffectId(this->fields.performance, 0LL);
          if ( this->fields.currentSpShadowEffectId != SpecialShadowEffectId )
          {
            this->fields.currentSpShadowEffectId = SpecialShadowEffectId;
            BattleActorControl__DestroySpShadowObj(this, v25);
          }
          if ( SpecialShadowEffectId >= 1 )
            BattleActorControl__changeSpecialShadow(this, SpecialShadowEffectId, v26);
          v28 = (UnityEngine_Object_o *)this->fields.shadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
          if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_76;
            uniqueId = v24->fields.uniqueId;
            if ( uniqueId >= 1 )
            {
              v30 = 0;
              while ( 1 )
              {
                if ( v30 >= uniqueId )
                {
                  v34 = sub_B2C460(IsHideShadow);
                  sub_B2C400(v34, 0LL);
                }
                IsHideShadow = this->fields.battleSvtData;
                if ( !IsHideShadow )
                  goto LABEL_76;
                v31 = *((_DWORD *)&v24->fields.userSvtId.fields.currentCryptoKey + (int)v30);
                IsHideShadow = (BattleServantData_o *)BattleServantData__getActorSvtId(IsHideShadow, 0LL);
                if ( v31 == (_DWORD)IsHideShadow )
                  break;
                uniqueId = v24->fields.uniqueId;
                if ( (int)++v30 >= uniqueId )
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
      BattleActorControl__SetShadowSize(this, BattleSize, v33);
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
    sub_B2C434(IsHideShadow, v7);
  }
  v9 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
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

  if ( (byte_418B8A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, eventName);
    byte_418B8A2 = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B2C434(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
         (System_Xml_XmlQualifiedName_o *)eventName,
         &value,
         (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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

  if ( (byte_418B8B1 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__WaitToNoblePhantasmPlay_d__259_TypeInfo, method);
    byte_418B8B1 = 1;
  }
  v3 = sub_B2C42C(BattleActorControl__WaitToNoblePhantasmPlay_d__259_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__259___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__208_0(
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
  if ( (byte_418B8FF & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, playedSoundId);
    byte_418B8FF = 1;
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
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v10, 0LL);
  if ( !data )
LABEL_10:
    sub_B2C434(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__131_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__258_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__260_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0
  const MethodInfo *v5; // x3
  BattleFBXComponent_c *v6; // x0

  if ( (byte_418B901 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6351/*"FINISHED"*/, v3);
    byte_418B901 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_11;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  if ( this->fields.noblePhantasmCallback )
  {
    v6 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v6 = BattleFBXComponent_TypeInfo;
    }
    v6->static_fields->EnableEvent = 1;
    performance = (BattlePerformance_o *)this->fields.noblePhantasmCallback;
    if ( performance )
    {
      System_Action__Invoke((System_Action_o *)performance, 0LL);
      return;
    }
LABEL_11:
    sub_B2C434(performance, method);
  }
  BattleActorControl__sendEventFSM_32437564(this, (System_String_o *)StringLiteral_6351/*"FINISHED"*/, 0, v5);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__256_0(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleSequenceManager_o *Instance; // x0
  __int64 v7; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v9; // x20
  __int64 v10; // x21
  __int64 v11; // x22
  int32_t v12; // w21
  BattleSequenceManager_o *v13; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v15; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v18; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v20; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16

  if ( (byte_418B900 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v4);
    sub_B2C35C(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v5);
    byte_418B900 = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  v9 = Instance;
  v11 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v21, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_13;
  v12 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !Instance )
    goto LABEL_13;
  v13 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_13;
  m_CachedPtr = v13->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0LL);
  v15 = this->fields.battleSvtData;
  if ( !v15
    || (overwriteSvtVoiceId = v15->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v15->fields.treasuredvcLevel,
        v18 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v20 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B2C42C(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v20,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v9) )
  {
LABEL_13:
    sub_B2C434(Instance, v7);
  }
  BattleSequenceManager__loadSequence(
    v9,
    v12,
    m_CachedPtr,
    v18,
    overwriteSvtVoiceId,
    treasuredvcLevel,
    NpChargeStage,
    v20,
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__addBuffLoopEffect(
        BattleActorControl_o *this,
        BuffEntity_o *buffEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *effectId; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v17; // x8
  __int64 v18; // x9
  BattleEffectUtility_BuffEffectLoadArgument_o *v19; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v21; // w22
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x24
  float v24; // s0
  float v25; // s1
  float v26; // s2
  float v27; // s8
  float v28; // s9
  float v29; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v31; // x1
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  UnityEngine_Transform_o *transform; // x22
  int v35; // s0
  UnityEngine_Transform_o *v38; // x22
  int v39; // s0
  StatusEffectPosOverwriteMaster_o *v43; // x22
  int32_t v44; // w23
  int32_t v45; // w24
  const MethodInfo *v46; // x1
  int32_t v47; // w0
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 isEnemy; // w25
  UnityEngine_Transform_o *v50; // x22
  System_String_o *nodeName; // x24
  UnityEngine_Transform_o *v52; // x23
  int32_t v53; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x23
  float v55; // s0
  float v56; // s1
  float v57; // s2
  float v58; // s8
  float v59; // s9
  float v60; // s10
  float v61; // s0
  float v62; // s1
  float v63; // s2
  struct BattleServantData_o *v64; // x8
  float x; // s10
  float y; // s8
  float z; // s9
  bool v68; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v76; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B8EA & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, buffEntity);
    sub_B2C35C(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ConstantStrMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_7082/*"HIDE_STATUS_EFFECT_IDS"*/, v13);
    byte_418B8EA = 1;
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
         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                    (DataManager_o *)buffLoopEffectDict,
                                                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7082/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v17 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v17 < 1 )
  {
LABEL_15:
    v19 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B2C42C(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v19, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21 = buffEntity->fields.effectId;
    v22 = gameObject;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_zero(0LL);
    buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      v27 = v24;
      v28 = v25;
      v29 = v26;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v31);
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      v70.fields.x = v27;
      v70.fields.y = v28;
      v70.fields.z = v29;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v22,
                                               v21,
                                               v23,
                                               v70,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v19,
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
        *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Vector3__get_zero(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v35, 0LL);
          v38 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
          *(UnityEngine_Quaternion_o *)&v39 = UnityEngine_Quaternion__get_identity(0LL);
          if ( v38 )
          {
            UnityEngine_Transform__set_localRotation(v38, *(UnityEngine_Quaternion_o *)&v39, 0LL);
            buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)buffLoopEffectDict, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( buffLoopEffectDict )
              {
                v43 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_47;
                v44 = buffEntity->fields.effectId;
                v45 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
                v47 = BattleActorControl__getLimitCount(this, v46);
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)StatusEffectPosOverwriteMaster__TryGetEntity(v43, &entity, v44, v45, v47, 0LL);
                if ( ((unsigned __int8)buffLoopEffectDict & 1) != 0 )
                {
                  battleSvtData = this->fields.battleSvtData;
                  if ( !battleSvtData )
                    goto LABEL_47;
                  isEnemy = battleSvtData->fields.isEnemy;
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                  if ( !this->fields.actorObject )
                    goto LABEL_47;
                  v50 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_47;
                  nodeName = entity->fields.nodeName;
                  v52 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v53 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v52, nodeName, v53, 1, 0LL);
                  *(UnityEngine_Vector3_o *)&v55 = UnityEngine_Vector3__get_zero(0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  v58 = v55;
                  v59 = v56;
                  v60 = v57;
                  *(UnityEngine_Vector3_o *)&v61 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v50 )
                    goto LABEL_47;
                  v71.fields.x = v58 + v61;
                  v71.fields.y = v59 + v62;
                  v71.fields.z = v60 + v63;
                  UnityEngine_Transform__set_localPosition(v50, v71, 0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  v76 = UnityEngine_Quaternion__Euler_35347036(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v50, v76, 0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v50, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v50, NodeFromLvName, 0LL);
                }
              }
              v64 = this->fields.battleSvtData;
              if ( !v64 )
                goto LABEL_47;
              if ( v64->fields.isEnemy )
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
                v75.fields.x = -x;
                v75.fields.y = y;
                v75.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v75, 0LL);
              }
              buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v68 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v68, 0LL);
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectToNode,
                    (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B2C434(buffLoopEffectDict, effectId);
  }
  v18 = 0LL;
  while ( ValueArray->m_Items[v18 + 1] != buffEntity->fields.effectId )
  {
    if ( (int)++v18 >= (int)v17 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B2C434(0LL, method);
  BattlePerformance__callServant(performance, this->fields.actiondata, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__changeShadowType(
        BattleActorControl_o *this,
        bool isNormal,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v8; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_418B8B9 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, isNormal);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418B8B9 = 1;
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
                                                                   (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, isNormal, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_B2C434(Component_WebViewObject, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_WebViewObject, !isNormal, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__changeSpecialShadow(
        BattleActorControl_o *this,
        int32_t shadowEffectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  UnityEngine_Component_o *Component_WebViewObject; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v21; // w21
  System_Action_o *v22; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_418B8B8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&shadowEffectId);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_Renderer___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass267_0__changeSpecialShadow_b__0__, v8);
    sub_B2C35C(&BattleActorControl___c__DisplayClass267_0_TypeInfo, v9);
    byte_418B8B8 = 1;
  }
  v10 = sub_B2C42C(BattleActorControl___c__DisplayClass267_0_TypeInfo);
  BattleActorControl___c__DisplayClass267_0___ctor((BattleActorControl___c__DisplayClass267_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_19;
  *(_QWORD *)(v10 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v10 + 24) = shadowEffectId;
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
                                                               (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_WebViewObject )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, 0, 0LL);
          v21 = *(_DWORD *)(v10 + 24);
          v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v10,
            Method_BattleActorControl___c__DisplayClass267_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          BattleEffectUtility__LoadEffectAssetIfNotYet(v21, v22, performance, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B2C434(Component_WebViewObject, v12);
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
    sub_B2C434(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418B8D1 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleActorControl_endChangeAppearance__, v3);
    byte_418B8D1 = 1;
  }
  performance = this->fields.performance;
  v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_B2C434(v6, v7);
  BattlePerformance__checkChangeAppearance(performance, v5, 0LL);
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
    v11 = sub_B2C460(this);
    sub_B2C400(v11, 0LL);
  }
  this = (BattleActorControl_o *)motionFSM->m_Items[actindex];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(this, name);
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
    v10 = sub_B2C460(this);
    sub_B2C400(v10, 0LL);
  }
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B2C434(this, name);
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
    sub_B2C434(0LL, key);
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

  if ( (byte_418B87D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22432/*"summon"*/, method);
    byte_418B87D = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_22432/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_B2C434(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_35348680(0, 1000, 0LL) < StepRate;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__checkVoice(
        BattleActorControl_o *this,
        int32_t type,
        bool isNp,
        const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_418B88B & 1) == 0 )
  {
    sub_B2C35C(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_418B88B = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_32445724(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_32445724(
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

  if ( (byte_418B88C & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_418B88C = 1;
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
      sub_B2C434(battleSvtData, voiceTypeId);
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


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418B8D9 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__coAddAura_d__317_TypeInfo, *(_QWORD *)&auraEffectId);
    byte_418B8D9 = 1;
  }
  v7 = sub_B2C42C(BattleActorControl__coAddAura_d__317_TypeInfo);
  BattleActorControl__coAddAura_d__317___ctor((BattleActorControl__coAddAura_d__317_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_418B8DC & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__colShiftServant_d__323_TypeInfo, shiftSvt);
    byte_418B8DC = 1;
  }
  v9 = sub_B2C42C(BattleActorControl__colShiftServant_d__323_TypeInfo);
  BattleActorControl__colShiftServant_d__323___ctor((BattleActorControl__colShiftServant_d__323_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)shiftSvt, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_B2C2F8(
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

  if ( (byte_418B8DD & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__colShiftServantChange_d__324_TypeInfo, shiftSvt);
    byte_418B8DD = 1;
  }
  v7 = sub_B2C42C(BattleActorControl__colShiftServantChange_d__324_TypeInfo);
  BattleActorControl__colShiftServantChange_d__324___ctor(
    (BattleActorControl__colShiftServantChange_d__324_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)shiftSvt, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_418B8D5 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__collChangeAppearance_d__312_TypeInfo, method);
    byte_418B8D5 = 1;
  }
  v3 = sub_B2C42C(BattleActorControl__collChangeAppearance_d__312_TypeInfo);
  BattleActorControl__collChangeAppearance_d__312___ctor(
    (BattleActorControl__collChangeAppearance_d__312_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_418B8D0 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__colloadDressServant_d__307_TypeInfo, flg);
    byte_418B8D0 = 1;
  }
  v5 = sub_B2C42C(BattleActorControl__colloadDressServant_d__307_TypeInfo);
  BattleActorControl__colloadDressServant_d__307___ctor((BattleActorControl__colloadDressServant_d__307_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_418B8CF & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__colloadTransformServant_d__305_TypeInfo, method);
    byte_418B8CF = 1;
  }
  v3 = sub_B2C42C(BattleActorControl__colloadTransformServant_d__305_TypeInfo);
  BattleActorControl__colloadTransformServant_d__305___ctor(
    (BattleActorControl__colloadTransformServant_d__305_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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

  if ( (byte_418B888 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__coroutinePostCallBack_d__199_TypeInfo, callBack);
    byte_418B888 = 1;
  }
  v6 = sub_B2C42C(BattleActorControl__coroutinePostCallBack_d__199_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__199___ctor(
    (BattleActorControl__coroutinePostCallBack_d__199_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B2C434(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_B2C2F8((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callBack, v9, v10, v11, v12, v13, v14);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_418B8D4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_5484/*"END_LOAD"*/, method);
    byte_418B8D4 = 1;
  }
  BattleActorControl__sendEventFSM_32437564(this, (System_String_o *)StringLiteral_5484/*"END_LOAD"*/, 0, v2);
}


void __fastcall BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x1
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v7; // x2
  struct BattleServantData_o *v8; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *actiondata; // x8
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_418B889 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8789/*"MOTION_BACK"*/, method);
    byte_418B889 = 1;
  }
  BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_21;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v7);
  v8 = this->fields.battleSvtData;
  if ( !v8 )
    goto LABEL_21;
  isEnemy = v8->fields.isEnemy;
  actiondata = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !actiondata )
      goto LABEL_21;
    if ( actiondata->fields.treasureDvcId >= 1 )
      goto LABEL_11;
  }
  else if ( !actiondata )
  {
    goto LABEL_21;
  }
  if ( System_String__op_Equality(actiondata->fields.motionname, (System_String_o *)StringLiteral_8789/*"MOTION_BACK"*/, 0LL) )
  {
LABEL_11:
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v11);
  }
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_21;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, 0LL) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_21;
    if ( !BattleServantData__isDeadStand(battleSvtData, 0LL) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_21;
      if ( !BattleServantData__isDeadWait(battleSvtData, 0LL) )
        BattleActorControl__invisibleSvtModel(this, 1, v12);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_21:
    sub_B2C434(battleSvtData, v4);
  BattlePerformance__endActionData((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_32437564(this, call, 0, v3);
}


void __fastcall BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *transform; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x19
  unsigned int v9; // w21
  char *v10; // x8
  UnityEngine_Component_o *v11; // x20
  int v12; // w8
  void *v13; // x20
  unsigned int v14; // w24
  __int64 v15; // x0

  if ( (byte_418B8DE & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v3);
    sub_B2C35C(&StringLiteral_18199/*"ef_pig_return01"*/, v4);
    byte_418B8DE = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_B2C434(transform, v6);
  }
  v7 = *((_DWORD *)transform + 6);
  v8 = transform;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        goto LABEL_21;
      v10 = (char *)&v8[2 * v9];
      v11 = (UnityEngine_Component_o *)*((_QWORD *)v10 + 4);
      if ( !v11 )
        goto LABEL_20;
      transform = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v10 + 4), 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = (void *)System_String__Contains(
                            (System_String_o *)transform,
                            (System_String_o *)StringLiteral_18199/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                      v11,
                      (const MethodInfo_172DF98 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !transform )
          goto LABEL_20;
        v12 = *((_DWORD *)transform + 6);
        v13 = transform;
        if ( v12 >= 1 )
          break;
      }
LABEL_18:
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        return;
    }
    v14 = 0;
    while ( v14 < v12 )
    {
      transform = (void *)*((_QWORD *)v13 + (int)v14 + 4);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_ParticleSystem__set_loop((UnityEngine_ParticleSystem_o *)transform, 0, 0LL);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_18;
    }
LABEL_21:
    v15 = sub_B2C460(transform);
    sub_B2C400(v15, 0LL);
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
    BattleActorControl__finishMotion_32444424(this, v7);
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
    sub_B2C434(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_32444424(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_418B887 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B887 = 1;
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
      sub_B2C434(MotionSkip, v4);
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

  if ( (byte_418B866 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, name);
    byte_418B866 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL)
    || (index = v6->fields.index,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B2C434(battleSvtData, name);
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

  if ( (byte_418B867 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, name);
    byte_418B867 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v6 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B2C434(battleSvtData, name);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, method);
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


float __fastcall BattleActorControl__getHeight(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleServantData_o *battleSvtData; // x8
  float actorScale; // s0
  float *p_height; // x8
  BattleActorControl_c *v6; // x0
  float height; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_418B89D & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B2C35C(&BattleActorControl_TypeInfo, method);
    byte_418B89D = 1;
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
    sub_B2C434(this, method);
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


int32_t __fastcall BattleActorControl__getLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, method);
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
  if ( (byte_418B881 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&pos);
    byte_418B881 = 1;
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
    sub_B2C434(this, *(_QWORD *)&pos);
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

  if ( (byte_418B865 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418B865 = 1;
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
    sub_B2C434(v4, v5);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, method);
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

  if ( (byte_418B882 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_ActorMotionActiveCheck_TypeInfo, method);
    byte_418B882 = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_B2C42C(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0LL);
    this->fields._checkMotion = v4;
    sub_B2C2F8(
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w19
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w20

  if ( (byte_418B864 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_418B864 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_418B860 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v2);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_418B860 = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  if ( !v4 )
    sub_B2C434(v5, v6);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v4,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_B2C434(0LL, hideFlg);
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
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v5; // x8
  unsigned __int64 v6; // x21
  UnityEngine_Object_o *v7; // x19
  __int64 v9; // x0

  v2 = this;
  if ( (byte_418B87A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_13160/*"SummonEndFlag"*/, v3);
    byte_418B87A = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v5 < 1 )
    return 0;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v6 >= (unsigned int)v5 )
    {
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    v7 = (UnityEngine_Object_o *)motionFSM->m_Items[v6];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v7 )
        goto LABEL_19;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v7, 0LL);
      if ( !this )
        goto LABEL_19;
      this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
      if ( !this )
        goto LABEL_19;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13160/*"SummonEndFlag"*/,
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
    LODWORD(v5) = motionFSM->max_length;
    if ( (__int64)++v6 >= (int)v5 )
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
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_B2C434(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x3
  __int64 v46; // x21
  BattleActorControl_EndCallEvent_o *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+Ch] [xbp-54h] BYREF
  float v61; // [xsp+28h] [xbp-38h] BYREF
  float v62; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_418B8A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_moveStep__, target);
    sub_B2C35C(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, v20);
    sub_B2C35C(&float_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v22);
    sub_B2C35C(&StringLiteral_12375/*"STEP_START"*/, v23);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v24);
    sub_B2C35C(&StringLiteral_19145/*"hight"*/, v25);
    sub_B2C35C(&StringLiteral_22327/*"step_back"*/, v26);
    byte_418B8A6 = 1;
  }
  this->fields.targetObject = target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32449920(this, (System_String_o *)StringLiteral_22327/*"step_back"*/, 0, v45);
  v46 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v46, 0LL);
  v47 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v47, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v46 )
    sub_B2C434(v48, v49);
  *(_QWORD *)(v46 + 16) = v47;
  sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)v47, v50, v51, v52, v53, v54, v55);
  v62 = hight;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_19145/*"hight"*/,
    v56,
    0LL);
  v61 = time;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_22677/*"time"*/,
    v57,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_21510/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12375/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v46,
    v59);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_418B8A8 & 1) == 0 )
  {
    sub_B2C35C(&iTween_TypeInfo, method);
    byte_418B8A8 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42850528(gameObject, 0LL);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x3
  __int64 v46; // x21
  BattleActorControl_EndCallEvent_o *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+Ch] [xbp-54h] BYREF
  float v61; // [xsp+28h] [xbp-38h] BYREF
  float v62; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_418B8A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_moveJump__, target);
    sub_B2C35C(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, v20);
    sub_B2C35C(&float_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_8296/*"JUMP_UP"*/, v22);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v23);
    sub_B2C35C(&StringLiteral_20083/*"jump"*/, v24);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v25);
    sub_B2C35C(&StringLiteral_19145/*"hight"*/, v26);
    byte_418B8A3 = 1;
  }
  this->fields.targetObject = target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32449920(this, (System_String_o *)StringLiteral_20083/*"jump"*/, 0, v45);
  v46 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v46, 0LL);
  v47 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v47, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v46 )
    sub_B2C434(v48, v49);
  *(_QWORD *)(v46 + 16) = v47;
  sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)v47, v50, v51, v52, v53, v54, v55);
  v62 = hight;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_19145/*"hight"*/,
    v56,
    0LL);
  v61 = time;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_22677/*"time"*/,
    v57,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_21510/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8296/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v46,
    v59);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x3
  __int64 v46; // x21
  BattleActorControl_EndCallEvent_o *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+Ch] [xbp-54h] BYREF
  float v61; // [xsp+28h] [xbp-38h] BYREF
  float v62; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_418B8A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_moveStep__, target);
    sub_B2C35C(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, v20);
    sub_B2C35C(&float_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v22);
    sub_B2C35C(&StringLiteral_12375/*"STEP_START"*/, v23);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v24);
    sub_B2C35C(&StringLiteral_19145/*"hight"*/, v25);
    sub_B2C35C(&StringLiteral_22328/*"step_front"*/, v26);
    byte_418B8A5 = 1;
  }
  this->fields.targetObject = target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32449920(this, (System_String_o *)StringLiteral_22328/*"step_front"*/, 0, v45);
  v46 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v46, 0LL);
  v47 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v47, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v46 )
    sub_B2C434(v48, v49);
  *(_QWORD *)(v46 + 16) = v47;
  sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)v47, v50, v51, v52, v53, v54, v55);
  v62 = hight;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_19145/*"hight"*/,
    v56,
    0LL);
  v61 = time;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_22677/*"time"*/,
    v57,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_21510/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12375/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v46,
    v59);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  const MethodInfo *v49; // x3
  __int64 v50; // x21
  BattleActorControl_EndCallEvent_o *v51; // x22
  __int64 v52; // x0
  __int64 v53; // x1
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  Il2CppObject *v60; // x0
  Il2CppObject *v61; // x0
  Il2CppObject *v62; // x0
  const MethodInfo *v63; // x3
  __int64 v64; // x20
  BattleActorControl_EndCallEvent_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  const MethodInfo *v72; // x3
  int32_t v73; // [xsp+Ch] [xbp-54h] BYREF
  float v74; // [xsp+28h] [xbp-38h] BYREF
  float v75; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_418B8A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_moveStep__, target);
    sub_B2C35C(&Method_BattleActorControl_playAnimation__, v18);
    sub_B2C35C(&BattleActorControl_EndCallEvent_TypeInfo, v19);
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, v20);
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, v21);
    sub_B2C35C(&float_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v23);
    sub_B2C35C(&StringLiteral_12375/*"STEP_START"*/, v24);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v25);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v26);
    sub_B2C35C(&StringLiteral_19145/*"hight"*/, v27);
    sub_B2C35C(&StringLiteral_21002/*"name"*/, v28);
    sub_B2C35C(&StringLiteral_22328/*"step_front"*/, v29);
    sub_B2C35C(&StringLiteral_12374/*"STEP_END_02"*/, v30);
    byte_418B8A4 = 1;
  }
  this->fields.targetObject = target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  BattleActorControl__playAnimation_32449920(this, (System_String_o *)StringLiteral_22328/*"step_front"*/, 0, v49);
  v50 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v50, 0LL);
  v51 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v51, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v50 )
    goto LABEL_6;
  *(_QWORD *)(v50 + 16) = v51;
  sub_B2C2F8((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v51, v54, v55, v56, v57, v58, v59);
  v75 = hight;
  v60 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v75);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_19145/*"hight"*/,
    v60,
    0LL);
  v74 = time;
  v61 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v74);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_22677/*"time"*/,
    v61,
    0LL);
  v73 = pos;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v73);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_21510/*"pos"*/,
    v62,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12375/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v50,
    v63);
  v64 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v64, 0LL);
  v65 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v65, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v64 )
LABEL_6:
    sub_B2C434(v52, v53);
  *(_QWORD *)(v64 + 16) = v65;
  sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)v65, v66, v67, v68, v69, v70, v71);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_21002/*"name"*/,
    (Il2CppObject *)StringLiteral_23190/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12374/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v64,
    v72);
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
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x3
  __int64 v46; // x21
  BattleActorControl_EndCallEvent_o *v47; // x22
  __int64 v48; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  Il2CppObject *v56; // x0
  Il2CppObject *v57; // x0
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+Ch] [xbp-54h] BYREF
  float v61; // [xsp+28h] [xbp-38h] BYREF
  float v62; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_418B8A7 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_moveStep__, target);
    sub_B2C35C(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, v20);
    sub_B2C35C(&float_TypeInfo, v21);
    sub_B2C35C(&StringLiteral_22790/*"treasure_arms"*/, v22);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v23);
    sub_B2C35C(&StringLiteral_12375/*"STEP_START"*/, v24);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v25);
    sub_B2C35C(&StringLiteral_19145/*"hight"*/, v26);
    byte_418B8A7 = 1;
  }
  this->fields.targetObject = target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32449920(this, (System_String_o *)StringLiteral_22790/*"treasure_arms"*/, 0, v45);
  v46 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v46, 0LL);
  v47 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v47, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v46 )
    sub_B2C434(v48, v49);
  *(_QWORD *)(v46 + 16) = v47;
  sub_B2C2F8((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)v47, v50, v51, v52, v53, v54, v55);
  v62 = hight;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_19145/*"hight"*/,
    v56,
    0LL);
  v61 = time;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_22677/*"time"*/,
    v57,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v46,
    (System_String_o *)StringLiteral_21510/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12375/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v46,
    v59);
}


void __fastcall BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Hashtable_o *v14; // x20
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v21; // [xsp+8h] [xbp-28h] BYREF
  int v22; // [xsp+Ch] [xbp-24h] BYREF
  char v23[4]; // [xsp+18h] [xbp-18h] BYREF
  int v24; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_418B8AE & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&float_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v9);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v10);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v11);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v12);
    sub_B2C35C(&iTween_TypeInfo, v13);
    byte_418B8AE = 1;
  }
  v14 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v14, 0LL);
  v24 = 0;
  v15 = j_il2cpp_value_box_0(int_TypeInfo, &v24);
  if ( !v14 )
    sub_B2C434(v15, v16);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_23408/*"y"*/,
    v15,
    v14->klass->vtable._24_Clear.methodPtr);
  v23[0] = 1;
  v17 = j_il2cpp_value_box_0(bool_TypeInfo, v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_19967/*"islocal"*/,
    v17,
    v14->klass->vtable._24_Clear.methodPtr);
  v22 = 0;
  v18 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_18114/*"easetype"*/,
    v18,
    v14->klass->vtable._24_Clear.methodPtr);
  v21 = time;
  v19 = j_il2cpp_value_box_0(float_TypeInfo, &v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_22677/*"time"*/,
    v19,
    v14->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(actorObject, v14, 0LL);
}


void __fastcall BattleActorControl__moveJump(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x21
  int klass; // s8
  float v12; // s9
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  BattleActorControl_o *v15; // x0
  long double v16; // q0
  float v17; // s1

  v3 = table;
  v4 = this;
  if ( (byte_418B8AA & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, table);
    sub_B2C35C(&float_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v6);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v7);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_19145/*"hight"*/, v8);
    byte_418B8AA = 1;
  }
  if ( !v3
    || (v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19145/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_22677/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_21510/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v9) )
  {
LABEL_12:
    sub_B2C434(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B2C728(v9);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B2C728(v10);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v16 = sub_B2C728(v3);
    goto LABEL_11;
  }
  v12 = *(float *)&this->klass;
  v13 = *(_DWORD *)j_il2cpp_object_unbox_0(v3);
  v15 = v4;
  LODWORD(v16) = klass;
  v17 = v12;
LABEL_11:
  BattleActorControl__moveJump_32462572(v15, *(float *)&v16, v17, v13, v14);
}


void __fastcall BattleActorControl__moveJump_32462572(
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
  BattleActorControl__moveUp_32461444(this, hight, time, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__movePos(
        BattleActorControl_o *this,
        int32_t pos,
        float time,
        System_String_o *endcall,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackEvent,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_Collections_Hashtable_o *v25; // x22
  const MethodInfo *v26; // x2
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x0
  __int64 v30; // x0
  bool v31; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x19
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+0h] [xbp-50h] BYREF
  float v35; // [xsp+18h] [xbp-38h] BYREF
  int v36; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_418B8AB & 1) == 0 )
  {
    sub_B2C35C(&iTween_EaseType_TypeInfo, *(_QWORD *)&pos);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&float_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Vector3_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v17);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v18);
    sub_B2C35C(&StringLiteral_21264/*"oncompleteparams"*/, v19);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v20);
    sub_B2C35C(&StringLiteral_21511/*"position"*/, v21);
    sub_B2C35C(&StringLiteral_18354/*"endMotion"*/, v22);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v23);
    sub_B2C35C(&iTween_TypeInfo, v24);
    byte_418B8AB = 1;
  }
  v25 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v25, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v26);
  v27 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec);
  if ( !v25 )
    sub_B2C434(v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_21511/*"position"*/,
    v27,
    v25->klass->vtable._24_Clear.methodPtr);
  v36 = 1;
  v29 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_18114/*"easetype"*/,
    v29,
    v25->klass->vtable._24_Clear.methodPtr);
  v35 = time;
  v30 = j_il2cpp_value_box_0(float_TypeInfo, &v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_22677/*"time"*/,
    v30,
    v25->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v31 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v31 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21265/*"oncompletetarget"*/,
        callbackObject,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21263/*"oncomplete"*/,
        callbackEvent,
        v25->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21265/*"oncompletetarget"*/,
        gameObject,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21263/*"oncomplete"*/,
        StringLiteral_18354/*"endMotion"*/,
        v25->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_21264/*"oncompleteparams"*/,
      endcall,
      v25->klass->vtable._24_Clear.methodPtr);
  }
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(v33, v25, 0LL);
}


void __fastcall BattleActorControl__moveStep(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x21
  int klass; // s8
  float v12; // s9
  int32_t v13; // w1
  const MethodInfo *v14; // x2
  BattleActorControl_o *v15; // x0
  long double v16; // q0
  float v17; // s1

  v3 = table;
  v4 = this;
  if ( (byte_418B8A9 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_POS_TypeInfo, table);
    sub_B2C35C(&float_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v6);
    sub_B2C35C(&StringLiteral_21510/*"pos"*/, v7);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_19145/*"hight"*/, v8);
    byte_418B8A9 = 1;
  }
  if ( !v3
    || (v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19145/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_22677/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_21510/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v9) )
  {
LABEL_12:
    sub_B2C434(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B2C728(v9);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B2C728(v10);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v16 = sub_B2C728(v3);
    goto LABEL_11;
  }
  v12 = *(float *)&this->klass;
  v13 = *(_DWORD *)j_il2cpp_object_unbox_0(v3);
  v15 = v4;
  LODWORD(v16) = klass;
  v17 = v12;
LABEL_11:
  BattleActorControl__moveStep_32460548(v15, *(float *)&v16, v17, v13, v14);
}


void __fastcall BattleActorControl__moveStep_32460548(
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
  BattleActorControl__moveUp_32461444(this, hight, time, v9);
}


void __fastcall BattleActorControl__moveUp(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  float v8; // s8
  float v9; // s1
  const MethodInfo *v10; // x1
  BattleActorControl_o *v11; // x0
  const MethodInfo *v12; // x1
  long double v13; // q0

  v3 = table;
  v4 = this;
  if ( (byte_418B8AC & 1) == 0 )
  {
    sub_B2C35C(&float_TypeInfo, table);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v5);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_19145/*"hight"*/, v6);
    byte_418B8AC = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
         v3,
         StringLiteral_19145/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                   v3,
                                   StringLiteral_22677/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  if ( !v7 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v7 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B2C728(v7);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v7);
  if ( !v3 )
LABEL_9:
    sub_B2C434(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v8 = *(float *)&this->klass;
    v9 = *(float *)j_il2cpp_object_unbox_0(v3);
    BattleActorControl__moveUp_32461444(v4, v8, v9, v10);
    return;
  }
LABEL_11:
  v13 = sub_B2C728(v3);
  BattleActorControl__moveDown(v11, *(float *)&v13, v12);
}


void __fastcall BattleActorControl__moveUp_32461444(
        BattleActorControl_o *this,
        float hight,
        float time,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
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
  System_Collections_Hashtable_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x0
  __int64 v23; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v28; // [xsp+Ch] [xbp-44h] BYREF
  float v29; // [xsp+10h] [xbp-40h] BYREF
  int v30; // [xsp+14h] [xbp-3Ch] BYREF
  char v31[4]; // [xsp+18h] [xbp-38h] BYREF
  float v32; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_418B8AD & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, method);
    sub_B2C35C(&iTween_EaseType_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, v8);
    sub_B2C35C(&float_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v10);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v11);
    sub_B2C35C(&StringLiteral_21264/*"oncompleteparams"*/, v12);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v13);
    sub_B2C35C(&StringLiteral_23408/*"y"*/, v14);
    sub_B2C35C(&StringLiteral_19967/*"islocal"*/, v15);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v16);
    sub_B2C35C(&StringLiteral_20578/*"moveDown"*/, v17);
    sub_B2C35C(&iTween_TypeInfo, v18);
    byte_418B8AD = 1;
  }
  v19 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v19, 0LL);
  v32 = hight;
  v20 = j_il2cpp_value_box_0(float_TypeInfo, &v32);
  if ( !v19 )
    sub_B2C434(v20, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_23408/*"y"*/,
    v20,
    v19->klass->vtable._24_Clear.methodPtr);
  v31[0] = 1;
  v22 = j_il2cpp_value_box_0(bool_TypeInfo, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_19967/*"islocal"*/,
    v22,
    v19->klass->vtable._24_Clear.methodPtr);
  v30 = 1;
  v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_18114/*"easetype"*/,
    v23,
    v19->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_21265/*"oncompletetarget"*/,
    gameObject,
    v19->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_21263/*"oncomplete"*/,
    StringLiteral_20578/*"moveDown"*/,
    v19->klass->vtable._24_Clear.methodPtr);
  v29 = time;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v29);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_21264/*"oncompleteparams"*/,
    v25,
    v19->klass->vtable._24_Clear.methodPtr);
  v28 = time;
  v26 = j_il2cpp_value_box_0(float_TypeInfo, &v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_22677/*"time"*/,
    v26,
    v19->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(actorObject, v19, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_418B8C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_skipVoice__, method);
    sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_418B8C6 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B2C42C(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B2C434(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v8, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  BattlePerformanceStatus_o *v5; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_418B8CE & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_skipDead__, method);
    this = (BattleActorControl_o *)sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_418B8CE = 1;
  }
  klass = v2[8].klass;
  if ( !klass
    || (v5 = *(BattlePerformanceStatus_o **)&klass->_2.cctor_finished,
        v6 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B2C42C(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v6, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v5) )
  {
    sub_B2C434(this, method);
  }
  BattlePerformanceStatus__setTouchOff(v5, v6, 0LL);
}


void __fastcall BattleActorControl__onTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_418B8C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_skipVoice__, method);
    sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_418B8C5 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B2C42C(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B2C434(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v8, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  Il2CppClass *klass; // x8
  BattlePerformanceStatus_o *v5; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_418B8CD & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_skipDead__, method);
    this = (BattleActorControl_o *)sub_B2C35C(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_418B8CD = 1;
  }
  klass = v2[8].klass;
  if ( !klass
    || (v5 = *(BattlePerformanceStatus_o **)&klass->_2.cctor_finished,
        v6 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B2C42C(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v6, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v5) )
  {
    sub_B2C434(this, method);
  }
  BattlePerformanceStatus__setTouchOn(v5, v6, 0LL);
}


void __fastcall BattleActorControl__playAnimation(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  BattleActorControl_o *v8; // x0
  System_String_o *v9; // x1
  bool v10; // w2
  const MethodInfo *v11; // x3

  v4 = this;
  if ( (byte_418B898 & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, table);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_21002/*"name"*/, v5);
    byte_418B898 = 1;
  }
  if ( !table )
    sub_B2C434(this, table);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_21002/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v6 && v6->klass != string_TypeInfo )
  {
    sub_B2C728(v6);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v8, v9, v10, v11);
  }
  else
  {
    BattleActorControl__playAnimation_32449920(v4, v6, 0, v7);
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

  if ( (byte_418B89A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1543/*"@playAnim\n =>{0},{1}"*/, animname);
    byte_418B89A = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_44301068((System_String_o *)StringLiteral_1543/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_B2C434(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_32449920(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isDontOverwrite,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_String_o *v13; // x20
  __int64 v14; // x1
  BattleFBXComponent_o *fbxcomponent; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v18; // x19
  float length; // s0
  float v20; // s0
  UnityEngine_Object_o *v21; // x21
  struct BattleFBXComponent_o *v22; // x22
  __int64 v23; // x3
  BattleFBXComponent_c *klass; // x8
  BattleFBXComponent_o *v25; // x19
  unsigned __int64 v26; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v28; // x0
  float v29; // s0
  float v30; // s0

  if ( (byte_418B899 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, animname);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&SimpleAnimation_State_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_23190/*"wait"*/, v10);
    sub_B2C35C(&StringLiteral_1542/*"@playAnim\n =>{0}"*/, v11);
    byte_418B899 = 1;
  }
  v13 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v13 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v13, 1, v12);
  System_String__Format((System_String_o *)StringLiteral_1542/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v13, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_35;
  BattleFBXComponent__playAnimation(fbxcomponent, v13, 0LL);
  if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_23190/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_35;
    ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                          (UnityEngine_GameObject_o *)fbxcomponent,
                                                                          (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                 v13,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v18 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem,
                                                 v13,
                                                 0LL);
        if ( fbxcomponent )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)fbxcomponent, 0LL);
          v20 = UnityEngine_Random__Range(0.0, length, 0LL);
          if ( v18 )
          {
            v18->fields.currentAnimTime = v20;
            return;
          }
        }
LABEL_35:
        sub_B2C434(fbxcomponent, v14);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_35;
      v21 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                      (UnityEngine_GameObject_o *)fbxcomponent,
                                      (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_35;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v21, v13, 0LL) )
        {
          v22 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v21, v13, 0LL);
          if ( !fbxcomponent )
            goto LABEL_35;
          klass = fbxcomponent->klass;
          v25 = fbxcomponent;
          if ( *(_WORD *)&fbxcomponent->klass->_2.bitflags1 )
          {
            v26 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v26;
              p_offset += 2;
              if ( v26 >= *(unsigned __int16 *)&fbxcomponent->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            v28 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_29:
            v28 = sub_AC5258(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL, v23);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v28)(
                                                   v25,
                                                   *(_QWORD *)(v28 + 8));
          if ( !fbxcomponent )
            goto LABEL_35;
          v29 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0LL);
          v30 = UnityEngine_Random__Range(0.0, v29, 0LL);
          if ( !v22 )
            goto LABEL_35;
          v22->fields.currentAnimTime = v30;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleActorControl_ActorMotionActiveCheck_o *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v13; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v14; // x22
  BattleCallBack_T__o *v15; // x20

  if ( (byte_418B885 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleActionData___ctor__, badata);
    sub_B2C35C(&System_Action_BattleActionData__TypeInfo, v5);
    sub_B2C35C(&Method_BattleActorControl_playBattleActionDataLocal__, v6);
    sub_B2C35C(&Method_BattleCallBack_BattleActionData___ctor__, v7);
    sub_B2C35C(&BattleCallBack_BattleActionData__TypeInfo, v8);
    byte_418B885 = 1;
  }
  v9 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v9 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v9, 0LL) )
  {
    v13 = BattleActorControl__get_CheckMotion(this, v11);
    v14 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleActionData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v14,
      (Il2CppObject *)this,
      Method_BattleActorControl_playBattleActionDataLocal__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleActionData___ctor__);
    v15 = (BattleCallBack_T__o *)sub_B2C42C(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v15,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v14,
      (const MethodInfo_2D60054 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v13 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v13, (BattleCallBackBase_o *)v15, 0LL);
      return;
    }
LABEL_8:
    sub_B2C434(v9, v10);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v12);
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
  __int64 v10; // x1
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v12; // x2
  __int64 v13; // x1
  BattleActionData_o *actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int32_t type; // w21
  BattleActionData_c *v29; // x0
  const MethodInfo *v30; // x3
  BattleActionData_o *v31; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  System_String_o *v34; // x0
  BattleServantData_o *battleSvtData; // x0

  if ( (byte_418B886 & 1) == 0 )
  {
    sub_B2C35C(&BattleActionData_TypeInfo, badata);
    sub_B2C35C(&StringLiteral_8787/*"MOTION_"*/, v10);
    byte_418B886 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  this->fields.actiondata = badata;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actiondata,
    (System_Int32_array **)badata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleActorControl__setActionData(this, this->fields.actiondata, v12);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_34;
  ShiftServant = BattleActionData__getShiftServant(actiondata, 0LL);
  this->fields.myShiftData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.myShiftData, 0LL, v16, v17, v18, v19, v20, v21);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.myShiftData,
      (System_Int32_array **)ShiftServant,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
  v29 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v29 = BattleActionData_TypeInfo;
  }
  if ( type == v29->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = *p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_34;
  if ( BattleActionData__isCommandAttack(actiondata, 0LL) )
    goto LABEL_20;
  actiondata = *p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_34;
  if ( BattleActionData__isCommonEnemyAttack(actiondata, 0LL) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, (const MethodInfo *)v23);
  actiondata = (BattleActionData_o *)this->fields.performance;
  if ( !actiondata
    || (actiondata = (BattleActionData_o *)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0LL
    || (actiondata = (BattleActionData_o *)((__int64 (__fastcall *)(BattleActionData_o *, void *))actiondata->klass->vtable._9_ExecAction.method)(
                                             actiondata,
                                             actiondata->klass[1]._1.image),
        (v31 = *p_actiondata) == 0LL) )
  {
LABEL_34:
    sub_B2C434(actiondata, v13);
  }
  motionname = v31->fields.motionname;
  IsVanishSkill = v31->fields.IsVanishSkill;
  if ( !motionname )
  {
    v34 = System_Int32__ToString((int)v31 + 48, 0LL);
    motionname = System_String__Concat_44305532((System_String_o *)StringLiteral_8787/*"MOTION_"*/, v34, 0LL);
    if ( IsVanishSkill )
      goto LABEL_26;
LABEL_28:
    BattleActorControl__sendMotionEventFSM(this, motionname, 0, v30);
    goto LABEL_29;
  }
  if ( !v31->fields.IsVanishSkill )
    goto LABEL_28;
LABEL_26:
  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_32437564(this, motionname, 0, v30);
LABEL_29:
  if ( *p_actiondata && BattleActionData__isDeadMotion(*p_actiondata, 0LL) )
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x23
  BattleActorControl_EndCallEvent_o *v14; // x24
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x3

  if ( (byte_418B897 & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_sendEventFSM__, animname);
    sub_B2C35C(&BattleActorControl_EndCallEvent_TypeInfo, v9);
    sub_B2C35C(&BattleActorControl_EventClass_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_1544/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/, v11);
    sub_B2C35C(&StringLiteral_18453/*"event"*/, v12);
    byte_418B897 = 1;
  }
  System_String__Format_44306596(
    (System_String_o *)StringLiteral_1544/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v13 = sub_B2C42C(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v13, 0LL);
  v14 = (BattleActorControl_EndCallEvent_o *)sub_B2C42C(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v14, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v13 )
    sub_B2C434(v15, v16);
  *(_QWORD *)(v13 + 16) = v14;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)v14, v17, v18, v19, v20, v21, v22);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v13,
    (System_String_o *)StringLiteral_18453/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v13, v23);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v24);
  else
    BattleActorControl__playAnimation_32449920(this, animname, 0, v24);
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
    sub_B2C434(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.actiondata, 0LL, v9, v10, v11, v12, v13, v14);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *result; // x0
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  bool v17; // w8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v19; // x23
  int v20; // s0
  UnityEngine_Transform_o *v23; // x23
  int v24; // s0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_418B87F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, effectname);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__, v12);
    sub_B2C35C(&StringLiteral_15967/*"_ENEMY"*/, v13);
    byte_418B87F = 1;
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
  v17 = UnityEngine_Object__op_Equality(Manager__loadEffect, 0LL, 0LL);
  result = 0LL;
  if ( !v17 )
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
          v19 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
          *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Vector3__get_zero(0LL);
          if ( v19 )
          {
            UnityEngine_Transform__set_localPosition(v19, *(UnityEngine_Vector3_o *)&v20, 0LL);
            v23 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
            *(UnityEngine_Vector3_o *)&v24 = UnityEngine_Vector3__get_one(0LL);
            if ( v23 )
            {
              UnityEngine_Transform__set_localScale(v23, *(UnityEngine_Vector3_o *)&v24, 0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v28.fields.x = -x;
                  v28.fields.y = y;
                  v28.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v28, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_28;
                    if ( System_String__Equals_44292872(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_15967/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_28;
                      v29.fields.x = x;
                      v29.fields.y = y;
                      v29.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v29, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_28;
                      UnityEngine_Transform__Rotate_35436916((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
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
    sub_B2C434(result, effectname);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__playVoice(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  BattleActorControl_c *v12; // x0
  struct SePlayer_o *prevDeadVoice; // x8
  __int64 v14; // x1
  int v15; // w24
  System_String_o *FileName; // x0
  const MethodInfo *v17; // x4
  SePlayer_o *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x19
  BattleActorControl_c *v26; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_418B88D & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Voice_TypeInfo, v11);
    byte_418B88D = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( !Voice__IsDeadVoice(type, 0LL) )
  {
    v15 = 0;
    goto LABEL_21;
  }
  v12 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v12 = BattleActorControl_TypeInfo;
  }
  prevDeadVoice = v12->static_fields->prevDeadVoice;
  if ( prevDeadVoice )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleActorControl_TypeInfo;
      prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice;
      if ( !prevDeadVoice )
        goto LABEL_30;
    }
    if ( !prevDeadVoice->fields.isStop )
    {
      if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) == 0
        || v12->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v12),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0LL);
        goto LABEL_19;
      }
LABEL_30:
      sub_B2C434(v12, v14);
    }
  }
LABEL_19:
  v15 = 1;
LABEL_21:
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v18 = BattleActorControl__playVoice_32446440(this, FileName, volume, callback, isSaveVoicePlayed, v17);
  if ( v15 )
  {
    v25 = (System_Int32_array **)v18;
    v26 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v26 = BattleActorControl_TypeInfo;
    }
    static_fields = v26->static_fields;
    static_fields->prevDeadVoice = (struct SePlayer_o *)v25;
    sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->prevDeadVoice, v25, v19, v20, v21, v22, v23, v24);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__playVoiceNp(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *FileName; // x1
  const MethodInfo *v10; // x3

  if ( (byte_418B890 & 1) == 0 )
  {
    sub_B2C35C(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_418B890 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_32447500(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_32447500(
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

  if ( (byte_418B891 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_418B891 = 1;
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
        sub_B2C434(battleSvtData, v9);
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

  if ( (byte_418B893 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, fileName);
    byte_418B893 = 1;
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
      sub_B2C434(battleSvtData, fileName);
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


SePlayer_o *__fastcall BattleActorControl__playVoice_32446440(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 isNoVoice; // x0
  __int64 v13; // x1
  struct BattlePerformance_o *performance; // x8
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x22
  const MethodInfo *v23; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v26; // w24
  int32_t v27; // w22
  int32_t uniqueID; // w21
  int32_t v29; // w0
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t SvtId; // w22
  const MethodInfo *v33; // x1
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v35; // w23
  int32_t overwriteSvtVoiceId; // w24
  __int64 v37; // x0
  __int64 v38; // x0

  if ( (byte_418B88E & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    sub_B2C35C(&string___TypeInfo, v11);
    byte_418B88E = 1;
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
    isNoVoice = sub_B2C374(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_30;
    v22 = isNoVoice;
    if ( voiceTypeId )
    {
      isNoVoice = sub_B2C41C(voiceTypeId, *(_QWORD *)(*(_QWORD *)isNoVoice + 64LL));
      if ( !isNoVoice )
      {
        v38 = sub_B2C454(0LL);
        sub_B2C400(v38, 0LL);
      }
    }
    if ( !*(_DWORD *)(v22 + 24) )
    {
      v37 = sub_B2C460(isNoVoice);
      sub_B2C400(v37, 0LL);
    }
    *(_QWORD *)(v22 + 32) = voiceTypeId;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v22 + 32),
      (System_Int32_array **)voiceTypeId,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    BattleActorControl__AddServantVoicePlayed(this, (System_String_array *)v22, v23);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (__int64)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
      isNoVoice = BattleActorControl__getLimitCount(this, v33);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v35 = isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v29 = SvtId;
        v30 = v35;
        v31 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v29, v30, v31, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_30:
    sub_B2C434(isNoVoice, v13);
  }
  v26 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v27 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  v29 = v26;
  v30 = limit;
  v31 = v27;
  return ServantAssetLoadManager__playBattleVoice(v29, v30, v31, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *v10; // x20
  unsigned __int64 v11; // x23
  int32_t v12; // w21
  UnityEngine_Object_o *Item; // x22
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_418B8D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_418B8D6 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           auraList,
           (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)System_Linq_Enumerable__ToArray_int_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_21;
  entries = auraList->fields.entries;
  v10 = auraList;
  if ( (int)entries >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)entries )
      {
        v15 = sub_B2C460(auraList);
        sub_B2C400(v15, 0LL);
      }
      auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v12 = *(&v10->fields.count + v11);
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
                                       v12,
                                       (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
        v14 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
                                        v12,
                                        (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v14, 0LL);
      }
      LODWORD(entries) = v10->fields.entries;
      if ( (__int64)++v11 >= (int)entries )
        goto LABEL_19;
    }
LABEL_21:
    sub_B2C434(auraList, method);
  }
LABEL_19:
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)auraList,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418B8D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v4);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v8);
    byte_418B8D8 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          auraList,
          (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values((System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)auraList, (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_21:
    sub_B2C434(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v12,
            (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v12.fields.currentValue;
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
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
  __int64 v3; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v5; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v7; // x19
  __int64 v8; // x0

  v2 = this;
  if ( (byte_418B879 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_13160/*"SummonEndFlag"*/, v3);
    byte_418B879 = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_B2C434(this, method);
  v5 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v5 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v5; ++i )
    {
      if ( i >= (unsigned int)v5 )
      {
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
      }
      v7 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v7, 0LL);
        if ( !this )
          goto LABEL_18;
        this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
        if ( !this )
          goto LABEL_18;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13160/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.specialShadowObj) = 0;
      }
      LODWORD(v5) = motionFSM->max_length;
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
    sub_B2C434(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_418B884 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8793/*"MOTION_DAMAGE"*/, method);
    byte_418B884 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_B2C434(0LL, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8793/*"MOTION_DAMAGE"*/, 0, v5);
}


void __fastcall BattleActorControl__sendEventFSM(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  System_String_c **v6; // x0
  const MethodInfo *v7; // x3
  System_String_o *v8; // x8
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  bool v11; // w2

  v4 = this;
  if ( (byte_418B87B & 1) == 0 )
  {
    sub_B2C35C(&string_TypeInfo, table);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_18453/*"event"*/, v5);
    byte_418B87B = 1;
  }
  if ( !table )
    sub_B2C434(this, table);
  v6 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_18453/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v8 = (System_String_o *)v6;
  if ( v6 && *v6 != string_TypeInfo )
  {
    sub_B2C728(v6);
  }
  else
  {
    v9 = v4;
    v10 = v8;
    v11 = 0;
  }
  BattleActorControl__sendEventFSM_32437564(v9, v10, v11, v7);
}


void __fastcall BattleActorControl__sendEventFSM_32437564(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 Fsm; // x0
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x22
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v30; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v32; // x8
  __int64 v33; // x9
  int max_length; // w10
  UnityEngine_Object_o *v35; // x22
  struct PlayMakerFSM_array *v36; // x8
  __int64 v37; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v38; // x21
  struct PlayMakerFSM_array *v39; // x8
  __int64 v40; // x9
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_418B87E & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, name);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(&StringLiteral_23256/*"weapon"*/, v8);
    sub_B2C35C(&StringLiteral_1546/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/, v9);
    sub_B2C35C(&StringLiteral_17614/*"common"*/, v10);
    byte_418B87E = 1;
  }
  Fsm = sub_B2C374(string___TypeInfo, 2LL);
  if ( !Fsm )
    goto LABEL_38;
  v19 = Fsm;
  Fsm = StringLiteral_23256/*"weapon"*/;
  if ( StringLiteral_23256/*"weapon"*/ )
  {
    Fsm = sub_B2C41C(StringLiteral_23256/*"weapon"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( !Fsm )
      goto LABEL_39;
    v20 = (System_Int32_array **)StringLiteral_23256/*"weapon"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*(_DWORD *)(v19 + 24) )
    goto LABEL_37;
  *(_QWORD *)(v19 + 32) = v20;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 32), v20, v13, v14, v15, v16, v17, v18);
  Fsm = StringLiteral_17614/*"common"*/;
  if ( StringLiteral_17614/*"common"*/ )
  {
    Fsm = sub_B2C41C(StringLiteral_17614/*"common"*/, *(_QWORD *)(*(_QWORD *)v19 + 64LL));
    if ( Fsm )
    {
      v27 = (System_Int32_array **)StringLiteral_17614/*"common"*/;
      goto LABEL_13;
    }
LABEL_39:
    v42 = sub_B2C454(Fsm);
    sub_B2C400(v42, 0LL);
  }
  v27 = 0LL;
LABEL_13:
  if ( *(_DWORD *)(v19 + 24) <= 1u )
    goto LABEL_37;
  *(_QWORD *)(v19 + 40) = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)(v19 + 40), v27, v21, v22, v23, v24, v25, v26);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v19 + 24) )
    goto LABEL_37;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_38;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_37;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_38;
  v30 = *(Il2CppObject **)(v19 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_44306596(
                   (System_String_o *)StringLiteral_1546/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v30,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v32 = this->fields.motionFSM;
  if ( v32 )
  {
    v33 = this->fields.actindex;
    max_length = v32->max_length;
    if ( (int)v33 < max_length )
    {
      if ( (unsigned int)v33 >= max_length )
        goto LABEL_37;
      v35 = (UnityEngine_Object_o *)v32->m_Items[v33];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Fsm = UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v12);
          v36 = this->fields.motionFSM;
          if ( !v36 )
            goto LABEL_38;
          v37 = this->fields.actindex;
          if ( (unsigned int)v37 >= v36->max_length )
            goto LABEL_37;
          v38 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v36->m_Items[v37];
          if ( !Fsm )
            goto LABEL_38;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_38;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v38 )
            goto LABEL_38;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v38, (System_String_o *)Fsm, 0LL);
        }
        v39 = this->fields.motionFSM;
        if ( !v39 )
          goto LABEL_38;
        v40 = this->fields.actindex;
        if ( (unsigned int)v40 < v39->max_length )
        {
          Fsm = (__int64)v39->m_Items[v40];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_38:
          sub_B2C434(Fsm, v12);
        }
LABEL_37:
        v41 = sub_B2C460(Fsm);
        sub_B2C400(v41, 0LL);
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
    sub_B2C434(v7, v8);
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_32437564(this, name, isCallFinishInterrupt, v9);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_32437564(this, name, 0, v3);
}


void __fastcall BattleActorControl__setActionData(
        BattleActorControl_o *this,
        BattleActionData_o *actiondata,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  BattleActorControl_o *v7; // x21
  struct PlayMakerFSM_array *v8; // x8
  struct PlayMakerFSM_array *v9; // x8
  struct PlayMakerFSM_array *v10; // x8
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x21
  struct PlayMakerFSM_array *v12; // x8
  struct PlayMakerFSM_array *v13; // x8
  __int64 v14; // x0

  v4 = this;
  if ( (byte_418B876 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4410/*"Count_Action"*/, actiondata);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_4411/*"Count_Hit"*/, v5);
    byte_418B876 = 1;
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
                                   (System_String_o *)StringLiteral_4410/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_43;
  v7 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v7 )
    goto LABEL_43;
  LODWORD(v7->fields.specialShadowObj) = (_DWORD)this;
  v8 = v4->fields.motionFSM;
  if ( !v8 )
    goto LABEL_43;
  if ( !v8->max_length )
    goto LABEL_44;
  this = (BattleActorControl_o *)v8->m_Items[0];
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
                                   (System_String_o *)StringLiteral_4411/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.specialShadowObj) = actiondata->fields.attackcount;
  v9 = v4->fields.motionFSM;
  if ( !v9 )
    goto LABEL_43;
  if ( v9->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v9->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField) == 0LL )
  {
LABEL_43:
    sub_B2C434(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4410/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v10 = v4->fields.motionFSM;
    if ( !v10 )
      goto LABEL_43;
    if ( v10->max_length <= 1 )
      goto LABEL_44;
    this = (BattleActorControl_o *)v10->m_Items[1];
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
               (System_String_o *)StringLiteral_4410/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
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
    v14 = sub_B2C460(this);
    sub_B2C400(v14, 0LL);
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
                                   (System_String_o *)StringLiteral_4411/*"Count_Hit"*/,
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
                                   (System_String_o *)StringLiteral_4411/*"Count_Hit"*/,
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(CompleteList, name);
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
    sub_B2C434(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))EventList->klass->vtable._23_Add.method)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._24_Clear.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setAuraFlip(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *auraList; // x0
  bool v12; // w19
  Il2CppObject *currentValue; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_418B8D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, flg);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v10);
    byte_418B8D7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          auraList,
          (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values((System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)auraList, (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_B2C434(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_2403028 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
         &v15,
         (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v12 = flg;
    do
    {
      currentValue = v15.fields.currentValue;
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
                                                            (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, v12, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v15,
              (const MethodInfo_277F158 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
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

  if ( (byte_418B871 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, camera);
    byte_418B871 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_B2C434(gameObject, v6);
  }
  *((_QWORD *)gameObject + 3) = camera;
  sub_B2C2F8(
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
  UnityEngine_Object_o *v3; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  unsigned int position; // s8
  float y; // s9
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Object_o *)tr;
  if ( (byte_418B880 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, tr);
    byte_418B880 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v3, 0LL, 0LL);
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
                v3 = (UnityEngine_Object_o *)gameObject;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_17:
    sub_B2C434(gameObject, v6);
  }
  if ( !v3 )
    goto LABEL_17;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  y = v9.fields.y;
LABEL_16:
  v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
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
    sub_B2C434(actorObject, method);
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
    sub_B2C434(actorObject, method);
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
    sub_B2C434(actorObject, method);
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  int v10; // w20
  unsigned __int64 i; // x9
  struct PlayMakerFSM_array *v12; // x8
  unsigned __int64 v13; // x24
  UnityEngine_Object_o *v14; // x21
  struct PlayMakerFSM_array *v15; // x8
  struct PlayMakerFSM_array *v16; // x8
  __int64 v17; // x0

  if ( (byte_418B875 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_8528/*"LimitedPeriod"*/, v5);
    sub_B2C35C(&StringLiteral_8379/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v6);
    byte_418B875 = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8379/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                           0LL);
      v10 = (int)Master_WarQuestSelectionMaster;
      for ( i = 0LL; ; i = 1LL )
      {
        v12 = this->fields.motionFSM;
        if ( !v12 )
          break;
        v13 = i;
        if ( i >= v12->max_length )
          goto LABEL_32;
        v14 = (UnityEngine_Object_o *)v12->m_Items[i];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          v15 = this->fields.motionFSM;
          if ( !v15 )
            break;
          if ( v13 >= v15->max_length )
            goto LABEL_32;
          Master_WarQuestSelectionMaster = v15->m_Items[v13];
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
                                                               (System_String_o *)StringLiteral_8528/*"LimitedPeriod"*/,
                                                               0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            v16 = this->fields.motionFSM;
            if ( !v16 )
              break;
            if ( v13 >= v16->max_length )
            {
LABEL_32:
              v17 = sub_B2C460(Master_WarQuestSelectionMaster);
              sub_B2C400(v17, 0LL);
            }
            Master_WarQuestSelectionMaster = v16->m_Items[v13];
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
                                                                 (System_String_o *)StringLiteral_8528/*"LimitedPeriod"*/,
                                                                 0LL);
            if ( !Master_WarQuestSelectionMaster )
              break;
            LODWORD(Master_WarQuestSelectionMaster[1].klass) = v10;
          }
        }
        if ( v13 )
          return;
      }
    }
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  struct PlayMakerFSM_array *v29; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  __int64 gameObject; // x0
  __int64 v38; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v41; // x25
  int32_t v42; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v44; // x26
  struct PlayMakerFSM_array *v45; // x25
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x26
  struct PlayMakerFSM_array *v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x24
  unsigned int v61; // w8
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v63; // x9
  unsigned int v64; // w26
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v66; // x8
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct PlayMakerFSM_array *v73; // x8
  struct PlayMakerFSM_array *v74; // x8
  struct PlayMakerFSM_array *v75; // x8
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  struct PlayMakerFSM_array *v82; // x8
  struct PlayMakerFSM_array *v83; // x8
  char v84; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v87; // x8
  struct BattlePerformance_o *v88; // x8
  struct PlayMakerFSM_array *v89; // x8
  struct BattlePerformance_o *v90; // x8
  System_String_o *StrParam; // x20
  struct PlayMakerFSM_array *v92; // x8
  PlayMakerFSM_o *v93; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v97; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v100; // x1
  struct PlayMakerFSM_array *v101; // x8
  PlayMakerFSM_o *v102; // x0
  HutongGames_PlayMaker_Fsm_o *v103; // x0
  __int64 v104; // x1
  HutongGames_PlayMaker_FsmVariables_o *v105; // x0
  HutongGames_PlayMaker_FsmInt_o *v106; // x0
  __int64 v107; // x1
  _BOOL8 v108; // x0
  __int64 v109; // x1
  __int64 v110; // x0
  __int64 v111; // x0
  __int64 v112; // x0
  __int64 v113; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v114; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v115; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_418B874 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v14);
    sub_B2C35C(&long_TypeInfo, v15);
    sub_B2C35C(&JsonManager_TypeInfo, v16);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v18);
    sub_B2C35C(&PlayMakerFSM___TypeInfo, v19);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_13575/*"TargetFrontPos"*/, v21);
    sub_B2C35C(&StringLiteral_13574/*"TargetBackPos"*/, v22);
    sub_B2C35C(&StringLiteral_3472/*"Camera"*/, v23);
    sub_B2C35C(&StringLiteral_1832/*"ActorObject"*/, v24);
    sub_B2C35C(&StringLiteral_15967/*"_ENEMY"*/, v25);
    sub_B2C35C(&StringLiteral_3478/*"CameraFsm"*/, v26);
    sub_B2C35C(&StringLiteral_10636/*"Performance"*/, v27);
    sub_B2C35C(&StringLiteral_1833/*"ActorSide"*/, v28);
    byte_418B874 = 1;
  }
  memset(&v115, 0, sizeof(v115));
  v29 = (struct PlayMakerFSM_array *)sub_B2C374(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v29;
  p_motionFSM = &this->fields.motionFSM;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v41 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v42 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v41, v42, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  v44 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v45 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v44,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v45 )
    goto LABEL_107;
  v52 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B2C41C(gameObject, v45->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_122;
  }
  if ( !v45->max_length )
    goto LABEL_108;
  v45->m_Items[0] = (PlayMakerFSM_o *)v52;
  sub_B2C2F8((BattleServantConfConponent_o *)v45->m_Items, v52, v46, v47, v48, v49, v50, v51);
  if ( !Object )
    goto LABEL_107;
  v53 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          Object,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v53 )
    goto LABEL_107;
  v60 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B2C41C(gameObject, v53->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_122:
      v113 = sub_B2C454(gameObject);
      sub_B2C400(v113, 0LL);
    }
  }
  if ( v53->max_length <= 1 )
  {
LABEL_108:
    v110 = sub_B2C460(gameObject);
    sub_B2C400(v110, 0LL);
  }
  v53->m_Items[1] = (PlayMakerFSM_o *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v53->m_Items[1], v60, v54, v55, v56, v57, v58, v59);
  v61 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v63 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v64 = v61;
    if ( v61 >= v63->max_length )
      goto LABEL_108;
    gameObject = (__int64)v63->m_Items[v61];
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
                      (System_String_o *)StringLiteral_1832/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v64 >= v66->max_length )
      goto LABEL_108;
    gameObject = (__int64)v66->m_Items[v64];
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
                            (System_String_o *)StringLiteral_1833/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    *(_QWORD *)(gameObject + 56) = side;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(gameObject + 56),
      (System_Int32_array **)side,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    v73 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v64 >= v73->max_length )
      goto LABEL_108;
    gameObject = (__int64)v73->m_Items[v64];
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
                            (System_String_o *)StringLiteral_3472/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v74 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v64 >= v74->max_length )
      goto LABEL_108;
    gameObject = (__int64)v74->m_Items[v64];
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
                            (System_String_o *)StringLiteral_3478/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v75 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v64 >= v75->max_length )
      goto LABEL_108;
    gameObject = (__int64)v75->m_Items[v64];
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
                            (System_String_o *)StringLiteral_10636/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    v82 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v64 >= v82->max_length )
      goto LABEL_108;
    gameObject = (__int64)v82->m_Items[v64];
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
                            (System_String_o *)StringLiteral_13575/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_107;
      gameObject = System_String__Equals_44292872(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_15967/*"_ENEMY"*/,
                     0LL);
      v83 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v64 >= v83->max_length )
        goto LABEL_108;
      v84 = gameObject;
      gameObject = (__int64)v83->m_Items[v64];
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
                              (System_String_o *)StringLiteral_13575/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_107;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v84 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v87 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v64 >= v87->max_length )
          goto LABEL_108;
        gameObject = (__int64)v87->m_Items[v64];
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
                                (System_String_o *)StringLiteral_13574/*"TargetBackPos"*/,
                                0LL);
        v88 = this->fields.performance;
        if ( !v88 || !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = v88->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v89 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v64 >= v89->max_length )
          goto LABEL_108;
        gameObject = (__int64)v89->m_Items[v64];
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
                                (System_String_o *)StringLiteral_13574/*"TargetBackPos"*/,
                                0LL);
        v90 = this->fields.performance;
        if ( !v90 || !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -v90->fields.distanceofactor;
      }
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v61 = 1;
  }
  while ( !v64 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_107:
    sub_B2C434(gameObject, v38);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v114,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)gameObject,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v115 = v114;
  while ( 1 )
  {
    v108 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v115,
             (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v108 )
      break;
    v92 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B2C434(v108, v109);
    if ( !v92->max_length )
    {
      v111 = sub_B2C460(v108);
      sub_B2C400(v111, 0LL);
    }
    v93 = v92->m_Items[0];
    if ( !v93 )
      sub_B2C434(0LL, v109);
    key = v115.fields.current.fields.key;
    value = v115.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v93, 0LL);
    if ( !Fsm )
      sub_B2C434(0LL, v97);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B2C434(0LL, v97);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v101 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B2C434(FsmInt, v100);
      if ( !v101->max_length )
      {
        v112 = sub_B2C460(FsmInt);
        sub_B2C400(v112, 0LL);
      }
      v102 = v101->m_Items[0];
      if ( !v102 )
        sub_B2C434(0LL, v100);
      v103 = PlayMakerFSM__get_Fsm(v102, 0LL);
      if ( !v103 )
        sub_B2C434(0LL, v104);
      v105 = v103->fields.variables;
      if ( !v105 )
        sub_B2C434(0LL, v104);
      v106 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v105, (System_String_o *)key, 0LL);
      if ( !v106 )
        sub_B2C434(0LL, v107);
      if ( !value )
        sub_B2C434(v106, v107);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_B2C728(value);
        goto LABEL_122;
      }
      v106->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v115,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
}


void __fastcall BattleActorControl__setMotionlist(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  struct PlayMakerFSM_array *v27; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 gameObject; // x0
  __int64 v36; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v41; // x25
  int32_t v42; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v44; // x26
  struct PlayMakerFSM_array *v45; // x25
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x26
  struct PlayMakerFSM_array *v53; // x25
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x24
  unsigned int v61; // w8
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v63; // x9
  unsigned int v64; // w26
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v66; // x8
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct PlayMakerFSM_array *v73; // x8
  struct PlayMakerFSM_array *v74; // x8
  struct PlayMakerFSM_array *v75; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v76; // x25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct PlayMakerFSM_array *v83; // x8
  struct PlayMakerFSM_array *v84; // x8
  char v85; // w25
  struct BattlePerformance_o *v86; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v88; // x8
  struct BattlePerformance_o *v89; // x8
  struct PlayMakerFSM_array *v90; // x8
  struct BattlePerformance_o *v91; // x8
  System_String_o *StrParam; // x21
  struct PlayMakerFSM_array *v93; // x8
  PlayMakerFSM_o *v94; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v98; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v101; // x1
  struct PlayMakerFSM_array *v102; // x8
  PlayMakerFSM_o *v103; // x0
  HutongGames_PlayMaker_Fsm_o *v104; // x0
  __int64 v105; // x1
  HutongGames_PlayMaker_FsmVariables_o *v106; // x0
  HutongGames_PlayMaker_FsmInt_o *v107; // x0
  __int64 v108; // x1
  _BOOL8 v109; // x0
  __int64 v110; // x1
  const MethodInfo *v111; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  const MethodInfo *v119; // x1
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 v122; // x0
  __int64 v123; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v124; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v125; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_418B872 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v12);
    sub_B2C35C(&long_TypeInfo, v13);
    sub_B2C35C(&JsonManager_TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B2C35C(&PlayMakerFSM___TypeInfo, v17);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B2C35C(&StringLiteral_13575/*"TargetFrontPos"*/, v19);
    sub_B2C35C(&StringLiteral_13574/*"TargetBackPos"*/, v20);
    sub_B2C35C(&StringLiteral_3472/*"Camera"*/, v21);
    sub_B2C35C(&StringLiteral_1832/*"ActorObject"*/, v22);
    sub_B2C35C(&StringLiteral_15967/*"_ENEMY"*/, v23);
    sub_B2C35C(&StringLiteral_3478/*"CameraFsm"*/, v24);
    sub_B2C35C(&StringLiteral_10636/*"Performance"*/, v25);
    sub_B2C35C(&StringLiteral_1833/*"ActorSide"*/, v26);
    byte_418B872 = 1;
  }
  memset(&v125, 0, sizeof(v125));
  v27 = (struct PlayMakerFSM_array *)sub_B2C374(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v27;
  p_motionFSM = &this->fields.motionFSM;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v27,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_109;
  commonMotionPrefab = performance->fields.commonMotionPrefab;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v41 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v42 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v41, v42, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  v44 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v45 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v44,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v45 )
    goto LABEL_109;
  v52 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B2C41C(gameObject, v45->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_124;
  }
  if ( !v45->max_length )
    goto LABEL_110;
  v45->m_Items[0] = (PlayMakerFSM_o *)v52;
  sub_B2C2F8((BattleServantConfConponent_o *)v45->m_Items, v52, v46, v47, v48, v49, v50, v51);
  if ( !Object )
    goto LABEL_109;
  v53 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          Object,
                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v53 )
    goto LABEL_109;
  v60 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B2C41C(gameObject, v53->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_124:
      v123 = sub_B2C454(gameObject);
      sub_B2C400(v123, 0LL);
    }
  }
  if ( v53->max_length <= 1 )
  {
LABEL_110:
    v120 = sub_B2C460(gameObject);
    sub_B2C400(v120, 0LL);
  }
  v53->m_Items[1] = (PlayMakerFSM_o *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v53->m_Items[1], v60, v54, v55, v56, v57, v58, v59);
  v61 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v63 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    v64 = v61;
    if ( v61 >= v63->max_length )
      goto LABEL_110;
    gameObject = (__int64)v63->m_Items[v61];
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
                      (System_String_o *)StringLiteral_1832/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v64 >= v66->max_length )
      goto LABEL_110;
    gameObject = (__int64)v66->m_Items[v64];
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
                            (System_String_o *)StringLiteral_1833/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    *(_QWORD *)(gameObject + 56) = side;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(gameObject + 56),
      (System_Int32_array **)side,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    v73 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v64 >= v73->max_length )
      goto LABEL_110;
    gameObject = (__int64)v73->m_Items[v64];
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
                            (System_String_o *)StringLiteral_3472/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v74 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v64 >= v74->max_length )
      goto LABEL_110;
    gameObject = (__int64)v74->m_Items[v64];
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
                            (System_String_o *)StringLiteral_3478/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v75 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v64 >= v75->max_length )
      goto LABEL_110;
    gameObject = (__int64)v75->m_Items[v64];
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
                            (System_String_o *)StringLiteral_10636/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_109;
    v76 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v76 )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v76, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v77,
      v78,
      v79,
      v80,
      v81,
      v82);
    v83 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v64 >= v83->max_length )
      goto LABEL_110;
    gameObject = (__int64)v83->m_Items[v64];
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
                            (System_String_o *)StringLiteral_13575/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_109;
      gameObject = System_String__Equals_44292872(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_15967/*"_ENEMY"*/,
                     0LL);
      v84 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_109;
      if ( v64 >= v84->max_length )
        goto LABEL_110;
      v85 = gameObject;
      gameObject = (__int64)v84->m_Items[v64];
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
                              (System_String_o *)StringLiteral_13575/*"TargetFrontPos"*/,
                              0LL);
      v86 = this->fields.performance;
      if ( !v86 )
        goto LABEL_109;
      distanceofactor = v86->fields.distanceofactor;
      if ( (v85 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v88 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v64 >= v88->max_length )
          goto LABEL_110;
        gameObject = (__int64)v88->m_Items[v64];
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
                                (System_String_o *)StringLiteral_13574/*"TargetBackPos"*/,
                                0LL);
        v89 = this->fields.performance;
        if ( !v89 || !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = v89->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v90 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v64 >= v90->max_length )
          goto LABEL_110;
        gameObject = (__int64)v90->m_Items[v64];
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
                                (System_String_o *)StringLiteral_13574/*"TargetBackPos"*/,
                                0LL);
        v91 = this->fields.performance;
        if ( !v91 || !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = -v91->fields.distanceofactor;
      }
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v61 = 1;
  }
  while ( !v64 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_109;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_109:
    sub_B2C434(gameObject, v36);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v124,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)gameObject,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v125 = v124;
  while ( 1 )
  {
    v109 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v125,
             (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v109 )
      break;
    v93 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B2C434(v109, v110);
    if ( !v93->max_length )
    {
      v121 = sub_B2C460(v109);
      sub_B2C400(v121, 0LL);
    }
    v94 = v93->m_Items[0];
    if ( !v94 )
      sub_B2C434(0LL, v110);
    key = v125.fields.current.fields.key;
    value = v125.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v94, 0LL);
    if ( !Fsm )
      sub_B2C434(0LL, v98);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B2C434(0LL, v98);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v102 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B2C434(FsmInt, v101);
      if ( !v102->max_length )
      {
        v122 = sub_B2C460(FsmInt);
        sub_B2C400(v122, 0LL);
      }
      v103 = v102->m_Items[0];
      if ( !v103 )
        sub_B2C434(0LL, v101);
      v104 = PlayMakerFSM__get_Fsm(v103, 0LL);
      if ( !v104 )
        sub_B2C434(0LL, v105);
      v106 = v104->fields.variables;
      if ( !v106 )
        sub_B2C434(0LL, v105);
      v107 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v106, (System_String_o *)key, 0LL);
      if ( !v107 )
        sub_B2C434(0LL, v108);
      if ( !value )
        sub_B2C434(v107, v108);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_B2C728(value);
        goto LABEL_124;
      }
      v107->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v125,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v111);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (System_Int32_array **)DelayEndSequenceIdListFromMotion,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  BattleActorControl__setLimitedPeriod(this, v119);
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  bool v9; // w22
  UnityEngine_Object_o *v10; // x19
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x19
  __int64 v12; // x0

  v4 = this;
  if ( (byte_418B894 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, flg);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_9601/*"Noble_Check"*/, v5);
    byte_418B894 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B2C434(this, flg);
  v7 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = flg;
    do
    {
      if ( v8 >= (unsigned int)v7 )
      {
        v12 = sub_B2C460(this);
        sub_B2C400(v12, 0LL);
      }
      v10 = (UnityEngine_Object_o *)motionFSM->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_19;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v10, 0LL);
        if ( !this )
          goto LABEL_19;
        BuffEffectNodeName_k__BackingField = this->fields._BuffEffectNodeName_k__BackingField;
        if ( BuffEffectNodeName_k__BackingField )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this->fields._BuffEffectNodeName_k__BackingField,
                                           (System_String_o *)StringLiteral_9601/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)BuffEffectNodeName_k__BackingField,
                                             (System_String_o *)StringLiteral_9601/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_19;
            LOBYTE(this->fields.specialShadowObj) = v9;
          }
        }
      }
      LODWORD(v7) = motionFSM->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v7 );
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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x20
  int32_t v23; // w21
  int32_t WeaponGroup; // w22
  UnityEngine_GameObject_o *v25; // x21
  struct PlayMakerFSM_array *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x21
  struct PlayMakerFSM_array *v34; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v35; // x20
  struct PlayMakerFSM_array *v36; // x8
  struct PlayMakerFSM_array *v37; // x8
  BattleActorControl_o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct PlayMakerFSM_array *v45; // x8
  struct PlayMakerFSM_array *v46; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v47; // x20
  struct PlayMakerFSM_array *v48; // x8
  struct PlayMakerFSM_array *v49; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v50; // x20
  struct PlayMakerFSM_array *v51; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v52; // x20
  struct PlayMakerFSM_array *v53; // x8
  struct PlayMakerFSM_array *v54; // x8
  char v55; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v58; // x8
  struct BattlePerformance_o *v59; // x8
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v62; // x1
  struct PlayMakerFSM_array *v63; // x8
  struct BattlePerformance_o *v64; // x8
  System_String_o *StrParam; // x20
  struct PlayMakerFSM_array *v66; // x8
  PlayMakerFSM_o *v67; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v71; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v74; // x1
  struct PlayMakerFSM_array *v75; // x8
  PlayMakerFSM_o *v76; // x0
  HutongGames_PlayMaker_Fsm_o *v77; // x0
  __int64 v78; // x1
  HutongGames_PlayMaker_FsmVariables_o *v79; // x0
  HutongGames_PlayMaker_FsmInt_o *v80; // x0
  __int64 v81; // x1
  _BOOL8 v82; // x0
  __int64 v83; // x1
  const MethodInfo *v84; // x1
  System_Int32_array **DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v96; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v97; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_418B873 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, flg);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v8);
    sub_B2C35C(&long_TypeInfo, v9);
    sub_B2C35C(&JsonManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_13575/*"TargetFrontPos"*/, v14);
    sub_B2C35C(&StringLiteral_13574/*"TargetBackPos"*/, v15);
    sub_B2C35C(&StringLiteral_3472/*"Camera"*/, v16);
    sub_B2C35C(&StringLiteral_1832/*"ActorObject"*/, v17);
    sub_B2C35C(&StringLiteral_15967/*"_ENEMY"*/, v18);
    sub_B2C35C(&StringLiteral_3478/*"CameraFsm"*/, v19);
    sub_B2C35C(&StringLiteral_10636/*"Performance"*/, v20);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_1833/*"ActorSide"*/, v21);
    byte_418B873 = 1;
  }
  memset(&v97, 0, sizeof(v97));
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
                              (System_String_o *)StringLiteral_1832/*"ActorObject"*/,
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
  v22 = (UnityEngine_GameObject_o *)this;
  this = (BattleActorControl_o *)BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_127;
  v23 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(v4->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(v22, v23, WeaponGroup, 0LL);
  if ( !this )
    goto LABEL_127;
  v25 = (UnityEngine_GameObject_o *)this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v26 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v25,
                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v26 )
    goto LABEL_127;
  v33 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_B2C41C(this, v26->obj.klass->_1.element_class);
    if ( !this )
    {
      v95 = sub_B2C454(0LL);
      sub_B2C400(v95, 0LL);
    }
  }
  if ( !v26->max_length )
  {
LABEL_141:
    v94 = sub_B2C460(this);
    sub_B2C400(v94, 0LL);
  }
  v26->m_Items[0] = (PlayMakerFSM_o *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)v26->m_Items, v33, v27, v28, v29, v30, v31, v32);
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
  v35 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_1832/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
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
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_1833/*"ActorSide"*/,
                                   0LL);
  v37 = v4->fields.motionFSM;
  if ( !v37 )
    goto LABEL_127;
  if ( v37->max_length <= 1 )
    goto LABEL_141;
  v38 = this;
  this = (BattleActorControl_o *)v37->m_Items[1];
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
                                   (System_String_o *)StringLiteral_1833/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v38 )
    goto LABEL_127;
  v38->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v38->fields.specialShadowObj,
    (System_Int32_array **)this,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = v4->fields.motionFSM;
  if ( !v45 )
    goto LABEL_127;
  if ( !v45->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v45->m_Items[0];
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
                                   (System_String_o *)StringLiteral_3472/*"Camera"*/,
                                   0LL);
  v46 = v4->fields.motionFSM;
  if ( !v46 )
    goto LABEL_127;
  if ( v46->max_length <= 1 )
    goto LABEL_141;
  v47 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)v46->m_Items[1];
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
                                   (System_String_o *)StringLiteral_3472/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v47 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v47, (UnityEngine_GameObject_o *)this, 0LL);
  v48 = v4->fields.motionFSM;
  if ( !v48 )
    goto LABEL_127;
  if ( !v48->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v48->m_Items[0];
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
                                   (System_String_o *)StringLiteral_3478/*"CameraFsm"*/,
                                   0LL);
  v49 = v4->fields.motionFSM;
  if ( !v49 )
    goto LABEL_127;
  if ( v49->max_length <= 1 )
    goto LABEL_141;
  v50 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)v49->m_Items[1];
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
                                   (System_String_o *)StringLiteral_3478/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v50 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v50, (UnityEngine_GameObject_o *)this, 0LL);
  v51 = v4->fields.motionFSM;
  if ( !v51 )
    goto LABEL_127;
  if ( !v51->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v51->m_Items[0];
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
                                   (System_String_o *)StringLiteral_10636/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_127;
  v52 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v52 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v52, (UnityEngine_GameObject_o *)this, 0LL);
  v53 = v4->fields.motionFSM;
  if ( !v53 )
    goto LABEL_127;
  if ( !v53->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v53->m_Items[0];
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
         (System_String_o *)StringLiteral_13575/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( this )
    {
      this = (BattleActorControl_o *)System_String__Equals_44292872(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_15967/*"_ENEMY"*/,
                                       0LL);
      v54 = v4->fields.motionFSM;
      if ( v54 )
      {
        if ( !v54->max_length )
          goto LABEL_141;
        v55 = (char)this;
        this = (BattleActorControl_o *)v54->m_Items[0];
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
                                               (System_String_o *)StringLiteral_13575/*"TargetFrontPos"*/,
                                               0LL);
              performance = v4->fields.performance;
              if ( performance )
              {
                distanceofactor = performance->fields.distanceofactor;
                if ( (v55 & 1) != 0 )
                {
                  if ( this )
                  {
                    *(float *)&this->fields.specialShadowObj = -distanceofactor;
                    HIDWORD(this->fields.specialShadowObj) = 0;
                    this->fields.currentSpShadowEffectId = 0;
                    v58 = v4->fields.motionFSM;
                    if ( v58 )
                    {
                      if ( !v58->max_length )
                        goto LABEL_141;
                      this = (BattleActorControl_o *)v58->m_Items[0];
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
                                                             (System_String_o *)StringLiteral_13574/*"TargetBackPos"*/,
                                                             0LL);
                            v59 = v4->fields.performance;
                            if ( v59 )
                            {
                              if ( this )
                              {
                                *(float *)&this->fields.specialShadowObj = v59->fields.distanceofactor;
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
                  v63 = v4->fields.motionFSM;
                  if ( v63 )
                  {
                    if ( !v63->max_length )
                      goto LABEL_141;
                    this = (BattleActorControl_o *)v63->m_Items[0];
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
                                                           (System_String_o *)StringLiteral_13574/*"TargetBackPos"*/,
                                                           0LL);
                          v64 = v4->fields.performance;
                          if ( v64 )
                          {
                            if ( this )
                            {
                              *(float *)&this->fields.specialShadowObj = -v64->fields.distanceofactor;
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
    sub_B2C434(this, flg);
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
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v96,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v97 = v96;
  while ( 1 )
  {
    v82 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v97,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v82 )
      break;
    v66 = v4->fields.motionFSM;
    if ( !v66 )
      sub_B2C434(v82, v83);
    if ( !v66->max_length )
    {
      v92 = sub_B2C460(v82);
      sub_B2C400(v92, 0LL);
    }
    v67 = v66->m_Items[0];
    if ( !v67 )
      sub_B2C434(0LL, v83);
    key = v97.fields.current.fields.key;
    value = v97.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v67, 0LL);
    if ( !Fsm )
      sub_B2C434(0LL, v71);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B2C434(0LL, v71);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v75 = v4->fields.motionFSM;
      if ( !v75 )
        sub_B2C434(FsmInt, v74);
      if ( !v75->max_length )
      {
        v93 = sub_B2C460(FsmInt);
        sub_B2C400(v93, 0LL);
      }
      v76 = v75->m_Items[0];
      if ( !v76 )
        sub_B2C434(0LL, v74);
      v77 = PlayMakerFSM__get_Fsm(v76, 0LL);
      if ( !v77 )
        sub_B2C434(0LL, v78);
      v79 = v77->fields.variables;
      if ( !v79 )
        sub_B2C434(0LL, v78);
      v80 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v79, (System_String_o *)key, 0LL);
      if ( !v80 )
        sub_B2C434(0LL, v81);
      if ( !value )
        sub_B2C434(v80, v81);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_B2C728(value);
        goto LABEL_141;
      }
      v80->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v97,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = (System_Int32_array **)BattleActorControl__GetDelayEndSequenceIdListFromMotion(
                                                              v4,
                                                              v84);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = (struct System_Collections_Generic_List_int__o *)DelayEndSequenceIdListFromMotion;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    DelayEndSequenceIdListFromMotion,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
LABEL_126:
  BattleActorControl__setLimitedPeriod(v4, v62);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x28
  DataManager_o *Instance; // x0
  struct UnityEngine_GameObject_o *v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  BattleServantData_o **p_battleSvtData; // x25
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  BattleServantData_o *v47; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v48; // x21
  __int64 v49; // x22
  __int64 v50; // x23
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x22
  ServantEntity_o *v53; // x26
  struct UnityEngine_Transform_o *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int32_t v61; // w22
  int v62; // w21
  int32_t v63; // w23
  UnityEngine_GameObject_o *v64; // x21
  int32_t v65; // w24
  _BOOL4 isForceAppearance; // w27
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  UnityEngine_Transform_o *transform; // x21
  int v76; // s0
  const MethodInfo *v79; // x2
  BattlePerformance_o *performance; // x21
  int32_t datalist; // w22
  System_String_o *v82; // x21
  UnityEngine_Transform_o *v83; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v85; // x27
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_o *HideInAnimNodeName; // x26
  bool v93; // w0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  UnityEngine_Transform_o *v100; // x0
  UnityEngine_Transform_o *v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct System_String_o *v108; // x1
  UnityEngine_GameObject_o *v109; // x26
  UnityEngine_Transform_o *v110; // x21
  UnityEngine_Transform_o *v111; // x21
  int v112; // s0
  int32_t v115; // w27
  UnityEngine_Transform_o *v116; // x21
  int v117; // s0
  UnityEngine_Transform_o *v120; // x21
  int v121; // s0
  UnityEngine_Transform_o *v124; // x21
  BattleFBXComponent_o *fbxcomponent; // x21
  _BOOL4 v126; // w21
  const MethodInfo *v127; // x2
  const MethodInfo *v128; // x1
  const MethodInfo *v129; // x3
  int32_t displayType; // w8
  bool v131; // w1
  bool v132; // w2
  System_Collections_Generic_IEnumerable_T__o *v133; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v134; // x22
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  const MethodInfo *v141; // x2
  UnityEngine_Transform_o *v142; // x21
  float v143; // s0
  float v144; // s1
  float v145; // s2
  float actorScale; // s3
  const MethodInfo *v147; // x4
  struct BattlePerformance_o *v148; // x8
  struct BattleData_o *data; // x8
  int32_t v150; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  struct BattleActorControl___c_StaticFields *saveNameList; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__129_0; // x21
  Il2CppObject *v154; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  System_String_array **v156; // x2
  System_String_array **v157; // x3
  System_Boolean_array **v158; // x4
  System_Int32_array **v159; // x5
  System_Int32_array *v160; // x6
  System_Int32_array *v161; // x7
  UnityEngine_SkinnedMeshRenderer_o *v162; // x25
  UnityEngine_Object_o *Component_srcLineSprite; // x26
  struct BattlePerformance_o *v164; // x8
  bool IsEnemyPosCountNormal; // w24
  UnityEngine_Mesh_o *v166; // x21
  BattlePerformance_o *v167; // x27
  int32_t v168; // w21
  __int64 v169; // x22
  __int64 v170; // x28
  int32_t v171; // w28
  System_Action_o *v172; // x22
  struct BattlePerformance_o *v173; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 monitor_low; // x9
  UnityEngine_Object_o *Component_WebViewObject; // x21
  struct BattlePerformance_o *v179; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  UnityEngine_GameObject_o *v182; // x26
  const MethodInfo *v183; // x1
  int v184; // s0
  const MethodInfo *v187; // x1
  __int64 v188; // x0
  int32_t v189; // [xsp+4h] [xbp-5Ch]
  Il2CppObject *object; // [xsp+8h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v191; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v192; // 0:x0.16
  UnityEngine_Vector3_o v193; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418B868 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, svtdata);
    sub_B2C35C(&Method_System_Array_IndexOf_int___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v11);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___67320304, v14);
    sub_B2C35C(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v15);
    sub_B2C35C(&UnityEngine_Mesh_TypeInfo, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&Method_System_Predicate_SkinnedMeshRenderer___ctor__, v19);
    sub_B2C35C(&System_Predicate_SkinnedMeshRenderer__TypeInfo, v20);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_B2C35C(&Method_BattleActorControl___c__setServantData_b__129_0__, v23);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass129_0__setServantData_b__1__, v24);
    sub_B2C35C(&BattleActorControl___c__DisplayClass129_0_TypeInfo, v25);
    sub_B2C35C(&BattleActorControl___c_TypeInfo, v26);
    sub_B2C35C(&StringLiteral_18317/*"en_Head"*/, v27);
    sub_B2C35C(&StringLiteral_12830/*"Shadow"*/, v28);
    sub_B2C35C(&StringLiteral_18321/*"en_buff01"*/, v29);
    sub_B2C35C(&StringLiteral_1/*""*/, v30);
    byte_418B868 = 1;
  }
  v31 = sub_B2C42C(BattleActorControl___c__DisplayClass129_0_TypeInfo);
  BattleActorControl___c__DisplayClass129_0___ctor((BattleActorControl___c__DisplayClass129_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_118;
  *(_QWORD *)(v31 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v31 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battleSvtData,
    (System_Int32_array **)svtdata,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v47 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v48 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v50 = *(_QWORD *)&v47->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v47->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v191.fields.currentCryptoKey = v50;
  *(_QWORD *)&v191.fields.fakeValue = v49;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v191, 0LL);
  if ( !v48 )
    goto LABEL_118;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v48,
             (int32_t)Instance,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v53 = (ServantEntity_o *)Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_118;
    v54 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12830/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v54;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.shadowObj,
      (System_Int32_array **)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
  }
  Instance = (DataManager_o *)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_118;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v61 = (int)Instance;
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v62 = (int)Instance;
  v63 = v61 == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v62 : 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_118;
  v64 = (UnityEngine_GameObject_o *)Instance;
  v189 = v61;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v65 = (int)Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v64,
                               v65,
                               v63,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actorObject,
    (System_Int32_array **)Manager__loadBattleActor,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_118;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_118;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v76, 0LL);
  BattleActorControl__ChangeShadowParent(this, v63, v79);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_118;
  performance = this->fields.performance;
  datalist = (int32_t)Instance->fields.datalist;
  Instance = (DataManager_o *)BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_118;
  BattlePerformance__registerCameraAction(performance, datalist, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_118;
  object = (Il2CppObject *)v31;
  v82 = (System_String_o *)StringLiteral_18317/*"en_Head"*/;
  v83 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v83, v82, v63, 0, 0LL);
  if ( !Instance )
    goto LABEL_118;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v85 = gameObject;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.checkScaleNode, 0LL, v86, v87, v88, v89, v90, v91);
  if ( v53 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v53, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v82 )
      goto LABEL_118;
    v93 = System_String__Equals_44292872(v82, HideInAnimNodeName, 0LL);
    v33 = v85;
    if ( !v93 )
    {
      Instance = (DataManager_o *)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_118;
      v100 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v100, HideInAnimNodeName, v63, 0, 0LL);
      if ( !Instance )
        goto LABEL_118;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v33;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.checkScaleNode,
      (System_Int32_array **)v33,
      v94,
      v95,
      v96,
      v97,
      v98,
      v99);
  }
  v101 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v108 = TransformHelper__ExistNodeFromLvName(v101, (System_String_o *)StringLiteral_18321/*"en_buff01"*/, -1, 0, 0LL)
       ? (struct System_String_o *)StringLiteral_18321/*"en_buff01"*/
       : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v108;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (System_Int32_array **)v108,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  v109 = (UnityEngine_GameObject_o *)sub_B2C42C(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_40660888(v109, 0LL);
  if ( !v109 )
    goto LABEL_118;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v109, 0LL);
  if ( !v85 )
    goto LABEL_118;
  v110 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v85, 0LL);
  if ( !v110 )
    goto LABEL_118;
  UnityEngine_Transform__set_parent(v110, (UnityEngine_Transform_o *)Instance, 0LL);
  v111 = UnityEngine_GameObject__get_transform(v109, 0LL);
  *(UnityEngine_Vector3_o *)&v112 = UnityEngine_Vector3__get_zero(0LL);
  v115 = v189;
  if ( !v111 )
    goto LABEL_118;
  UnityEngine_Transform__set_localPosition(v111, *(UnityEngine_Vector3_o *)&v112, 0LL);
  v116 = UnityEngine_GameObject__get_transform(v109, 0LL);
  *(UnityEngine_Vector3_o *)&v117 = UnityEngine_Vector3__get_up(0LL);
  if ( !v116 )
    goto LABEL_118;
  UnityEngine_Transform__set_localEulerAngles(v116, *(UnityEngine_Vector3_o *)&v117, 0LL);
  v120 = UnityEngine_GameObject__get_transform(v109, 0LL);
  *(UnityEngine_Vector3_o *)&v121 = UnityEngine_Vector3__get_one(0LL);
  if ( !v120 )
    goto LABEL_118;
  UnityEngine_Transform__set_localScale(v120, *(UnityEngine_Vector3_o *)&v121, 0LL);
  v124 = UnityEngine_GameObject__get_transform(v109, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_118;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v124 )
    goto LABEL_118;
  UnityEngine_Transform__set_parent(v124, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v109, 0LL);
  if ( !Instance )
    goto LABEL_118;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v109, 0LL);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_118;
  fbxcomponent = this->fields.fbxcomponent;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !fbxcomponent )
    goto LABEL_118;
  BattleFBXComponent__set_RootTransform(fbxcomponent, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_118;
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v189, v63, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v126 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Instance = (DataManager_o *)ServantAssetLoadManager__loadAnimEvents(v189, v63, v126, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_118;
  BattleFBXComponent__loadAnimationEvents(
    this->fields.fbxcomponent,
    (UnityEngine_TextAsset_o *)Instance,
    v189,
    v63,
    0LL);
  BattleActorControl__InitAnimationEffect(this, v63, v127);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_118;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v131 = displayType == 2;
      v132 = displayType == 3;
    }
    else
    {
      v131 = 0;
      v132 = 0;
    }
    BattleActorControl__SetDispServant(this, v131, v132, v129);
  }
  BattleActorControl__UpdateShadow(this, v128);
  this->fields.stepFlg = 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_118;
  v133 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v134 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v134,
    v133,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___67320304);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v134;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.rendererArrayList,
    (System_Int32_array **)v134,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v141);
  if ( !svtdata )
    goto LABEL_118;
  this->fields.actorScale = BattleServantData__getActorScale(svtdata, 0LL);
  v142 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v143 = UnityEngine_Vector3__get_one(0LL);
  if ( !v142 )
    goto LABEL_118;
  actorScale = this->fields.actorScale;
  v193.fields.x = v143 * actorScale;
  v193.fields.y = v144 * actorScale;
  v193.fields.z = v145 * actorScale;
  UnityEngine_Transform__set_localScale(v142, v193, 0LL);
  if ( !svtdata->fields.isEnemy )
    goto LABEL_117;
  v148 = this->fields.performance;
  if ( !v148 )
    goto LABEL_118;
  data = v148->fields.data;
  if ( !data )
    goto LABEL_118;
  v150 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           svtdata->fields.uniqueId,
           (const MethodInfo_1FFD52C *)Method_System_Array_IndexOf_int___);
  *(_DWORD *)(v31 + 24) = v150;
  if ( v150 == -1 )
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
  _9__129_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)saveNameList->__9__129_0;
  if ( !_9__129_0 )
  {
    if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      saveNameList = BattleActorControl___c_TypeInfo->static_fields;
    }
    v154 = (Il2CppObject *)saveNameList->__9;
    _9__129_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SkinnedMeshRenderer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__129_0,
      v154,
      Method_BattleActorControl___c__setServantData_b__129_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_SkinnedMeshRenderer___ctor__);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__129_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)_9__129_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&static_fields->__9__129_0,
      (System_Int32_array **)_9__129_0,
      v156,
      v157,
      v158,
      v159,
      v160,
      v161);
  }
  if ( !rendererArrayList )
    goto LABEL_118;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)rendererArrayList,
                                (System_Predicate_T__o *)_9__129_0,
                                (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_118;
  v162 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *p_actorObject,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
      goto LABEL_118;
    Instance = (DataManager_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_118;
    Component_srcLineSprite = (UnityEngine_Object_o *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_srcLineSprite, 0, 0LL);
  }
  v164 = this->fields.performance;
  if ( !v164 )
    goto LABEL_118;
  Instance = (DataManager_o *)v164->fields.data;
  if ( !Instance )
    goto LABEL_118;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v166 = (UnityEngine_Mesh_o *)sub_B2C42C(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v166, 0LL);
  if ( !v162 )
    goto LABEL_118;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v162, v166, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_118;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_srcLineSprite, v166, 0LL);
  v167 = this->fields.performance;
  v168 = *(_DWORD *)(v31 + 24);
  v170 = *(_QWORD *)&svtdata->fields.svtId.fields.currentCryptoKey;
  v169 = *(_QWORD *)&svtdata->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v192.fields.currentCryptoKey = v170;
  *(_QWORD *)&v192.fields.fakeValue = v169;
  v171 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v192, 0LL);
  v172 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v172, object, Method_BattleActorControl___c__DisplayClass129_0__setServantData_b__1__, 0LL);
  if ( !v167 )
    goto LABEL_118;
  BattlePerformance__AddCollider(
    v167,
    (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
    v162,
    v168,
    v171,
    v172,
    IsEnemyPosCountNormal,
    0LL);
  v173 = this->fields.performance;
  if ( !v173 )
    goto LABEL_118;
  statusPerf = v173->fields.statusPerf;
  v115 = v189;
  if ( !statusPerf )
    goto LABEL_118;
  enemyPref = statusPerf->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_118;
  svtHeadUpList = enemyPref->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_118;
  monitor_low = SLODWORD(object[1].monitor);
  if ( (unsigned int)monitor_low >= svtHeadUpList->max_length )
  {
    v188 = sub_B2C460(Instance);
    sub_B2C400(v188, 0LL);
  }
  Instance = (DataManager_o *)svtHeadUpList->m_Items[monitor_low];
  if ( !Instance )
LABEL_118:
    sub_B2C434(Instance, v33);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v179 = this->fields.performance;
    if ( v179 )
    {
      actorcamera = v179->fields.actorcamera;
      uicamera = v179->fields.uicamera;
      v182 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v184 = BattleActorControl__getHeadUpY(this, v183);
      if ( Component_WebViewObject )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)Component_WebViewObject,
          actorcamera,
          uicamera,
          v182,
          *(UnityEngine_Vector3_o *)&v184,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)Component_WebViewObject, 0LL);
        goto LABEL_117;
      }
    }
    goto LABEL_118;
  }
LABEL_117:
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v115, v63, svtdata->fields.isEnemy, v147);
  BattleActorControl__LoadSavedPartAnimation(this, v187);
}


void __fastcall BattleActorControl__setSlientDead(BattleActorControl_o *this, const MethodInfo *method)
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
        BattleActorControl__startDropItem(this, 1, v6),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B2C434(battleSvtData, v4);
  }
  v7->fields.isSilnetDead = 1;
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
  if ( (byte_418B878 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_13161/*"SummonMasterObject"*/, obj);
    byte_418B878 = 1;
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
                                     (System_String_o *)StringLiteral_13161/*"SummonMasterObject"*/,
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
                                       (System_String_o *)StringLiteral_13161/*"SummonMasterObject"*/,
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
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
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
                                     (System_String_o *)StringLiteral_13161/*"SummonMasterObject"*/,
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
                                               (System_String_o *)StringLiteral_13161/*"SummonMasterObject"*/,
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
        sub_B2C434(this, obj);
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
  if ( (byte_418B877 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_13577/*"TargetObject"*/, obj);
    byte_418B877 = 1;
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
                                       (System_String_o *)StringLiteral_13577/*"TargetObject"*/,
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
                                               (System_String_o *)StringLiteral_13577/*"TargetObject"*/,
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
        sub_B2C434(this, obj);
      }
    }
    v7 = sub_B2C460(this);
    sub_B2C400(v7, 0LL);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_B2C434(this, method);
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
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
      sub_B2C434(0LL, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformance_o *performance; // x8
  bool v5; // zf
  int32_t uniqueID; // w20
  float v7; // s8
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_418B8C9 & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    this = (BattleActorControl_o *)sub_B2C35C(&StringLiteral_12262/*"SKIP_VOICE"*/, v3);
    byte_418B8C9 = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_B2C434(this, method);
  v5 = !BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v2->fields.uniqueID;
  if ( v5 )
    v7 = 1.0;
  else
    v7 = 0.5;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__StopVoice(uniqueID, v7, 0LL);
  BattleActorControl__sendEventFSM_32437564(v2, (System_String_o *)StringLiteral_12262/*"SKIP_VOICE"*/, 0, v8);
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
    sub_B2C434(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_418B8D2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_BattleActorControl_endChangeAppearance__, v3);
    byte_418B8D2 = 1;
  }
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v6 = BattleActorControl__waitChangeApp(this, v4, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleActorControl__startDeadEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 v18; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 ActorSvtId; // x0
  __int64 v21; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct BattleServantData_o *v32; // x8
  int v33; // s8
  System_String_o *Value; // x0
  int v35; // w8
  __int64 v36; // x19
  unsigned int v37; // w20
  int v38; // w22
  UnityEngine_GameObject_o *v39; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Object_array *v46; // x20
  System_Int32_array **v47; // x1
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x22
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x1
  const MethodInfo *v62; // x1
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x21
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Int32_array **v90; // x1
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Int32_array **v97; // x1
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **v104; // x1
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x1
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x21
  System_Collections_Hashtable_o *v126; // x0
  __int64 v127; // x0
  __int64 v128; // x0
  int v129; // [xsp+8h] [xbp-48h] BYREF
  int v130; // [xsp+Ch] [xbp-44h] BYREF
  float Height; // [xsp+28h] [xbp-28h] BYREF
  int v132; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_418B89C & 1) == 0 )
  {
    sub_B2C35C(&iTween_EaseType_TypeInfo, method);
    sub_B2C35C(&object___TypeInfo, v4);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B2C35C(&float_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22938/*"updateDeadEffect"*/, v7);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v8);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v9);
    sub_B2C35C(&StringLiteral_10005/*"OnFinishDead"*/, v10);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v11);
    sub_B2C35C(&StringLiteral_12209/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v12);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v13);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v14);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v15);
    sub_B2C35C(&iTween_TypeInfo, v16);
    byte_418B89C = 1;
  }
  BattleActorControl__startDropItem(this, 0, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v18 = battleSvtData->fields.displayType == 3;
  else
    v18 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v18 )
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
    goto LABEL_88;
  root_field = performance->fields.root_field;
  ActorSvtId = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ActorSvtId )
    goto LABEL_88;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ActorSvtId, 0LL);
  v25 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v25;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.particleDisconnectorObj,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = this->fields.battleSvtData;
  v33 = 1067869798;
  if ( v32 )
  {
    if ( v32->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12209/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_88;
        v35 = *(_DWORD *)(ActorSvtId + 24);
        v36 = ActorSvtId;
        if ( v35 >= 1 )
        {
          v37 = 0;
          while ( 1 )
          {
            if ( v37 >= v35 )
              goto LABEL_86;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_88;
            v38 = *(_DWORD *)(v36 + 4LL * (int)v37 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v38 == (_DWORD)ActorSvtId )
              break;
            v35 = *(_DWORD *)(v36 + 24);
            if ( (int)++v37 >= v35 )
              goto LABEL_29;
          }
          v33 = 1065353215;
        }
      }
    }
  }
LABEL_29:
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_B2C374(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_88:
    sub_B2C434(ActorSvtId, v21);
  v46 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_18914/*"from"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v47 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
  }
  else
  {
    v47 = 0LL;
  }
  if ( !v46->max_length )
    goto LABEL_86;
  v46->m_Items[0] = (Il2CppObject *)v47;
  sub_B2C2F8((BattleServantConfConponent_o *)v46->m_Items, v47, v40, v41, v42, v43, v44, v45);
  v132 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v132);
  v54 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B2C41C(ActorSvtId, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
  }
  if ( v46->max_length <= 1 )
    goto LABEL_86;
  v46->m_Items[1] = (Il2CppObject *)v54;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[1], v54, v48, v49, v50, v51, v52, v53);
  ActorSvtId = StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_22714/*"to"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v61 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
  }
  else
  {
    v61 = 0LL;
  }
  if ( v46->max_length <= 2 )
    goto LABEL_86;
  v46->m_Items[2] = (Il2CppObject *)v61;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[2], v61, v55, v56, v57, v58, v59, v60);
  Height = BattleActorControl__getHeight(this, v62);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height);
  v69 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B2C41C(ActorSvtId, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
  }
  if ( v46->max_length <= 3 )
    goto LABEL_86;
  v46->m_Items[3] = (Il2CppObject *)v69;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
  ActorSvtId = StringLiteral_18114/*"easetype"*/;
  if ( StringLiteral_18114/*"easetype"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_18114/*"easetype"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v76 = (System_Int32_array **)StringLiteral_18114/*"easetype"*/;
  }
  else
  {
    v76 = 0LL;
  }
  if ( v46->max_length <= 4 )
    goto LABEL_86;
  v46->m_Items[4] = (Il2CppObject *)v76;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
  v130 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v130);
  v83 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B2C41C(ActorSvtId, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
  }
  if ( v46->max_length <= 5 )
    goto LABEL_86;
  v46->m_Items[5] = (Il2CppObject *)v83;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[5], v83, v77, v78, v79, v80, v81, v82);
  ActorSvtId = StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v90 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v90 = 0LL;
  }
  if ( v46->max_length <= 6 )
    goto LABEL_86;
  v46->m_Items[6] = (Il2CppObject *)v90;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[6], v90, v84, v85, v86, v87, v88, v89);
  ActorSvtId = StringLiteral_22938/*"updateDeadEffect"*/;
  if ( StringLiteral_22938/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_22938/*"updateDeadEffect"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v97 = (System_Int32_array **)StringLiteral_22938/*"updateDeadEffect"*/;
  }
  else
  {
    v97 = 0LL;
  }
  if ( v46->max_length <= 7 )
    goto LABEL_86;
  v46->m_Items[7] = (Il2CppObject *)v97;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[7], v97, v91, v92, v93, v94, v95, v96);
  ActorSvtId = StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v104 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v104 = 0LL;
  }
  if ( v46->max_length <= 8 )
    goto LABEL_86;
  v46->m_Items[8] = (Il2CppObject *)v104;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[8], v104, v98, v99, v100, v101, v102, v103);
  ActorSvtId = StringLiteral_10005/*"OnFinishDead"*/;
  if ( StringLiteral_10005/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_10005/*"OnFinishDead"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v111 = (System_Int32_array **)StringLiteral_10005/*"OnFinishDead"*/;
  }
  else
  {
    v111 = 0LL;
  }
  if ( v46->max_length <= 9 )
    goto LABEL_86;
  v46->m_Items[9] = (Il2CppObject *)v111;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[9], v111, v105, v106, v107, v108, v109, v110);
  ActorSvtId = StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    ActorSvtId = sub_B2C41C(StringLiteral_22677/*"time"*/, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v118 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v118 = 0LL;
  }
  if ( v46->max_length <= 0xA )
    goto LABEL_86;
  v46->m_Items[10] = (Il2CppObject *)v118;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[10], v118, v112, v113, v114, v115, v116, v117);
  v129 = v33;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v129);
  v125 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B2C41C(ActorSvtId, v46->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_87:
      v128 = sub_B2C454(ActorSvtId);
      sub_B2C400(v128, 0LL);
    }
  }
  if ( v46->max_length <= 0xB )
  {
LABEL_86:
    v127 = sub_B2C460(ActorSvtId);
    sub_B2C400(v127, 0LL);
  }
  v46->m_Items[11] = (Il2CppObject *)v125;
  sub_B2C2F8((BattleServantConfConponent_o *)&v46->m_Items[11], v125, v119, v120, v121, v122, v123, v124);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v126 = iTween__Hash(v46, 0LL);
  iTween__ValueTo(v39, v126, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__startDropItem(BattleActorControl_o *this, bool isSlient, const MethodInfo *method)
{
  __int64 v5; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v7; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v9; // x8
  struct BattleServantData_o *v10; // x8
  struct DropInfo_array *droplist; // x27
  struct BattlePerformance_o *v12; // x9
  int32_t ServantIndex; // w21
  const MethodInfo *v14; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v16; // x3
  UnityEngine_Transform_o *v17; // x22
  unsigned __int64 v18; // x23
  DropInfo_o *v19; // x24
  UnityEngine_Object_o *Item; // x25
  BattlePerformance_o *v21; // x26
  int v22; // s0
  struct BattlePerformance_o *v25; // x8
  BattlePerformance_o *v26; // x20
  __int64 v27; // x0
  bool v28; // [xsp+1Ch] [xbp-54h]

  if ( (byte_418B89B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, isSlient);
    sub_B2C35C(&StringLiteral_1/*""*/, v5);
    byte_418B89B = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_34;
  if ( battleSvtData->fields.isWithdraw )
    goto LABEL_9;
  battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    goto LABEL_9;
  v7 = this->fields.battleSvtData;
  if ( !v7 )
    goto LABEL_34;
  battleSvtData = (BattleServantData_o *)v7->fields.deckSvt;
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
    v28 = isSlient;
    BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
    v9 = this->fields.battleSvtData;
    if ( !v9 )
      goto LABEL_34;
    v9->fields.IsAlreadyDrop = 1;
    v10 = this->fields.battleSvtData;
    if ( !v10 )
      goto LABEL_34;
    droplist = v10->fields.droplist;
    if ( droplist )
    {
      v12 = this->fields.performance;
      if ( !v12 )
        goto LABEL_34;
      battleSvtData = (BattleServantData_o *)v12->fields.data;
      if ( !battleSvtData )
        goto LABEL_34;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)battleSvtData,
                       v10->fields.isEnemy,
                       v10->fields.uniqueId,
                       0LL);
      DropTransform = BattleActorControl__getDropTransform(this, v14);
      LODWORD(v16) = droplist->max_length;
      if ( (int)v16 >= 1 )
      {
        v17 = DropTransform;
        v18 = 0LL;
        while ( 1 )
        {
          if ( v18 >= (unsigned int)v16 )
          {
            v27 = sub_B2C460(DropTransform);
            sub_B2C400(v27, 0LL);
          }
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v19 = droplist->m_Items[v18];
          Item = (UnityEngine_Object_o *)BattlePerformance__dropGetItem(
                                           (BattlePerformance_o *)battleSvtData,
                                           v17,
                                           v19,
                                           v16,
                                           v18,
                                           ServantIndex,
                                           0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item, 0LL, 0LL);
          if ( ((unsigned __int8)battleSvtData & 1) != 0 )
          {
            if ( !v17 )
              break;
            v21 = this->fields.performance;
            *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_position(v17, 0LL);
            if ( !v21 )
              break;
            BattlePerformance__saveOriginalPos(
              v21,
              (UnityEngine_GameObject_o *)Item,
              *(UnityEngine_Vector3_o *)&v22,
              this->fields.criteriaPos,
              0LL);
          }
          v25 = this->fields.performance;
          if ( !v25 )
            break;
          battleSvtData = (BattleServantData_o *)v25->fields.data;
          if ( !battleSvtData )
            break;
          BattleData__addDropItems((BattleData_o *)battleSvtData, v19, 0LL);
          v16 = *(_QWORD *)&droplist->max_length;
          if ( (__int64)++v18 >= (int)v16 )
            goto LABEL_30;
        }
LABEL_34:
        sub_B2C434(battleSvtData, isSlient);
      }
    }
LABEL_30:
    if ( !v28 )
    {
      v26 = this->fields.performance;
      battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v26 )
        goto LABEL_34;
      BattlePerformance__ShowAll(
        v26,
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


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  BattleFBXComponent_o *fbxcomponent; // x0
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v28; // x8
  const MethodInfo *v29; // x2
  struct BattlePerformance_o *v30; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x21
  BattleFBXComponent_c *v32; // x0
  struct BattlePerformance_o *v33; // x8
  WebViewManager_o *Instance; // x0
  BattlePerformance_o *v35; // x21
  BattleSequenceManager_o *v36; // x22
  struct BattlePerformance_o *v37; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v39; // x8
  struct BattleActionData_o *actiondata; // x8
  TreasureDvcEntity_o *Entity; // x0
  TreasureDvcEntity_o *v42; // x20
  struct BattleActionData_o *v43; // x8
  AssetManager_o *v44; // x20
  AssetManager_ResourceUnloadEventHandler_o *v45; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v47; // x20
  __int64 v48; // x21
  __int64 v49; // x22
  int32_t v50; // w21
  BattleFBXComponent_o *v51; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v53; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v56; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v58; // x27
  UnityEngine_Object_o *v59; // x20
  struct BattlePerformance_o *v60; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v62; // x8
  struct BattleData_o *v63; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v64; // 0:x0.16

  if ( (byte_418B8AF & 1) == 0 )
  {
    sub_B2C35C(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, callback);
    sub_B2C35C(&Method_BattleActorControl__startNoblePhantasm_b__256_0__, v11);
    sub_B2C35C(&BattleFBXComponent_TypeInfo, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_TreasureDvcMaster___, v13);
    sub_B2C35C(&DataManager_TypeInfo, v14);
    sub_B2C35C(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v15);
    sub_B2C35C(&Method_FieldMotionManager_SetVariables_GameObject___, v16);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v17);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B2C35C(&OptionManager_TypeInfo, v19);
    sub_B2C35C(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v22);
    sub_B2C35C(&StringLiteral_9362/*"NPACTOR"*/, v23);
    sub_B2C35C(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v24);
    byte_418B8AF = 1;
  }
  this->fields.noblePhantasmCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.noblePhantasmCallback,
    (System_Int32_array **)callback,
    (System_String_array **)flg,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattleFBXComponent__changeActiveEffect(fbxcomponent, 0, 0LL);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_65;
  fbxcomponent = (BattleFBXComponent_o *)performance->fields.bgPerf;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)fbxcomponent, 1, 0LL);
  fbxcomponent = (BattleFBXComponent_o *)this->fields.performance;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)fbxcomponent, 0, 0LL);
  v28 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 1;
  if ( !v28 )
    goto LABEL_65;
  fbxcomponent = (BattleFBXComponent_o *)v28->fields.logic;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattleLogic__ChangePhase((BattleLogic_o *)fbxcomponent, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 0, v29);
  fbxcomponent = (BattleFBXComponent_o *)this->fields.performance;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)fbxcomponent, 0, 0LL);
  v30 = this->fields.performance;
  if ( !v30 )
    goto LABEL_65;
  fmManager_k__BackingField = v30->fields._fmManager_k__BackingField;
  fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_65;
  FieldMotionManager__SetVariables_string_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9362/*"NPACTOR"*/,
    (System_String_o *)fbxcomponent,
    (const MethodInfo_1AA6C30 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v32 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v32 = BattleFBXComponent_TypeInfo;
  }
  v32->static_fields->EnableEvent = 0;
  fbxcomponent = (BattleFBXComponent_o *)this->fields.performance;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattlePerformance__changeShadowType((BattlePerformance_o *)fbxcomponent, 1, 0LL);
  fbxcomponent = (BattleFBXComponent_o *)this->fields.performance;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)fbxcomponent, 0LL);
  v33 = this->fields.performance;
  if ( !v33 )
    goto LABEL_65;
  fbxcomponent = (BattleFBXComponent_o *)v33->fields.commandPerf;
  if ( !fbxcomponent )
    goto LABEL_65;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)fbxcomponent, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v35 = this->fields.performance;
  v36 = (BattleSequenceManager_o *)Instance;
  fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v37 = this->fields.performance;
  if ( !v37 )
    goto LABEL_65;
  bgPerf = v37->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_65;
  if ( !v36 )
    goto LABEL_65;
  BattleSequenceManager__init(
    v36,
    v35,
    (UnityEngine_GameObject_o *)fbxcomponent,
    v37->fields.p_actorlist,
    v37->fields.e_actorlist,
    v37->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v39 = this->fields.performance;
  if ( !v39 )
    goto LABEL_65;
  v39->fields.isNoblePhantasmWhiteInFlg = flg;
  if ( this->fields.actiondata )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    fbxcomponent = (BattleFBXComponent_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = this->fields.actiondata;
    if ( !actiondata || !fbxcomponent )
      goto LABEL_65;
    Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)fbxcomponent,
                                      actiondata->fields.treasureDvcId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v42 = Entity;
      if ( TreasureDvcEntity__IsRandomTD(Entity, 0LL) )
      {
        fbxcomponent = (BattleFBXComponent_o *)this->fields.battleSvtData;
        if ( !fbxcomponent )
          goto LABEL_65;
        fbxcomponent = (BattleFBXComponent_o *)BattleServantData__getDispLimitCount(
                                                 (BattleServantData_o *)fbxcomponent,
                                                 1,
                                                 0LL);
        v43 = this->fields.actiondata;
        if ( !v43 )
          goto LABEL_65;
        TreasureDvcEntity__getRandomSeqIdEachLimit(v42, (int32_t)fbxcomponent, v43->fields.ActSetId, 0LL);
      }
    }
  }
  fbxcomponent = (BattleFBXComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !fbxcomponent )
    goto LABEL_65;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)fbxcomponent, this->fields.actiondata, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v44 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v45 = (AssetManager_ResourceUnloadEventHandler_o *)sub_B2C42C(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v45,
      (Il2CppObject *)this,
      Method_BattleActorControl__startNoblePhantasm_b__256_0__,
      0LL);
    if ( !v44 )
      goto LABEL_65;
    AssetManager__RequestUnloadUnusedAssets(v44, v45, 0LL);
  }
  else
  {
    fbxcomponent = (BattleFBXComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_65;
    v47 = (BattleSequenceManager_o *)fbxcomponent;
    v49 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v48 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v64.fields.currentCryptoKey = v49;
    *(_QWORD *)&v64.fields.fakeValue = v48;
    fbxcomponent = (BattleFBXComponent_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v64, 0LL);
    if ( !this->fields.battleSvtData )
      goto LABEL_65;
    v50 = (int)fbxcomponent;
    fbxcomponent = (BattleFBXComponent_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
    if ( !fbxcomponent )
      goto LABEL_65;
    v51 = fbxcomponent;
    fbxcomponent = (BattleFBXComponent_o *)this->fields.battleSvtData;
    if ( !fbxcomponent )
      goto LABEL_65;
    m_CachedPtr = v51->fields.m_CachedPtr;
    fbxcomponent = (BattleFBXComponent_o *)BattleServantData__getDispLimitCount(
                                             (BattleServantData_o *)fbxcomponent,
                                             1,
                                             0LL);
    v53 = this->fields.battleSvtData;
    if ( !v53 )
      goto LABEL_65;
    overwriteSvtVoiceId = v53->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v53->fields.treasuredvcLevel;
    v56 = (int)fbxcomponent;
    NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL);
    v58 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B2C42C(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v58,
      (Il2CppObject *)this,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v47 )
      goto LABEL_65;
    BattleSequenceManager__loadSequence(
      v47,
      v50,
      m_CachedPtr,
      v56,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v58,
      0LL);
  }
  v59 = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(v59, 0LL, 0LL);
  if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
  {
    v60 = this->fields.performance;
    if ( !v60 )
      goto LABEL_65;
    data = (UnityEngine_Object_o *)v60->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    if ( ((unsigned __int8)fbxcomponent & 1) != 0 && !this->fields.isEnemy )
    {
      v62 = this->fields.performance;
      if ( v62 )
      {
        v63 = v62->fields.data;
        if ( v63 )
        {
          ++v63->fields.playerNpCount;
          return;
        }
      }
LABEL_65:
      sub_B2C434(fbxcomponent, v25);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_418B8CA & 1) == 0 )
  {
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, method);
    byte_418B8CA = 1;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v23; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v27; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *_9__318_0; // x20
  Il2CppObject *v30; // x21
  struct BattleActorControl___c_StaticFields *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_int__o *v38; // x22
  __int64 v39; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v40; // x21
  unsigned __int64 v41; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v46; // x22
  unsigned __int64 v47; // x25
  int32_t v48; // w23
  UnityEngine_GameObject_o *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v51; // x2
  System_Collections_IEnumerator_o *v52; // x0
  __int64 v53; // x8
  unsigned __int64 v54; // x22
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  System_Collections_IEnumerator_o *v57; // x0
  __int64 v58; // x0

  v4 = this;
  if ( (byte_418B8DA & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Remove_int__GameObject___, auraEffectList);
    sub_B2C35C(&Method_DataManager_GetMasterData_AuraEffectMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Except_int___, v11);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__, v13);
    sub_B2C35C(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B2C35C(&Method_BattleActorControl___c__updateAura_b__318_0__, v20);
    this = (BattleActorControl_o *)sub_B2C35C(&BattleActorControl___c_TypeInfo, v21);
    byte_418B8DA = 1;
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
  v23 = v4->fields.battleSvtData;
  if ( !v23 )
    goto LABEL_64;
  buffData = v23->fields.buffData;
  if ( !buffData )
    goto LABEL_64;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v23->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_18:
    v38 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v38,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( auraEffectList )
      {
        v39 = *(_QWORD *)&auraEffectList->max_length;
        v40 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
        if ( (int)v39 >= 1 )
        {
          v41 = 0LL;
          while ( v41 < (unsigned int)v39 )
          {
            if ( !v40 )
              goto LABEL_64;
            this = (BattleActorControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v40,
                                             auraEffectList->m_Items[v41 + 1],
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v38 )
                goto LABEL_64;
              System_Collections_Generic_List_int___Add(
                v38,
                *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1),
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
            LODWORD(v39) = auraEffectList->max_length;
            if ( (__int64)++v41 >= (int)v39 )
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
                   (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
          v44 = System_Linq_Enumerable__Except_int_(
                  v43,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                  (const MethodInfo_1A8EBB4 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v44,
                                           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            actorObject = this->fields.actorObject;
            v46 = this;
            if ( (int)actorObject >= 1 )
            {
              v47 = 0LL;
              while ( v47 < (unsigned int)actorObject )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                v48 = *((_DWORD *)&v46->fields.fbxcomponent + v47);
                Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                     v48,
                                                     (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                    v52 = BattleActorControl__DestroyAuraEffect((BattleActorControl_o *)activeInHierarchy, Item, v51);
                    UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v4, v52, 0LL);
                  }
                  else
                  {
LABEL_68:
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
                  v48,
                  (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                 (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(actorObject) = v46->fields.actorObject;
                if ( (__int64)++v47 >= (int)actorObject )
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
              v53 = *(_QWORD *)&auraEffectList->max_length;
              if ( (int)v53 < 1 )
                return;
              v54 = 0LL;
              while ( v54 < (unsigned int)v53 )
              {
                if ( !v40 )
                  goto LABEL_64;
                this = (BattleActorControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v40,
                                                 auraEffectList->m_Items[v54 + 1],
                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v56 = (int32_t)this->fields.actorObject;
                  if ( v4->fields._currentPriority_k__BackingField <= v56 )
                  {
                    v57 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1),
                            v56,
                            v55);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v57,
                                                     0LL);
                  }
                }
                LODWORD(v53) = auraEffectList->max_length;
                if ( (__int64)++v54 >= (int)v53 )
                  return;
              }
LABEL_65:
              v58 = sub_B2C460(this);
              sub_B2C400(v58, 0LL);
            }
          }
        }
      }
    }
LABEL_64:
    sub_B2C434(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v27 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v27 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v27->static_fields;
  _9__318_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)static_fields->__9__318_0;
  if ( !_9__318_0 )
  {
    if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) != 0 && !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)static_fields->__9;
    _9__318_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B2C42C(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
      _9__318_0,
      v30,
      Method_BattleActorControl___c__updateAura_b__318_0__,
      (const MethodInfo_2703618 *)Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__);
    v31 = BattleActorControl___c_TypeInfo->static_fields;
    v31->__9__318_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__318_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v31->__9__318_0,
      (System_Int32_array **)_9__318_0,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__318_0,
    (const MethodInfo_1728C2C *)Method_BasicHelper_Remove_int__GameObject___);
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
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0LL);
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
        v8 = sub_B2C460(this);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(this, actionData);
  }
}


void __fastcall BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  __int64 v19; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v23; // x20
  int size; // w8
  int v25; // w24
  BattleBuffData_BuffData_o *v26; // x8
  BuffEntity_o *Entity; // x23
  const MethodInfo *v28; // x2
  int actorObject; // w8
  BattleActorControl_o *v30; // x23
  unsigned int v31; // w27
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int32_t current; // w21
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x1
  __int64 v38; // x0
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+20h] [xbp-90h] BYREF

  v2 = this;
  if ( (byte_418B8EB & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____67435280, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    this = (BattleActorControl_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_418B8EB = 1;
  }
  memset(&v40, 0, sizeof(v40));
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_35;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_35;
  EffectBuffList = BattleBuffData__GetEffectBuffList((BattleBuffData_o *)this, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BuffMaster___);
  v23 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EffectBuffList )
    goto LABEL_35;
  size = EffectBuffList->fields._size;
  if ( size >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( size <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v26 = EffectBuffList->fields._items->m_Items[v25];
      if ( !v26 )
        goto LABEL_35;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_35;
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v26->fields.buffId,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v28);
      if ( !Entity || !v23 )
        goto LABEL_35;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v23,
                                       Entity->fields.effectId,
                                       (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        System_Collections_Generic_List_int___Add(
          v23,
          Entity->fields.effectId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_35;
        this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                         Entity->fields.effectId,
                                         (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_35;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_35;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____67435280);
          if ( !this )
            goto LABEL_35;
          actorObject = (int)this->fields.actorObject;
          v30 = this;
          if ( actorObject >= 1 )
            break;
        }
      }
LABEL_26:
      size = EffectBuffList->fields._size;
      if ( ++v25 >= size )
        goto LABEL_27;
    }
    v31 = 0;
    while ( 1 )
    {
      if ( v31 >= actorObject )
      {
        v38 = sub_B2C460(this);
        sub_B2C400(v38, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v30->fields.fbxcomponent + (int)v31);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v25 * 0.01) + -1.0,
        0LL);
      actorObject = (int)v30->fields.actorObject;
      if ( (int)++v31 >= actorObject )
        goto LABEL_26;
    }
LABEL_35:
    sub_B2C434(this, method);
  }
LABEL_27:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_35;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this,
           (const MethodInfo_2E64358 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v33 )
      break;
    if ( !v23 )
      sub_B2C434(v33, v34);
    current = v40.fields.current;
    if ( !System_Collections_Generic_List_int___Contains(
            v23,
            v40.fields.current,
            (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v37 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v36);
      UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)v2, v37, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *gameObject; // x19
  void *material; // x0
  __int64 v14; // x1
  int v15; // w8
  _DWORD *v16; // x20
  unsigned int v17; // w22
  char *v18; // x8
  UnityEngine_Renderer_o *v19; // x21
  BattleActorControl_c *v20; // x0
  float defaultHeight; // s9
  float v22; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  UnityEngine_Material_o *v26; // x21
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s7
  int v31; // w8
  int v32; // w23
  char *v33; // x8
  UnityEngine_Component_o *v34; // x20
  __int64 v35; // x8
  _QWORD *v36; // x21
  unsigned __int64 v37; // x28
  UnityEngine_Material_o *v38; // x22
  System_String_o *v39; // x1
  UnityEngine_Material_o *v40; // x0
  float v41; // s0
  float y; // s9
  float v43; // s10
  float v44; // s11
  __int64 v45; // x0
  int *v46; // [xsp+0h] [xbp-C0h]
  MethodInfo methoda; // [xsp+8h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_418B89F & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_15950/*"_ClipSharpnessY"*/, v8);
    sub_B2C35C(&StringLiteral_15954/*"_Color"*/, v9);
    sub_B2C35C(&StringLiteral_23256/*"weapon"*/, v10);
    sub_B2C35C(&StringLiteral_16879/*"body"*/, v11);
    byte_418B89F = 1;
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
    material = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !material )
      goto LABEL_47;
    v15 = *((_DWORD *)material + 6);
    v16 = material;
    if ( v15 >= 1 )
    {
      v17 = 0;
      while ( v17 < v15 )
      {
        v18 = (char *)&v16[2 * v17];
        v19 = (UnityEngine_Renderer_o *)*((_QWORD *)v18 + 4);
        if ( !v19 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_material(*((UnityEngine_Renderer_o **)v18 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)UnityEngine_Material__HasProperty_40688736(
                             (UnityEngine_Material_o *)material,
                             (System_String_o *)StringLiteral_15954/*"_Color"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
        {
          v20 = BattleActorControl_TypeInfo;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v20 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v20->static_fields->defaultHeight;
          material = UnityEngine_Renderer__get_material(v19, 0LL);
          if ( !material )
            goto LABEL_47;
          v22 = val / defaultHeight;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)material, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          v26 = UnityEngine_Renderer__get_material(v19, 0LL);
          v52.fields.a = 1.0 - v22;
          v52.fields.r = r;
          v52.fields.g = g;
          v52.fields.b = b;
          methoda.methodPointer = 0LL;
          methoda.invoker_method = 0LL;
          UnityEngine_Color___ctor(v52, v27, v28, v29, v30, &methoda);
          if ( !v26 )
            goto LABEL_47;
          *(_QWORD *)&v53.fields.r = methoda.methodPointer;
          *(_QWORD *)&v53.fields.b = methoda.invoker_method;
          UnityEngine_Material__set_color(v26, v53, 0LL);
        }
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_22;
      }
LABEL_48:
      v45 = sub_B2C460(material);
      sub_B2C400(v45, 0LL);
    }
LABEL_22:
    material = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27950360(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1AA7D18 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !material )
LABEL_47:
      sub_B2C434(material, v14);
    v31 = *((_DWORD *)material + 6);
    if ( v31 >= 1 )
    {
      v32 = 0;
      v46 = (int *)material;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)v31 )
          goto LABEL_48;
        v33 = (char *)material + 8 * v32;
        v34 = (UnityEngine_Component_o *)*((_QWORD *)v33 + 4);
        if ( !v34 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v33 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        v35 = *((_QWORD *)material + 3);
        v36 = material;
        if ( (int)v35 >= 1 )
          break;
LABEL_45:
        material = v46;
        ++v32;
        v31 = v46[6];
        if ( v32 >= v31 )
          return;
      }
      v37 = 0LL;
      while ( v37 < (unsigned int)v35 )
      {
        v38 = (UnityEngine_Material_o *)v36[v37 + 4];
        material = UnityEngine_Component__get_gameObject(v34, 0LL);
        if ( !material )
          goto LABEL_47;
        material = UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)System_String__StartsWith(
                             (System_String_o *)material,
                             (System_String_o *)StringLiteral_16879/*"body"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
          goto LABEL_37;
        material = UnityEngine_Component__get_gameObject(v34, 0LL);
        if ( !material )
          goto LABEL_47;
        material = UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)System_String__StartsWith(
                             (System_String_o *)material,
                             (System_String_o *)StringLiteral_23256/*"weapon"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
        {
LABEL_37:
          if ( !v38 )
            goto LABEL_47;
          v39 = (System_String_o *)StringLiteral_15950/*"_ClipSharpnessY"*/;
          v40 = v38;
          v41 = val;
        }
        else
        {
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v34,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          center = UnityEngine_Bounds__get_center((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          y = center.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v34,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          extents = UnityEngine_Bounds__get_extents((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          v43 = extents.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v34,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          material = BattleActorControl_TypeInfo;
          v44 = size.fields.y;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          }
          if ( !v38 )
            goto LABEL_47;
          v39 = (System_String_o *)StringLiteral_15950/*"_ClipSharpnessY"*/;
          v40 = v38;
          v41 = (float)(y - v43)
              + (float)((float)((float)(v44 + 0.2) / BattleActorControl_TypeInfo->static_fields->defaultHeight) * val);
        }
        UnityEngine_Material__SetFloat(v40, v39, v41, 0LL);
        LODWORD(v35) = *((_DWORD *)v36 + 6);
        if ( (__int64)++v37 >= (int)v35 )
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

  if ( (byte_418B8D3 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl__waitChangeApp_d__310_TypeInfo, callback);
    byte_418B8D3 = 1;
  }
  v5 = sub_B2C42C(BattleActorControl__waitChangeApp_d__310_TypeInfo);
  BattleActorControl__waitChangeApp_d__310___ctor((BattleActorControl__waitChangeApp_d__310_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4186A1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, actor);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo, v7);
    byte_4186A1C = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._activeFsmNameList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B2C42C(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v15,
    (const MethodInfo_295D884 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._callBackQueue,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.battleActor,
    (System_Int32_array **)actor,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x20

  if ( (byte_4186A1E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, fsmName);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_4186A1E = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B2C434(v6, v7);
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeFsmNameList,
          (WarBoardManager_TaskList_o *)fsmName,
          (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeFsmNameList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)fsmName,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_4186A20 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__, callBack);
    byte_4186A20 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B2C434(0LL, v5);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    callBackQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)callBack,
    (const MethodInfo_295DE78 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_4186A21 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__, v3);
    byte_4186A21 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v4);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B2C434(0LL, v5);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_295E090 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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

  if ( (byte_4186A1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4186A1B = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B2C434(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *activeFsmNameList; // x0

  if ( (byte_4186A1F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, fsmName);
    byte_4186A1F = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B2C434(0LL, v5);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
           activeFsmNameList,
           (WarBoardManager_TaskList_o *)fsmName,
           (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_4186A1D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__, v3);
    byte_4186A1D = 1;
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
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__),
        (battleActor = (BattleActorControl_o *)this->fields._callBackQueue) == 0LL) )
  {
LABEL_10:
    sub_B2C434(battleActor, method);
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)battleActor,
    (const MethodInfo_295DB18 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
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
  sub_B2C2F8(
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
  return (System_IAsyncResult_o *)sub_B2C300(this, v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


void __fastcall BattleActorControl_EndCallEvent__Invoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  BattleActorControl_EndCallEvent_o **v8; // x25
  __int64 i; // x26
  unsigned int v10; // w22
  __int64 class_0; // x0
  __int64 v12; // x3
  System_Collections_Hashtable_c *v13; // x8
  unsigned __int64 v14; // x10
  int32_t *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  unsigned int v18; // w23
  __int64 v19; // x0
  __int64 v20; // x3
  __int64 v21; // x8
  unsigned __int64 v22; // x10
  _DWORD *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall **v27)(System_Collections_Hashtable_o *, _QWORD); // x0
  __int64 v28; // x0
  void (__fastcall **v29)(__int64 *, System_Collections_Hashtable_o *, _QWORD); // x0
  BattleActorControl_EndCallEvent_o *v30; // x8
  __int64 v31; // x21
  __int64 *v32; // x22
  void (__fastcall *v33)(System_Collections_Hashtable_o *, __int64); // x23
  char v34; // w0
  int v35; // w8
  char v36; // w23
  char v37; // w0
  __int64 v38; // x3
  __int64 v39; // x8
  __int64 v40; // x1
  __int64 v41; // x2
  unsigned __int64 v42; // x10
  _DWORD *v43; // x11
  char v44; // w22
  char v45; // w0
  __int64 v46; // x3
  System_Collections_Hashtable_c *klass; // x8
  __int64 v48; // x1
  __int64 v49; // x2
  unsigned __int64 v50; // x10
  int32_t *p_offset; // x11
  BattleActorControl_EndCallEvent_o *v52; // [xsp+8h] [xbp-48h] BYREF

  v52 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v52;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (BattleActorControl_EndCallEvent_o **)(v4 + 32);
LABEL_5:
    for ( i = 0LL; i != v7; ++i )
    {
      v30 = v8[i];
      v32 = *(__int64 **)&v30->fields.method;
      v31 = *(_QWORD *)&v30->fields.extra_arg;
      v33 = *(void (__fastcall **)(System_Collections_Hashtable_o *, __int64))&v30->fields.method_ptr;
      if ( *(__int16 *)(v31 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v30->fields.extra_arg, hash, method, v3);
      v34 = sub_B2C38C(v31);
      v35 = *(unsigned __int8 *)(v31 + 74);
      if ( (v34 & 1) != 0 )
      {
        if ( v35 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v35 != 1 )
        {
          if ( *(__int16 *)(v31 + 72) != -1 && this->fields.m_target )
          {
            v44 = sub_B2C384(v31);
            v45 = sub_B2C788(v31);
            if ( (v44 & 1) != 0 )
            {
              if ( (v45 & 1) != 0 )
              {
                klass = hash->klass;
                v48 = *(_QWORD *)(v31 + 24);
                v49 = *(unsigned __int16 *)(v31 + 72);
                if ( *(_WORD *)&hash->klass->_2.bitflags1 )
                {
                  v50 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v48 )
                  {
                    ++v50;
                    p_offset += 4;
                    if ( v50 >= *(unsigned __int16 *)&hash->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v49);
                }
                else
                {
LABEL_57:
                  v26 = sub_AC5258(hash, v48, v49, v46);
                }
                v17 = *(_QWORD *)(v26 + 8);
              }
              else
              {
                v17 = *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72));
              }
              v27 = (void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))sub_B2C40C(v17, v31);
              (*v27)(hash, v27);
            }
            else
            {
              v10 = *(unsigned __int16 *)(v31 + 72);
              if ( (v45 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v31);
                v13 = hash->klass;
                if ( *(_WORD *)&hash->klass->_2.bitflags1 )
                {
                  v14 = 0LL;
                  v15 = &v13->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v15 - 1) != class_0 )
                  {
                    ++v14;
                    v15 += 4;
                    if ( v14 >= *(unsigned __int16 *)&hash->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v16 = (__int64)(&v13->vtable._0_Equals.method + 2 * (int)(*v15 + v10));
                }
                else
                {
LABEL_11:
                  v16 = sub_AC5258(hash, class_0, v10, v12);
                }
                (*(void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))v16)(hash, *(_QWORD *)(v16 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))&hash->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v31 + 72)))(
                  hash,
                  *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v31 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v33(hash, v31);
          continue;
        }
        if ( !v32 )
          goto LABEL_58;
        if ( *(__int16 *)(v31 + 72) != -1 && (*(_BYTE *)(*v32 + 277) & 1) == 0 && this->fields.m_target )
        {
          v36 = sub_B2C384(v31);
          v37 = sub_B2C788(v31);
          if ( (v36 & 1) != 0 )
          {
            if ( (v37 & 1) != 0 )
            {
              v39 = *v32;
              v40 = *(_QWORD *)(v31 + 24);
              v41 = *(unsigned __int16 *)(v31 + 72);
              if ( *(_WORD *)(*v32 + 298) )
              {
                v42 = 0LL;
                v43 = (_DWORD *)(*(_QWORD *)(v39 + 176) + 8LL);
                while ( *((_QWORD *)v43 - 1) != v40 )
                {
                  ++v42;
                  v43 += 4;
                  if ( v42 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_48;
                }
                v28 = v39 + 16LL * (*v43 + (int)v41) + 312;
              }
              else
              {
LABEL_48:
                v28 = sub_AC5258(v32, v40, v41, v38);
              }
              v25 = *(_QWORD *)(v28 + 8);
            }
            else
            {
              v25 = *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320);
            }
            v29 = (void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))sub_B2C40C(v25, v31);
            (*v29)(v32, hash, v29);
          }
          else
          {
            v18 = *(unsigned __int16 *)(v31 + 72);
            if ( (v37 & 1) != 0 )
            {
              v19 = j_il2cpp_method_get_class_0(v31);
              v21 = *v32;
              if ( *(_WORD *)(*v32 + 298) )
              {
                v22 = 0LL;
                v23 = (_DWORD *)(*(_QWORD *)(v21 + 176) + 8LL);
                while ( *((_QWORD *)v23 - 1) != v19 )
                {
                  ++v22;
                  v23 += 4;
                  if ( v22 >= *(unsigned __int16 *)(*v32 + 298) )
                    goto LABEL_19;
                }
                v24 = v21 + 16LL * (int)(*v23 + v18) + 312;
              }
              else
              {
LABEL_19:
                v24 = sub_AC5258(v32, v19, v18, v20);
              }
              (*(void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))v24)(
                v32,
                hash,
                *(_QWORD *)(v24 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))(*v32
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v31 + 72)
                                                                                          + 312))(
                v32,
                hash,
                *(_QWORD *)(*v32 + 16LL * *(unsigned __int16 *)(v31 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_Collections_Hashtable_o *, __int64))v33)(v32, hash, v31);
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

  if ( (byte_4186A22 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, key);
    byte_4186A22 = 1;
  }
  table = this->fields.table;
  p_table = (BattleServantConfConponent_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_38345656(v10, 0LL);
    p_table->klass = (BattleServantConfConponent_c *)v10;
    sub_B2C2F8(p_table, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_B2C434(0LL, v17);
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
    sub_B2C434(this, method);
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

  if ( (byte_4186A23 & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
    byte_4186A23 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B2C434(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v9, 0LL);
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


void __fastcall BattleActorControl__DestroyAuraEffect_d__319___ctor(
        BattleActorControl__DestroyAuraEffect_d__319_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__319__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__319_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyAuraEffect_d__319_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  BattleActorControl__DestroyAuraEffect_d__319_o **p_effectObject; // x22
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array **v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x8
  int aliveCount_5__3; // w8
  int32_t *p_aliveCount_5__3; // x21
  struct UnityEngine_ParticleSystem_array *v25; // x22
  __int64 v26; // x8
  unsigned __int64 v27; // x23
  UnityEngine_Object_o *v28; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  BattleServantConfConponent_o *p_particleArray_5__2; // x19
  BattleActorControl__DestroyAuraEffect_d__319_o *v32; // x19
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__319_o *v34; // x19
  unsigned __int64 v35; // x24
  UnityEngine_Object_o *v36; // x20
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v38; // x8
  BattleActorControl__DestroyAuraEffect_d__319_o *v39; // x20
  unsigned __int64 v40; // x25
  UnityEngine_Object_o *v41; // x21
  BattleActorControl__DestroyAuraEffect_d__319_o *v42; // x19
  __int64 v43; // x0

  v8 = this;
  if ( (byte_4186C1A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288, v10);
    this = (BattleActorControl__DestroyAuraEffect_d__319_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4186C1A = 1;
  }
  _1__state = v8->fields.__1__state;
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
    p_effectObject = (BattleActorControl__DestroyAuraEffect_d__319_o **)&v8->fields.effectObject;
    this = (BattleActorControl__DestroyAuraEffect_d__319_o *)v8->fields.effectObject;
    v8->fields.__1__state = -1;
    if ( !this )
      goto LABEL_68;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_srcLineSprite,
                                                               0LL,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_68;
      if ( *(&Component_srcLineSprite->fields.mtIsUpdate + 2) )
      {
LABEL_33:
        v32 = *p_effectObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v32, 0LL, 0LL) )
        {
          this = *p_effectObject;
          if ( *p_effectObject )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____67435288);
            if ( this )
            {
              _2__current = this->fields.__2__current;
              v34 = this;
              if ( (int)_2__current >= 1 )
              {
                v35 = 0LL;
                while ( 1 )
                {
                  if ( v35 >= (unsigned int)_2__current )
                    goto LABEL_67;
                  v36 = (UnityEngine_Object_o *)*((_QWORD *)&v34->fields.effectObject + v35);
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_Object__op_Equality(
                                                                             v36,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v36 )
                      goto LABEL_68;
                    materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                      (UnityEngine_Renderer_o *)v36,
                                                                      0LL);
                    this = (BattleActorControl__DestroyAuraEffect_d__319_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_Renderer__get_materials(
                                                                                 (UnityEngine_Renderer_o *)v36,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_68;
                      v38 = this->fields.__2__current;
                      v39 = this;
                      if ( (int)v38 >= 1 )
                        break;
                    }
                  }
LABEL_61:
                  LODWORD(_2__current) = v34->fields.__2__current;
                  if ( (__int64)++v35 >= (int)_2__current )
                    goto LABEL_62;
                }
                v40 = 0LL;
                while ( v40 < (unsigned int)v38 )
                {
                  v41 = (UnityEngine_Object_o *)*((_QWORD *)&v39->fields.effectObject + v40);
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_Object__op_Equality(
                                                                             v41,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__Destroy_35314896(v41, 0LL);
                  }
                  LODWORD(v38) = v39->fields.__2__current;
                  if ( (__int64)++v40 >= (int)v38 )
                    goto LABEL_61;
                }
LABEL_67:
                v43 = sub_B2C460(this);
                sub_B2C400(v43, 0LL);
              }
LABEL_62:
              v42 = *p_effectObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_35314896((UnityEngine_Object_o *)v42, 0LL);
              return 0;
            }
          }
LABEL_68:
          sub_B2C434(this, method);
        }
        return 0;
      }
    }
    this = *p_effectObject;
    if ( !*p_effectObject )
      goto LABEL_68;
    v15 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   (UnityEngine_GameObject_o *)this,
                                   1,
                                   (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v15;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v15, v16, v17, v18, v19, v20, v21);
    particleArray_5__2 = v8->fields._particleArray_5__2;
    if ( !particleArray_5__2 )
      goto LABEL_68;
    aliveCount_5__3 = particleArray_5__2->max_length;
    v8->fields._aliveCount_5__3 = aliveCount_5__3;
    p_aliveCount_5__3 = &v8->fields._aliveCount_5__3;
  }
  if ( aliveCount_5__3 <= 0 )
  {
    v8->fields._particleArray_5__2 = 0LL;
    p_particleArray_5__2 = (BattleServantConfConponent_o *)&v8->fields._particleArray_5__2;
    sub_B2C2F8(p_particleArray_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    p_effectObject = (BattleActorControl__DestroyAuraEffect_d__319_o **)&p_particleArray_5__2[-1].fields.isOpenAfter;
    goto LABEL_33;
  }
  v25 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !v25 )
    goto LABEL_68;
  v26 = *(_QWORD *)&v25->max_length;
  if ( (int)v26 >= 1 )
  {
    v27 = 0LL;
    while ( v27 < (unsigned int)v26 )
    {
      v28 = (UnityEngine_Object_o *)v25->m_Items[v27];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v28 )
          goto LABEL_68;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v28, 0LL) )
          UnityEngine_ParticleSystem__Stop_50259500((UnityEngine_ParticleSystem_o *)v28, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__319_o *)UnityEngine_ParticleSystem__IsAlive_50259800(
                                                                   (UnityEngine_ParticleSystem_o *)v28,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v26) = v25->max_length;
      if ( (__int64)++v27 >= (int)v26 )
        goto LABEL_31;
    }
    goto LABEL_67;
  }
LABEL_31:
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__319__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__319_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__319__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__319_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__DestroyAuraEffect_d__319_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__319__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__319_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__319__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__319_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__345___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__345_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__345__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__345_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyEffectOnParticleStop_d__345_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Int32_array **v14; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int aliveCount_5__3; // w8
  int32_t *p_aliveCount_5__3; // x21
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x22
  __int64 v25; // x8
  unsigned __int64 v26; // x23
  UnityEngine_Object_o *v27; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 v30; // x0

  v8 = this;
  if ( (byte_4186C1B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272, v10);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_4186C1B = 1;
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
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_36;
    v14 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   (UnityEngine_GameObject_o *)this,
                                   1,
                                   (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____67435272);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v14;
    p_particleArray_5__2 = &v8->fields._particleArray_5__2;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v14, v16, v17, v18, v19, v20, v21);
    if ( !v8->fields._particleArray_5__2 )
      goto LABEL_33;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    sub_B2C434(this, method);
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_36;
  v25 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v25 >= 1 )
  {
    v26 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)v25 )
      {
        v30 = sub_B2C460(this);
        sub_B2C400(v30, 0LL);
      }
      v27 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v26];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)UnityEngine_Object__op_Equality(v27, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v27 )
          goto LABEL_36;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v27, 0LL) )
          UnityEngine_ParticleSystem__Stop_50259500((UnityEngine_ParticleSystem_o *)v27, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__345_o *)UnityEngine_ParticleSystem__IsAlive_50259800(
                                                                             (UnityEngine_ParticleSystem_o *)v27,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v25) = particleArray_5__2->max_length;
      ++v26;
    }
    while ( (__int64)v26 < (int)v25 );
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__345__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__345_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__345__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__345_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__345_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__345__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__345_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__345__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__345_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__259___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__259__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v21; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v23; // x0
  struct BattlePerformance_o *v24; // x8
  UnityEngine_Transform_o *transform; // x20
  int v26; // s0
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  BattleServantData_o *v31; // x20
  int v32; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *v34; // x20
  unsigned __int64 v35; // x26
  BattleActorControl_o *ServantActor; // x21
  struct BattleServantData_o *v37; // x8
  System_String_o *v38; // x0
  System_String_o *v39; // x0
  WebViewManager_o *Instance; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v41; // x21
  struct BattlePerformance_o *v42; // x8
  int i_5__2; // w8
  UnityEngine_WaitForEndOfFrame_o *v44; // x19
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleServantConfConponent_o *v52; // x20
  __int64 v53; // x0
  int v54; // [xsp+Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_4186C1C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_USSequencer___ctor__, method);
    sub_B2C35C(&System_Action_USSequencer__TypeInfo, v9);
    sub_B2C35C(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__, v10);
    sub_B2C35C(&BattlePerformance_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_13342/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v15);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)sub_B2C35C(&StringLiteral_23190/*"wait"*/, v16);
    byte_4186C1C = 1;
  }
  v54 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)BattleServantData__IsTDAppearance(
                                                                         (BattleServantData_o *)this,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          battleSvtData = _4__this->fields.battleSvtData;
          if ( !battleSvtData )
            goto LABEL_57;
          battleSvtData->fields.dressDispId = -1;
          v21 = _4__this->fields.battleSvtData;
          if ( !v21 )
            goto LABEL_57;
          v21->fields.isForceAppearance = 0;
        }
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v23 = BattlePerformance_TypeInfo;
              if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v23 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v23->static_fields->DefaultFov, 0LL);
              v24 = _4__this->fields.performance;
              if ( v24 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)v24->fields.actorcamera;
                if ( this )
                {
                  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                  *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
                    v54 = 1;
                    v29 = System_Int32__ToString((int32_t)&v54, 0LL);
                    v30 = System_String__Concat_44305532((System_String_o *)StringLiteral_13342/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v29, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)ConstantMaster__getValue(v30, 0LL);
                    v31 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_45:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v31 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v31->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v31,
                          this,
                          _4__this,
                          v31->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v41 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_USSequencer__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v41,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          (const MethodInfo_24BBAD8 *)Method_System_Action_USSequencer___ctor__);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v41,
                            0LL);
                          v42 = _4__this->fields.performance;
                          if ( v42 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)v42->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)BattleData__getStageEntity(
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
                      v32 = (int)this;
                      while ( 1 )
                      {
                        if ( !v31 )
                          goto LABEL_57;
                        if ( v32 == BattleServantData__getSvtId(v31, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_57;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_57;
                          _2__current = this->fields.__2__current;
                          v34 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_44:
                        ++v54;
                        v38 = System_Int32__ToString((int32_t)&v54, 0LL);
                        v39 = System_String__Concat_44305532((System_String_o *)StringLiteral_13342/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v38, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)ConstantMaster__getValue(
                                                                                         v39,
                                                                                         0LL);
                        v31 = _4__this->fields.battleSvtData;
                        v32 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_45;
                      }
                      v35 = 0LL;
                      while ( 1 )
                      {
                        if ( v35 >= (unsigned int)_2__current )
                        {
                          v53 = sub_B2C460(this);
                          sub_B2C400(v53, 0LL);
                        }
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v34->fields.__4__this + v35),
                                         0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].klass) )
                          {
                            LOBYTE(this[17].klass) = 0;
                            v37 = ServantActor->fields.battleSvtData;
                            if ( !v37 )
                              break;
                            v37->fields.isSleepWaitModeReady = 1;
                            BattleActorControl__playAnimation_32449920(
                              ServantActor,
                              (System_String_o *)StringLiteral_23190/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_32449920(
                              ServantActor,
                              (System_String_o *)StringLiteral_23190/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v34->fields.__2__current;
                        if ( (__int64)++v35 >= (int)_2__current )
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
    sub_B2C434(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v8->fields._i_5__2;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= 3 )
    {
      v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v44, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v44;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v44, v46, v47, v48, v49, v50, v51);
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
  v52 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B2C2F8(v52, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&v52[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__259__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__259__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__259_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__259__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__259__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__259_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186C12 & 1) == 0 )
  {
    sub_B2C35C(&BattleActorControl___c_TypeInfo, v1);
    byte_4186C12 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActorControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__130_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__130_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4186C14 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_B2C35C(
                                         &System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo,
                                         x);
    byte_4186C14 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  klass = x->klass;
  if ( *(_WORD *)&x->klass->_2.bitflags1 )
  {
    v6 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_string__BattleActorAnimationEffect__c **)p_offset - 1) != System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo )
    {
      ++v6;
      p_offset += 4;
      if ( v6 >= *(unsigned __int16 *)&x->klass->_2.bitflags1 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_AC5258(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL, v3);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__130_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4186C15 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, x);
    byte_4186C15 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__186_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__358_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.isSaveAnimation;
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__359_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__359_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__129_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *v5; // x20

  if ( (byte_4186C13 & 1) == 0 )
  {
    sub_B2C35C(&BattleFBXComponent_TypeInfo, x);
    this = (BattleActorControl___c_o *)sub_B2C35C(&StringLiteral_16879/*"body"*/, v4);
    byte_4186C13 = 1;
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
    v5 = (System_String_o *)this;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    }
    if ( !v5 )
      goto LABEL_15;
    if ( System_String__Contains(v5, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16879/*"body"*/, 0LL);
LABEL_15:
      sub_B2C434(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__318_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4186C16 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, *(_QWORD *)&x.fields.key);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    byte_4186C16 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__280_object____cctor(const MethodInfo_1F84DD0 *method)
{
  BattleActorControl___c__280_T__c *klass; // x20
  Il2CppClass *_0_BattleActorControl___c__280_T; // x20
  __int64 v4; // x0
  BattleActorControl___c__280_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleActorControl___c__280_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleActorControl___c__280_T__c *v16; // x19
  Il2CppClass *_2_BattleActorControl___c__280_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(method->klass);
  _0_BattleActorControl___c__280_T = klass->rgctx_data->_0_BattleActorControl___c__280_T_;
  if ( (BYTE2(_0_BattleActorControl___c__280_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_0_BattleActorControl___c__280_T);
  v4 = sub_B2C42C(_0_BattleActorControl___c__280_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AC505C(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleActorControl___c__280_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AC505C(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleActorControl___c__280_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AC505C(v16);
  _2_BattleActorControl___c__280_T = v16->rgctx_data->_2_BattleActorControl___c__280_T_;
  if ( (BYTE2(_2_BattleActorControl___c__280_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(_2_BattleActorControl___c__280_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleActorControl___c__280_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleActorControl___c__280_object____ctor(
        BattleActorControl___c__280_T__o *this,
        const MethodInfo_1F84EAC *method)
{
  if ( !this )
    sub_B2C434(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__280_object____UpdateMaterialsOnRenderders_b__280_0(
        BattleActorControl___c__280_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F84EC4 *method)
{
  if ( (byte_418BCFF & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_418BCFF = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__280_object____UpdateMaterialsOnRenderders_b__280_1(
        BattleActorControl___c__280_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_1F84F2C *method)
{
  if ( (byte_418BD00 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, x);
    byte_418BD00 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass129_0___ctor(
        BattleActorControl___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass129_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_B2C434(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass130_0___ctor(
        BattleActorControl___c__DisplayClass130_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass130_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass130_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_B2C434(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, method);
}


void __fastcall BattleActorControl___c__DisplayClass158_0___ctor(
        BattleActorControl___c__DisplayClass158_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass158_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass158_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4186C17 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_FsmTransition___, fsm);
    sub_B2C35C(&Method_System_Func_FsmTransition__bool___ctor__, v5);
    sub_B2C35C(&System_Func_FsmTransition__bool__TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass158_0__ExistMotionEvent_b__1__, v8);
    byte_4186C17 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v9 )
    return 0;
  if ( !fsm )
    sub_B2C434(v9, v10);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v13 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_B2C42C(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass158_0__ExistMotionEvent_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_FsmTransition__bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v13,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_1726758 *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass158_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass158_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_B2C434(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass267_0___ctor(
        BattleActorControl___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass267_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass267_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass267_0_o *v2; // x19
  __int64 v3; // x1
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v7; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v9; // x20
  int32_t shadowEffectId; // w22
  UnityEngine_GameObject_o *v11; // x21
  UnityEngine_GameObject_o *v12; // x23
  int32_t v13; // w24
  int32_t LimitCount; // w25
  System_Int32_array **EffectToNode_23035704; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct BattleActorControl_o *v22; // x8
  UnityEngine_Object_o *v23; // x20
  struct BattleActorControl_o *v24; // x8
  UnityEngine_Transform_o *transform; // x20
  int v26; // s0
  struct BattleActorControl_o *v29; // x8
  UnityEngine_Transform_o *v30; // x20
  int v31; // s0
  struct BattleActorControl_o *v35; // x8
  UnityEngine_Transform_o *v36; // x20
  int v37; // s0
  struct BattleActorControl_o *v40; // x8

  v2 = this;
  if ( (byte_4186C18 & 1) == 0 )
  {
    sub_B2C35C(&BattleEffectUtility_TypeInfo, method);
    this = (BattleActorControl___c__DisplayClass267_0_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v3);
    byte_4186C18 = 1;
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
    this = (BattleActorControl___c__DisplayClass267_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_45;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl___c__DisplayClass267_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v2->fields.__4__this;
      if ( !v7 )
        goto LABEL_45;
      if ( v7->fields.currentSpShadowEffectId == v2->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v7->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleActorControl___c__DisplayClass267_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v9 = v2->fields.__4__this;
          if ( !v9 )
            goto LABEL_45;
          this = (BattleActorControl___c__DisplayClass267_0_o *)v9->fields.shadowObj;
          if ( !this )
            goto LABEL_45;
          this = (BattleActorControl___c__DisplayClass267_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_45;
          shadowEffectId = v2->fields.shadowEffectId;
          v11 = (UnityEngine_GameObject_o *)this;
          this = (BattleActorControl___c__DisplayClass267_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_45;
          v12 = (UnityEngine_GameObject_o *)this;
          this = (BattleActorControl___c__DisplayClass267_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_45;
          v13 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0LL);
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          EffectToNode_23035704 = (System_Int32_array **)BattleEffectUtility__loadEffectToNode_23035704(
                                                           v11,
                                                           shadowEffectId,
                                                           v12,
                                                           v13,
                                                           LimitCount,
                                                           0LL);
          v9->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)EffectToNode_23035704;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v9->fields.specialShadowObj,
            EffectToNode_23035704,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          v22 = v2->fields.__4__this;
          if ( !v22 )
            goto LABEL_45;
          v23 = (UnityEngine_Object_o *)v22->fields.specialShadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleActorControl___c__DisplayClass267_0_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v24 = v2->fields.__4__this;
            if ( v24 )
            {
              this = (BattleActorControl___c__DisplayClass267_0_o *)v24->fields.specialShadowObj;
              if ( this )
              {
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v26, 0LL);
                  v29 = v2->fields.__4__this;
                  if ( v29 )
                  {
                    this = (BattleActorControl___c__DisplayClass267_0_o *)v29->fields.specialShadowObj;
                    if ( this )
                    {
                      v30 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                      *(UnityEngine_Quaternion_o *)&v31 = UnityEngine_Quaternion__get_identity(0LL);
                      if ( v30 )
                      {
                        UnityEngine_Transform__set_localRotation(v30, *(UnityEngine_Quaternion_o *)&v31, 0LL);
                        v35 = v2->fields.__4__this;
                        if ( v35 )
                        {
                          this = (BattleActorControl___c__DisplayClass267_0_o *)v35->fields.specialShadowObj;
                          if ( this )
                          {
                            v36 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                            *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Vector3__get_one(0LL);
                            if ( v36 )
                            {
                              UnityEngine_Transform__set_localScale(v36, *(UnityEngine_Vector3_o *)&v37, 0LL);
                              v40 = v2->fields.__4__this;
                              if ( v40 )
                              {
                                this = (BattleActorControl___c__DisplayClass267_0_o *)v40->fields.specialShadowObj;
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
            sub_B2C434(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass279_0___ctor(
        BattleActorControl___c__DisplayClass279_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass279_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass279_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass279_0_o *v4; // x20

  v4 = this;
  if ( (byte_4186C19 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass279_0_o *)sub_B2C35C(&StringLiteral_16144/*"_fade"*/, material);
    byte_4186C19 = 1;
  }
  if ( !material )
    sub_B2C434(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16144/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass317_0___ctor(
        BattleActorControl___c__DisplayClass317_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass317_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass317_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass358_0___ctor(
        BattleActorControl___c__DisplayClass358_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass358_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass358_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass358_0_o *)this->fields.component) == 0LL )
    sub_B2C434(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass361_0___ctor(
        BattleActorControl___c__DisplayClass361_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass361_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass361_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass361_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass361_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__317___ctor(
        BattleActorControl__coAddAura_d__317_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__317__MoveNext(
        BattleActorControl__coAddAura_d__317_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__coAddAura_d__317_o *v8; // x19
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *Item; // x21
  System_Int32_array **Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x22
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  Il2CppObject *v38; // x23
  BattleServantConfConponent_o *p__8__1; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  int32_t id; // w22
  Il2CppObject *klass; // x24
  System_Action_o *v48; // x23
  BattlePerformance_o *v49; // x24
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  System_String_o **p_effectPath_5__3; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  BattleServantConfConponent_o *v59; // x19
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *static_fields; // x8
  System_Int32_array **Empty; // x1
  int v75; // w22
  int32_t WeaponGroup; // w0
  Il2CppObject *v77; // x22
  Il2CppObject *v78; // x0
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  BattleEffectUtility_BuffEffectLoadArgument_o *v86; // x21
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *actorcamera; // x1
  Il2CppObject *v111; // x0
  int32_t v112; // [xsp+Ch] [xbp-64h] BYREF
  int32_t EffectFolder; // [xsp+18h] [xbp-58h] BYREF
  int32_t v114; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4186C1D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v9);
    sub_B2C35C(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EffectMaster___, v11);
    sub_B2C35C(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v15);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_BillBoard___, v16);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v17);
    sub_B2C35C(&int_TypeInfo, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v20);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B2C35C(&string_TypeInfo, v22);
    sub_B2C35C(&Method_BattleActorControl___c__DisplayClass317_0__coAddAura_b__0__, v23);
    sub_B2C35C(&BattleActorControl___c__DisplayClass317_0_TypeInfo, v24);
    sub_B2C35C(&StringLiteral_5863/*"Effect/weapon/{0}"*/, v25);
    this = (BattleActorControl__coAddAura_d__317_o *)sub_B2C35C(&StringLiteral_5864/*"Effect/weapon/{0}/{1}"*/, v26);
    byte_4186C1D = 1;
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
    this = (BattleActorControl__coAddAura_d__317_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_68;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
           v8->fields.auraEffectId,
           (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__317_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_68;
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                       v8->fields.auraEffectId,
                                       (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__317_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_68;
    this = (BattleActorControl__coAddAura_d__317_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_68;
    Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      v8->fields.auraEffectId,
                                      (const MethodInfo_24E40D0 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    p_effectEntity_5__2 = &v8->fields._effectEntity_5__2;
    v8->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._effectEntity_5__2, Entity, v32, v33, v34, v35, v36, v37);
    if ( !v8->fields._effectEntity_5__2 )
    {
LABEL_43:
      v86 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B2C42C(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v86, _4__this, 0LL);
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
        v116.fields.x = x;
        v116.fields.y = y;
        v116.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v116,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v86,
                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleActorControl__coAddAura_d__317_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
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
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleActorControl__coAddAura_d__317_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__317_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_68;
            Component_srcLineSprite = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_68;
            actorcamera = (Il2CppObject *)performance->fields.actorcamera;
            this->fields.__2__current = actorcamera;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)actorcamera,
              v103,
              v104,
              v105,
              v106,
              v107,
              v108);
          }
          else if ( !Component_srcLineSprite )
          {
            goto LABEL_68;
          }
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__317_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
              v8->fields.auraEffectId,
              (WarBoardAIRoute_RouteData_o *)EffectToNode,
              (const MethodInfo_2E64724 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_64:
            v8->fields._effectEntity_5__2 = 0LL;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v8->fields._effectEntity_5__2,
              0LL,
              v96,
              v97,
              v98,
              v99,
              v100,
              v101);
            return 0;
          }
        }
      }
LABEL_68:
      sub_B2C434(this, method);
    }
    v38 = (Il2CppObject *)sub_B2C42C(BattleActorControl___c__DisplayClass317_0_TypeInfo);
    System_Object___ctor(v38, 0LL);
    v8->fields.__8__1 = (struct BattleActorControl___c__DisplayClass317_0_o *)v38;
    p__8__1 = (BattleServantConfConponent_o *)&v8->fields.__8__1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v8->fields.__8__1,
      (System_Int32_array **)v38,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    if ( !v8->fields.__8__1 )
      goto LABEL_68;
    v8->fields.__8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_68;
    id = (*p_effectEntity_5__2)->fields.id;
    klass = (Il2CppObject *)p__8__1->klass;
    v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v48, klass, Method_BattleActorControl___c__DisplayClass317_0__coAddAura_b__0__, 0LL);
    v49 = _4__this->fields.performance;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v48, v49, 0LL);
  }
  if ( !p__8__1->klass )
    goto LABEL_68;
  if ( LOBYTE(p__8__1->klass->_1.name) )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B2C2F8(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    return result;
  }
  v8->fields.__8__1 = 0LL;
  sub_B2C2F8(p__8__1, 0LL, v2, v3, v4, v5, v6, v7);
  effectEntity_5__2 = v8->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_43;
  static_fields = string_TypeInfo->static_fields;
  Empty = (System_Int32_array **)static_fields->Empty;
  v8->fields._effectPath_5__3 = static_fields->Empty;
  p_effectPath_5__3 = &v8->fields._effectPath_5__3;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._effectPath_5__3, Empty, v66, v67, v68, v69, v70, v71);
  if ( !_4__this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__317_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__317_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_68;
  v75 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v75 )
  {
    v114 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__317_o *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_68;
    v77 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder);
    v79 = (System_Int32_array **)System_String__Format_44301068((System_String_o *)StringLiteral_5864/*"Effect/weapon/{0}/{1}"*/, v77, v78, 0LL);
  }
  else
  {
    v112 = WeaponGroup;
    v111 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v112);
    v79 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_5863/*"Effect/weapon/{0}"*/, v111, 0LL);
  }
  *p_effectPath_5__3 = (System_String_o *)v79;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._effectPath_5__3, v79, v80, v81, v82, v83, v84, v85);
LABEL_28:
  this = (BattleActorControl__coAddAura_d__317_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__317_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     *p_effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8->fields.__2__current = 0LL;
    v59 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B2C2F8(v59, 0LL, v53, v54, v55, v56, v57, v58);
    *(_DWORD *)&v59[-1].fields.isOpenAfter = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__317_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_68;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v8->fields.auraEffectId,
          (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    *p_effectPath_5__3 = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_effectPath_5__3, 0LL, v60, v61, v62, v63, v64, v65);
    goto LABEL_43;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__317__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__317_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__317__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__317_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__coAddAura_d__317_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__317__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__317_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__317__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__317_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__324___ctor(
        BattleActorControl__colShiftServantChange_d__324_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__colShiftServantChange_d__324__MoveNext(
        BattleActorControl__colShiftServantChange_d__324_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colShiftServantChange_d__324_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **Component_srcLineSprite; // x0
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
  NGUIFader_o *fadeComp_5__2; // x20
  int v25; // s0
  DefCoroutine_c *v29; // x0
  System_Int32_array **milliSecTwo; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct BattleActionData_ShiftServant_o *v33; // x8
  System_Int32_array **v34; // x0
  BattleServantConfConponent_o *v35; // x19
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  int v42; // w8
  System_Int32_array **v43; // x0
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *v51; // x21
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *gameObject; // x20
  System_Int32_array **v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  BattleServantConfConponent_o *p_moveEffect_5__3; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
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
  if ( (byte_4186C1F & 1) == 0 )
  {
    sub_B2C35C(&DefCoroutine_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v4);
    sub_B2C35C(&int_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    this = (BattleActorControl__colShiftServantChange_d__324_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v7);
    byte_4186C1F = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)v2->fields.shiftSvt;
      if ( !this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__324_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      shiftSvt = v2->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_82;
      if ( !shiftSvt->fields.isChange )
        return 0;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_82;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v2->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_srcLineSprite;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v2->fields._fadeComp_5__2,
        Component_srcLineSprite,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      if ( !v2->fields.isShift )
        goto LABEL_13;
      fadeComp_5__2 = v2->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
      if ( !fadeComp_5__2 )
        goto LABEL_82;
      NGUIFader__FadeStart(fadeComp_5__2, *(UnityEngine_Color_o *)&v25, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v29 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v29 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (System_Int32_array **)v29->static_fields->milliSecTwo;
      v2->fields.__2__current = (Il2CppObject *)milliSecTwo;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, milliSecTwo, v18, v19, v20, v21, v22, v23);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_82;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_82;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v113 = 0;
      v75 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113);
      v2->fields.__2__current = (Il2CppObject *)v75;
      v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v35, v75, v76, v77, v78, v79, v80, v81);
      v42 = 2;
      goto LABEL_78;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      v33 = v2->fields.shiftSvt;
      if ( !v33 )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_82;
      BattlePerformance__unloadServantSet_18673736((BattlePerformance_o *)this, v33->fields.loadedAssetArgs, 0, 0LL);
      v113 = 0;
      v34 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113);
      v2->fields.__2__current = (Il2CppObject *)v34;
      v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v35, v34, v36, v37, v38, v39, v40, v41);
      v42 = 3;
      goto LABEL_78;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_82;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_25:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colShiftServantChange_d__324_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v113 = 0;
        v43 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113);
        v2->fields.__2__current = (Il2CppObject *)v43;
        v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v35, v43, v44, v45, v46, v47, v48, v49);
        v42 = 4;
LABEL_78:
        *(_DWORD *)&v35[-1].fields.isOpenAfter = v42;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_82;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_42;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_82;
      v51 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)this,
                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
        goto LABEL_42;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v51, 0LL);
LABEL_42:
        v52 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v2->fields._moveEffect_5__3 = (struct System_Collections_Generic_List_int__o *)v52;
        sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3, v52, v53, v54, v55, v56, v57, v58);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
          {
            v112 = sub_B2C460(this);
            sub_B2C400(v112, 0LL);
          }
          this = (BattleActorControl__colShiftServantChange_d__324_o *)motionFSM->m_Items[0];
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
            UnityEngine_Object__DestroyImmediate_35315108(gameObject, 0LL);
            v113 = 0;
            v61 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113);
            v2->fields.__2__current = (Il2CppObject *)v61;
            v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
            sub_B2C2F8(v35, v61, v62, v63, v64, v65, v66, v67);
            v42 = 5;
            goto LABEL_78;
          }
        }
      }
      goto LABEL_82;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_25;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_58:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colShiftServantChange_d__324_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v113 = 0;
        v82 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113);
        v2->fields.__2__current = (Il2CppObject *)v82;
        v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v35, v82, v83, v84, v85, v86, v87, v88);
        v42 = 6;
        goto LABEL_78;
      }
      if ( !_4__this )
        goto LABEL_82;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v2->fields.isShift )
        goto LABEL_67;
      v89 = v2->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v90 = UnityEngine_Color__get_white(0LL);
      if ( !v89 )
        goto LABEL_82;
      NGUIFader__FadeStart(v89, *(UnityEngine_Color_o *)&v90, 0.2, 1, 0LL, 0, 0LL);
LABEL_67:
      this = (BattleActorControl__colShiftServantChange_d__324_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__324_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_76;
      v94 = _4__this->fields.performance;
      if ( !v94
        || (battleSvtData = _4__this->fields.battleSvtData) == 0LL
        || (this = (BattleActorControl__colShiftServantChange_d__324_o *)v94->fields.data) == 0LL
        || (BattleData__replaceCommandCard(
              (BattleData_o *)this,
              battleSvtData->fields.uniqueId,
              battleSvtData->fields.uniqueId,
              0LL),
            (v96 = _4__this->fields.performance) == 0LL)
        || (data = v96->fields.data) == 0LL
        || (this = (BattleActorControl__colShiftServantChange_d__324_o *)data->fields.logic) == 0LL )
      {
LABEL_82:
        sub_B2C434(this, method);
      }
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_76:
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      if ( v2->fields._moveEffect_5__3 )
      {
        v113 = 0;
        v98 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v113);
        v2->fields.__2__current = (Il2CppObject *)v98;
        v35 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v35, v98, v99, v100, v101, v102, v103, v104);
        v42 = 7;
        goto LABEL_78;
      }
LABEL_79:
      v2->fields._fadeComp_5__2 = 0LL;
      p_fadeComp_5__2 = (BattleServantConfConponent_o *)&v2->fields._fadeComp_5__2;
      sub_B2C2F8(p_fadeComp_5__2, 0LL, v69, v70, v71, v72, v73, v74);
      p_fadeComp_5__2->monitor = 0LL;
      sub_B2C2F8(p_moveEffect_5__3, 0LL, v106, v107, v108, v109, v110, v111);
      return 0;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_58;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_79;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__324__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__324_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__324__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__324_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__colShiftServantChange_d__324_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__324__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__324_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__324__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__324_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__323___ctor(
        BattleActorControl__colShiftServant_d__323_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__323__MoveNext(
        BattleActorControl__colShiftServant_d__323_o *this,
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
  Il2CppObject *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Action_o *finishCallback; // x0
  int v21; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4186C1E & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    byte_4186C1E = 1;
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
        sub_B2C2F8(
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
      sub_B2C434(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  v21 = 0;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
  this->fields.__2__current = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.__1__state = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__323__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__323_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__323__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__323_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__colShiftServant_d__323_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__323__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__323_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__323__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__323_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__312___ctor(
        BattleActorControl__collChangeAppearance_d__312_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__312__MoveNext(
        BattleActorControl__collChangeAppearance_d__312_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__312_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleActorControl_o *_4__this; // x20
  System_Int32_array **v7; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  bool result; // w0
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  System_Int32_array **v18; // x0
  BattleServantConfConponent_o *v19; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int v26; // w8
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v29; // x0
  BattleServantConfConponent_o *p_moveEffect_5__2; // x19
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
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
  System_Int32_array **v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  int v61; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4186A17 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    this = (BattleActorControl__collChangeAppearance_d__312_o *)sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    byte_4186A17 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__312_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_50;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__312_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_50;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v61 = 0;
      v7 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      v2->fields.__2__current = (Il2CppObject *)v7;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v7, v9, v10, v11, v12, v13, v14);
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
      this = (BattleActorControl__collChangeAppearance_d__312_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_50;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_27;
      this = (BattleActorControl__collChangeAppearance_d__312_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_50;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_27:
      v29 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = (struct System_Collections_Generic_List_int__o *)v29;
      p_moveEffect_5__2 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__2;
      sub_B2C2F8(p_moveEffect_5__2, v29, v31, v32, v33, v34, v35, v36);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v61 = 0;
      v37 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      p_moveEffect_5__2[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v37;
      sub_B2C2F8((BattleServantConfConponent_o *)((char *)p_moveEffect_5__2 - 16), v37, v38, v39, v40, v41, v42, v43);
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
      v61 = 0;
      v18 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v61);
      v2->fields.__2__current = (Il2CppObject *)v18;
      v19 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v19, v18, v20, v21, v22, v23, v24, v25);
      v26 = 3;
      goto LABEL_46;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__312_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_50;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__312_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__312_o *)BattleServantData__UpdateLoadedAssetArgs(
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
      this = (BattleActorControl__collChangeAppearance_d__312_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v61 = 0;
        v47 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v2->fields.__2__current = (Il2CppObject *)v47;
        v19 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v19, v47, v48, v49, v50, v51, v52, v53);
        v26 = 4;
      }
      else
      {
        if ( !_4__this )
LABEL_50:
          sub_B2C434(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( !v2->fields._moveEffect_5__2 )
          return 0;
        v61 = 0;
        v54 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v61);
        v2->fields.__2__current = (Il2CppObject *)v54;
        v19 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v19, v54, v55, v56, v57, v58, v59, v60);
        v26 = 5;
      }
LABEL_46:
      *(_DWORD *)&v19[-1].fields.isOpenAfter = v26;
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


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__312__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__312_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__312__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__312_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__collChangeAppearance_d__312_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__312__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__312_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__312__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__312_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__307___ctor(
        BattleActorControl__colloadDressServant_d__307_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__307__MoveNext(
        BattleActorControl__colloadDressServant_d__307_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__307_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  System_Int32_array **v9; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v20; // x0
  BattleServantConfConponent_o *p_moveEffect_5__3; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
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
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BattleServantConfConponent_o *v55; // x21
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct BattleServantData_o *v62; // x8
  ServantAssetArgs_o *v63; // x21
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Int32_array **v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
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
  int v92; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_4186A18 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_B2C35C(&int_TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v5);
    this = (BattleActorControl__colloadDressServant_d__307_o *)sub_B2C35C(&StringLiteral_5484/*"END_LOAD"*/, v6);
    byte_4186A18 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_62;
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_73;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_73;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v92 = 0;
      v9 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
      v2->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v9, v11, v12, v13, v14, v15, v16);
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
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_73;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_23;
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_73;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_23:
      v20 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__3 = (struct System_Collections_Generic_List_int__o *)v20;
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      sub_B2C2F8(p_moveEffect_5__3, v20, v22, v23, v24, v25, v26, v27);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v92 = 0;
      v28 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
      *(_QWORD *)&p_moveEffect_5__3[-1].fields.isEquip = v28;
      sub_B2C2F8((BattleServantConfConponent_o *)((char *)p_moveEffect_5__3 - 24), v28, v29, v30, v31, v32, v33, v34);
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
        v92 = 0;
        v37 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
        v2->fields.__2__current = (Il2CppObject *)v37;
        v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v38, v37, v39, v40, v41, v42, v43, v44);
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
        v92 = 0;
        v85 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
        v2->fields.__2__current = (Il2CppObject *)v85;
        v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v38, v85, v86, v87, v88, v89, v90, v91);
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
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.battleSvtData;
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
      this = (BattleActorControl__colloadDressServant_d__307_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_58;
      v92 = 0;
      v48 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
      v2->fields.__2__current = (Il2CppObject *)v48;
      v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(v38, v48, v49, v50, v51, v52, v53, v54);
      v45 = 4;
      goto LABEL_63;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_38;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v62 = _4__this->fields.battleSvtData;
      if ( !v62 )
        goto LABEL_73;
      v62->fields.dressDispId = -1;
      this = (BattleActorControl__colloadDressServant_d__307_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      v63 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(v63, 0, 0LL);
LABEL_53:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colloadDressServant_d__307_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v92 = 0;
        v64 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
        v2->fields.__2__current = (Il2CppObject *)v64;
        v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v38, v64, v65, v66, v67, v68, v69, v70);
        v45 = 6;
      }
      else
      {
LABEL_58:
        if ( !_4__this )
LABEL_73:
          sub_B2C434(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        v55 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
        if ( v2->fields._moveEffect_5__3 )
        {
          v92 = 0;
          v71 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
          v2->fields.__2__current = (Il2CppObject *)v71;
          v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B2C2F8(v38, v71, v72, v73, v74, v75, v76, v77);
          v45 = 7;
        }
        else
        {
LABEL_61:
          v55->klass = 0LL;
          sub_B2C2F8(v55, 0LL, v56, v57, v58, v59, v60, v61);
LABEL_62:
          v92 = 0;
          v78 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v92);
          v2->fields.__2__current = (Il2CppObject *)v78;
          v38 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B2C2F8(v38, v78, v79, v80, v81, v82, v83, v84);
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
      v55 = (BattleServantConfConponent_o *)&v2->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_61;
    case 8:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      BattleActorControl__sendEventFSM_32437564(_4__this, (System_String_o *)StringLiteral_5484/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__307__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__307_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__307__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__307_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__colloadDressServant_d__307_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__307__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__307_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__307__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__307_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__305___ctor(
        BattleActorControl__colloadTransformServant_d__305_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__305__MoveNext(
        BattleActorControl__colloadTransformServant_d__305_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadTransformServant_d__305_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v26; // x20
  System_Int32_array **v27; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v37; // x21
  const MethodInfo *v38; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x23
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  _BOOL8 v49; // x0
  __int64 v50; // x1
  Il2CppObject *current; // x8
  struct BattleServantData_o *v52; // x9
  struct BattleServantData_o *v53; // x9
  struct BattlePerformance_o *performance; // x9
  BattleServantData_o *v55; // x0
  System_Int32_array **v56; // x0
  BattleServantConfConponent_o *v57; // x19
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int v64; // w8
  struct BattlePerformance_o *v65; // x8
  struct BattlePerformance_o *v66; // x8
  struct BattlePerformance_o *v67; // x8
  System_Int32_array **v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  __int64 v82; // x0
  System_Collections_Generic_List_Enumerator_T__o v83; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v84; // [xsp+20h] [xbp-50h] BYREF

  v2 = this;
  if ( (byte_4186A19 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__get_Current__, v4);
    sub_B2C35C(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo, v5);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v6);
    sub_B2C35C(&int_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&ServantAssetLoadManager_TypeInfo, v13);
    this = (BattleActorControl__colloadTransformServant_d__305_o *)sub_B2C35C(&StringLiteral_5484/*"END_LOAD"*/, v14);
    byte_4186A19 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_70;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_70;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_70;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_70;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_18:
      v18 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = (struct System_Collections_Generic_List_int__o *)v18;
      sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._moveEffect_5__2, v18, v19, v20, v21, v22, v23, v24);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_70;
      if ( !motionFSM->max_length )
      {
        v82 = sub_B2C460(this);
        sub_B2C400(v82, 0LL);
      }
      v26 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v26, 0LL);
      LODWORD(v83.fields.list) = 0;
      v27 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v83);
      v2->fields.__2__current = (Il2CppObject *)v27;
      p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
      sub_B2C2F8(p__2__current, v27, v29, v30, v31, v32, v33, v34);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      battleSvtData = _4__this->fields.battleSvtData;
      v37 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_B2C42C(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v37, battleSvtData, v38);
      if ( !v37 )
        goto LABEL_70;
      svtId_k__BackingField = v37->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v37->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v37->fields._overwriteSvtVoiceId_k__BackingField;
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
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v42,
          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v42;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (System_Int32_array **)v42,
          v43,
          v44,
          v45,
          v46,
          v47,
          v48);
        this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_70;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_70;
      BattlePerformance__unloadServantSet_18673572((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_70;
      this = (BattleActorControl__colloadTransformServant_d__305_o *)BattleActionData__GetTransformServantList(
                                                                       (BattleActionData_o *)this,
                                                                       0LL);
      if ( !this )
        goto LABEL_70;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v83,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_BattleActionData_TransformServant__GetEnumerator__);
      v84 = v83;
      break;
    case 2:
      v2->fields.__1__state = -1;
      goto LABEL_52;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      goto LABEL_67;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      BattleActorControl__sendEventFSM_32437564(_4__this, (System_String_o *)StringLiteral_5484/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( 1 )
  {
    v49 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v84,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__MoveNext__);
    if ( !v49 )
      break;
    current = v84.fields.current;
    if ( !v84.fields.current )
      sub_B2C434(v49, v50);
    v52 = _4__this->fields.battleSvtData;
    if ( !v52 )
      sub_B2C434(v49, v50);
    if ( LODWORD(v84.fields.current[2].klass) == v52->fields.uniqueId )
    {
      v52->fields.shiftNpcId = -1;
      v53 = _4__this->fields.battleSvtData;
      if ( !v53 )
        sub_B2C434(v49, v50);
      v53->fields.beforeUserSvtId = -1LL;
      performance = _4__this->fields.performance;
      if ( !performance )
        sub_B2C434(v49, v50);
      v55 = _4__this->fields.battleSvtData;
      if ( !v55 )
        sub_B2C434(0LL, v50);
      BattleServantData__setTransformServant(
        v55,
        performance->fields.data,
        HIDWORD(current[1].monitor),
        HIDWORD(current[2].klass),
        0,
        0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v84,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__Dispose__);
  this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_70;
  BattleServantData__changeTransformServant((BattleServantData_o *)this, 0LL);
  this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_52:
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (BattleActorControl__colloadTransformServant_d__305_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__305_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
        v65 = _4__this->fields.performance;
        if ( v65 )
        {
          this = (BattleActorControl__colloadTransformServant_d__305_o *)v65->fields.data;
          if ( this )
          {
            BattleData__transformSvtCommand((BattleData_o *)this, _4__this->fields.battleSvtData, 0LL);
            v66 = _4__this->fields.performance;
            if ( v66 )
            {
              this = (BattleActorControl__colloadTransformServant_d__305_o *)v66->fields.commandPerf;
              if ( this )
              {
                BattlePerformanceCommandCard__UpdateSelectedCommandCardServantFace(
                  (BattlePerformanceCommandCard_o *)this,
                  _4__this->fields.battleSvtData,
                  0LL);
                v67 = _4__this->fields.performance;
                if ( v67 )
                {
                  this = (BattleActorControl__colloadTransformServant_d__305_o *)v67->fields.commandPerf;
                  if ( this )
                  {
                    BattlePerformanceCommandCard__UpdateDrawnCommandCardServantFace(
                      (BattlePerformanceCommandCard_o *)this,
                      _4__this->fields.battleSvtData,
                      0LL);
                    if ( v2->fields._moveEffect_5__2 )
                    {
                      LODWORD(v83.fields.list) = 0;
                      v68 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v83);
                      v2->fields.__2__current = (Il2CppObject *)v68;
                      v57 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                      sub_B2C2F8(v57, v68, v69, v70, v71, v72, v73, v74);
                      v64 = 3;
                    }
                    else
                    {
LABEL_67:
                      LODWORD(v83.fields.list) = 0;
                      v75 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v83);
                      v2->fields.__2__current = (Il2CppObject *)v75;
                      v57 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
                      sub_B2C2F8(v57, v75, v76, v77, v78, v79, v80, v81);
                      v64 = 4;
                    }
                    goto LABEL_68;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_70:
    sub_B2C434(this, method);
  }
  LODWORD(v83.fields.list) = 0;
  v56 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v83);
  v2->fields.__2__current = (Il2CppObject *)v56;
  v57 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
  sub_B2C2F8(v57, v56, v58, v59, v60, v61, v62, v63);
  v64 = 2;
LABEL_68:
  *(_DWORD *)&v57[-1].fields.isOpenAfter = v64;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__305__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__305_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__305__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__305_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__colloadTransformServant_d__305_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__305__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__305_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__305__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__305_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__199___ctor(
        BattleActorControl__coroutinePostCallBack_d__199_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__199__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__199_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v13; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v15; // x1
  Il2CppObject **v16; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v18; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_4186A1A & 1) == 0 )
  {
    sub_B2C35C(&DefCoroutine_TypeInfo, method);
    sub_B2C35C(&UnityEngine_WaitForSeconds_TypeInfo, v9);
    byte_4186A1A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B2C434(0LL, method);
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
    v18 = (UnityEngine_WaitForSeconds_o *)sub_B2C42C(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v18, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v18;
    p__2__current = &this->fields.__2__current;
    sub_B2C2F8((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v18, v20, v21, v22, v23, v24, v25);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v13 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v13 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v13->static_fields;
    v15 = *static_fields;
    this->fields.__2__current = *static_fields;
    v16 = &this->fields.__2__current;
    sub_B2C2F8((BattleServantConfConponent_o *)v16, (System_Int32_array **)v15, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v16 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__199__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__199_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__199__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__199_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__coroutinePostCallBack_d__199_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__199__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__199_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__199__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__199_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__310___ctor(
        BattleActorControl__waitChangeApp_d__310_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__310__MoveNext(
        BattleActorControl__waitChangeApp_d__310_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl__waitChangeApp_d__310_o *v3; // x19
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
    this = (BattleActorControl__waitChangeApp_d__310_o *)this->fields.callback;
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
      started = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_35309748(
                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                         v5,
                                         0LL);
      v3->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
      sub_B2C2F8(p__2__current, started, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_8:
    sub_B2C434(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__310__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__310_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__310__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__310_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_BattleActorControl__waitChangeApp_d__310_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__310__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__310_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__310__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__310_o *this,
        const MethodInfo *method)
{
  ;
}