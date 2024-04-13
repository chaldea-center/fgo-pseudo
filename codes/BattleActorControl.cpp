void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E808B & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_TypeInfo, v1, v2, v3);
    byte_42E808B = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleLogData_o *v48; // x20
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v55; // x20
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Collections_Generic_List_int__o *v62; // x20
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  TranslucentActorVisualInfo_o *v69; // x20
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
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v90; // x20
  System_String_array **v91; // x2
  System_String_array **v92; // x3
  System_Boolean_array **v93; // x4
  System_Int32_array **v94; // x5
  System_Int32_array *v95; // x6
  System_Int32_array *v96; // x7
  System_Collections_Hashtable_o *v97; // x20
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Collections_Hashtable_o *v104; // x20
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v116; // x20
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7

  if ( (byte_42E808A & 1) == 0 )
  {
    sub_B5D5C4(&BattleLogData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&TranslucentActorVisualInfo_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_16426/*"act"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1/*""*/, v38, v39, v40);
    byte_42E808A = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v41 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v41,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v41;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.auraList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  this->fields.actorScale = 1.0;
  v48 = (BattleLogData_o *)sub_B5D694(BattleLogData_TypeInfo);
  BattleLogData___ctor_19672300(v48, (System_String_o *)StringLiteral_16426/*"act"*/, 90, 0LL);
  this->fields.battleLog = v48;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleLog,
    (System_Int32_array **)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v55 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v55,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.buffLoopEffectDict,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v62,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  this->fields.reservedEffectBuffEffectIdList = v62;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.reservedEffectBuffEffectIdList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v69 = (TranslucentActorVisualInfo_o *)sub_B5D694(TranslucentActorVisualInfo_TypeInfo);
  TranslucentActorVisualInfo___ctor(v69, 0LL);
  this->fields.translucentActorVisualInfo = v69;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.translucentActorVisualInfo,
    (System_Int32_array **)v69,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v76, v77, v78, v79, v80, v81, v82);
  v83 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.partAnimationSaveKey, v83, v84, v85, v86, v87, v88, v89);
  v90 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v90,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_BattleActorControl__o *)v90;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.noblePhantasmObjectVisibleCtrList,
    (System_Int32_array **)v90,
    v91,
    v92,
    v93,
    v94,
    v95,
    v96);
  v97 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v97, 0LL);
  this->fields.EventList = v97;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.EventList,
    (System_Int32_array **)v97,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  v104 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v104, 0LL);
  this->fields.CompleteList = v104;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.CompleteList,
    (System_Int32_array **)v104,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v116 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v116,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v116;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventClassAddedEventDict,
    (System_Int32_array **)v116,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x20
  System_Action_int__o *v19; // x21

  if ( (byte_42E8076 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__348_0__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    byte_42E8076 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_B5D69C(0LL, method);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                         reservedEffectBuffEffectIdList,
                                                         (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  v19 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v19,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__348_0__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    v18,
    (System_Action_T__o *)v19,
    (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ActiveReservedBuffEffect(
        BattleActorControl_o *this,
        int32_t effectId,
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
  void *buffLoopEffectDict; // x0
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w22
  __int64 v22; // x0

  if ( (byte_42E8075 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__,
      effectId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, v15, v16, v17);
    byte_42E8075 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      v19 = *((_DWORD *)buffLoopEffectDict + 6);
      v20 = buffLoopEffectDict;
      if ( v19 >= 1 )
      {
        v21 = 0;
        while ( 1 )
        {
          if ( v21 >= v19 )
          {
            v22 = sub_B5D6C8(buffLoopEffectDict);
            sub_B5D668(v22, 0LL);
          }
          buffLoopEffectDict = (void *)*((_QWORD *)v20 + (int)v21 + 4);
          if ( !buffLoopEffectDict )
            break;
          buffLoopEffectDict = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffLoopEffectDict, 0LL);
          if ( !buffLoopEffectDict )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 0, 0LL);
          v19 = *((_DWORD *)v20 + 6);
          if ( (int)++v21 >= v19 )
            goto LABEL_17;
        }
LABEL_22:
        sub_B5D69C(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void __fastcall BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v13; // x20
  unsigned __int64 v14; // x22
  struct BattleFBXComponent_o **p_fbxcomponent; // x23
  WarBoardManager_TaskList_o *v16; // x21
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42E8051 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v6, v7, v8);
    this = (BattleActorControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__,
                                     v9,
                                     v10,
                                     v11);
    byte_42E8051 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                   obj,
                                   (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  actorObject = this->fields.actorObject;
  v13 = this;
  if ( (int)actorObject >= 1 )
  {
    v14 = 0LL;
    p_fbxcomponent = &this->fields.fbxcomponent;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)actorObject )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      this = (BattleActorControl_o *)v5->fields.rendererArrayList;
      if ( !this )
        break;
      v16 = (WarBoardManager_TaskList_o *)p_fbxcomponent[v14];
      this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                       v16,
                                       (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v5->fields.rendererArrayList;
        if ( !this )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
      }
      LODWORD(actorObject) = v13->fields.actorObject;
      if ( (__int64)++v14 >= (int)actorObject )
        return;
    }
LABEL_14:
    sub_B5D69C(this, obj);
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

  if ( (byte_42E8070 & 1) == 0 )
  {
    sub_B5D5C4(&ChangeBattlePhaseOverwriteAnimation_TypeInfo, svtId, limitCount, isEnemy);
    byte_42E8070 = 1;
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
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B5D694(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, 0LL);
    this->fields.overwriteAnim = v13;
    sub_B5D560(
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
    sub_B5D69C(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0

  if ( (byte_42E8074 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, effectId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v6, v7, v8);
    byte_42E8074 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
LABEL_7:
    sub_B5D69C(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  System_Collections_Generic_List_int___Add(
    reservedEffectBuffEffectIdList,
    effectId,
    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleActorControl__AddServantVoicePlayed(
        BattleActorControl_o *this,
        System_String_array *playedSoundArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
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
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v20; // x21

  v5 = this;
  if ( (byte_42E801B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)playedSoundArray, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_string___, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActorControl__AddServantVoicePlayed_b__214_0__, v12, v13, v14);
    this = (BattleActorControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E801B = 1;
  }
  if ( !v5->fields.isEnemy )
  {
    battleSvtData = v5->fields.battleSvtData;
    if ( !battleSvtData )
      sub_B5D69C(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v5->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v20 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v20,
          (Il2CppObject *)v5,
          Method_BattleActorControl__AddServantVoicePlayed_b__214_0__,
          (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v20,
          (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void __fastcall BattleActorControl__ApplySpecialWaitModeFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o **v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleActorControl_o *v11; // x8
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  int32_t Value; // w0
  int32_t v15; // w20
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v17; // x20
  unsigned __int64 v18; // x26
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  v4 = (BattleActorControl_o **)this;
  if ( (byte_42E8073 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_13498/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v5, v6, v7);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v8, v9, v10);
    byte_42E8073 = 1;
  }
  v25 = 0;
  v11 = v4[55];
  if ( !v11 )
    goto LABEL_27;
  LOBYTE(v11[1].fields.actorScale) = BYTE1(v11[1].fields.actorScale);
  v25 = 1;
  v12 = System_Int32__ToString((int32_t)&v25, 0LL);
  v13 = System_String__Concat_44577788((System_String_o *)StringLiteral_13498/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v12, 0LL);
  Value = ConstantMaster__getValue(v13, 0LL);
  if ( Value != -1 )
  {
    v15 = Value;
    while ( 1 )
    {
      this = v4[55];
      if ( !this )
        goto LABEL_27;
      if ( v15 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v4[51];
        if ( !this )
          goto LABEL_27;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, method);
        if ( !this )
          goto LABEL_27;
        actorObject = this->fields.actorObject;
        v17 = this;
        if ( (int)actorObject >= 1 )
          break;
      }
LABEL_25:
      ++v25;
      v22 = System_Int32__ToString((int32_t)&v25, 0LL);
      v23 = System_String__Concat_44577788((System_String_o *)StringLiteral_13498/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v22, 0LL);
      v15 = ConstantMaster__getValue(v23, 0LL);
      if ( v15 == -1 )
        return;
    }
    v18 = 0LL;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)actorObject )
      {
        v24 = sub_B5D6C8(this);
        sub_B5D668(v24, 0LL);
      }
      this = v4[16];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v17->fields.fbxcomponent + v18),
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
        if ( BYTE1(this[1].fields.actorScale) )
        {
          LOBYTE(this[1].fields.actorScale) = 1;
          BattleActorControl__playAnimation_24205092(ServantActor, (System_String_o *)StringLiteral_23499/*"wait"*/, 0, v20);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_24205092(ServantActor, (System_String_o *)StringLiteral_23499/*"wait"*/, 1, v21);
      }
      LODWORD(actorObject) = v17->fields.actorObject;
      if ( (__int64)++v18 >= (int)actorObject )
        goto LABEL_25;
    }
LABEL_27:
    sub_B5D69C(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_MaterialPropertyBlock_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7FEF & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_MaterialPropertyBlock_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FEF = 1;
  }
  v5 = (UnityEngine_MaterialPropertyBlock_o *)sub_B5D694(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v5, 0LL);
  this->fields.mpb = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.mpb, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__ChangeAnimationCurveEnemy(
        BattleActorControl_o *this,
        bool enable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattlePerformance_o *performance; // x8
  bool v10; // w21
  __int64 v11; // x22
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x25
  UnityEngine_Object_o *v15; // x20
  struct BattlePerformance_o *v16; // x8
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20
  __int64 v19; // x0

  v5 = this;
  if ( (byte_42E8041 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___,
      enable,
      (_DWORD)method,
      v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8041 = 1;
  }
  performance = v5->fields.performance;
  if ( !performance )
LABEL_23:
    sub_B5D69C(this, enable);
  v10 = enable;
  v11 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_23;
    max_length = e_actorlist->max_length;
    v14 = v11 - 4;
    if ( v11 - 4 >= (int)max_length )
      break;
    if ( v14 >= max_length )
      goto LABEL_25;
    v15 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v11);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v16 = v5->fields.performance;
      if ( !v16 )
        goto LABEL_23;
      v17 = v16->fields.e_actorlist;
      if ( !v17 )
        goto LABEL_23;
      if ( v14 >= v17->max_length )
      {
LABEL_25:
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v17->obj.klass + v11);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    (UnityEngine_GameObject_o *)this,
                                                    (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
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
        LOBYTE(ComponentInChildren_Dropdown_DropdownItem->fields.m_Text) = v10;
      }
    }
    performance = v5->fields.performance;
    ++v11;
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct BattlePerformance_o *performance; // x8
  __int64 v10; // x22
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v13; // x25
  UnityEngine_Object_o *v14; // x21
  struct BattlePerformance_o *v15; // x8
  struct UnityEngine_GameObject_array *v16; // x8
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E8040 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___,
      enable,
      (_DWORD)method,
      v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8040 = 1;
  }
  performance = v5->fields.performance;
  if ( !performance )
LABEL_25:
    sub_B5D69C(this, enable);
  v10 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_25;
    max_length = e_actorlist->max_length;
    v13 = v10 - 4;
    if ( v10 - 4 >= (int)max_length )
      break;
    if ( v13 >= max_length )
      goto LABEL_27;
    v14 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v10);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v14, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v15 = v5->fields.performance;
      if ( !v15 )
        goto LABEL_25;
      v16 = v15->fields.e_actorlist;
      if ( !v16 )
        goto LABEL_25;
      if ( v13 >= v16->max_length )
      {
LABEL_27:
        v18 = sub_B5D6C8(this);
        sub_B5D668(v18, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v16->obj.klass + v10);
      if ( !this )
        goto LABEL_25;
      ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                            (UnityEngine_GameObject_o *)this,
                                                                            (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
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
    performance = v5->fields.performance;
    ++v10;
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
  int v4; // w2
  __int64 v5; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  BattleData_o *data; // x0
  __int64 v27; // x1
  struct BattlePerformance_o *performance; // x8
  float v29; // s10
  float v30; // s11
  float v31; // s9
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  unsigned __int64 rootfsm; // x8
  BattleData_o *v35; // x19
  unsigned __int64 v36; // x22
  struct PlayMakerFSM_o **p_fsm; // x23
  UnityEngine_Object_o *Component_WebViewObject; // x20
  __int64 v39; // x0
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_42E8044 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, (_DWORD)method, v4, v5);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v23, v24, v25);
    byte_42E8044 = 1;
  }
  if ( BattleActorControl__IsHideShadow(this, method) )
    return;
  clear = UnityEngine_Color__get_clear(0LL);
  v40.fields.r = r;
  v40.fields.g = g;
  v40.fields.b = b;
  v40.fields.a = a;
  data = (BattleData_o *)UnityEngine_Color__op_Equality(v40, clear, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_47;
    data = performance->fields.data;
    if ( !data )
      goto LABEL_47;
    GroundShadowColor = BattleData__getGroundShadowColor(data, 0LL);
    v29 = GroundShadowColor.fields.r;
    v30 = GroundShadowColor.fields.g;
    v31 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  else
  {
    v31 = 1.0;
    v30 = 1.0;
    v29 = 1.0;
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
    UnityEngine_MaterialPropertyBlock__Clear_41627480((UnityEngine_MaterialPropertyBlock_o *)data, 0LL);
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    v42.fields.r = v29;
    v42.fields.g = v30;
    v42.fields.b = v31;
    v42.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)data,
      (System_String_o *)StringLiteral_16146/*"_Color"*/,
      v42,
      0LL);
    data = (BattleData_o *)this->fields.mpb;
    if ( !data )
      goto LABEL_47;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)data,
      (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    data = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v29;
    this->fields.currentShadowColor.fields.g = v30;
    this->fields.currentShadowColor.fields.b = v31;
    this->fields.currentShadowColor.fields.a = a;
    if ( !data )
      goto LABEL_47;
    data = (BattleData_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                             (UnityEngine_Component_o *)data,
                             (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
                                 (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320)) == 0LL )
  {
LABEL_47:
    sub_B5D69C(data, v27);
  }
  rootfsm = (unsigned __int64)data->fields.rootfsm;
  v35 = data;
  if ( (int)rootfsm >= 1 )
  {
    v36 = 0LL;
    p_fsm = &data->fields.fsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_38;
      if ( v36 >= (unsigned int)rootfsm )
        goto LABEL_48;
      data = (BattleData_o *)p_fsm[v36];
      if ( !data )
        goto LABEL_47;
      Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          (UnityEngine_Component_o *)data,
                                                          (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      data = (BattleData_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
      rootfsm = LODWORD(v35->fields.rootfsm);
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( v36 >= rootfsm )
          goto LABEL_48;
        data = (BattleData_o *)p_fsm[v36];
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
        if ( v36 >= (unsigned int)rootfsm )
          goto LABEL_48;
        data = (BattleData_o *)p_fsm[v36];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)data, 1, 0LL);
        if ( v36 >= LODWORD(v35->fields.rootfsm) )
        {
LABEL_48:
          v39 = sub_B5D6C8(data);
          sub_B5D668(v39, 0LL);
        }
        data = (BattleData_o *)p_fsm[v36];
        if ( !data )
          goto LABEL_47;
        data = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)data, 0LL);
        if ( !data )
          goto LABEL_47;
        v43.fields.r = v29;
        v43.fields.g = v30;
        v43.fields.b = v31;
        v43.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)data, v43, 0LL);
      }
      LODWORD(rootfsm) = v35->fields.rootfsm;
      ++v36;
    }
    while ( (__int64)v36 < (int)rootfsm );
  }
}


void __fastcall BattleActorControl__ChangeShadowParent(
        BattleActorControl_o *this,
        int32_t loadActorLimitCount,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Transform_o *transform; // x0
  bool exist; // w21
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x2

  if ( (byte_42E7FF7 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, loadActorLimitCount, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_11662/*"RootShadow"*/, v6, v7, v8);
    byte_42E7FF7 = 1;
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
              (System_String_o *)StringLiteral_11662/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v12 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v12;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v12,
                         (System_String_o *)StringLiteral_11662/*"RootShadow"*/,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  UnityEngine_Object_o *shadowObj; // x21
  BattlePerformanceBg_o *bgPerf; // x0
  __int64 v26; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *ShadowTexture; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  UnityEngine_Object_o *v31; // x0
  UnityEngine_Object_o *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t v39; // [xsp+Ch] [xbp-24h] BYREF

  v39 = shadowId;
  if ( (byte_42E8043 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, shadowId, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Texture2D_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_2818/*"Battle/Textures/shadow_"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_2819/*"Battle/Textures/shadow_1"*/, v21, v22, v23);
    byte_42E8043 = 1;
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
      v29 = System_Int32__ToString((int32_t)&v39, 0LL);
      v30 = System_String__Concat_44577788((System_String_o *)StringLiteral_2818/*"Battle/Textures/shadow_"*/, v29, 0LL);
      v31 = UnityEngine_Resources__Load(v30, 0LL);
      if ( v31 )
      {
        if ( (UnityEngine_Texture2D_c *)v31->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v31;
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
      v32 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_2819/*"Battle/Textures/shadow_1"*/, 0LL);
      if ( v32 )
      {
        if ( (UnityEngine_Texture2D_c *)v32->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v32;
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
        UnityEngine_MaterialPropertyBlock__Clear_41627480((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16146/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.currentShadowTexure,
              (System_Int32_array **)ShadowTexture,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_B5D69C(bgPerf, v26);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  BattleServantData_o *Instance; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantData_o *v21; // x22
  System_String_o *v22; // x21
  int v24; // [xsp+Ch] [xbp-24h] BYREF

  v5 = animname;
  if ( (byte_42E806E & 1) == 0 )
  {
    sub_B5D5C4(
      &HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
      (_DWORD)animname,
      isSaveAnim,
      method);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v10, v11, v12);
    byte_42E806E = 1;
  }
  v24 = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( Instance->fields.userSvtId.fields.inited )
    return v5;
  if ( this->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (System_Int32_array **)v5,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  if ( !v5 )
    goto LABEL_17;
  if ( !System_String__StartsWith(v5, (System_String_o *)StringLiteral_23499/*"wait"*/, 0LL) )
    return v5;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_17;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return v5;
  v24 = 49;
  Instance = (BattleServantData_o *)j_il2cpp_value_box_0(
                                      HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                                      &v24);
  if ( !Instance
    || (v21 = Instance,
        v22 = (System_String_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))Instance->klass->vtable._3_ToString.method)(
                                   Instance,
                                   Instance->klass->vtable._4_unknown.methodPtr),
        v24 = *(_DWORD *)j_il2cpp_object_unbox_0(v21),
        (Instance = (BattleServantData_o *)this->fields.fbxcomponent) == 0LL) )
  {
LABEL_17:
    sub_B5D69C(Instance, v14);
  }
  if ( BattleFBXComponent__checkAnimation((BattleFBXComponent_o *)Instance, v22, 0LL) )
    return v22;
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleServantData_o *battleSvtData; // x8
  BattleActorControl_o *v15; // x22
  System_String_o *v16; // x21
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  v9 = (System_Int32_array **)animname;
  v10 = this;
  if ( (byte_42E806D & 1) == 0 )
  {
    sub_B5D5C4(
      &HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
      (_DWORD)animname,
      isSaveAnim,
      method);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v11, v12, v13);
    byte_42E806D = 1;
  }
  v18 = 0;
  if ( v10->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    v10->fields.isFirstSaveBeforePlayAnim = 0;
    v10->fields._PlayedOriginalAnimName_k__BackingField = (struct System_String_o *)v9;
    sub_B5D560(
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
                                   (System_String_o *)StringLiteral_23499/*"wait"*/,
                                   0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return (System_String_o *)v9;
  battleSvtData = v10->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_15;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return (System_String_o *)v9;
  v18 = 46;
  this = (BattleActorControl_o *)j_il2cpp_value_box_0(
                                   HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo,
                                   &v18);
  if ( !this
    || (v15 = this,
        v16 = (System_String_o *)((__int64 (__fastcall *)(BattleActorControl_o *, void *))this->klass->vtable._3_ToString.method)(
                                   this,
                                   this->klass[1]._1.image),
        v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v15),
        (this = (BattleActorControl_o *)v10->fields.fbxcomponent) == 0LL) )
  {
LABEL_15:
    sub_B5D69C(this, animname);
  }
  if ( BattleFBXComponent__checkAnimation((BattleFBXComponent_o *)this, v16, 0LL) )
    return v16;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  struct System_Collections_Hashtable_o *CompleteList; // x0
  const MethodInfo *v11; // x3
  struct System_Collections_Hashtable_o *v12; // x8
  BattleActorControl_EventClass_o *v13; // x21
  __int64 v14; // x9
  BattleActorControl_o *v15; // x0
  System_String_o *v16; // x1
  BattleActorControl_EventClass_o *v17; // x2
  const MethodInfo *v18; // x3

  if ( (byte_42E8022 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1562/*"@OnComplete Fired!\n => <{0}>:"*/, v6, v7, v8);
    byte_42E8022 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1562/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_24192704(this, name, 0, v11);
    return;
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList
    || (CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._29_get_Item.method)(
                                                                  CompleteList,
                                                                  name,
                                                                  CompleteList->klass->vtable._30_set_Item.methodPtr),
        (v12 = this->fields.CompleteList) == 0LL)
    || (v13 = (BattleActorControl_EventClass_o *)CompleteList,
        CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v12->klass->vtable._39_Remove.method)(
                                                                  this->fields.CompleteList,
                                                                  name,
                                                                  v12->klass->vtable._40_get_SyncRoot.methodPtr),
        !v13) )
  {
LABEL_12:
    sub_B5D69C(CompleteList, v9);
  }
  v14 = *(&BattleActorControl_EventClass_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v13->klass->_2.bitflags2 + 1) >= (unsigned int)v14
    && (BattleActorControl_EventClass_c *)v13->klass->_2.typeHierarchy[v14 - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v13, 0LL);
    goto LABEL_11;
  }
  v15 = (BattleActorControl_o *)sub_B5D990(v13);
  BattleActorControl__setAnimationEvent(v15, v16, v17, v18);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_42E802C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__set_Item__,
      (_DWORD)eventName,
      (_DWORD)motionName,
      method);
    byte_42E802C = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B5D69C(0LL, eventName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (System_Xml_Schema_XmlSchemaObject_o *)motionName,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_42E802D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__Remove__,
      (_DWORD)eventName,
      (_DWORD)motionName,
      method);
    byte_42E802D = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B5D69C(0LL, eventName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (const MethodInfo_2F28628 *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_42E7FF8 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FF8 = 1;
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
  UnityEngine_Object__Destroy_35620236(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v25; // x2
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_42E807C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v20, v21, v22);
    byte_42E807C = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)System_Linq_Enumerable__ToList_int_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v26;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields.current, v25) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_B5D69C(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)buffLoopEffectDict,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8068 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__DestroyAuraEffect_d__326_TypeInfo, (_DWORD)effectObject, (_DWORD)method, v3);
    byte_42E8068 = 1;
  }
  v5 = sub_B5D694(BattleActorControl__DestroyAuraEffect_d__326_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__326___ctor((BattleActorControl__DestroyAuraEffect_d__326_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = effectObject;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)effectObject, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyEffectOnParticleStop(
        BattleActorControl_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E807A & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__DestroyEffectOnParticleStop_d__352_TypeInfo, key, (_DWORD)method, v3);
    byte_42E807A = 1;
  }
  v6 = sub_B5D694(BattleActorControl__DestroyEffectOnParticleStop_d__352_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__352___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v6 + 40) = key;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_42E7FF9 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FF9 = 1;
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
  UnityEngine_Object__DestroyImmediate_35620448(actorObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__DestroyLoopEffect(
        BattleActorControl_o *this,
        int32_t effectId,
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
  void *buffLoopEffectDict; // x0
  UnityEngine_Object_o *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v20; // x8
  UnityEngine_GameObject_o *v21; // x19
  int v22; // w8
  void *v23; // x20
  unsigned int v24; // w24
  __int64 v25; // x8
  _QWORD *v26; // x21
  unsigned __int64 v27; // x25
  UnityEngine_Object_o *v28; // x22
  __int64 v29; // x0

  if ( (byte_42E807B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__,
      effectId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320, v12, v13, v14);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v15, v16, v17);
    byte_42E807B = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                   effectId,
                                   (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                               (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v20 = this->fields.buffLoopEffectDict) == 0LL)
    || (v21 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                                       (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v20,
                                       effectId,
                                       (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v21)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                               v21,
                               1,
                               (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320)) == 0LL )
  {
LABEL_33:
    sub_B5D69C(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v22 = *((_DWORD *)buffLoopEffectDict + 6);
  v23 = buffLoopEffectDict;
  if ( v22 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= v22 )
        goto LABEL_32;
      buffLoopEffectDict = (void *)*((_QWORD *)v23 + (int)v24 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_33;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_33;
      v25 = *((_QWORD *)buffLoopEffectDict + 3);
      v26 = buffLoopEffectDict;
      if ( (int)v25 >= 1 )
        break;
LABEL_27:
      v22 = *((_DWORD *)v23 + 6);
      if ( (int)++v24 >= v22 )
        goto LABEL_28;
    }
    v27 = 0LL;
    while ( v27 < (unsigned int)v25 )
    {
      v28 = (UnityEngine_Object_o *)v26[v27 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v28, 0LL);
      LODWORD(v25) = *((_DWORD *)v26 + 6);
      if ( (__int64)++v27 >= (int)v25 )
        goto LABEL_27;
    }
LABEL_32:
    v29 = sub_B5D6C8(buffLoopEffectDict);
    sub_B5D668(v29, 0LL);
  }
LABEL_28:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v21, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  BattleActorControl_o *v13; // x0
  const MethodInfo *v14; // x3

  if ( (byte_42E7FFC & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FFC = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v6 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(v6, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.specialShadowObj, 0LL, v7, v8, v9, v10, v11, v12);
    BattleActorControl__EnableRenderer(v13, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v14);
  }
}


void __fastcall BattleActorControl__DisplayAnimationEffect(
        BattleActorControl_o *this,
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_String_o *TriggerKey; // x20
  System_Collections_Generic_IEnumerable_T__o *Value_string__BattleActorAnimationEffect; // x21
  __int64 v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o **p_prevAnimEffectTriggerKey; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x23

  if ( (byte_42E7FF6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActorAnimationEffect___ctor__, (_DWORD)animName, (_DWORD)eventTag, method);
    sub_B5D5C4(&System_Action_BattleActorAnimationEffect__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___, v10, v11, v12);
    sub_B5D5C4(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____, v13, v14, v15);
    sub_B5D5C4(&Method_BattleActorControl__DisplayAnimationEffect_b__137_0__, v16, v17, v18);
    byte_42E7FF6 = 1;
  }
  TriggerKey = BattleActorAnimationEffect__MakeTriggerKey(animName, eventTag, (const MethodInfo *)eventTag);
  Value_string__BattleActorAnimationEffect = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__GetValue_string__BattleActorAnimationEffect___(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                                                                                              TriggerKey,
                                                                                              0LL,
                                                                                              (const MethodInfo_1AD8DF4 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  p_prevAnimEffectTriggerKey = &this->fields.prevAnimEffectTriggerKey;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string__BattleActorAnimationEffect, 0LL) )
  {
    if ( !*p_prevAnimEffectTriggerKey )
      sub_B5D69C(0LL, v21);
    if ( !System_String__Equals_44565128(*p_prevAnimEffectTriggerKey, TriggerKey, 0LL) )
    {
      v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v29,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__137_0__,
        (const MethodInfo_258B320 *)Method_System_Action_BattleActorAnimationEffect___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        Value_string__BattleActorAnimationEffect,
        (System_Action_T__o *)v29,
        (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  *p_prevAnimEffectTriggerKey = TriggerKey;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey,
    (System_Int32_array **)TriggerKey,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
}


void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  int v6; // w1
  char v7; // w2
  __int64 v8; // x3
  UIWidget_o *v9; // x0
  __int64 v10; // x1
  UIWidget_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7FFB & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_TryGetComponent_Renderer___, (_DWORD)target, isEnable, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E7FFB = 1;
  }
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = (UIWidget_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)v9 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_12;
    if ( !UnityEngine_Component__TryGetComponent_UIWidget_(
            target,
            &component,
            (const MethodInfo_1ADE84C *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v9 = component;
    if ( !component )
LABEL_12:
      sub_B5D69C(v9, v10);
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
  __int64 v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_42E8008 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___, (_DWORD)eventName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_PlayMakerFSM__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_PlayMakerFSM__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass164_0__ExistMotionEvent_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass164_0_TypeInfo, v18, v19, v20);
    byte_42E8008 = 1;
  }
  v21 = sub_B5D694(BattleActorControl___c__DisplayClass164_0_TypeInfo);
  BattleActorControl___c__DisplayClass164_0___ctor((BattleActorControl___c__DisplayClass164_0_o *)v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  *(_QWORD *)(v21 + 16) = eventName;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)eventName, v24, v25, v26, v27, v28, v29);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v31 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v31,
    (Il2CppObject *)v21,
    Method_BattleActorControl___c__DisplayClass164_0__ExistMotionEvent_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_PlayMakerFSM__bool___ctor__);
  v32 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          motionFSM,
          (System_Func_TSource__bool__o *)v31,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v32,
           (const MethodInfo_1CA7CA4 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int32_t uniqueID; // w19

  if ( (byte_42E8059 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E8059 = 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v13; // x19
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E804C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v8, v9, v10);
    byte_42E804C = 1;
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
  material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41623368(
                                         material,
                                         (System_String_o *)StringLiteral_16107/*"_AddColor"*/,
                                         0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_clear(0LL);
    goto BattleActorControl$$GetAddColor;
  }
  v13 = this->fields.rendererArrayList;
  if ( !v13 )
    goto LABEL_15;
  if ( !v13->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  material = (UnityEngine_Material_o *)v13->fields._items->m_Items[0];
  if ( !material || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL)) == 0LL )
LABEL_15:
    sub_B5D69C(material, method);
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, 0LL);
BattleActorControl$$GetAddColor:
  result.fields.a = v17;
  result.fields.b = v16;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


bool __fastcall BattleActorControl__GetBattleModelObjectVisibleControlComponentsEnable(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x8

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    sub_B5D69C(this, method);
  return BattleModelObjectVisibleControlComponents->max_length != 0;
}


ChangeBattlePhaseNotify_o *__fastcall BattleActorControl__GetChangePhaseNotify(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *performance; // x20
  __int64 v6; // x1
  bool v7; // w8
  ChangeBattlePhaseNotify_o *result; // x0
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Object_o *data; // x20
  bool v11; // w8
  struct BattlePerformance_o *v12; // x8
  struct BattleData_o *v13; // x8

  if ( (byte_42E806F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E806F = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  result = 0LL;
  if ( v7 )
  {
    v9 = this->fields.performance;
    if ( !v9 )
      goto LABEL_16;
    data = (UnityEngine_Object_o *)v9->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v11 = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    result = 0LL;
    if ( v11 )
    {
      v12 = this->fields.performance;
      if ( v12 )
      {
        v13 = v12->fields.data;
        if ( v13 )
          return v13->fields.changePhaseNotify;
      }
LABEL_16:
      sub_B5D69C(0LL, v6);
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_int__o *v17; // x19
  __int64 Fsm; // x0
  __int64 v19; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  __int64 v22; // x8
  __int64 v23; // x20
  unsigned __int64 v24; // x21
  System_String_o *v25; // x0
  __int64 v27; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E8082 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_5310/*"DelayEnd"*/, v14, v15, v16);
    byte_42E8082 = 1;
  }
  result = 0;
  v17 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
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
                   (System_String_o *)StringLiteral_5310/*"DelayEnd"*/,
                   0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  if ( System_String__IsNullOrEmpty(Value, 0LL) )
    return v17;
  Fsm = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Fsm )
    goto LABEL_23;
  v19 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_22;
  *(_WORD *)(Fsm + 32) = 44;
  if ( !Value || (Fsm = (__int64)System_String__Split(Value, (System_Char_array *)Fsm, 0LL)) == 0 )
LABEL_23:
    sub_B5D69C(Fsm, v19);
  v22 = *(_QWORD *)(Fsm + 24);
  v23 = Fsm;
  if ( (int)v22 >= 1 )
  {
    v24 = 0LL;
    while ( v24 < (unsigned int)v22 )
    {
      v25 = *(System_String_o **)(v23 + 32 + 8 * v24);
      result = 0;
      Fsm = System_Int32__TryParse(v25, &result, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( !v17 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v17,
          result,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v22) = *(_DWORD *)(v23 + 24);
      if ( (__int64)++v24 >= (int)v22 )
        return v17;
    }
LABEL_22:
    v27 = sub_B5D6C8(Fsm);
    sub_B5D668(v27, 0LL);
  }
  return v17;
}


float __fastcall BattleActorControl__GetHeight(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
  struct BattleServantData_o *battleSvtData; // x8
  float actorScale; // s0
  float *p_height; // x8
  BattleActorControl_c *v8; // x0
  float height; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E8029 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B5D5C4(&BattleActorControl_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8029 = 1;
  }
  height = 0.0;
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_15;
  this = (BattleActorControl_o *)battleSvtData->fields.svtdata;
  if ( !this )
    goto LABEL_15;
  if ( ServantEntity__getBattleHeight((ServantEntity_o *)this, &height, 0LL) )
  {
    actorScale = v4->fields.actorScale;
    p_height = &height;
    return *p_height * actorScale;
  }
  this = (BattleActorControl_o *)v4->fields.battleSvtData;
  if ( !this )
LABEL_15:
    sub_B5D69C(this, method);
  if ( BattleServantData__get_BattleSize((BattleServantData_o *)this, 0LL) == 6 )
  {
    p_height = &v4->fields.actorScale;
    actorScale = 15.0;
  }
  else
  {
    v8 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v8 = BattleActorControl_TypeInfo;
    }
    actorScale = v4->fields.actorScale;
    p_height = &v8->static_fields->defaultHeight;
  }
  return *p_height * actorScale;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetMainColor(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v13; // x19
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float v17; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E804B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v8, v9, v10);
    byte_42E804B = 1;
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
  material = (UnityEngine_Material_o *)UnityEngine_Material__HasProperty_41623368(
                                         material,
                                         (System_String_o *)StringLiteral_16146/*"_Color"*/,
                                         0LL);
  if ( ((unsigned __int8)material & 1) == 0 )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    goto BattleActorControl$$GetMainColor;
  }
  v13 = this->fields.rendererArrayList;
  if ( !v13 )
    goto LABEL_15;
  if ( !v13->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  material = (UnityEngine_Material_o *)v13->fields._items->m_Items[0];
  if ( !material || (material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)material, 0LL)) == 0LL )
LABEL_15:
    sub_B5D69C(material, method);
  *(UnityEngine_Color_o *)&v14 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16146/*"_Color"*/, 0LL);
BattleActorControl$$GetMainColor:
  result.fields.a = v17;
  result.fields.b = v16;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


BattlePlayAnimationComponent_array *__fastcall BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_42E8089 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___,
      includeInactive,
      (_DWORD)method,
      v3);
    byte_42E8089 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v7);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
}


System_String_o *__fastcall BattleActorControl__GetPrefixVoiceId(
        BattleActorControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct BattleActionData_ShiftServant_o *myShiftData; // x22
  BattleServantData_o *Instance; // x0
  __int64 v8; // x1
  BattleServantData_o *v9; // x20
  struct BattleActionData_ShiftServant_o *v10; // x8
  int32_t v11; // w1
  int32_t limit; // w2
  int32_t SvtId; // w22
  const MethodInfo *v14; // x1

  if ( (byte_42E801E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
      (_DWORD)voiceId,
      (_DWORD)method,
      v3);
    byte_42E801E = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v9 = Instance;
  if ( !myShiftData )
  {
    Instance = this->fields.battleSvtData;
    if ( Instance )
    {
      SvtId = BattleServantData__getSvtId(Instance, 0LL);
      Instance = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v14);
      if ( v9 )
      {
        limit = (int)Instance;
        Instance = v9;
        v11 = SvtId;
        return ServantAssetLoadManager__GetPrefixVoiceId(
                 (ServantAssetLoadManager_o *)Instance,
                 v11,
                 limit,
                 voiceId,
                 0LL);
      }
    }
LABEL_11:
    sub_B5D69C(Instance, v8);
  }
  v10 = this->fields.myShiftData;
  if ( !v10 || !Instance )
    goto LABEL_11;
  v11 = v10->fields.svtId;
  limit = v10->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v11, limit, voiceId, 0LL);
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleActorControl__GetServantObjectVisibleControlActor(
        BattleActorControl_o *this,
        const MethodInfo *method)
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  __int64 v50; // x21
  BattleActionData_o *actiondata; // x0
  const MethodInfo *v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v60; // x24
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v68; // x22
  Il2CppObject *current; // x20
  _BOOL8 v70; // x0
  __int64 v71; // x1
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  _BOOL8 v73; // x0
  __int64 v74; // x1
  _DWORD *monitor; // x8
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E803B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BasicHelper_ForEach_int___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(
      &Method_BattleActorControl___c__DisplayClass262_0__GetServantObjectVisibleControlActor_b__0__,
      v44,
      v45,
      v46);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass262_0_TypeInfo, v47, v48, v49);
    byte_42E803B = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v50 = sub_B5D694(BattleActorControl___c__DisplayClass262_0_TypeInfo);
  BattleActorControl___c__DisplayClass262_0___ctor((BattleActorControl___c__DisplayClass262_0_o *)v50, 0LL);
  if ( !v50 )
    goto LABEL_27;
  *(_QWORD *)(v50 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 24), (System_Int32_array **)this, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v60 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v60,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v50 + 16) = v60;
  sub_B5D560((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v60, v61, v62, v63, v64, v65, v66);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, v52),
        v68 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v68,
          (Il2CppObject *)v50,
          Method_BattleActorControl___c__DisplayClass262_0__GetServantObjectVisibleControlActor_b__0__,
          (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v68,
          (const MethodInfo_1AD7A44 *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v50 + 16)) == 0LL) )
  {
LABEL_27:
    sub_B5D69C(actiondata, v52);
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v77,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)actiondata,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v78 = v77;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v78,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v78.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v70 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v70 )
    {
      if ( !current )
        sub_B5D69C(v70, v71);
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)current,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v73 = UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL);
      if ( !v73 )
      {
        if ( !Component_srcLineSprite )
          sub_B5D69C(v73, v74);
        monitor = Component_srcLineSprite[16].monitor;
        if ( !monitor )
          sub_B5D69C(v73, v74);
        if ( monitor[6] )
        {
          if ( !v59 )
            sub_B5D69C(v73, v74);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v59,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v78,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v59;
}


UnityEngine_GameObject_array *__fastcall BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


void __fastcall BattleActorControl__InitAnimationEffect(
        BattleActorControl_o *this,
        int32_t limitCount,
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  BattleActorControl___c__DisplayClass136_0_o *v66; // x21
  UnityEngine_GameObject_o *v67; // x0
  __int64 v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  BattleServantConfConponent_o *p_dicTriggerAnimEffects; // x19
  System_Int32_array **v76; // x1
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_iTween; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v85; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x20
  BattleActorControl___c_c *v88; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__136_1; // x21
  Il2CppObject *v91; // x22
  struct BattleActorControl___c_StaticFields *v92; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v99; // x0
  BattleActorControl___c_c *v100; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x20
  struct BattleActorControl___c_StaticFields *v102; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__136_2; // x21
  Il2CppObject *v104; // x22
  struct BattleActorControl___c_StaticFields *v105; // x0
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  struct BattleActorControl___c_StaticFields *v112; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__136_3; // x22
  Il2CppObject *v114; // x23
  struct BattleActorControl___c_StaticFields *v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x0
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7

  if ( (byte_42E7FF5 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___,
      limitCount,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___, v12, v13, v14);
    sub_B5D5C4(
      &Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&Method_System_Func_BattleActorAnimationEffect__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Func_BattleActorAnimationEffect__string___ctor__, v24, v25, v26);
    sub_B5D5C4(
      &System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo,
      v27,
      v28,
      v29);
    sub_B5D5C4(&System_Func_BattleActorAnimationEffect__bool__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Func_BattleActorAnimationEffect__string__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_BattleActorControl___c__InitAnimationEffect_b__136_1__, v45, v46, v47);
    sub_B5D5C4(&Method_BattleActorControl___c__InitAnimationEffect_b__136_2__, v48, v49, v50);
    sub_B5D5C4(&Method_BattleActorControl___c__InitAnimationEffect_b__136_3__, v51, v52, v53);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass136_0__InitAnimationEffect_b__0__, v54, v55, v56);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass136_0_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&BattleActorControl___c_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&StringLiteral_1/*""*/, v63, v64, v65);
    byte_42E7FF5 = 1;
  }
  v66 = (BattleActorControl___c__DisplayClass136_0_o *)sub_B5D694(BattleActorControl___c__DisplayClass136_0_TypeInfo);
  BattleActorControl___c__DisplayClass136_0___ctor(v66, 0LL);
  if ( !v66 )
    goto LABEL_36;
  v66->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects, 0LL, v69, v70, v71, v72, v73, v74);
  v76 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v76, v77, v78, v79, v80, v81, v82);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v67 = this->fields.actorObject;
    if ( v67 )
    {
      Components_iTween = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                                 v67,
                                                                                 (const MethodInfo_1CC4648 *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v85 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v85,
        (Il2CppObject *)v66,
        Method_BattleActorControl___c__DisplayClass136_0__InitAnimationEffect_b__0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActorAnimationEffect__bool___ctor__);
      v86 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              Components_iTween,
              (System_Func_TSource__bool__o *)v85,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v87 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v86,
                                                                   (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v87, 0LL) )
      {
        v88 = BattleActorControl___c_TypeInfo;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v88 = BattleActorControl___c_TypeInfo;
        }
        static_fields = v88->static_fields;
        _9__136_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__136_1;
        if ( !_9__136_1 )
        {
          if ( (BYTE3(v88->vtable._0_Equals.methodPtr) & 4) != 0 && !v88->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v88);
            static_fields = BattleActorControl___c_TypeInfo->static_fields;
          }
          v91 = (Il2CppObject *)static_fields->__9;
          _9__136_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__136_1,
            v91,
            Method_BattleActorControl___c__InitAnimationEffect_b__136_1__,
            (const MethodInfo_2C3041C *)Method_System_Func_BattleActorAnimationEffect__string___ctor__);
          v92 = BattleActorControl___c_TypeInfo->static_fields;
          v92->__9__136_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__136_1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v92->__9__136_1,
            (System_Int32_array **)_9__136_1,
            v93,
            v94,
            v95,
            v96,
            v97,
            v98);
        }
        v99 = System_Linq_Enumerable__GroupBy_object__object_(
                v87,
                (System_Func_TSource__TKey__o *)_9__136_1,
                (const MethodInfo_1CACCB8 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v100 = BattleActorControl___c_TypeInfo;
        v101 = (System_Collections_Generic_IEnumerable_TSource__o *)v99;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v100 = BattleActorControl___c_TypeInfo;
        }
        v102 = v100->static_fields;
        _9__136_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v102->__9__136_2;
        if ( !_9__136_2 )
        {
          if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v100);
            v102 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v104 = (Il2CppObject *)v102->__9;
          _9__136_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__136_2,
            v104,
            Method_BattleActorControl___c__InitAnimationEffect_b__136_2__,
            (const MethodInfo_2C3041C *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__);
          v105 = BattleActorControl___c_TypeInfo->static_fields;
          v105->__9__136_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__136_2;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v105->__9__136_2,
            (System_Int32_array **)_9__136_2,
            v106,
            v107,
            v108,
            v109,
            v110,
            v111);
          v100 = BattleActorControl___c_TypeInfo;
        }
        if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v100);
          v100 = BattleActorControl___c_TypeInfo;
        }
        v112 = v100->static_fields;
        _9__136_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v112->__9__136_3;
        if ( !_9__136_3 )
        {
          if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v100);
            v112 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v114 = (Il2CppObject *)v112->__9;
          _9__136_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__136_3,
            v114,
            Method_BattleActorControl___c__InitAnimationEffect_b__136_3__,
            (const MethodInfo_2C3041C *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__);
          v115 = BattleActorControl___c_TypeInfo->static_fields;
          v115->__9__136_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__136_3;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v115->__9__136_3,
            (System_Int32_array **)_9__136_3,
            v116,
            v117,
            v118,
            v119,
            v120,
            v121);
        }
        v122 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_BattleServantData_PartAnimationSaveData__string__BattlePlayAnimationComponent_SaveData___(
                                        v101,
                                        (System_Func_TSource__TKey__o *)_9__136_2,
                                        (System_Func_TSource__TElement__o *)_9__136_3,
                                        (const MethodInfo_1CB7C58 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (BattleServantConfConponent_c *)v122;
        sub_B5D560(p_dicTriggerAnimEffects, v122, v123, v124, v125, v126, v127, v128);
      }
      return;
    }
LABEL_36:
    sub_B5D69C(v67, v68);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
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
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v19; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__192_0; // x20
  Il2CppObject *v22; // x21
  struct BattleActorControl___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E800F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__192_0__, v11, v12, v13);
    sub_B5D5C4(&BattleActorControl___c_TypeInfo, v14, v15, v16);
    byte_42E800F = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v19 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v19 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__192_0,
      v22,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__192_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__);
    v23 = BattleActorControl___c_TypeInfo->static_fields;
    v23->__9__192_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__192_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v23->__9__192_0,
      (System_Int32_array **)_9__192_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__192_0,
           (const MethodInfo_1C97E70 *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int seqIdFromMstTDSeqWeight; // w21
  int32_t DispLimitCount; // w0

  v5 = this;
  if ( (byte_42E8083 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, (_DWORD)entity, (_DWORD)method, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v6, v7, v8);
    byte_42E8083 = 1;
  }
  if ( !entity )
    return 0;
  delayEndSequenceIdListFromMotion_k__BackingField = v5->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !delayEndSequenceIdListFromMotion_k__BackingField
    || !delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
  {
    return 0;
  }
  battleSvtData = v5->fields.battleSvtData;
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
      this = (BattleActorControl_o *)v5->fields.battleSvtData;
      if ( !this )
        goto LABEL_18;
      DispLimitCount = BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
      seqIdFromMstTDSeqWeight = TreasureDvcEntity__getSeqId(entity, DispLimitCount, 0LL);
    }
  }
  this = (BattleActorControl_o *)v5->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
    goto LABEL_18;
  if ( System_Collections_Generic_List_int___Contains(
         (System_Collections_Generic_List_int__o *)this,
         -1,
         (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  this = (BattleActorControl_o *)v5->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
LABEL_18:
    sub_B5D69C(this, entity);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(this, method);
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

  if ( (byte_42E8085 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, expectedType, targetCardIndexFromNow, allowCutInOtherSvtCard);
    byte_42E8085 = 1;
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
      v14 = (BattleData_o *)UnityEngine_Mathf__Abs_41629140(targetCardIndexFromNow, 0LL);
      if ( (int)v14 < 2 )
      {
LABEL_37:
        LOBYTE(actiondata) = 1;
        return (unsigned __int8)actiondata & 1;
      }
      v23 = this->fields.actiondata;
      if ( v23 )
      {
        v14 = (BattleData_o *)UnityEngine_Mathf__Min_41629336(
                                v23->fields.actionIndex,
                                v23->fields.actionIndex + targetCardIndexFromNow,
                                0LL);
        v24 = this->fields.actiondata;
        if ( v24 )
        {
          v25 = (int)v14;
          v14 = (BattleData_o *)UnityEngine_Mathf__Max_41629432(
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
      sub_B5D69C(v14, v15);
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
    sub_B5D69C(battleSvtData, v3);
  return BattleData__IsNoSkipDeadFirst((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__IsVisibleByTargetNodeScale(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *checkScaleNode; // x20
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x20
  float v8; // s1
  float v9; // s2
  float v10; // s0

  if ( (byte_42E8016 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8016 = 1;
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
  *(UnityEngine_Vector3_o *)(&v8 - 1) = GameObjectExtensions__GetLocalScale(this->fields.checkScaleNode, 0LL);
  result = 0;
  if ( v10 > 0.01 && v8 > 0.01 )
    return v9 > 0.01;
  return result;
}


bool __fastcall BattleActorControl__IsVoiceOffSvt(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *performance; // x20
  BattleServantData_o *battleSvtData; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v11; // x8
  BattleData_o *v12; // x19

  if ( (byte_42E8084 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8084 = 1;
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
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_18;
  data = (UnityEngine_Object_o *)v8->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 || this->fields.isEnemy )
    return 0;
  v11 = this->fields.performance;
  if ( !v11
    || (battleSvtData = this->fields.battleSvtData) == 0LL
    || (v12 = v11->fields.data,
        battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !v12) )
  {
LABEL_18:
    sub_B5D69C(battleSvtData, v7);
  }
  return BattleData__IsVoiceOffSvt(v12, (int32_t)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v45; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v47; // x8
  struct BattleActorControl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__365_0; // x20
  Il2CppObject *v50; // x21
  struct BattleActorControl___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x19
  unsigned __int64 v63; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v66; // x1
  __int64 v67; // x3
  __int64 v68; // x19
  __int64 v69; // x8
  unsigned __int64 v70; // x10
  int *v71; // x11
  __int64 v72; // x0
  __int64 v73; // x3
  __int64 v74; // x20
  __int64 v75; // x3
  __int64 v76; // x8
  unsigned __int64 v77; // x10
  int *v78; // x11
  __int64 v79; // x0
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  BattlePlayAnimationComponent_o *v87; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v89; // x23
  BattlePlayAnimationComponent_SaveData_o *v90; // x0
  __int64 v91; // x8
  unsigned __int64 v92; // x10
  int *v93; // x11
  __int64 v94; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E8086 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_BattlePlayAnimationComponent_SaveData__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__365_0__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass365_0__LoadSavedPartAnimation_b__1__, v35, v36, v37);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass365_0_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&BattleActorControl___c_TypeInfo, v41, v42, v43);
    byte_42E8086 = 1;
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
                                                                                     v45);
    v47 = BattleActorControl___c_TypeInfo;
    if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
      v47 = BattleActorControl___c_TypeInfo;
    }
    static_fields = v47->static_fields;
    _9__365_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__365_0;
    if ( !_9__365_0 )
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        static_fields = BattleActorControl___c_TypeInfo->static_fields;
      }
      v50 = (Il2CppObject *)static_fields->__9;
      _9__365_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__365_0,
        v50,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__365_0__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
      v51 = BattleActorControl___c_TypeInfo->static_fields;
      v51->__9__365_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__365_0;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v51->__9__365_0,
        (System_Int32_array **)_9__365_0,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
    }
    v58 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__365_0,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v58 )
      sub_B5D69C(0LL, v59);
    klass = v58->klass;
    v62 = v58;
    if ( *(_WORD *)&v58->klass->_2.bitflags1 )
    {
      v63 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        ++v63;
        p_offset += 4;
        if ( v63 >= *(unsigned __int16 *)&v58->klass->_2.bitflags1 )
          goto LABEL_18;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_18:
      p_method = sub_AF54C0(
                   v58,
                   System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo,
                   0LL,
                   v60);
    }
    v68 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v62,
            *(_QWORD *)(p_method + 8));
    if ( !v68 )
      sub_B5D69C(0LL, v66);
    while ( 1 )
    {
      v69 = *(_QWORD *)v68;
      if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
      {
        v70 = 0LL;
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v70;
          v71 += 4;
          if ( v70 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
            goto LABEL_25;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_25:
        v72 = sub_AF54C0(v68, System_Collections_IEnumerator_TypeInfo, 0LL, v67);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8)) & 1) == 0 )
        break;
      v74 = sub_B5D694(BattleActorControl___c__DisplayClass365_0_TypeInfo);
      BattleActorControl___c__DisplayClass365_0___ctor((BattleActorControl___c__DisplayClass365_0_o *)v74, 0LL);
      v76 = *(_QWORD *)v68;
      if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
      {
        v77 = 0LL;
        v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v78 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          ++v77;
          v78 += 4;
          if ( v77 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
            goto LABEL_32;
        }
        v79 = v76 + 16LL * *v78 + 312;
      }
      else
      {
LABEL_32:
        v79 = sub_AF54C0(v68, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL, v75);
      }
      v80 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v68, *(_QWORD *)(v79 + 8));
      if ( !v74 )
        sub_B5D69C(v80, v80);
      *(_QWORD *)(v74 + 16) = v80;
      sub_B5D560((BattleServantConfConponent_o *)(v74 + 16), v80, v81, v82, v83, v84, v85, v86);
      v87 = *(BattlePlayAnimationComponent_o **)(v74 + 16);
      v88 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v89 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v89,
        (Il2CppObject *)v74,
        Method_BattleActorControl___c__DisplayClass365_0__LoadSavedPartAnimation_b__1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_BattlePlayAnimationComponent_SaveData__bool___ctor__);
      v90 = (BattlePlayAnimationComponent_SaveData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                                         v88,
                                                         (System_Func_TSource__bool__o *)v89,
                                                         (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v87 )
        sub_B5D69C(v90, v90);
      BattlePlayAnimationComponent__SetSaveData(v87, v90, 0LL);
    }
    v91 = *(_QWORD *)v68;
    if ( *(_WORD *)(*(_QWORD *)v68 + 298LL) )
    {
      v92 = 0LL;
      v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v93 - 1) != System_IDisposable_TypeInfo )
      {
        ++v92;
        v93 += 4;
        if ( v92 >= *(unsigned __int16 *)(*(_QWORD *)v68 + 298LL) )
          goto LABEL_41;
      }
      v94 = v91 + 16LL * *v93 + 312;
    }
    else
    {
LABEL_41:
      v94 = sub_AF54C0(v68, System_IDisposable_TypeInfo, 0LL, v73);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v94)(v68, *(_QWORD *)(v94 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectParticleSwitch(
        BattleActorControl_o *this,
        bool isPlay,
        bool isNoblePhantasm,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *buffLoopEffectDict; // x0
  _DWORD *m_ParticleSystem; // x0
  __int64 v24; // x1
  _DWORD *v25; // x23
  int v26; // w8
  unsigned int v27; // w27
  _DWORD *v28; // x8
  UnityEngine_ParticleSystem_o *v29; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v37; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v38; // [xsp+20h] [xbp-70h] BYREF
  _DWORD *v39; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v40; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v41; // 0:x0.8

  if ( (byte_42E8079 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__,
      isPlay,
      isNoblePhantasm,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v13,
      v14,
      v15);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304, v16, v17, v18);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
      v19,
      v20,
      v21);
    byte_42E8079 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v39 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(buffLoopEffectDict, (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B5D69C(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v37,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v38 = v37;
LABEL_24:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v38,
            (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v38.fields.currentValue )
      sub_B5D69C(0LL, v35);
    m_ParticleSystem = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                         (UnityEngine_GameObject_o *)v38.fields.currentValue,
                         1,
                         (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304);
    v25 = m_ParticleSystem;
    if ( !m_ParticleSystem )
      sub_B5D69C(0LL, v24);
    v26 = m_ParticleSystem[6];
    if ( v26 >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= v26 )
        {
          v36 = sub_B5D6C8(m_ParticleSystem);
          sub_B5D668(v36, 0LL);
        }
        v28 = &v25[2 * v27];
        v29 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v28 + 4);
        if ( !v29 )
          sub_B5D69C(m_ParticleSystem, v24);
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(*((UnityEngine_ParticleSystem_o **)v28 + 4), 0LL).fields.m_ParticleSystem;
        v39 = m_ParticleSystem;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_B5D69C(m_ParticleSystem, v24);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_23;
          UnityEngine_ParticleSystem__Play_51306656(v29, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
          if ( !gameObject )
            sub_B5D69C(0LL, v32);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v40.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v39;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v40, 0, 0LL);
            v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0LL);
            if ( !v33 )
              sub_B5D69C(0LL, v34);
            UnityEngine_GameObject__SetActive(v33, 0, 0LL);
            goto LABEL_23;
          }
          UnityEngine_ParticleSystem__Stop_51307044(v29, 0LL);
        }
        v41.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v39;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v41, !isPlay, 0LL);
LABEL_23:
        v26 = v25[6];
        if ( (int)++v27 >= v26 )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v38,
    (const MethodInfo_28A2E20 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_42E807D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_13607/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, isPlay, (_DWORD)method, v3);
    byte_42E807D = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13607/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_B5D69C(0LL, v6);
    BattlePerformance__AllLoopEffectSwitch(performance, isPlay, 1, 0LL);
  }
  else
  {
    BattleActorControl__LoopEffectParticleSwitch(this, isPlay, 1, v7);
  }
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__MoveLoopEffectFromActorObject(
        BattleActorControl_o *this,
        const MethodInfo *method)
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_List_int__o *v33; // x19
  Il2CppObject *value; // x21
  int32_t key; // w22
  _BOOL8 v36; // x0
  __int64 v37; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v39; // x1
  UnityEngine_Object_o *parent; // x0
  __int64 v41; // x1
  System_String_o *name; // x23
  UnityEngine_Object_o *v43; // x0
  __int64 v44; // x1
  System_String_o *v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  UnityEngine_Transform_o *v48; // x21
  UnityEngine_Transform_o *v49; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E807E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v23, v24, v25);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v26, v27, v28);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v29, v30, v31);
    byte_42E807E = 1;
  }
  memset(&v52, 0, sizeof(v52));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v51,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)buffLoopEffectDict,
    (const MethodInfo_2F326A8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v52 = v51;
  v33 = 0LL;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v52,
            (const MethodInfo_28A1C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v52.fields.current.fields.key;
    value = v52.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v36 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v36 )
    {
      if ( !value )
        sub_B5D69C(v36, v37);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_B5D69C(0LL, v39);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_B5D69C(0LL, v41);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v43 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v43 )
        sub_B5D69C(0LL, v44);
      v45 = UnityEngine_Object__get_name(v43, 0LL);
      if ( !name )
        sub_B5D69C(v45, v45);
      if ( !System_String__Equals_44565128(name, v45, 0LL) )
      {
        if ( !v33 )
        {
          v33 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v33,
            (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
          if ( !v33 )
            sub_B5D69C(v46, v47);
        }
        System_Collections_Generic_List_int___Add(
          v33,
          key,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v49 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v48 )
          sub_B5D69C(v49, v49);
        UnityEngine_Transform__set_parent(v48, v49, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v52,
    (const MethodInfo_28A1DE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v33;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__MoveLoopEffectToActorObject(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *movedEffect,
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
  UnityEngine_Object_o *actorObject; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v41; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  StatusEffectPosOverwriteMaster_o *v45; // x22
  _BOOL8 v46; // x0
  __int64 v47; // x1
  WarEntity_o *v48; // x0
  WarEntity_o *v49; // x23
  int32_t coordinate; // w1
  __int64 v51; // x1
  BattleServantData_o *v52; // x0
  int32_t v53; // w24
  int32_t ActorSvtId; // w25
  const MethodInfo *v55; // x1
  __int64 LimitCount; // x0
  __int64 v57; // x1
  __int64 v58; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  UnityEngine_GameObject_o *Item; // x0
  __int64 v61; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v63; // x1
  UnityEngine_Transform_o *v64; // x23
  UnityEngine_Object_o *parent; // x0
  __int64 v66; // x1
  System_String_o *name; // x0
  __int64 v68; // x1
  __int64 v69; // x1
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_Transform_o *v71; // x0
  const MethodInfo *v72; // x1
  System_String_o *nodeName; // x25
  UnityEngine_Transform_o *v74; // x24
  int32_t v75; // w2
  UnityEngine_Transform_o *NodeFromLvName; // x24
  __int64 v77; // x0
  __int64 v78; // x1
  float v79; // s0
  float v80; // s1
  float v81; // s2
  struct BattleServantData_o *v82; // x8
  float v83; // s8
  float v84; // s9
  float v85; // s10
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x0
  __int64 v89; // x1
  struct BattleServantData_o *v90; // x8
  System_Collections_Generic_List_Enumerator_T__o v91; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v92; // [xsp+20h] [xbp-90h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v100; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E807F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, (_DWORD)movedEffect, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v30, v31, v32);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v36, v37, v38);
    byte_42E807F = 1;
  }
  memset(&v92, 0, sizeof(v92));
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
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)buffData,
                                                                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_B5D69C(buffData, v41);
      }
      v45 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v91,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectBuffList,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v92 = v91;
      while ( 1 )
      {
        v46 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v92,
                (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v46 )
          break;
        if ( !v92.fields.current )
          sub_B5D69C(v46, v47);
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B5D69C(v46, v47);
        v48 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)v92.fields.current[1].klass,
                (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v49 = v48;
        if ( v48 )
        {
          coordinate = (int32_t)v48->fields.coordinate;
          if ( coordinate >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 coordinate,
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v52 = this->fields.battleSvtData;
            if ( !v52 )
              sub_B5D69C(0LL, v51);
            v53 = (int32_t)v49->fields.coordinate;
            ActorSvtId = BattleServantData__getActorSvtId(v52, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v55);
            if ( !v45 )
              sub_B5D69C(LimitCount, v57);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v45, &entity, v53, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_B5D69C(0LL, v58);
              Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                                   (int32_t)v49->fields.coordinate,
                                                   (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_B5D69C(0LL, v61);
              transform = UnityEngine_GameObject__get_transform(Item, 0LL);
              v64 = transform;
              if ( !transform )
                sub_B5D69C(0LL, v63);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_B5D69C(0LL, v66);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_B5D69C(name, v68);
              if ( !name )
                sub_B5D69C(0LL, v68);
              if ( !System_String__Equals_44565128(name, entity->fields.nodeName, 0LL) )
              {
                zero = UnityEngine_Vector3__get_zero(0LL);
                UnityEngine_Transform__set_localPosition(v64, zero, 0LL);
                identity = UnityEngine_Quaternion__get_identity(0LL);
                UnityEngine_Transform__set_localRotation(v64, identity, 0LL);
                v70 = this->fields.actorObject;
                if ( !v70 )
                  sub_B5D69C(0LL, v69);
                v71 = UnityEngine_GameObject__get_transform(v70, 0LL);
                if ( !entity )
                  sub_B5D69C(v71, v72);
                nodeName = entity->fields.nodeName;
                v74 = v71;
                v75 = BattleActorControl__getLimitCount(this, v72);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v74, nodeName, v75, 1, 0LL);
                *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Vector3__get_zero(0LL);
                v82 = this->fields.battleSvtData;
                if ( !v82 )
                  sub_B5D69C(v77, v78);
                if ( !entity )
                  sub_B5D69C(0LL, v78);
                v83 = v79;
                v84 = v80;
                v85 = v81;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v82->fields.isEnemy, 0LL);
                Offset.fields.x = v83 + Offset.fields.x;
                Offset.fields.y = v84 + Offset.fields.y;
                Offset.fields.z = v85 + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v64, Offset, 0LL);
                if ( !entity )
                  sub_B5D69C(0LL, v86);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                v100 = UnityEngine_Quaternion__Euler_35652376(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v64, v100, 0LL);
                if ( !entity )
                  sub_B5D69C(0LL, v87);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v64, Scale, 0LL);
                UnityEngine_Transform__set_parent(v64, NodeFromLvName, 0LL);
                v90 = this->fields.battleSvtData;
                if ( !v90 )
                  sub_B5D69C(v88, v89);
                if ( v90->fields.isEnemy )
                {
                  localScale = UnityEngine_Transform__get_localScale(v64, 0LL);
                  localScale.fields.x = -localScale.fields.x;
                  UnityEngine_Transform__set_localScale(v64, localScale, 0LL);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v92,
        (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void __fastcall BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_42E8055 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_SkipDead__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6, v7);
    byte_42E8055 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B5D694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B5D69C(IsNoTouchSkip, v9);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v12, 0LL);
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
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  const MethodInfo *v36; // x1
  System_Collections_Generic_List_XWeaponTrail_Element__o *noblePhantasmObjectVisibleCtrList; // x0
  UnityEngine_Object_o *actorObject; // x20
  UnityEngine_MeshCollider_o *Component_srcLineSprite; // x20
  const MethodInfo *v40; // x1
  struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *extraLoadedVoiceArgsList; // x0
  BattleServantConfConponent_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v43; // x0
  __int64 v44; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E7FEE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Clear__, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__,
      v21,
      v22,
      v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v27, v28, v29);
    byte_42E7FEE = 1;
  }
  memset(&v54, 0, sizeof(v54));
  this->fields.rendererArrayList = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.rendererArrayList, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    0LL,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_26;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActorControl__Clear__);
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
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
      sub_B5D69C(noblePhantasmObjectVisibleCtrList, v36);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v36);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v40);
  extraLoadedVoiceArgsList = this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (BattleServantConfConponent_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v54,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)extraLoadedVoiceArgsList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v43 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v54,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v43 )
        break;
      if ( !v54.fields.current )
        sub_B5D69C(v43, v44);
      klass = (int32_t)v54.fields.current[1].klass;
      klass_high = HIDWORD(v54.fields.current[1].klass);
      monitor = (int32_t)v54.fields.current[1].monitor;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v54,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_B5D560(p_extraLoadedVoiceArgsList, 0LL, v48, v49, v50, v51, v52, v53);
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
  if ( (byte_42E8021 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E8021 = 1;
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
    BattleActorControl__sendEventFSM_24192704(v5, name, 0, v7);
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
    sub_B5D69C(this, name);
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
  v9 = (BattleActorControl_o *)sub_B5D990(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void __fastcall BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v6; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  UnityEngine_Object_o *klass; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E802A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E802A = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (BattleServantConfConponent_o *)&this->fields.particleDisconnectorObj;
  v6 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_B5D560(p_particleDisconnectorObj, 0LL, v9, v10, v11, v12, v13, v14);
  }
}


void __fastcall BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *performance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v13; // x20
  char *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  TreasureDvcEntity_o *v21; // x20
  int v22; // w8
  struct BattleServantData_o *v23; // x10
  int32_t v24; // w9
  struct BattleServantData_o *v25; // x8
  struct BattleServantData_o *v26; // x8
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x2
  System_Collections_IEnumerator_o *v29; // x0
  __int64 v30; // x0

  if ( (byte_42E803D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__265_0__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8, v9, v10);
    byte_42E803D = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_25;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_25;
  if ( !performance )
    goto LABEL_25;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v13 = (BattleSequenceManager_o *)performance;
  performance = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_25;
  performance = TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v13 )
    goto LABEL_25;
  BattleSequenceManager__SetIntactBgms(v13, (System_Int32_array *)performance, 0LL);
  performance = this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_25;
  if ( *((_BYTE *)performance + 455) )
  {
    performance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_25;
    v14 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v14 )
      goto LABEL_25;
    *((_QWORD *)v14 + 32) = performance;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v14 + 256),
      (System_Int32_array **)performance,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    performance = this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_25;
  }
  performance = BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v21 = (TreasureDvcEntity_o *)performance;
  performance = (void *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v21 )
    goto LABEL_25;
  performance = TreasureDvcEntity__getFixAppearanceInfoArray(v21, (int32_t)performance, 0LL);
  if ( !performance )
    goto LABEL_23;
  if ( *((_DWORD *)performance + 6) < 2u )
  {
    v30 = sub_B5D6C8(performance);
    sub_B5D668(v30, 0LL);
  }
  v22 = *((_DWORD *)performance + 8);
  if ( v22 < 1 )
  {
LABEL_23:
    v29 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_24;
  }
  v23 = this->fields.battleSvtData;
  if ( !v23
    || (v24 = *((_DWORD *)performance + 9), v23->fields.tmpAppearanceId = v22, (v25 = this->fields.battleSvtData) == 0LL)
    || (v25->fields.dressDispId = v24, (v26 = this->fields.battleSvtData) == 0LL) )
  {
LABEL_25:
    sub_B5D69C(performance, obj);
  }
  v26->fields.isForceAppearance = 1;
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v27,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__265_0__,
    0LL);
  v29 = BattleActorControl__waitChangeApp(this, v27, v28);
LABEL_24:
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v29, 0LL);
}


void __fastcall BattleActorControl__OnNoblePhantasmPlayComplete(
        BattleActorControl_o *this,
        WellFired_USSequencer_o *seq,
        const MethodInfo *method)
{
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *Instance; // x0
  __int64 v28; // x1
  BattlePerformance_o *performance; // x20
  struct BattlePerformance_o *v30; // x8
  struct BattlePerformance_o *v31; // x8
  const MethodInfo *v32; // x1
  struct BattlePerformance_o *v33; // x8
  const MethodInfo *v34; // x2
  System_Action_o *v35; // x20
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  const MethodInfo *v38; // x3
  BattleFBXComponent_c *v39; // x0
  struct BattlePerformance_o *v40; // x8
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2

  if ( (byte_42E803F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)seq, (_DWORD)method, v3);
    sub_B5D5C4(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__267_0__, v5, v6, v7);
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_GC_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6430/*"FINISHED"*/, v23, v24, v25);
    byte_42E803F = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_45;
  ((void (__fastcall *)(struct BattleServantData_o *, BattleServantData_o *, BattleActorControl_o *, struct BattlePerformance_o *, void *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass[1]._1.image);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_45;
  BattleServantData__changeNp(Instance, Instance->fields.tmpNp + Instance->fields.np, 0, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_45;
  BattleServantData__updateNpGauge(Instance, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43893280(0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_45;
  performance = this->fields.performance;
  Instance = (BattleServantData_o *)BattleServantData__get_TreasureDevice(Instance, 0LL);
  if ( !Instance )
    goto LABEL_45;
  if ( !performance )
    goto LABEL_45;
  BattlePerformance__endNoblePhantasm(performance, Instance->fields.index, 0LL);
  v30 = this->fields.performance;
  if ( !v30 )
    goto LABEL_45;
  Instance = (BattleServantData_o *)v30->fields.bgPerf;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformance__setDamageTargetVoiceFlg((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_45;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)Instance, 1, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformance__changeShadowType((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)Instance, 0LL);
  v31 = this->fields.performance;
  if ( !v31 )
    goto LABEL_45;
  Instance = (BattleServantData_o *)v31->fields.commandPerf;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v32);
  v33 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v33 )
    goto LABEL_45;
  Instance = (BattleServantData_o *)v33->fields.logic;
  if ( !Instance )
    goto LABEL_45;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v34);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_45;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)Instance, 1, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_45;
  if ( !BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_45;
    BattlePerformance__noblePhantasmWhiteInFade((BattlePerformance_o *)Instance, 0.2, 0.3, 0LL);
    if ( !this->fields.noblePhantasmCallback )
    {
      BattleActorControl__sendEventFSM_24192704(this, (System_String_o *)StringLiteral_6430/*"FINISHED"*/, 0, v38);
      goto LABEL_39;
    }
    v39 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v39 = BattleFBXComponent_TypeInfo;
    }
    v39->static_fields->EnableEvent = 1;
    Instance = (BattleServantData_o *)this->fields.noblePhantasmCallback;
    if ( Instance )
    {
      System_Action__Invoke((System_Action_o *)Instance, 0LL);
      goto LABEL_39;
    }
LABEL_45:
    sub_B5D69C(Instance, v28);
  }
  v35 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__267_0__,
    0LL);
  v37 = BattleActorControl__waitChangeApp(this, v35, v36);
  Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                      (UnityEngine_MonoBehaviour_o *)this,
                                      v37,
                                      0LL);
LABEL_39:
  v40 = this->fields.performance;
  if ( !v40 )
    goto LABEL_45;
  Instance = (BattleServantData_o *)v40->fields.data;
  if ( !Instance )
    goto LABEL_45;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_45;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v41);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v42);
  }
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_42E8054 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_SkipDead__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6, v7);
    byte_42E8054 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B5D694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B5D69C(IsNoTouchSkip, v9);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v12, 0LL);
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
  __int64 v33; // x22
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v50; // x20
  System_Collections_Generic_IEnumerable_T__o *v51; // x19
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v52; // x20

  if ( (byte_42E8088 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattlePlayAnimationComponent___ctor__, (_DWORD)key, (_DWORD)animName, method);
    sub_B5D5C4(&System_Action_BattlePlayAnimationComponent__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass368_0__PlayMatchPartAnimation_b__0__, v24, v25, v26);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass368_0__PlayMatchPartAnimation_b__1__, v27, v28, v29);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass368_0_TypeInfo, v30, v31, v32);
    byte_42E8088 = 1;
  }
  v33 = sub_B5D694(BattleActorControl___c__DisplayClass368_0_TypeInfo);
  BattleActorControl___c__DisplayClass368_0___ctor((BattleActorControl___c__DisplayClass368_0_o *)v33, 0LL);
  if ( !v33 )
    sub_B5D69C(v34, v35);
  *(_QWORD *)(v33 + 16) = key;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)key, v36, v37, v38, v39, v40, v41);
  *(_QWORD *)(v33 + 24) = animName;
  sub_B5D560((BattleServantConfConponent_o *)(v33 + 24), (System_Int32_array **)animName, v42, v43, v44, v45, v46, v47);
  *(float *)(v33 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v48);
  v50 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v50,
    (Il2CppObject *)v33,
    Method_BattleActorControl___c__DisplayClass368_0__PlayMatchPartAnimation_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
  v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v50,
                                                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v52 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v52,
    (Il2CppObject *)v33,
    Method_BattleActorControl___c__DisplayClass368_0__PlayMatchPartAnimation_b__1__,
    (const MethodInfo_258B320 *)Method_System_Action_BattlePlayAnimationComponent___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v51,
    (System_Action_T__o *)v52,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
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
      v17 = sub_B5D6C8(this);
      sub_B5D668(v17, 0LL);
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
    sub_B5D69C(this, *(_QWORD *)&timing);
  }
  return v12 & 1;
}


void __fastcall BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v13; // x20
  unsigned __int64 v14; // x22
  struct BattleFBXComponent_o **p_fbxcomponent; // x23
  WarBoardManager_TaskList_o *v16; // x21
  __int64 v17; // x0

  v5 = this;
  if ( (byte_42E8050 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v6, v7, v8);
    this = (BattleActorControl_o *)sub_B5D5C4(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__,
                                     v9,
                                     v10,
                                     v11);
    byte_42E8050 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                   obj,
                                   (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  actorObject = this->fields.actorObject;
  v13 = this;
  if ( (int)actorObject >= 1 )
  {
    v14 = 0LL;
    p_fbxcomponent = &this->fields.fbxcomponent;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)actorObject )
      {
        v17 = sub_B5D6C8(this);
        sub_B5D668(v17, 0LL);
      }
      this = (BattleActorControl_o *)v5->fields.rendererArrayList;
      if ( !this )
        break;
      v16 = (WarBoardManager_TaskList_o *)p_fbxcomponent[v14];
      this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                       (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                       v16,
                                       (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v5->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                         v16,
                                         (const MethodInfo_305896C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(actorObject) = v13->fields.actorObject;
      if ( (__int64)++v14 >= (int)actorObject )
        return;
    }
LABEL_14:
    sub_B5D69C(this, obj);
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
    sub_B5D69C(0LL, eventName);
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
    sub_B5D560(p_overwriteAnim, 0LL, v5, v6, v7, v8, v9, v10);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v6; // x1
  BattleFBXComponent_o *v7; // x0

  if ( (byte_42E8072 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8072 = 1;
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
      v7 = this->fields.fbxcomponent;
      if ( !v7 )
        sub_B5D69C(0LL, v6);
      BattleFBXComponent__RevertDefaultAnimation(v7, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BattleActorControl___c__DisplayClass286_0_o *v19; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x22

  if ( (byte_42E804F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Material___ctor__, (_DWORD)method, v3, v4);
    sub_B5D5C4(&System_Action_Material__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___, v10, v11, v12);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass286_0__SetActorAlpha_b__0__, v13, v14, v15);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass286_0_TypeInfo, v16, v17, v18);
    byte_42E804F = 1;
  }
  v19 = (BattleActorControl___c__DisplayClass286_0_o *)sub_B5D694(BattleActorControl___c__DisplayClass286_0_TypeInfo);
  BattleActorControl___c__DisplayClass286_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B5D69C(v20, v21);
  v19->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_Material__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v23,
    (Il2CppObject *)v19,
    Method_BattleActorControl___c__DisplayClass286_0__SetActorAlpha_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_Material___ctor__);
  BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v23,
    (const MethodInfo_1ADA01C *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetAddColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v30; // x1
  UnityEngine_Material_array *v31; // x19
  __int64 v32; // x8
  unsigned __int64 v33; // x24
  UnityEngine_Object_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_42E804E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__,
      (_DWORD)method,
      v3,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v22, v23, v24);
    byte_42E804E = 1;
  }
  memset(&v38, 0, sizeof(v38));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v38.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v27 )
      {
        if ( !current )
          sub_B5D69C(v27, v28);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v31 = materials;
        if ( !materials )
          sub_B5D69C(0LL, v30);
        v32 = *(_QWORD *)&materials->max_length;
        if ( (int)v32 >= 1 )
        {
          v33 = 0LL;
          do
          {
            if ( v33 >= (unsigned int)v32 )
            {
              v36 = sub_B5D6C8(materials);
              sub_B5D668(v36, 0LL);
            }
            v34 = (UnityEngine_Object_o *)v31->m_Items[v33];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v34 )
                sub_B5D69C(materials, v35);
              v39.fields.r = r;
              v39.fields.g = g;
              v39.fields.b = b;
              v39.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v34,
                (System_String_o *)StringLiteral_16107/*"_AddColor"*/,
                v39,
                0LL);
            }
            LODWORD(v32) = v31->max_length;
            ++v33;
          }
          while ( (__int64)v33 < (int)v32 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  __int64 v3; // x3
  WebViewObject_o *Component_WebViewObject; // x0
  __int64 v7; // x1

  if ( (byte_42E806C & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___, gId, (_DWORD)method, v3);
    byte_42E806C = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_WebViewObject )
    sub_B5D69C(0LL, v7);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  _QWORD *p_klass; // x8
  BattleServantConfConponent_o *p_shadowEffectObject; // x21
  unsigned __int64 v12; // x24
  __int64 v13; // x25
  unsigned __int64 v14; // x9
  UnityEngine_Object_o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  BattleServantConfConponent_c *klass; // x8
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *actorObject; // x23
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x0

  v6 = this;
  if ( (byte_42E8042 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, isShadow, isChoco, method);
    this = (BattleActorControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E8042 = 1;
  }
  p_shadowEffectObject = (BattleServantConfConponent_o *)&v6->fields.shadowEffectObject;
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  if ( p_klass )
  {
    v12 = 0LL;
    v13 = 32LL;
    while ( 1 )
    {
      v14 = *((unsigned int *)p_klass + 6);
      if ( (__int64)v12 >= (int)v14 )
        break;
      if ( v12 >= v14 )
        goto LABEL_19;
      v15 = (UnityEngine_Object_o *)p_klass[v12 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v15, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v12 >= LODWORD(klass->_1.namespaze) )
        {
LABEL_19:
          v33 = sub_B5D6C8(this);
          sub_B5D668(v33, 0LL);
        }
        *(void **)((char *)&klass->_1.image + v13) = 0LL;
        sub_B5D560((BattleServantConfConponent_o *)((char *)klass + v13), 0LL, v16, v17, v18, v19, v20, v21);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v12;
        v13 += 8LL;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_20;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_20:
    sub_B5D69C(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  v26 = (System_Int32_array **)BattleEffectUtility__ChangeServantView(
                                 actorObject,
                                 isShadow,
                                 isChoco,
                                 svtlimitaddent,
                                 0LL);
  p_shadowEffectObject->klass = (BattleServantConfConponent_c *)v26;
  sub_B5D560(p_shadowEffectObject, v26, v27, v28, v29, v30, v31, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMainColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v27; // x0
  __int64 v28; // x1
  UnityEngine_Material_array *materials; // x0
  __int64 v30; // x1
  UnityEngine_Material_array *v31; // x19
  __int64 v32; // x8
  unsigned __int64 v33; // x24
  UnityEngine_Object_o *v34; // x20
  __int64 v35; // x1
  __int64 v36; // x0
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v38; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_42E804D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__,
      (_DWORD)method,
      v3,
      v4);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v22, v23, v24);
    byte_42E804D = 1;
  }
  memset(&v38, 0, sizeof(v38));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v37,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v38 = v37;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v38,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v38.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v27 )
      {
        if ( !current )
          sub_B5D69C(v27, v28);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v31 = materials;
        if ( !materials )
          sub_B5D69C(0LL, v30);
        v32 = *(_QWORD *)&materials->max_length;
        if ( (int)v32 >= 1 )
        {
          v33 = 0LL;
          do
          {
            if ( v33 >= (unsigned int)v32 )
            {
              v36 = sub_B5D6C8(materials);
              sub_B5D668(v36, 0LL);
            }
            v34 = (UnityEngine_Object_o *)v31->m_Items[v33];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v34 )
                sub_B5D69C(materials, v35);
              v39.fields.r = r;
              v39.fields.g = g;
              v39.fields.b = b;
              v39.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v34,
                (System_String_o *)StringLiteral_16146/*"_Color"*/,
                v39,
                0LL);
            }
            LODWORD(v32) = v31->max_length;
            ++v33;
          }
          while ( (__int64)v33 < (int)v32 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v38,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o fadeColour,
        float alpha,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
  float b; // s10
  float g; // s9
  float r; // s8
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x3
  struct BattleServantData_o *v23; // x8
  int32_t displayType; // w8
  bool v25; // w1
  bool v26; // w2
  int uniqueId; // w8
  BattleServantData_o *v28; // x19
  unsigned int v29; // w22
  float v30; // s8
  float v31; // s9
  float v32; // s10
  float v33; // s12
  BattleServantData_c **v34; // x8
  UnityEngine_Renderer_o *v35; // x20
  float v36; // s4
  float v37; // s5
  float v38; // s6
  float v39; // s7
  float v40; // s4
  float v41; // s5
  float v42; // s6
  float v43; // s7
  __int64 v44; // x8
  BattleServantData_o *v45; // x20
  unsigned __int64 v46; // x26
  UnityEngine_Object_o *v47; // x21
  __int64 v48; // x0
  UnityEngine_Color_o v49; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_42E804A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, (_DWORD)method, v4, v5);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16107/*"_AddColor"*/, v17, v18, v19);
    byte_42E804A = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  *(_QWORD *)&v49.fields.r = 0LL;
  *(_QWORD *)&v49.fields.b = 0LL;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_31;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0LL) )
  {
    BattleActorControl__SetMaterialWhite(this, v21);
  }
  else
  {
    v23 = this->fields.battleSvtData;
    if ( v23 )
    {
      displayType = v23->fields.displayType;
      v25 = displayType == 2;
      v26 = displayType == 3;
    }
    else
    {
      v25 = 0;
      v26 = 0;
    }
    BattleActorControl__SetDispServant(this, v25, v26, v22);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_31:
    sub_B5D69C(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v28 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v29 = 0;
    v30 = r * alpha;
    v31 = g * alpha;
    v32 = b * alpha;
    v33 = 1.0 - alpha;
    while ( 1 )
    {
      if ( v29 >= uniqueId )
        goto LABEL_30;
      v34 = &v28->klass + (int)v29;
      v35 = (UnityEngine_Renderer_o *)v34[4];
      if ( !v35 )
        goto LABEL_31;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v34[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_31;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      methoda.methodPointer = *(Il2CppMethodPointer *)&color.fields.r;
      methoda.invoker_method = *(void **)&color.fields.b;
      color.fields.r = v33 * color.fields.r;
      color.fields.g = v33 * color.fields.g;
      color.fields.b = v33 * color.fields.b;
      color.fields.a = 1.0;
      UnityEngine_Color___ctor(color, v36, v37, v38, v39, &methoda);
      v52.fields.a = 0.0;
      v52.fields.r = v30;
      v52.fields.g = v31;
      v52.fields.b = v32;
      UnityEngine_Color___ctor(v52, v40, v41, v42, v43, (const MethodInfo *)&v49);
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v35, 0LL);
      if ( !battleSvtData )
        goto LABEL_31;
      v44 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v45 = battleSvtData;
      if ( (int)v44 >= 1 )
        break;
LABEL_28:
      uniqueId = v28->fields.uniqueId;
      if ( (int)++v29 >= uniqueId )
        return;
    }
    v46 = 0LL;
    while ( v46 < (unsigned int)v44 )
    {
      v47 = (UnityEngine_Object_o *)*(&v45->fields.userSvtId.fields.currentCryptoKey + v46);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v47 )
          goto LABEL_31;
        *(_QWORD *)&v53.fields.b = methoda.invoker_method;
        *(_QWORD *)&v53.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v47, (System_String_o *)StringLiteral_16146/*"_Color"*/, v53, 0LL);
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v47, (System_String_o *)StringLiteral_16107/*"_AddColor"*/, v49, 0LL);
      }
      LODWORD(v44) = v45->fields.uniqueId;
      if ( (__int64)++v46 >= (int)v44 )
        goto LABEL_28;
    }
LABEL_30:
    v48 = sub_B5D6C8(battleSvtData);
    sub_B5D668(v48, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  int klass; // w8
  UnityEngine_GameObject_o *v14; // x19
  unsigned int v15; // w22
  unsigned int *v16; // x8
  UnityEngine_Renderer_o *v17; // x20
  unsigned __int64 v18; // x25
  UnityEngine_Material_o *v19; // x21
  int v20; // s0
  __int64 v24; // x0

  if ( (byte_42E8049 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v8, v9, v10);
    byte_42E8049 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                             gameObject,
                                             (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_24;
  klass = (int)gameObject[1].klass;
  v14 = gameObject;
  if ( klass >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= klass )
      {
LABEL_25:
        v24 = sub_B5D6C8(gameObject);
        sub_B5D668(v24, 0LL);
      }
      v16 = (unsigned int *)(&v14->klass + (int)v15);
      v17 = (UnityEngine_Renderer_o *)*((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(
                                                 *((UnityEngine_Renderer_o **)v16 + 4),
                                                 0LL);
      if ( !gameObject )
        break;
      v18 = 0LL;
      while ( (__int64)v18 < SLODWORD(gameObject[1].klass) )
      {
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(v17, 0LL);
        if ( !gameObject )
          goto LABEL_24;
        if ( v18 >= LODWORD(gameObject[1].klass) )
          goto LABEL_25;
        v19 = (UnityEngine_Material_o *)*((_QWORD *)&gameObject[1].monitor + v18);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        {
          *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
          if ( !v19 )
            goto LABEL_24;
          UnityEngine_Material__SetColor(v19, (System_String_o *)StringLiteral_16146/*"_Color"*/, *(UnityEngine_Color_o *)&v20, 0LL);
        }
        ++v18;
        gameObject = (UnityEngine_GameObject_o *)UnityEngine_Renderer__get_materials(v17, 0LL);
        if ( !gameObject )
          goto LABEL_24;
      }
      klass = (int)v14[1].klass;
      if ( (int)++v15 >= klass )
        return;
    }
LABEL_24:
    sub_B5D69C(gameObject, v12);
  }
}


void __fastcall BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x20
  BattleActorControl___c_c *v36; // x8
  struct BattleActorControl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__366_0; // x21
  Il2CppObject *v39; // x22
  struct BattleActorControl___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  BattleActorControl___c_c *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x20
  struct BattleActorControl___c_StaticFields *v50; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__366_1; // x21
  Il2CppObject *v52; // x22
  struct BattleActorControl___c_StaticFields *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Collections_Generic_IEnumerable_T__o *v60; // x0
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  BattlePlayAnimationComponent_SaveData_array *v62; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_42E8087 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___ctor__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Func_BattlePlayAnimationComponent__bool___ctor__, v17, v18, v19);
    sub_B5D5C4(
      &System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo,
      v20,
      v21,
      v22);
    sub_B5D5C4(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__366_0__, v26, v27, v28);
    sub_B5D5C4(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__366_1__, v29, v30, v31);
    sub_B5D5C4(&BattleActorControl___c_TypeInfo, v32, v33, v34);
    byte_42E8087 = 1;
  }
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v2);
  v36 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v36 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__366_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__366_0;
  if ( !_9__366_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__366_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__366_0,
      v39,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__366_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_BattlePlayAnimationComponent__bool___ctor__);
    v40 = BattleActorControl___c_TypeInfo->static_fields;
    v40->__9__366_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__366_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v40->__9__366_0,
      (System_Int32_array **)_9__366_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          PlayAnimationComponents,
          (System_Func_TSource__bool__o *)_9__366_0,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v48 = BattleActorControl___c_TypeInfo;
  v49 = v47;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v48 = BattleActorControl___c_TypeInfo;
  }
  v50 = v48->static_fields;
  _9__366_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v50->__9__366_1;
  if ( !_9__366_1 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      v50 = BattleActorControl___c_TypeInfo->static_fields;
    }
    v52 = (Il2CppObject *)v50->__9;
    _9__366_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__366_1,
      v52,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__366_1__,
      (const MethodInfo_2C3041C *)Method_System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___ctor__);
    v53 = BattleActorControl___c_TypeInfo->static_fields;
    v53->__9__366_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__366_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v53->__9__366_1,
      (System_Int32_array **)_9__366_1,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59);
  }
  v60 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                         v49,
                                                         (System_Func_TSource__TResult__o *)_9__366_1,
                                                         (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v61 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          v60,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v62 = (BattlePlayAnimationComponent_SaveData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v61,
                                                         (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(battleSvtData, this->fields.partAnimationSaveKey, v62, 0LL);
}


void __fastcall BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *IsHideShadow; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x8
  char v11; // w20
  bool v12; // w1

  if ( (byte_42E8081 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, active, (_DWORD)method, v3);
    byte_42E8081 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v7);
    v10 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v10 || (v11 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v10, 0LL)) == 0LL) )
      sub_B5D69C(IsHideShadow, v9);
    v12 = (v11 & 1) == 0 && active;
    UnityEngine_GameObject__SetActive(IsHideShadow, v12, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  BattleData_o *data; // x0
  __int64 v20; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_42E8047 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16205/*"_MainTex"*/, v16, v17, v18);
    byte_42E8047 = 1;
  }
  if ( !BattleActorControl__IsHideShadow(this, method) )
  {
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
        UnityEngine_MaterialPropertyBlock__Clear_41627480((UnityEngine_MaterialPropertyBlock_o *)data, 0LL);
        data = (BattleData_o *)this->fields.mpb;
        if ( data )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)data,
            (System_String_o *)StringLiteral_16205/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          data = (BattleData_o *)this->fields.mpb;
          if ( data )
          {
            v25.fields.r = r;
            v25.fields.g = g;
            v25.fields.b = b;
            v25.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)data,
              (System_String_o *)StringLiteral_16146/*"_Color"*/,
              v25,
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
                                       (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_B5D69C(data, v20);
    }
  }
}


void __fastcall BattleActorControl__SetShadowSize(
        BattleActorControl_o *this,
        int32_t btlSize,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  BattleActorControl_c *v30; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v31; // x21
  char *ShadowTransform; // x0
  __int64 v33; // x1
  int v34; // w8
  int v35; // w8
  int v36; // w8
  int v37; // w8
  int v38; // w8
  int v39; // w8
  int v40; // w8
  int v41; // w8
  int v42; // w8
  int v43; // w8
  int v44; // w8
  int v45; // w8
  int v46; // w8
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleActorControl_c *v53; // x0
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v56; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v57; // x21
  int v58; // w8
  int v59; // w8
  int v60; // w8
  int v61; // w8
  int v67; // w8
  int v68; // w8
  int v70; // w8
  int v72; // w8
  int v74; // w8
  int v75; // w8
  int v77; // w8
  int v78; // w8
  int v79; // w8
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  BattleActorControl_c *v86; // x0
  struct BattleActorControl_StaticFields *v87; // x0
  BattleActorControl_c *v88; // x0
  BattleActorControl_c *v89; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  WarBoardEvalValueSquare_EvalValueSquare_o *v93; // x22
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  BattleActorControl_c *v101; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v103; // x23
  BattleActorControl_c *v104; // x0
  UnityEngine_Object_o *v105; // x19
  __int64 v106; // x0

  if ( (byte_42E8048 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_TypeInfo, btlSize, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v18, v19, v20);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Vector3___TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_12986/*"Shadow"*/, v27, v28, v29);
    byte_42E8048 = 1;
  }
  v30 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v30 = BattleActorControl_TypeInfo;
  }
  if ( !v30->static_fields->ShadowTransform )
  {
    v31 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v31,
      (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v34 = *((_DWORD *)ShadowTransform + 6);
    if ( !v34 )
      goto LABEL_150;
    *((_QWORD *)ShadowTransform + 4) = 0LL;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v34 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 11) = 0;
    *((_QWORD *)ShadowTransform + 6) = 0LL;
    if ( !v31 )
      goto LABEL_151;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      0,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v35 = *((_DWORD *)ShadowTransform + 6);
    if ( !v35 )
      goto LABEL_150;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v35 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      1,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v36 = *((_DWORD *)ShadowTransform + 6);
    if ( !v36 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v36 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      2,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v37 = *((_DWORD *)ShadowTransform + 6);
    if ( !v37 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v37 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      3,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v38 = *((_DWORD *)ShadowTransform + 6);
    if ( !v38 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v38 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      4,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v39 = *((_DWORD *)ShadowTransform + 6);
    if ( !v39 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v39 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      5,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v40 = *((_DWORD *)ShadowTransform + 6);
    if ( !v40 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v40 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      6,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v41 = *((_DWORD *)ShadowTransform + 6);
    if ( !v41 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v41 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      7,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v42 = *((_DWORD *)ShadowTransform + 6);
    if ( !v42 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v42 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      8,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v43 = *((_DWORD *)ShadowTransform + 6);
    if ( !v43 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v43 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      9,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v44 = *((_DWORD *)ShadowTransform + 6);
    if ( !v44 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v44 == 1 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      10,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v45 = *((_DWORD *)ShadowTransform + 6);
    if ( !v45 )
      goto LABEL_150;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v45 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      11,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_151;
    v46 = *((_DWORD *)ShadowTransform + 6);
    if ( !v46 )
      goto LABEL_150;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v46 == 1 )
      goto LABEL_150;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v31,
      12,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
      (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v53 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v53 = BattleActorControl_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v53->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v31;
    sub_B5D560(static_fields, (System_Int32_array **)v31, v47, v48, v49, v50, v51, v52);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v56 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v56 = BattleActorControl_TypeInfo;
    }
    if ( !v56->static_fields->specialShadowTransform )
    {
      v57 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v57,
        (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v58 = *((_DWORD *)ShadowTransform + 6);
      if ( !v58 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v58 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 11) = 0;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      if ( !v57 )
        goto LABEL_151;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        0,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v59 = *((_DWORD *)ShadowTransform + 6);
      if ( !v59 )
        goto LABEL_150;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v59 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        1,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v60 = *((_DWORD *)ShadowTransform + 6);
      if ( !v60 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v60 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        2,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v61 = *((_DWORD *)ShadowTransform + 6);
      if ( !v61 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v61 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        3,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v67 = *((_DWORD *)ShadowTransform + 6);
      if ( !v67 )
        goto LABEL_150;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v67 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        4,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v68 = *((_DWORD *)ShadowTransform + 6);
      if ( !v68 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v68 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        5,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v70 = *((_DWORD *)ShadowTransform + 6);
      if ( !v70 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v70 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        6,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v72 = *((_DWORD *)ShadowTransform + 6);
      if ( !v72 )
        goto LABEL_150;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v72 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        7,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v74 = *((_DWORD *)ShadowTransform + 6);
      if ( !v74 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v74 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        8,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v75 = *((_DWORD *)ShadowTransform + 6);
      if ( !v75 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v75 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        9,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v77 = *((_DWORD *)ShadowTransform + 6);
      if ( !v77 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v77 == 1 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        10,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v78 = *((_DWORD *)ShadowTransform + 6);
      if ( !v78 )
        goto LABEL_150;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v78 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        11,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_B5D5DC(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_151;
      v79 = *((_DWORD *)ShadowTransform + 6);
      if ( !v79 )
        goto LABEL_150;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v79 == 1 )
        goto LABEL_150;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v57,
        12,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)ShadowTransform,
        (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v86 = BattleActorControl_TypeInfo;
      if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v86 = BattleActorControl_TypeInfo;
      }
      v87 = v86->static_fields;
      v87->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v57;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v87->specialShadowTransform,
        (System_Int32_array **)v57,
        v80,
        v81,
        v82,
        v83,
        v84,
        v85);
    }
  }
  v88 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v88 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v88->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_151;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v89 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v89 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v89->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_151;
    Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v93 = Item;
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
      v94 = (System_Int32_array **)UnityEngine_Transform__Find(
                                     (UnityEngine_Transform_o *)ShadowTransform,
                                     (System_String_o *)StringLiteral_12986/*"Shadow"*/,
                                     0LL);
      *p_shadowObj = (struct UnityEngine_Transform_o *)v94;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.shadowObj, v94, v95, v96, v97, v98, v99, v100);
    }
    v101 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v101 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v101->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( (BYTE3(v101->vtable._0_Equals.methodPtr) & 4) != 0 && !v101->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v101);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_151;
      }
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v103 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v103, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_151;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v104 = BattleActorControl_TypeInfo;
            if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v104 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v104->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_151;
            v93 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v105 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v105, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_151;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v93 )
        goto LABEL_151;
      if ( LODWORD(v93->fields._EvalValueWarsituation_k__BackingField) )
      {
        if ( !ShadowTransform )
          goto LABEL_151;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v93->fields._EvalValue_k__BackingField,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_151;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v93->fields._EvalValueWarsituation_k__BackingField) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)&v93->fields._BenAdjustmentValueA1_k__BackingField,
              0LL);
            return;
          }
LABEL_151:
          sub_B5D69C(ShadowTransform, v33);
        }
      }
LABEL_150:
      v106 = sub_B5D6C8(ShadowTransform);
      sub_B5D668(v106, 0LL);
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
    sub_B5D69C(battleSvtData, v4);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v6; // x1
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x0
  BattleFBXComponent_o *v8; // x20

  if ( (byte_42E8071 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8071 = 1;
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
        || (v8 = this->fields.fbxcomponent,
            overwriteAnim = (ChangeBattlePhaseOverwriteAnimation_o *)ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
                                                                       overwriteAnim,
                                                                       this->fields._PlayedOriginalAnimName_k__BackingField,
                                                                       0LL),
            !v8) )
      {
        sub_B5D69C(overwriteAnim, v6);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v8, (System_String_o *)overwriteAnim, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)p_myShiftData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v14);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, v15);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E8058 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_12405/*"SKIP_DEAD"*/, (_DWORD)method, v2, v3);
    byte_42E8058 = 1;
  }
  BattleActorControl__sendEventFSM_24192704(this, (System_String_o *)StringLiteral_12405/*"SKIP_DEAD"*/, 0, v3);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
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
  struct BattleFBXComponent_o *fbxcomponent; // x20
  BattleServantConfConponent_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v20; // x22
  System_Int32_array **v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x8
  struct BattleFBXComponent_o *v29; // x20
  BattleServantConfConponent_o *p_Complete; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v32; // x22
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **NodeFromLvName; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  UnityEngine_Transform_o *v48; // x0
  System_Int32_array **v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  BattleActorControl_o *v56; // x0
  const MethodInfo *v57; // x1

  v4 = this;
  if ( (byte_42E7FED & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_Complete__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleActorControl_OnEvent__, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18550/*"en_damage01"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_18553/*"en_text01"*/, v11, v12, v13);
    this = (BattleActorControl_o *)sub_B5D5C4(&BattleFBXComponent_onEventDelegate_TypeInfo, v14, v15, v16);
    byte_42E7FED = 1;
  }
  fbxcomponent = v4->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_10;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (BattleServantConfConponent_o *)&fbxcomponent->fields.OnEvent;
  v20 = (BattleFBXComponent_onEventDelegate_o *)sub_B5D694(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v20, (Il2CppObject *)v4, Method_BattleActorControl_OnEvent__, 0LL);
  v21 = (System_Int32_array **)System_Delegate__Combine(OnEvent, (System_Delegate_o *)v20, 0LL);
  v28 = v21;
  if ( v21 && *v21 != (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
    goto LABEL_11;
  p_OnEvent->klass = (BattleServantConfConponent_c *)v21;
  sub_B5D560(p_OnEvent, v21, v22, v23, v24, v25, v26, v27);
  v29 = v4->fields.fbxcomponent;
  if ( !v29 )
LABEL_10:
    sub_B5D69C(this, method);
  Complete = (System_Delegate_o *)v29->fields.Complete;
  p_Complete = (BattleServantConfConponent_o *)&v29->fields.Complete;
  v32 = (BattleFBXComponent_onEventDelegate_o *)sub_B5D694(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v32, (Il2CppObject *)v4, Method_BattleActorControl_Complete__, 0LL);
  v33 = (System_Int32_array **)System_Delegate__Combine(Complete, (System_Delegate_o *)v32, 0LL);
  v28 = v33;
  if ( !v33 || *v33 == (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
  {
    p_Complete->klass = (BattleServantConfConponent_c *)v33;
    sub_B5D560(p_Complete, v33, v34, v35, v36, v37, v38, v39);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
    NodeFromLvName = (System_Int32_array **)TransformHelper__getNodeFromLvName(
                                              transform,
                                              (System_String_o *)StringLiteral_18553/*"en_text01"*/,
                                              -1,
                                              0,
                                              0LL);
    v4->fields.nodeText = (struct UnityEngine_Transform_o *)NodeFromLvName;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.nodeText, NodeFromLvName, v42, v43, v44, v45, v46, v47);
    v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v4, 0LL);
    v49 = (System_Int32_array **)TransformHelper__getNodeFromLvName(
                                   v48,
                                   (System_String_o *)StringLiteral_18550/*"en_damage01"*/,
                                   -1,
                                   0,
                                   0LL);
    v4->fields.nodeDamage = (struct UnityEngine_Transform_o *)v49;
    sub_B5D560((BattleServantConfConponent_o *)&v4->fields.nodeDamage, v49, v50, v51, v52, v53, v54, v55);
    return;
  }
LABEL_11:
  v56 = (BattleActorControl_o *)sub_B5D990(v28);
  BattleActorControl__OnDestroy(v56, v57);
}


void __fastcall BattleActorControl__StartDeadEffect(
        BattleActorControl_o *this,
        bool enableDropItem,
        float overwriteDuration,
        const MethodInfo *method)
{
  __int64 v4; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  char v11; // w1
  int v12; // w2
  __int64 v13; // x3
  char v14; // w1
  int v15; // w2
  __int64 v16; // x3
  char v17; // w1
  int v18; // w2
  __int64 v19; // x3
  char v20; // w1
  int v21; // w2
  __int64 v22; // x3
  char v23; // w1
  int v24; // w2
  __int64 v25; // x3
  char v26; // w1
  int v27; // w2
  __int64 v28; // x3
  char v29; // w1
  int v30; // w2
  __int64 v31; // x3
  char v32; // w1
  int v33; // w2
  __int64 v34; // x3
  char v35; // w1
  int v36; // w2
  __int64 v37; // x3
  char v38; // w1
  int v39; // w2
  __int64 v40; // x3
  char v41; // w1
  int v42; // w2
  __int64 v43; // x3
  char v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 v48; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 ActorSvtId; // x0
  __int64 v51; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct BattleServantData_o *v62; // x8
  float v63; // s9
  System_String_o *Value; // x0
  int v65; // w8
  __int64 v66; // x19
  unsigned int v67; // w20
  int v68; // w22
  UnityEngine_GameObject_o *v69; // x19
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Object_array *v76; // x20
  System_Int32_array **v77; // x1
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x22
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x1
  const MethodInfo *v92; // x1
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x21
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  System_Int32_array **v106; // x1
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_Int32_array **v113; // x21
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  System_Int32_array **v127; // x1
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_Int32_array **v134; // x1
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Int32_array **v141; // x1
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_Int32_array **v148; // x1
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  System_Int32_array **v155; // x21
  System_Collections_Hashtable_o *v156; // x0
  __int64 v157; // x0
  __int64 v158; // x0
  float v159; // [xsp+0h] [xbp-50h] BYREF
  int v160; // [xsp+4h] [xbp-4Ch] BYREF
  float Height; // [xsp+8h] [xbp-48h] BYREF
  int v162; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42E8028 & 1) == 0 )
  {
    sub_B5D5C4(&iTween_EaseType_TypeInfo, enableDropItem, (_DWORD)method, v4);
    sub_B5D5C4(&object___TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&float_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23243/*"updateDeadEffect"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_19153/*"from"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_10111/*"OnFinishDead"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_12356/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_21551/*"onupdate"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_23019/*"to"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v41, v42, v43);
    sub_B5D5C4(&iTween_TypeInfo, v44, v45, v46);
    byte_42E8028 = 1;
  }
  if ( enableDropItem )
    BattleActorControl__StartDropItem(this, 0, method);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v48 = battleSvtData->fields.displayType == 3;
  else
    v48 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( v48 )
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
  v55 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v55;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.particleDisconnectorObj,
    (System_Int32_array **)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = this->fields.battleSvtData;
  v63 = 1.3;
  if ( v62 )
  {
    if ( v62->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12356/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_92;
        v65 = *(_DWORD *)(ActorSvtId + 24);
        v66 = ActorSvtId;
        if ( v65 >= 1 )
        {
          v67 = 0;
          while ( 1 )
          {
            if ( v67 >= v65 )
              goto LABEL_90;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_92;
            v68 = *(_DWORD *)(v66 + 4LL * (int)v67 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v68 == (_DWORD)ActorSvtId )
              break;
            v65 = *(_DWORD *)(v66 + 24);
            if ( (int)++v67 >= v65 )
              goto LABEL_31;
          }
          v63 = 1.0;
        }
      }
    }
  }
LABEL_31:
  if ( overwriteDuration < 0.0 )
    overwriteDuration = v63;
  v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_B5D5DC(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_92:
    sub_B5D69C(ActorSvtId, v51);
  v76 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19153/*"from"*/;
  if ( StringLiteral_19153/*"from"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_19153/*"from"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v77 = (System_Int32_array **)StringLiteral_19153/*"from"*/;
  }
  else
  {
    v77 = 0LL;
  }
  if ( !v76->max_length )
    goto LABEL_90;
  v76->m_Items[0] = (Il2CppObject *)v77;
  sub_B5D560((BattleServantConfConponent_o *)v76->m_Items, v77, v70, v71, v72, v73, v74, v75);
  v162 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v162);
  v84 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B5D684(ActorSvtId, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
  }
  if ( v76->max_length <= 1 )
    goto LABEL_90;
  v76->m_Items[1] = (Il2CppObject *)v84;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[1], v84, v78, v79, v80, v81, v82, v83);
  ActorSvtId = StringLiteral_23019/*"to"*/;
  if ( StringLiteral_23019/*"to"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_23019/*"to"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v91 = (System_Int32_array **)StringLiteral_23019/*"to"*/;
  }
  else
  {
    v91 = 0LL;
  }
  if ( v76->max_length <= 2 )
    goto LABEL_90;
  v76->m_Items[2] = (Il2CppObject *)v91;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[2], v91, v85, v86, v87, v88, v89, v90);
  Height = BattleActorControl__GetHeight(this, v92);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height);
  v99 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B5D684(ActorSvtId, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
  }
  if ( v76->max_length <= 3 )
    goto LABEL_90;
  v76->m_Items[3] = (Il2CppObject *)v99;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[3], v99, v93, v94, v95, v96, v97, v98);
  ActorSvtId = StringLiteral_18341/*"easetype"*/;
  if ( StringLiteral_18341/*"easetype"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_18341/*"easetype"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v106 = (System_Int32_array **)StringLiteral_18341/*"easetype"*/;
  }
  else
  {
    v106 = 0LL;
  }
  if ( v76->max_length <= 4 )
    goto LABEL_90;
  v76->m_Items[4] = (Il2CppObject *)v106;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[4], v106, v100, v101, v102, v103, v104, v105);
  v160 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v160);
  v113 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B5D684(ActorSvtId, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
  }
  if ( v76->max_length <= 5 )
    goto LABEL_90;
  v76->m_Items[5] = (Il2CppObject *)v113;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[5], v113, v107, v108, v109, v110, v111, v112);
  ActorSvtId = StringLiteral_21551/*"onupdate"*/;
  if ( StringLiteral_21551/*"onupdate"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_21551/*"onupdate"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v120 = (System_Int32_array **)StringLiteral_21551/*"onupdate"*/;
  }
  else
  {
    v120 = 0LL;
  }
  if ( v76->max_length <= 6 )
    goto LABEL_90;
  v76->m_Items[6] = (Il2CppObject *)v120;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[6], v120, v114, v115, v116, v117, v118, v119);
  ActorSvtId = StringLiteral_23243/*"updateDeadEffect"*/;
  if ( StringLiteral_23243/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_23243/*"updateDeadEffect"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v127 = (System_Int32_array **)StringLiteral_23243/*"updateDeadEffect"*/;
  }
  else
  {
    v127 = 0LL;
  }
  if ( v76->max_length <= 7 )
    goto LABEL_90;
  v76->m_Items[7] = (Il2CppObject *)v127;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[7], v127, v121, v122, v123, v124, v125, v126);
  ActorSvtId = StringLiteral_21542/*"oncomplete"*/;
  if ( StringLiteral_21542/*"oncomplete"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_21542/*"oncomplete"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v134 = (System_Int32_array **)StringLiteral_21542/*"oncomplete"*/;
  }
  else
  {
    v134 = 0LL;
  }
  if ( v76->max_length <= 8 )
    goto LABEL_90;
  v76->m_Items[8] = (Il2CppObject *)v134;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[8], v134, v128, v129, v130, v131, v132, v133);
  ActorSvtId = StringLiteral_10111/*"OnFinishDead"*/;
  if ( StringLiteral_10111/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_10111/*"OnFinishDead"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v141 = (System_Int32_array **)StringLiteral_10111/*"OnFinishDead"*/;
  }
  else
  {
    v141 = 0LL;
  }
  if ( v76->max_length <= 9 )
    goto LABEL_90;
  v76->m_Items[9] = (Il2CppObject *)v141;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[9], v141, v135, v136, v137, v138, v139, v140);
  ActorSvtId = StringLiteral_22982/*"time"*/;
  if ( StringLiteral_22982/*"time"*/ )
  {
    ActorSvtId = sub_B5D684(StringLiteral_22982/*"time"*/, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_91;
    v148 = (System_Int32_array **)StringLiteral_22982/*"time"*/;
  }
  else
  {
    v148 = 0LL;
  }
  if ( v76->max_length <= 0xA )
    goto LABEL_90;
  v76->m_Items[10] = (Il2CppObject *)v148;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[10], v148, v142, v143, v144, v145, v146, v147);
  v159 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v159);
  v155 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B5D684(ActorSvtId, v76->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_91:
      v158 = sub_B5D6BC(ActorSvtId);
      sub_B5D668(v158, 0LL);
    }
  }
  if ( v76->max_length <= 0xB )
  {
LABEL_90:
    v157 = sub_B5D6C8(ActorSvtId);
    sub_B5D668(v157, 0LL);
  }
  v76->m_Items[11] = (Il2CppObject *)v155;
  sub_B5D560((BattleServantConfConponent_o *)&v76->m_Items[11], v155, v149, v150, v151, v152, v153, v154);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v156 = iTween__Hash(v76, 0LL);
  iTween__ValueTo(v69, v156, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v10; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v12; // x8
  struct BattleServantData_o *v13; // x8
  struct DropInfo_array *droplist; // x27
  struct BattlePerformance_o *v15; // x9
  int32_t ServantIndex; // w21
  const MethodInfo *v17; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v19; // x3
  UnityEngine_Transform_o *v20; // x22
  unsigned __int64 v21; // x23
  DropInfo_o *v22; // x24
  UnityEngine_Object_o *Item_18606592; // x25
  BattlePerformance_o *v24; // x26
  int v25; // s0
  struct BattlePerformance_o *v28; // x8
  BattlePerformance_o *v29; // x20
  __int64 v30; // x0
  bool v31; // [xsp+1Ch] [xbp-54h]

  if ( (byte_42E8027 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isSilent, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E8027 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_34;
  if ( battleSvtData->fields.isWithdraw )
    goto LABEL_9;
  battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    goto LABEL_9;
  v10 = this->fields.battleSvtData;
  if ( !v10 )
    goto LABEL_34;
  battleSvtData = (BattleServantData_o *)v10->fields.deckSvt;
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
    v31 = isSilent;
    BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
    v12 = this->fields.battleSvtData;
    if ( !v12 )
      goto LABEL_34;
    v12->fields.IsAlreadyDrop = 1;
    v13 = this->fields.battleSvtData;
    if ( !v13 )
      goto LABEL_34;
    droplist = v13->fields.droplist;
    if ( droplist )
    {
      v15 = this->fields.performance;
      if ( !v15 )
        goto LABEL_34;
      battleSvtData = (BattleServantData_o *)v15->fields.data;
      if ( !battleSvtData )
        goto LABEL_34;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)battleSvtData,
                       v13->fields.isEnemy,
                       v13->fields.uniqueId,
                       0LL);
      DropTransform = BattleActorControl__getDropTransform(this, v17);
      LODWORD(v19) = droplist->max_length;
      if ( (int)v19 >= 1 )
      {
        v20 = DropTransform;
        v21 = 0LL;
        while ( 1 )
        {
          if ( v21 >= (unsigned int)v19 )
          {
            v30 = sub_B5D6C8(DropTransform);
            sub_B5D668(v30, 0LL);
          }
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v22 = droplist->m_Items[v21];
          Item_18606592 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_18606592(
                                                    (BattlePerformance_o *)battleSvtData,
                                                    v20,
                                                    v22,
                                                    v19,
                                                    v21,
                                                    ServantIndex,
                                                    this->fields.headupVec,
                                                    0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item_18606592, 0LL, 0LL);
          if ( ((unsigned __int8)battleSvtData & 1) != 0 )
          {
            if ( !v20 )
              break;
            v24 = this->fields.performance;
            *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Transform__get_position(v20, 0LL);
            if ( !v24 )
              break;
            BattlePerformance__saveOriginalPos(
              v24,
              (UnityEngine_GameObject_o *)Item_18606592,
              *(UnityEngine_Vector3_o *)&v25,
              this->fields.criteriaPos,
              0LL);
          }
          v28 = this->fields.performance;
          if ( !v28 )
            break;
          battleSvtData = (BattleServantData_o *)v28->fields.data;
          if ( !battleSvtData )
            break;
          BattleData__addDropItems((BattleData_o *)battleSvtData, v22, 0LL);
          v19 = *(_QWORD *)&droplist->max_length;
          if ( (__int64)++v21 >= (int)v19 )
            goto LABEL_30;
        }
LABEL_34:
        sub_B5D69C(battleSvtData, isSilent);
      }
    }
LABEL_30:
    if ( !v31 )
    {
      v29 = this->fields.performance;
      battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v29 )
        goto LABEL_34;
      BattlePerformance__ShowAll(
        v29,
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
      sub_B5D69C(actorObject, v5);
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
  __int64 v3; // x3
  bool v4; // w20
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  struct BattleServantData_o *battleSvtData; // x8
  BattleServantData_o *v13; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v15; // x22
  struct BattleServantData_o *v16; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v18; // x1
  __int64 v19; // x0

  v4 = forceUpdate;
  v5 = this;
  if ( (byte_42E8080 & 1) == 0 )
  {
    sub_B5D5C4(&BuffList_TypeInfo, forceUpdate, (_DWORD)method, v3);
    sub_B5D5C4(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v6, v7, v8);
    this = (BattleActorControl_o *)sub_B5D5C4(&BuffList_TYPE___TypeInfo, v9, v10, v11);
    byte_42E8080 = 1;
  }
  battleSvtData = v5->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_24;
  if ( battleSvtData->fields.buffData )
  {
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    this = (BattleActorControl_o *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v13 = v5->fields.battleSvtData;
      if ( !v13 )
        goto LABEL_24;
      buffData = v13->fields.buffData;
      v15 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B5D694(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v15, v13, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_24;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_31668004(buffData, 100, v15, 1, 0, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_B5D5DC(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_24;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.actorObject) )
      {
        v19 = sub_B5D6C8(this);
        sub_B5D668(v19, 0LL);
      }
      LODWORD(this->fields.fbxcomponent) = 163;
      v16 = v5->fields.battleSvtData;
      if ( !v16 )
        goto LABEL_24;
      this = (BattleActorControl_o *)v16->fields.buffData;
      if ( !this )
        goto LABEL_24;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_31648088(
                                       (BattleBuffData_o *)this,
                                       (BuffList_TYPE_array *)forceUpdate,
                                       0LL,
                                       0LL,
                                       0LL);
    }
    *(_QWORD *)&forceUpdate = this;
    if ( !this )
      goto LABEL_24;
    this = (BattleActorControl_o *)v5->fields.translucentActorVisualInfo;
    if ( !this )
      goto LABEL_24;
    if ( v4 || (*(_DWORD *)(forceUpdate + 24LL) == 0) != (LOBYTE(this->fields.actorObject) == 0) )
    {
      TranslucentActorVisualInfo__UpdateByBuffs(
        (TranslucentActorVisualInfo_o *)this,
        (BattleBuffData_BuffData_array *)forceUpdate,
        0LL);
      translucentActorVisualInfo = v5->fields.translucentActorVisualInfo;
      if ( translucentActorVisualInfo )
      {
        BattleActorControl__SetActorAlpha(
          v5,
          translucentActorVisualInfo->fields._Alpha_k__BackingField,
          (const MethodInfo *)forceUpdate);
        BattleActorControl__UpdateShadow(v5, v18);
        return;
      }
LABEL_24:
      sub_B5D69C(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_1ADA01C *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  const MethodInfo_1ADA01C_RGCTXs **p_rgctx_data; // x19
  const MethodInfo_1ADA01C_RGCTXs *rgctx_data; // t1
  Il2CppClass *_0_BattleActorControl___c__287_T; // x22
  __int16 v31; // w8
  Il2CppClass *v32; // x22
  Il2CppClass *v33; // x22
  Il2CppClass *v34; // x22
  System_Int32_array **v35; // x22
  Il2CppClass *v36; // x22
  __int16 v37; // w8
  Il2CppClass *v38; // x22
  Il2CppClass *v39; // x22
  const MethodInfo_1ADA01C_RGCTXs *v40; // x8
  Il2CppClass *v41; // x22
  Il2CppClass *_2_System_Func_T__bool; // x24
  __int64 v43; // x23
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  Il2CppClass *v50; // x23
  char *static_fields; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  __int64 v55; // x21
  Il2CppClass *_5_System_Collections_Generic_IEnumerable_T; // x22
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x3
  __int64 v63; // x21
  int v64; // w25
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  __int64 v69; // x3
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  UnityEngine_Renderer_o *v75; // x0
  __int64 v76; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  Il2CppClass *v78; // x23
  __int16 v79; // w8
  Il2CppClass *v80; // x23
  Il2CppClass *v81; // x23
  Il2CppClass *v82; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v83; // x23
  Il2CppClass *v84; // x23
  __int16 v85; // w8
  Il2CppClass *v86; // x23
  Il2CppClass *v87; // x23
  Il2CppClass *v88; // x23
  Il2CppObject *v89; // x24
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  Il2CppClass *v96; // x24
  char *v97; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x22
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v103; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v106; // x1
  __int64 v107; // x3
  __int64 v108; // x22
  __int64 v109; // x8
  unsigned __int64 v110; // x10
  int *v111; // x11
  __int64 v112; // x0
  __int64 v113; // x3
  __int64 v114; // x8
  unsigned __int64 v115; // x10
  int *v116; // x11
  __int64 v117; // x0
  System_Uri_o *v118; // x0
  int v119; // w24
  __int64 v120; // x8
  unsigned __int64 v121; // x10
  int *v122; // x11
  __int64 v123; // x0
  int v124; // w20
  __int64 v125; // x8
  unsigned __int64 v126; // x10
  int *v127; // x11
  __int64 v128; // x0
  _DWORD v129[2]; // [xsp+10h] [xbp-60h]
  int v130; // [xsp+18h] [xbp-58h]

  if ( (byte_42EA27E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_Material__Invoke__, (_DWORD)rendererEnumerable, (_DWORD)updateFunc, method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_Material___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Func_Material__bool___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Func_Material__bool__TypeInfo, v13, v14, v15);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v19, v20, v21);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v22, v23, v24);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v25, v26, v27);
    byte_42EA27E = 1;
  }
  v130 = 0;
  if ( rendererEnumerable )
  {
    rgctx_data = method->rgctx_data;
    p_rgctx_data = &method->rgctx_data;
    _0_BattleActorControl___c__287_T = rgctx_data->_0_BattleActorControl___c__287_T_;
    v31 = WORD1(rgctx_data->_0_BattleActorControl___c__287_T_->vtable[0].methodPtr);
    if ( (v31 & 1) == 0 )
    {
      sub_AF52C4(_0_BattleActorControl___c__287_T);
      v31 = WORD1(_0_BattleActorControl___c__287_T->vtable[0].methodPtr);
    }
    if ( (v31 & 0x400) != 0 )
    {
      v32 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
      if ( (BYTE2(v32->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
      if ( !v32->_2.cctor_finished )
      {
        v33 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
        if ( (BYTE2(v33->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        j_il2cpp_runtime_class_init_0(v33);
      }
    }
    v34 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
    if ( (BYTE2(v34->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
    v35 = (System_Int32_array **)*((_QWORD *)v34->static_fields + 1);
    if ( !v35 )
    {
      v36 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
      v37 = WORD1(v36->vtable[0].methodPtr);
      if ( (v37 & 1) == 0 )
      {
        sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        v37 = WORD1(v36->vtable[0].methodPtr);
      }
      if ( (v37 & 0x400) != 0 )
      {
        v38 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
        if ( (BYTE2(v38->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        if ( !v38->_2.cctor_finished )
        {
          v39 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
          if ( (BYTE2(v39->vtable[0].methodPtr) & 1) == 0 )
            sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
          j_il2cpp_runtime_class_init_0(v39);
        }
      }
      v40 = *p_rgctx_data;
      v41 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
      if ( (BYTE2(v41->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        v40 = *p_rgctx_data;
      }
      _2_System_Func_T__bool = v40->_2_System_Func_T__bool_;
      v43 = *(_QWORD *)v41->static_fields;
      if ( (BYTE2(_2_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4(_2_System_Func_T__bool);
      v35 = (System_Int32_array **)sub_B5D694(_2_System_Func_T__bool);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_rgctx_data)->_3_System_Func_T__bool___ctor->methodPointer)(
        v35,
        v43,
        (*p_rgctx_data)->_1_BattleActorControl___c__287_T___UpdateMaterialsOnRenderders_b__287_0);
      v50 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
      if ( (BYTE2(v50->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
      static_fields = (char *)v50->static_fields;
      *((_QWORD *)static_fields + 1) = v35;
      sub_B5D560((BattleServantConfConponent_o *)(static_fields + 8), v35, v44, v45, v46, v47, v48, v49);
    }
    v52 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Int32_array **))(*p_rgctx_data)->_4_System_Linq_Enumerable_Where_T_->methodPointer)(
            rendererEnumerable,
            v35);
    if ( !v52 )
      sub_B5D69C(0LL, v53);
    v55 = v52;
    _5_System_Collections_Generic_IEnumerable_T = (*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_5_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AF52C4((*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_);
    v57 = *(_QWORD *)v55;
    if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
    {
      v58 = 0LL;
      v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
      while ( *((Il2CppClass **)v59 - 1) != _5_System_Collections_Generic_IEnumerable_T )
      {
        ++v58;
        v59 += 4;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
          goto LABEL_39;
      }
      v60 = v57 + 16LL * *v59 + 312;
    }
    else
    {
LABEL_39:
      v60 = sub_AF54C0(v55, _5_System_Collections_Generic_IEnumerable_T, 0LL, v54);
    }
    v63 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v55, *(_QWORD *)(v60 + 8));
    if ( !v63 )
      sub_B5D69C(0LL, v61);
    v64 = 0;
    while ( 1 )
    {
      v65 = *(_QWORD *)v63;
      if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
      {
        v66 = 0LL;
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v67 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v66;
          v67 += 4;
          if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
            goto LABEL_47;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_47:
        v68 = sub_AF54C0(v63, System_Collections_IEnumerator_TypeInfo, 0LL, v62);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v63, *(_QWORD *)(v68 + 8)) & 1) == 0 )
        break;
      _6_System_Collections_Generic_IEnumerator_T = (*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4((*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_);
      v71 = *(_QWORD *)v63;
      if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
      {
        v72 = 0LL;
        v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
        while ( *((Il2CppClass **)v73 - 1) != _6_System_Collections_Generic_IEnumerator_T )
        {
          ++v72;
          v73 += 4;
          if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
            goto LABEL_56;
        }
        v74 = v71 + 16LL * *v73 + 312;
      }
      else
      {
LABEL_56:
        v74 = sub_AF54C0(v63, _6_System_Collections_Generic_IEnumerator_T, 0LL, v69);
      }
      v75 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v63, *(_QWORD *)(v74 + 8));
      if ( !v75 )
        sub_B5D69C(0LL, v76);
      materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v75, 0LL);
      v78 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
      v79 = WORD1(v78->vtable[0].methodPtr);
      if ( (v79 & 1) == 0 )
      {
        sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        v79 = WORD1(v78->vtable[0].methodPtr);
      }
      if ( (v79 & 0x400) != 0 )
      {
        v80 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
        if ( (BYTE2(v80->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        if ( !v80->_2.cctor_finished )
        {
          v81 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
          if ( (BYTE2(v81->vtable[0].methodPtr) & 1) == 0 )
            sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
          j_il2cpp_runtime_class_init_0(v81);
        }
      }
      v82 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
      if ( (BYTE2(v82->vtable[0].methodPtr) & 1) == 0 )
        sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
      v83 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v82->static_fields + 2);
      if ( !v83 )
      {
        v84 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
        v85 = WORD1(v84->vtable[0].methodPtr);
        if ( (v85 & 1) == 0 )
        {
          sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
          v85 = WORD1(v84->vtable[0].methodPtr);
        }
        if ( (v85 & 0x400) != 0 )
        {
          v86 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
          if ( (BYTE2(v86->vtable[0].methodPtr) & 1) == 0 )
            sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
          if ( !v86->_2.cctor_finished )
          {
            v87 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
            if ( (BYTE2(v87->vtable[0].methodPtr) & 1) == 0 )
              sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
            j_il2cpp_runtime_class_init_0(v87);
          }
        }
        v88 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
        if ( (BYTE2(v88->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        v89 = *(Il2CppObject **)v88->static_fields;
        v83 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_Material__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v83,
          v89,
          (intptr_t)(*p_rgctx_data)->_8_BattleActorControl___c__287_T___UpdateMaterialsOnRenderders_b__287_1,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_Material__bool___ctor__);
        v96 = (*p_rgctx_data)->_0_BattleActorControl___c__287_T_;
        if ( (BYTE2(v96->vtable[0].methodPtr) & 1) == 0 )
          sub_AF52C4((*p_rgctx_data)->_0_BattleActorControl___c__287_T_);
        v97 = (char *)v96->static_fields;
        *((_QWORD *)v97 + 2) = v83;
        sub_B5D560((BattleServantConfConponent_o *)(v97 + 16), (System_Int32_array **)v83, v90, v91, v92, v93, v94, v95);
      }
      v98 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              materials,
              (System_Func_TSource__bool__o *)v83,
              (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_Material___);
      v101 = v98;
      if ( !v98 )
        sub_B5D69C(0LL, v99);
      klass = v98->klass;
      if ( *(_WORD *)&v98->klass->_2.bitflags1 )
      {
        v103 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
        {
          ++v103;
          p_offset += 4;
          if ( v103 >= *(unsigned __int16 *)&v98->klass->_2.bitflags1 )
            goto LABEL_90;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_90:
        p_method = sub_AF54C0(v98, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL, v100);
      }
      v108 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
               v101,
               *(_QWORD *)(p_method + 8));
      if ( !v108 )
        sub_B5D69C(0LL, v106);
      while ( 1 )
      {
        v109 = *(_QWORD *)v108;
        if ( *(_WORD *)(*(_QWORD *)v108 + 298LL) )
        {
          v110 = 0LL;
          v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v111 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v110;
            v111 += 4;
            if ( v110 >= *(unsigned __int16 *)(*(_QWORD *)v108 + 298LL) )
              goto LABEL_97;
          }
          v112 = v109 + 16LL * *v111 + 312;
        }
        else
        {
LABEL_97:
          v112 = sub_AF54C0(v108, System_Collections_IEnumerator_TypeInfo, 0LL, v107);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v112)(v108, *(_QWORD *)(v112 + 8)) & 1) == 0 )
          break;
        v114 = *(_QWORD *)v108;
        if ( *(_WORD *)(*(_QWORD *)v108 + 298LL) )
        {
          v115 = 0LL;
          v116 = (int *)(*(_QWORD *)(v114 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_Material__c **)v116 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
          {
            ++v115;
            v116 += 4;
            if ( v115 >= *(unsigned __int16 *)(*(_QWORD *)v108 + 298LL) )
              goto LABEL_104;
          }
          v117 = v114 + 16LL * *v116 + 312;
        }
        else
        {
LABEL_104:
          v117 = sub_AF54C0(v108, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL, v113);
        }
        v118 = (System_Uri_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v108, *(_QWORD *)(v117 + 8));
        if ( !updateFunc )
          sub_B5D69C(v118, v118);
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)updateFunc,
          v118,
          (const MethodInfo_258B334 *)Method_System_Action_Material__Invoke__);
      }
      v129[v64] = 143;
      v119 = ++v130;
      v120 = *(_QWORD *)v108;
      if ( *(_WORD *)(*(_QWORD *)v108 + 298LL) )
      {
        v121 = 0LL;
        v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v122 - 1) != System_IDisposable_TypeInfo )
        {
          ++v121;
          v122 += 4;
          if ( v121 >= *(unsigned __int16 *)(*(_QWORD *)v108 + 298LL) )
            goto LABEL_113;
        }
        v123 = v120 + 16LL * *v122 + 312;
      }
      else
      {
LABEL_113:
        v123 = sub_AF54C0(v108, System_IDisposable_TypeInfo, 0LL, v113);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v123)(v108, *(_QWORD *)(v123 + 8));
      v64 = 0;
      if ( v119 )
      {
        v64 = v119;
        if ( v129[v119 - 1] == 143 )
        {
          v130 = v119 - 1;
          v64 = v119 - 1;
        }
      }
    }
    v129[v64] = 163;
    v124 = ++v130;
    v125 = *(_QWORD *)v63;
    if ( *(_WORD *)(*(_QWORD *)v63 + 298LL) )
    {
      v126 = 0LL;
      v127 = (int *)(*(_QWORD *)(v125 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v127 - 1) != System_IDisposable_TypeInfo )
      {
        ++v126;
        v127 += 4;
        if ( v126 >= *(unsigned __int16 *)(*(_QWORD *)v63 + 298LL) )
          goto LABEL_126;
      }
      v128 = v125 + 16LL * *v127 + 312;
    }
    else
    {
LABEL_126:
      v128 = sub_AF54C0(v63, System_IDisposable_TypeInfo, 0LL, v69);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v128)(v63, *(_QWORD *)(v128 + 8));
    if ( v124 && v129[v124 - 1] == 163 )
      v130 = v124 - 1;
  }
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *IsHideShadow; // x0
  __int64 v13; // x1
  struct BattleServantData_o *v14; // x8
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *shadowObj; // x20
  struct BattleServantData_o *v19; // x8
  BattleBgMaster_o *v20; // x20
  int32_t v21; // w21
  int32_t BgShadowImageId; // w0
  const MethodInfo *v23; // x2
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v25; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v27; // x8
  const MethodInfo *v28; // x1
  struct BattlePerformance_o *v29; // x8
  BattleServantData_o *v30; // x20
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x2
  int SpecialShadowEffectId; // w21
  UnityEngine_Object_o *v34; // x21
  int uniqueId; // w8
  unsigned int v36; // w21
  int v37; // w22
  int32_t BattleSize; // w1
  const MethodInfo *v39; // x2
  __int64 v40; // x0
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7FFA & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BattleBgMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E7FFA = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (BattleServantData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_76;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v14 = this->fields.battleSvtData;
  if ( !v14 )
    goto LABEL_76;
  if ( !v14->fields.isHideShadow )
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
          v19 = this->fields.battleSvtData;
          if ( !v19 )
            goto LABEL_76;
          if ( v19->fields.isEntry )
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
      IsHideShadow = (BattleServantData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IsHideShadow )
        goto LABEL_76;
      IsHideShadow = (BattleServantData_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)IsHideShadow,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_76;
      v20 = (BattleBgMaster_o *)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_76;
      v21 = (int)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v20 )
        goto LABEL_76;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v20, v21, (int32_t)IsHideShadow, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v23);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v25 = this->fields.performance;
        if ( !v25 )
          goto LABEL_76;
        data = (UnityEngine_Object_o *)v25->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v27 = this->fields.performance;
          if ( !v27 )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)v27->fields.data;
          if ( !IsHideShadow )
            goto LABEL_76;
          GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v28);
          v29 = this->fields.performance;
          if ( !v29 )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)v29->fields.data;
          if ( !IsHideShadow )
            goto LABEL_76;
          IsHideShadow = (BattleServantData_o *)BattleData__GetShadowOffSvtIds((BattleData_o *)IsHideShadow, 0LL);
          if ( !this->fields.performance )
            goto LABEL_76;
          v30 = IsHideShadow;
          SpecialShadowEffectId = BattlePerformance__GetSpecialShadowEffectId(this->fields.performance, 0LL);
          if ( this->fields.currentSpShadowEffectId != SpecialShadowEffectId )
          {
            this->fields.currentSpShadowEffectId = SpecialShadowEffectId;
            BattleActorControl__DestroySpShadowObj(this, v31);
          }
          if ( SpecialShadowEffectId >= 1 )
            BattleActorControl__changeSpecialShadow(this, SpecialShadowEffectId, v32);
          v34 = (UnityEngine_Object_o *)this->fields.shadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
          if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
          {
            if ( !v30 )
              goto LABEL_76;
            uniqueId = v30->fields.uniqueId;
            if ( uniqueId >= 1 )
            {
              v36 = 0;
              while ( 1 )
              {
                if ( v36 >= uniqueId )
                {
                  v40 = sub_B5D6C8(IsHideShadow);
                  sub_B5D668(v40, 0LL);
                }
                IsHideShadow = this->fields.battleSvtData;
                if ( !IsHideShadow )
                  goto LABEL_76;
                v37 = *((_DWORD *)&v30->fields.userSvtId.fields.currentCryptoKey + (int)v36);
                IsHideShadow = (BattleServantData_o *)BattleServantData__getActorSvtId(IsHideShadow, 0LL);
                if ( v37 == (_DWORD)IsHideShadow )
                  break;
                uniqueId = v30->fields.uniqueId;
                if ( (int)++v36 >= uniqueId )
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
      BattleActorControl__SetShadowSize(this, BattleSize, v39);
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
    sub_B5D69C(IsHideShadow, v13);
  }
  v15 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
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

  if ( (byte_42E802E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__,
      (_DWORD)eventName,
      (_DWORD)motionName,
      logOnInvalid);
    byte_42E802E = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B5D69C(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
         (System_Xml_XmlQualifiedName_o *)eventName,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    System_String__op_Inequality(motionName, (System_String_o *)value, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__WaitToNoblePhantasmPlay(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E803E & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__WaitToNoblePhantasmPlay_d__266_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E803E = 1;
  }
  v5 = sub_B5D694(BattleActorControl__WaitToNoblePhantasmPlay_d__266_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__266___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__214_0(
        BattleActorControl_o *this,
        System_String_o *playedSoundId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *battleSvtData; // x9
  BattleData_o *data; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  v5 = this;
  if ( (byte_42E808C & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B5D5C4(
                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                     (_DWORD)playedSoundId,
                                     (_DWORD)method,
                                     v3);
    byte_42E808C = 1;
  }
  performance = v5->fields.performance;
  if ( !performance )
    goto LABEL_10;
  battleSvtData = v5->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_10;
  data = performance->fields.data;
  v10 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v11.fields.currentCryptoKey = v10;
  *(_QWORD *)&v11.fields.fakeValue = v9;
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v11, 0LL);
  if ( !data )
LABEL_10:
    sub_B5D69C(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__137_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__265_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__267_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformance_o *performance; // x0
  const MethodInfo *v9; // x3
  BattleFBXComponent_c *v10; // x0

  if ( (byte_42E808F & 1) == 0 )
  {
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6430/*"FINISHED"*/, v5, v6, v7);
    byte_42E808F = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_11;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  if ( this->fields.noblePhantasmCallback )
  {
    v10 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v10 = BattleFBXComponent_TypeInfo;
    }
    v10->static_fields->EnableEvent = 1;
    performance = (BattlePerformance_o *)this->fields.noblePhantasmCallback;
    if ( performance )
    {
      System_Action__Invoke((System_Action_o *)performance, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(performance, method);
  }
  BattleActorControl__sendEventFSM_24192704(this, (System_String_o *)StringLiteral_6430/*"FINISHED"*/, 0, v9);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__263_0(BattleActorControl_o *this, const MethodInfo *method)
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
  struct System_Collections_Generic_List_BattleActorControl__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E808D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v17, v18, v19);
    byte_42E808D = 1;
  }
  memset(&v26, 0, sizeof(v26));
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_11;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    if ( !v21 )
      break;
    current = v26.fields.current;
    if ( !v26.fields.current )
      sub_B5D69C(v21, v22);
    BattleActorControl__playAnimation_24205092(
      (BattleActorControl_o *)v26.fields.current,
      (System_String_o *)StringLiteral_23499/*"wait"*/,
      0,
      v23);
    BattleActorControl__ProcServantObjectVisibleCtr((BattleActorControl_o *)current, 1, 1, v25);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
LABEL_11:
    sub_B5D69C(noblePhantasmObjectVisibleCtrList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActorControl__Clear__);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__263_1(BattleActorControl_o *this, const MethodInfo *method)
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
  BattleSequenceManager_o *Instance; // x0
  __int64 v15; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v17; // x20
  __int64 v18; // x21
  __int64 v19; // x22
  int32_t v20; // w21
  BattleSequenceManager_o *v21; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v23; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v26; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v28; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42E808E & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v11, v12, v13);
    byte_42E808E = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  v17 = Instance;
  v19 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v18 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v29.fields.currentCryptoKey = v19;
  *(_QWORD *)&v29.fields.fakeValue = v18;
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_13;
  v20 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !Instance )
    goto LABEL_13;
  v21 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_13;
  m_CachedPtr = v21->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0LL);
  v23 = this->fields.battleSvtData;
  if ( !v23
    || (overwriteSvtVoiceId = v23->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v23->fields.treasuredvcLevel,
        v26 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v28 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B5D694(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v28,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v17) )
  {
LABEL_13:
    sub_B5D69C(Instance, v15);
  }
  BattleSequenceManager__loadSequence(
    v17,
    v20,
    m_CachedPtr,
    v26,
    overwriteSvtVoiceId,
    treasuredvcLevel,
    NpChargeStage,
    v28,
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__addBuffLoopEffect(
        BattleActorControl_o *this,
        BuffEntity_o *buffEntity,
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
  const MethodInfo *effectId; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  BattleEffectUtility_BuffEffectLoadArgument_o *v38; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v40; // w22
  UnityEngine_GameObject_o *v41; // x23
  UnityEngine_GameObject_o *v42; // x24
  float v43; // s0
  float v44; // s1
  float v45; // s2
  float v46; // s8
  float v47; // s9
  float v48; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v50; // x1
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  UnityEngine_Transform_o *transform; // x22
  int v54; // s0
  UnityEngine_Transform_o *v57; // x22
  int v58; // s0
  StatusEffectPosOverwriteMaster_o *v62; // x22
  int32_t v63; // w23
  int32_t v64; // w24
  const MethodInfo *v65; // x1
  int32_t v66; // w0
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 isEnemy; // w25
  UnityEngine_Transform_o *v69; // x22
  System_String_o *nodeName; // x24
  UnityEngine_Transform_o *v71; // x23
  int32_t v72; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x23
  float v74; // s0
  float v75; // s1
  float v76; // s2
  float v77; // s8
  float v78; // s9
  float v79; // s10
  float v80; // s0
  float v81; // s1
  float v82; // s2
  struct BattleServantData_o *v83; // x8
  float x; // s10
  float y; // s8
  float z; // s9
  bool v87; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v89; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E8077 & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)buffEntity, (_DWORD)method, v3);
    sub_B5D5C4(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ConstantStrMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_7164/*"HIDE_STATUS_EFFECT_IDS"*/, v30, v31, v32);
    byte_42E8077 = 1;
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
         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                    (DataManager_o *)buffLoopEffectDict,
                                                                                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7164/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v36 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v36 < 1 )
  {
LABEL_15:
    v38 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B5D694(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v38, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v40 = buffEntity->fields.effectId;
    v41 = gameObject;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_zero(0LL);
    buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      v46 = v43;
      v47 = v44;
      v48 = v45;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v50);
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      v89.fields.x = v46;
      v89.fields.y = v47;
      v89.fields.z = v48;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v41,
                                               v40,
                                               v42,
                                               v89,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v38,
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
        *(UnityEngine_Vector3_o *)&v54 = UnityEngine_Vector3__get_zero(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v54, 0LL);
          v57 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
          *(UnityEngine_Quaternion_o *)&v58 = UnityEngine_Quaternion__get_identity(0LL);
          if ( v57 )
          {
            UnityEngine_Transform__set_localRotation(v57, *(UnityEngine_Quaternion_o *)&v58, 0LL);
            buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)buffLoopEffectDict, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( buffLoopEffectDict )
              {
                v62 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_47;
                v63 = buffEntity->fields.effectId;
                v64 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
                v66 = BattleActorControl__getLimitCount(this, v65);
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)StatusEffectPosOverwriteMaster__TryGetEntity(v62, &entity, v63, v64, v66, 0LL);
                if ( ((unsigned __int8)buffLoopEffectDict & 1) != 0 )
                {
                  battleSvtData = this->fields.battleSvtData;
                  if ( !battleSvtData )
                    goto LABEL_47;
                  isEnemy = battleSvtData->fields.isEnemy;
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                  if ( !this->fields.actorObject )
                    goto LABEL_47;
                  v69 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_47;
                  nodeName = entity->fields.nodeName;
                  v71 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v72 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v71, nodeName, v72, 1, 0LL);
                  *(UnityEngine_Vector3_o *)&v74 = UnityEngine_Vector3__get_zero(0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  v77 = v74;
                  v78 = v75;
                  v79 = v76;
                  *(UnityEngine_Vector3_o *)&v80 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v69 )
                    goto LABEL_47;
                  v90.fields.x = v77 + v80;
                  v90.fields.y = v78 + v81;
                  v90.fields.z = v79 + v82;
                  UnityEngine_Transform__set_localPosition(v69, v90, 0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  v95 = UnityEngine_Quaternion__Euler_35652376(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v69, v95, 0LL);
                  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)entity;
                  if ( !entity )
                    goto LABEL_47;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v69, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v69, NodeFromLvName, 0LL);
                }
              }
              v83 = this->fields.battleSvtData;
              if ( !v83 )
                goto LABEL_47;
              if ( v83->fields.isEnemy )
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
                v94.fields.x = -x;
                v94.fields.y = y;
                v94.fields.z = z;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v94, 0LL);
              }
              buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v87 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v87, 0LL);
                buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectToNode,
                    (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B5D69C(buffLoopEffectDict, effectId);
  }
  v37 = 0LL;
  while ( ValueArray->m_Items[v37 + 1] != buffEntity->fields.effectId )
  {
    if ( (int)++v37 >= (int)v36 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B5D69C(0LL, method);
  BattlePerformance__callServant(performance, this->fields.actiondata, 0LL);
}


void __fastcall BattleActorControl__changeShadowType(
        BattleActorControl_o *this,
        bool isNormal,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v11; // x1
  UnityEngine_Component_o *Component_WebViewObject; // x0

  if ( (byte_42E8046 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, isNormal, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E8046 = 1;
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
                                                                   (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, isNormal, 0LL),
            (Component_WebViewObject = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_B5D69C(Component_WebViewObject, v11);
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
  __int64 v21; // x20
  UnityEngine_Component_o *Component_WebViewObject; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v32; // w21
  System_Action_o *v33; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_42E8045 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, shadowEffectId, (_DWORD)method, v3);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_Renderer___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass274_0__changeSpecialShadow_b__0__, v15, v16, v17);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass274_0_TypeInfo, v18, v19, v20);
    byte_42E8045 = 1;
  }
  v21 = sub_B5D694(BattleActorControl___c__DisplayClass274_0_TypeInfo);
  BattleActorControl___c__DisplayClass274_0___ctor((BattleActorControl___c__DisplayClass274_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_19;
  *(_QWORD *)(v21 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  *(_DWORD *)(v21 + 24) = shadowEffectId;
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
                                                               (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_WebViewObject )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_WebViewObject, 0, 0LL);
          v32 = *(_DWORD *)(v21 + 24);
          v33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v33,
            (Il2CppObject *)v21,
            Method_BattleActorControl___c__DisplayClass274_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          BattleEffectUtility__LoadEffectAssetIfNotYet(v32, v33, performance, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B5D69C(Component_WebViewObject, v23);
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
    sub_B5D69C(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattlePerformance_o *performance; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E805E & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleActorControl_endChangeAppearance__, v5, v6, v7);
    byte_42E805E = 1;
  }
  performance = this->fields.performance;
  v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_B5D69C(v10, v11);
  BattlePerformance__checkChangeAppearance(performance, v9, 0LL);
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
    v11 = sub_B5D6C8(this);
    sub_B5D668(v11, 0LL);
  }
  this = (BattleActorControl_o *)motionFSM->m_Items[actindex];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(this, name);
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
    v10 = sub_B5D6C8(this);
    sub_B5D668(v10, 0LL);
  }
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(this, name);
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
    sub_B5D69C(0LL, key);
  return BattleServantData__checkScriptValue(battleSvtData, key, value, 0LL);
}


bool __fastcall BattleActorControl__checkStepFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.stepFlg;
}


bool __fastcall BattleActorControl__checkStepIn(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantData_o *battleSvtData; // x0
  int32_t StepRate; // w19

  if ( (byte_42E8009 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22736/*"summon"*/, (_DWORD)method, v2, v3);
    byte_42E8009 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_22736/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_B5D69C(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_35654020(0, 1000, 0LL) < StepRate;
}


bool __fastcall BattleActorControl__checkVoice(
        BattleActorControl_o *this,
        int32_t type,
        bool isNp,
        const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_42E8017 & 1) == 0 )
  {
    sub_B5D5C4(&Voice_TypeInfo, type, isNp, method);
    byte_42E8017 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_24200896(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_24200896(
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

  if ( (byte_42E8018 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)voiceTypeId, isNp, method);
    byte_42E8018 = 1;
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
      sub_B5D69C(battleSvtData, voiceTypeId);
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

  if ( (byte_42E8066 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__coAddAura_d__324_TypeInfo, auraEffectId, priority, method);
    byte_42E8066 = 1;
  }
  v7 = sub_B5D694(BattleActorControl__coAddAura_d__324_TypeInfo);
  BattleActorControl__coAddAura_d__324___ctor((BattleActorControl__coAddAura_d__324_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
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

  if ( (byte_42E8069 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__colShiftServant_d__330_TypeInfo, (_DWORD)shiftSvt, isShift, finishCallback);
    byte_42E8069 = 1;
  }
  v9 = sub_B5D694(BattleActorControl__colShiftServant_d__330_TypeInfo);
  BattleActorControl__colShiftServant_d__330___ctor((BattleActorControl__colShiftServant_d__330_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_B5D560((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)shiftSvt, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_B5D560(
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

  if ( (byte_42E806A & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__colShiftServantChange_d__331_TypeInfo, (_DWORD)shiftSvt, isShift, method);
    byte_42E806A = 1;
  }
  v7 = sub_B5D694(BattleActorControl__colShiftServantChange_d__331_TypeInfo);
  BattleActorControl__colShiftServantChange_d__331___ctor(
    (BattleActorControl__colShiftServantChange_d__331_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)shiftSvt, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v7 + 48) = isShift;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__collChangeAppearance(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E8062 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__collChangeAppearance_d__319_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8062 = 1;
  }
  v5 = sub_B5D694(BattleActorControl__collChangeAppearance_d__319_TypeInfo);
  BattleActorControl__collChangeAppearance_d__319___ctor(
    (BattleActorControl__collChangeAppearance_d__319_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadDressServant(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E805D & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__colloadDressServant_d__314_TypeInfo, flg, (_DWORD)method, v3);
    byte_42E805D = 1;
  }
  v6 = sub_B5D694(BattleActorControl__colloadDressServant_d__314_TypeInfo);
  BattleActorControl__colloadDressServant_d__314___ctor((BattleActorControl__colloadDressServant_d__314_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v6 + 40) = flg;
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadTransformServant(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E805C & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__colloadTransformServant_d__312_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E805C = 1;
  }
  v5 = sub_B5D694(BattleActorControl__colloadTransformServant_d__312_TypeInfo);
  BattleActorControl__colloadTransformServant_d__312___ctor(
    (BattleActorControl__colloadTransformServant_d__312_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__coroutinePostCallBack(
        BattleActorControl_o *this,
        BattleCallBackBase_o *callBack,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_42E8014 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__coroutinePostCallBack_d__205_TypeInfo, (_DWORD)callBack, (_DWORD)method, v4);
    byte_42E8014 = 1;
  }
  v7 = sub_B5D694(BattleActorControl__coroutinePostCallBack_d__205_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__205___ctor(
    (BattleActorControl__coroutinePostCallBack_d__205_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B5D69C(v8, v9);
  *(_QWORD *)(v7 + 40) = callBack;
  sub_B5D560((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callBack, v10, v11, v12, v13, v14, v15);
  *(float *)(v7 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42E8061 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, (_DWORD)method, v2, v3);
    byte_42E8061 = 1;
  }
  BattleActorControl__sendEventFSM_24192704(this, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0, v3);
}


void __fastcall BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v3; // x3
  const MethodInfo *v5; // x1
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v8; // x2
  struct BattleActionData_o *actiondata; // x8
  struct BattleServantData_o *v10; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *v12; // x8
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_42E8015 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8879/*"MOTION_BACK"*/, (_DWORD)method, (_DWORD)v2, v3);
    byte_42E8015 = 1;
  }
  BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_26;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v8);
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
  v10 = this->fields.battleSvtData;
  if ( !v10 )
    goto LABEL_26;
  isEnemy = v10->fields.isEnemy;
  v12 = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !v12 )
      goto LABEL_26;
    if ( v12->fields.treasureDvcId >= 1 )
      goto LABEL_16;
  }
  else if ( !v12 )
  {
    goto LABEL_26;
  }
  if ( System_String__op_Equality(v12->fields.motionname, (System_String_o *)StringLiteral_8879/*"MOTION_BACK"*/, 0LL) )
  {
LABEL_16:
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v5);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_26;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, v5) )
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
        BattleActorControl__invisibleSvtModel(this, 1, v14);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_26:
    sub_B5D69C(battleSvtData, v5);
  BattlePerformance__endActionData((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_24192704(this, call, 0, v3);
}


void __fastcall BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *transform; // x0
  __int64 v12; // x1
  int v13; // w8
  _DWORD *v14; // x19
  unsigned int v15; // w21
  char *v16; // x8
  UnityEngine_Component_o *v17; // x20
  int v18; // w8
  void *v19; // x20
  unsigned int v20; // w24
  __int64 v21; // x0

  if ( (byte_42E806B & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_18428/*"ef_pig_return01"*/, v8, v9, v10);
    byte_42E806B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_B5D69C(transform, v12);
  }
  v13 = *((_DWORD *)transform + 6);
  v14 = transform;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        goto LABEL_21;
      v16 = (char *)&v14[2 * v15];
      v17 = (UnityEngine_Component_o *)*((_QWORD *)v16 + 4);
      if ( !v17 )
        goto LABEL_20;
      transform = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v16 + 4), 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = (void *)System_String__Contains(
                            (System_String_o *)transform,
                            (System_String_o *)StringLiteral_18428/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                      v17,
                      (const MethodInfo_1ADE6A8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !transform )
          goto LABEL_20;
        v18 = *((_DWORD *)transform + 6);
        v19 = transform;
        if ( v18 >= 1 )
          break;
      }
LABEL_18:
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        return;
    }
    v20 = 0;
    while ( v20 < v18 )
    {
      transform = (void *)*((_QWORD *)v19 + (int)v20 + 4);
      if ( !transform )
        goto LABEL_20;
      UnityEngine_ParticleSystem__set_loop((UnityEngine_ParticleSystem_o *)transform, 0, 0LL);
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        goto LABEL_18;
    }
LABEL_21:
    v21 = sub_B5D6C8(transform);
    sub_B5D668(v21, 0LL);
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
    BattleActorControl__finishMotion_24199556(this, v7);
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
    sub_B5D69C(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_24199556(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *performance; // x20
  __int64 v6; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_42E8013 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8013 = 1;
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
      sub_B5D69C(MotionSkip, v6);
    }
    BattlePerformance__finishMotion(MotionSkip, this, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffect(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantData_o *battleSvtData; // x0
  BattleServantData_o *v7; // x8
  int32_t index; // w21
  struct BattleServantData_o *v9; // x8
  int32_t v10; // w20
  int32_t seqIdFromMstTDSeqWeight; // w22

  if ( (byte_42E7FF2 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E7FF2 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v7 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL)
    || (index = v7->fields.index,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL),
        (v9 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B5D69C(battleSvtData, name);
  }
  v10 = (int)battleSvtData;
  seqIdFromMstTDSeqWeight = v9->fields.seqIdFromMstTDSeqWeight;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__loadNoblePhantasmEffect(index, v10, name, seqIdFromMstTDSeqWeight, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffectFromActor(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantData_o *battleSvtData; // x0
  int32_t v7; // w20
  BattleServantData_o *v8; // x8
  int32_t v9; // w21
  int32_t WeaponGroup; // w22

  if ( (byte_42E7FF3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)name, (_DWORD)method, v3);
    byte_42E7FF3 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v7 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B5D69C(battleSvtData, name);
  }
  v9 = (int)battleSvtData;
  WeaponGroup = BattleServantData__getWeaponGroup(v8, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__loadActorEffectFromActor(v7, v9, WeaponGroup, name, 0LL);
}


int32_t __fastcall BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
  return BattleServantData__getStrParam(battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleActorControl__getTargetObjectVec(
        BattleActorControl_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s11
  UnityEngine_Object_o *targetObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  float v12; // s1
  float v13; // s2
  float v14; // s0
  float v15; // s0
  float v16; // s0
  float v17; // s1
  float v18; // s2
  struct BattlePerformance_o *v19; // x8
  float v20; // s10
  float v21; // s8
  float v22; // s9
  float v23; // s2
  float v24; // s0
  float v25; // s1
  float v26; // s0
  float v27; // s1
  float v28; // s2
  struct BattlePerformance_o *v29; // x8
  float v30; // s0
  float v31; // s1
  float v32; // s2
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v5 = this;
  if ( (byte_42E800D & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, pos, (_DWORD)method, v3);
    byte_42E800D = 1;
  }
  performance = v5->fields.performance;
  if ( !performance )
    goto LABEL_37;
  distanceofactor = performance->fields.distanceofactor;
  zero = UnityEngine_Vector3__get_zero(0LL);
  targetObject = (UnityEngine_Object_o *)v5->fields.targetObject;
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
    this = (BattleActorControl_o *)v5->fields.targetObject;
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
    sub_B5D69C(this, *(_QWORD *)&pos);
  }
LABEL_11:
  if ( !v5->fields.dir )
    distanceofactor = -distanceofactor;
  switch ( pos )
  {
    case 0:
      this = (BattleActorControl_o *)v5->fields.targetObject;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = distanceofactor + v14;
      goto LABEL_20;
    case 1:
      this = (BattleActorControl_o *)v5->fields.targetObject;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v15 - distanceofactor;
LABEL_20:
      y = v12 + 0.0;
      z = v13 + 0.0;
      break;
    case 3:
      x = v5->fields.criteriaPos.fields.x;
      y = v5->fields.criteriaPos.fields.y;
      z = v5->fields.criteriaPos.fields.z;
      break;
    case 4:
      this = (BattleActorControl_o *)v5->fields.myStage;
      if ( !this )
        goto LABEL_37;
      goto LABEL_29;
    case 5:
      this = (BattleActorControl_o *)v5->fields.enemyStage;
      if ( !this )
        goto LABEL_37;
LABEL_29:
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      v35 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v35.fields.x;
      y = v35.fields.y;
      z = v35.fields.z;
      break;
    case 6:
      this = (BattleActorControl_o *)v5->fields.myStage;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v19 = v5->fields.performance;
      if ( !v19 )
        goto LABEL_37;
      v20 = v18;
      v21 = v16;
      v22 = v17;
      v23 = UnityEngine_Mathf__InverseLerp(40.0, 70.0, v19->fields.currentFov, 0LL);
      v24 = 2.0;
      v25 = 14.0;
      goto LABEL_35;
    case 7:
      this = (BattleActorControl_o *)v5->fields.myStage;
      if ( !this )
        goto LABEL_37;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v29 = v5->fields.performance;
      if ( !v29 )
        goto LABEL_37;
      v20 = v28;
      v21 = v26;
      v22 = v27;
      v23 = UnityEngine_Mathf__InverseLerp(40.0, 70.0, v29->fields.currentFov, 0LL);
      v24 = 3.0;
      v25 = 8.0;
LABEL_35:
      x = v21 + (float)(distanceofactor * UnityEngine_Mathf__LerpUnclamped(v24, v25, v23, 0LL));
      y = v22 + 0.0;
      z = v20 + 0.0;
      break;
    default:
      break;
  }
  v30 = x;
  v31 = y;
  v32 = z;
  result.fields.z = v32;
  result.fields.y = v31;
  result.fields.x = v30;
  return result;
}


int32_t __fastcall BattleActorControl__getWaveCount(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  struct BattlePerformance_o *v8; // x8
  struct BattleData_o *data; // x8

  if ( (byte_42E7FF1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FF1 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v6 )
    return -1;
  v8 = this->fields.performance;
  if ( !v8 || (data = v8->fields.data) == 0LL )
    sub_B5D69C(v6, v7);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_ActorMotionActiveCheck_o *result; // x0
  BattleActorControl_ActorMotionActiveCheck_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_42E800E & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_ActorMotionActiveCheck_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E800E = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v6 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_B5D694(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v6, this, 0LL);
    this->fields._checkMotion = v6;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._checkMotion,
      (System_Int32_array **)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    return this->fields._checkMotion;
  }
  return result;
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w19
  const MethodInfo *v7; // x1
  int32_t LimitCount; // w20

  if ( (byte_42E7FF0 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7FF0 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B5D69C(0LL, method);
  SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
  LimitCount = BattleActorControl__getLimitCount(this, v7);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x19
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E7FEC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v7, v8, v9);
    byte_42E7FEC = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v10 )
    sub_B5D69C(v11, v12);
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                  (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_B5D69C(0LL, hideFlg);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v9; // x8
  unsigned __int64 v10; // x21
  UnityEngine_Object_o *v11; // x19
  __int64 v13; // x0

  v4 = this;
  if ( (byte_42E8006 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_13316/*"SummonEndFlag"*/, v5, v6, v7);
    byte_42E8006 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B5D69C(this, method);
  v9 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v9 < 1 )
    return 0;
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= (unsigned int)v9 )
    {
      v13 = sub_B5D6C8(this);
      sub_B5D668(v13, 0LL);
    }
    v11 = (UnityEngine_Object_o *)motionFSM->m_Items[v10];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v11 )
        goto LABEL_19;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v11, 0LL);
      if ( !this )
        goto LABEL_19;
      this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
      if ( !this )
        goto LABEL_19;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13316/*"SummonEndFlag"*/,
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
    LODWORD(v9) = motionFSM->max_length;
    if ( (__int64)++v10 >= (int)v9 )
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
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_B5D69C(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
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
  const MethodInfo *v63; // x3
  __int64 v64; // x21
  BattleActorControl_EndCallEvent_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppObject *v74; // x0
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x0
  const MethodInfo *v77; // x3
  int32_t v78; // [xsp+Ch] [xbp-54h] BYREF
  float v79; // [xsp+28h] [xbp-38h] BYREF
  float v80; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E8032 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_moveStep__, (_DWORD)target, pos, pmevent);
    sub_B5D5C4(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&float_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12523/*"STEP_START"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_22630/*"step_back"*/, v42, v43, v44);
    byte_42E8032 = 1;
  }
  this->fields.targetObject = target;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  BattleActorControl__playAnimation_24205092(this, (System_String_o *)StringLiteral_22630/*"step_back"*/, 0, v63);
  v64 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v64, 0LL);
  v65 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v65, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v64 )
    sub_B5D69C(v66, v67);
  *(_QWORD *)(v64 + 16) = v65;
  sub_B5D560((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)v65, v68, v69, v70, v71, v72, v73);
  v80 = hight;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v80);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_19388/*"hight"*/,
    v74,
    0LL);
  v79 = time;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v79);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_22982/*"time"*/,
    v75,
    0LL);
  v78 = pos;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v78);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_21799/*"pos"*/,
    v76,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12523/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v64,
    v77);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_42E8034 & 1) == 0 )
  {
    sub_B5D5C4(&iTween_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8034 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
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
  const MethodInfo *v63; // x3
  __int64 v64; // x21
  BattleActorControl_EndCallEvent_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppObject *v74; // x0
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x0
  const MethodInfo *v77; // x3
  int32_t v78; // [xsp+Ch] [xbp-54h] BYREF
  float v79; // [xsp+28h] [xbp-38h] BYREF
  float v80; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E802F & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_moveJump__, (_DWORD)target, pos, pmevent);
    sub_B5D5C4(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&float_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_8380/*"JUMP_UP"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_20337/*"jump"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v42, v43, v44);
    byte_42E802F = 1;
  }
  this->fields.targetObject = target;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  BattleActorControl__playAnimation_24205092(this, (System_String_o *)StringLiteral_20337/*"jump"*/, 0, v63);
  v64 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v64, 0LL);
  v65 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v65, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v64 )
    sub_B5D69C(v66, v67);
  *(_QWORD *)(v64 + 16) = v65;
  sub_B5D560((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)v65, v68, v69, v70, v71, v72, v73);
  v80 = hight;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v80);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_19388/*"hight"*/,
    v74,
    0LL);
  v79 = time;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v79);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_22982/*"time"*/,
    v75,
    0LL);
  v78 = pos;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v78);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_21799/*"pos"*/,
    v76,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8380/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v64,
    v77);
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
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
  const MethodInfo *v63; // x3
  __int64 v64; // x21
  BattleActorControl_EndCallEvent_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppObject *v74; // x0
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x0
  const MethodInfo *v77; // x3
  int32_t v78; // [xsp+Ch] [xbp-54h] BYREF
  float v79; // [xsp+28h] [xbp-38h] BYREF
  float v80; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E8031 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_moveStep__, (_DWORD)target, pos, pmevent);
    sub_B5D5C4(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&float_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_12523/*"STEP_START"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_22631/*"step_front"*/, v42, v43, v44);
    byte_42E8031 = 1;
  }
  this->fields.targetObject = target;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  BattleActorControl__playAnimation_24205092(this, (System_String_o *)StringLiteral_22631/*"step_front"*/, 0, v63);
  v64 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v64, 0LL);
  v65 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v65, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v64 )
    sub_B5D69C(v66, v67);
  *(_QWORD *)(v64 + 16) = v65;
  sub_B5D560((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)v65, v68, v69, v70, v71, v72, v73);
  v80 = hight;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v80);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_19388/*"hight"*/,
    v74,
    0LL);
  v79 = time;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v79);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_22982/*"time"*/,
    v75,
    0LL);
  v78 = pos;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v78);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_21799/*"pos"*/,
    v76,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12523/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v64,
    v77);
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  const MethodInfo *v75; // x3
  __int64 v76; // x21
  BattleActorControl_EndCallEvent_o *v77; // x22
  __int64 v78; // x0
  __int64 v79; // x1
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  Il2CppObject *v86; // x0
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x0
  const MethodInfo *v89; // x3
  __int64 v90; // x20
  BattleActorControl_EndCallEvent_o *v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  const MethodInfo *v98; // x3
  int32_t v99; // [xsp+Ch] [xbp-54h] BYREF
  float v100; // [xsp+28h] [xbp-38h] BYREF
  float v101; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E8030 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_moveStep__, (_DWORD)target, pos, pmevent);
    sub_B5D5C4(&Method_BattleActorControl_playAnimation__, v18, v19, v20);
    sub_B5D5C4(&BattleActorControl_EndCallEvent_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&float_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12523/*"STEP_START"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_21277/*"name"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_22631/*"step_front"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_12522/*"STEP_END_02"*/, v54, v55, v56);
    byte_42E8030 = 1;
  }
  this->fields.targetObject = target;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  BattleActorControl__playAnimation_24205092(this, (System_String_o *)StringLiteral_22631/*"step_front"*/, 0, v75);
  v76 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v76, 0LL);
  v77 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v77, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v76 )
    goto LABEL_6;
  *(_QWORD *)(v76 + 16) = v77;
  sub_B5D560((BattleServantConfConponent_o *)(v76 + 16), (System_Int32_array **)v77, v80, v81, v82, v83, v84, v85);
  v101 = hight;
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v101);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v76,
    (System_String_o *)StringLiteral_19388/*"hight"*/,
    v86,
    0LL);
  v100 = time;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v100);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v76,
    (System_String_o *)StringLiteral_22982/*"time"*/,
    v87,
    0LL);
  v99 = pos;
  v88 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v99);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v76,
    (System_String_o *)StringLiteral_21799/*"pos"*/,
    v88,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12523/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v76,
    v89);
  v90 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v90, 0LL);
  v91 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v91, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v90 )
LABEL_6:
    sub_B5D69C(v78, v79);
  *(_QWORD *)(v90 + 16) = v91;
  sub_B5D560((BattleServantConfConponent_o *)(v90 + 16), (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v90,
    (System_String_o *)StringLiteral_21277/*"name"*/,
    (Il2CppObject *)StringLiteral_23499/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12522/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v90,
    v98);
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
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
  const MethodInfo *v63; // x3
  __int64 v64; // x21
  BattleActorControl_EndCallEvent_o *v65; // x22
  __int64 v66; // x0
  __int64 v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppObject *v74; // x0
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x0
  const MethodInfo *v77; // x3
  int32_t v78; // [xsp+Ch] [xbp-54h] BYREF
  float v79; // [xsp+28h] [xbp-38h] BYREF
  float v80; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_42E8033 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_moveStep__, (_DWORD)target, pos, pmevent);
    sub_B5D5C4(&BattleActorControl_EndCallEvent_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&float_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23095/*"treasure_arms"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_12523/*"STEP_START"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v42, v43, v44);
    byte_42E8033 = 1;
  }
  this->fields.targetObject = target;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  BattleActorControl__playAnimation_24205092(this, (System_String_o *)StringLiteral_23095/*"treasure_arms"*/, 0, v63);
  v64 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v64, 0LL);
  v65 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v65, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v64 )
    sub_B5D69C(v66, v67);
  *(_QWORD *)(v64 + 16) = v65;
  sub_B5D560((BattleServantConfConponent_o *)(v64 + 16), (System_Int32_array **)v65, v68, v69, v70, v71, v72, v73);
  v80 = hight;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v80);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_19388/*"hight"*/,
    v74,
    0LL);
  v79 = time;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v79);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_22982/*"time"*/,
    v75,
    0LL);
  v78 = pos;
  v76 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v78);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v64,
    (System_String_o *)StringLiteral_21799/*"pos"*/,
    v76,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12523/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v64,
    v77);
}


void __fastcall BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  System_Collections_Hashtable_o *v34; // x20
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 v39; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v41; // [xsp+8h] [xbp-28h] BYREF
  int v42; // [xsp+Ch] [xbp-24h] BYREF
  char v43[4]; // [xsp+18h] [xbp-18h] BYREF
  int v44; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_42E803A & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&int_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&float_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v28, v29, v30);
    sub_B5D5C4(&iTween_TypeInfo, v31, v32, v33);
    byte_42E803A = 1;
  }
  v34 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v34, 0LL);
  v44 = 0;
  v35 = j_il2cpp_value_box_0(int_TypeInfo, &v44);
  if ( !v34 )
    sub_B5D69C(v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
    v34,
    StringLiteral_23719/*"y"*/,
    v35,
    v34->klass->vtable._24_Clear.methodPtr);
  v43[0] = 1;
  v37 = j_il2cpp_value_box_0(bool_TypeInfo, v43);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
    v34,
    StringLiteral_20221/*"islocal"*/,
    v37,
    v34->klass->vtable._24_Clear.methodPtr);
  v42 = 0;
  v38 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v42);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
    v34,
    StringLiteral_18341/*"easetype"*/,
    v38,
    v34->klass->vtable._24_Clear.methodPtr);
  v41 = time;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v41);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
    v34,
    StringLiteral_22982/*"time"*/,
    v39,
    v34->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(actorObject, v34, 0LL);
}


void __fastcall BattleActorControl__moveJump(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v3; // x3
  void *v4; // x20
  BattleActorControl_o *v5; // x19
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
  __int64 v18; // x22
  __int64 v19; // x21
  float v20; // s8
  float v21; // s9
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  BattleActorControl_o *v24; // x0
  float v25; // s0
  float v26; // s1

  v4 = table;
  v5 = this;
  if ( (byte_42E8036 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, (_DWORD)table, (_DWORD)method, v3);
    sub_B5D5C4(&float_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v12, v13, v14);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v15, v16, v17);
    byte_42E8036 = 1;
  }
  if ( !v4
    || (v18 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                v4,
                StringLiteral_19388/*"hight"*/,
                *(_QWORD *)(*(_QWORD *)v4 + 784LL)),
        v19 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                v4,
                StringLiteral_22982/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v4 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                                         v4,
                                         StringLiteral_21799/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v4 + 784LL)),
        !v18) )
  {
LABEL_12:
    sub_B5D69C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v18 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B5D990(v18);
    goto LABEL_14;
  }
  v4 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v18);
  if ( !v19 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v19 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B5D990(v19);
    goto LABEL_15;
  }
  v20 = *(float *)&this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v19);
  if ( !v4 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v4 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v24 = (BattleActorControl_o *)sub_B5D990(v4);
    goto LABEL_11;
  }
  v21 = *(float *)&this->klass;
  v22 = *(_DWORD *)j_il2cpp_object_unbox_0(v4);
  v24 = v5;
  v25 = v20;
  v26 = v21;
LABEL_11:
  BattleActorControl__moveJump_24217780(v24, v25, v26, v22, v23);
}


void __fastcall BattleActorControl__moveJump_24217780(
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
  BattleActorControl__moveUp_24216652(this, hight, time, v9);
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  System_Collections_Hashtable_o *v49; // x22
  const MethodInfo *v50; // x2
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x0
  __int64 v54; // x0
  bool v55; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x19
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+0h] [xbp-50h] BYREF
  float v59; // [xsp+18h] [xbp-38h] BYREF
  int v60; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E8037 & 1) == 0 )
  {
    sub_B5D5C4(&iTween_EaseType_TypeInfo, pos, (_DWORD)endcall, callbackObject);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&float_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Vector3_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_21543/*"oncompleteparams"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_21800/*"position"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_18583/*"endMotion"*/, v40, v41, v42);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v43, v44, v45);
    sub_B5D5C4(&iTween_TypeInfo, v46, v47, v48);
    byte_42E8037 = 1;
  }
  v49 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v49, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v50);
  v51 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec);
  if ( !v49 )
    sub_B5D69C(v51, v52);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
    v49,
    StringLiteral_21800/*"position"*/,
    v51,
    v49->klass->vtable._24_Clear.methodPtr);
  v60 = 1;
  v53 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v60);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
    v49,
    StringLiteral_18341/*"easetype"*/,
    v53,
    v49->klass->vtable._24_Clear.methodPtr);
  v59 = time;
  v54 = j_il2cpp_value_box_0(float_TypeInfo, &v59);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
    v49,
    StringLiteral_22982/*"time"*/,
    v54,
    v49->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v55 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v55 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
        v49,
        StringLiteral_21544/*"oncompletetarget"*/,
        callbackObject,
        v49->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
        v49,
        StringLiteral_21542/*"oncomplete"*/,
        callbackEvent,
        v49->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
        v49,
        StringLiteral_21544/*"oncompletetarget"*/,
        gameObject,
        v49->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
        v49,
        StringLiteral_21542/*"oncomplete"*/,
        StringLiteral_18583/*"endMotion"*/,
        v49->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
      v49,
      StringLiteral_21543/*"oncompleteparams"*/,
      endcall,
      v49->klass->vtable._24_Clear.methodPtr);
  }
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v57, v49, 0LL);
}


void __fastcall BattleActorControl__moveStep(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v3; // x3
  void *v4; // x20
  BattleActorControl_o *v5; // x19
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
  __int64 v18; // x22
  __int64 v19; // x21
  float v20; // s8
  float v21; // s9
  int32_t v22; // w1
  const MethodInfo *v23; // x2
  BattleActorControl_o *v24; // x0
  float v25; // s0
  float v26; // s1

  v4 = table;
  v5 = this;
  if ( (byte_42E8035 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_POS_TypeInfo, (_DWORD)table, (_DWORD)method, v3);
    sub_B5D5C4(&float_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_21799/*"pos"*/, v12, v13, v14);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v15, v16, v17);
    byte_42E8035 = 1;
  }
  if ( !v4
    || (v18 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                v4,
                StringLiteral_19388/*"hight"*/,
                *(_QWORD *)(*(_QWORD *)v4 + 784LL)),
        v19 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                v4,
                StringLiteral_22982/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v4 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                                         v4,
                                         StringLiteral_21799/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v4 + 784LL)),
        !v18) )
  {
LABEL_12:
    sub_B5D69C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v18 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B5D990(v18);
    goto LABEL_14;
  }
  v4 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v18);
  if ( !v19 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v19 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B5D990(v19);
    goto LABEL_15;
  }
  v20 = *(float *)&this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v19);
  if ( !v4 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v4 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v24 = (BattleActorControl_o *)sub_B5D990(v4);
    goto LABEL_11;
  }
  v21 = *(float *)&this->klass;
  v22 = *(_DWORD *)j_il2cpp_object_unbox_0(v4);
  v24 = v5;
  v25 = v20;
  v26 = v21;
LABEL_11:
  BattleActorControl__moveStep_24215756(v24, v25, v26, v22, v23);
}


void __fastcall BattleActorControl__moveStep_24215756(
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
  BattleActorControl__moveUp_24216652(this, hight, time, v9);
}


void __fastcall BattleActorControl__moveUp(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v3; // x3
  void *v4; // x20
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x21
  float v13; // s8
  float v14; // s1
  const MethodInfo *v15; // x1
  BattleActorControl_o *v16; // x0
  const MethodInfo *v17; // x1
  float v18; // s0

  v4 = table;
  v5 = this;
  if ( (byte_42E8038 & 1) == 0 )
  {
    sub_B5D5C4(&float_TypeInfo, (_DWORD)table, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v6, v7, v8);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_19388/*"hight"*/, v9, v10, v11);
    byte_42E8038 = 1;
  }
  if ( !v4 )
    goto LABEL_9;
  v12 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
          v4,
          StringLiteral_19388/*"hight"*/,
          *(_QWORD *)(*(_QWORD *)v4 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v4 + 776LL))(
                                   v4,
                                   StringLiteral_22982/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v4 + 784LL));
  if ( !v12 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v12 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B5D990(v12);
    goto LABEL_11;
  }
  v4 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v12);
  if ( !v4 )
LABEL_9:
    sub_B5D69C(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v4 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v13 = *(float *)&this->klass;
    v14 = *(float *)j_il2cpp_object_unbox_0(v4);
    BattleActorControl__moveUp_24216652(v5, v13, v14, v15);
    return;
  }
LABEL_11:
  v16 = (BattleActorControl_o *)sub_B5D990(v4);
  BattleActorControl__moveDown(v16, v18, v17);
}


void __fastcall BattleActorControl__moveUp_24216652(
        BattleActorControl_o *this,
        float hight,
        float time,
        const MethodInfo *method)
{
  int v4; // w2
  __int64 v5; // x3
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  System_Collections_Hashtable_o *v45; // x20
  __int64 v46; // x0
  __int64 v47; // x1
  __int64 v48; // x0
  __int64 v49; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v54; // [xsp+Ch] [xbp-44h] BYREF
  float v55; // [xsp+10h] [xbp-40h] BYREF
  int v56; // [xsp+14h] [xbp-3Ch] BYREF
  char v57[4]; // [xsp+18h] [xbp-38h] BYREF
  float v58; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_42E8039 & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)method, v4, v5);
    sub_B5D5C4(&iTween_EaseType_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&float_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_21543/*"oncompleteparams"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_23719/*"y"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_20221/*"islocal"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_20841/*"moveDown"*/, v39, v40, v41);
    sub_B5D5C4(&iTween_TypeInfo, v42, v43, v44);
    byte_42E8039 = 1;
  }
  v45 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v45, 0LL);
  v58 = hight;
  v46 = j_il2cpp_value_box_0(float_TypeInfo, &v58);
  if ( !v45 )
    sub_B5D69C(v46, v47);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_23719/*"y"*/,
    v46,
    v45->klass->vtable._24_Clear.methodPtr);
  v57[0] = 1;
  v48 = j_il2cpp_value_box_0(bool_TypeInfo, v57);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_20221/*"islocal"*/,
    v48,
    v45->klass->vtable._24_Clear.methodPtr);
  v56 = 1;
  v49 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v56);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_18341/*"easetype"*/,
    v49,
    v45->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_21544/*"oncompletetarget"*/,
    gameObject,
    v45->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_21542/*"oncomplete"*/,
    StringLiteral_20841/*"moveDown"*/,
    v45->klass->vtable._24_Clear.methodPtr);
  v55 = time;
  v51 = j_il2cpp_value_box_0(float_TypeInfo, &v55);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_21543/*"oncompleteparams"*/,
    v51,
    v45->klass->vtable._24_Clear.methodPtr);
  v54 = time;
  v52 = j_il2cpp_value_box_0(float_TypeInfo, &v54);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v45->klass->vtable._23_Add.method)(
    v45,
    StringLiteral_22982/*"time"*/,
    v52,
    v45->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(actorObject, v45, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_42E8053 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_skipVoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6, v7);
    byte_42E8053 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B5D694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B5D69C(IsNoTouchSkip, v9);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v12, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  BattlePerformanceStatus_o *v9; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E805B & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_skipDead__, (_DWORD)method, v2, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6, v7);
    byte_42E805B = 1;
  }
  klass = v4[8].klass;
  if ( !klass
    || (v9 = *(BattlePerformanceStatus_o **)&klass->_2.cctor_finished,
        v10 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B5D694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v10, v4, Method_BattleActorControl_skipDead__, 0LL),
        !v9) )
  {
    sub_B5D69C(this, method);
  }
  BattlePerformanceStatus__setTouchOff(v9, v10, 0LL);
}


void __fastcall BattleActorControl__onTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v12; // x21

  if ( (byte_42E8052 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_skipVoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6, v7);
    byte_42E8052 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v12 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B5D694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v12,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B5D69C(IsNoTouchSkip, v9);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v12, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppClass *klass; // x8
  BattlePerformanceStatus_o *v9; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v10; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E805A & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_skipDead__, (_DWORD)method, v2, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v5, v6, v7);
    byte_42E805A = 1;
  }
  klass = v4[8].klass;
  if ( !klass
    || (v9 = *(BattlePerformanceStatus_o **)&klass->_2.cctor_finished,
        v10 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B5D694(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v10, v4, Method_BattleActorControl_skipDead__, 0LL),
        !v9) )
  {
    sub_B5D69C(this, method);
  }
  BattlePerformanceStatus__setTouchOn(v9, v10, 0LL);
}


void __fastcall BattleActorControl__playAnimation(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_o *v9; // x0
  const MethodInfo *v10; // x3
  BattleActorControl_o *v11; // x0
  System_String_o *v12; // x1
  bool v13; // w2
  const MethodInfo *v14; // x3

  v5 = this;
  if ( (byte_42E8024 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)table, (_DWORD)method, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_21277/*"name"*/, v6, v7, v8);
    byte_42E8024 = 1;
  }
  if ( !table )
    sub_B5D69C(this, table);
  v9 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_21277/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v9 && v9->klass != string_TypeInfo )
  {
    v11 = (BattleActorControl_o *)sub_B5D990(v9);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v11, v12, v13, v14);
  }
  else
  {
    BattleActorControl__playAnimation_24205092(v5, v9, 0, v10);
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

  if ( (byte_42E8026 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1568/*"@playAnim\n =>{0},{1}"*/, (_DWORD)animname, (_DWORD)tag, method);
    byte_42E8026 = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_44573324((System_String_o *)StringLiteral_1568/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_B5D69C(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_24205092(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isDontOverwrite,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  const MethodInfo *v22; // x3
  System_String_o *v23; // x20
  __int64 v24; // x1
  BattleFBXComponent_o *fbxcomponent; // x0
  UnityEngine_Object_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v28; // x19
  float length; // s0
  float v30; // s0
  UnityEngine_Object_o *v31; // x21
  struct BattleFBXComponent_o *v32; // x22
  __int64 v33; // x3
  BattleFBXComponent_c *klass; // x8
  BattleFBXComponent_o *v35; // x19
  unsigned __int64 v36; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 v38; // x0
  float v39; // s0
  float v40; // s0

  if ( (byte_42E8025 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponentInChildren_Animation___,
      (_DWORD)animname,
      isDontOverwrite,
      method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&SimpleAnimation_State_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1567/*"@playAnim\n =>{0}"*/, v19, v20, v21);
    byte_42E8025 = 1;
  }
  v23 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v23 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v23, 1, v22);
  System_String__Format((System_String_o *)StringLiteral_1567/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v23, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_35;
  BattleFBXComponent__playAnimation(fbxcomponent, v23, 0LL);
  if ( System_String__op_Equality(v23, (System_String_o *)StringLiteral_23499/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_35;
    ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                          (UnityEngine_GameObject_o *)fbxcomponent,
                                                                          (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                 v23,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v28 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_Dropdown_DropdownItem,
                                                 v23,
                                                 0LL);
        if ( fbxcomponent )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)fbxcomponent, 0LL);
          v30 = UnityEngine_Random__Range(0.0, length, 0LL);
          if ( v28 )
          {
            v28->fields.currentAnimTime = v30;
            return;
          }
        }
LABEL_35:
        sub_B5D69C(fbxcomponent, v24);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_35;
      v31 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                      (UnityEngine_GameObject_o *)fbxcomponent,
                                      (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v31 )
          goto LABEL_35;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v31, v23, 0LL) )
        {
          v32 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v31, v23, 0LL);
          if ( !fbxcomponent )
            goto LABEL_35;
          klass = fbxcomponent->klass;
          v35 = fbxcomponent;
          if ( *(_WORD *)&fbxcomponent->klass->_2.bitflags1 )
          {
            v36 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v36;
              p_offset += 2;
              if ( v36 >= *(unsigned __int16 *)&fbxcomponent->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            v38 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_29:
            v38 = sub_AF54C0(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL, v33);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v38)(
                                                   v35,
                                                   *(_QWORD *)(v38 + 8));
          if ( !fbxcomponent )
            goto LABEL_35;
          v39 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0LL);
          v40 = UnityEngine_Random__Range(0.0, v39, 0LL);
          if ( !v32 )
            goto LABEL_35;
          v32->fields.currentAnimTime = v40;
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
  BattleActorControl_ActorMotionActiveCheck_o *v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v22; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v23; // x22
  BattleCallBack_T__o *v24; // x20

  if ( (byte_42E8011 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_BattleActionData___ctor__, (_DWORD)badata, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_BattleActionData__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BattleActorControl_playBattleActionDataLocal__, v9, v10, v11);
    sub_B5D5C4(&Method_BattleCallBack_BattleActionData___ctor__, v12, v13, v14);
    sub_B5D5C4(&BattleCallBack_BattleActionData__TypeInfo, v15, v16, v17);
    byte_42E8011 = 1;
  }
  v18 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v18 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v18, 0LL) )
  {
    v22 = BattleActorControl__get_CheckMotion(this, v20);
    v23 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_BattleActionData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v23,
      (Il2CppObject *)this,
      Method_BattleActorControl_playBattleActionDataLocal__,
      (const MethodInfo_258B320 *)Method_System_Action_BattleActionData___ctor__);
    v24 = (BattleCallBack_T__o *)sub_B5D694(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v24,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v23,
      (const MethodInfo_2DCCE2C *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v22 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v22, (BattleCallBackBase_o *)v24, 0LL);
      return;
    }
LABEL_8:
    sub_B5D69C(v18, v19);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v21);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v14; // x2
  const MethodInfo *v15; // x1
  BattleActionData_o *actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
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
  int32_t type; // w21
  BattleActionData_c *v31; // x0
  const MethodInfo *v32; // x3
  BattleActionData_o *v33; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  const MethodInfo *v36; // x1
  System_String_o *v37; // x0
  BattleServantData_o *battleSvtData; // x0

  if ( (byte_42E8012 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActionData_TypeInfo, (_DWORD)badata, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_8877/*"MOTION_"*/, v10, v11, v12);
    byte_42E8012 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  this->fields.actiondata = badata;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actiondata,
    (System_Int32_array **)badata,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleActorControl__setActionData(this, this->fields.actiondata, v14);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_34;
  ShiftServant = BattleActionData__getShiftServant(actiondata, v15);
  this->fields.myShiftData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.myShiftData, 0LL, v18, v19, v20, v21, v22, v23);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.myShiftData,
      (System_Int32_array **)ShiftServant,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
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
  v31 = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v31 = BattleActionData_TypeInfo;
  }
  if ( type == v31->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = *p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_34;
  actiondata = (BattleActionData_o *)BattleActionData__isCommandAttack(actiondata, v15);
  if ( ((unsigned __int8)actiondata & 1) != 0 )
    goto LABEL_20;
  if ( !*p_actiondata )
    goto LABEL_34;
  if ( ((*p_actiondata)->fields.type & 0xFFFFFFFE) == 10 )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, (const MethodInfo *)v25);
  actiondata = (BattleActionData_o *)this->fields.performance;
  if ( !actiondata
    || (actiondata = (BattleActionData_o *)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0LL
    || (actiondata = (BattleActionData_o *)((__int64 (__fastcall *)(BattleActionData_o *, void *))actiondata->klass->vtable._9_ExecAction.method)(
                                             actiondata,
                                             actiondata->klass[1]._1.image),
        (v33 = *p_actiondata) == 0LL) )
  {
LABEL_34:
    sub_B5D69C(actiondata, v15);
  }
  motionname = v33->fields.motionname;
  IsVanishSkill = v33->fields.IsVanishSkill;
  if ( !motionname )
  {
    v37 = System_Int32__ToString((int)v33 + 48, 0LL);
    motionname = System_String__Concat_44577788((System_String_o *)StringLiteral_8877/*"MOTION_"*/, v37, 0LL);
    if ( IsVanishSkill )
      goto LABEL_26;
LABEL_28:
    BattleActorControl__sendMotionEventFSM(this, motionname, 0, v32);
    goto LABEL_29;
  }
  if ( !v33->fields.IsVanishSkill )
    goto LABEL_28;
LABEL_26:
  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_24192704(this, motionname, 0, v32);
LABEL_29:
  if ( *p_actiondata && BattleActionData__isDeadMotion(*p_actiondata, v36) )
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
  __int64 v21; // x23
  BattleActorControl_EndCallEvent_o *v22; // x24
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3

  if ( (byte_42E8023 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BattleActorControl_sendEventFSM__, (_DWORD)animname, (_DWORD)endevent, starttag);
    sub_B5D5C4(&BattleActorControl_EndCallEvent_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleActorControl_EventClass_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_1569/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18682/*"event"*/, v18, v19, v20);
    byte_42E8023 = 1;
  }
  System_String__Format_44578852(
    (System_String_o *)StringLiteral_1569/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v21 = sub_B5D694(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v21, 0LL);
  v22 = (BattleActorControl_EndCallEvent_o *)sub_B5D694(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v22, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v21 )
    sub_B5D69C(v23, v24);
  *(_QWORD *)(v21 + 16) = v22;
  sub_B5D560((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)v22, v25, v26, v27, v28, v29, v30);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v21,
    (System_String_o *)StringLiteral_18682/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v21, v31);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v32);
  else
    BattleActorControl__playAnimation_24205092(this, animname, 0, v32);
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
    sub_B5D69C(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.actiondata, 0LL, v9, v10, v11, v12, v13, v14);
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
  int v11; // w1
  char v12; // w2
  __int64 v13; // x3
  int v14; // w1
  char v15; // w2
  __int64 v16; // x3
  int v17; // w1
  char v18; // w2
  __int64 v19; // x3
  UnityEngine_GameObject_o *result; // x0
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  bool v23; // w8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v25; // x23
  int v26; // s0
  UnityEngine_Transform_o *v29; // x23
  int v30; // s0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_42E800B & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)effectname, sideflip, method);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16159/*"_ENEMY"*/, v17, v18, v19);
    byte_42E800B = 1;
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
  v23 = UnityEngine_Object__op_Equality(Manager__loadEffect, 0LL, 0LL);
  result = 0LL;
  if ( !v23 )
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
          v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
          *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Vector3__get_zero(0LL);
          if ( v25 )
          {
            UnityEngine_Transform__set_localPosition(v25, *(UnityEngine_Vector3_o *)&v26, 0LL);
            v29 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
            *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_one(0LL);
            if ( v29 )
            {
              UnityEngine_Transform__set_localScale(v29, *(UnityEngine_Vector3_o *)&v30, 0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v34.fields.x = -x;
                  v34.fields.y = y;
                  v34.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v34, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_28;
                    if ( System_String__Equals_44565128(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16159/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_28;
                      v35.fields.x = x;
                      v35.fields.y = y;
                      v35.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v35, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_28;
                      UnityEngine_Transform__Rotate_35742360((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
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
    sub_B5D69C(result, effectname);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  BattleActorControl_c *v14; // x0
  struct SePlayer_o *prevDeadVoice; // x8
  __int64 v16; // x1
  int v17; // w24
  System_String_o *FileName; // x0
  const MethodInfo *v19; // x4
  SePlayer_o *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x19
  BattleActorControl_c *v28; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_42E8019 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_TypeInfo, type, (_DWORD)callback, isSaveVoicePlayed);
    sub_B5D5C4(&Voice_TypeInfo, v11, v12, v13);
    byte_42E8019 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( !Voice__IsDeadVoice(type, 0LL) )
  {
    v17 = 0;
    goto LABEL_21;
  }
  v14 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v14 = BattleActorControl_TypeInfo;
  }
  prevDeadVoice = v14->static_fields->prevDeadVoice;
  if ( prevDeadVoice )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleActorControl_TypeInfo;
      prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice;
      if ( !prevDeadVoice )
        goto LABEL_30;
    }
    if ( !prevDeadVoice->fields.isStop )
    {
      if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) == 0
        || v14->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v14),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0LL);
        goto LABEL_19;
      }
LABEL_30:
      sub_B5D69C(v14, v16);
    }
  }
LABEL_19:
  v17 = 1;
LABEL_21:
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v20 = BattleActorControl__playVoice_24201612(this, FileName, volume, callback, isSaveVoicePlayed, v19);
  if ( v17 )
  {
    v27 = (System_Int32_array **)v20;
    v28 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v28 = BattleActorControl_TypeInfo;
    }
    static_fields = v28->static_fields;
    static_fields->prevDeadVoice = (struct SePlayer_o *)v27;
    sub_B5D560((BattleServantConfConponent_o *)&static_fields->prevDeadVoice, v27, v21, v22, v23, v24, v25, v26);
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

  if ( (byte_42E801C & 1) == 0 )
  {
    sub_B5D5C4(&Voice_TypeInfo, type, (_DWORD)callback, method);
    byte_42E801C = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_24202672(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_24202672(
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

  if ( (byte_42E801D & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)voiceTypeId, (_DWORD)callback, method);
    byte_42E801D = 1;
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
        sub_B5D69C(battleSvtData, v9);
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
  __int64 v4; // x3
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w20
  int32_t svtId; // w22
  int32_t overwriteSvtVoiceId; // w21
  int32_t v12; // w0
  int32_t v13; // w1
  int32_t v14; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t v16; // w21
  const MethodInfo *v17; // x1
  struct BattleServantData_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w22

  if ( (byte_42E801F & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)fileName, (_DWORD)method, v4);
    byte_42E801F = 1;
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
      sub_B5D69C(battleSvtData, fileName);
    }
    v19 = (int)battleSvtData;
    v20 = v18->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v12 = v16;
    v13 = v19;
    v14 = v20;
  }
  return ServantAssetLoadManager__playBattleVoiceSe(v12, v13, v14, fileName, volume, 0LL);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *__fastcall BattleActorControl__playVoice_24201612(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  __int64 isNoVoice; // x0
  __int64 v15; // x1
  struct BattlePerformance_o *performance; // x8
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x22
  const MethodInfo *v25; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v28; // w24
  int32_t v29; // w22
  int32_t uniqueID; // w21
  int32_t v31; // w0
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t SvtId; // w22
  const MethodInfo *v35; // x1
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v37; // w23
  int32_t overwriteSvtVoiceId; // w24
  __int64 v39; // x0
  __int64 v40; // x0

  if ( (byte_42E801A & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)voiceTypeId, (_DWORD)callback, isSaveVoicePlayed);
    sub_B5D5C4(&string___TypeInfo, v11, v12, v13);
    byte_42E801A = 1;
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
    isNoVoice = sub_B5D5DC(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_30;
    v24 = isNoVoice;
    if ( voiceTypeId )
    {
      isNoVoice = sub_B5D684(voiceTypeId, *(_QWORD *)(*(_QWORD *)isNoVoice + 64LL));
      if ( !isNoVoice )
      {
        v40 = sub_B5D6BC(0LL);
        sub_B5D668(v40, 0LL);
      }
    }
    if ( !*(_DWORD *)(v24 + 24) )
    {
      v39 = sub_B5D6C8(isNoVoice);
      sub_B5D668(v39, 0LL);
    }
    *(_QWORD *)(v24 + 32) = voiceTypeId;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v24 + 32),
      (System_Int32_array **)voiceTypeId,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    BattleActorControl__AddServantVoicePlayed(this, (System_String_array *)v24, v25);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (__int64)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
      isNoVoice = BattleActorControl__getLimitCount(this, v35);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v37 = isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v31 = SvtId;
        v32 = v37;
        v33 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v31, v32, v33, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_30:
    sub_B5D69C(isNoVoice, v15);
  }
  v28 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v29 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  v31 = v28;
  v32 = limit;
  v33 = v29;
  return ServantAssetLoadManager__playBattleVoice(v31, v32, v33, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
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
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *v20; // x20
  unsigned __int64 v21; // x23
  int32_t v22; // w21
  UnityEngine_Object_o *Item; // x22
  UnityEngine_Object_o *v24; // x21
  __int64 v25; // x0

  if ( (byte_42E8063 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    byte_42E8063 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           auraList,
           (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)System_Linq_Enumerable__ToArray_int_((System_Collections_Generic_IEnumerable_TSource__o *)Keys, (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_21;
  entries = auraList->fields.entries;
  v20 = auraList;
  if ( (int)entries >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)entries )
      {
        v25 = sub_B5D6C8(auraList);
        sub_B5D668(v25, 0LL);
      }
      auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v22 = *(&v20->fields.count + v21);
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
                                       v22,
                                       (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
        v24 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
                                        v22,
                                        (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236(v24, 0LL);
      }
      LODWORD(entries) = v20->fields.entries;
      if ( (__int64)++v21 >= (int)entries )
        goto LABEL_19;
    }
LABEL_21:
    sub_B5D69C(auraList, method);
  }
LABEL_19:
  auraList = (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)auraList,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  UnityEngine_Object_o *Component_srcLineSprite; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8065 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
      v20,
      v21,
      v22);
    byte_42E8065 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          auraList,
          (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values((System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)auraList, (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_21:
    sub_B5D69C(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v26,
            (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v26.fields.currentValue;
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
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v9; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v11; // x19
  __int64 v12; // x0

  v4 = this;
  if ( (byte_42E8005 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_13316/*"SummonEndFlag"*/, v5, v6, v7);
    byte_42E8005 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_B5D69C(this, method);
  v9 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v9 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v9; ++i )
    {
      if ( i >= (unsigned int)v9 )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v11 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v11 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v11, 0LL);
        if ( !this )
          goto LABEL_18;
        this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
        if ( !this )
          goto LABEL_18;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13316/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.specialShadowObj) = 0;
      }
      LODWORD(v9) = motionFSM->max_length;
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
    sub_B5D69C(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_ActorMotionActiveCheck_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42E8010 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8883/*"MOTION_DAMAGE"*/, (_DWORD)method, v2, v3);
    byte_42E8010 = 1;
  }
  v5 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v5, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8883/*"MOTION_DAMAGE"*/, 0, v7);
}


void __fastcall BattleActorControl__sendEventFSM(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_c **v9; // x0
  const MethodInfo *v10; // x3
  System_String_o *v11; // x8
  BattleActorControl_o *v12; // x0
  System_String_o *v13; // x1
  bool v14; // w2

  v5 = this;
  if ( (byte_42E8007 & 1) == 0 )
  {
    sub_B5D5C4(&string_TypeInfo, (_DWORD)table, (_DWORD)method, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_18682/*"event"*/, v6, v7, v8);
    byte_42E8007 = 1;
  }
  if ( !table )
    sub_B5D69C(this, table);
  v9 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_18682/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v11 = (System_String_o *)v9;
  if ( v9 && *v9 != string_TypeInfo )
  {
    v12 = (BattleActorControl_o *)sub_B5D990(v9);
  }
  else
  {
    v12 = v5;
    v13 = v11;
    v14 = 0;
  }
  BattleActorControl__sendEventFSM_24192704(v12, v13, v14, v10);
}


void __fastcall BattleActorControl__sendEventFSM_24192704(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  __int64 Fsm; // x0
  const MethodInfo *v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x22
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v38; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v40; // x8
  __int64 v41; // x9
  int max_length; // w10
  UnityEngine_Object_o *v43; // x22
  struct PlayMakerFSM_array *v44; // x8
  __int64 v45; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v46; // x21
  struct PlayMakerFSM_array *v47; // x8
  __int64 v48; // x9
  __int64 v49; // x0
  __int64 v50; // x0

  if ( (byte_42E800A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)name, isCallFinishInterrupt, method);
    sub_B5D5C4(&string___TypeInfo, v7, v8, v9);
    sub_B5D5C4(&StringLiteral_23567/*"weapon"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_1571/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17833/*"common"*/, v16, v17, v18);
    byte_42E800A = 1;
  }
  Fsm = sub_B5D5DC(string___TypeInfo, 2LL);
  if ( !Fsm )
    goto LABEL_38;
  v27 = Fsm;
  Fsm = StringLiteral_23567/*"weapon"*/;
  if ( StringLiteral_23567/*"weapon"*/ )
  {
    Fsm = sub_B5D684(StringLiteral_23567/*"weapon"*/, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
    if ( !Fsm )
      goto LABEL_39;
    v28 = (System_Int32_array **)StringLiteral_23567/*"weapon"*/;
  }
  else
  {
    v28 = 0LL;
  }
  if ( !*(_DWORD *)(v27 + 24) )
    goto LABEL_37;
  *(_QWORD *)(v27 + 32) = v28;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 32), v28, v21, v22, v23, v24, v25, v26);
  Fsm = StringLiteral_17833/*"common"*/;
  if ( StringLiteral_17833/*"common"*/ )
  {
    Fsm = sub_B5D684(StringLiteral_17833/*"common"*/, *(_QWORD *)(*(_QWORD *)v27 + 64LL));
    if ( Fsm )
    {
      v35 = (System_Int32_array **)StringLiteral_17833/*"common"*/;
      goto LABEL_13;
    }
LABEL_39:
    v50 = sub_B5D6BC(Fsm);
    sub_B5D668(v50, 0LL);
  }
  v35 = 0LL;
LABEL_13:
  if ( *(_DWORD *)(v27 + 24) <= 1u )
    goto LABEL_37;
  *(_QWORD *)(v27 + 40) = v35;
  sub_B5D560((BattleServantConfConponent_o *)(v27 + 40), v35, v29, v30, v31, v32, v33, v34);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v27 + 24) )
    goto LABEL_37;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_38;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_37;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_38;
  v38 = *(Il2CppObject **)(v27 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_44578852(
                   (System_String_o *)StringLiteral_1571/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v38,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v40 = this->fields.motionFSM;
  if ( v40 )
  {
    v41 = this->fields.actindex;
    max_length = v40->max_length;
    if ( (int)v41 < max_length )
    {
      if ( (unsigned int)v41 >= max_length )
        goto LABEL_37;
      v43 = (UnityEngine_Object_o *)v40->m_Items[v41];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      Fsm = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v20);
          v44 = this->fields.motionFSM;
          if ( !v44 )
            goto LABEL_38;
          v45 = this->fields.actindex;
          if ( (unsigned int)v45 >= v44->max_length )
            goto LABEL_37;
          v46 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v44->m_Items[v45];
          if ( !Fsm )
            goto LABEL_38;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_38;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v46 )
            goto LABEL_38;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v46, (System_String_o *)Fsm, 0LL);
        }
        v47 = this->fields.motionFSM;
        if ( !v47 )
          goto LABEL_38;
        v48 = this->fields.actindex;
        if ( (unsigned int)v48 < v47->max_length )
        {
          Fsm = (__int64)v47->m_Items[v48];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_38:
          sub_B5D69C(Fsm, v20);
        }
LABEL_37:
        v49 = sub_B5D6C8(Fsm);
        sub_B5D668(v49, 0LL);
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
    sub_B5D69C(v7, v8);
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_24192704(this, name, isCallFinishInterrupt, v9);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_24192704(this, name, 0, v3);
}


void __fastcall BattleActorControl__setActionData(
        BattleActorControl_o *this,
        BattleActionData_o *actiondata,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct PlayMakerFSM_array *motionFSM; // x8
  BattleActorControl_o *v10; // x21
  struct PlayMakerFSM_array *v11; // x8
  struct PlayMakerFSM_array *v12; // x8
  struct PlayMakerFSM_array *v13; // x8
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x21
  const MethodInfo *v15; // x1
  struct PlayMakerFSM_array *v16; // x8
  struct PlayMakerFSM_array *v17; // x8
  __int64 v18; // x0

  v5 = this;
  if ( (byte_42E8002 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_4481/*"Count_Action"*/, (_DWORD)actiondata, (_DWORD)method, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_4482/*"Count_Hit"*/, v6, v7, v8);
    byte_42E8002 = 1;
  }
  motionFSM = v5->fields.motionFSM;
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
                                   (System_String_o *)StringLiteral_4481/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_43;
  v10 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(
                                   actiondata,
                                   (const MethodInfo *)actiondata);
  if ( !v10 )
    goto LABEL_43;
  LODWORD(v10->fields.specialShadowObj) = (_DWORD)this;
  v11 = v5->fields.motionFSM;
  if ( !v11 )
    goto LABEL_43;
  if ( !v11->max_length )
    goto LABEL_44;
  this = (BattleActorControl_o *)v11->m_Items[0];
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
                                   (System_String_o *)StringLiteral_4482/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.specialShadowObj) = actiondata->fields.attackcount;
  v12 = v5->fields.motionFSM;
  if ( !v12 )
    goto LABEL_43;
  if ( v12->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v12->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField) == 0LL )
  {
LABEL_43:
    sub_B5D69C(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4481/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v13 = v5->fields.motionFSM;
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
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4481/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, v15);
    if ( !FsmInt )
      goto LABEL_43;
    FsmInt->fields.value = (int)this;
  }
  v16 = v5->fields.motionFSM;
  if ( !v16 )
    goto LABEL_43;
  if ( v16->max_length <= 1 )
  {
LABEL_44:
    v18 = sub_B5D6C8(this);
    sub_B5D668(v18, 0LL);
  }
  this = (BattleActorControl_o *)v16->m_Items[1];
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
                                   (System_String_o *)StringLiteral_4482/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v17 = v5->fields.motionFSM;
  if ( !v17 )
    goto LABEL_43;
  if ( v17->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v17->m_Items[1];
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
                                   (System_String_o *)StringLiteral_4482/*"Count_Hit"*/,
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(CompleteList, name);
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
    sub_B5D69C(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))EventList->klass->vtable._23_Add.method)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._24_Clear.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setAuraFlip(BattleActorControl_o *this, bool flg, const MethodInfo *method)
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *auraList; // x0
  bool v25; // w19
  Il2CppObject *currentValue; // x20
  UnityEngine_Object_o *Component_srcLineSprite; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E8064 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v9,
      v10,
      v11);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__,
      v21,
      v22,
      v23);
    byte_42E8064 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          auraList,
          (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values((System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)auraList, (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_B5D69C(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_23B95BC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
         &v28,
         (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v25 = flg;
    do
    {
      currentValue = v28.fields.currentValue;
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
                                                            (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, v25, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v28,
              (const MethodInfo_28A2E24 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void __fastcall BattleActorControl__setCamera(
        BattleActorControl_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char *gameObject; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7FFD & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, (_DWORD)camera, (_DWORD)method, v3);
    byte_42E7FFD = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_B5D69C(gameObject, v7);
  }
  *((_QWORD *)gameObject + 3) = camera;
  sub_B5D560(
    (BattleServantConfConponent_o *)(gameObject + 24),
    (System_Int32_array **)camera,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void __fastcall BattleActorControl__setCriteriaPos(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *tr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *v4; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  unsigned int position; // s8
  float y; // s9
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  v4 = (UnityEngine_Object_o *)tr;
  if ( (byte_42E800C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)tr, (_DWORD)method, v3);
    byte_42E800C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
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
            v11 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0LL);
            y = v11.fields.y;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
              if ( gameObject )
              {
                v4 = (UnityEngine_Object_o *)gameObject;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_17:
    sub_B5D69C(gameObject, v7);
  }
  if ( !v4 )
    goto LABEL_17;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v4, 0LL);
  v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v4, 0LL);
  y = v10.fields.y;
LABEL_16:
  v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v4, 0LL);
  LODWORD(this->fields.criteriaPos.fields.x) = position;
  this->fields.criteriaPos.fields.y = y;
  this->fields.criteriaPos.fields.z = v12.fields.z;
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
    sub_B5D69C(actorObject, method);
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
    sub_B5D69C(actorObject, method);
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
    sub_B5D69C(actorObject, method);
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
  sub_B5D560(
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
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  int v20; // w20
  unsigned __int64 i; // x9
  struct PlayMakerFSM_array *v22; // x8
  unsigned __int64 v23; // x24
  UnityEngine_Object_o *v24; // x21
  struct PlayMakerFSM_array *v25; // x8
  struct PlayMakerFSM_array *v26; // x8
  __int64 v27; // x0

  if ( (byte_42E8001 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_8614/*"LimitedPeriod"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_8463/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v14, v15, v16);
    byte_42E8001 = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)ConstantMaster__GetValue(
                                                           (ConstantMaster_o *)Master_WarQuestSelectionMaster,
                                                           (System_String_o *)StringLiteral_8463/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                           0LL);
      v20 = (int)Master_WarQuestSelectionMaster;
      for ( i = 0LL; ; i = 1LL )
      {
        v22 = this->fields.motionFSM;
        if ( !v22 )
          break;
        v23 = i;
        if ( i >= v22->max_length )
          goto LABEL_32;
        v24 = (UnityEngine_Object_o *)v22->m_Items[i];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        {
          v25 = this->fields.motionFSM;
          if ( !v25 )
            break;
          if ( v23 >= v25->max_length )
            goto LABEL_32;
          Master_WarQuestSelectionMaster = v25->m_Items[v23];
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
                                                               (System_String_o *)StringLiteral_8614/*"LimitedPeriod"*/,
                                                               0LL);
          if ( Master_WarQuestSelectionMaster )
          {
            v26 = this->fields.motionFSM;
            if ( !v26 )
              break;
            if ( v23 >= v26->max_length )
            {
LABEL_32:
              v27 = sub_B5D6C8(Master_WarQuestSelectionMaster);
              sub_B5D668(v27, 0LL);
            }
            Master_WarQuestSelectionMaster = v26->m_Items[v23];
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
                                                                 (System_String_o *)StringLiteral_8614/*"LimitedPeriod"*/,
                                                                 0LL);
            if ( !Master_WarQuestSelectionMaster )
              break;
            LODWORD(Master_WarQuestSelectionMaster[1].klass) = v20;
          }
        }
        if ( v23 )
          return;
      }
    }
    sub_B5D69C(Master_WarQuestSelectionMaster, v19);
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  struct PlayMakerFSM_array *v65; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 gameObject; // x0
  __int64 v74; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v77; // x25
  int32_t v78; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v80; // x26
  struct PlayMakerFSM_array *v81; // x25
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x26
  struct PlayMakerFSM_array *v89; // x25
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x24
  unsigned int v97; // w8
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v99; // x9
  unsigned int v100; // w26
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v102; // x8
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct PlayMakerFSM_array *v109; // x8
  struct PlayMakerFSM_array *v110; // x8
  struct PlayMakerFSM_array *v111; // x8
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  struct PlayMakerFSM_array *v118; // x8
  struct PlayMakerFSM_array *v119; // x8
  char v120; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v123; // x8
  struct BattlePerformance_o *v124; // x8
  struct PlayMakerFSM_array *v125; // x8
  struct BattlePerformance_o *v126; // x8
  System_String_o *StrParam; // x20
  struct PlayMakerFSM_array *v128; // x8
  PlayMakerFSM_o *v129; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v133; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v136; // x1
  struct PlayMakerFSM_array *v137; // x8
  PlayMakerFSM_o *v138; // x0
  HutongGames_PlayMaker_Fsm_o *v139; // x0
  __int64 v140; // x1
  HutongGames_PlayMaker_FsmVariables_o *v141; // x0
  HutongGames_PlayMaker_FsmInt_o *v142; // x0
  __int64 v143; // x1
  _BOOL8 v144; // x0
  __int64 v145; // x1
  __int64 v146; // x0
  __int64 v147; // x0
  __int64 v148; // x0
  __int64 v149; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v150; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v151; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E8000 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__,
      (_DWORD)side,
      (_DWORD)camera,
      camerafsm);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v17, v18, v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v20, v21, v22);
    sub_B5D5C4(&long_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&JsonManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v32, v33, v34);
    sub_B5D5C4(&PlayMakerFSM___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_13731/*"TargetFrontPos"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_13730/*"TargetBackPos"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_3538/*"Camera"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_1858/*"ActorObject"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_16159/*"_ENEMY"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_3544/*"CameraFsm"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_10756/*"Performance"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1859/*"ActorSide"*/, v62, v63, v64);
    byte_42E8000 = 1;
  }
  memset(&v151, 0, sizeof(v151));
  v65 = (struct PlayMakerFSM_array *)sub_B5D5DC(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v65;
  p_motionFSM = &this->fields.motionFSM;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v65,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v77 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v78 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v77, v78, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  v80 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v81 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v80,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v81 )
    goto LABEL_107;
  v88 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B5D684(gameObject, v81->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_122;
  }
  if ( !v81->max_length )
    goto LABEL_108;
  v81->m_Items[0] = (PlayMakerFSM_o *)v88;
  sub_B5D560((BattleServantConfConponent_o *)v81->m_Items, v88, v82, v83, v84, v85, v86, v87);
  if ( !Object )
    goto LABEL_107;
  v89 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          Object,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v89 )
    goto LABEL_107;
  v96 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B5D684(gameObject, v89->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_122:
      v149 = sub_B5D6BC(gameObject);
      sub_B5D668(v149, 0LL);
    }
  }
  if ( v89->max_length <= 1 )
  {
LABEL_108:
    v146 = sub_B5D6C8(gameObject);
    sub_B5D668(v146, 0LL);
  }
  v89->m_Items[1] = (PlayMakerFSM_o *)v96;
  sub_B5D560((BattleServantConfConponent_o *)&v89->m_Items[1], v96, v90, v91, v92, v93, v94, v95);
  v97 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v99 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v100 = v97;
    if ( v97 >= v99->max_length )
      goto LABEL_108;
    gameObject = (__int64)v99->m_Items[v97];
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
                      (System_String_o *)StringLiteral_1858/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v102 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v100 >= v102->max_length )
      goto LABEL_108;
    gameObject = (__int64)v102->m_Items[v100];
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
                            (System_String_o *)StringLiteral_1859/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    *(_QWORD *)(gameObject + 56) = side;
    sub_B5D560(
      (BattleServantConfConponent_o *)(gameObject + 56),
      (System_Int32_array **)side,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    v109 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v100 >= v109->max_length )
      goto LABEL_108;
    gameObject = (__int64)v109->m_Items[v100];
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
                            (System_String_o *)StringLiteral_3538/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v110 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v100 >= v110->max_length )
      goto LABEL_108;
    gameObject = (__int64)v110->m_Items[v100];
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
                            (System_String_o *)StringLiteral_3544/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v111 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v100 >= v111->max_length )
      goto LABEL_108;
    gameObject = (__int64)v111->m_Items[v100];
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
                            (System_String_o *)StringLiteral_10756/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    v118 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v100 >= v118->max_length )
      goto LABEL_108;
    gameObject = (__int64)v118->m_Items[v100];
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
                            (System_String_o *)StringLiteral_13731/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_107;
      gameObject = System_String__Equals_44565128(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16159/*"_ENEMY"*/,
                     0LL);
      v119 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v100 >= v119->max_length )
        goto LABEL_108;
      v120 = gameObject;
      gameObject = (__int64)v119->m_Items[v100];
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
                              (System_String_o *)StringLiteral_13731/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_107;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v120 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v123 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v100 >= v123->max_length )
          goto LABEL_108;
        gameObject = (__int64)v123->m_Items[v100];
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
                                (System_String_o *)StringLiteral_13730/*"TargetBackPos"*/,
                                0LL);
        v124 = this->fields.performance;
        if ( !v124 || !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = v124->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v125 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v100 >= v125->max_length )
          goto LABEL_108;
        gameObject = (__int64)v125->m_Items[v100];
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
                                (System_String_o *)StringLiteral_13730/*"TargetBackPos"*/,
                                0LL);
        v126 = this->fields.performance;
        if ( !v126 || !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -v126->fields.distanceofactor;
      }
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v97 = 1;
  }
  while ( !v100 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_107:
    sub_B5D69C(gameObject, v74);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v150,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)gameObject,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v151 = v150;
  while ( 1 )
  {
    v144 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v151,
             (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v144 )
      break;
    v128 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B5D69C(v144, v145);
    if ( !v128->max_length )
    {
      v147 = sub_B5D6C8(v144);
      sub_B5D668(v147, 0LL);
    }
    v129 = v128->m_Items[0];
    if ( !v129 )
      sub_B5D69C(0LL, v145);
    key = v151.fields.current.fields.key;
    value = v151.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v129, 0LL);
    if ( !Fsm )
      sub_B5D69C(0LL, v133);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B5D69C(0LL, v133);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v137 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B5D69C(FsmInt, v136);
      if ( !v137->max_length )
      {
        v148 = sub_B5D6C8(FsmInt);
        sub_B5D668(v148, 0LL);
      }
      v138 = v137->m_Items[0];
      if ( !v138 )
        sub_B5D69C(0LL, v136);
      v139 = PlayMakerFSM__get_Fsm(v138, 0LL);
      if ( !v139 )
        sub_B5D69C(0LL, v140);
      v141 = v139->fields.variables;
      if ( !v141 )
        sub_B5D69C(0LL, v140);
      v142 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v141, (System_String_o *)key, 0LL);
      if ( !v142 )
        sub_B5D69C(0LL, v143);
      if ( !value )
        sub_B5D69C(v142, v143);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        gameObject = sub_B5D990(value);
        goto LABEL_122;
      }
      v142->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v151,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
}


void __fastcall BattleActorControl__setMotionlist(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  struct PlayMakerFSM_array *v63; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  __int64 gameObject; // x0
  __int64 v72; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v77; // x25
  int32_t v78; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v80; // x26
  struct PlayMakerFSM_array *v81; // x25
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x26
  struct PlayMakerFSM_array *v89; // x25
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x24
  unsigned int v97; // w8
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v99; // x9
  unsigned int v100; // w26
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v102; // x8
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct PlayMakerFSM_array *v109; // x8
  struct PlayMakerFSM_array *v110; // x8
  struct PlayMakerFSM_array *v111; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v112; // x25
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct PlayMakerFSM_array *v119; // x8
  struct PlayMakerFSM_array *v120; // x8
  char v121; // w25
  struct BattlePerformance_o *v122; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v124; // x8
  struct BattlePerformance_o *v125; // x8
  struct PlayMakerFSM_array *v126; // x8
  struct BattlePerformance_o *v127; // x8
  System_String_o *StrParam; // x21
  struct PlayMakerFSM_array *v129; // x8
  PlayMakerFSM_o *v130; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v134; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v137; // x1
  struct PlayMakerFSM_array *v138; // x8
  PlayMakerFSM_o *v139; // x0
  HutongGames_PlayMaker_Fsm_o *v140; // x0
  __int64 v141; // x1
  HutongGames_PlayMaker_FsmVariables_o *v142; // x0
  HutongGames_PlayMaker_FsmInt_o *v143; // x0
  __int64 v144; // x1
  _BOOL8 v145; // x0
  __int64 v146; // x1
  const MethodInfo *v147; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v149; // x2
  System_String_array **v150; // x3
  System_Boolean_array **v151; // x4
  System_Int32_array **v152; // x5
  System_Int32_array *v153; // x6
  System_Int32_array *v154; // x7
  const MethodInfo *v155; // x1
  __int64 v156; // x0
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v160; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v161; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_42E7FFE & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__,
      (_DWORD)side,
      (_DWORD)camera,
      camerafsm);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v18, v19, v20);
    sub_B5D5C4(&long_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&JsonManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v30, v31, v32);
    sub_B5D5C4(&PlayMakerFSM___TypeInfo, v33, v34, v35);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_13731/*"TargetFrontPos"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_13730/*"TargetBackPos"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_3538/*"Camera"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_1858/*"ActorObject"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_16159/*"_ENEMY"*/, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_3544/*"CameraFsm"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_10756/*"Performance"*/, v57, v58, v59);
    sub_B5D5C4(&StringLiteral_1859/*"ActorSide"*/, v60, v61, v62);
    byte_42E7FFE = 1;
  }
  memset(&v161, 0, sizeof(v161));
  v63 = (struct PlayMakerFSM_array *)sub_B5D5DC(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v63;
  p_motionFSM = &this->fields.motionFSM;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v63,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
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
  v77 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v78 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v77, v78, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  v80 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v81 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          v80,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v81 )
    goto LABEL_109;
  v88 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B5D684(gameObject, v81->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_124;
  }
  if ( !v81->max_length )
    goto LABEL_110;
  v81->m_Items[0] = (PlayMakerFSM_o *)v88;
  sub_B5D560((BattleServantConfConponent_o *)v81->m_Items, v88, v82, v83, v84, v85, v86, v87);
  if ( !Object )
    goto LABEL_109;
  v89 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                          Object,
                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v89 )
    goto LABEL_109;
  v96 = (System_Int32_array **)gameObject;
  if ( gameObject )
  {
    gameObject = sub_B5D684(gameObject, v89->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_124:
      v159 = sub_B5D6BC(gameObject);
      sub_B5D668(v159, 0LL);
    }
  }
  if ( v89->max_length <= 1 )
  {
LABEL_110:
    v156 = sub_B5D6C8(gameObject);
    sub_B5D668(v156, 0LL);
  }
  v89->m_Items[1] = (PlayMakerFSM_o *)v96;
  sub_B5D560((BattleServantConfConponent_o *)&v89->m_Items[1], v96, v90, v91, v92, v93, v94, v95);
  v97 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v99 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    v100 = v97;
    if ( v97 >= v99->max_length )
      goto LABEL_110;
    gameObject = (__int64)v99->m_Items[v97];
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
                      (System_String_o *)StringLiteral_1858/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v102 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v100 >= v102->max_length )
      goto LABEL_110;
    gameObject = (__int64)v102->m_Items[v100];
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
                            (System_String_o *)StringLiteral_1859/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    *(_QWORD *)(gameObject + 56) = side;
    sub_B5D560(
      (BattleServantConfConponent_o *)(gameObject + 56),
      (System_Int32_array **)side,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    v109 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v100 >= v109->max_length )
      goto LABEL_110;
    gameObject = (__int64)v109->m_Items[v100];
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
                            (System_String_o *)StringLiteral_3538/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v110 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v100 >= v110->max_length )
      goto LABEL_110;
    gameObject = (__int64)v110->m_Items[v100];
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
                            (System_String_o *)StringLiteral_3544/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v111 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v100 >= v111->max_length )
      goto LABEL_110;
    gameObject = (__int64)v111->m_Items[v100];
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
                            (System_String_o *)StringLiteral_10756/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_109;
    v112 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v112 )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v112, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
    v119 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v100 >= v119->max_length )
      goto LABEL_110;
    gameObject = (__int64)v119->m_Items[v100];
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
                            (System_String_o *)StringLiteral_13731/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_109;
      gameObject = System_String__Equals_44565128(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16159/*"_ENEMY"*/,
                     0LL);
      v120 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_109;
      if ( v100 >= v120->max_length )
        goto LABEL_110;
      v121 = gameObject;
      gameObject = (__int64)v120->m_Items[v100];
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
                              (System_String_o *)StringLiteral_13731/*"TargetFrontPos"*/,
                              0LL);
      v122 = this->fields.performance;
      if ( !v122 )
        goto LABEL_109;
      distanceofactor = v122->fields.distanceofactor;
      if ( (v121 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v124 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v100 >= v124->max_length )
          goto LABEL_110;
        gameObject = (__int64)v124->m_Items[v100];
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
                                (System_String_o *)StringLiteral_13730/*"TargetBackPos"*/,
                                0LL);
        v125 = this->fields.performance;
        if ( !v125 || !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = v125->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v126 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v100 >= v126->max_length )
          goto LABEL_110;
        gameObject = (__int64)v126->m_Items[v100];
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
                                (System_String_o *)StringLiteral_13730/*"TargetBackPos"*/,
                                0LL);
        v127 = this->fields.performance;
        if ( !v127 || !gameObject )
          goto LABEL_109;
        *(float *)(gameObject + 56) = -v127->fields.distanceofactor;
      }
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v97 = 1;
  }
  while ( !v100 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_109;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_109:
    sub_B5D69C(gameObject, v72);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v160,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)gameObject,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v161 = v160;
  while ( 1 )
  {
    v145 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v161,
             (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v145 )
      break;
    v129 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B5D69C(v145, v146);
    if ( !v129->max_length )
    {
      v157 = sub_B5D6C8(v145);
      sub_B5D668(v157, 0LL);
    }
    v130 = v129->m_Items[0];
    if ( !v130 )
      sub_B5D69C(0LL, v146);
    key = v161.fields.current.fields.key;
    value = v161.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v130, 0LL);
    if ( !Fsm )
      sub_B5D69C(0LL, v134);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B5D69C(0LL, v134);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v138 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B5D69C(FsmInt, v137);
      if ( !v138->max_length )
      {
        v158 = sub_B5D6C8(FsmInt);
        sub_B5D668(v158, 0LL);
      }
      v139 = v138->m_Items[0];
      if ( !v139 )
        sub_B5D69C(0LL, v137);
      v140 = PlayMakerFSM__get_Fsm(v139, 0LL);
      if ( !v140 )
        sub_B5D69C(0LL, v141);
      v142 = v140->fields.variables;
      if ( !v142 )
        sub_B5D69C(0LL, v141);
      v143 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v142, (System_String_o *)key, 0LL);
      if ( !v143 )
        sub_B5D69C(0LL, v144);
      if ( !value )
        sub_B5D69C(v143, v144);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        gameObject = sub_B5D990(value);
        goto LABEL_124;
      }
      v143->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v161,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v147);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (System_Int32_array **)DelayEndSequenceIdListFromMotion,
    v149,
    v150,
    v151,
    v152,
    v153,
    v154);
  BattleActorControl__setLimitedPeriod(this, v155);
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
  sub_B5D560(
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v10; // x8
  unsigned __int64 v11; // x21
  bool v12; // w22
  UnityEngine_Object_o *v13; // x19
  struct System_String_o *BuffEffectNodeName_k__BackingField; // x19
  __int64 v15; // x0

  v5 = this;
  if ( (byte_42E8020 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, flg, (_DWORD)method, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_9699/*"Noble_Check"*/, v6, v7, v8);
    byte_42E8020 = 1;
  }
  motionFSM = v5->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B5D69C(this, flg);
  v10 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    v12 = flg;
    do
    {
      if ( v11 >= (unsigned int)v10 )
      {
        v15 = sub_B5D6C8(this);
        sub_B5D668(v15, 0LL);
      }
      v13 = (UnityEngine_Object_o *)motionFSM->m_Items[v11];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v13 )
          goto LABEL_19;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v13, 0LL);
        if ( !this )
          goto LABEL_19;
        BuffEffectNodeName_k__BackingField = this->fields._BuffEffectNodeName_k__BackingField;
        if ( BuffEffectNodeName_k__BackingField )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this->fields._BuffEffectNodeName_k__BackingField,
                                           (System_String_o *)StringLiteral_9699/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)BuffEffectNodeName_k__BackingField,
                                             (System_String_o *)StringLiteral_9699/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_19;
            LOBYTE(this->fields.specialShadowObj) = v12;
          }
        }
      }
      LODWORD(v10) = motionFSM->max_length;
      ++v11;
    }
    while ( (__int64)v11 < (int)v10 );
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
  sub_B5D560(
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  UnityEngine_GameObject_o *v57; // x20
  int32_t v58; // w21
  int32_t WeaponGroup; // w22
  UnityEngine_GameObject_o *v60; // x21
  struct PlayMakerFSM_array *v61; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x21
  struct PlayMakerFSM_array *v69; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v70; // x20
  struct PlayMakerFSM_array *v71; // x8
  struct PlayMakerFSM_array *v72; // x8
  BattleActorControl_o *v73; // x20
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct PlayMakerFSM_array *v80; // x8
  struct PlayMakerFSM_array *v81; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v82; // x20
  struct PlayMakerFSM_array *v83; // x8
  struct PlayMakerFSM_array *v84; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v85; // x20
  struct PlayMakerFSM_array *v86; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v87; // x20
  struct PlayMakerFSM_array *v88; // x8
  struct PlayMakerFSM_array *v89; // x8
  char v90; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v93; // x8
  struct BattlePerformance_o *v94; // x8
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v97; // x1
  struct PlayMakerFSM_array *v98; // x8
  struct BattlePerformance_o *v99; // x8
  System_String_o *StrParam; // x20
  struct PlayMakerFSM_array *v101; // x8
  PlayMakerFSM_o *v102; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v106; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v109; // x1
  struct PlayMakerFSM_array *v110; // x8
  PlayMakerFSM_o *v111; // x0
  HutongGames_PlayMaker_Fsm_o *v112; // x0
  __int64 v113; // x1
  HutongGames_PlayMaker_FsmVariables_o *v114; // x0
  HutongGames_PlayMaker_FsmInt_o *v115; // x0
  __int64 v116; // x1
  _BOOL8 v117; // x0
  __int64 v118; // x1
  const MethodInfo *v119; // x1
  System_Int32_array **DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x0
  __int64 v130; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v131; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v132; // [xsp+30h] [xbp-60h] BYREF

  v5 = this;
  if ( (byte_42E7FFF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, flg, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v15, v16, v17);
    sub_B5D5C4(&long_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&JsonManager_TypeInfo, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v27, v28, v29);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_13731/*"TargetFrontPos"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_13730/*"TargetBackPos"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_3538/*"Camera"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1858/*"ActorObject"*/, v42, v43, v44);
    sub_B5D5C4(&StringLiteral_16159/*"_ENEMY"*/, v45, v46, v47);
    sub_B5D5C4(&StringLiteral_3544/*"CameraFsm"*/, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_10756/*"Performance"*/, v51, v52, v53);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_1859/*"ActorSide"*/, v54, v55, v56);
    byte_42E7FFF = 1;
  }
  memset(&v132, 0, sizeof(v132));
  if ( !flg )
  {
    motionFSM = v5->fields.motionFSM;
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
                              (System_String_o *)StringLiteral_1858/*"ActorObject"*/,
                              0LL);
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
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
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  if ( !v5->fields.battleSvtData )
    goto LABEL_127;
  v57 = (UnityEngine_GameObject_o *)this;
  this = (BattleActorControl_o *)BattleServantData__getSvtId(v5->fields.battleSvtData, 0LL);
  if ( !v5->fields.battleSvtData )
    goto LABEL_127;
  v58 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(v5->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(v57, v58, WeaponGroup, 0LL);
  if ( !this )
    goto LABEL_127;
  v60 = (UnityEngine_GameObject_o *)this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v61 = v5->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v60,
                                   (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v61 )
    goto LABEL_127;
  v68 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_B5D684(this, v61->obj.klass->_1.element_class);
    if ( !this )
    {
      v130 = sub_B5D6BC(0LL);
      sub_B5D668(v130, 0LL);
    }
  }
  if ( !v61->max_length )
  {
LABEL_141:
    v129 = sub_B5D6C8(this);
    sub_B5D668(v129, 0LL);
  }
  v61->m_Items[0] = (PlayMakerFSM_o *)v68;
  sub_B5D560((BattleServantConfConponent_o *)v61->m_Items, v68, v62, v63, v64, v65, v66, v67);
  v69 = v5->fields.motionFSM;
  if ( !v69 )
    goto LABEL_127;
  if ( !v69->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v69->m_Items[0];
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)this->fields._BuffEffectNodeName_k__BackingField;
  if ( !this )
    goto LABEL_127;
  v70 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_1858/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
  if ( !v70 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v70, (UnityEngine_GameObject_o *)this, 0LL);
  v71 = v5->fields.motionFSM;
  if ( !v71 )
    goto LABEL_127;
  if ( !v71->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v71->m_Items[0];
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
                                   (System_String_o *)StringLiteral_1859/*"ActorSide"*/,
                                   0LL);
  v72 = v5->fields.motionFSM;
  if ( !v72 )
    goto LABEL_127;
  if ( v72->max_length <= 1 )
    goto LABEL_141;
  v73 = this;
  this = (BattleActorControl_o *)v72->m_Items[1];
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
                                   (System_String_o *)StringLiteral_1859/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v73 )
    goto LABEL_127;
  v73->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)this;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v73->fields.specialShadowObj,
    (System_Int32_array **)this,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = v5->fields.motionFSM;
  if ( !v80 )
    goto LABEL_127;
  if ( !v80->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v80->m_Items[0];
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
                                   (System_String_o *)StringLiteral_3538/*"Camera"*/,
                                   0LL);
  v81 = v5->fields.motionFSM;
  if ( !v81 )
    goto LABEL_127;
  if ( v81->max_length <= 1 )
    goto LABEL_141;
  v82 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)v81->m_Items[1];
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
                                   (System_String_o *)StringLiteral_3538/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v82 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v82, (UnityEngine_GameObject_o *)this, 0LL);
  v83 = v5->fields.motionFSM;
  if ( !v83 )
    goto LABEL_127;
  if ( !v83->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v83->m_Items[0];
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
                                   (System_String_o *)StringLiteral_3544/*"CameraFsm"*/,
                                   0LL);
  v84 = v5->fields.motionFSM;
  if ( !v84 )
    goto LABEL_127;
  if ( v84->max_length <= 1 )
    goto LABEL_141;
  v85 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)v84->m_Items[1];
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
                                   (System_String_o *)StringLiteral_3544/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v85 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v85, (UnityEngine_GameObject_o *)this, 0LL);
  v86 = v5->fields.motionFSM;
  if ( !v86 )
    goto LABEL_127;
  if ( !v86->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v86->m_Items[0];
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
                                   (System_String_o *)StringLiteral_10756/*"Performance"*/,
                                   0LL);
  if ( !v5->fields.performance )
    goto LABEL_127;
  v87 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v5->fields.performance,
                                   0LL);
  if ( !v87 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v87, (UnityEngine_GameObject_o *)this, 0LL);
  v88 = v5->fields.motionFSM;
  if ( !v88 )
    goto LABEL_127;
  if ( !v88->max_length )
    goto LABEL_141;
  this = (BattleActorControl_o *)v88->m_Items[0];
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
         (System_String_o *)StringLiteral_13731/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v5->fields.actorside;
    if ( this )
    {
      this = (BattleActorControl_o *)System_String__Equals_44565128(
                                       (System_String_o *)this,
                                       (System_String_o *)StringLiteral_16159/*"_ENEMY"*/,
                                       0LL);
      v89 = v5->fields.motionFSM;
      if ( v89 )
      {
        if ( !v89->max_length )
          goto LABEL_141;
        v90 = (char)this;
        this = (BattleActorControl_o *)v89->m_Items[0];
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
                                               (System_String_o *)StringLiteral_13731/*"TargetFrontPos"*/,
                                               0LL);
              performance = v5->fields.performance;
              if ( performance )
              {
                distanceofactor = performance->fields.distanceofactor;
                if ( (v90 & 1) != 0 )
                {
                  if ( this )
                  {
                    *(float *)&this->fields.specialShadowObj = -distanceofactor;
                    HIDWORD(this->fields.specialShadowObj) = 0;
                    this->fields.currentSpShadowEffectId = 0;
                    v93 = v5->fields.motionFSM;
                    if ( v93 )
                    {
                      if ( !v93->max_length )
                        goto LABEL_141;
                      this = (BattleActorControl_o *)v93->m_Items[0];
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
                                                             (System_String_o *)StringLiteral_13730/*"TargetBackPos"*/,
                                                             0LL);
                            v94 = v5->fields.performance;
                            if ( v94 )
                            {
                              if ( this )
                              {
                                *(float *)&this->fields.specialShadowObj = v94->fields.distanceofactor;
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
                  v98 = v5->fields.motionFSM;
                  if ( v98 )
                  {
                    if ( !v98->max_length )
                      goto LABEL_141;
                    this = (BattleActorControl_o *)v98->m_Items[0];
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
                                                           (System_String_o *)StringLiteral_13730/*"TargetBackPos"*/,
                                                           0LL);
                          v99 = v5->fields.performance;
                          if ( v99 )
                          {
                            if ( this )
                            {
                              *(float *)&this->fields.specialShadowObj = -v99->fields.distanceofactor;
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
    sub_B5D69C(this, flg);
  }
LABEL_103:
  this = (BattleActorControl_o *)v5->fields.battleSvtData;
  if ( !this )
    goto LABEL_127;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)this, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BattleActorControl_o *)JsonManager__getDictionary(StrParam, 0LL);
  if ( !this )
    goto LABEL_127;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v131,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)this,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v132 = v131;
  while ( 1 )
  {
    v117 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v132,
             (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v117 )
      break;
    v101 = v5->fields.motionFSM;
    if ( !v101 )
      sub_B5D69C(v117, v118);
    if ( !v101->max_length )
    {
      v127 = sub_B5D6C8(v117);
      sub_B5D668(v127, 0LL);
    }
    v102 = v101->m_Items[0];
    if ( !v102 )
      sub_B5D69C(0LL, v118);
    key = v132.fields.current.fields.key;
    value = v132.fields.current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v102, 0LL);
    if ( !Fsm )
      sub_B5D69C(0LL, v106);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_B5D69C(0LL, v106);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v110 = v5->fields.motionFSM;
      if ( !v110 )
        sub_B5D69C(FsmInt, v109);
      if ( !v110->max_length )
      {
        v128 = sub_B5D6C8(FsmInt);
        sub_B5D668(v128, 0LL);
      }
      v111 = v110->m_Items[0];
      if ( !v111 )
        sub_B5D69C(0LL, v109);
      v112 = PlayMakerFSM__get_Fsm(v111, 0LL);
      if ( !v112 )
        sub_B5D69C(0LL, v113);
      v114 = v112->fields.variables;
      if ( !v114 )
        sub_B5D69C(0LL, v113);
      v115 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v114, (System_String_o *)key, 0LL);
      if ( !v115 )
        sub_B5D69C(0LL, v116);
      if ( !value )
        sub_B5D69C(v115, v116);
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        this = (BattleActorControl_o *)sub_B5D990(value);
        goto LABEL_141;
      }
      v115->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v132,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = (System_Int32_array **)BattleActorControl__GetDelayEndSequenceIdListFromMotion(
                                                              v5,
                                                              v119);
  v5->fields._delayEndSequenceIdListFromMotion_k__BackingField = (struct System_Collections_Generic_List_int__o *)DelayEndSequenceIdListFromMotion;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    DelayEndSequenceIdListFromMotion,
    v121,
    v122,
    v123,
    v124,
    v125,
    v126);
LABEL_126:
  BattleActorControl__setLimitedPeriod(v5, v97);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleServantData_o *v4; // x28
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  __int64 v87; // x20
  DataManager_o *Instance; // x0
  struct UnityEngine_GameObject_o *v89; // x1
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  BattleServantData_o **p_battleSvtData; // x25
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  BattleServantData_o *v103; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x21
  __int64 v105; // x20
  __int64 v106; // x22
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x20
  ServantEntity_o *v109; // x26
  struct UnityEngine_Transform_o *v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  int32_t v117; // w22
  int v118; // w20
  int32_t v119; // w23
  UnityEngine_GameObject_o *v120; // x21
  int32_t v121; // w24
  _BOOL4 isForceAppearance; // w27
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  UnityEngine_Transform_o *transform; // x20
  int v132; // s0
  const MethodInfo *v135; // x2
  BattlePerformance_o *performance; // x20
  int32_t datalist; // w21
  System_String_o *v138; // x21
  UnityEngine_Transform_o *v139; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v141; // x27
  System_String_array **v142; // x2
  System_String_array **v143; // x3
  System_Boolean_array **v144; // x4
  System_Int32_array **v145; // x5
  System_Int32_array *v146; // x6
  System_Int32_array *v147; // x7
  System_String_o *HideInAnimNodeName; // x26
  bool v149; // w0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  UnityEngine_Transform_o *v156; // x0
  UnityEngine_Transform_o *v157; // x0
  System_String_array **v158; // x2
  System_String_array **v159; // x3
  System_Boolean_array **v160; // x4
  System_Int32_array **v161; // x5
  System_Int32_array *v162; // x6
  System_Int32_array *v163; // x7
  struct System_String_o *v164; // x1
  UnityEngine_GameObject_o *v165; // x26
  UnityEngine_Transform_o *v166; // x20
  UnityEngine_Transform_o *v167; // x20
  int v168; // s0
  int32_t v171; // w27
  UnityEngine_Transform_o *v172; // x20
  int v173; // s0
  UnityEngine_Transform_o *v176; // x20
  int v177; // s0
  UnityEngine_Transform_o *v180; // x21
  BattleFBXComponent_o *fbxcomponent; // x20
  _BOOL4 v182; // w20
  const MethodInfo *v183; // x2
  const MethodInfo *v184; // x1
  const MethodInfo *v185; // x3
  int32_t displayType; // w8
  bool v187; // w1
  bool v188; // w2
  System_Collections_Generic_IEnumerable_T__o *v189; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v190; // x21
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  const MethodInfo *v197; // x2
  UnityEngine_Transform_o *v198; // x20
  float v199; // s0
  float v200; // s1
  float v201; // s2
  float actorScale; // s3
  Il2CppObject *v203; // x20
  struct BattlePerformance_o *v204; // x8
  struct BattleData_o *data; // x8
  int32_t v206; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  struct BattleActorControl___c_StaticFields *saveNameList; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__135_0; // x21
  Il2CppObject *v210; // x20
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  System_String_array **v212; // x2
  System_String_array **v213; // x3
  System_Boolean_array **v214; // x4
  System_Int32_array **v215; // x5
  System_Int32_array *v216; // x6
  System_Int32_array *v217; // x7
  UnityEngine_SkinnedMeshRenderer_o *v218; // x25
  UnityEngine_Object_o *Component_srcLineSprite; // x26
  struct BattlePerformance_o *v220; // x8
  bool IsEnemyPosCountNormal; // w27
  UnityEngine_Mesh_o *v222; // x21
  BattlePerformance_o *v223; // x28
  int32_t monitor; // w21
  __int64 v225; // x20
  __int64 v226; // x22
  int32_t v227; // w22
  System_Action_o *v228; // x20
  struct BattlePerformance_o *v229; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 monitor_low; // x9
  UnityEngine_Object_o *Component_WebViewObject; // x21
  struct BattlePerformance_o *v235; // x8
  UnityEngine_Camera_o *actorcamera; // x25
  UnityEngine_Camera_o *uicamera; // x26
  UnityEngine_GameObject_o *v238; // x22
  const MethodInfo *v239; // x1
  int v240; // s0
  iTween_array *Components_iTween; // x0
  System_String_array **v244; // x2
  System_String_array **v245; // x3
  System_Boolean_array **v246; // x4
  System_Int32_array **v247; // x5
  System_Int32_array *v248; // x6
  System_Int32_array *v249; // x7
  const MethodInfo *v250; // x3
  const MethodInfo *v251; // x4
  const MethodInfo *v252; // x1
  __int64 v253; // x0
  int32_t v254; // [xsp+Ch] [xbp-64h]
  BattleServantData_o *v255; // [xsp+10h] [xbp-60h]
  Il2CppObject *object; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v257; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v258; // 0:x0.16
  UnityEngine_Vector3_o v259; // 0:s0.4,4:s1.4,8:s2.4

  v4 = svtdata;
  if ( (byte_42E7FF4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)svtdata, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Array_IndexOf_int___, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v18, v19, v20);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v21, v22, v23);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v24, v25, v26);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___68749192, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&UnityEngine_Mesh_TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_System_Predicate_SkinnedMeshRenderer___ctor__, v51, v52, v53);
    sub_B5D5C4(&System_Predicate_SkinnedMeshRenderer__TypeInfo, v54, v55, v56);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v60, v61, v62);
    sub_B5D5C4(&Method_BattleActorControl___c__setServantData_b__135_0__, v63, v64, v65);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass135_0__setServantData_b__1__, v66, v67, v68);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass135_0_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&BattleActorControl___c_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_18545/*"en_Head"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_12986/*"Shadow"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_18549/*"en_buff01"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_1/*""*/, v84, v85, v86);
    byte_42E7FF4 = 1;
  }
  v87 = sub_B5D694(BattleActorControl___c__DisplayClass135_0_TypeInfo);
  BattleActorControl___c__DisplayClass135_0___ctor((BattleActorControl___c__DisplayClass135_0_o *)v87, 0LL);
  if ( !v87 )
    goto LABEL_119;
  *(_QWORD *)(v87 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v87 + 16), (System_Int32_array **)this, v90, v91, v92, v93, v94, v95);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = v4;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleSvtData,
    (System_Int32_array **)v4,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  object = (Il2CppObject *)v87;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___);
  v103 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v106 = *(_QWORD *)&v103->fields.svtId.fields.currentCryptoKey;
  v105 = *(_QWORD *)&v103->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v257.fields.currentCryptoKey = v106;
  *(_QWORD *)&v257.fields.fakeValue = v105;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v257, 0LL);
  if ( !v104 )
    goto LABEL_119;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v104,
             (int32_t)Instance,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v109 = (ServantEntity_o *)Entity;
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
    v110 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12986/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v110;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.shadowObj,
      (System_Int32_array **)v110,
      v111,
      v112,
      v113,
      v114,
      v115,
      v116);
  }
  Instance = (DataManager_o *)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v117 = (int)Instance;
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v118 = (int)Instance;
  v119 = v117 == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v118 : 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_119;
  v120 = (UnityEngine_GameObject_o *)Instance;
  v254 = v117;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v121 = (int)Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v120,
                               v121,
                               v119,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.actorObject,
    (System_Int32_array **)Manager__loadBattleActor,
    v125,
    v126,
    v127,
    v128,
    v129,
    v130);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  *(UnityEngine_Vector3_o *)&v132 = UnityEngine_Vector3__get_zero(0LL);
  if ( !transform )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v132, 0LL);
  BattleActorControl__ChangeShadowParent(this, v119, v135);
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
  v255 = v4;
  v138 = (System_String_o *)StringLiteral_18545/*"en_Head"*/;
  v139 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v139, v138, v119, 0, 0LL);
  if ( !Instance )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v141 = gameObject;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.checkScaleNode, 0LL, v142, v143, v144, v145, v146, v147);
  if ( v109 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v109, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v138 )
      goto LABEL_119;
    v149 = System_String__Equals_44565128(v138, HideInAnimNodeName, 0LL);
    v89 = v141;
    if ( !v149 )
    {
      Instance = (DataManager_o *)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_119;
      v156 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v156, HideInAnimNodeName, v119, 0, 0LL);
      if ( !Instance )
        goto LABEL_119;
      v89 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v89;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.checkScaleNode,
      (System_Int32_array **)v89,
      v150,
      v151,
      v152,
      v153,
      v154,
      v155);
  }
  v157 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v164 = TransformHelper__ExistNodeFromLvName(v157, (System_String_o *)StringLiteral_18549/*"en_buff01"*/, -1, 0, 0LL)
       ? (struct System_String_o *)StringLiteral_18549/*"en_buff01"*/
       : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v164;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (System_Int32_array **)v164,
    v158,
    v159,
    v160,
    v161,
    v162,
    v163);
  v165 = (UnityEngine_GameObject_o *)sub_B5D694(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_41595520(v165, 0LL);
  if ( !v165 )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v165, 0LL);
  if ( !v141 )
    goto LABEL_119;
  v166 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v141, 0LL);
  if ( !v166 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v166, (UnityEngine_Transform_o *)Instance, 0LL);
  v167 = UnityEngine_GameObject__get_transform(v165, 0LL);
  *(UnityEngine_Vector3_o *)&v168 = UnityEngine_Vector3__get_zero(0LL);
  v171 = v117;
  if ( !v167 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v167, *(UnityEngine_Vector3_o *)&v168, 0LL);
  v172 = UnityEngine_GameObject__get_transform(v165, 0LL);
  *(UnityEngine_Vector3_o *)&v173 = UnityEngine_Vector3__get_up(0LL);
  if ( !v172 )
    goto LABEL_119;
  UnityEngine_Transform__set_localEulerAngles(v172, *(UnityEngine_Vector3_o *)&v173, 0LL);
  v176 = UnityEngine_GameObject__get_transform(v165, 0LL);
  *(UnityEngine_Vector3_o *)&v177 = UnityEngine_Vector3__get_one(0LL);
  if ( !v176 )
    goto LABEL_119;
  UnityEngine_Transform__set_localScale(v176, *(UnityEngine_Vector3_o *)&v177, 0LL);
  v180 = UnityEngine_GameObject__get_transform(v165, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v180 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v180, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v165, 0LL);
  if ( !Instance )
    goto LABEL_119;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v165, 0LL);
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
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v117, v119, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v182 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Instance = (DataManager_o *)ServantAssetLoadManager__loadAnimEvents(v117, v119, v182, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__loadAnimationEvents(
    this->fields.fbxcomponent,
    (UnityEngine_TextAsset_o *)Instance,
    v117,
    v119,
    0LL);
  BattleActorControl__InitAnimationEffect(this, v119, v183);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v187 = displayType == 2;
      v188 = displayType == 3;
    }
    else
    {
      v187 = 0;
      v188 = 0;
    }
    BattleActorControl__SetDispServant(this, v187, v188, v185);
  }
  BattleActorControl__UpdateShadow(this, v184);
  this->fields.stepFlg = 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  v189 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                                                          (UnityEngine_GameObject_o *)Instance,
                                                          (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v190 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v190,
    v189,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___68749192);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v190;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.rendererArrayList,
    (System_Int32_array **)v190,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v197);
  if ( !v4 )
    goto LABEL_119;
  this->fields.actorScale = BattleServantData__getActorScale(v4, 0LL);
  v198 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v199 = UnityEngine_Vector3__get_one(0LL);
  if ( !v198 )
    goto LABEL_119;
  actorScale = this->fields.actorScale;
  v259.fields.x = v199 * actorScale;
  v259.fields.y = v200 * actorScale;
  v259.fields.z = v201 * actorScale;
  UnityEngine_Transform__set_localScale(v198, v259, 0LL);
  v203 = object;
  if ( !v4->fields.isEnemy )
    goto LABEL_117;
  v204 = this->fields.performance;
  if ( !v204 )
    goto LABEL_119;
  data = v204->fields.data;
  if ( !data )
    goto LABEL_119;
  v206 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           v4->fields.uniqueId,
           (const MethodInfo_1FC176C *)Method_System_Array_IndexOf_int___);
  LODWORD(object[1].monitor) = v206;
  if ( v206 == -1 )
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
  _9__135_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)saveNameList->__9__135_0;
  if ( !_9__135_0 )
  {
    if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      saveNameList = BattleActorControl___c_TypeInfo->static_fields;
    }
    v210 = (Il2CppObject *)saveNameList->__9;
    _9__135_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SkinnedMeshRenderer__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__135_0,
      v210,
      Method_BattleActorControl___c__setServantData_b__135_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_SkinnedMeshRenderer___ctor__);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__135_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)_9__135_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&static_fields->__9__135_0,
      (System_Int32_array **)_9__135_0,
      v212,
      v213,
      v214,
      v215,
      v216,
      v217);
    v203 = object;
  }
  if ( !rendererArrayList )
    goto LABEL_119;
  Instance = (DataManager_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)rendererArrayList,
                                (System_Predicate_T__o *)_9__135_0,
                                (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_119;
  v218 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      *p_actorObject,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
                                  (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_119;
    Component_srcLineSprite = (UnityEngine_Object_o *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_srcLineSprite, 0, 0LL);
  }
  v220 = this->fields.performance;
  if ( !v220 )
    goto LABEL_119;
  Instance = (DataManager_o *)v220->fields.data;
  if ( !Instance )
    goto LABEL_119;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v222 = (UnityEngine_Mesh_o *)sub_B5D694(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v222, 0LL);
  if ( !v218 )
    goto LABEL_119;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v218, v222, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_119;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_srcLineSprite, v222, 0LL);
  v223 = this->fields.performance;
  monitor = (int32_t)v203[1].monitor;
  v226 = *(_QWORD *)&v255->fields.svtId.fields.currentCryptoKey;
  v225 = *(_QWORD *)&v255->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v258.fields.currentCryptoKey = v226;
  *(_QWORD *)&v258.fields.fakeValue = v225;
  v227 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v258, 0LL);
  v228 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v228, object, Method_BattleActorControl___c__DisplayClass135_0__setServantData_b__1__, 0LL);
  if ( !v223 )
    goto LABEL_119;
  BattlePerformance__AddCollider(
    v223,
    (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
    v218,
    monitor,
    v227,
    v228,
    IsEnemyPosCountNormal,
    0LL);
  v229 = this->fields.performance;
  if ( !v229 )
    goto LABEL_119;
  statusPerf = v229->fields.statusPerf;
  v4 = v255;
  v171 = v254;
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
    v253 = sub_B5D6C8(Instance);
    sub_B5D668(v253, 0LL);
  }
  Instance = (DataManager_o *)svtHeadUpList->m_Items[monitor_low];
  if ( !Instance )
LABEL_119:
    sub_B5D69C(Instance, v89);
  Component_WebViewObject = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                      (UnityEngine_Component_o *)Instance,
                                                      (const MethodInfo_1ADE2A0 *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(Component_WebViewObject, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v235 = this->fields.performance;
    if ( v235 )
    {
      actorcamera = v235->fields.actorcamera;
      uicamera = v235->fields.uicamera;
      v238 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v240 = BattleActorControl__getHeadUpY(this, v239);
      if ( Component_WebViewObject )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)Component_WebViewObject,
          actorcamera,
          uicamera,
          v238,
          *(UnityEngine_Vector3_o *)&v240,
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
                        (const MethodInfo_1CC4648 *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_iTween;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (System_Int32_array **)Components_iTween,
    v244,
    v245,
    v246,
    v247,
    v248,
    v249);
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, 0, v250);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v171, v119, v4->fields.isEnemy, v251);
  BattleActorControl__LoadSavedPartAnimation(this, v252);
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v7; // x8
  struct PlayMakerFSM_array *v8; // x8
  struct PlayMakerFSM_array *v9; // x8
  __int64 v10; // x0

  v5 = this;
  if ( (byte_42E8004 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_13317/*"SummonMasterObject"*/, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E8004 = 1;
  }
  motionFSM = v5->fields.motionFSM;
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
                                     (System_String_o *)StringLiteral_13317/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v7 = v5->fields.motionFSM;
      if ( !v7 )
        goto LABEL_30;
      if ( !v7->max_length )
        goto LABEL_31;
      this = (BattleActorControl_o *)v7->m_Items[0];
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
                                       (System_String_o *)StringLiteral_13317/*"SummonMasterObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_30;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
    }
    v8 = v5->fields.motionFSM;
    if ( !v8 )
      goto LABEL_30;
    if ( v8->max_length <= 1 )
    {
LABEL_31:
      v10 = sub_B5D6C8(this);
      sub_B5D668(v10, 0LL);
    }
    this = (BattleActorControl_o *)v8->m_Items[1];
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
                                     (System_String_o *)StringLiteral_13317/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v9 = v5->fields.motionFSM;
      if ( !v9 )
        goto LABEL_30;
      if ( v9->max_length > 1 )
      {
        this = (BattleActorControl_o *)v9->m_Items[1];
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
                                               (System_String_o *)StringLiteral_13317/*"SummonMasterObject"*/,
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
        sub_B5D69C(this, obj);
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v7; // x8
  __int64 v8; // x0

  v5 = this;
  if ( (byte_42E8003 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_13733/*"TargetObject"*/, (_DWORD)obj, (_DWORD)method, v3);
    byte_42E8003 = 1;
  }
  motionFSM = v5->fields.motionFSM;
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
                                       (System_String_o *)StringLiteral_13733/*"TargetObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_17;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
      v7 = v5->fields.motionFSM;
      if ( !v7 )
        goto LABEL_17;
      if ( v7->max_length > 1 )
      {
        this = (BattleActorControl_o *)v7->m_Items[1];
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
                                               (System_String_o *)StringLiteral_13733/*"TargetObject"*/,
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
        sub_B5D69C(this, obj);
      }
    }
    v8 = sub_B5D6C8(this);
    sub_B5D668(v8, 0LL);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_B5D69C(this, method);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
      sub_B5D69C(0LL, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattlePerformance_o *performance; // x8
  bool v9; // zf
  int32_t uniqueID; // w20
  float v11; // s8
  const MethodInfo *v12; // x3

  v4 = this;
  if ( (byte_42E8056 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleActorControl_o *)sub_B5D5C4(&StringLiteral_12409/*"SKIP_VOICE"*/, v5, v6, v7);
    byte_42E8056 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_B5D69C(this, method);
  v9 = !BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v4->fields.uniqueID;
  if ( v9 )
    v11 = 1.0;
  else
    v11 = 0.5;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__StopVoice(uniqueID, v11, 0LL);
  BattleActorControl__sendEventFSM_24192704(v4, (System_String_o *)StringLiteral_12409/*"SKIP_VOICE"*/, 0, v12);
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
    sub_B5D69C(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20
  const MethodInfo *v9; // x2
  System_Collections_IEnumerator_o *v10; // x1

  if ( (byte_42E805F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BattleActorControl_endChangeAppearance__, v5, v6, v7);
    byte_42E805F = 1;
  }
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v10 = BattleActorControl__waitChangeApp(this, v8, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v10, 0LL);
}


void __fastcall BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  int v40; // w1
  char v41; // w2
  __int64 v42; // x3
  int v43; // w1
  char v44; // w2
  __int64 v45; // x3
  int v46; // w1
  char v47; // w2
  __int64 v48; // x3
  int v49; // w1
  char v50; // w2
  __int64 v51; // x3
  int v52; // w1
  char v53; // w2
  __int64 v54; // x3
  int v55; // w1
  char v56; // w2
  __int64 v57; // x3
  int v58; // w1
  char v59; // w2
  __int64 v60; // x3
  int v61; // w1
  char v62; // w2
  __int64 v63; // x3
  int v64; // w1
  char v65; // w2
  __int64 v66; // x3
  int v67; // w1
  char v68; // w2
  __int64 v69; // x3
  int v70; // w1
  char v71; // w2
  __int64 v72; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *noblePhantasmObjectVisibleCtrList; // x0
  const MethodInfo *v74; // x1
  _BOOL8 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x3
  Il2CppObject *current; // x22
  __int64 v79; // x1
  struct System_Collections_Generic_List_BattleActorControl__o *v80; // x0
  System_Action_o *v81; // x22
  struct System_Action_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v90; // x8
  const MethodInfo *v91; // x2
  struct BattlePerformance_o *v92; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x21
  BattleFBXComponent_c *v94; // x0
  struct BattlePerformance_o *v95; // x8
  WebViewManager_o *Instance; // x0
  BattlePerformance_o *v97; // x21
  BattleSequenceManager_o *v98; // x22
  struct BattlePerformance_o *v99; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v101; // x8
  struct BattleActionData_o *actiondata; // x8
  TreasureDvcEntity_o *Entity; // x0
  TreasureDvcEntity_o *v104; // x20
  struct BattleActionData_o *v105; // x8
  AssetManager_o *v106; // x20
  AssetManager_ResourceUnloadEventHandler_o *v107; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v109; // x20
  __int64 v110; // x21
  __int64 v111; // x22
  int32_t v112; // w21
  System_Collections_Generic_List_XWeaponTrail_Element__o *v113; // x8
  int32_t items; // w22
  struct BattleServantData_o *v115; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v118; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v120; // x27
  UnityEngine_Object_o *v121; // x20
  struct BattlePerformance_o *v122; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v124; // x8
  struct BattleData_o *v125; // x8
  void *v126; // x0
  int v127; // w1
  __int64 v128; // x22
  System_Collections_Generic_List_Enumerator_T__o v129; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v130; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v131; // 0:x0.16

  if ( (byte_42E803C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, flg, method);
    sub_B5D5C4(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, v7, v8, v9);
    sub_B5D5C4(&Method_BattleActorControl__startNoblePhantasm_b__263_0__, v10, v11, v12);
    sub_B5D5C4(&Method_BattleActorControl__startNoblePhantasm_b__263_1__, v13, v14, v15);
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_TreasureDvcMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v34, v35, v36);
    sub_B5D5C4(&Method_FieldMotionManager_SetVariables_GameObject___, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v40, v41, v42);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__Clear__, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v46, v47, v48);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&OptionManager_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v61, v62, v63);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v64, v65, v66);
    sub_B5D5C4(&StringLiteral_9458/*"NPACTOR"*/, v67, v68, v69);
    sub_B5D5C4(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v70, v71, v72);
    byte_42E803C = 1;
  }
  memset(&v130, 0, sizeof(v130));
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_BattleActorControl__Clear__);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                                                                                   this,
                                                                                                   v74);
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v129,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  v130 = v129;
  while ( 1 )
  {
    v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v130,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    if ( !v75 )
      break;
    current = v130.fields.current;
    if ( !v130.fields.current )
      sub_B5D69C(v75, v76);
    if ( BattleActorControl__ProcServantObjectVisibleCtr((BattleActorControl_o *)v130.fields.current, 1, 0, v77) )
    {
      v80 = this->fields.noblePhantasmObjectVisibleCtrList;
      if ( !v80 )
        sub_B5D69C(0LL, v79);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v80,
        (EventMissionProgressRequest_Argument_ProgressData_o *)current,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActorControl__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v130,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    v81 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v81, (Il2CppObject *)this, Method_BattleActorControl__startNoblePhantasm_b__263_0__, 0LL);
    v82 = (struct System_Action_o *)System_Delegate__Combine(
                                      (System_Delegate_o *)callback,
                                      (System_Delegate_o *)v81,
                                      0LL);
    if ( !v82 || v82->klass == System_Action_TypeInfo )
      break;
    v126 = (void *)sub_B5D990(v82);
    if ( v127 != 1 )
      _Unwind_Resume(v126);
    v128 = *(_QWORD *)__cxa_begin_catch(v126);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v130,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v128 )
      sub_B5D668(v128, 0LL);
  }
  this->fields.noblePhantasmCallback = v82;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.noblePhantasmCallback,
    (System_Int32_array **)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
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
  v90 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 1;
  if ( !v90 )
    goto LABEL_77;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v90->fields.logic;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattleLogic__ChangePhase((BattleLogic_o *)noblePhantasmObjectVisibleCtrList, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 0, v91);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__AllServantClassIconEffectStartStop(
    (BattlePerformance_o *)noblePhantasmObjectVisibleCtrList,
    0,
    0LL);
  v92 = this->fields.performance;
  if ( !v92 )
    goto LABEL_77;
  fmManager_k__BackingField = v92->fields._fmManager_k__BackingField;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)this,
                                                                                                   0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_77;
  FieldMotionManager__SetVariables_string_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9458/*"NPACTOR"*/,
    (System_String_o *)noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_1CC3714 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v94 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v94 = BattleFBXComponent_TypeInfo;
  }
  v94->static_fields->EnableEvent = 0;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__changeShadowType((BattlePerformance_o *)noblePhantasmObjectVisibleCtrList, 1, 0LL);
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.performance;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)noblePhantasmObjectVisibleCtrList, 0LL);
  v95 = this->fields.performance;
  if ( !v95 )
    goto LABEL_77;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)v95->fields.commandPerf;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  BattlePerformanceCommandCard__SetCommandCardEffectActive(
    (BattlePerformanceCommandCard_o *)noblePhantasmObjectVisibleCtrList,
    0,
    0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v97 = this->fields.performance;
  v98 = (BattleSequenceManager_o *)Instance;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Component__get_gameObject(
                                                                                                   (UnityEngine_Component_o *)this,
                                                                                                   0LL);
  v99 = this->fields.performance;
  if ( !v99 )
    goto LABEL_77;
  bgPerf = v99->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_77;
  if ( !v98 )
    goto LABEL_77;
  BattleSequenceManager__init(
    v98,
    v97,
    (UnityEngine_GameObject_o *)noblePhantasmObjectVisibleCtrList,
    v99->fields.p_actorlist,
    v99->fields.e_actorlist,
    v99->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v101 = this->fields.performance;
  if ( !v101 )
    goto LABEL_77;
  v101->fields.isNoblePhantasmWhiteInFlg = flg;
  if ( this->fields.actiondata )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = this->fields.actiondata;
    if ( !actiondata || !noblePhantasmObjectVisibleCtrList )
      goto LABEL_77;
    Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)noblePhantasmObjectVisibleCtrList,
                                      actiondata->fields.treasureDvcId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v104 = Entity;
      if ( TreasureDvcEntity__IsRandomTD(Entity, 0LL) )
      {
        noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleSvtData;
        if ( !noblePhantasmObjectVisibleCtrList )
          goto LABEL_77;
        noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleServantData__getDispLimitCount((BattleServantData_o *)noblePhantasmObjectVisibleCtrList, 1, 0LL);
        v105 = this->fields.actiondata;
        if ( !v105 )
          goto LABEL_77;
        TreasureDvcEntity__getRandomSeqIdEachLimit(
          v104,
          (int32_t)noblePhantasmObjectVisibleCtrList,
          v105->fields.ActSetId,
          0LL);
      }
    }
  }
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
    v106 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v107 = (AssetManager_ResourceUnloadEventHandler_o *)sub_B5D694(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v107,
      (Il2CppObject *)this,
      Method_BattleActorControl__startNoblePhantasm_b__263_1__,
      0LL);
    if ( !v106 )
      goto LABEL_77;
    AssetManager__RequestUnloadUnusedAssets(v106, v107, 0LL);
  }
  else
  {
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_77;
    v109 = (BattleSequenceManager_o *)noblePhantasmObjectVisibleCtrList;
    v111 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v110 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v131.fields.currentCryptoKey = v111;
    *(_QWORD *)&v131.fields.fakeValue = v110;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                                                                                     v131,
                                                                                                     0LL);
    if ( !this->fields.battleSvtData )
      goto LABEL_77;
    v112 = (int)noblePhantasmObjectVisibleCtrList;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleServantData__get_TreasureDevice(
                                                                                                     this->fields.battleSvtData,
                                                                                                     0LL);
    if ( !noblePhantasmObjectVisibleCtrList )
      goto LABEL_77;
    v113 = noblePhantasmObjectVisibleCtrList;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.battleSvtData;
    if ( !noblePhantasmObjectVisibleCtrList )
      goto LABEL_77;
    items = (int32_t)v113->fields._items;
    noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)BattleServantData__getDispLimitCount(
                                                                                                     (BattleServantData_o *)noblePhantasmObjectVisibleCtrList,
                                                                                                     1,
                                                                                                     0LL);
    v115 = this->fields.battleSvtData;
    if ( !v115 )
      goto LABEL_77;
    overwriteSvtVoiceId = v115->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v115->fields.treasuredvcLevel;
    v118 = (int)noblePhantasmObjectVisibleCtrList;
    NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL);
    v120 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B5D694(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v120,
      (Il2CppObject *)this,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v109 )
      goto LABEL_77;
    BattleSequenceManager__loadSequence(
      v109,
      v112,
      items,
      v118,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v120,
      0LL);
  }
  v121 = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)UnityEngine_Object__op_Inequality(
                                                                                                   v121,
                                                                                                   0LL,
                                                                                                   0LL);
  if ( ((unsigned __int8)noblePhantasmObjectVisibleCtrList & 1) != 0 )
  {
    v122 = this->fields.performance;
    if ( !v122 )
      goto LABEL_77;
    data = (UnityEngine_Object_o *)v122->fields.data;
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
      v124 = this->fields.performance;
      if ( v124 )
      {
        v125 = v124->fields.data;
        if ( v125 )
        {
          ++v125->fields.playerNpCount;
          return;
        }
      }
LABEL_77:
      sub_B5D69C(noblePhantasmObjectVisibleCtrList, callback);
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
    sub_B5D69C(this, method);
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
    sub_B5D69C(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t uniqueID; // w19

  if ( (byte_42E8057 & 1) == 0 )
  {
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8057 = 1;
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
  __int64 v3; // x3
  BattleActorControl_o *v5; // x19
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v58; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v62; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *_9__325_0; // x20
  Il2CppObject *v65; // x21
  struct BattleActorControl___c_StaticFields *v66; // x0
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Collections_Generic_List_int__o *v73; // x22
  __int64 v74; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v75; // x21
  unsigned __int64 v76; // x23
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x0
  struct UnityEngine_GameObject_o *actorObject; // x8
  BattleActorControl_o *v81; // x22
  unsigned __int64 v82; // x25
  int32_t v83; // w23
  UnityEngine_GameObject_o *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v86; // x2
  System_Collections_IEnumerator_o *v87; // x0
  __int64 v88; // x8
  unsigned __int64 v89; // x22
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  System_Collections_IEnumerator_o *v92; // x0
  __int64 v93; // x0

  v5 = this;
  if ( (byte_42E8067 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Remove_int__GameObject___, (_DWORD)auraEffectList, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_AuraEffectMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Except_int___, v24, v25, v26);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v27, v28, v29);
    sub_B5D5C4(&Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v48, v49, v50);
    sub_B5D5C4(&Method_BattleActorControl___c__updateAura_b__325_0__, v51, v52, v53);
    this = (BattleActorControl_o *)sub_B5D5C4(&BattleActorControl___c_TypeInfo, v54, v55, v56);
    byte_42E8067 = 1;
  }
  battleSvtData = v5->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_64;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_64;
  this = (BattleActorControl_o *)BattleBuffData__GetIgnoreAuraBuffIds((BattleBuffData_o *)this, 0LL);
  if ( !this )
    goto LABEL_18;
  v58 = v5->fields.battleSvtData;
  if ( !v58 )
    goto LABEL_64;
  buffData = v58->fields.buffData;
  if ( !buffData )
    goto LABEL_64;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v58->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_18:
    v73 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v73,
      (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( auraEffectList )
      {
        v74 = *(_QWORD *)&auraEffectList->max_length;
        v75 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
        if ( (int)v74 >= 1 )
        {
          v76 = 0LL;
          while ( v76 < (unsigned int)v74 )
          {
            if ( !v75 )
              goto LABEL_64;
            this = (BattleActorControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v75,
                                             auraEffectList->m_Items[v76 + 1],
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v73 )
                goto LABEL_64;
              System_Collections_Generic_List_int___Add(
                v73,
                *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1),
                (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            }
            LODWORD(v74) = auraEffectList->max_length;
            if ( (__int64)++v76 >= (int)v74 )
              goto LABEL_28;
          }
          goto LABEL_65;
        }
LABEL_28:
        this = (BattleActorControl_o *)v5->fields.auraList;
        if ( this )
        {
          Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                   (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this,
                   (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
          v79 = System_Linq_Enumerable__Except_int_(
                  v78,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v73,
                  (const MethodInfo_1CAA2C8 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v79,
                                           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            actorObject = this->fields.actorObject;
            v81 = this;
            if ( (int)actorObject >= 1 )
            {
              v82 = 0LL;
              while ( v82 < (unsigned int)actorObject )
              {
                this = (BattleActorControl_o *)v5->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                v83 = *((_DWORD *)&v81->fields.fbxcomponent + v82);
                Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                     v83,
                                                     (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
                {
                  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v5,
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
                    v87 = BattleActorControl__DestroyAuraEffect((BattleActorControl_o *)activeInHierarchy, Item, v86);
                    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v5, v87, 0LL);
                  }
                  else
                  {
LABEL_68:
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v5->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)this,
                  v83,
                  (const MethodInfo_2F33AA0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v5->fields.auraList;
                if ( !this )
                  goto LABEL_64;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                 (const MethodInfo_2F31CC0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v5->fields._currentPriority_k__BackingField = 0;
                LODWORD(actorObject) = v81->fields.actorObject;
                if ( (__int64)++v82 >= (int)actorObject )
                  goto LABEL_53;
              }
              goto LABEL_65;
            }
LABEL_53:
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v5, 0LL);
            if ( this )
            {
              this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v88 = *(_QWORD *)&auraEffectList->max_length;
              if ( (int)v88 < 1 )
                return;
              v89 = 0LL;
              while ( v89 < (unsigned int)v88 )
              {
                if ( !v75 )
                  goto LABEL_64;
                this = (BattleActorControl_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 v75,
                                                 auraEffectList->m_Items[v89 + 1],
                                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v91 = (int32_t)this->fields.actorObject;
                  if ( v5->fields._currentPriority_k__BackingField <= v91 )
                  {
                    v92 = BattleActorControl__coAddAura(
                            v5,
                            *((_DWORD *)&this->fields.BaseMonoBehaviour_Fields + 1),
                            v91,
                            v90);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                                     (UnityEngine_MonoBehaviour_o *)v5,
                                                     v92,
                                                     0LL);
                  }
                }
                LODWORD(v88) = auraEffectList->max_length;
                if ( (__int64)++v89 >= (int)v88 )
                  return;
              }
LABEL_65:
              v93 = sub_B5D6C8(this);
              sub_B5D668(v93, 0LL);
            }
          }
        }
      }
    }
LABEL_64:
    sub_B5D69C(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v5->fields.auraList;
  v62 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v62 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v62->static_fields;
  _9__325_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)static_fields->__9__325_0;
  if ( !_9__325_0 )
  {
    if ( (BYTE3(v62->vtable._0_Equals.methodPtr) & 4) != 0 && !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v65 = (Il2CppObject *)static_fields->__9;
    _9__325_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B5D694(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
      _9__325_0,
      v65,
      Method_BattleActorControl___c__updateAura_b__325_0__,
      (const MethodInfo_27926E4 *)Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__);
    v66 = BattleActorControl___c_TypeInfo->static_fields;
    v66->__9__325_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__325_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v66->__9__325_0,
      (System_Int32_array **)_9__325_0,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__325_0,
    (const MethodInfo_1AD92D4 *)Method_BasicHelper_Remove_int__GameObject___);
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
        v8 = sub_B5D6C8(this);
        sub_B5D668(v8, 0LL);
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
    sub_B5D69C(this, actionData);
  }
}


void __fastcall BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl_o *v4; // x19
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  System_Collections_Generic_List_int__o *v59; // x20
  int size; // w8
  int v61; // w24
  BattleBuffData_BuffData_o *v62; // x8
  BuffEntity_o *Entity; // x23
  const MethodInfo *v64; // x2
  int actorObject; // w8
  BattleActorControl_o *v66; // x23
  unsigned int v67; // w27
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v69; // x0
  __int64 v70; // x1
  int32_t current; // w21
  const MethodInfo *v72; // x2
  System_Collections_IEnumerator_o *v73; // x1
  __int64 v74; // x0
  System_Collections_Generic_List_Enumerator_int__o v75; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+20h] [xbp-90h] BYREF

  v4 = this;
  if ( (byte_42E8078 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BuffMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_int___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v26, v27, v28);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____68867312, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v47, v48, v49);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v50, v51, v52);
    this = (BattleActorControl_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    byte_42E8078 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_35;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_35;
  EffectBuffList = BattleBuffData__GetEffectBuffList((BattleBuffData_o *)this, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)this,
                                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BuffMaster___);
  v59 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v59,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !EffectBuffList )
    goto LABEL_35;
  size = EffectBuffList->fields._size;
  if ( size >= 1 )
  {
    v61 = 0;
    while ( 1 )
    {
      if ( size <= (unsigned int)v61 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v62 = EffectBuffList->fields._items->m_Items[v61];
      if ( !v62 )
        goto LABEL_35;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_35;
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v62->fields.buffId,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v4, Entity, v64);
      if ( !Entity || !v59 )
        goto LABEL_35;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v59,
                                       Entity->fields.effectId,
                                       (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        System_Collections_Generic_List_int___Add(
          v59,
          Entity->fields.effectId,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        this = (BattleActorControl_o *)v4->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_35;
        this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                                         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
                                         Entity->fields.effectId,
                                         (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleActorControl_o *)v4->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_35;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                           (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_35;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____68867312);
          if ( !this )
            goto LABEL_35;
          actorObject = (int)this->fields.actorObject;
          v66 = this;
          if ( actorObject >= 1 )
            break;
        }
      }
LABEL_26:
      size = EffectBuffList->fields._size;
      if ( ++v61 >= size )
        goto LABEL_27;
    }
    v67 = 0;
    while ( 1 )
    {
      if ( v67 >= actorObject )
      {
        v74 = sub_B5D6C8(this);
        sub_B5D668(v74, 0LL);
      }
      this = (BattleActorControl_o *)*((_QWORD *)&v66->fields.fbxcomponent + (int)v67);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v61 * 0.01) + -1.0,
        0LL);
      actorObject = (int)v66->fields.actorObject;
      if ( (int)++v67 >= actorObject )
        goto LABEL_26;
    }
LABEL_35:
    sub_B5D69C(this, method);
  }
LABEL_27:
  this = (BattleActorControl_o *)v4->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_35;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)this,
           (const MethodInfo_2F31CD0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_1CBA56C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v76 = v75;
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v76,
            (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v69 )
      break;
    if ( !v59 )
      sub_B5D69C(v69, v70);
    current = v76.fields.current;
    if ( !System_Collections_Generic_List_int___Contains(
            v59,
            v76.fields.current,
            (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v73 = BattleActorControl__DestroyEffectOnParticleStop(v4, current, v72);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)v4, v73, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v76,
    (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  UnityEngine_Object_o *gameObject; // x19
  void *material; // x0
  __int64 v30; // x1
  int v31; // w8
  _DWORD *v32; // x20
  unsigned int v33; // w22
  char *v34; // x8
  UnityEngine_Renderer_o *v35; // x21
  BattleActorControl_c *v36; // x0
  float defaultHeight; // s9
  float v38; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  UnityEngine_Material_o *v42; // x21
  float v43; // s4
  float v44; // s5
  float v45; // s6
  float v46; // s7
  int v47; // w8
  int v48; // w23
  char *v49; // x8
  UnityEngine_Component_o *v50; // x20
  __int64 v51; // x8
  _QWORD *v52; // x21
  unsigned __int64 v53; // x28
  UnityEngine_Material_o *v54; // x22
  System_String_o *v55; // x1
  UnityEngine_Material_o *v56; // x0
  float v57; // s0
  float y; // s9
  float v59; // s10
  float v60; // s11
  __int64 v61; // x0
  int *v62; // [xsp+0h] [xbp-C0h]
  MethodInfo methoda; // [xsp+8h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E802B & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v7, v8, v9);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_16142/*"_ClipSharpnessY"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_16146/*"_Color"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_23567/*"weapon"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_17086/*"body"*/, v25, v26, v27);
    byte_42E802B = 1;
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
    material = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !material )
      goto LABEL_47;
    v31 = *((_DWORD *)material + 6);
    v32 = material;
    if ( v31 >= 1 )
    {
      v33 = 0;
      while ( v33 < v31 )
      {
        v34 = (char *)&v32[2 * v33];
        v35 = (UnityEngine_Renderer_o *)*((_QWORD *)v34 + 4);
        if ( !v35 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_material(*((UnityEngine_Renderer_o **)v34 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)UnityEngine_Material__HasProperty_41623368(
                             (UnityEngine_Material_o *)material,
                             (System_String_o *)StringLiteral_16146/*"_Color"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
        {
          v36 = BattleActorControl_TypeInfo;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v36 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v36->static_fields->defaultHeight;
          material = UnityEngine_Renderer__get_material(v35, 0LL);
          if ( !material )
            goto LABEL_47;
          v38 = val / defaultHeight;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)material, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          v42 = UnityEngine_Renderer__get_material(v35, 0LL);
          v68.fields.a = 1.0 - v38;
          v68.fields.r = r;
          v68.fields.g = g;
          v68.fields.b = b;
          methoda.methodPointer = 0LL;
          methoda.invoker_method = 0LL;
          UnityEngine_Color___ctor(v68, v43, v44, v45, v46, &methoda);
          if ( !v42 )
            goto LABEL_47;
          *(_QWORD *)&v69.fields.r = methoda.methodPointer;
          *(_QWORD *)&v69.fields.b = methoda.invoker_method;
          UnityEngine_Material__set_color(v42, v69, 0LL);
        }
        v31 = v32[6];
        if ( (int)++v33 >= v31 )
          goto LABEL_22;
      }
LABEL_48:
      v61 = sub_B5D6C8(material);
      sub_B5D668(v61, 0LL);
    }
LABEL_22:
    material = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__30164952(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_1CC47D8 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !material )
LABEL_47:
      sub_B5D69C(material, v30);
    v47 = *((_DWORD *)material + 6);
    if ( v47 >= 1 )
    {
      v48 = 0;
      v62 = (int *)material;
      while ( 1 )
      {
        if ( v48 >= (unsigned int)v47 )
          goto LABEL_48;
        v49 = (char *)material + 8 * v48;
        v50 = (UnityEngine_Component_o *)*((_QWORD *)v49 + 4);
        if ( !v50 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v49 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        v51 = *((_QWORD *)material + 3);
        v52 = material;
        if ( (int)v51 >= 1 )
          break;
LABEL_45:
        material = v62;
        ++v48;
        v47 = v62[6];
        if ( v48 >= v47 )
          return;
      }
      v53 = 0LL;
      while ( v53 < (unsigned int)v51 )
      {
        v54 = (UnityEngine_Material_o *)v52[v53 + 4];
        material = UnityEngine_Component__get_gameObject(v50, 0LL);
        if ( !material )
          goto LABEL_47;
        material = UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)System_String__StartsWith(
                             (System_String_o *)material,
                             (System_String_o *)StringLiteral_17086/*"body"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
          goto LABEL_37;
        material = UnityEngine_Component__get_gameObject(v50, 0LL);
        if ( !material )
          goto LABEL_47;
        material = UnityEngine_Object__get_name((UnityEngine_Object_o *)material, 0LL);
        if ( !material )
          goto LABEL_47;
        material = (void *)System_String__StartsWith(
                             (System_String_o *)material,
                             (System_String_o *)StringLiteral_23567/*"weapon"*/,
                             0LL);
        if ( ((unsigned __int8)material & 1) != 0 )
        {
LABEL_37:
          if ( !v54 )
            goto LABEL_47;
          v55 = (System_String_o *)StringLiteral_16142/*"_ClipSharpnessY"*/;
          v56 = v54;
          v57 = val;
        }
        else
        {
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v50,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          center = UnityEngine_Bounds__get_center((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          y = center.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v50,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          extents = UnityEngine_Bounds__get_extents((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          v59 = extents.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v50,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          material = BattleActorControl_TypeInfo;
          v60 = size.fields.y;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          }
          if ( !v54 )
            goto LABEL_47;
          v55 = (System_String_o *)StringLiteral_16142/*"_ClipSharpnessY"*/;
          v56 = v54;
          v57 = (float)(y - v59)
              + (float)((float)((float)(v60 + 0.2) / BattleActorControl_TypeInfo->static_fields->defaultHeight) * val);
        }
        UnityEngine_Material__SetFloat(v56, v55, v57, 0LL);
        LODWORD(v51) = *((_DWORD *)v52 + 6);
        if ( (__int64)++v53 >= (int)v51 )
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
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_42E8060 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl__waitChangeApp_d__317_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E8060 = 1;
  }
  v6 = sub_B5D694(BattleActorControl__waitChangeApp_d__317_TypeInfo);
  BattleActorControl__waitChangeApp_d__317___ctor((BattleActorControl__waitChangeApp_d__317_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)callback, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x21
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E7BD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)actor, (_DWORD)method, v3);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo, v12, v13, v14);
    byte_42E7BD4 = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._activeFsmNameList,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v22,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._callBackQueue,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.battleActor,
    (System_Int32_array **)actor,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x20

  if ( (byte_42E7BD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, (_DWORD)fsmName, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v6, v7, v8);
    byte_42E7BD6 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B5D69C(v9, v10);
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeFsmNameList,
          (WarBoardManager_TaskList_o *)fsmName,
          (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__) )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeFsmNameList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)fsmName,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_42E7BD8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__,
      (_DWORD)callBack,
      (_DWORD)method,
      v3);
    byte_42E7BD8 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B5D69C(0LL, v6);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    callBackQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)callBack,
    (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_42E7BD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__, v5, v6, v7);
    byte_42E7BD9 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v8);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B5D69C(0LL, v9);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_2B9E6B8 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_42E7BD3 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, (_DWORD)method, v2, v3);
    byte_42E7BD3 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B5D69C(v5, v6);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *activeFsmNameList; // x0

  if ( (byte_42E7BD7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Remove__, (_DWORD)fsmName, (_DWORD)method, v3);
    byte_42E7BD7 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B5D69C(0LL, v6);
  return System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
           activeFsmNameList,
           (WarBoardManager_TaskList_o *)fsmName,
           (const MethodInfo_305896C *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_42E7BD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__, v5, v6, v7);
    byte_42E7BD5 = 1;
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
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__),
        (battleActor = (BattleActorControl_o *)this->fields._callBackQueue) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(battleActor, method);
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)battleActor,
    (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
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
  sub_B5D560(
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
  return (System_IAsyncResult_o *)sub_B5D568(this, v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  System_Collections_Hashtable_c *v12; // x8
  unsigned __int64 v13; // x10
  int32_t *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  unsigned int v17; // w23
  __int64 v18; // x0
  __int64 v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x10
  _DWORD *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall **v26)(System_Collections_Hashtable_o *, _QWORD); // x0
  __int64 v27; // x0
  void (__fastcall **v28)(__int64 *, System_Collections_Hashtable_o *, _QWORD); // x0
  BattleActorControl_EndCallEvent_o *v29; // x8
  __int64 v30; // x21
  __int64 *v31; // x22
  void (__fastcall *v32)(System_Collections_Hashtable_o *, __int64); // x23
  char v33; // w0
  int v34; // w8
  char v35; // w23
  char v36; // w0
  __int64 v37; // x3
  __int64 v38; // x8
  __int64 v39; // x1
  __int64 v40; // x2
  unsigned __int64 v41; // x10
  _DWORD *v42; // x11
  char v43; // w22
  char v44; // w0
  __int64 v45; // x3
  System_Collections_Hashtable_c *klass; // x8
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x10
  int32_t *p_offset; // x11
  BattleActorControl_EndCallEvent_o *v51; // [xsp+8h] [xbp-48h] BYREF

  v51 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v51;
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
      v29 = v7[i];
      v31 = *(__int64 **)&v29->fields.method;
      v30 = *(_QWORD *)&v29->fields.extra_arg;
      v32 = *(void (__fastcall **)(System_Collections_Hashtable_o *, __int64))&v29->fields.method_ptr;
      if ( *(__int16 *)(v30 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v29->fields.extra_arg, hash, method);
      v33 = sub_B5D5F4(v30);
      v34 = *(unsigned __int8 *)(v30 + 74);
      if ( (v33 & 1) != 0 )
      {
        if ( v34 == 1 )
          goto LABEL_58;
      }
      else
      {
        if ( v34 != 1 )
        {
          if ( *(__int16 *)(v30 + 72) != -1 && this->fields.m_target )
          {
            v43 = sub_B5D5EC(v30);
            v44 = sub_B5D9F0(v30);
            if ( (v43 & 1) != 0 )
            {
              if ( (v44 & 1) != 0 )
              {
                klass = hash->klass;
                v47 = *(_QWORD *)(v30 + 24);
                v48 = *(unsigned __int16 *)(v30 + 72);
                if ( *(_WORD *)&hash->klass->_2.bitflags1 )
                {
                  v49 = 0LL;
                  p_offset = &klass->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)p_offset - 1) != v47 )
                  {
                    ++v49;
                    p_offset += 4;
                    if ( v49 >= *(unsigned __int16 *)&hash->klass->_2.bitflags1 )
                      goto LABEL_57;
                  }
                  v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset + 2 * (int)v48);
                }
                else
                {
LABEL_57:
                  v25 = sub_AF54C0(hash, v47, v48, v45);
                }
                v16 = *(_QWORD *)(v25 + 8);
              }
              else
              {
                v16 = *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72));
              }
              v26 = (void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))sub_B5D674(v16, v30);
              (*v26)(hash, v26);
            }
            else
            {
              v9 = *(unsigned __int16 *)(v30 + 72);
              if ( (v44 & 1) != 0 )
              {
                class_0 = j_il2cpp_method_get_class_0(v30);
                v12 = hash->klass;
                if ( *(_WORD *)&hash->klass->_2.bitflags1 )
                {
                  v13 = 0LL;
                  v14 = &v12->_1.interfaceOffsets->offset;
                  while ( *((_QWORD *)v14 - 1) != class_0 )
                  {
                    ++v13;
                    v14 += 4;
                    if ( v13 >= *(unsigned __int16 *)&hash->klass->_2.bitflags1 )
                      goto LABEL_11;
                  }
                  v15 = (__int64)(&v12->vtable._0_Equals.method + 2 * (int)(*v14 + v9));
                }
                else
                {
LABEL_11:
                  v15 = sub_AF54C0(hash, class_0, v9, v11);
                }
                (*(void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))v15)(hash, *(_QWORD *)(v15 + 8));
              }
              else
              {
                (*((void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))&hash->klass->vtable._0_Equals.method
                 + 2 * *(unsigned __int16 *)(v30 + 72)))(
                  hash,
                  *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v30 + 72)));
              }
            }
            continue;
          }
LABEL_58:
          v32(hash, v30);
          continue;
        }
        if ( !v31 )
          goto LABEL_58;
        if ( *(__int16 *)(v30 + 72) != -1 && (*(_BYTE *)(*v31 + 277) & 1) == 0 && this->fields.m_target )
        {
          v35 = sub_B5D5EC(v30);
          v36 = sub_B5D9F0(v30);
          if ( (v35 & 1) != 0 )
          {
            if ( (v36 & 1) != 0 )
            {
              v38 = *v31;
              v39 = *(_QWORD *)(v30 + 24);
              v40 = *(unsigned __int16 *)(v30 + 72);
              if ( *(_WORD *)(*v31 + 298) )
              {
                v41 = 0LL;
                v42 = (_DWORD *)(*(_QWORD *)(v38 + 176) + 8LL);
                while ( *((_QWORD *)v42 - 1) != v39 )
                {
                  ++v41;
                  v42 += 4;
                  if ( v41 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_48;
                }
                v27 = v38 + 16LL * (*v42 + (int)v40) + 312;
              }
              else
              {
LABEL_48:
                v27 = sub_AF54C0(v31, v39, v40, v37);
              }
              v24 = *(_QWORD *)(v27 + 8);
            }
            else
            {
              v24 = *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320);
            }
            v28 = (void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))sub_B5D674(v24, v30);
            (*v28)(v31, hash, v28);
          }
          else
          {
            v17 = *(unsigned __int16 *)(v30 + 72);
            if ( (v36 & 1) != 0 )
            {
              v18 = j_il2cpp_method_get_class_0(v30);
              v20 = *v31;
              if ( *(_WORD *)(*v31 + 298) )
              {
                v21 = 0LL;
                v22 = (_DWORD *)(*(_QWORD *)(v20 + 176) + 8LL);
                while ( *((_QWORD *)v22 - 1) != v18 )
                {
                  ++v21;
                  v22 += 4;
                  if ( v21 >= *(unsigned __int16 *)(*v31 + 298) )
                    goto LABEL_19;
                }
                v23 = v20 + 16LL * (int)(*v22 + v17) + 312;
              }
              else
              {
LABEL_19:
                v23 = sub_AF54C0(v31, v18, v17, v19);
              }
              (*(void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))v23)(
                v31,
                hash,
                *(_QWORD *)(v23 + 8));
            }
            else
            {
              (*(void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))(*v31
                                                                                          + 16LL
                                                                                          * *(unsigned __int16 *)(v30 + 72)
                                                                                          + 312))(
                v31,
                hash,
                *(_QWORD *)(*v31 + 16LL * *(unsigned __int16 *)(v30 + 72) + 320));
            }
          }
          continue;
        }
      }
      ((void (__fastcall *)(__int64 *, System_Collections_Hashtable_o *, __int64))v32)(v31, hash, v30);
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

  if ( (byte_42E7BDA & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, (_DWORD)key, (_DWORD)obj, method);
    byte_42E7BDA = 1;
  }
  table = this->fields.table;
  p_table = (BattleServantConfConponent_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_39706016(v10, 0LL);
    p_table->klass = (BattleServantConfConponent_c *)v10;
    sub_B5D560(p_table, (System_Int32_array **)v10, v11, v12, v13, v14, v15, v16);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_B5D69C(0LL, v17);
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
    sub_B5D69C(this, method);
  BattleActorControl_EndCallEvent__Invoke(this->fields.eventcall, this->fields.table, v2);
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs___ctor(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  if ( (byte_42E7BDB & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, (_DWORD)svtData, (_DWORD)method, v3);
    byte_42E7BDB = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B5D69C(v6, v7);
  v9 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v9;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v10, 0LL);
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


void __fastcall BattleActorControl__DestroyAuraEffect_d__326___ctor(
        BattleActorControl__DestroyAuraEffect_d__326_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__326__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__326_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyAuraEffect_d__326_o *v8; // x19
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
  int32_t _1__state; // w8
  bool result; // w0
  BattleActorControl__DestroyAuraEffect_d__326_o **p_effectObject; // x22
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  int32_t *p_aliveCount_5__3; // x23
  __int64 v45; // x3
  BattleActorControl__DestroyAuraEffect_d__326_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__326_o *v47; // x21
  unsigned __int64 v48; // x10
  int32_t *p_offset; // x11
  __int64 v50; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x20
  BattleActorControl__DestroyAuraEffect_d__326_o *v52; // x19
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__326_o *v54; // x19
  unsigned __int64 v55; // x24
  UnityEngine_Object_o *v56; // x20
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v58; // x8
  BattleActorControl__DestroyAuraEffect_d__326_o *v59; // x20
  unsigned __int64 v60; // x25
  UnityEngine_Object_o *v61; // x21
  BattleActorControl__DestroyAuraEffect_d__326_o *v62; // x19
  __int64 v63; // x1
  __int64 v64; // x3
  __int64 v65; // x21
  __int64 v66; // x8
  unsigned __int64 v67; // x10
  int *v68; // x11
  __int64 v69; // x0
  __int64 v70; // x3
  __int64 v71; // x8
  unsigned __int64 v72; // x10
  int *v73; // x11
  __int64 v74; // x0
  UnityEngine_ParticleSystem_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x8
  unsigned __int64 v78; // x10
  int *v79; // x11
  __int64 v80; // x0
  struct UnityEngine_ParticleSystem_array *v81; // x21
  __int64 v82; // x8
  unsigned __int64 v83; // x22
  UnityEngine_Object_o *v84; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  __int64 v86; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v88; // 0:x0.8

  v8 = this;
  if ( (byte_42E758C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_ParticleSystem___, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304, v12, v13, v14);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320, v15, v16, v17);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v27, v28, v29);
    this = (BattleActorControl__DestroyAuraEffect_d__326_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v30, v31, v32);
    byte_42E758C = 1;
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
    p_effectObject = (BattleActorControl__DestroyAuraEffect_d__326_o **)&v8->fields.effectObject;
    this = (BattleActorControl__DestroyAuraEffect_d__326_o *)v8->fields.effectObject;
    v8->fields.__1__state = -1;
    if ( !this )
      goto LABEL_98;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                (UnityEngine_GameObject_o *)this,
                                (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_Object__op_Inequality(
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
    v37 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   (UnityEngine_GameObject_o *)this,
                                   1,
                                   (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v37;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v37, v38, v39, v40, v41, v42, v43);
    this = (BattleActorControl__DestroyAuraEffect_d__326_o *)v8->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_98;
    v8->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    p_aliveCount_5__3 = &v8->fields._aliveCount_5__3;
    this = (BattleActorControl__DestroyAuraEffect_d__326_o *)BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    if ( !this )
      goto LABEL_98;
    klass = this->klass;
    v47 = this;
    if ( *(_WORD *)&this->klass->_2.bitflags1 )
    {
      v48 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
      {
        ++v48;
        p_offset += 4;
        if ( v48 >= *(unsigned __int16 *)&this->klass->_2.bitflags1 )
          goto LABEL_19;
      }
      v50 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_19:
      v50 = sub_AF54C0(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL, v45);
    }
    v65 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__326_o *, _QWORD))v50)(
            v47,
            *(_QWORD *)(v50 + 8));
    if ( !v65 )
      sub_B5D69C(0LL, v63);
    while ( 1 )
    {
      v66 = *(_QWORD *)v65;
      if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
      {
        v67 = 0LL;
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v67;
          v68 += 4;
          if ( v67 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
            goto LABEL_63;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_63:
        v69 = sub_AF54C0(v65, System_Collections_IEnumerator_TypeInfo, 0LL, v64);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
        break;
      v71 = *(_QWORD *)v65;
      if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
      {
        v72 = 0LL;
        v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v73 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
        {
          ++v72;
          v73 += 4;
          if ( v72 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
            goto LABEL_70;
        }
        v74 = v71 + 16LL * *v73 + 312;
      }
      else
      {
LABEL_70:
        v74 = sub_AF54C0(v65, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL, v70);
      }
      v75 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v65, *(_QWORD *)(v74 + 8));
      if ( !v75 )
        sub_B5D69C(0LL, v76);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v75, 0LL).fields.m_ParticleSystem;
      v88.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v88, 0, 0LL);
    }
    v77 = *(_QWORD *)v65;
    if ( *(_WORD *)(*(_QWORD *)v65 + 298LL) )
    {
      v78 = 0LL;
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
      {
        ++v78;
        v79 += 4;
        if ( v78 >= *(unsigned __int16 *)(*(_QWORD *)v65 + 298LL) )
          goto LABEL_78;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_78:
      v80 = sub_AF54C0(v65, System_IDisposable_TypeInfo, 0LL, v70);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__326_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v80)(
                                                               v65,
                                                               *(_QWORD *)(v80 + 8));
  }
  p_particleArray_5__2 = &v8->fields._particleArray_5__2;
  if ( v8->fields._aliveCount_5__3 <= 0 )
  {
    v8->fields._particleArray_5__2 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    p_effectObject = (BattleActorControl__DestroyAuraEffect_d__326_o **)&v8->fields.effectObject;
LABEL_23:
    v52 = *p_effectObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v52, 0LL, 0LL) )
      return 0;
    this = *p_effectObject;
    if ( *p_effectObject )
    {
      this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                                 (UnityEngine_GameObject_o *)this,
                                                                 1,
                                                                 (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____68867320);
      if ( this )
      {
        _2__current = this->fields.__2__current;
        v54 = this;
        if ( (int)_2__current >= 1 )
        {
          v55 = 0LL;
          while ( 1 )
          {
            if ( v55 >= (unsigned int)_2__current )
              goto LABEL_97;
            v56 = (UnityEngine_Object_o *)*((_QWORD *)&v54->fields.effectObject + v55);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_Object__op_Equality(v56, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v56 )
                goto LABEL_98;
              materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                (UnityEngine_Renderer_o *)v56,
                                                                0LL);
              this = (BattleActorControl__DestroyAuraEffect_d__326_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_Renderer__get_materials(
                                                                           (UnityEngine_Renderer_o *)v56,
                                                                           0LL);
                if ( !this )
                  goto LABEL_98;
                v58 = this->fields.__2__current;
                v59 = this;
                if ( (int)v58 >= 1 )
                  break;
              }
            }
LABEL_51:
            LODWORD(_2__current) = v54->fields.__2__current;
            if ( (__int64)++v55 >= (int)_2__current )
              goto LABEL_52;
          }
          v60 = 0LL;
          while ( v60 < (unsigned int)v58 )
          {
            v61 = (UnityEngine_Object_o *)*((_QWORD *)&v59->fields.effectObject + v60);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_Object__op_Equality(v61, 0LL, 0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_35620236(v61, 0LL);
            }
            LODWORD(v58) = v59->fields.__2__current;
            if ( (__int64)++v60 >= (int)v58 )
              goto LABEL_51;
          }
          goto LABEL_97;
        }
LABEL_52:
        v62 = *p_effectObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)v62, 0LL);
        return 0;
      }
    }
LABEL_98:
    sub_B5D69C(this, method);
  }
  *p_aliveCount_5__3 = 0;
  v81 = *p_particleArray_5__2;
  if ( !*p_particleArray_5__2 )
    goto LABEL_98;
  v82 = *(_QWORD *)&v81->max_length;
  if ( (int)v82 >= 1 )
  {
    v83 = 0LL;
    while ( v83 < (unsigned int)v82 )
    {
      v84 = (UnityEngine_Object_o *)v81->m_Items[v83];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_Object__op_Equality(v84, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v84 )
          goto LABEL_98;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v84, 0LL) )
          UnityEngine_ParticleSystem__Stop_51307044((UnityEngine_ParticleSystem_o *)v84, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__326_o *)UnityEngine_ParticleSystem__IsAlive_51307344(
                                                                   (UnityEngine_ParticleSystem_o *)v84,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v82) = v81->max_length;
      if ( (__int64)++v83 >= (int)v82 )
        goto LABEL_95;
    }
LABEL_97:
    v86 = sub_B5D6C8(this);
    sub_B5D668(v86, 0LL);
  }
LABEL_95:
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__326__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__326_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__326__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__326_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__DestroyAuraEffect_d__326_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__326__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__326_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__326__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__326_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__352___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__352_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__352__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__352_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyEffectOnParticleStop_d__352_o *v8; // x19
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Int32_array **v20; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int aliveCount_5__3; // w8
  int32_t *p_aliveCount_5__3; // x21
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x22
  __int64 v31; // x8
  unsigned __int64 v32; // x23
  UnityEngine_Object_o *v33; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  __int64 v36; // x0

  v8 = this;
  if ( (byte_42E758D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__,
      (_DWORD)method,
      (_DWORD)v2,
      v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9, v10, v11);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304, v12, v13, v14);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)sub_B5D5C4(
                                                                         &UnityEngine_Object_TypeInfo,
                                                                         v15,
                                                                         v16,
                                                                         v17);
    byte_42E758D = 1;
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
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_36;
    v20 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   (UnityEngine_GameObject_o *)this,
                                   1,
                                   (const MethodInfo_1CC47FC *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____68867304);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v20;
    p_particleArray_5__2 = &v8->fields._particleArray_5__2;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v20, v22, v23, v24, v25, v26, v27);
    if ( !v8->fields._particleArray_5__2 )
      goto LABEL_33;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    sub_B5D69C(this, method);
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_36;
  v31 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v31 )
      {
        v36 = sub_B5D6C8(this);
        sub_B5D668(v36, 0LL);
      }
      v33 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v32];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_36;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v33, 0LL) )
          UnityEngine_ParticleSystem__Stop_51307044((UnityEngine_ParticleSystem_o *)v33, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__352_o *)UnityEngine_ParticleSystem__IsAlive_51307344(
                                                                             (UnityEngine_ParticleSystem_o *)v33,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v31) = particleArray_5__2->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)v31 );
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__352__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__352_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__352__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__352_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__352_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__352__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__352_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__352__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__352_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__266___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__266__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *v8; // x20
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
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v37; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v39; // x0
  struct BattlePerformance_o *v40; // x8
  UnityEngine_Transform_o *transform; // x20
  int v42; // s0
  System_String_o *v45; // x0
  System_String_o *v46; // x0
  BattleServantData_o *v47; // x20
  int v48; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *v50; // x20
  unsigned __int64 v51; // x26
  BattleActorControl_o *ServantActor; // x21
  struct BattleServantData_o *v53; // x8
  System_String_o *v54; // x0
  System_String_o *v55; // x0
  WebViewManager_o *Instance; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v57; // x21
  struct BattlePerformance_o *v58; // x8
  int i_5__2; // w8
  UnityEngine_WaitForEndOfFrame_o *v60; // x19
  BattleServantConfConponent_o *p__2__current; // x20
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  BattleServantConfConponent_o *v68; // x20
  __int64 v69; // x0
  int v70; // [xsp+Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_42E758E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_USSequencer___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Action_USSequencer__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__, v12, v13, v14);
    sub_B5D5C4(&BattlePerformance_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_13498/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v27, v28, v29);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)sub_B5D5C4(&StringLiteral_23499/*"wait"*/, v30, v31, v32);
    byte_42E758E = 1;
  }
  v70 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)BattleServantData__IsTDAppearance(
                                                                         (BattleServantData_o *)this,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          battleSvtData = _4__this->fields.battleSvtData;
          if ( !battleSvtData )
            goto LABEL_57;
          battleSvtData->fields.dressDispId = -1;
          v37 = _4__this->fields.battleSvtData;
          if ( !v37 )
            goto LABEL_57;
          v37->fields.isForceAppearance = 0;
        }
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v39 = BattlePerformance_TypeInfo;
              if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v39 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v39->static_fields->DefaultFov, 0LL);
              v40 = _4__this->fields.performance;
              if ( v40 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)v40->fields.actorcamera;
                if ( this )
                {
                  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
                  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
                    v70 = 1;
                    v45 = System_Int32__ToString((int32_t)&v70, 0LL);
                    v46 = System_String__Concat_44577788((System_String_o *)StringLiteral_13498/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v45, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)ConstantMaster__getValue(v46, 0LL);
                    v47 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_45:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v47 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v47->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v47,
                          this,
                          _4__this,
                          v47->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v57 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_USSequencer__TypeInfo);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v57,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          (const MethodInfo_258B320 *)Method_System_Action_USSequencer___ctor__);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v57,
                            0LL);
                          v58 = _4__this->fields.performance;
                          if ( v58 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)v58->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)BattleData__getStageEntity(
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
                      v48 = (int)this;
                      while ( 1 )
                      {
                        if ( !v47 )
                          goto LABEL_57;
                        if ( v48 == BattleServantData__getSvtId(v47, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_57;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_57;
                          _2__current = this->fields.__2__current;
                          v50 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_44:
                        ++v70;
                        v54 = System_Int32__ToString((int32_t)&v70, 0LL);
                        v55 = System_String__Concat_44577788((System_String_o *)StringLiteral_13498/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v54, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)ConstantMaster__getValue(
                                                                                         v55,
                                                                                         0LL);
                        v47 = _4__this->fields.battleSvtData;
                        v48 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_45;
                      }
                      v51 = 0LL;
                      while ( 1 )
                      {
                        if ( v51 >= (unsigned int)_2__current )
                        {
                          v69 = sub_B5D6C8(this);
                          sub_B5D668(v69, 0LL);
                        }
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v50->fields.__4__this + v51),
                                         0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].klass) )
                          {
                            LOBYTE(this[17].klass) = 0;
                            v53 = ServantActor->fields.battleSvtData;
                            if ( !v53 )
                              break;
                            v53->fields.isSleepWaitModeReady = 1;
                            BattleActorControl__playAnimation_24205092(
                              ServantActor,
                              (System_String_o *)StringLiteral_23499/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_24205092(
                              ServantActor,
                              (System_String_o *)StringLiteral_23499/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v50->fields.__2__current;
                        if ( (__int64)++v51 >= (int)_2__current )
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
    sub_B5D69C(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v8->fields._i_5__2;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= 3 )
    {
      v60 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v60, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v60;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(p__2__current, (System_Int32_array **)v60, v62, v63, v64, v65, v66, v67);
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
  v68 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B5D560(v68, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&v68[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__266__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__266__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__266_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__266__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__266__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__266_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E7583 & 1) == 0 )
  {
    sub_B5D5C4(&BattleActorControl___c_TypeInfo, v1, v2, v3);
    byte_42E7583 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActorControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__136_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__136_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E7585 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_B5D5C4(
                                         &System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo,
                                         (_DWORD)x,
                                         (_DWORD)method,
                                         v3);
    byte_42E7585 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
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
    p_method = sub_AF54C0(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL, v3);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__136_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E7586 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, (_DWORD)x, (_DWORD)method, v3);
    byte_42E7586 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__192_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__365_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.isSaveAnimation;
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__366_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__366_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__135_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20

  if ( (byte_42E7584 & 1) == 0 )
  {
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    this = (BattleActorControl___c_o *)sub_B5D5C4(&StringLiteral_17086/*"body"*/, v5, v6, v7);
    byte_42E7584 = 1;
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
    v8 = (System_String_o *)this;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    }
    if ( !v8 )
      goto LABEL_15;
    if ( System_String__Contains(v8, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17086/*"body"*/, 0LL);
LABEL_15:
      sub_B5D69C(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__325_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_42E7587 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__,
      x.fields.key,
      x.fields.value,
      method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v4, v5, v6);
    byte_42E7587 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__287_object____cctor(const MethodInfo_1F4E354 *method)
{
  BattleActorControl___c__287_T__c *klass; // x20
  Il2CppClass *_0_BattleActorControl___c__287_T; // x20
  __int64 v4; // x0
  BattleActorControl___c__287_T__c *v5; // x22
  System_Int32_array **v6; // x20
  __int16 v7; // w8
  BattleActorControl___c__287_T__c *v8; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleActorControl___c__287_T__c *v16; // x19
  Il2CppClass *_2_BattleActorControl___c__287_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(method->klass);
  _0_BattleActorControl___c__287_T = klass->rgctx_data->_0_BattleActorControl___c__287_T_;
  if ( (BYTE2(_0_BattleActorControl___c__287_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_0_BattleActorControl___c__287_T);
  v4 = sub_B5D694(_0_BattleActorControl___c__287_T);
  v5 = method->klass;
  v6 = (System_Int32_array **)v4;
  v7 = WORD1(v5->vtable._0_Equals.methodPtr);
  v8 = v5;
  if ( (v7 & 1) == 0 )
  {
    sub_AF52C4(method->klass);
    v8 = method->klass;
    v7 = WORD1(v8->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v5->rgctx_data->_1_BattleActorControl___c__287_T___ctor->methodPointer;
  if ( (v7 & 1) == 0 )
    sub_AF52C4(v8);
  methodPointer(v6, v8->rgctx_data->_1_BattleActorControl___c__287_T___ctor);
  v16 = method->klass;
  if ( (BYTE2(v16->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AF52C4(v16);
  _2_BattleActorControl___c__287_T = v16->rgctx_data->_2_BattleActorControl___c__287_T_;
  if ( (BYTE2(_2_BattleActorControl___c__287_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AF52C4(_2_BattleActorControl___c__287_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleActorControl___c__287_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B5D560(static_fields, v6, v10, v11, v12, v13, v14, v15);
}


void __fastcall BattleActorControl___c__287_object____ctor(
        BattleActorControl___c__287_T__o *this,
        const MethodInfo_1F4E430 *method)
{
  if ( !this )
    sub_B5D69C(0LL, method);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__287_object____UpdateMaterialsOnRenderders_b__287_0(
        BattleActorControl___c__287_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F4E448 *method)
{
  __int64 v3; // x3

  if ( (byte_42EC991 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42EC991 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__287_object____UpdateMaterialsOnRenderders_b__287_1(
        BattleActorControl___c__287_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_1F4E4B0 *method)
{
  __int64 v3; // x3

  if ( (byte_42EC992 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42EC992 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass135_0___ctor(
        BattleActorControl___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass135_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_B5D69C(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass136_0___ctor(
        BattleActorControl___c__DisplayClass136_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass136_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass136_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_B5D69C(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, method);
}


void __fastcall BattleActorControl___c__DisplayClass164_0___ctor(
        BattleActorControl___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass164_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass164_0_o *this,
        PlayMakerFSM_o *fsm,
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
  _BOOL8 v18; // x0
  __int64 v19; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E7588 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_FsmTransition___, (_DWORD)fsm, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Func_FsmTransition__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_FsmTransition__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass164_0__ExistMotionEvent_b__1__, v15, v16, v17);
    byte_42E7588 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v18 )
    return 0;
  if ( !fsm )
    sub_B5D69C(v18, v19);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v22 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_B5D694(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass164_0__ExistMotionEvent_b__1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_FsmTransition__bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v22,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass164_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass164_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_B5D69C(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass262_0___ctor(
        BattleActorControl___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass262_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass262_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl___c__DisplayClass262_0_o *v5; // x20
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *targets; // x20

  v5 = this;
  if ( (byte_42E7589 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass262_0_o *)sub_B5D5C4(
                                                            &Method_System_Collections_Generic_List_GameObject__Add__,
                                                            x,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E7589 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass262_0_o *)_4__this->fields.performance) == 0LL
    || (targets = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v5->fields.targets,
        this = (BattleActorControl___c__DisplayClass262_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0LL),
        !targets) )
  {
    sub_B5D69C(this, *(_QWORD *)&x);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    targets,
    (EventMissionProgressRequest_Argument_ProgressData_o *)this,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
}


void __fastcall BattleActorControl___c__DisplayClass274_0___ctor(
        BattleActorControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass274_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass274_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl___c__DisplayClass274_0_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v11; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v13; // x20
  int32_t shadowEffectId; // w22
  UnityEngine_GameObject_o *v15; // x21
  UnityEngine_GameObject_o *v16; // x23
  int32_t v17; // w24
  int32_t LimitCount; // w25
  System_Int32_array **EffectToNode_23310064; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattleActorControl_o *v26; // x8
  UnityEngine_Object_o *v27; // x20
  struct BattleActorControl_o *v28; // x8
  UnityEngine_Transform_o *transform; // x20
  int v30; // s0
  struct BattleActorControl_o *v33; // x8
  UnityEngine_Transform_o *v34; // x20
  int v35; // s0
  struct BattleActorControl_o *v39; // x8
  UnityEngine_Transform_o *v40; // x20
  int v41; // s0
  struct BattleActorControl_o *v44; // x8

  v4 = this;
  if ( (byte_42E758A & 1) == 0 )
  {
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, (_DWORD)method, v2, v3);
    this = (BattleActorControl___c__DisplayClass274_0_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v5, v6, v7);
    byte_42E758A = 1;
  }
  _4__this = v4->fields.__4__this;
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
    this = (BattleActorControl___c__DisplayClass274_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_45;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl___c__DisplayClass274_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v11 = v4->fields.__4__this;
      if ( !v11 )
        goto LABEL_45;
      if ( v11->fields.currentSpShadowEffectId == v4->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v11->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleActorControl___c__DisplayClass274_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v13 = v4->fields.__4__this;
          if ( !v13 )
            goto LABEL_45;
          this = (BattleActorControl___c__DisplayClass274_0_o *)v13->fields.shadowObj;
          if ( !this )
            goto LABEL_45;
          this = (BattleActorControl___c__DisplayClass274_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v4->fields.__4__this )
            goto LABEL_45;
          shadowEffectId = v4->fields.shadowEffectId;
          v15 = (UnityEngine_GameObject_o *)this;
          this = (BattleActorControl___c__DisplayClass274_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v4->fields.__4__this,
                                                                  0LL);
          if ( !v4->fields.__4__this )
            goto LABEL_45;
          v16 = (UnityEngine_GameObject_o *)this;
          this = (BattleActorControl___c__DisplayClass274_0_o *)BattleActorControl__getActorSvtId(
                                                                  v4->fields.__4__this,
                                                                  0LL);
          if ( !v4->fields.__4__this )
            goto LABEL_45;
          v17 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v4->fields.__4__this, 0LL);
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          EffectToNode_23310064 = (System_Int32_array **)BattleEffectUtility__loadEffectToNode_23310064(
                                                           v15,
                                                           shadowEffectId,
                                                           v16,
                                                           v17,
                                                           LimitCount,
                                                           0LL);
          v13->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)EffectToNode_23310064;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v13->fields.specialShadowObj,
            EffectToNode_23310064,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v26 = v4->fields.__4__this;
          if ( !v26 )
            goto LABEL_45;
          v27 = (UnityEngine_Object_o *)v26->fields.specialShadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleActorControl___c__DisplayClass274_0_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v28 = v4->fields.__4__this;
            if ( v28 )
            {
              this = (BattleActorControl___c__DisplayClass274_0_o *)v28->fields.specialShadowObj;
              if ( this )
              {
                transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
                  v33 = v4->fields.__4__this;
                  if ( v33 )
                  {
                    this = (BattleActorControl___c__DisplayClass274_0_o *)v33->fields.specialShadowObj;
                    if ( this )
                    {
                      v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                      *(UnityEngine_Quaternion_o *)&v35 = UnityEngine_Quaternion__get_identity(0LL);
                      if ( v34 )
                      {
                        UnityEngine_Transform__set_localRotation(v34, *(UnityEngine_Quaternion_o *)&v35, 0LL);
                        v39 = v4->fields.__4__this;
                        if ( v39 )
                        {
                          this = (BattleActorControl___c__DisplayClass274_0_o *)v39->fields.specialShadowObj;
                          if ( this )
                          {
                            v40 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
                            *(UnityEngine_Vector3_o *)&v41 = UnityEngine_Vector3__get_one(0LL);
                            if ( v40 )
                            {
                              UnityEngine_Transform__set_localScale(v40, *(UnityEngine_Vector3_o *)&v41, 0LL);
                              v44 = v4->fields.__4__this;
                              if ( v44 )
                              {
                                this = (BattleActorControl___c__DisplayClass274_0_o *)v44->fields.specialShadowObj;
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
            sub_B5D69C(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass286_0___ctor(
        BattleActorControl___c__DisplayClass286_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass286_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass286_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleActorControl___c__DisplayClass286_0_o *v5; // x20

  v5 = this;
  if ( (byte_42E758B & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass286_0_o *)sub_B5D5C4(
                                                            &StringLiteral_16337/*"_fade"*/,
                                                            (_DWORD)material,
                                                            (_DWORD)method,
                                                            v3);
    byte_42E758B = 1;
  }
  if ( !material )
    sub_B5D69C(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16337/*"_fade"*/, v5->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass324_0___ctor(
        BattleActorControl___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass324_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass324_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass365_0___ctor(
        BattleActorControl___c__DisplayClass365_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass365_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass365_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass365_0_o *)this->fields.component) == 0LL )
    sub_B5D69C(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass368_0___ctor(
        BattleActorControl___c__DisplayClass368_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass368_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass368_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass368_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass368_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__324___ctor(
        BattleActorControl__coAddAura_d__324_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__324__MoveNext(
        BattleActorControl__coAddAura_d__324_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__coAddAura_d__324_o *v8; // x19
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
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *Item; // x21
  System_Int32_array **Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  Il2CppObject *v74; // x23
  BattleServantConfConponent_o *p__8__1; // x21
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  int32_t id; // w22
  Il2CppObject *klass; // x24
  System_Action_o *v84; // x23
  BattlePerformance_o *v85; // x24
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  System_String_o **p_effectPath_5__3; // x21
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  BattleServantConfConponent_o *v95; // x19
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *static_fields; // x8
  System_Int32_array **Empty; // x1
  int v111; // w22
  int32_t WeaponGroup; // w0
  Il2CppObject *v113; // x22
  Il2CppObject *v114; // x0
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  BattleEffectUtility_BuffEffectLoadArgument_o *v122; // x21
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *actorcamera; // x1
  Il2CppObject *v147; // x0
  int32_t v148; // [xsp+Ch] [xbp-64h] BYREF
  int32_t EffectFolder; // [xsp+18h] [xbp-58h] BYREF
  int32_t v150; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_42E758F & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EffectMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v27, v28, v29);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_BillBoard___, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v33, v34, v35);
    sub_B5D5C4(&int_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v42, v43, v44);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46, v47);
    sub_B5D5C4(&string_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_BattleActorControl___c__DisplayClass324_0__coAddAura_b__0__, v51, v52, v53);
    sub_B5D5C4(&BattleActorControl___c__DisplayClass324_0_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_5942/*"Effect/weapon/{0}"*/, v57, v58, v59);
    this = (BattleActorControl__coAddAura_d__324_o *)sub_B5D5C4(&StringLiteral_5943/*"Effect/weapon/{0}/{1}"*/, v60, v61, v62);
    byte_42E758F = 1;
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
    this = (BattleActorControl__coAddAura_d__324_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_68;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
           v8->fields.auraEffectId,
           (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__324_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_68;
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)this,
                                       v8->fields.auraEffectId,
                                       (const MethodInfo_2F32000 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__324_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_68;
    this = (BattleActorControl__coAddAura_d__324_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_68;
    Entity = (System_Int32_array **)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                      v8->fields.auraEffectId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    p_effectEntity_5__2 = &v8->fields._effectEntity_5__2;
    v8->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    sub_B5D560((BattleServantConfConponent_o *)&v8->fields._effectEntity_5__2, Entity, v68, v69, v70, v71, v72, v73);
    if ( !v8->fields._effectEntity_5__2 )
    {
LABEL_43:
      v122 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B5D694(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v122, _4__this, 0LL);
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
        v152.fields.x = x;
        v152.fields.y = y;
        v152.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v152,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v122,
                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        this = (BattleActorControl__coAddAura_d__324_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
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
                                                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (BattleActorControl__coAddAura_d__324_o *)UnityEngine_Object__op_Equality(
                                                             Component_srcLineSprite,
                                                             0LL,
                                                             0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__324_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_68;
            Component_srcLineSprite = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_68;
            actorcamera = (Il2CppObject *)performance->fields.actorcamera;
            this->fields.__2__current = actorcamera;
            sub_B5D560(
              (BattleServantConfConponent_o *)&this->fields.__2__current,
              (System_Int32_array **)actorcamera,
              v139,
              v140,
              v141,
              v142,
              v143,
              v144);
          }
          else if ( !Component_srcLineSprite )
          {
            goto LABEL_68;
          }
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__324_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
              v8->fields.auraEffectId,
              (WarBoardAIRoute_RouteData_o *)EffectToNode,
              (const MethodInfo_2F3209C *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_64:
            v8->fields._effectEntity_5__2 = 0LL;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v8->fields._effectEntity_5__2,
              0LL,
              v132,
              v133,
              v134,
              v135,
              v136,
              v137);
            return 0;
          }
        }
      }
LABEL_68:
      sub_B5D69C(this, method);
    }
    v74 = (Il2CppObject *)sub_B5D694(BattleActorControl___c__DisplayClass324_0_TypeInfo);
    System_Object___ctor(v74, 0LL);
    v8->fields.__8__1 = (struct BattleActorControl___c__DisplayClass324_0_o *)v74;
    p__8__1 = (BattleServantConfConponent_o *)&v8->fields.__8__1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v8->fields.__8__1,
      (System_Int32_array **)v74,
      v76,
      v77,
      v78,
      v79,
      v80,
      v81);
    if ( !v8->fields.__8__1 )
      goto LABEL_68;
    v8->fields.__8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_68;
    id = (*p_effectEntity_5__2)->fields.id;
    klass = (Il2CppObject *)p__8__1->klass;
    v84 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v84, klass, Method_BattleActorControl___c__DisplayClass324_0__coAddAura_b__0__, 0LL);
    v85 = _4__this->fields.performance;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v84, v85, 0LL);
  }
  if ( !p__8__1->klass )
    goto LABEL_68;
  if ( LOBYTE(p__8__1->klass->_1.name) )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B5D560(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
    return result;
  }
  v8->fields.__8__1 = 0LL;
  sub_B5D560(p__8__1, 0LL, v2, v3, v4, v5, v6, v7);
  effectEntity_5__2 = v8->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_43;
  static_fields = string_TypeInfo->static_fields;
  Empty = (System_Int32_array **)static_fields->Empty;
  v8->fields._effectPath_5__3 = static_fields->Empty;
  p_effectPath_5__3 = &v8->fields._effectPath_5__3;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields._effectPath_5__3, Empty, v102, v103, v104, v105, v106, v107);
  if ( !_4__this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__324_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__324_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_68;
  v111 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v111 )
  {
    v150 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__324_o *)j_il2cpp_value_box_0(int_TypeInfo, &v150);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_68;
    v113 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder);
    v115 = (System_Int32_array **)System_String__Format_44573324((System_String_o *)StringLiteral_5943/*"Effect/weapon/{0}/{1}"*/, v113, v114, 0LL);
  }
  else
  {
    v148 = WeaponGroup;
    v147 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v148);
    v115 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_5942/*"Effect/weapon/{0}"*/, v147, 0LL);
  }
  *p_effectPath_5__3 = (System_String_o *)v115;
  sub_B5D560((BattleServantConfConponent_o *)&v8->fields._effectPath_5__3, v115, v116, v117, v118, v119, v120, v121);
LABEL_28:
  this = (BattleActorControl__coAddAura_d__324_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__324_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     *p_effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8->fields.__2__current = 0LL;
    v95 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
    sub_B5D560(v95, 0LL, v89, v90, v91, v92, v93, v94);
    *(_DWORD *)&v95[-1].fields.isOpenAfter = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_68;
  this = (BattleActorControl__coAddAura_d__324_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_68;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)this,
          v8->fields.auraEffectId,
          (const MethodInfo_2F32338 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    *p_effectPath_5__3 = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_effectPath_5__3, 0LL, v96, v97, v98, v99, v100, v101);
    goto LABEL_43;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__324__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__324_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__324__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__324_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__coAddAura_d__324_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__324__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__324_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__324__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__324_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__331___ctor(
        BattleActorControl__colShiftServantChange_d__331_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__colShiftServantChange_d__331__MoveNext(
        BattleActorControl__colShiftServantChange_d__331_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl__colShiftServantChange_d__331_o *v4; // x19
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
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **Component_srcLineSprite; // x0
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
  NGUIFader_o *fadeComp_5__2; // x20
  int v37; // s0
  DefCoroutine_c *v41; // x0
  System_Int32_array **milliSecTwo; // x1
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  struct BattleActionData_ShiftServant_o *v45; // x8
  System_Int32_array **v46; // x0
  BattleServantConfConponent_o *v47; // x19
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  int v54; // w8
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *v63; // x21
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *gameObject; // x20
  System_Int32_array **v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  BattleServantConfConponent_o *p_moveEffect_5__3; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  NGUIFader_o *v101; // x21
  int v102; // s0
  struct BattlePerformance_o *v106; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v108; // x8
  struct BattleData_o *data; // x8
  System_Int32_array **v110; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  BattleServantConfConponent_o *p_fadeComp_5__2; // x19
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  __int64 v124; // x0
  int v125; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E7591 & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v14, v15, v16);
    this = (BattleActorControl__colShiftServantChange_d__331_o *)sub_B5D5C4(
                                                                   &ServantAssetLoadManager_TypeInfo,
                                                                   v17,
                                                                   v18,
                                                                   v19);
    byte_42E7591 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)v4->fields.shiftSvt;
      if ( !this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__331_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      shiftSvt = v4->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_82;
      if ( !shiftSvt->fields.isChange )
        return 0;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_82;
      Component_srcLineSprite = (System_Int32_array **)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v4->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_srcLineSprite;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v4->fields._fadeComp_5__2,
        Component_srcLineSprite,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      if ( !v4->fields.isShift )
        goto LABEL_13;
      fadeComp_5__2 = v4->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v37 = UnityEngine_Color__get_white(0LL);
      if ( !fadeComp_5__2 )
        goto LABEL_82;
      NGUIFader__FadeStart(fadeComp_5__2, *(UnityEngine_Color_o *)&v37, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v41 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v41 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (System_Int32_array **)v41->static_fields->milliSecTwo;
      v4->fields.__2__current = (Il2CppObject *)milliSecTwo;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, milliSecTwo, v30, v31, v32, v33, v34, v35);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_82;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_82;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v125 = 0;
      v87 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v125);
      v4->fields.__2__current = (Il2CppObject *)v87;
      v47 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v47, v87, v88, v89, v90, v91, v92, v93);
      v54 = 2;
      goto LABEL_78;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      v45 = v4->fields.shiftSvt;
      if ( !v45 )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_82;
      BattlePerformance__unloadServantSet_18645216((BattlePerformance_o *)this, v45->fields.loadedAssetArgs, 0, 0LL);
      v125 = 0;
      v46 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v125);
      v4->fields.__2__current = (Il2CppObject *)v46;
      v47 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v47, v46, v48, v49, v50, v51, v52, v53);
      v54 = 3;
      goto LABEL_78;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_82;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_25:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colShiftServantChange_d__331_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v125 = 0;
        v55 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v125);
        v4->fields.__2__current = (Il2CppObject *)v55;
        v47 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v47, v55, v56, v57, v58, v59, v60, v61);
        v54 = 4;
LABEL_78:
        *(_DWORD *)&v47[-1].fields.isOpenAfter = v54;
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
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_82;
      v63 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)this,
                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v63, 0LL, 0LL) )
        goto LABEL_42;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v63, 0LL);
LABEL_42:
        v64 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v4->fields._moveEffect_5__3 = (struct System_Collections_Generic_List_int__o *)v64;
        sub_B5D560((BattleServantConfConponent_o *)&v4->fields._moveEffect_5__3, v64, v65, v66, v67, v68, v69, v70);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
          {
            v124 = sub_B5D6C8(this);
            sub_B5D668(v124, 0LL);
          }
          this = (BattleActorControl__colShiftServantChange_d__331_o *)motionFSM->m_Items[0];
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
            UnityEngine_Object__DestroyImmediate_35620448(gameObject, 0LL);
            v125 = 0;
            v73 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v125);
            v4->fields.__2__current = (Il2CppObject *)v73;
            v47 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
            sub_B5D560(v47, v73, v74, v75, v76, v77, v78, v79);
            v54 = 5;
            goto LABEL_78;
          }
        }
      }
      goto LABEL_82;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_25;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_58:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colShiftServantChange_d__331_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v125 = 0;
        v94 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v125);
        v4->fields.__2__current = (Il2CppObject *)v94;
        v47 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v47, v94, v95, v96, v97, v98, v99, v100);
        v54 = 6;
        goto LABEL_78;
      }
      if ( !_4__this )
        goto LABEL_82;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v4->fields.isShift )
        goto LABEL_67;
      v101 = v4->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v102 = UnityEngine_Color__get_white(0LL);
      if ( !v101 )
        goto LABEL_82;
      NGUIFader__FadeStart(v101, *(UnityEngine_Color_o *)&v102, 0.2, 1, 0LL, 0, 0LL);
LABEL_67:
      this = (BattleActorControl__colShiftServantChange_d__331_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_82;
      this = (BattleActorControl__colShiftServantChange_d__331_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_76;
      v106 = _4__this->fields.performance;
      if ( !v106
        || (battleSvtData = _4__this->fields.battleSvtData) == 0LL
        || (this = (BattleActorControl__colShiftServantChange_d__331_o *)v106->fields.data) == 0LL
        || (BattleData__replaceCommandCard(
              (BattleData_o *)this,
              battleSvtData->fields.uniqueId,
              battleSvtData->fields.uniqueId,
              0LL),
            (v108 = _4__this->fields.performance) == 0LL)
        || (data = v108->fields.data) == 0LL
        || (this = (BattleActorControl__colShiftServantChange_d__331_o *)data->fields.logic) == 0LL )
      {
LABEL_82:
        sub_B5D69C(this, method);
      }
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_76:
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v4->fields._moveEffect_5__3;
      if ( v4->fields._moveEffect_5__3 )
      {
        v125 = 0;
        v110 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v125);
        v4->fields.__2__current = (Il2CppObject *)v110;
        v47 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v47, v110, v111, v112, v113, v114, v115, v116);
        v54 = 7;
        goto LABEL_78;
      }
LABEL_79:
      v4->fields._fadeComp_5__2 = 0LL;
      p_fadeComp_5__2 = (BattleServantConfConponent_o *)&v4->fields._fadeComp_5__2;
      sub_B5D560(p_fadeComp_5__2, 0LL, v81, v82, v83, v84, v85, v86);
      p_fadeComp_5__2->monitor = 0LL;
      sub_B5D560(p_moveEffect_5__3, 0LL, v118, v119, v120, v121, v122, v123);
      return 0;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_58;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v4->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__3, 0LL);
      goto LABEL_79;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__331__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__331_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__331__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__331_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__colShiftServantChange_d__331_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__331__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__331_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__331__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__331_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__330___ctor(
        BattleActorControl__colShiftServant_d__330_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__330__MoveNext(
        BattleActorControl__colShiftServant_d__330_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0
  Il2CppObject *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Action_o *finishCallback; // x0
  int v23; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E7590 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7590 = 1;
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
        v7 = (Il2CppObject *)BattleActorControl__colShiftServantChange(
                               _4__this,
                               this->fields.shiftSvt,
                               this->fields.isShift,
                               0LL);
        this->fields.__2__current = v7;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
LABEL_13:
      sub_B5D69C(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_13;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  v23 = 0;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  this->fields.__2__current = v15;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.__2__current,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  this->fields.__1__state = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__330__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__330_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__330__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__330_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__colShiftServant_d__330_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__330__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__330_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__330__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__330_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__319___ctor(
        BattleActorControl__collChangeAppearance_d__319_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__319__MoveNext(
        BattleActorControl__collChangeAppearance_d__319_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl__collChangeAppearance_d__319_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleActorControl_o *_4__this; // x20
  System_Int32_array **v15; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  bool result; // w0
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  System_Int32_array **v26; // x0
  BattleServantConfConponent_o *v27; // x19
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int v34; // w8
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v37; // x0
  BattleServantConfConponent_o *p_moveEffect_5__2; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct BattleServantData_o *v52; // x8
  ServantAssetArgs_o *v53; // x21
  _BOOL4 isForceAppearance; // w22
  System_Int32_array **v55; // x0
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
  int v69; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E7BCF & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    this = (BattleActorControl__collChangeAppearance_d__319_o *)sub_B5D5C4(
                                                                  &ServantAssetLoadManager_TypeInfo,
                                                                  v11,
                                                                  v12,
                                                                  v13);
    byte_42E7BCF = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__319_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_50;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__319_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_50;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v69 = 0;
      v15 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v69);
      v4->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, v15, v17, v18, v19, v20, v21, v22);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
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
      this = (BattleActorControl__collChangeAppearance_d__319_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_50;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_27;
      this = (BattleActorControl__collChangeAppearance_d__319_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_50;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_27:
      v37 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v4->fields._moveEffect_5__2 = (struct System_Collections_Generic_List_int__o *)v37;
      p_moveEffect_5__2 = (BattleServantConfConponent_o *)&v4->fields._moveEffect_5__2;
      sub_B5D560(p_moveEffect_5__2, v37, v39, v40, v41, v42, v43, v44);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v69 = 0;
      v45 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v69);
      p_moveEffect_5__2[-1].fields.classBoardSkillObj = (struct BattleServantClassBoardSkillEffectListComponent_o *)v45;
      sub_B5D560((BattleServantConfConponent_o *)((char *)p_moveEffect_5__2 - 16), v45, v46, v47, v48, v49, v50, v51);
      *(_DWORD *)&p_moveEffect_5__2[-1].fields.isEquip = 2;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
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
      v69 = 0;
      v26 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v69);
      v4->fields.__2__current = (Il2CppObject *)v26;
      v27 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v27, v26, v28, v29, v30, v31, v32, v33);
      v34 = 3;
      goto LABEL_46;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__319_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_50;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__319_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_50;
      this = (BattleActorControl__collChangeAppearance_d__319_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0LL);
      v52 = _4__this->fields.battleSvtData;
      if ( !v52 )
        goto LABEL_50;
      v53 = (ServantAssetArgs_o *)this;
      isForceAppearance = v52->fields.isForceAppearance;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadBattleActor(v53, isForceAppearance, 0LL);
LABEL_36:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__collChangeAppearance_d__319_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v69 = 0;
        v55 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v4->fields.__2__current = (Il2CppObject *)v55;
        v27 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v27, v55, v56, v57, v58, v59, v60, v61);
        v34 = 4;
      }
      else
      {
        if ( !_4__this )
LABEL_50:
          sub_B5D69C(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( !v4->fields._moveEffect_5__2 )
          return 0;
        v69 = 0;
        v62 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        v4->fields.__2__current = (Il2CppObject *)v62;
        v27 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v27, v62, v63, v64, v65, v66, v67, v68);
        v34 = 5;
      }
LABEL_46:
      *(_DWORD *)&v27[-1].fields.isOpenAfter = v34;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_36;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__2, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__319__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__319_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__319__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__319_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__collChangeAppearance_d__319_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__319__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__319_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__319__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__319_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__314___ctor(
        BattleActorControl__colloadDressServant_d__314_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__314__MoveNext(
        BattleActorControl__colloadDressServant_d__314_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl__colloadDressServant_d__314_o *v4; // x19
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
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  System_Int32_array **v19; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v30; // x0
  BattleServantConfConponent_o *p_moveEffect_5__3; // x19
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  System_Int32_array **v47; // x0
  BattleServantConfConponent_o *v48; // x19
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  int v55; // w8
  struct BattleServantData_o *v56; // x8
  ServantAssetArgs_o *updated; // x21
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  BattleServantConfConponent_o *v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  struct BattleServantData_o *v72; // x8
  ServantAssetArgs_o *v73; // x21
  System_Int32_array **v74; // x0
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
  System_Int32_array **v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x0
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  int v102; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E7BD0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&int_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v11, v12, v13);
    this = (BattleActorControl__colloadDressServant_d__314_o *)sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, v14, v15, v16);
    byte_42E7BD0 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v4->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_62;
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_73;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_73;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v102 = 0;
      v19 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
      v4->fields.__2__current = (Il2CppObject *)v19;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, v19, v21, v22, v23, v24, v25, v26);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
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
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_73;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_23;
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_73;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_23:
      v30 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v4->fields._moveEffect_5__3 = (struct System_Collections_Generic_List_int__o *)v30;
      p_moveEffect_5__3 = (BattleServantConfConponent_o *)&v4->fields._moveEffect_5__3;
      sub_B5D560(p_moveEffect_5__3, v30, v32, v33, v34, v35, v36, v37);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v102 = 0;
      v38 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
      *(_QWORD *)&p_moveEffect_5__3[-1].fields.isEquip = v38;
      sub_B5D560((BattleServantConfConponent_o *)((char *)p_moveEffect_5__3 - 24), v38, v39, v40, v41, v42, v43, v44);
      LODWORD(p_moveEffect_5__3[-1].fields.BattleAssetUIAtlas) = 2;
      break;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_73;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( v4->fields.flg )
      {
        if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
        v102 = 0;
        v47 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
        v4->fields.__2__current = (Il2CppObject *)v47;
        v48 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v48, v47, v49, v50, v51, v52, v53, v54);
        v55 = 3;
      }
      else
      {
        if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
        v102 = 0;
        v95 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
        v4->fields.__2__current = (Il2CppObject *)v95;
        v48 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v48, v95, v96, v97, v98, v99, v100, v101);
        v55 = 5;
      }
      goto LABEL_63;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v56 = _4__this->fields.battleSvtData;
      if ( !v56 )
        goto LABEL_73;
      v56->fields.dressDispId = v4->fields._dressId_5__2;
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.battleSvtData;
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
      this = (BattleActorControl__colloadDressServant_d__314_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_58;
      v102 = 0;
      v58 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
      v4->fields.__2__current = (Il2CppObject *)v58;
      v48 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(v48, v58, v59, v60, v61, v62, v63, v64);
      v55 = 4;
      goto LABEL_63;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_38;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v72 = _4__this->fields.battleSvtData;
      if ( !v72 )
        goto LABEL_73;
      v72->fields.dressDispId = -1;
      this = (BattleActorControl__colloadDressServant_d__314_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_73;
      v73 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(v73, 0, 0LL);
LABEL_53:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      this = (BattleActorControl__colloadDressServant_d__314_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v102 = 0;
        v74 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
        v4->fields.__2__current = (Il2CppObject *)v74;
        v48 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v48, v74, v75, v76, v77, v78, v79, v80);
        v55 = 6;
      }
      else
      {
LABEL_58:
        if ( !_4__this )
LABEL_73:
          sub_B5D69C(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        v65 = (BattleServantConfConponent_o *)&v4->fields._moveEffect_5__3;
        if ( v4->fields._moveEffect_5__3 )
        {
          v102 = 0;
          v81 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
          v4->fields.__2__current = (Il2CppObject *)v81;
          v48 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(v48, v81, v82, v83, v84, v85, v86, v87);
          v55 = 7;
        }
        else
        {
LABEL_61:
          v65->klass = 0LL;
          sub_B5D560(v65, 0LL, v66, v67, v68, v69, v70, v71);
LABEL_62:
          v102 = 0;
          v88 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v102);
          v4->fields.__2__current = (Il2CppObject *)v88;
          v48 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(v48, v88, v89, v90, v91, v92, v93, v94);
          v55 = 8;
        }
      }
LABEL_63:
      *(_DWORD *)&v48[-1].fields.isOpenAfter = v55;
      break;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_53;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v65 = (BattleServantConfConponent_o *)&v4->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__3, 0LL);
      goto LABEL_61;
    case 8:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      BattleActorControl__sendEventFSM_24192704(_4__this, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__314__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__314_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__314__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__314_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__colloadDressServant_d__314_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__314__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__314_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__314__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__314_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__312___ctor(
        BattleActorControl__colloadTransformServant_d__312_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__312__MoveNext(
        BattleActorControl__colloadTransformServant_d__312_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleActorControl__colloadTransformServant_d__312_o *v4; // x19
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
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v52; // x20
  System_Int32_array **v53; // x0
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v63; // x21
  const MethodInfo *v64; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v68; // x23
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  _BOOL8 v75; // x0
  __int64 v76; // x1
  Il2CppObject *current; // x8
  struct BattleServantData_o *v78; // x9
  struct BattleServantData_o *v79; // x9
  struct BattlePerformance_o *performance; // x9
  BattleServantData_o *v81; // x0
  System_Int32_array **v82; // x0
  BattleServantConfConponent_o *v83; // x19
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  int v90; // w8
  struct BattlePerformance_o *v91; // x8
  struct BattlePerformance_o *v92; // x8
  struct BattlePerformance_o *v93; // x8
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  __int64 v108; // x0
  System_Collections_Generic_List_Enumerator_T__o v109; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v110; // [xsp+20h] [xbp-50h] BYREF

  v4 = this;
  if ( (byte_42E7BD1 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__MoveNext__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v14, v15, v16);
    sub_B5D5C4(&int_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__, v20, v21, v22);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_BattleActionData_TransformServant__GetEnumerator__,
      v23,
      v24,
      v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v35, v36, v37);
    this = (BattleActorControl__colloadTransformServant_d__312_o *)sub_B5D5C4(&StringLiteral_5561/*"END_LOAD"*/, v38, v39, v40);
    byte_42E7BD1 = 1;
  }
  memset(&v110, 0, sizeof(v110));
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_70;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.fbxcomponent;
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
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_70;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          (UnityEngine_GameObject_o *)this,
                                                          (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_70;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
        0LL);
LABEL_18:
      v44 = (System_Int32_array **)BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v4->fields._moveEffect_5__2 = (struct System_Collections_Generic_List_int__o *)v44;
      sub_B5D560((BattleServantConfConponent_o *)&v4->fields._moveEffect_5__2, v44, v45, v46, v47, v48, v49, v50);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_70;
      if ( !motionFSM->max_length )
      {
        v108 = sub_B5D6C8(this);
        sub_B5D668(v108, 0LL);
      }
      v52 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v52, 0LL);
      LODWORD(v109.fields.list) = 0;
      v53 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v109);
      v4->fields.__2__current = (Il2CppObject *)v53;
      p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
      sub_B5D560(p__2__current, v53, v55, v56, v57, v58, v59, v60);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      battleSvtData = _4__this->fields.battleSvtData;
      v63 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_B5D694(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v63, battleSvtData, v64);
      if ( !v63 )
        goto LABEL_70;
      svtId_k__BackingField = v63->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v63->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v63->fields._overwriteSvtVoiceId_k__BackingField;
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
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v68 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v68,
          (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v68;
        sub_B5D560(
          (BattleServantConfConponent_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (System_Int32_array **)v68,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_70;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_70;
      BattlePerformance__unloadServantSet_18645052((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_70;
      this = (BattleActorControl__colloadTransformServant_d__312_o *)BattleActionData__GetTransformServantList(
                                                                       (BattleActionData_o *)this,
                                                                       0LL);
      if ( !this )
        goto LABEL_70;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v109,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_BattleActionData_TransformServant__GetEnumerator__);
      v110 = v109;
      break;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_52;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__2, 0LL);
      goto LABEL_67;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      BattleActorControl__sendEventFSM_24192704(_4__this, (System_String_o *)StringLiteral_5561/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( 1 )
  {
    v75 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v110,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__MoveNext__);
    if ( !v75 )
      break;
    current = v110.fields.current;
    if ( !v110.fields.current )
      sub_B5D69C(v75, v76);
    v78 = _4__this->fields.battleSvtData;
    if ( !v78 )
      sub_B5D69C(v75, v76);
    if ( LODWORD(v110.fields.current[2].klass) == v78->fields.uniqueId )
    {
      v78->fields.shiftNpcId = -1;
      v79 = _4__this->fields.battleSvtData;
      if ( !v79 )
        sub_B5D69C(v75, v76);
      v79->fields.beforeUserSvtId = -1LL;
      performance = _4__this->fields.performance;
      if ( !performance )
        sub_B5D69C(v75, v76);
      v81 = _4__this->fields.battleSvtData;
      if ( !v81 )
        sub_B5D69C(0LL, v76);
      BattleServantData__setTransformServant(
        v81,
        performance->fields.data,
        HIDWORD(current[1].monitor),
        HIDWORD(current[2].klass),
        0,
        0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v110,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__Dispose__);
  this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_70;
  BattleServantData__changeTransformServant((BattleServantData_o *)this, 0LL);
  this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_52:
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  this = (BattleActorControl__colloadTransformServant_d__312_o *)ServantAssetLoadManager__checkLoad(0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( _4__this )
    {
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__312_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
        v91 = _4__this->fields.performance;
        if ( v91 )
        {
          this = (BattleActorControl__colloadTransformServant_d__312_o *)v91->fields.data;
          if ( this )
          {
            BattleData__transformSvtCommand((BattleData_o *)this, _4__this->fields.battleSvtData, 0LL);
            v92 = _4__this->fields.performance;
            if ( v92 )
            {
              this = (BattleActorControl__colloadTransformServant_d__312_o *)v92->fields.commandPerf;
              if ( this )
              {
                BattlePerformanceCommandCard__UpdateSelectedCommandCardServantFace(
                  (BattlePerformanceCommandCard_o *)this,
                  _4__this->fields.battleSvtData,
                  0LL);
                v93 = _4__this->fields.performance;
                if ( v93 )
                {
                  this = (BattleActorControl__colloadTransformServant_d__312_o *)v93->fields.commandPerf;
                  if ( this )
                  {
                    BattlePerformanceCommandCard__UpdateDrawnCommandCardServantFace(
                      (BattlePerformanceCommandCard_o *)this,
                      _4__this->fields.battleSvtData,
                      0LL);
                    if ( v4->fields._moveEffect_5__2 )
                    {
                      LODWORD(v109.fields.list) = 0;
                      v94 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v109);
                      v4->fields.__2__current = (Il2CppObject *)v94;
                      v83 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
                      sub_B5D560(v83, v94, v95, v96, v97, v98, v99, v100);
                      v90 = 3;
                    }
                    else
                    {
LABEL_67:
                      LODWORD(v109.fields.list) = 0;
                      v101 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v109);
                      v4->fields.__2__current = (Il2CppObject *)v101;
                      v83 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
                      sub_B5D560(v83, v101, v102, v103, v104, v105, v106, v107);
                      v90 = 4;
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
    sub_B5D69C(this, method);
  }
  LODWORD(v109.fields.list) = 0;
  v82 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v109);
  v4->fields.__2__current = (Il2CppObject *)v82;
  v83 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
  sub_B5D560(v83, v82, v84, v85, v86, v87, v88, v89);
  v90 = 2;
LABEL_68:
  *(_DWORD *)&v83[-1].fields.isOpenAfter = v90;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__312__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__312_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__312__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__312_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__colloadTransformServant_d__312_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__312__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__312_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__312__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__312_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__205___ctor(
        BattleActorControl__coroutinePostCallBack_d__205_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__205__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__205_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v15; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v17; // x1
  Il2CppObject **v18; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v20; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42E7BD2 & 1) == 0 )
  {
    sub_B5D5C4(&DefCoroutine_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&UnityEngine_WaitForSeconds_TypeInfo, v9, v10, v11);
    byte_42E7BD2 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B5D69C(0LL, method);
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
    v20 = (UnityEngine_WaitForSeconds_o *)sub_B5D694(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v20, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v20;
    p__2__current = &this->fields.__2__current;
    sub_B5D560((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v15 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v15 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v15->static_fields;
    v17 = *static_fields;
    this->fields.__2__current = *static_fields;
    v18 = &this->fields.__2__current;
    sub_B5D560((BattleServantConfConponent_o *)v18, (System_Int32_array **)v17, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v18 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__205__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__205_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__205__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__205_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__coroutinePostCallBack_d__205_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__205__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__205_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__205__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__205_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__317___ctor(
        BattleActorControl__waitChangeApp_d__317_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__317__MoveNext(
        BattleActorControl__waitChangeApp_d__317_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl__waitChangeApp_d__317_o *v3; // x19
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
    this = (BattleActorControl__waitChangeApp_d__317_o *)this->fields.callback;
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
      started = (System_Int32_array **)UnityEngine_MonoBehaviour__StartCoroutine_35615088(
                                         (UnityEngine_MonoBehaviour_o *)_4__this,
                                         v5,
                                         0LL);
      v3->fields.__2__current = (Il2CppObject *)started;
      p__2__current = (BattleServantConfConponent_o *)&v3->fields.__2__current;
      sub_B5D560(p__2__current, started, v8, v9, v10, v11, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
      return result;
    }
LABEL_8:
    sub_B5D69C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__317__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__317_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__317__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__317_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleActorControl__waitChangeApp_d__317_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__317__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__317_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__317__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__317_o *this,
        const MethodInfo *method)
{
  ;
}