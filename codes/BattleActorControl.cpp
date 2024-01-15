void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FDB13 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_TypeInfo, v1);
    byte_40FDB13 = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  BattleLogData_o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Collections_Generic_List_int__o *v49; // x20
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  TranslucentActorVisualInfo_o *v60; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_Collections_Hashtable_o *v78; // x20
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  System_Collections_Hashtable_o *v89; // x20
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x3
  __int64 v104; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v105; // x20
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7

  if ( (byte_40FDB12 & 1) == 0 )
  {
    sub_B16FFC(&BattleLogData_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v9);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&TranslucentActorVisualInfo_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_16167/*"act"*/, v14);
    sub_B16FFC(&StringLiteral_1/*""*/, v15);
    byte_40FDB12 = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   method,
                                                                                                   v2,
                                                                                                   v3,
                                                                                                   v4);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v16,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.auraList,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.actorScale = 1.0;
  v27 = (BattleLogData_o *)sub_B170CC(BattleLogData_TypeInfo, v23, v24, v25, v26);
  BattleLogData___ctor_19759668(v27, (System_String_o *)StringLiteral_16167/*"act"*/, 90, 0LL);
  this->fields.battleLog = v27;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleLog,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v38 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__GameObject__TypeInfo,
                                                                                                   v34,
                                                                                                   v35,
                                                                                                   v36,
                                                                                                   v37);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v38,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v38;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.buffLoopEffectDict,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v49 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v45,
                                                    v46,
                                                    v47,
                                                    v48);
  System_Collections_Generic_List_int____ctor(
    v49,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v49;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.reservedEffectBuffEffectIdList,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v60 = (TranslucentActorVisualInfo_o *)sub_B170CC(TranslucentActorVisualInfo_TypeInfo, v56, v57, v58, v59);
  TranslucentActorVisualInfo___ctor(v60, 0LL);
  this->fields.translucentActorVisualInfo = v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.translucentActorVisualInfo,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v67, v68, v69, v70, v71, v72, v73);
  v78 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v74, v75, v76, v77);
  System_Collections_Hashtable___ctor_38240048(v78, 0LL);
  this->fields.EventList = v78;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.EventList,
    (System_Int32_array **)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  v89 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, v85, v86, v87, v88);
  System_Collections_Hashtable___ctor_38240048(v89, 0LL);
  this->fields.CompleteList = v89;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.CompleteList,
    (System_Int32_array **)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v105 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                         System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                                         v101,
                                                                                         v102,
                                                                                         v103,
                                                                                         v104);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v105,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v105;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventClassAddedEventDict,
    (System_Int32_array **)v105,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_int__o *v13; // x21

  if ( (byte_40FDB02 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_BasicHelper_ForEach_int___, v4);
    sub_B16FFC(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__340_0__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    byte_40FDB02 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_B170D4();
  v8 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v13 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v9, v10, v11, v12);
  System_Action_int____ctor(
    v13,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__340_0__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  BasicHelper__ForEach_int_(
    v8,
    (System_Action_T__o *)v13,
    (const MethodInfo_18B6CD8 *)Method_BasicHelper_ForEach_int___);
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
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v10; // x0
  UnityEngine_GameObject_o *Item; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  changeVColor_array *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  int max_length; // w8
  changeVColor_array *v18; // x21
  unsigned int v19; // w22
  UnityEngine_Component_o *v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_List_int__o *v23; // x0

  if ( (byte_40FDB01 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v8);
    byte_40FDB01 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v10 = this->fields.buffLoopEffectDict;
    if ( !v10 )
      goto LABEL_22;
    Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                         (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10,
                                         effectId,
                                         (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !Item )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive(Item, 1, 0LL);
    if ( this->fields.isPlayingNoblePhantasm )
    {
      v12 = this->fields.buffLoopEffectDict;
      if ( !v12 )
        goto LABEL_22;
      v13 = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v12,
                                          effectId,
                                          (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !v13 )
        goto LABEL_22;
      v14 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
              v13,
              1,
              (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680);
      if ( !v14 )
        goto LABEL_22;
      max_length = v14->max_length;
      v18 = v14;
      if ( max_length >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= max_length )
          {
            sub_B17100(v14, v15, v16);
            sub_B170A0();
          }
          v20 = (UnityEngine_Component_o *)v18->m_Items[v19];
          if ( !v20 )
            break;
          gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
          if ( !gameObject )
            break;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          max_length = v18->max_length;
          if ( (int)++v19 >= max_length )
            goto LABEL_17;
        }
LABEL_22:
        sub_B170D4();
      }
    }
  }
LABEL_17:
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_22;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    v23 = this->fields.reservedEffectBuffEffectIdList;
    if ( !v23 )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      v23,
      effectId,
      (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void __fastcall BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  changeVColor_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  changeVColor_array *v11; // x20
  unsigned __int64 v12; // x22
  changeVColor_o **m_Items; // x23
  System_Collections_Generic_List_WarBoardManager_TaskList__o *rendererArrayList; // x0
  WarBoardManager_TaskList_o *v15; // x21
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v16; // x0

  if ( (byte_40FDADD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v6);
    byte_40FDADD = 1;
  }
  if ( !obj )
    goto LABEL_14;
  v7 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
         obj,
         (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !v7 )
    goto LABEL_14;
  v10 = *(_QWORD *)&v7->max_length;
  v11 = v7;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    m_Items = v7->m_Items;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
      {
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      rendererArrayList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.rendererArrayList;
      if ( !rendererArrayList )
        break;
      v15 = (WarBoardManager_TaskList_o *)m_Items[v12];
      v7 = (changeVColor_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   rendererArrayList,
                                   v15,
                                   (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)v7 & 1) == 0 )
      {
        v16 = this->fields.rendererArrayList;
        if ( !v16 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
      }
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
LABEL_14:
    sub_B170D4();
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
  ServantAnimationOverwriteEntity_array *List; // x0
  const MethodInfo *v11; // x1
  ServantAnimationOverwriteEntity_array *v12; // x21
  ChangeBattlePhaseNotify_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  ChangeBattlePhaseOverwriteAnimation_o *v18; // x22
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  BattleObserver_o *overwriteAnim; // x0

  if ( (byte_40FDAFC & 1) == 0 )
  {
    sub_B16FFC(&ChangeBattlePhaseOverwriteAnimation_TypeInfo, *(_QWORD *)&svtId);
    byte_40FDAFC = 1;
  }
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, *(const MethodInfo **)&svtId);
  Master = ServantAnimationOverwriteMaster__get_Master(0LL);
  if ( !Master )
    goto LABEL_9;
  List = ServantAnimationOverwriteMaster__GetList(Master, svtId, limitCount, isEnemy, 0LL);
  if ( !List )
    goto LABEL_9;
  v12 = List;
  if ( *(_QWORD *)&List->max_length )
  {
    v13 = BattleActorControl__GetChangePhaseNotify(this, v11);
    v18 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_B170CC(
                                                     ChangeBattlePhaseOverwriteAnimation_TypeInfo,
                                                     v14,
                                                     v15,
                                                     v16,
                                                     v17);
    ChangeBattlePhaseOverwriteAnimation___ctor(v18, this, v12, v13, 0LL);
    this->fields.overwriteAnim = v18;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.overwriteAnim,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
    if ( overwriteAnim )
    {
      BattleObserver__Add(overwriteAnim, (BattleSubject_o *)v13, 0LL);
      return;
    }
LABEL_9:
    sub_B170D4();
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
  System_Collections_Generic_List_int__o *v7; // x0

  if ( (byte_40FDB00 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&effectId);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_40FDB00 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_7;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  v7 = this->fields.reservedEffectBuffEffectIdList;
  if ( !v7 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_List_int___Add(
    v7,
    effectId,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
}


void __fastcall BattleActorControl__AddServantVoicePlayed(
        BattleActorControl_o *this,
        System_String_array *playedSoundArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v15; // x21

  if ( (byte_40FDAA8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_string___ctor__, playedSoundArray);
    sub_B16FFC(&System_Action_string__TypeInfo, v5);
    sub_B16FFC(&Method_BasicHelper_ForEach_string___, v6);
    sub_B16FFC(&Method_BattleActorControl__AddServantVoicePlayed_b__207_0__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FDAA8 = 1;
  }
  if ( !this->fields.isEnemy )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      sub_B170D4();
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v15 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                     System_Action_string__TypeInfo,
                                                                                     v11,
                                                                                     v12,
                                                                                     v13,
                                                                                     v14);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v15,
          (Il2CppObject *)this,
          Method_BattleActorControl__AddServantVoicePlayed_b__207_0__,
          (const MethodInfo_24B7310 *)Method_System_Action_string___ctor__);
        BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v15,
          (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void __fastcall BattleActorControl__ApplySpecialWaitModeFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t Value; // w0
  int32_t v9; // w20
  BattleServantData_o *v10; // x0
  BattleActionData_o *actiondata; // x0
  System_Int32_array *TargetIds; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x8
  System_Int32_array *v16; // x20
  unsigned __int64 v17; // x26
  BattlePerformance_o *performance; // x0
  UnityEngine_Object_o *ServantActor; // x21
  const MethodInfo *v20; // x3
  BattleServantData_o *monitor; // x0
  const MethodInfo *v22; // x3
  System_String_o *v23; // x0
  System_String_o *v24; // x0
  int v25; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40FDAFF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&StringLiteral_13286/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v3);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v4);
    byte_40FDAFF = 1;
  }
  v25 = 0;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_27;
  battleSvtData->fields.isSleepWaitMode = battleSvtData->fields.isSleepWaitModeReady;
  v25 = 1;
  v6 = System_Int32__ToString((int32_t)&v25, 0LL);
  v7 = System_String__Concat_43743732((System_String_o *)StringLiteral_13286/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v6, 0LL);
  Value = ConstantMaster__getValue(v7, 0LL);
  if ( Value != -1 )
  {
    v9 = Value;
    while ( 1 )
    {
      v10 = this->fields.battleSvtData;
      if ( !v10 )
        goto LABEL_27;
      if ( v9 == BattleServantData__getActorSvtId(v10, 0LL) )
      {
        actiondata = this->fields.actiondata;
        if ( !actiondata )
          goto LABEL_27;
        TargetIds = BattleActionData__getTargetIds(actiondata, 0LL);
        if ( !TargetIds )
          goto LABEL_27;
        v15 = *(_QWORD *)&TargetIds->max_length;
        v16 = TargetIds;
        if ( (int)v15 >= 1 )
          break;
      }
LABEL_25:
      ++v25;
      v23 = System_Int32__ToString((int32_t)&v25, 0LL);
      v24 = System_String__Concat_43743732((System_String_o *)StringLiteral_13286/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v23, 0LL);
      v9 = ConstantMaster__getValue(v24, 0LL);
      if ( v9 == -1 )
        return;
    }
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
      {
        sub_B17100(TargetIds, v13, v14);
        sub_B170A0();
      }
      performance = this->fields.performance;
      if ( !performance )
        break;
      ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(performance, v16->m_Items[v17 + 1], 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      TargetIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
      if ( ((unsigned __int8)TargetIds & 1) != 0 )
      {
        if ( !ServantActor )
          break;
        monitor = (BattleServantData_o *)ServantActor[17].monitor;
        if ( !monitor )
          break;
        if ( monitor->fields.isSleepWaitModeReady )
        {
          monitor->fields.isSleepWaitMode = 1;
          BattleActorControl__playAnimation_32029680(
            (BattleActorControl_o *)ServantActor,
            (System_String_o *)StringLiteral_23096/*"wait"*/,
            0,
            v20);
          monitor = (BattleServantData_o *)ServantActor[17].monitor;
          if ( !monitor )
            break;
        }
        TargetIds = (System_Int32_array *)BattleServantData__IsCounterWaitMotion(monitor, 0LL);
        if ( ((unsigned __int8)TargetIds & 1) != 0 )
          BattleActorControl__playAnimation_32029680(
            (BattleActorControl_o *)ServantActor,
            (System_String_o *)StringLiteral_23096/*"wait"*/,
            1,
            v22);
      }
      LODWORD(v15) = v16->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_25;
    }
LABEL_27:
    sub_B170D4();
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  UnityEngine_MaterialPropertyBlock_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDA7C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_MaterialPropertyBlock_TypeInfo, method);
    byte_40FDA7C = 1;
  }
  v6 = (UnityEngine_MaterialPropertyBlock_o *)sub_B170CC(UnityEngine_MaterialPropertyBlock_TypeInfo, method, v2, v3, v4);
  UnityEngine_MaterialPropertyBlock___ctor(v6, 0LL);
  this->fields.mpb = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.mpb, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
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
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x20

  v4 = this;
  if ( (byte_40FDACD & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___, enable);
    this = (BattleActorControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDACD = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_B170D4();
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
        sub_B17100(this, enable, method);
        sub_B170A0();
      }
      v15 = (UnityEngine_GameObject_o *)*((_QWORD *)&v14->obj.klass + v8);
      if ( !v15 )
        goto LABEL_23;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    v15,
                                                    (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
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
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *ComponentInChildren_Dropdown_DropdownItem; // x21

  v4 = this;
  if ( (byte_40FDACC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___, enable);
    this = (BattleActorControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDACC = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_25:
    sub_B170D4();
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
        sub_B17100(this, enable, method);
        sub_B170A0();
      }
      v14 = (UnityEngine_GameObject_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !v14 )
        goto LABEL_25;
      ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                    v14,
                                                    (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
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
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0
  float v16; // s10
  float v17; // s11
  float v18; // s9
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_MaterialPropertyBlock_o *mpb; // x0
  UnityEngine_MaterialPropertyBlock_o *v21; // x0
  UnityEngine_MaterialPropertyBlock_o *v22; // x0
  UnityEngine_Component_o *v23; // x0
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_Object_o *specialShadowObj; // x20
  UnityEngine_GameObject_o *v26; // x0
  changeVColor_array *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 max_length; // x8
  changeVColor_array *v31; // x19
  unsigned __int64 v32; // x22
  changeVColor_o **m_Items; // x23
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Object_o *v35; // x20
  UnityEngine_Component_o *v36; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Renderer_o *v40; // x0
  UnityEngine_Material_o *material; // x0
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_40FDAD0 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v12);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v13);
    byte_40FDAD0 = 1;
  }
  if ( BattleActorControl__IsHideShadow(this, method) )
    return;
  clear = UnityEngine_Color__get_clear(0LL);
  v42.fields.r = r;
  v42.fields.g = g;
  v42.fields.b = b;
  v42.fields.a = a;
  if ( UnityEngine_Color__op_Equality(v42, clear, 0LL) )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_47;
    data = performance->fields.data;
    if ( !data )
      goto LABEL_47;
    GroundShadowColor = BattleData__getGroundShadowColor(data, 0LL);
    v16 = GroundShadowColor.fields.r;
    v17 = GroundShadowColor.fields.g;
    v18 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  else
  {
    v18 = 1.0;
    v17 = 1.0;
    v16 = 1.0;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
  {
    mpb = this->fields.mpb;
    if ( !mpb )
      goto LABEL_47;
    UnityEngine_MaterialPropertyBlock__Clear_40725676(mpb, 0LL);
    v21 = this->fields.mpb;
    if ( !v21 )
      goto LABEL_47;
    v44.fields.r = v16;
    v44.fields.g = v17;
    v44.fields.b = v18;
    v44.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(v21, (System_String_o *)StringLiteral_15891/*"_Color"*/, v44, 0LL);
    v22 = this->fields.mpb;
    if ( !v22 )
      goto LABEL_47;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      v22,
      (System_String_o *)StringLiteral_15950/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    v23 = (UnityEngine_Component_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v16;
    this->fields.currentShadowColor.fields.g = v17;
    this->fields.currentShadowColor.fields.b = v18;
    this->fields.currentShadowColor.fields.a = a;
    if ( !v23 )
      goto LABEL_47;
    Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                          v23,
                                                          (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !Component_WebViewObject )
      goto LABEL_47;
    UnityEngine_Renderer__SetPropertyBlock(Component_WebViewObject, this->fields.mpb, 0LL);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    return;
  v26 = this->fields.specialShadowObj;
  if ( !v26
    || (v27 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                v26,
                1,
                (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696)) == 0LL )
  {
LABEL_47:
    sub_B170D4();
  }
  max_length = *(_QWORD *)&v27->max_length;
  v31 = v27;
  if ( (int)max_length >= 1 )
  {
    v32 = 0LL;
    m_Items = v27->m_Items;
    do
    {
      if ( a > 0.0 )
        goto LABEL_38;
      if ( v32 >= (unsigned int)max_length )
        goto LABEL_48;
      v34 = (UnityEngine_Component_o *)m_Items[v32];
      if ( !v34 )
        goto LABEL_47;
      v35 = (UnityEngine_Object_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                      v34,
                                      (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v27 = (changeVColor_array *)UnityEngine_Object__op_Inequality(v35, 0LL, 0LL);
      max_length = v31->max_length;
      if ( ((unsigned __int8)v27 & 1) != 0 )
      {
        if ( v32 >= max_length )
          goto LABEL_48;
        v36 = (UnityEngine_Component_o *)m_Items[v32];
        if ( !v36 )
          goto LABEL_47;
        gameObject = UnityEngine_Component__get_gameObject(v36, 0LL);
        if ( !gameObject )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      }
      else
      {
LABEL_38:
        if ( v32 >= (unsigned int)max_length )
          goto LABEL_48;
        v38 = (UnityEngine_Component_o *)m_Items[v32];
        if ( !v38 )
          goto LABEL_47;
        v39 = UnityEngine_Component__get_gameObject(v38, 0LL);
        if ( !v39 )
          goto LABEL_47;
        UnityEngine_GameObject__SetActive(v39, 1, 0LL);
        if ( v32 >= v31->max_length )
        {
LABEL_48:
          sub_B17100(v27, v28, v29);
          sub_B170A0();
        }
        v40 = (UnityEngine_Renderer_o *)m_Items[v32];
        if ( !v40 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_material(v40, 0LL);
        if ( !material )
          goto LABEL_47;
        v45.fields.r = v16;
        v45.fields.g = v17;
        v45.fields.b = v18;
        v45.fields.a = a;
        UnityEngine_Material__set_color(material, v45, 0LL);
      }
      LODWORD(max_length) = v31->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)max_length );
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

  if ( (byte_40FDA84 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&loadActorLimitCount);
    sub_B16FFC(&StringLiteral_11493/*"RootShadow"*/, v5);
    byte_40FDA84 = 1;
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
              (System_String_o *)StringLiteral_11493/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v9;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v9,
                         (System_String_o *)StringLiteral_11493/*"RootShadow"*/,
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
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceBg_o *bgPerf; // x0
  UnityEngine_Object_o *ShadowTexture; // x20
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  UnityEngine_Object_o *v17; // x0
  UnityEngine_Object_o *v18; // x0
  UnityEngine_MaterialPropertyBlock_o *mpb; // x0
  UnityEngine_MaterialPropertyBlock_o *v20; // x0
  UnityEngine_MaterialPropertyBlock_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Component_o *v28; // x0
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  int32_t v30; // [xsp+Ch] [xbp-24h] BYREF

  v30 = shadowId;
  if ( (byte_40FDACF & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, *(_QWORD *)&shadowId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Texture2D_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v7);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v8);
    sub_B16FFC(&StringLiteral_2752/*"Battle/Textures/shadow_"*/, v9);
    sub_B16FFC(&StringLiteral_2753/*"Battle/Textures/shadow_1"*/, v10);
    byte_40FDACF = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
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
      v15 = System_Int32__ToString((int32_t)&v30, 0LL);
      v16 = System_String__Concat_43743732((System_String_o *)StringLiteral_2752/*"Battle/Textures/shadow_"*/, v15, 0LL);
      v17 = UnityEngine_Resources__Load(v16, 0LL);
      if ( v17 )
      {
        if ( (UnityEngine_Texture2D_c *)v17->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v17;
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
      v18 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_2753/*"Battle/Textures/shadow_1"*/, 0LL);
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
    if ( UnityEngine_Object__op_Inequality(ShadowTexture, 0LL, 0LL) )
    {
      mpb = this->fields.mpb;
      if ( mpb )
      {
        UnityEngine_MaterialPropertyBlock__Clear_40725676(mpb, 0LL);
        v20 = this->fields.mpb;
        if ( v20 )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            v20,
            (System_String_o *)StringLiteral_15891/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          v21 = this->fields.mpb;
          if ( v21 )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              v21,
              (System_String_o *)StringLiteral_15950/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields.currentShadowTexure,
              (System_Int32_array **)ShadowTexture,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            v28 = (UnityEngine_Component_o *)this->fields.shadowObj;
            if ( v28 )
            {
              Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                    v28,
                                                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( Component_WebViewObject )
              {
                UnityEngine_Renderer__SetPropertyBlock(Component_WebViewObject, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_38:
      sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BattleServantData_o *battleSvtData; // x0
  __int64 v17; // x0
  __int64 v18; // x22
  System_String_o *v19; // x21
  BattleFBXComponent_o *fbxcomponent; // x0
  int v22; // [xsp+Ch] [xbp-24h] BYREF

  v5 = animname;
  if ( (byte_40FDAFA & 1) == 0 )
  {
    sub_B16FFC(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v8);
    byte_40FDAFA = 1;
  }
  v22 = 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  if ( LOBYTE(Instance->fields.commonCamera) )
    return v5;
  if ( this->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (System_Int32_array **)v5,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !v5 )
    goto LABEL_17;
  if ( !System_String__StartsWith(v5, (System_String_o *)StringLiteral_23096/*"wait"*/, 0LL) )
    return v5;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_17;
  if ( !BattleServantData__IsCounterWaitMotion(battleSvtData, 0LL) )
    return v5;
  v22 = 49;
  v17 = j_il2cpp_value_box_0(HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, &v22);
  if ( !v17
    || (v18 = v17,
        v19 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 360LL))(
                                   v17,
                                   *(_QWORD *)(*(_QWORD *)v17 + 368LL)),
        v22 = *(_DWORD *)j_il2cpp_object_unbox_0(v18),
        (fbxcomponent = this->fields.fbxcomponent) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, v19, 0LL) )
    return v19;
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
  struct System_String_o *v9; // x19
  __int64 v11; // x1
  struct BattleServantData_o *battleSvtData; // x8
  __int64 v13; // x0
  __int64 v14; // x22
  System_String_o *v15; // x21
  BattleFBXComponent_o *fbxcomponent; // x0
  int v18; // [xsp+Ch] [xbp-24h] BYREF

  v9 = animname;
  if ( (byte_40FDAF9 & 1) == 0 )
  {
    sub_B16FFC(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v11);
    byte_40FDAF9 = 1;
  }
  v18 = 0;
  if ( this->fields.isFirstSaveBeforePlayAnim && isSaveAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v9;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (System_Int32_array **)v9,
      (System_String_array **)isSaveAnim,
      (System_String_array **)method,
      v4,
      v5,
      v6,
      v7);
  }
  if ( !v9 )
    goto LABEL_15;
  if ( !System_String__StartsWith(v9, (System_String_o *)StringLiteral_23096/*"wait"*/, 0LL) )
    return v9;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_15;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return v9;
  v18 = 46;
  v13 = j_il2cpp_value_box_0(HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, &v18);
  if ( !v13
    || (v14 = v13,
        v15 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 360LL))(
                                   v13,
                                   *(_QWORD *)(*(_QWORD *)v13 + 368LL)),
        v18 = *(_DWORD *)j_il2cpp_object_unbox_0(v14),
        (fbxcomponent = this->fields.fbxcomponent) == 0LL) )
  {
LABEL_15:
    sub_B170D4();
  }
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, v15, 0LL) )
    return v15;
  return v9;
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
  struct System_Collections_Hashtable_o *v8; // x0
  __int64 v9; // x0
  struct System_Collections_Hashtable_o *v10; // x8
  BattleActorControl_EventClass_o *v11; // x21
  __int64 v12; // x9
  BattleActorControl_o *v13; // x0
  System_String_o *v14; // x1
  BattleActorControl_EventClass_o *v15; // x2
  const MethodInfo *v16; // x3

  if ( (byte_40FDAAF & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, name);
    sub_B16FFC(&StringLiteral_1535/*"@OnComplete Fired!\n => <{0}>:"*/, v5);
    byte_40FDAAF = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1535/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_32017324(this, name, 0, v7);
    return;
  }
  v8 = this->fields.CompleteList;
  if ( !v8
    || (v9 = ((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._29_get_Item.method)(
               v8,
               name,
               v8->klass->vtable._30_set_Item.methodPtr),
        (v10 = this->fields.CompleteList) == 0LL)
    || (v11 = (BattleActorControl_EventClass_o *)v9,
        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v10->klass->vtable._39_Remove.method)(
          this->fields.CompleteList,
          name,
          v10->klass->vtable._40_get_SyncRoot.methodPtr),
        !v11) )
  {
LABEL_12:
    sub_B170D4();
  }
  v12 = *(&BattleActorControl_EventClass_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (BattleActorControl_EventClass_c *)v11->klass->_2.typeHierarchy[v12 - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v11, 0LL);
    goto LABEL_11;
  }
  v13 = (BattleActorControl_o *)sub_B173C8(v11);
  BattleActorControl__setAnimationEvent(v13, v14, v15, v16);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_40FDAB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, eventName);
    byte_40FDAB9 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (System_Xml_Schema_XmlSchemaObject_o *)motionName,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_40FDABA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__Remove__, eventName);
    byte_40FDABA = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
    (System_Xml_XmlQualifiedName_o *)eventName,
    (const MethodInfo_2DA5684 *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_40FDA85 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA85 = 1;
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
  UnityEngine_Object__Destroy_34809464(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_List_int__o *v11; // x0
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v13; // x0
  System_Collections_Generic_List_Enumerator_int__o v14; // [xsp+8h] [xbp-48h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-30h] BYREF

  if ( (byte_40FDB08 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    byte_40FDB08 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)buffLoopEffectDict,
           (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  v11 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                    (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v11 )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    v11,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v14;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields.current, v12) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v13 = this->fields.buffLoopEffectDict;
  if ( !v13 )
LABEL_10:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v13,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDAF4 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__DestroyAuraEffect_d__318_TypeInfo, effectObject);
    byte_40FDAF4 = 1;
  }
  v6 = sub_B170CC(BattleActorControl__DestroyAuraEffect_d__318_TypeInfo, effectObject, method, v3, v4);
  BattleActorControl__DestroyAuraEffect_d__318___ctor((BattleActorControl__DestroyAuraEffect_d__318_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = effectObject;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)effectObject, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyEffectOnParticleStop(
        BattleActorControl_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDB06 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__DestroyEffectOnParticleStop_d__344_TypeInfo, *(_QWORD *)&key);
    byte_40FDB06 = 1;
  }
  v7 = sub_B170CC(BattleActorControl__DestroyEffectOnParticleStop_d__344_TypeInfo, *(_QWORD *)&key, method, v3, v4);
  BattleActorControl__DestroyEffectOnParticleStop_d__344___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__344_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = key;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_40FDA86 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA86 = 1;
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
  UnityEngine_Object__DestroyImmediate_34809676(actorObject, 0LL);
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
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v10; // x0
  UnityEngine_Object_o *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v12; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *v13; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v14; // x8
  UnityEngine_GameObject_o *v15; // x19
  _DWORD *materials; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  int v19; // w8
  _DWORD *v20; // x20
  unsigned int v21; // w24
  UnityEngine_Renderer_o *v22; // x0
  __int64 v23; // x8
  _DWORD *v24; // x21
  unsigned __int64 v25; // x25
  UnityEngine_Object_o *v26; // x22

  if ( (byte_40FDB07 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    byte_40FDB07 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_33;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  v10 = this->fields.buffLoopEffectDict;
  if ( !v10 )
    goto LABEL_33;
  Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v10,
                                   effectId,
                                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(Item, 0LL, 0LL) )
    return;
  v12 = this->fields.buffLoopEffectDict;
  if ( !v12
    || (v13 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v12,
                effectId,
                (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v14 = this->fields.buffLoopEffectDict) == 0LL)
    || (v15 = (UnityEngine_GameObject_o *)v13,
        System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v14,
          effectId,
          (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v15)
    || (materials = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                      v15,
                      1,
                      (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696)) == 0LL )
  {
LABEL_33:
    sub_B170D4();
  }
  v19 = materials[6];
  v20 = materials;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        goto LABEL_32;
      v22 = *(UnityEngine_Renderer_o **)&v20[2 * v21 + 8];
      if ( !v22 )
        goto LABEL_33;
      materials = UnityEngine_Renderer__get_materials(v22, 0LL);
      if ( !materials )
        goto LABEL_33;
      v23 = *((_QWORD *)materials + 3);
      v24 = materials;
      if ( (int)v23 >= 1 )
        break;
LABEL_27:
      v19 = v20[6];
      if ( (int)++v21 >= v19 )
        goto LABEL_28;
    }
    v25 = 0LL;
    while ( v25 < (unsigned int)v23 )
    {
      v26 = *(UnityEngine_Object_o **)&v24[2 * v25 + 8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v26, 0LL);
      LODWORD(v23) = v24[6];
      if ( (__int64)++v25 >= (int)v23 )
        goto LABEL_27;
    }
LABEL_32:
    sub_B17100(materials, v17, v18);
    sub_B170A0();
  }
LABEL_28:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v15, 0LL);
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

  if ( (byte_40FDA89 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA89 = 1;
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
    UnityEngine_Object__Destroy_34809464(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.specialShadowObj, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_o **p_prevAnimEffectTriggerKey; // x22
  __int64 v20; // x1
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v21; // x23

  if ( (byte_40FDA83 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleActorAnimationEffect___ctor__, animName);
    sub_B16FFC(&System_Action_BattleActorAnimationEffect__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___, v8);
    sub_B16FFC(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____, v9);
    sub_B16FFC(&Method_BattleActorControl__DisplayAnimationEffect_b__130_0__, v10);
    byte_40FDA83 = 1;
  }
  TriggerKey = BattleActorAnimationEffect__MakeTriggerKey(animName, eventTag, (const MethodInfo *)eventTag);
  Value_string__BattleActorAnimationEffect = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__GetValue_string__BattleActorAnimationEffect___(
                                                                                              (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                                                                                              TriggerKey,
                                                                                              0LL,
                                                                                              (const MethodInfo_18B8088 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  p_prevAnimEffectTriggerKey = &this->fields.prevAnimEffectTriggerKey;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_string__BattleActorAnimationEffect, 0LL) )
  {
    if ( !*p_prevAnimEffectTriggerKey )
      sub_B170D4();
    if ( !System_String__Equals_43731072(*p_prevAnimEffectTriggerKey, TriggerKey, 0LL) )
    {
      v21 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                   System_Action_BattleActorAnimationEffect__TypeInfo,
                                                                                   v20,
                                                                                   v13,
                                                                                   v14,
                                                                                   v15);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        v21,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__130_0__,
        (const MethodInfo_24B7310 *)Method_System_Action_BattleActorAnimationEffect___ctor__);
      BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
        Value_string__BattleActorAnimationEffect,
        (System_Action_T__o *)v21,
        (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  *p_prevAnimEffectTriggerKey = TriggerKey;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey,
    (System_Int32_array **)TriggerKey,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UIWidget_o *component; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FDA88 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_TryGetComponent_Renderer___, target);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FDA88 = 1;
  }
  component = 0LL;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL) )
  {
    if ( !target )
      goto LABEL_12;
    if ( !UnityEngine_Component__TryGetComponent_UIWidget_(
            target,
            &component,
            (const MethodInfo_18BD9D4 *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    if ( !component )
LABEL_12:
      sub_B170D4();
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)component, isEnable, 0LL);
  }
}


bool __fastcall BattleActorControl__ExistMotionEvent(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0

  if ( (byte_40FDA95 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___, eventName);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___, v7);
    sub_B16FFC(&Method_System_Func_PlayMakerFSM__bool___ctor__, v8);
    sub_B16FFC(&System_Func_PlayMakerFSM__bool__TypeInfo, v9);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass157_0__ExistMotionEvent_b__0__, v10);
    sub_B16FFC(&BattleActorControl___c__DisplayClass157_0_TypeInfo, v11);
    byte_40FDA95 = 1;
  }
  v12 = sub_B170CC(BattleActorControl___c__DisplayClass157_0_TypeInfo, eventName, method, v3, v4);
  BattleActorControl___c__DisplayClass157_0___ctor((BattleActorControl___c__DisplayClass157_0_o *)v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  *(_QWORD *)(v12 + 16) = eventName;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)eventName, v13, v14, v15, v16, v17, v18);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_PlayMakerFSM__bool__TypeInfo,
                                                                             v19,
                                                                             v20,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v12,
    Method_BattleActorControl___c__DisplayClass157_0__ExistMotionEvent_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_PlayMakerFSM__bool___ctor__);
  v25 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          motionFSM,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           v25,
           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_40FDAE5 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40FDAE5 = 1;
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
  UnityEngine_Renderer_o *v6; // x0
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v8; // x19
  UnityEngine_Renderer_o *v9; // x0
  UnityEngine_Material_o *v10; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDAD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v4);
    byte_40FDAD8 = 1;
  }
  rendererArrayList = this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_14;
  v6 = (UnityEngine_Renderer_o *)rendererArrayList->fields._items->m_Items[0];
  if ( !v6 )
    goto LABEL_15;
  material = UnityEngine_Renderer__get_material(v6, 0LL);
  if ( !material )
    goto LABEL_15;
  if ( !UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL) )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_clear(0LL);
    goto BattleActorControl$$GetAddColor;
  }
  v8 = this->fields.rendererArrayList;
  if ( !v8 )
    goto LABEL_15;
  if ( !v8->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = (UnityEngine_Renderer_o *)v8->fields._items->m_Items[0];
  if ( !v9 || (v10 = UnityEngine_Renderer__get_material(v9, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Material__GetColor(v10, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, 0LL);
BattleActorControl$$GetAddColor:
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v12;
  result.fields.r = v11;
  return result;
}


ChangeBattlePhaseNotify_o *__fastcall BattleActorControl__GetChangePhaseNotify(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  bool v4; // w8
  ChangeBattlePhaseNotify_o *result; // x0
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  bool v8; // w8
  struct BattlePerformance_o *v9; // x8
  struct BattleData_o *v10; // x8

  if ( (byte_40FDAFB & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDAFB = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  result = 0LL;
  if ( v4 )
  {
    v6 = this->fields.performance;
    if ( !v6 )
      goto LABEL_16;
    data = (UnityEngine_Object_o *)v6->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v8 = UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    result = 0LL;
    if ( v8 )
    {
      v9 = this->fields.performance;
      if ( v9 )
      {
        v10 = v9->fields.data;
        if ( v10 )
          return v10->fields.changePhaseNotify;
      }
LABEL_16:
      sub_B170D4();
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x19
  System_String_array *v11; // x0
  System_String_array *v12; // x1
  __int64 v13; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *v15; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_o *Value; // x20
  __int64 v20; // x2
  __int64 v21; // x8
  System_String_array *v22; // x20
  unsigned __int64 v23; // x21
  System_String_o *v24; // x0
  int32_t result; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40FDB0E & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5217/*"DelayEnd"*/, v9);
    byte_40FDB0E = 1;
  }
  result = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_23;
  if ( !motionFSM->max_length )
    goto LABEL_22;
  v15 = motionFSM->m_Items[0];
  if ( !v15 )
    goto LABEL_23;
  Fsm = PlayMakerFSM__get_Fsm(v15, 0LL);
  if ( !Fsm )
    goto LABEL_23;
  variables = Fsm->fields.variables;
  if ( !variables )
    goto LABEL_23;
  FsmString = HutongGames_PlayMaker_FsmVariables__GetFsmString(variables, (System_String_o *)StringLiteral_5217/*"DelayEnd"*/, 0LL);
  if ( !FsmString )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( System_String__IsNullOrEmpty(Value, 0LL) )
    return v10;
  v11 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v20);
  if ( !v11 )
    goto LABEL_23;
  v12 = v11;
  if ( !v11->max_length )
    goto LABEL_22;
  LOWORD(v11->m_Items[0]) = 44;
  if ( !Value || (v11 = System_String__Split(Value, (System_Char_array *)v11, 0LL)) == 0LL )
LABEL_23:
    sub_B170D4();
  v21 = *(_QWORD *)&v11->max_length;
  v22 = v11;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( v23 < (unsigned int)v21 )
    {
      v24 = v22->m_Items[v23];
      result = 0;
      v11 = (System_String_array *)System_Int32__TryParse(v24, &result, 0LL);
      if ( ((unsigned __int8)v11 & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v10,
          result,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      LODWORD(v21) = v22->max_length;
      if ( (__int64)++v23 >= (int)v21 )
        return v10;
    }
LABEL_22:
    sub_B17100(v11, v12, v13);
    sub_B170A0();
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetMainColor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x8
  UnityEngine_Renderer_o *v6; // x0
  UnityEngine_Material_o *material; // x0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *v8; // x19
  UnityEngine_Renderer_o *v9; // x0
  UnityEngine_Material_o *v10; // x0
  float v11; // s0
  float v12; // s1
  float v13; // s2
  float v14; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDAD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v4);
    byte_40FDAD7 = 1;
  }
  rendererArrayList = this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_14;
  v6 = (UnityEngine_Renderer_o *)rendererArrayList->fields._items->m_Items[0];
  if ( !v6 )
    goto LABEL_15;
  material = UnityEngine_Renderer__get_material(v6, 0LL);
  if ( !material )
    goto LABEL_15;
  if ( !UnityEngine_Material__HasProperty_40721564(material, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL) )
  {
LABEL_14:
    *(UnityEngine_Color_o *)&v11 = UnityEngine_Color__get_white(0LL);
    goto BattleActorControl$$GetMainColor;
  }
  v8 = this->fields.rendererArrayList;
  if ( !v8 )
    goto LABEL_15;
  if ( !v8->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v9 = (UnityEngine_Renderer_o *)v8->fields._items->m_Items[0];
  if ( !v9 || (v10 = UnityEngine_Renderer__get_material(v9, 0LL)) == 0LL )
LABEL_15:
    sub_B170D4();
  *(UnityEngine_Color_o *)&v11 = UnityEngine_Material__GetColor(v10, (System_String_o *)StringLiteral_15891/*"_Color"*/, 0LL);
BattleActorControl$$GetMainColor:
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v12;
  result.fields.r = v11;
  return result;
}


System_String_o *__fastcall BattleActorControl__GetPrefixVoiceId(
        BattleActorControl_o *this,
        System_String_o *voiceId,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x22
  ServantAssetLoadManager_o *Instance; // x0
  ServantAssetLoadManager_o *v7; // x20
  struct BattleActionData_ShiftServant_o *v8; // x8
  int32_t v9; // w1
  int32_t limit; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w22
  const MethodInfo *v13; // x1
  int32_t LimitCount; // w0

  if ( (byte_40FDAAB & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, voiceId);
    byte_40FDAAB = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v7 = Instance;
  if ( !myShiftData )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
    {
      SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v13);
      if ( v7 )
      {
        limit = LimitCount;
        Instance = v7;
        v9 = SvtId;
        return ServantAssetLoadManager__GetPrefixVoiceId(Instance, v9, limit, voiceId, 0LL);
      }
    }
LABEL_11:
    sub_B170D4();
  }
  v8 = this->fields.myShiftData;
  if ( !v8 || !Instance )
    goto LABEL_11;
  v9 = v8->fields.svtId;
  limit = v8->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId(Instance, v9, limit, voiceId, 0LL);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  BattleActorControl___c__DisplayClass129_0_o *v27; // x21
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
  UnityEngine_GameObject_o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Components_iTween; // x20
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v49; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x20
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  BattleActorControl___c_c *v56; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__129_1; // x21
  Il2CppObject *v59; // x22
  struct BattleActorControl___c_StaticFields *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  BattleActorControl___c_c *v72; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x20
  struct BattleActorControl___c_StaticFields *v74; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__129_2; // x21
  Il2CppObject *v76; // x22
  struct BattleActorControl___c_StaticFields *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct BattleActorControl___c_StaticFields *v84; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__129_3; // x22
  Il2CppObject *v86; // x23
  struct BattleActorControl___c_StaticFields *v87; // x0
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

  if ( (byte_40FDA82 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___, *(_QWORD *)&limitCount);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, v7);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____,
      v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___, v9);
    sub_B16FFC(
      &Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__,
      v10);
    sub_B16FFC(&Method_System_Func_BattleActorAnimationEffect__bool___ctor__, v11);
    sub_B16FFC(&Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__, v12);
    sub_B16FFC(&Method_System_Func_BattleActorAnimationEffect__string___ctor__, v13);
    sub_B16FFC(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo, v14);
    sub_B16FFC(&System_Func_BattleActorAnimationEffect__bool__TypeInfo, v15);
    sub_B16FFC(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v16);
    sub_B16FFC(&System_Func_BattleActorAnimationEffect__string__TypeInfo, v17);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_BattleActorControl___c__InitAnimationEffect_b__129_1__, v20);
    sub_B16FFC(&Method_BattleActorControl___c__InitAnimationEffect_b__129_2__, v21);
    sub_B16FFC(&Method_BattleActorControl___c__InitAnimationEffect_b__129_3__, v22);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass129_0__InitAnimationEffect_b__0__, v23);
    sub_B16FFC(&BattleActorControl___c__DisplayClass129_0_TypeInfo, v24);
    sub_B16FFC(&BattleActorControl___c_TypeInfo, v25);
    sub_B16FFC(&StringLiteral_1/*""*/, v26);
    byte_40FDA82 = 1;
  }
  v27 = (BattleActorControl___c__DisplayClass129_0_o *)sub_B170CC(
                                                         BattleActorControl___c__DisplayClass129_0_TypeInfo,
                                                         *(_QWORD *)&limitCount,
                                                         method,
                                                         v3,
                                                         v4);
  BattleActorControl___c__DisplayClass129_0___ctor(v27, 0LL);
  if ( !v27 )
    goto LABEL_36;
  v27->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.dicTriggerAnimEffects, 0LL, v28, v29, v30, v31, v32, v33);
  v35 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.prevAnimEffectTriggerKey, v35, v36, v37, v38, v39, v40, v41);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v43 = this->fields.actorObject;
    if ( v43 )
    {
      Components_iTween = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_iTween_(
                                                                                 v43,
                                                                                 (const MethodInfo_19D178C *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v49 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_BattleActorAnimationEffect__bool__TypeInfo,
                                                                                 v45,
                                                                                 v46,
                                                                                 v47,
                                                                                 v48);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v49,
        (Il2CppObject *)v27,
        Method_BattleActorControl___c__DisplayClass129_0__InitAnimationEffect_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_BattleActorAnimationEffect__bool___ctor__);
      v50 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              Components_iTween,
              (System_Func_TSource__bool__o *)v49,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v51 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                                   v50,
                                                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v51, 0LL) )
      {
        v56 = BattleActorControl___c_TypeInfo;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v56 = BattleActorControl___c_TypeInfo;
        }
        static_fields = v56->static_fields;
        _9__129_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__129_1;
        if ( !_9__129_1 )
        {
          if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v56);
            static_fields = BattleActorControl___c_TypeInfo->static_fields;
          }
          v59 = (Il2CppObject *)static_fields->__9;
          _9__129_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(System_Func_BattleActorAnimationEffect__string__TypeInfo, v52, v53, v54, v55);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__129_1,
            v59,
            Method_BattleActorControl___c__InitAnimationEffect_b__129_1__,
            (const MethodInfo_2B6C28C *)Method_System_Func_BattleActorAnimationEffect__string___ctor__);
          v60 = BattleActorControl___c_TypeInfo->static_fields;
          v60->__9__129_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__129_1;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v60->__9__129_1,
            (System_Int32_array **)_9__129_1,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
        }
        v67 = System_Linq_Enumerable__GroupBy_object__object_(
                v51,
                (System_Func_TSource__TKey__o *)_9__129_1,
                (const MethodInfo_18D88B8 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v72 = BattleActorControl___c_TypeInfo;
        v73 = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
        if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v72 = BattleActorControl___c_TypeInfo;
        }
        v74 = v72->static_fields;
        _9__129_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v74->__9__129_2;
        if ( !_9__129_2 )
        {
          if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            v74 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v76 = (Il2CppObject *)v74->__9;
          _9__129_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v68, v69, v70, v71);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__129_2,
            v76,
            Method_BattleActorControl___c__InitAnimationEffect_b__129_2__,
            (const MethodInfo_2B6C28C *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___string___ctor__);
          v77 = BattleActorControl___c_TypeInfo->static_fields;
          v77->__9__129_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__129_2;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v77->__9__129_2,
            (System_Int32_array **)_9__129_2,
            v78,
            v79,
            v80,
            v81,
            v82,
            v83);
          v72 = BattleActorControl___c_TypeInfo;
        }
        if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v72);
          v72 = BattleActorControl___c_TypeInfo;
        }
        v84 = v72->static_fields;
        _9__129_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v84->__9__129_3;
        if ( !_9__129_3 )
        {
          if ( (BYTE3(v72->vtable._0_Equals.methodPtr) & 4) != 0 && !v72->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v72);
            v84 = BattleActorControl___c_TypeInfo->static_fields;
          }
          v86 = (Il2CppObject *)v84->__9;
          _9__129_3 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo, v68, v69, v70, v71);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
            _9__129_3,
            v86,
            Method_BattleActorControl___c__InitAnimationEffect_b__129_3__,
            (const MethodInfo_2B6C28C *)Method_System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect_____ctor__);
          v87 = BattleActorControl___c_TypeInfo->static_fields;
          v87->__9__129_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__129_3;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v87->__9__129_3,
            (System_Int32_array **)_9__129_3,
            v88,
            v89,
            v90,
            v91,
            v92,
            v93);
        }
        v94 = (System_Int32_array **)System_Linq_Enumerable__ToDictionary_object__object__object_(
                                       v73,
                                       (System_Func_TSource__TKey__o *)_9__129_2,
                                       (System_Func_TSource__TElement__o *)_9__129_3,
                                       (const MethodInfo_19C4FC4 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (BattleServantConfConponent_c *)v94;
        sub_B16F98(p_dicTriggerAnimEffects, v94, v95, v96, v97, v98, v99, v100);
      }
      return;
    }
LABEL_36:
    sub_B170D4();
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v12; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__185_0; // x20
  Il2CppObject *v15; // x21
  struct BattleActorControl___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_40FDA9C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___, method);
    sub_B16FFC(&Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__, v6);
    sub_B16FFC(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo, v7);
    sub_B16FFC(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__185_0__, v8);
    sub_B16FFC(&BattleActorControl___c_TypeInfo, v9);
    byte_40FDA9C = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v12 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v12 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__185_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__185_0;
  if ( !_9__185_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__185_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__185_0,
      v15,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__185_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleActionData_MoveToSubMember__bool___ctor__);
    v16 = BattleActorControl___c_TypeInfo->static_fields;
    v16->__9__185_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__185_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__185_0,
      (System_Int32_array **)_9__185_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  return System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__185_0,
           (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
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
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x8
  struct BattleServantData_o *battleSvtData; // x8
  int seqIdFromMstTDSeqWeight; // w21
  BattleServantData_o *v10; // x0
  int32_t DispLimitCount; // w0
  System_Collections_Generic_List_int__o *v12; // x0
  System_Collections_Generic_List_int__o *v13; // x0

  if ( (byte_40FDB0F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, entity);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    byte_40FDB0F = 1;
  }
  if ( !entity )
    return 0;
  delayEndSequenceIdListFromMotion_k__BackingField = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !delayEndSequenceIdListFromMotion_k__BackingField
    || !delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
  {
    return 0;
  }
  battleSvtData = this->fields.battleSvtData;
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
      v10 = this->fields.battleSvtData;
      if ( !v10 )
        goto LABEL_18;
      DispLimitCount = BattleServantData__getDispLimitCount(v10, 1, 0LL);
      seqIdFromMstTDSeqWeight = TreasureDvcEntity__getSeqId(entity, DispLimitCount, 0LL);
    }
  }
  v12 = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !v12 )
    goto LABEL_18;
  if ( System_Collections_Generic_List_int___Contains(
         v12,
         -1,
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  v13 = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !v13 )
LABEL_18:
    sub_B170D4();
  return System_Collections_Generic_List_int___Contains(
           v13,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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
  struct BattlePerformance_o *v14; // x8
  UnityEngine_Object_o *data; // x24
  struct BattlePerformance_o *v16; // x9
  struct BattleActionData_o *v17; // x8
  BattleData_o *v18; // x0
  BattleCommandData_o *SelectCommand; // x0
  BattleCommandData_o *v20; // x24
  bool isTreasureDvc; // w0
  struct BattleActionData_o *v22; // x8
  int32_t v23; // w0
  struct BattleActionData_o *v24; // x8
  int32_t v25; // w21
  int v26; // w22
  int32_t i; // w20
  struct BattlePerformance_o *v28; // x8
  BattleData_o *v29; // x0
  BattleCommandData_o *v30; // x0

  if ( (byte_40FDB11 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&expectedType);
    byte_40FDB11 = 1;
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
  if ( UnityEngine_Object__op_Equality(performance, 0LL, 0LL) )
    goto LABEL_4;
  v14 = this->fields.performance;
  if ( !v14 )
    goto LABEL_38;
  data = (UnityEngine_Object_o *)v14->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) )
    goto LABEL_4;
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_38;
  v17 = this->fields.actiondata;
  if ( !v17 )
    goto LABEL_38;
  v18 = v16->fields.data;
  if ( !v18 )
    goto LABEL_38;
  SelectCommand = BattleData__getSelectCommand(v18, v17->fields.actionIndex + targetCardIndexFromNow, 0LL);
  if ( !SelectCommand
    || (v20 = SelectCommand, this->fields.uniqueID != SelectCommand->fields.uniqueId)
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
    isTreasureDvc = BattleCommandData__isTreasureDvc(v20, 0LL);
    LOBYTE(actiondata) = !isTreasureDvc;
    if ( !isTreasureDvc && !allowCutInOtherSvtCard )
    {
LABEL_27:
      if ( UnityEngine_Mathf__Abs_40727336(targetCardIndexFromNow, 0LL) < 2 )
      {
LABEL_37:
        LOBYTE(actiondata) = 1;
        return (unsigned __int8)actiondata & 1;
      }
      v22 = this->fields.actiondata;
      if ( v22 )
      {
        v23 = UnityEngine_Mathf__Min_40727532(
                v22->fields.actionIndex,
                v22->fields.actionIndex + targetCardIndexFromNow,
                0LL);
        v24 = this->fields.actiondata;
        if ( v24 )
        {
          v25 = v23;
          v26 = UnityEngine_Mathf__Max_40727628(
                  v24->fields.actionIndex,
                  v24->fields.actionIndex + targetCardIndexFromNow,
                  0LL)
              - 1;
          for ( i = v25 + 1; i <= v26; ++i )
          {
            v28 = this->fields.performance;
            if ( !v28 )
              goto LABEL_38;
            v29 = v28->fields.data;
            if ( !v29 )
              goto LABEL_38;
            v30 = BattleData__getSelectCommand(v29, i, 0LL);
            if ( !v30 )
              goto LABEL_4;
            LOBYTE(actiondata) = 0;
            if ( this->fields.uniqueID != v30->fields.uniqueId )
              return (unsigned __int8)actiondata & 1;
          }
          goto LABEL_37;
        }
      }
LABEL_38:
      sub_B170D4();
    }
  }
  return (unsigned __int8)actiondata & 1;
}


bool __fastcall BattleActorControl__IsNoTouchSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0

  if ( BattleActorControl__isNoVoice(this, method) )
    return 1;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_8;
  if ( BattleServantData__IsNoSkipDead(battleSvtData, 0LL) )
    return 1;
  performance = this->fields.performance;
  if ( !performance || (data = performance->fields.data) == 0LL )
LABEL_8:
    sub_B170D4();
  return BattleData__IsNoSkipDeadFirst(data, this->fields.battleSvtData, 0LL);
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

  if ( (byte_40FDAA3 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDAA3 = 1;
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
  struct BattlePerformance_o *v4; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v7; // x8
  BattleServantData_o *battleSvtData; // x0
  BattleData_o *v9; // x19
  int32_t SvtId; // w0

  if ( (byte_40FDB10 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDB10 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(performance, 0LL, 0LL) )
    return 0;
  v4 = this->fields.performance;
  if ( !v4 )
    goto LABEL_18;
  data = (UnityEngine_Object_o *)v4->fields.data;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(data, 0LL, 0LL) || this->fields.isEnemy )
    return 0;
  v7 = this->fields.performance;
  if ( !v7
    || (battleSvtData = this->fields.battleSvtData) == 0LL
    || (v9 = v7->fields.data, SvtId = BattleServantData__getSvtId(battleSvtData, 0LL), !v9) )
  {
LABEL_18:
    sub_B170D4();
  }
  return BattleData__IsVoiceOffSvt(v9, SvtId, 0LL);
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
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  _DWORD *m_ParticleSystem; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  _DWORD *v17; // x23
  int v18; // w8
  unsigned int v19; // w27
  _DWORD *v20; // x8
  UnityEngine_ParticleSystem_o *v21; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v24; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-70h] BYREF
  _DWORD *v27; // [xsp+48h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v28; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v29; // 0:x0.8

  if ( (byte_40FDB05 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, isPlay);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v8);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v11);
    byte_40FDB05 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v27 = 0LL;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                   (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)buffLoopEffectDict,
                   (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v25,
    Values,
    (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v26 = v25;
LABEL_24:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v26,
            (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v26.fields.currentValue )
      sub_B170D4();
    m_ParticleSystem = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                         (UnityEngine_GameObject_o *)v26.fields.currentValue,
                         1,
                         (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680);
    v17 = m_ParticleSystem;
    if ( !m_ParticleSystem )
      sub_B170D4();
    v18 = m_ParticleSystem[6];
    if ( v18 >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= v18 )
        {
          sub_B17100(m_ParticleSystem, v15, v16);
          sub_B170A0();
        }
        v20 = &v17[2 * v19];
        v21 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v20 + 4);
        if ( !v21 )
          sub_B170D4();
        m_ParticleSystem = UnityEngine_ParticleSystem__get_main(*((UnityEngine_ParticleSystem_o **)v20 + 4), 0LL).fields.m_ParticleSystem;
        v27 = m_ParticleSystem;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_B170D4();
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_23;
          UnityEngine_ParticleSystem__Play_49805208(v21, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
          if ( !gameObject )
            sub_B170D4();
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v28.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v27;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v28, 0, 0LL);
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
            if ( !v24 )
              sub_B170D4();
            UnityEngine_GameObject__SetActive(v24, 0, 0LL);
            goto LABEL_23;
          }
          UnityEngine_ParticleSystem__Stop_49805596(v21, 0LL);
        }
        v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v27;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v29, !isPlay, 0LL);
LABEL_23:
        v18 = v17[6];
        if ( (int)++v19 >= v18 )
          goto LABEL_24;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___Dispose(
    &v26,
    (const MethodInfo_27297E8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_40FDB09 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_13395/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, isPlay);
    byte_40FDB09 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13395/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_B170D4();
    BattlePerformance__AllLoopEffectSwitch(performance, isPlay, 1, 0LL);
  }
  else
  {
    BattleActorControl__LoopEffectParticleSwitch(this, isPlay, 1, v5);
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *parent; // x0
  System_String_o *name; // x23
  UnityEngine_Object_o *v19; // x0
  System_String_o *v20; // x1
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  UnityEngine_Transform_o *v25; // x21
  UnityEngine_Transform_o *v26; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v29; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40FDB0A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40FDB0A = 1;
  }
  memset(&v29, 0, sizeof(v29));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)buffLoopEffectDict,
    (const MethodInfo_2DE99A0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v29 = v28;
  v13 = 0LL;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___MoveNext(
            &v29,
            (const MethodInfo_272863C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v29.fields.current.fields.key;
    value = v29.fields.current.fields.value;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL) )
    {
      if ( !value )
        sub_B170D4();
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_B170D4();
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_B170D4();
      name = UnityEngine_Object__get_name(parent, 0LL);
      v19 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v19 )
        sub_B170D4();
      v20 = UnityEngine_Object__get_name(v19, 0LL);
      if ( !name )
        sub_B170D4();
      if ( !System_String__Equals_43731072(name, v20, 0LL) )
      {
        if ( !v13 )
        {
          v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                            System_Collections_Generic_List_int__TypeInfo,
                                                            v21,
                                                            v22,
                                                            v23,
                                                            v24);
          System_Collections_Generic_List_int____ctor(
            v13,
            (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v13 )
            sub_B170D4();
        }
        System_Collections_Generic_List_int___Add(
          v13,
          key,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v26 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v25 )
          sub_B170D4();
        UnityEngine_Transform__set_parent(v25, v26, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__WarBoardEvalValueSquare_CalcEval___Dispose(
    &v29,
    (const MethodInfo_27287A8 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
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
  struct BattleServantData_o *battleSvtData; // x8
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x21
  WebViewManager_o *v22; // x0
  WarQuestSelectionMaster_o *v23; // x0
  StatusEffectPosOverwriteMaster_o *v24; // x22
  WarEntity_o *v25; // x0
  WarEntity_o *v26; // x23
  int32_t coordinate; // w1
  BattleServantData_o *v28; // x0
  int32_t v29; // w24
  int32_t ActorSvtId; // w25
  const MethodInfo *v31; // x1
  int32_t LimitCount; // w0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  UnityEngine_GameObject_o *Item; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v36; // x23
  UnityEngine_Object_o *parent; // x0
  System_String_o *name; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_Transform_o *v40; // x0
  const MethodInfo *v41; // x1
  System_String_o *nodeName; // x25
  UnityEngine_Transform_o *v43; // x24
  int32_t v44; // w2
  UnityEngine_Transform_o *NodeFromLvName; // x24
  float v46; // s0
  float v47; // s1
  float v48; // s2
  struct BattleServantData_o *v49; // x8
  float v50; // s8
  float v51; // s9
  float v52; // s10
  struct BattleServantData_o *v53; // x8
  System_Collections_Generic_List_Enumerator_T__o v54; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+20h] [xbp-90h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o identity; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDB0B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, movedEffect);
    sub_B16FFC(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_40FDB0B = 1;
  }
  memset(&v55, 0, sizeof(v55));
  entity = 0LL;
  if ( movedEffect )
  {
    actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) && movedEffect->fields._size >= 1 )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (buffData = battleSvtData->fields.buffData) == 0LL
        || (EffectBuffList = BattleBuffData__GetEffectBuffList(buffData, 0LL),
            (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                                  (DataManager_o *)Instance,
                                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___),
            (v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (v23 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)v22,
                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_B170D4();
      }
      v24 = (StatusEffectPosOverwriteMaster_o *)v23;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v54,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EffectBuffList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v55 = v54;
      while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v55,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
      {
        if ( !v55.fields.current )
          sub_B170D4();
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B170D4();
        v25 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                MasterData_WarQuestSelectionMaster,
                (int32_t)v55.fields.current[1].klass,
                (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v26 = v25;
        if ( v25 )
        {
          coordinate = (int32_t)v25->fields.coordinate;
          if ( coordinate >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 coordinate,
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v28 = this->fields.battleSvtData;
            if ( !v28 )
              sub_B170D4();
            v29 = (int32_t)v26->fields.coordinate;
            ActorSvtId = BattleServantData__getActorSvtId(v28, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v31);
            if ( !v24 )
              sub_B170D4();
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v24, &entity, v29, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_B170D4();
              Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)buffLoopEffectDict,
                                                   (int32_t)v26->fields.coordinate,
                                                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_B170D4();
              transform = UnityEngine_GameObject__get_transform(Item, 0LL);
              v36 = transform;
              if ( !transform )
                sub_B170D4();
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_B170D4();
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_B170D4();
              if ( !name )
                sub_B170D4();
              if ( !System_String__Equals_43731072(name, entity->fields.nodeName, 0LL) )
              {
                zero = UnityEngine_Vector3__get_zero(0LL);
                UnityEngine_Transform__set_localPosition(v36, zero, 0LL);
                identity = UnityEngine_Quaternion__get_identity(0LL);
                UnityEngine_Transform__set_localRotation(v36, identity, 0LL);
                v39 = this->fields.actorObject;
                if ( !v39 )
                  sub_B170D4();
                v40 = UnityEngine_GameObject__get_transform(v39, 0LL);
                if ( !entity )
                  sub_B170D4();
                nodeName = entity->fields.nodeName;
                v43 = v40;
                v44 = BattleActorControl__getLimitCount(this, v41);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v43, nodeName, v44, 1, 0LL);
                *(UnityEngine_Vector3_o *)&v46 = UnityEngine_Vector3__get_zero(0LL);
                v49 = this->fields.battleSvtData;
                if ( !v49 )
                  sub_B170D4();
                if ( !entity )
                  sub_B170D4();
                v50 = v46;
                v51 = v47;
                v52 = v48;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v49->fields.isEnemy, 0LL);
                Offset.fields.x = v50 + Offset.fields.x;
                Offset.fields.y = v51 + Offset.fields.y;
                Offset.fields.z = v52 + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v36, Offset, 0LL);
                if ( !entity )
                  sub_B170D4();
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                v63 = UnityEngine_Quaternion__Euler_34841604(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v36, v63, 0LL);
                if ( !entity )
                  sub_B170D4();
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v36, Scale, 0LL);
                UnityEngine_Transform__set_parent(v36, NodeFromLvName, 0LL);
                v53 = this->fields.battleSvtData;
                if ( !v53 )
                  sub_B170D4();
                if ( v53->fields.isEnemy )
                {
                  localScale = UnityEngine_Transform__get_localScale(v36, 0LL);
                  localScale.fields.x = -localScale.fields.x;
                  UnityEngine_Transform__set_localScale(v36, localScale, 0LL);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v55,
        (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void __fastcall BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v10; // x21

  if ( (byte_40FDAE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_SkipDead__, method);
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_40FDAE1 = 1;
  }
  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v10 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B170CC(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v4,
                                                                  v5,
                                                                  v6,
                                                                  v7),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B170D4();
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v10, 0LL);
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
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_MeshCollider_o *Component_srcLineSprite; // x20
  BattlePerformance_o *performance; // x0
  const MethodInfo *v20; // x1
  struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *extraLoadedVoiceArgsList; // x0
  BattleServantConfConponent_o *p_extraLoadedVoiceArgsList; // x19
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FDA7B & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__,
      v9);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__,
      v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__, v12);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v13);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v14);
    byte_40FDA7B = 1;
  }
  memset(&v32, 0, sizeof(v32));
  this->fields.rendererArrayList = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.rendererArrayList, 0LL, v2, v3, v4, v5, v6, v7);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
  {
    v17 = this->fields.actorObject;
    if ( !v17 )
      goto LABEL_25;
    Component_srcLineSprite = (UnityEngine_MeshCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v17,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      performance = this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider(performance, Component_srcLineSprite, 0LL);
        goto LABEL_14;
      }
LABEL_25:
      sub_B170D4();
    }
  }
LABEL_14:
  BattleActorControl__DestroyAllLoopEffect(this, v16);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v20);
  extraLoadedVoiceArgsList = this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (BattleServantConfConponent_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v32,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)extraLoadedVoiceArgsList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v32,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__) )
    {
      if ( !v32.fields.current )
        sub_B170D4();
      klass = (int32_t)v32.fields.current[1].klass;
      klass_high = HIDWORD(v32.fields.current[1].klass);
      monitor = (int32_t)v32.fields.current[1].monitor;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v32,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_B16F98(p_extraLoadedVoiceArgsList, 0LL, v26, v27, v28, v29, v30, v31);
  }
}


void __fastcall BattleActorControl__OnEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleFBXComponent_o *fbxcomponent; // x8
  struct System_Collections_Hashtable_o *EventList; // x0
  const MethodInfo *v8; // x3
  struct System_Collections_Hashtable_o *v9; // x0
  BattleActorControl_EventClass_o *v10; // x0
  __int64 v11; // x9
  struct System_Collections_Hashtable_o *v12; // x0
  BattleActorControl_o *v13; // x0
  System_String_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_40FDAAE & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, name);
    byte_40FDAAE = 1;
  }
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_13;
  BattleActorControl__DisplayAnimationEffect(this, fbxcomponent->fields.currentCommonAnimName, name, v3);
  EventList = this->fields.EventList;
  if ( !EventList )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._27_ContainsKey.method)(
          EventList,
          name,
          EventList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_12:
    BattleActorControl__sendEventFSM_32017324(this, name, 0, v8);
    return;
  }
  v9 = this->fields.EventList;
  if ( !v9
    || (v10 = (BattleActorControl_EventClass_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._29_get_Item.method)(
                                                   v9,
                                                   name,
                                                   v9->klass->vtable._30_set_Item.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_B170D4();
  }
  v11 = *(&BattleActorControl_EventClass_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v10->klass->_2.bitflags2 + 1) >= (unsigned int)v11
    && (BattleActorControl_EventClass_c *)v10->klass->_2.typeHierarchy[v11 - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v10, 0LL);
    v12 = this->fields.EventList;
    if ( v12 )
    {
      ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v12->klass->vtable._39_Remove.method)(
        v12,
        name,
        v12->klass->vtable._40_get_SyncRoot.methodPtr);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  v13 = (BattleActorControl_o *)sub_B173C8(v10);
  BattleActorControl__Complete(v13, v14, v15);
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

  if ( (byte_40FDAB7 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDAB7 = 1;
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
    UnityEngine_Object__Destroy_34809464(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_B16F98(p_particleDisconnectorObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  BattlePerformance_o *performance; // x0
  WebViewManager_o *Instance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  WebViewManager_o *v9; // x0
  BattleSequenceManager_o *v10; // x20
  TreasureDvcEntity_o *TreasureDevice; // x0
  System_Int32_array *RelatedBgms; // x0
  struct BattleServantData_o *v13; // x0
  WebViewManager_o *v14; // x0
  WebViewManager_o *v15; // x20
  System_Int32_array **OverrideTDVoice; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  TreasureDvcEntity_o *v23; // x0
  TreasureDvcEntity_o *v24; // x20
  int32_t DispLimitCount; // w0
  System_Int32_array *FixAppearanceInfoArray; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  int v31; // w8
  struct BattleServantData_o *v32; // x10
  int32_t v33; // w9
  struct BattleServantData_o *v34; // x8
  struct BattleServantData_o *v35; // x8
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *v38; // x0

  if ( (byte_40FDAC9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, obj);
    sub_B16FFC(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__257_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_40FDAC9 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_25;
  BattlePerformance__startNoblePhantasm(performance, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_25;
  if ( !Instance )
    goto LABEL_25;
  BattleSequenceManager__setup((BattleSequenceManager_o *)Instance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  v9 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v10 = (BattleSequenceManager_o *)v9;
  TreasureDevice = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !TreasureDevice )
    goto LABEL_25;
  RelatedBgms = TreasureDvcEntity__getRelatedBgms(TreasureDevice, 0LL);
  if ( !v10 )
    goto LABEL_25;
  BattleSequenceManager__SetIntactBgms(v10, RelatedBgms, 0LL);
  v13 = this->fields.battleSvtData;
  if ( !v13 )
    goto LABEL_25;
  if ( v13->fields.isEnemy )
  {
    v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_25;
    v15 = v14;
    OverrideTDVoice = (System_Int32_array **)BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v15 )
      goto LABEL_25;
    v15[2].fields.webViewScreen = (struct UIWidget_o *)OverrideTDVoice;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15[2].fields.webViewScreen,
      OverrideTDVoice,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v13 = this->fields.battleSvtData;
    if ( !v13 )
      goto LABEL_25;
  }
  v23 = BattleServantData__get_TreasureDevice(v13, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_25;
  v24 = v23;
  DispLimitCount = BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v24 )
    goto LABEL_25;
  FixAppearanceInfoArray = TreasureDvcEntity__getFixAppearanceInfoArray(v24, DispLimitCount, 0LL);
  if ( !FixAppearanceInfoArray )
    goto LABEL_23;
  if ( FixAppearanceInfoArray->max_length < 2 )
  {
    sub_B17100(FixAppearanceInfoArray, v27, v28);
    sub_B170A0();
  }
  v31 = FixAppearanceInfoArray->m_Items[1];
  if ( v31 < 1 )
  {
LABEL_23:
    v38 = BattleActorControl__WaitToNoblePhantasmPlay(this, v27);
    goto LABEL_24;
  }
  v32 = this->fields.battleSvtData;
  if ( !v32
    || (v33 = FixAppearanceInfoArray->m_Items[2],
        v32->fields.tmpAppearanceId = v31,
        (v34 = this->fields.battleSvtData) == 0LL)
    || (v34->fields.dressDispId = v33, (v35 = this->fields.battleSvtData) == 0LL) )
  {
LABEL_25:
    sub_B170D4();
  }
  v35->fields.isForceAppearance = 1;
  v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
  System_Action___ctor(
    v36,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__257_0__,
    0LL);
  v38 = BattleActorControl__waitChangeApp(this, v36, v37);
LABEL_24:
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v38, 0LL);
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
  WebViewManager_o *Instance; // x0
  struct BattleServantData_o *v13; // x0
  BattleServantData_o *v14; // x0
  BattlePerformance_o *performance; // x0
  WebViewManager_o *v16; // x0
  WebViewManager_o *v17; // x0
  ServantAssetLoadManager_o *v18; // x0
  AssetManager_o *v19; // x0
  BattleServantData_o *v20; // x0
  BattlePerformance_o *v21; // x20
  TreasureDvcEntity_o *TreasureDevice; // x0
  struct BattlePerformance_o *v23; // x8
  BattlePerformanceBg_o *bgPerf; // x0
  BattlePerformance_o *v25; // x0
  BattleFBXComponent_o *fbxcomponent; // x0
  BattlePerformance_o *v27; // x0
  BattlePerformance_o *v28; // x0
  struct BattlePerformance_o *v29; // x8
  BattlePerformanceCommandCard_o *commandPerf; // x0
  const MethodInfo *v31; // x1
  struct BattlePerformance_o *v32; // x8
  BattleLogic_o *logic; // x0
  const MethodInfo *v34; // x2
  BattlePerformance_o *v35; // x0
  BattleServantData_o *v36; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Action_o *v41; // x20
  const MethodInfo *v42; // x2
  System_Collections_IEnumerator_o *v43; // x0
  BattlePerformance_o *v44; // x0
  const MethodInfo *v45; // x3
  BattleFBXComponent_c *v46; // x0
  System_Action_o *noblePhantasmCallback; // x0
  struct BattleServantData_o *v48; // x8
  struct BattlePerformance_o *v49; // x8
  BattleData_o *data; // x0
  StageEntity_o *StageEntity; // x0
  const MethodInfo *v52; // x2
  const MethodInfo *v53; // x2

  if ( (byte_40FDACB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, seq);
    sub_B16FFC(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__259_0__, v4);
    sub_B16FFC(&BattleFBXComponent_TypeInfo, v5);
    sub_B16FFC(&System_GC_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_6333/*"FINISHED"*/, v10);
    byte_40FDACB = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_46;
  ((void (__fastcall *)(struct BattleServantData_o *, WebViewManager_o *, BattleActorControl_o *, struct BattlePerformance_o *, void *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass[1]._1.image);
  v13 = this->fields.battleSvtData;
  if ( !v13 )
    goto LABEL_46;
  BattleServantData__changeNp(v13, v13->fields.tmpNp + v13->fields.np, 0, 0LL);
  v14 = this->fields.battleSvtData;
  if ( !v14 )
    goto LABEL_46;
  BattleServantData__updateNpGauge(v14, 0LL);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_46;
  BattlePerformance__setupCameraFov(performance, this->fields.backupFov, 0LL);
  v16 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v16 )
    goto LABEL_46;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)v16, 0LL);
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v17 )
    goto LABEL_46;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)v17, 0LL);
  v18 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v18 )
    goto LABEL_46;
  ServantAssetLoadManager__releaseNoblePhantasm(v18, 0LL);
  v19 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !v19 )
    goto LABEL_46;
  AssetManager__RequestUnloadUnusedAssets(v19, 0LL, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_42843716(0LL);
  v20 = this->fields.battleSvtData;
  if ( !v20 )
    goto LABEL_46;
  v21 = this->fields.performance;
  TreasureDevice = BattleServantData__get_TreasureDevice(v20, 0LL);
  if ( !TreasureDevice )
    goto LABEL_46;
  if ( !v21 )
    goto LABEL_46;
  BattlePerformance__endNoblePhantasm(v21, TreasureDevice->fields.id, 0LL);
  v23 = this->fields.performance;
  if ( !v23 )
    goto LABEL_46;
  bgPerf = v23->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_46;
  BattlePerformanceBg__setCutNodeNoble(bgPerf, 0, 0LL);
  v25 = this->fields.performance;
  if ( !v25 )
    goto LABEL_46;
  BattlePerformance__setDamageTargetVoiceFlg(v25, 0, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_46;
  BattleFBXComponent__changeActiveEffect(fbxcomponent, 1, 0LL);
  v27 = this->fields.performance;
  if ( !v27 )
    goto LABEL_46;
  BattlePerformance__changeShadowType(v27, 0, 0LL);
  v28 = this->fields.performance;
  if ( !v28 )
    goto LABEL_46;
  BattlePerformance__UpdateAllShadow(v28, 0LL);
  v29 = this->fields.performance;
  if ( !v29 )
    goto LABEL_46;
  commandPerf = v29->fields.commandPerf;
  if ( !commandPerf )
    goto LABEL_46;
  BattlePerformanceCommandCard__SetCommandCardEffectActive(commandPerf, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v31);
  v32 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v32 )
    goto LABEL_46;
  logic = v32->fields.logic;
  if ( !logic )
    goto LABEL_46;
  BattleLogic__ChangePhase(logic, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v34);
  v35 = this->fields.performance;
  if ( !v35 )
    goto LABEL_46;
  BattlePerformance__AllServantClassIconEffectStartStop(v35, 1, 0LL);
  v36 = this->fields.battleSvtData;
  if ( !v36 )
    goto LABEL_46;
  if ( !BattleServantData__IsTDAppearance(v36, 0LL) )
  {
    v44 = this->fields.performance;
    if ( !v44 )
      goto LABEL_46;
    BattlePerformance__noblePhantasmWhiteInFade(v44, 0.2, 0.3, 0LL);
    if ( !this->fields.noblePhantasmCallback )
    {
      BattleActorControl__sendEventFSM_32017324(this, (System_String_o *)StringLiteral_6333/*"FINISHED"*/, 0, v45);
      goto LABEL_39;
    }
    v46 = BattleFBXComponent_TypeInfo;
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
      v46 = BattleFBXComponent_TypeInfo;
    }
    v46->static_fields->EnableEvent = 1;
    noblePhantasmCallback = this->fields.noblePhantasmCallback;
    if ( noblePhantasmCallback )
    {
      System_Action__Invoke(noblePhantasmCallback, 0LL);
      goto LABEL_39;
    }
LABEL_46:
    sub_B170D4();
  }
  v41 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v37, v38, v39, v40);
  System_Action___ctor(
    v41,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__259_0__,
    0LL);
  v43 = BattleActorControl__waitChangeApp(this, v41, v42);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v43, 0LL);
LABEL_39:
  v48 = this->fields.battleSvtData;
  if ( !v48 )
    goto LABEL_46;
  ++v48->fields.playedNPCount;
  v49 = this->fields.performance;
  if ( !v49 )
    goto LABEL_46;
  data = v49->fields.data;
  if ( !data )
    goto LABEL_46;
  StageEntity = BattleData__getStageEntity(data, 0LL);
  if ( !StageEntity )
    goto LABEL_46;
  if ( StageEntity__Is3_6BossBattle(StageEntity, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v52);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v53);
  }
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v10; // x21

  if ( (byte_40FDAE0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_SkipDead__, method);
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_40FDAE0 = 1;
  }
  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v10 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B170CC(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v4,
                                                                  v5,
                                                                  v6,
                                                                  v7),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_B170D4();
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v10, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  changeVColor_array *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x8
  changeVColor_array *v11; // x20
  unsigned __int64 v12; // x22
  changeVColor_o **m_Items; // x23
  System_Collections_Generic_List_WarBoardManager_TaskList__o *rendererArrayList; // x0
  WarBoardManager_TaskList_o *v15; // x21
  System_Collections_Generic_List_WarBoardManager_TaskList__o *v16; // x0

  if ( (byte_40FDADC & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__, v6);
    byte_40FDADC = 1;
  }
  if ( !obj )
    goto LABEL_14;
  v7 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
         obj,
         (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !v7 )
    goto LABEL_14;
  v10 = *(_QWORD *)&v7->max_length;
  v11 = v7;
  if ( (int)v10 >= 1 )
  {
    v12 = 0LL;
    m_Items = v7->m_Items;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)v10 )
      {
        sub_B17100(v7, v8, v9);
        sub_B170A0();
      }
      rendererArrayList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.rendererArrayList;
      if ( !rendererArrayList )
        break;
      v15 = (WarBoardManager_TaskList_o *)m_Items[v12];
      v7 = (changeVColor_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                   rendererArrayList,
                                   v15,
                                   (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)v7 & 1) != 0 )
      {
        v16 = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.rendererArrayList;
        if ( !v16 )
          break;
        v7 = (changeVColor_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                                     v16,
                                     v15,
                                     (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(v10) = v11->max_length;
      if ( (__int64)++v12 >= (int)v10 )
        return;
    }
LABEL_14:
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B16F98(p_overwriteAnim, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall BattleActorControl__RevertDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  BattleFBXComponent_o *v4; // x0

  if ( (byte_40FDAFE & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDAFE = 1;
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
      v4 = this->fields.fbxcomponent;
      if ( !v4 )
        sub_B170D4();
      BattleFBXComponent__RevertDefaultAnimation(v4, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleActorControl___c__DisplayClass278_0_o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v18; // x22

  if ( (byte_40FDADB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Material___ctor__, method);
    sub_B16FFC(&System_Action_Material__TypeInfo, v8);
    sub_B16FFC(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___, v9);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass278_0__SetActorAlpha_b__0__, v10);
    sub_B16FFC(&BattleActorControl___c__DisplayClass278_0_TypeInfo, v11);
    byte_40FDADB = 1;
  }
  v12 = (BattleActorControl___c__DisplayClass278_0_o *)sub_B170CC(
                                                         BattleActorControl___c__DisplayClass278_0_TypeInfo,
                                                         method,
                                                         v3,
                                                         v4,
                                                         v5);
  BattleActorControl___c__DisplayClass278_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v18 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_Material__TypeInfo,
                                                                               v13,
                                                                               v14,
                                                                               v15,
                                                                               v16);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_BattleActorControl___c__DisplayClass278_0__SetActorAlpha_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_Material___ctor__);
  BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v18,
    (const MethodInfo_18B920C *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
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
  UnityEngine_Material_array *materials; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Material_array *v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  UnityEngine_Object_o *v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_40FDADA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v12);
    byte_40FDADA = 1;
  }
  memset(&v23, 0, sizeof(v23));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v23.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v18 = materials;
        if ( !materials )
          sub_B170D4();
        v19 = *(_QWORD *)&materials->max_length;
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          do
          {
            if ( v20 >= (unsigned int)v19 )
            {
              sub_B17100(materials, v16, v17);
              sub_B170A0();
            }
            v21 = (UnityEngine_Object_o *)v18->m_Items[v20];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v21 )
                sub_B170D4();
              v24.fields.r = r;
              v24.fields.g = g;
              v24.fields.b = b;
              v24.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v21,
                (System_String_o *)StringLiteral_15853/*"_AddColor"*/,
                v24,
                0LL);
            }
            LODWORD(v19) = v18->max_length;
            ++v20;
          }
          while ( (__int64)v20 < (int)v19 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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

  if ( (byte_40FDAF8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___, *(_QWORD *)&gId);
    byte_40FDAF8 = 1;
  }
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_WebViewObject )
    sub_B170D4();
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

  v6 = this;
  if ( (byte_40FDACE & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, isShadow);
    this = (BattleActorControl_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FDACE = 1;
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
      UnityEngine_Object__Destroy_34809464(v13, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v10 >= LODWORD(klass->_1.namespaze) )
        {
LABEL_19:
          sub_B17100(this, isShadow, isChoco);
          sub_B170A0();
        }
        *(void **)((char *)&klass->_1.image + v11) = 0LL;
        sub_B16F98(
          (BattleServantConfConponent_o *)((char *)klass + v11),
          0LL,
          (System_String_array **)isChoco,
          v14,
          v15,
          v16,
          v17,
          v18);
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
    sub_B170D4();
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
  sub_B16F98(p_shadowEffectObject, v23, v24, v25, v26, v27, v28, v29);
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
  UnityEngine_Material_array *materials; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Material_array *v18; // x19
  __int64 v19; // x8
  unsigned __int64 v20; // x24
  UnityEngine_Object_o *v21; // x20
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_40FDAD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v12);
    byte_40FDAD9 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)rendererArrayList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v23 = v22;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v23.fields.current;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !current )
          sub_B170D4();
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v18 = materials;
        if ( !materials )
          sub_B170D4();
        v19 = *(_QWORD *)&materials->max_length;
        if ( (int)v19 >= 1 )
        {
          v20 = 0LL;
          do
          {
            if ( v20 >= (unsigned int)v19 )
            {
              sub_B17100(materials, v16, v17);
              sub_B170A0();
            }
            v21 = (UnityEngine_Object_o *)v18->m_Items[v20];
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v21 )
                sub_B170D4();
              v24.fields.r = r;
              v24.fields.g = g;
              v24.fields.b = b;
              v24.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v21,
                (System_String_o *)StringLiteral_15891/*"_Color"*/,
                v24,
                0LL);
            }
            LODWORD(v19) = v18->max_length;
            ++v20;
          }
          while ( (__int64)v20 < (int)v19 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  UnityEngine_GameObject_o *gameObject; // x0
  void *materials; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int v23; // w8
  _DWORD *v24; // x19
  unsigned int v25; // w22
  float v26; // s8
  float v27; // s9
  float v28; // s10
  float v29; // s12
  char *v30; // x8
  UnityEngine_Renderer_o *v31; // x20
  UnityEngine_Material_o *material; // x0
  float v33; // s4
  float v34; // s5
  float v35; // s6
  float v36; // s7
  float v37; // s4
  float v38; // s5
  float v39; // s6
  float v40; // s7
  __int64 v41; // x8
  _QWORD *v42; // x20
  unsigned __int64 v43; // x26
  UnityEngine_Object_o *v44; // x21
  UnityEngine_Color_o v45; // [xsp+0h] [xbp-90h] BYREF
  MethodInfo methoda; // [xsp+10h] [xbp-80h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_40FDAD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v10);
    sub_B16FFC(&StringLiteral_15853/*"_AddColor"*/, v11);
    byte_40FDAD6 = 1;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  *(_QWORD *)&v45.fields.r = 0LL;
  *(_QWORD *)&v45.fields.b = 0LL;
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (materials = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                      gameObject,
                      (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_31:
    sub_B170D4();
  }
  v23 = *((_DWORD *)materials + 6);
  v24 = materials;
  if ( v23 >= 1 )
  {
    v25 = 0;
    v26 = r * alpha;
    v27 = g * alpha;
    v28 = b * alpha;
    v29 = 1.0 - alpha;
    while ( 1 )
    {
      if ( v25 >= v23 )
        goto LABEL_30;
      v30 = (char *)&v24[2 * v25];
      v31 = (UnityEngine_Renderer_o *)*((_QWORD *)v30 + 4);
      if ( !v31 )
        goto LABEL_31;
      material = UnityEngine_Renderer__get_material(*((UnityEngine_Renderer_o **)v30 + 4), 0LL);
      if ( !material )
        goto LABEL_31;
      color = UnityEngine_Material__get_color(material, 0LL);
      methoda.methodPointer = *(Il2CppMethodPointer *)&color.fields.r;
      methoda.invoker_method = *(void **)&color.fields.b;
      color.fields.r = v29 * color.fields.r;
      color.fields.g = v29 * color.fields.g;
      color.fields.b = v29 * color.fields.b;
      color.fields.a = 1.0;
      UnityEngine_Color___ctor(color, v33, v34, v35, v36, &methoda);
      v48.fields.a = 0.0;
      v48.fields.r = v26;
      v48.fields.g = v27;
      v48.fields.b = v28;
      UnityEngine_Color___ctor(v48, v37, v38, v39, v40, (const MethodInfo *)&v45);
      materials = UnityEngine_Renderer__get_materials(v31, 0LL);
      if ( !materials )
        goto LABEL_31;
      v41 = *((_QWORD *)materials + 3);
      v42 = materials;
      if ( (int)v41 >= 1 )
        break;
LABEL_28:
      v23 = v24[6];
      if ( (int)++v25 >= v23 )
        return;
    }
    v43 = 0LL;
    while ( v43 < (unsigned int)v41 )
    {
      v44 = (UnityEngine_Object_o *)v42[v43 + 4];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      materials = (void *)UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
        if ( !v44 )
          goto LABEL_31;
        *(_QWORD *)&v49.fields.b = methoda.invoker_method;
        *(_QWORD *)&v49.fields.r = methoda.methodPointer;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v44, (System_String_o *)StringLiteral_15891/*"_Color"*/, v49, 0LL);
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v44, (System_String_o *)StringLiteral_15853/*"_AddColor"*/, v45, 0LL);
      }
      LODWORD(v41) = *((_DWORD *)v42 + 6);
      if ( (__int64)++v43 >= (int)v41 )
        goto LABEL_28;
    }
LABEL_30:
    sub_B17100(materials, v21, v22);
    sub_B170A0();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  unsigned int *materials; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  unsigned int *v10; // x19
  unsigned int v11; // w22
  unsigned int *v12; // x8
  UnityEngine_Renderer_o *v13; // x20
  unsigned __int64 v14; // x25
  UnityEngine_Material_o *v15; // x21
  int v16; // s0

  if ( (byte_40FDAD5 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v4);
    byte_40FDAD5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  materials = (unsigned int *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                gameObject,
                                (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !materials )
    goto LABEL_24;
  v9 = materials[6];
  v10 = materials;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
      {
LABEL_25:
        sub_B17100(materials, v7, v8);
        sub_B170A0();
      }
      v12 = &v10[2 * v11];
      v13 = (UnityEngine_Renderer_o *)*((_QWORD *)v12 + 4);
      if ( !v13 )
        break;
      materials = (unsigned int *)UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v12 + 4), 0LL);
      if ( !materials )
        break;
      v14 = 0LL;
      while ( (__int64)v14 < (int)materials[6] )
      {
        materials = (unsigned int *)UnityEngine_Renderer__get_materials(v13, 0LL);
        if ( !materials )
          goto LABEL_24;
        if ( v14 >= materials[6] )
          goto LABEL_25;
        v15 = *(UnityEngine_Material_o **)&materials[2 * v14 + 8];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL) )
        {
          *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
          if ( !v15 )
            goto LABEL_24;
          UnityEngine_Material__SetColor(v15, (System_String_o *)StringLiteral_15891/*"_Color"*/, *(UnityEngine_Color_o *)&v16, 0LL);
        }
        ++v14;
        materials = (unsigned int *)UnityEngine_Renderer__get_materials(v13, 0LL);
        if ( !materials )
          goto LABEL_24;
      }
      v9 = v10[6];
      if ( (int)++v11 >= v9 )
        return;
    }
LABEL_24:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v6; // x1
  bool IsHideShadow; // w0
  UnityEngine_Component_o *v8; // x8
  bool v9; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  bool v11; // w1

  if ( (byte_40FDB0D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, active);
    byte_40FDB0D = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = BattleActorControl__IsHideShadow(this, v6);
    v8 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v8 || (v9 = IsHideShadow, (gameObject = UnityEngine_Component__get_gameObject(v8, 0LL)) == 0LL) )
      sub_B170D4();
    v11 = !v9 && active;
    UnityEngine_GameObject__SetActive(gameObject, v11, 0LL);
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
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_MaterialPropertyBlock_o *mpb; // x0
  UnityEngine_MaterialPropertyBlock_o *v15; // x0
  UnityEngine_MaterialPropertyBlock_o *v16; // x0
  UnityEngine_Component_o *v17; // x0
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o clear; // 0:s4.4,4:s5.4,8:s6.4,12:s7.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_40FDAD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v9);
    sub_B16FFC(&StringLiteral_15950/*"_MainTex"*/, v10);
    byte_40FDAD3 = 1;
  }
  if ( !BattleActorControl__IsHideShadow(this, method) )
  {
    clear = UnityEngine_Color__get_clear(0LL);
    v19.fields.r = r;
    v19.fields.g = g;
    v19.fields.b = b;
    v19.fields.a = a;
    if ( UnityEngine_Color__op_Equality(v19, clear, 0LL) )
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
      mpb = this->fields.mpb;
      if ( mpb )
      {
        UnityEngine_MaterialPropertyBlock__Clear_40725676(mpb, 0LL);
        v15 = this->fields.mpb;
        if ( v15 )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            v15,
            (System_String_o *)StringLiteral_15950/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          v16 = this->fields.mpb;
          if ( v16 )
          {
            v21.fields.r = r;
            v21.fields.g = g;
            v21.fields.b = b;
            v21.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(v16, (System_String_o *)StringLiteral_15891/*"_Color"*/, v21, 0LL);
            v17 = (UnityEngine_Component_o *)this->fields.shadowObj;
            this->fields.currentShadowColor.fields.r = r;
            this->fields.currentShadowColor.fields.g = g;
            this->fields.currentShadowColor.fields.b = b;
            this->fields.currentShadowColor.fields.a = a;
            if ( v17 )
            {
              Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                    v17,
                                                                    (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( Component_WebViewObject )
              {
                UnityEngine_Renderer__SetPropertyBlock(Component_WebViewObject, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_19:
      sub_B170D4();
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetShadowSize(
        BattleActorControl_o *this,
        int32_t btlSize,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActorControl_c *v15; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x21
  __int64 v17; // x2
  UnityEngine_Transform_o *v18; // x0
  __int64 v19; // x1
  int klass; // w8
  UnityEngine_Transform_o *v21; // x2
  __int64 v22; // x2
  int v23; // w8
  __int64 v24; // x2
  int v25; // w8
  __int64 v26; // x2
  int v27; // w8
  __int64 v28; // x2
  int v29; // w8
  __int64 v30; // x2
  int v31; // w8
  __int64 v32; // x2
  int v33; // w8
  __int64 v34; // x2
  int v35; // w8
  __int64 v36; // x2
  int v37; // w8
  __int64 v38; // x2
  int v39; // w8
  __int64 v40; // x2
  int v41; // w8
  __int64 v42; // x2
  int v43; // w8
  __int64 v44; // x2
  int v45; // w8
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattleActorControl_c *v52; // x0
  BattleServantConfConponent_o *static_fields; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BattleActorControl_c *v59; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v60; // x21
  __int64 v61; // x2
  int v62; // w8
  __int64 v63; // x2
  int v64; // w8
  __int64 v65; // x2
  int v66; // w8
  __int64 v67; // x2
  int v68; // w8
  __int64 v74; // x2
  int v75; // w8
  __int64 v76; // x2
  int v77; // w8
  __int64 v79; // x2
  int v80; // w8
  __int64 v82; // x2
  int v83; // w8
  __int64 v85; // x2
  int v86; // w8
  __int64 v87; // x2
  int v88; // w8
  __int64 v90; // x2
  int v91; // w8
  __int64 v92; // x2
  int v93; // w8
  __int64 v94; // x2
  int v95; // w8
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  BattleActorControl_c *v102; // x0
  struct BattleActorControl_StaticFields *v103; // x0
  BattleActorControl_c *v104; // x0
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *ShadowTransform; // x0
  BattleActorControl_c *v106; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v107; // x0
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  UnityEngine_Component_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  WarBoardEvalValueSquare_EvalValueSquare_o *v111; // x22
  UnityEngine_Transform_o *transform; // x0
  System_Int32_array **v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  BattleActorControl_c *v120; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v122; // x23
  UnityEngine_GameObject_o *v123; // x0
  BattleActorControl_c *v124; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v125; // x0
  UnityEngine_Object_o *v126; // x19

  if ( (byte_40FDAD4 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_TypeInfo, *(_QWORD *)&btlSize);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__, v10);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&UnityEngine_Vector3___TypeInfo, v13);
    sub_B16FFC(&StringLiteral_12774/*"Shadow"*/, v14);
    byte_40FDAD4 = 1;
  }
  v15 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v15 = BattleActorControl_TypeInfo;
  }
  if ( !v15->static_fields->ShadowTransform )
  {
    v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                     System_Collections_Generic_Dictionary_int__Vector3____TypeInfo,
                                                                                                     *(_QWORD *)&btlSize,
                                                                                                     method,
                                                                                                     v3,
                                                                                                     v4);
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
      v16,
      (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v17);
    if ( !v18 )
      goto LABEL_151;
    klass = (int)v18[1].klass;
    v21 = v18;
    if ( !klass )
      goto LABEL_150;
    v18[1].monitor = 0LL;
    v18[1].fields.m_CachedPtr = 0;
    if ( klass == 1 )
      goto LABEL_150;
    *((_DWORD *)&v18[1].fields + 1) = 0;
    v18[2].klass = 0LL;
    if ( !v16 )
      goto LABEL_151;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      0,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v22);
    if ( !v18 )
      goto LABEL_151;
    v23 = (int)v18[1].klass;
    v21 = v18;
    if ( !v23 )
      goto LABEL_150;
    v18[1].monitor = (void *)vdup_n_s32(0x3F99999Au).n64_u64[0];
    v18[1].fields.m_CachedPtr = 1065353216;
    if ( v23 == 1 )
      goto LABEL_150;
    HIDWORD(v18[2].klass) = -1102263091;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      1,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v24);
    if ( !v18 )
      goto LABEL_151;
    v25 = (int)v18[1].klass;
    v21 = v18;
    if ( !v25 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4040000040000000LL;
    if ( v25 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      2,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v26);
    if ( !v18 )
      goto LABEL_151;
    v27 = (int)v18[1].klass;
    v21 = v18;
    if ( !v27 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x40533333400CCCCDLL;
    if ( v27 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      3,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v28);
    if ( !v18 )
      goto LABEL_151;
    v29 = (int)v18[1].klass;
    v21 = v18;
    if ( !v29 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x405CCCCD40133333LL;
    if ( v29 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      4,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v30);
    if ( !v18 )
      goto LABEL_151;
    v31 = (int)v18[1].klass;
    v21 = v18;
    if ( !v31 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4070000040200000LL;
    if ( v31 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      5,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v32);
    if ( !v18 )
      goto LABEL_151;
    v33 = (int)v18[1].klass;
    v21 = v18;
    if ( !v33 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4170000041C80000LL;
    if ( v33 == 1 )
      goto LABEL_150;
    HIDWORD(v18[2].klass) = -1071728558;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      6,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v34);
    if ( !v18 )
      goto LABEL_151;
    v35 = (int)v18[1].klass;
    v21 = v18;
    if ( !v35 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4080000040A00000LL;
    if ( v35 == 1 )
      goto LABEL_150;
    HIDWORD(v18[2].klass) = -1107967345;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      7,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v36);
    if ( !v18 )
      goto LABEL_151;
    v37 = (int)v18[1].klass;
    v21 = v18;
    if ( !v37 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4070000040A00000LL;
    if ( v37 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      8,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v38);
    if ( !v18 )
      goto LABEL_151;
    v39 = (int)v18[1].klass;
    v21 = v18;
    if ( !v39 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4070000040F00000LL;
    if ( v39 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      9,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v40);
    if ( !v18 )
      goto LABEL_151;
    v41 = (int)v18[1].klass;
    v21 = v18;
    if ( !v41 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4060000040C00000LL;
    if ( v41 == 1 )
      goto LABEL_150;
    HIDWORD(v18[2].klass) = -1102263091;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      10,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v42);
    if ( !v18 )
      goto LABEL_151;
    v43 = (int)v18[1].klass;
    v21 = v18;
    if ( !v43 )
      goto LABEL_150;
    v18[1].fields.m_CachedPtr = 1065353216;
    v18[1].monitor = (void *)0x4118000041000000LL;
    if ( v43 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1082130432;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      11,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v44);
    if ( !v18 )
      goto LABEL_151;
    v45 = (int)v18[1].klass;
    v21 = v18;
    if ( !v45 )
      goto LABEL_150;
    v18[1].monitor = (void *)0x4070000040A00000LL;
    v18[1].fields.m_CachedPtr = 1065353216;
    if ( v45 == 1 )
      goto LABEL_150;
    *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
    HIDWORD(v18[2].klass) = -1102263091;
    System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
      v16,
      12,
      (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
      (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v52 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v52 = BattleActorControl_TypeInfo;
    }
    static_fields = (BattleServantConfConponent_o *)v52->static_fields;
    static_fields->klass = (BattleServantConfConponent_c *)v16;
    sub_B16F98(static_fields, (System_Int32_array **)v16, v46, v47, v48, v49, v50, v51);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v59 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v59 = BattleActorControl_TypeInfo;
    }
    if ( !v59->static_fields->specialShadowTransform )
    {
      v60 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v55, v56, v57, v58);
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
        v60,
        (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v61);
      if ( !v18 )
        goto LABEL_151;
      v62 = (int)v18[1].klass;
      v21 = v18;
      if ( !v62 )
        goto LABEL_150;
      v18[1].monitor = 0LL;
      v18[1].fields.m_CachedPtr = 0;
      if ( v62 == 1 )
        goto LABEL_150;
      *((_DWORD *)&v18[1].fields + 1) = 0;
      v18[2].klass = 0LL;
      if ( !v60 )
        goto LABEL_151;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        0,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v63);
      if ( !v18 )
        goto LABEL_151;
      v64 = (int)v18[1].klass;
      v21 = v18;
      if ( !v64 )
        goto LABEL_150;
      v18[1].monitor = (void *)vdup_n_s32(0x3F99999Au).n64_u64[0];
      v18[1].fields.m_CachedPtr = 1067030938;
      if ( v64 == 1 )
        goto LABEL_150;
      HIDWORD(v18[2].klass) = -1102263091;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        1,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v65);
      if ( !v18 )
        goto LABEL_151;
      v66 = (int)v18[1].klass;
      v21 = v18;
      if ( !v66 )
        goto LABEL_150;
      v18[1].monitor = (void *)0x4000000040000000LL;
      v18[1].fields.m_CachedPtr = 0x40000000;
      if ( v66 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        2,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v67);
      if ( !v18 )
        goto LABEL_151;
      v68 = (int)v18[1].klass;
      v21 = v18;
      if ( !v68 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.0 }
      v18[1].monitor = _D0;
      v18[1].fields.m_CachedPtr = 1077936128;
      if ( v68 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        3,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v74);
      if ( !v18 )
        goto LABEL_151;
      v75 = (int)v18[1].klass;
      v21 = v18;
      if ( !v75 )
        goto LABEL_150;
      v18[1].monitor = (void *)vdup_n_s32(0x405CCCCDu).n64_u64[0];
      v18[1].fields.m_CachedPtr = 1079823565;
      if ( v75 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        4,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v76);
      if ( !v18 )
        goto LABEL_151;
      v77 = (int)v18[1].klass;
      v21 = v18;
      if ( !v77 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #3.75 }
      v18[1].monitor = _D0;
      v18[1].fields.m_CachedPtr = 1081081856;
      if ( v77 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        5,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v79);
      if ( !v18 )
        goto LABEL_151;
      v80 = (int)v18[1].klass;
      v21 = v18;
      if ( !v80 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #25.0 }
      v18[1].monitor = _D0;
      v18[1].fields.m_CachedPtr = 1103626240;
      if ( v80 == 1 )
        goto LABEL_150;
      HIDWORD(v18[2].klass) = -1071728558;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        6,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v82);
      if ( !v18 )
        goto LABEL_151;
      v83 = (int)v18[1].klass;
      v21 = v18;
      if ( !v83 )
        goto LABEL_150;
      __asm { FMOV            V9.2S, #5.0 }
      v18[1].monitor = _D9;
      v18[1].fields.m_CachedPtr = 1084227584;
      if ( v83 == 1 )
        goto LABEL_150;
      HIDWORD(v18[2].klass) = -1107967345;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        7,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v85);
      if ( !v18 )
        goto LABEL_151;
      v86 = (int)v18[1].klass;
      v21 = v18;
      if ( !v86 )
        goto LABEL_150;
      v18[1].monitor = _D9;
      v18[1].fields.m_CachedPtr = 1084227584;
      if ( v86 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        8,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v87);
      if ( !v18 )
        goto LABEL_151;
      v88 = (int)v18[1].klass;
      v21 = v18;
      if ( !v88 )
        goto LABEL_150;
      __asm { FMOV            V0.2S, #7.5 }
      v18[1].monitor = _D0;
      v18[1].fields.m_CachedPtr = 1089470464;
      if ( v88 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        9,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v90);
      if ( !v18 )
        goto LABEL_151;
      v91 = (int)v18[1].klass;
      v21 = v18;
      if ( !v91 )
        goto LABEL_150;
      v18[1].fields.m_CachedPtr = 1065353216;
      v18[1].monitor = (void *)0x4060000040C00000LL;
      if ( v91 == 1 )
        goto LABEL_150;
      HIDWORD(v18[2].klass) = -1102263091;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        10,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v92);
      if ( !v18 )
        goto LABEL_151;
      v93 = (int)v18[1].klass;
      v21 = v18;
      if ( !v93 )
        goto LABEL_150;
      v18[1].fields.m_CachedPtr = 1065353216;
      v18[1].monitor = (void *)0x4118000041000000LL;
      if ( v93 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1082130432;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        11,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v18 = (UnityEngine_Transform_o *)sub_B17014(UnityEngine_Vector3___TypeInfo, 2LL, v94);
      if ( !v18 )
        goto LABEL_151;
      v95 = (int)v18[1].klass;
      v21 = v18;
      if ( !v95 )
        goto LABEL_150;
      v18[1].monitor = _D9;
      v18[1].fields.m_CachedPtr = 1084227584;
      if ( v95 == 1 )
        goto LABEL_150;
      *(_QWORD *)(&v18[1].fields + 1) = 0x3CF5C28F00000000LL;
      HIDWORD(v18[2].klass) = -1102263091;
      System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
        v60,
        12,
        (WarBoardEvalValueSquare_EvalValueSquare_o *)v18,
        (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v102 = BattleActorControl_TypeInfo;
      if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v102 = BattleActorControl_TypeInfo;
      }
      v103 = v102->static_fields;
      v103->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v60;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v103->specialShadowTransform,
        (System_Int32_array **)v60,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
    }
  }
  v104 = BattleActorControl_TypeInfo;
  if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v104 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v104->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_151;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         ShadowTransform,
         btlSize,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v106 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v106 = BattleActorControl_TypeInfo;
    }
    v107 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v106->static_fields->ShadowTransform;
    if ( !v107 )
      goto LABEL_151;
    Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
             v107,
             btlSize,
             (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = (UnityEngine_Component_o **)&this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v111 = Item;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
    {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !transform )
        goto LABEL_151;
      v113 = (System_Int32_array **)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_12774/*"Shadow"*/, 0LL);
      *p_shadowObj = (UnityEngine_Component_o *)v113;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.shadowObj, v113, v114, v115, v116, v117, v118, v119);
    }
    v120 = BattleActorControl_TypeInfo;
    if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v120 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v120->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( (BYTE3(v120->vtable._0_Equals.methodPtr) & 4) != 0 && !v120->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v120);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_151;
      }
      if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
             (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v122 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
        {
          v123 = this->fields.specialShadowObj;
          if ( !v123 )
            goto LABEL_151;
          if ( UnityEngine_GameObject__get_activeSelf(v123, 0LL) )
          {
            v124 = BattleActorControl_TypeInfo;
            if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v124 = BattleActorControl_TypeInfo;
            }
            v125 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v124->static_fields->specialShadowTransform;
            if ( !v125 )
              goto LABEL_151;
            v111 = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                     v125,
                     btlSize,
                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v126 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v126, 0LL, 0LL) )
    {
      if ( !*p_shadowObj )
        goto LABEL_151;
      v18 = UnityEngine_Component__get_transform(*p_shadowObj, 0LL);
      if ( !v111 )
        goto LABEL_151;
      if ( LODWORD(v111->fields._EvalValueWarsituation_k__BackingField) )
      {
        if ( !v18 )
          goto LABEL_151;
        UnityEngine_Transform__set_localScale(
          v18,
          *(UnityEngine_Vector3_o *)&v111->fields._EvalValue_k__BackingField,
          0LL);
        if ( !*p_shadowObj )
          goto LABEL_151;
        v18 = UnityEngine_Component__get_transform(*p_shadowObj, 0LL);
        if ( LODWORD(v111->fields._EvalValueWarsituation_k__BackingField) > 1 )
        {
          if ( v18 )
          {
            UnityEngine_Transform__set_localPosition(
              v18,
              *(UnityEngine_Vector3_o *)&v111->fields._BenAdjustmentValueA1_k__BackingField,
              0LL);
            return;
          }
LABEL_151:
          sub_B170D4();
        }
      }
LABEL_150:
      sub_B17100(v18, v19, v21);
      sub_B170A0();
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
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x0
  BattleFBXComponent_o *v5; // x20
  System_String_o *v6; // x0

  if ( (byte_40FDAFD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDAFD = 1;
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
        || (v5 = this->fields.fbxcomponent,
            v6 = ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
                   overwriteAnim,
                   this->fields._PlayedOriginalAnimName_k__BackingField,
                   0LL),
            !v5) )
      {
        sub_B170D4();
      }
      BattleFBXComponent__SetTempDefaultAnimation(v5, v6, 0LL);
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
  sub_B16F98((BattleServantConfConponent_o *)p_myShiftData, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v14);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FDAE4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_12205/*"SKIP_DEAD"*/, method);
    byte_40FDAE4 = 1;
  }
  BattleActorControl__sendEventFSM_32017324(this, (System_String_o *)StringLiteral_12205/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleFBXComponent_o *fbxcomponent; // x20
  BattleServantConfConponent_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v13; // x22
  System_Int32_array **v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x8
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  struct BattleFBXComponent_o *v26; // x20
  BattleServantConfConponent_o *p_Complete; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v29; // x22
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *NodeFromLvName; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  UnityEngine_Transform_o *v45; // x0
  struct UnityEngine_Transform_o *v46; // x1
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  BattleActorControl_o *v53; // x0
  const MethodInfo *v54; // x1

  if ( (byte_40FDA7A & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_Complete__, method);
    sub_B16FFC(&Method_BattleActorControl_OnEvent__, v6);
    sub_B16FFC(&StringLiteral_18253/*"en_damage01"*/, v7);
    sub_B16FFC(&StringLiteral_18256/*"en_text01"*/, v8);
    sub_B16FFC(&BattleFBXComponent_onEventDelegate_TypeInfo, v9);
    byte_40FDA7A = 1;
  }
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_10;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (BattleServantConfConponent_o *)&fbxcomponent->fields.OnEvent;
  v13 = (BattleFBXComponent_onEventDelegate_o *)sub_B170CC(
                                                  BattleFBXComponent_onEventDelegate_TypeInfo,
                                                  method,
                                                  v2,
                                                  v3,
                                                  v4);
  BattleFBXComponent_onEventDelegate___ctor(v13, (Il2CppObject *)this, Method_BattleActorControl_OnEvent__, 0LL);
  v14 = (System_Int32_array **)System_Delegate__Combine(OnEvent, (System_Delegate_o *)v13, 0LL);
  v21 = v14;
  if ( v14 && *v14 != (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
    goto LABEL_11;
  p_OnEvent->klass = (BattleServantConfConponent_c *)v14;
  sub_B16F98(p_OnEvent, v14, v15, v16, v17, v18, v19, v20);
  v26 = this->fields.fbxcomponent;
  if ( !v26 )
LABEL_10:
    sub_B170D4();
  Complete = (System_Delegate_o *)v26->fields.Complete;
  p_Complete = (BattleServantConfConponent_o *)&v26->fields.Complete;
  v29 = (BattleFBXComponent_onEventDelegate_o *)sub_B170CC(
                                                  BattleFBXComponent_onEventDelegate_TypeInfo,
                                                  v22,
                                                  v23,
                                                  v24,
                                                  v25);
  BattleFBXComponent_onEventDelegate___ctor(v29, (Il2CppObject *)this, Method_BattleActorControl_Complete__, 0LL);
  v30 = (System_Int32_array **)System_Delegate__Combine(Complete, (System_Delegate_o *)v29, 0LL);
  v21 = v30;
  if ( !v30 || *v30 == (System_Int32_array *)BattleFBXComponent_onEventDelegate_TypeInfo )
  {
    p_Complete->klass = (BattleServantConfConponent_c *)v30;
    sub_B16F98(p_Complete, v30, v31, v32, v33, v34, v35, v36);
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_18256/*"en_text01"*/, -1, 0, 0LL);
    this->fields.nodeText = NodeFromLvName;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.nodeText,
      (System_Int32_array **)NodeFromLvName,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
    v45 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    v46 = TransformHelper__getNodeFromLvName(v45, (System_String_o *)StringLiteral_18253/*"en_damage01"*/, -1, 0, 0LL);
    this->fields.nodeDamage = v46;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.nodeDamage,
      (System_Int32_array **)v46,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
    return;
  }
LABEL_11:
  v53 = (BattleActorControl_o *)sub_B173C8(v21);
  BattleActorControl__OnDestroy(v53, v54);
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
  float v5; // s0
  UnityEngine_GameObject_o *actorObject; // x0
  float v7; // s10
  UnityEngine_Transform_o *transform; // x0
  float ShakeTime; // s8
  float deltaTime; // s0
  float ShakeTargetTime; // s1
  float v12; // s0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.Shaking )
  {
    v3 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.x * -0.5, this->fields.ShakeRange.fields.x * 0.5, 0LL);
    v4 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.y * -0.5, this->fields.ShakeRange.fields.y * 0.5, 0LL);
    v5 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.z * -0.5, this->fields.ShakeRange.fields.z * 0.5, 0LL);
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_9;
    v7 = v5;
    transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
    if ( !transform )
      goto LABEL_9;
    v18.fields.x = v3;
    v18.fields.y = v4;
    v18.fields.z = v7;
    UnityEngine_Transform__set_localPosition(transform, v18, 0LL);
    ShakeTime = this->fields.ShakeTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    ShakeTargetTime = this->fields.ShakeTargetTime;
    v12 = ShakeTime + deltaTime;
    this->fields.ShakeTime = v12;
    if ( v12 < ShakeTargetTime )
      return;
    v13 = this->fields.actorObject;
    if ( !v13
      || (v14 = UnityEngine_GameObject__get_transform(v13, 0LL),
          *(UnityEngine_Vector3_o *)&v15 = UnityEngine_Vector3__get_zero(0LL),
          !v14) )
    {
LABEL_9:
      sub_B170D4();
    }
    UnityEngine_Transform__set_localPosition(v14, *(UnityEngine_Vector3_o *)&v15, 0LL);
    this->fields.Shaking = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__UpdateActorVisibilityByBuff(
        BattleActorControl_o *this,
        bool forceUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleServantData_o *battleSvtData; // x8
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  struct BattleServantData_o *v12; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v14; // x22
  BattleBuffData_BuffData_array *BuffList_31040328; // x0
  __int64 v16; // x0
  __int64 v17; // x2
  BuffList_TYPE_array *v18; // x1
  struct BattleServantData_o *v19; // x8
  BattleBuffData_o *v20; // x0
  BattleBuffData_BuffData_array *v21; // x1
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x0
  const MethodInfo *v23; // x1
  struct TranslucentActorVisualInfo_o *v24; // x8
  const MethodInfo *v25; // x1

  if ( (byte_40FDB0C & 1) == 0 )
  {
    sub_B16FFC(&BuffList_TypeInfo, forceUpdate);
    sub_B16FFC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    sub_B16FFC(&BuffList_TYPE___TypeInfo, v6);
    byte_40FDB0C = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_24;
  if ( battleSvtData->fields.buffData )
  {
    if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    if ( BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
    {
      v12 = this->fields.battleSvtData;
      if ( !v12 )
        goto LABEL_24;
      buffData = v12->fields.buffData;
      v14 = (BattleBuffData_CheckIndividualitiesData_o *)sub_B170CC(
                                                           BattleBuffData_CheckIndividualitiesData_TypeInfo,
                                                           v8,
                                                           v9,
                                                           v10,
                                                           v11);
      BattleBuffData_CheckIndividualitiesData___ctor(v14, v12, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_24;
      BuffList_31040328 = BattleBuffData__getBuffList_31040328(buffData, 100, v14, 1, 0, 0LL);
    }
    else
    {
      v16 = sub_B17014(BuffList_TYPE___TypeInfo, 1LL, v9);
      if ( !v16 )
        goto LABEL_24;
      v18 = (BuffList_TYPE_array *)v16;
      if ( !*(_DWORD *)(v16 + 24) )
      {
        sub_B17100(v16, v16, v17);
        sub_B170A0();
      }
      *(_DWORD *)(v16 + 32) = 163;
      v19 = this->fields.battleSvtData;
      if ( !v19 )
        goto LABEL_24;
      v20 = v19->fields.buffData;
      if ( !v20 )
        goto LABEL_24;
      BuffList_31040328 = BattleBuffData__getBuffList_31020028(v20, v18, 0LL, 0LL, 0LL);
    }
    v21 = BuffList_31040328;
    if ( !BuffList_31040328 )
      goto LABEL_24;
    translucentActorVisualInfo = this->fields.translucentActorVisualInfo;
    if ( !translucentActorVisualInfo )
      goto LABEL_24;
    if ( forceUpdate || (v21->max_length == 0) != !translucentActorVisualInfo->fields._IsActive_k__BackingField )
    {
      TranslucentActorVisualInfo__UpdateByBuffs(translucentActorVisualInfo, v21, 0LL);
      v24 = this->fields.translucentActorVisualInfo;
      if ( v24 )
      {
        BattleActorControl__SetActorAlpha(this, v24->fields._Alpha_k__BackingField, v23);
        BattleActorControl__UpdateShadow(this, v25);
        return;
      }
LABEL_24:
      sub_B170D4();
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_SkinnedMeshRenderer_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_18B920C *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo_18B920C_RGCTXs **p_rgctx_data; // x19
  const MethodInfo_18B920C_RGCTXs *rgctx_data; // t1
  Il2CppClass *_0_BattleActorControl___c__279_T; // x22
  __int16 v18; // w8
  Il2CppClass *v19; // x22
  Il2CppClass *v20; // x22
  Il2CppClass *v21; // x22
  System_Int32_array **v22; // x22
  Il2CppClass *v23; // x22
  __int16 v24; // w8
  Il2CppClass *v25; // x22
  Il2CppClass *v26; // x22
  const MethodInfo_18B920C_RGCTXs *v27; // x8
  Il2CppClass *v28; // x22
  Il2CppClass *_2_System_Func_T__bool; // x24
  __int64 v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  Il2CppClass *v37; // x23
  char *static_fields; // x0
  __int64 v39; // x0
  __int64 v40; // x21
  Il2CppClass *_5_System_Collections_Generic_IEnumerable_T; // x22
  __int64 v42; // x8
  unsigned __int64 v43; // x10
  int *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x21
  int v47; // w25
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  Il2CppClass *_6_System_Collections_Generic_IEnumerator_T; // x22
  __int64 v53; // x8
  unsigned __int64 v54; // x10
  int *v55; // x11
  __int64 v56; // x0
  UnityEngine_Renderer_o *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  Il2CppClass *v63; // x23
  __int16 v64; // w8
  Il2CppClass *v65; // x23
  Il2CppClass *v66; // x23
  Il2CppClass *v67; // x23
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v68; // x23
  Il2CppClass *v69; // x23
  __int16 v70; // w8
  Il2CppClass *v71; // x23
  Il2CppClass *v72; // x23
  Il2CppClass *v73; // x23
  Il2CppObject *v74; // x24
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  Il2CppClass *v81; // x24
  char *v82; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x22
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  unsigned __int64 v86; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v89; // x22
  __int64 v90; // x8
  unsigned __int64 v91; // x10
  int *v92; // x11
  __int64 v93; // x0
  __int64 v94; // x8
  unsigned __int64 v95; // x10
  int *v96; // x11
  __int64 v97; // x0
  System_Uri_o *v98; // x1
  int v99; // w24
  __int64 v100; // x8
  unsigned __int64 v101; // x10
  int *v102; // x11
  __int64 v103; // x0
  int v104; // w20
  __int64 v105; // x8
  unsigned __int64 v106; // x10
  int *v107; // x11
  __int64 v108; // x0
  _DWORD v109[2]; // [xsp+10h] [xbp-60h]
  int v110; // [xsp+18h] [xbp-58h]

  if ( (byte_40FA647 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_Material__Invoke__, rendererEnumerable);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_Material___, v8);
    sub_B16FFC(&Method_System_Func_Material__bool___ctor__, v9);
    sub_B16FFC(&System_Func_Material__bool__TypeInfo, v10);
    sub_B16FFC(&System_IDisposable_TypeInfo, v11);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v12);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v13);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v14);
    byte_40FA647 = 1;
  }
  v110 = 0;
  if ( rendererEnumerable )
  {
    rgctx_data = method->rgctx_data;
    p_rgctx_data = &method->rgctx_data;
    _0_BattleActorControl___c__279_T = rgctx_data->_0_BattleActorControl___c__279_T_;
    v18 = WORD1(rgctx_data->_0_BattleActorControl___c__279_T_->vtable[0].methodPtr);
    if ( (v18 & 1) == 0 )
    {
      sub_AAFCFC(_0_BattleActorControl___c__279_T);
      v18 = WORD1(_0_BattleActorControl___c__279_T->vtable[0].methodPtr);
    }
    if ( (v18 & 0x400) != 0 )
    {
      v19 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
      if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
      if ( !v19->_2.cctor_finished )
      {
        v20 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
        if ( (BYTE2(v20->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        j_il2cpp_runtime_class_init_0(v20);
      }
    }
    v21 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
    if ( (BYTE2(v21->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
    v22 = (System_Int32_array **)*((_QWORD *)v21->static_fields + 1);
    if ( !v22 )
    {
      v23 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
      v24 = WORD1(v23->vtable[0].methodPtr);
      if ( (v24 & 1) == 0 )
      {
        sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        v24 = WORD1(v23->vtable[0].methodPtr);
      }
      if ( (v24 & 0x400) != 0 )
      {
        v25 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
        if ( (BYTE2(v25->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        if ( !v25->_2.cctor_finished )
        {
          v26 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
          if ( (BYTE2(v26->vtable[0].methodPtr) & 1) == 0 )
            sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
          j_il2cpp_runtime_class_init_0(v26);
        }
      }
      v27 = *p_rgctx_data;
      v28 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
      if ( (BYTE2(v28->vtable[0].methodPtr) & 1) == 0 )
      {
        sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        v27 = *p_rgctx_data;
      }
      _2_System_Func_T__bool = v27->_2_System_Func_T__bool_;
      v30 = *(_QWORD *)v28->static_fields;
      if ( (BYTE2(_2_System_Func_T__bool->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC(_2_System_Func_T__bool);
      v22 = (System_Int32_array **)sub_B170CC(_2_System_Func_T__bool, rendererEnumerable, updateFunc, method, v4);
      ((void (__fastcall *)(System_Int32_array **, __int64, MethodInfo *))(*p_rgctx_data)->_3_System_Func_T__bool___ctor->methodPointer)(
        v22,
        v30,
        (*p_rgctx_data)->_1_BattleActorControl___c__279_T___UpdateMaterialsOnRenderders_b__279_0);
      v37 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
      if ( (BYTE2(v37->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
      static_fields = (char *)v37->static_fields;
      *((_QWORD *)static_fields + 1) = v22;
      sub_B16F98((BattleServantConfConponent_o *)(static_fields + 8), v22, v31, v32, v33, v34, v35, v36);
    }
    v39 = ((__int64 (__fastcall *)(System_Collections_Generic_IEnumerable_T__o *, System_Int32_array **))(*p_rgctx_data)->_4_System_Linq_Enumerable_Where_T_->methodPointer)(
            rendererEnumerable,
            v22);
    if ( !v39 )
      sub_B170D4();
    v40 = v39;
    _5_System_Collections_Generic_IEnumerable_T = (*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_;
    if ( (BYTE2(_5_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AAFCFC((*p_rgctx_data)->_5_System_Collections_Generic_IEnumerable_T_);
    v42 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v43 = 0LL;
      v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
      while ( *((Il2CppClass **)v44 - 1) != _5_System_Collections_Generic_IEnumerable_T )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_39;
      }
      v45 = v42 + 16LL * *v44 + 312;
    }
    else
    {
LABEL_39:
      v45 = sub_AAFEF8(v40, _5_System_Collections_Generic_IEnumerable_T, 0LL);
    }
    v46 = (*(__int64 (__fastcall **)(__int64, _QWORD))v45)(v40, *(_QWORD *)(v45 + 8));
    if ( !v46 )
      sub_B170D4();
    v47 = 0;
    while ( 1 )
    {
      v48 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v49 = 0LL;
        v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          ++v49;
          v50 += 4;
          if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_47;
        }
        v51 = v48 + 16LL * *v50 + 312;
      }
      else
      {
LABEL_47:
        v51 = sub_AAFEF8(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v46, *(_QWORD *)(v51 + 8)) & 1) == 0 )
        break;
      _6_System_Collections_Generic_IEnumerator_T = (*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_;
      if ( (BYTE2(_6_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC((*p_rgctx_data)->_6_System_Collections_Generic_IEnumerator_T_);
      v53 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v54 = 0LL;
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((Il2CppClass **)v55 - 1) != _6_System_Collections_Generic_IEnumerator_T )
        {
          ++v54;
          v55 += 4;
          if ( v54 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_56;
        }
        v56 = v53 + 16LL * *v55 + 312;
      }
      else
      {
LABEL_56:
        v56 = sub_AAFEF8(v46, _6_System_Collections_Generic_IEnumerator_T, 0LL);
      }
      v57 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v46, *(_QWORD *)(v56 + 8));
      if ( !v57 )
        sub_B170D4();
      materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v57, 0LL);
      v63 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
      v64 = WORD1(v63->vtable[0].methodPtr);
      if ( (v64 & 1) == 0 )
      {
        sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        v64 = WORD1(v63->vtable[0].methodPtr);
      }
      if ( (v64 & 0x400) != 0 )
      {
        v65 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
        if ( (BYTE2(v65->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        if ( !v65->_2.cctor_finished )
        {
          v66 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
          if ( (BYTE2(v66->vtable[0].methodPtr) & 1) == 0 )
            sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
          j_il2cpp_runtime_class_init_0(v66);
        }
      }
      v67 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
      if ( (BYTE2(v67->vtable[0].methodPtr) & 1) == 0 )
        sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
      v68 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)*((_QWORD *)v67->static_fields + 2);
      if ( !v68 )
      {
        v69 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
        v70 = WORD1(v69->vtable[0].methodPtr);
        if ( (v70 & 1) == 0 )
        {
          sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
          v70 = WORD1(v69->vtable[0].methodPtr);
        }
        if ( (v70 & 0x400) != 0 )
        {
          v71 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
          if ( (BYTE2(v71->vtable[0].methodPtr) & 1) == 0 )
            sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
          if ( !v71->_2.cctor_finished )
          {
            v72 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
            if ( (BYTE2(v72->vtable[0].methodPtr) & 1) == 0 )
              sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
            j_il2cpp_runtime_class_init_0(v72);
          }
        }
        v73 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
        if ( (BYTE2(v73->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        v74 = *(Il2CppObject **)v73->static_fields;
        v68 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_Material__bool__TypeInfo,
                                                                                   v58,
                                                                                   v59,
                                                                                   v60,
                                                                                   v61);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v68,
          v74,
          (intptr_t)(*p_rgctx_data)->_8_BattleActorControl___c__279_T___UpdateMaterialsOnRenderders_b__279_1,
          (const MethodInfo_2B6AB40 *)Method_System_Func_Material__bool___ctor__);
        v81 = (*p_rgctx_data)->_0_BattleActorControl___c__279_T_;
        if ( (BYTE2(v81->vtable[0].methodPtr) & 1) == 0 )
          sub_AAFCFC((*p_rgctx_data)->_0_BattleActorControl___c__279_T_);
        v82 = (char *)v81->static_fields;
        *((_QWORD *)v82 + 2) = v68;
        sub_B16F98((BattleServantConfConponent_o *)(v82 + 16), (System_Int32_array **)v68, v75, v76, v77, v78, v79, v80);
      }
      v83 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
              materials,
              (System_Func_TSource__bool__o *)v68,
              (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_Material___);
      v84 = v83;
      if ( !v83 )
        sub_B170D4();
      klass = v83->klass;
      if ( *(_WORD *)&v83->klass->_2.bitflags1 )
      {
        v86 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_Material__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
        {
          ++v86;
          p_offset += 4;
          if ( v86 >= *(unsigned __int16 *)&v83->klass->_2.bitflags1 )
            goto LABEL_90;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_90:
        p_method = sub_AAFEF8(v83, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
      }
      v89 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v84,
              *(_QWORD *)(p_method + 8));
      if ( !v89 )
        sub_B170D4();
      while ( 1 )
      {
        v90 = *(_QWORD *)v89;
        if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
        {
          v91 = 0LL;
          v92 = (int *)(*(_QWORD *)(v90 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v92 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v91;
            v92 += 4;
            if ( v91 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
              goto LABEL_97;
          }
          v93 = v90 + 16LL * *v92 + 312;
        }
        else
        {
LABEL_97:
          v93 = sub_AAFEF8(v89, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v93)(v89, *(_QWORD *)(v93 + 8)) & 1) == 0 )
          break;
        v94 = *(_QWORD *)v89;
        if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
        {
          v95 = 0LL;
          v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_Material__c **)v96 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
          {
            ++v95;
            v96 += 4;
            if ( v95 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
              goto LABEL_104;
          }
          v97 = v94 + 16LL * *v96 + 312;
        }
        else
        {
LABEL_104:
          v97 = sub_AAFEF8(v89, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
        }
        v98 = (System_Uri_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v89, *(_QWORD *)(v97 + 8));
        if ( !updateFunc )
          sub_B170D4();
        System_Action_Uri___Invoke(
          (System_Action_Uri__o *)updateFunc,
          v98,
          (const MethodInfo_24B7324 *)Method_System_Action_Material__Invoke__);
      }
      v109[v47] = 143;
      v99 = ++v110;
      v100 = *(_QWORD *)v89;
      if ( *(_WORD *)(*(_QWORD *)v89 + 298LL) )
      {
        v101 = 0LL;
        v102 = (int *)(*(_QWORD *)(v100 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v102 - 1) != System_IDisposable_TypeInfo )
        {
          ++v101;
          v102 += 4;
          if ( v101 >= *(unsigned __int16 *)(*(_QWORD *)v89 + 298LL) )
            goto LABEL_113;
        }
        v103 = v100 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_113:
        v103 = sub_AAFEF8(v89, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v103)(v89, *(_QWORD *)(v103 + 8));
      v47 = 0;
      if ( v99 )
      {
        v47 = v99;
        if ( v109[v99 - 1] == 143 )
        {
          v110 = v99 - 1;
          v47 = v99 - 1;
        }
      }
    }
    v109[v47] = 163;
    v104 = ++v110;
    v105 = *(_QWORD *)v46;
    if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
    {
      v106 = 0LL;
      v107 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v107 - 1) != System_IDisposable_TypeInfo )
      {
        ++v106;
        v107 += 4;
        if ( v106 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
          goto LABEL_126;
      }
      v108 = v105 + 16LL * *v107 + 312;
    }
    else
    {
LABEL_126:
      v108 = sub_AAFEF8(v46, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v108)(v46, *(_QWORD *)(v108 + 8));
    if ( v104 && v109[v104 - 1] == 163 )
      v110 = v104 - 1;
  }
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleServantData_o *battleSvtData; // x20
  bool IsHideShadow; // w0
  struct BattleServantData_o *v7; // x8
  UnityEngine_Object_o *v8; // x20
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Object_o *specialShadowObj; // x20
  UnityEngine_GameObject_o *v12; // x0
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *shadowObj; // x20
  BattleServantData_o *v15; // x0
  struct BattleServantData_o *v16; // x8
  UnityEngine_Component_o *v17; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleBgMaster_o *v21; // x20
  int32_t CurrentGroundNo; // w0
  int32_t v23; // w21
  int32_t CurrentGroundType; // w0
  int32_t BgShadowImageId; // w0
  const MethodInfo *v26; // x2
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v28; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v30; // x8
  BattleData_o *v31; // x0
  const MethodInfo *v32; // x1
  struct BattlePerformance_o *v33; // x8
  BattleData_o *v34; // x0
  System_Int32_array *ShadowOffSvtIds; // x0
  System_Int32_array *v36; // x20
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x2
  int SpecialShadowEffectId; // w21
  UnityEngine_Object_o *v40; // x21
  __int64 ActorSvtId; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  int max_length; // w8
  unsigned int v45; // w21
  BattleServantData_o *v46; // x0
  int32_t v47; // w22
  UnityEngine_Component_o *v48; // x0
  UnityEngine_Component_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  BattleServantData_o *v51; // x0
  int32_t BattleSize; // w1
  const MethodInfo *v53; // x2
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDA87 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BattleBgMaster___, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FDA87 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_76;
  battleSvtData->fields.isHideShadow = IsHideShadow;
  v7 = this->fields.battleSvtData;
  if ( !v7 )
    goto LABEL_76;
  if ( !v7->fields.isHideShadow )
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
        v15 = this->fields.battleSvtData;
        if ( !v15 )
          goto LABEL_76;
        if ( BattleServantData__isAlive(v15, 0, 0LL) )
        {
          v16 = this->fields.battleSvtData;
          if ( !v16 )
            goto LABEL_76;
          if ( v16->fields.isEntry )
          {
            v17 = (UnityEngine_Component_o *)this->fields.shadowObj;
            if ( !v17 )
              goto LABEL_76;
            gameObject = UnityEngine_Component__get_gameObject(v17, 0LL);
            if ( !gameObject )
              goto LABEL_76;
            UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
          }
        }
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_76;
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_76;
      v21 = (BattleBgMaster_o *)MasterData_WarQuestSelectionMaster;
      CurrentGroundNo = BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_76;
      v23 = CurrentGroundNo;
      CurrentGroundType = BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v21 )
        goto LABEL_76;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v21, v23, CurrentGroundType, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v26);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v28 = this->fields.performance;
        if ( !v28 )
          goto LABEL_76;
        data = (UnityEngine_Object_o *)v28->fields.data;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
        {
          v30 = this->fields.performance;
          if ( !v30 )
            goto LABEL_76;
          v31 = v30->fields.data;
          if ( !v31 )
            goto LABEL_76;
          GroundShadowColor = BattleData__getGroundShadowColor(v31, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v32);
          v33 = this->fields.performance;
          if ( !v33 )
            goto LABEL_76;
          v34 = v33->fields.data;
          if ( !v34 )
            goto LABEL_76;
          ShadowOffSvtIds = BattleData__GetShadowOffSvtIds(v34, 0LL);
          if ( !this->fields.performance )
            goto LABEL_76;
          v36 = ShadowOffSvtIds;
          SpecialShadowEffectId = BattlePerformance__GetSpecialShadowEffectId(this->fields.performance, 0LL);
          if ( this->fields.currentSpShadowEffectId != SpecialShadowEffectId )
          {
            this->fields.currentSpShadowEffectId = SpecialShadowEffectId;
            BattleActorControl__DestroySpShadowObj(this, v37);
          }
          if ( SpecialShadowEffectId >= 1 )
            BattleActorControl__changeSpecialShadow(this, SpecialShadowEffectId, v38);
          v40 = (UnityEngine_Object_o *)this->fields.shadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          ActorSvtId = UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
          if ( (ActorSvtId & 1) != 0 )
          {
            if ( !v36 )
              goto LABEL_76;
            max_length = v36->max_length;
            if ( max_length >= 1 )
            {
              v45 = 0;
              while ( 1 )
              {
                if ( v45 >= max_length )
                {
                  sub_B17100(ActorSvtId, v42, v43);
                  sub_B170A0();
                }
                v46 = this->fields.battleSvtData;
                if ( !v46 )
                  goto LABEL_76;
                v47 = v36->m_Items[v45 + 1];
                ActorSvtId = BattleServantData__getActorSvtId(v46, 0LL);
                if ( v47 == (_DWORD)ActorSvtId )
                  break;
                max_length = v36->max_length;
                if ( (int)++v45 >= max_length )
                  goto LABEL_74;
              }
              v49 = (UnityEngine_Component_o *)this->fields.shadowObj;
              if ( !v49 )
                goto LABEL_76;
              v50 = UnityEngine_Component__get_gameObject(v49, 0LL);
              if ( !v50 )
                goto LABEL_76;
              UnityEngine_GameObject__SetActive(v50, 0, 0LL);
            }
          }
        }
      }
LABEL_74:
      v51 = this->fields.battleSvtData;
      if ( !v51 )
        goto LABEL_76;
      BattleSize = BattleServantData__get_BattleSize(v51, 0LL);
      BattleActorControl__SetShadowSize(this, BattleSize, v53);
      return;
    }
    v48 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( v48 )
    {
      v12 = UnityEngine_Component__get_gameObject(v48, 0LL);
      if ( v12 )
      {
LABEL_70:
        UnityEngine_GameObject__SetActive(v12, 0, 0LL);
        return;
      }
    }
LABEL_76:
    sub_B170D4();
  }
  v8 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v8, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( v9 )
    {
      v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
      if ( v10 )
      {
        UnityEngine_GameObject__SetActive(v10, 0, 0LL);
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
    v12 = this->fields.specialShadowObj;
    if ( !v12 )
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

  if ( (byte_40FDABB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, eventName);
    byte_40FDABB = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)eventClassAddedEventDict,
         (System_Xml_XmlQualifiedName_o *)eventName,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    System_String__op_Inequality(motionName, (System_String_o *)value, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__WaitToNoblePhantasmPlay(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDACA & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__WaitToNoblePhantasmPlay_d__258_TypeInfo, method);
    byte_40FDACA = 1;
  }
  v6 = sub_B170CC(BattleActorControl__WaitToNoblePhantasmPlay_d__258_TypeInfo, method, v2, v3, v4);
  BattleActorControl__WaitToNoblePhantasmPlay_d__258___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__207_0(
        BattleActorControl_o *this,
        System_String_o *playedSoundId,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *battleSvtData; // x9
  BattleData_o *data; // x20
  __int64 v8; // x21
  __int64 v9; // x22
  int32_t v10; // w0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v11; // 0:x0.16

  if ( (byte_40FDB14 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, playedSoundId);
    byte_40FDB14 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  battleSvtData = this->fields.battleSvtData;
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
  *(_QWORD *)&v11.fields.currentCryptoKey = v9;
  *(_QWORD *)&v11.fields.fakeValue = v8;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v11, 0LL);
  if ( !data )
LABEL_10:
    sub_B170D4();
  BattleData__AddServantVoicePlayed(data, v10, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__130_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__257_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__259_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0
  const MethodInfo *v5; // x3
  BattleFBXComponent_c *v6; // x0
  System_Action_o *noblePhantasmCallback; // x0

  if ( (byte_40FDB16 & 1) == 0 )
  {
    sub_B16FFC(&BattleFBXComponent_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6333/*"FINISHED"*/, v3);
    byte_40FDB16 = 1;
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
    noblePhantasmCallback = this->fields.noblePhantasmCallback;
    if ( noblePhantasmCallback )
    {
      System_Action__Invoke(noblePhantasmCallback, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  BattleActorControl__sendEventFSM_32017324(this, (System_String_o *)StringLiteral_6333/*"FINISHED"*/, 0, v5);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__255_0(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v8; // x20
  __int64 v9; // x21
  __int64 v10; // x22
  int32_t v11; // w0
  int32_t v12; // w21
  TreasureDvcEntity_o *TreasureDevice; // x0
  TreasureDvcEntity_o *v14; // x8
  BattleServantData_o *v15; // x0
  int32_t id; // w22
  int32_t DispLimitCount; // w0
  struct BattleServantData_o *v18; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v21; // w23
  int32_t NpChargeStage; // w26
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  BattleSequenceManager_onGameObjectLoadComplete_o *v27; // x27
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40FDB15 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, method);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v4);
    sub_B16FFC(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v5);
    byte_40FDB15 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  v8 = (BattleSequenceManager_o *)Instance;
  v10 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v9 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v28.fields.currentCryptoKey = v10;
  *(_QWORD *)&v28.fields.fakeValue = v9;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_13;
  v12 = v11;
  TreasureDevice = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !TreasureDevice )
    goto LABEL_13;
  v14 = TreasureDevice;
  v15 = this->fields.battleSvtData;
  if ( !v15 )
    goto LABEL_13;
  id = v14->fields.id;
  DispLimitCount = BattleServantData__getDispLimitCount(v15, 1, 0LL);
  v18 = this->fields.battleSvtData;
  if ( !v18
    || (overwriteSvtVoiceId = v18->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v18->fields.treasuredvcLevel,
        v21 = DispLimitCount,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v27 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B170CC(
                                                                    BattleSequenceManager_onGameObjectLoadComplete_TypeInfo,
                                                                    v23,
                                                                    v24,
                                                                    v25,
                                                                    v26),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v27,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v8) )
  {
LABEL_13:
    sub_B170D4();
  }
  BattleSequenceManager__loadSequence(v8, v12, id, v21, overwriteSvtVoiceId, treasuredvcLevel, NpChargeStage, v27, 0LL);
}


void __fastcall BattleActorControl__addAura(
        BattleActorControl_o *this,
        int32_t auraEffectId,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleActorControl__coAddAura(this, auraEffectId, priority, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  int effectId; // w1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  WebViewManager_o *Instance; // x0
  ConstantStrMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x8
  __int64 v24; // x9
  BattleEffectUtility_BuffEffectLoadArgument_o *v25; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v27; // w22
  UnityEngine_GameObject_o *v28; // x23
  UnityEngine_GameObject_o *v29; // x24
  float v30; // s0
  float v31; // s1
  float v32; // s2
  BattleServantData_o *battleSvtData; // x0
  float v34; // s8
  float v35; // s9
  float v36; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v38; // x1
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  UnityEngine_Transform_o *transform; // x22
  int v42; // s0
  UnityEngine_Transform_o *v45; // x22
  int v46; // s0
  WebViewManager_o *v50; // x0
  WarQuestSelectionMaster_o *v51; // x0
  StatusEffectPosOverwriteMaster_o *v52; // x22
  BattleServantData_o *v53; // x0
  int32_t v54; // w23
  int32_t v55; // w24
  const MethodInfo *v56; // x1
  int32_t v57; // w0
  struct BattleServantData_o *v58; // x8
  _BOOL4 isEnemy; // w25
  UnityEngine_Transform_o *v60; // x0
  UnityEngine_Transform_o *v61; // x22
  UnityEngine_Transform_o *v62; // x0
  const MethodInfo *v63; // x1
  System_String_o *nodeName; // x24
  UnityEngine_Transform_o *v65; // x23
  int32_t v66; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x23
  float v68; // s0
  float v69; // s1
  float v70; // s2
  float v71; // s8
  float v72; // s9
  float v73; // s10
  float v74; // s0
  float v75; // s1
  float v76; // s2
  struct BattleServantData_o *v77; // x8
  UnityEngine_Transform_o *v78; // x0
  float x; // s10
  float y; // s8
  float z; // s9
  UnityEngine_Transform_o *v82; // x0
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  bool v84; // w0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v85; // x0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v93; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDB03 & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, buffEntity);
    sub_B16FFC(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_7054/*"HIDE_STATUS_EFFECT_IDS"*/, v13);
    byte_40FDB03 = 1;
  }
  entity = 0LL;
  if ( !buffEntity )
    return;
  effectId = buffEntity->fields.effectId;
  if ( effectId < 1 )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_47;
  if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
         (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  MasterData_WarQuestSelectionMaster = (ConstantStrMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                (DataManager_o *)Instance,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_47;
  ValueArray = ConstantStrMaster__GetValueArray(
                 MasterData_WarQuestSelectionMaster,
                 (System_String_o *)StringLiteral_7054/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v23 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v23 < 1 )
  {
LABEL_15:
    v25 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B170CC(
                                                            BattleEffectUtility_BuffEffectLoadArgument_TypeInfo,
                                                            v19,
                                                            v20,
                                                            v21,
                                                            v22);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v25, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v27 = buffEntity->fields.effectId;
    v28 = gameObject;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
    {
      v34 = v30;
      v35 = v31;
      v36 = v32;
      ActorSvtId = BattleServantData__getActorSvtId(battleSvtData, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v38);
      if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      }
      v87.fields.x = v34;
      v87.fields.y = v35;
      v87.fields.z = v36;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v28,
                                               v27,
                                               v29,
                                               v87,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v25,
                                               0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL) )
        return;
      if ( EffectToNode )
      {
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
        *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_zero(0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v42, 0LL);
          v45 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
          *(UnityEngine_Quaternion_o *)&v46 = UnityEngine_Quaternion__get_identity(0LL);
          if ( v45 )
          {
            UnityEngine_Transform__set_localRotation(v45, *(UnityEngine_Quaternion_o *)&v46, 0LL);
            v50 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( v50 )
            {
              v51 = DataManager__GetMasterData_WarQuestSelectionMaster_(
                      (DataManager_o *)v50,
                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( v51 )
              {
                v52 = (StatusEffectPosOverwriteMaster_o *)v51;
                v53 = this->fields.battleSvtData;
                if ( !v53 )
                  goto LABEL_47;
                v54 = buffEntity->fields.effectId;
                v55 = BattleServantData__getActorSvtId(v53, 0LL);
                v57 = BattleActorControl__getLimitCount(this, v56);
                if ( StatusEffectPosOverwriteMaster__TryGetEntity(v52, &entity, v54, v55, v57, 0LL) )
                {
                  v58 = this->fields.battleSvtData;
                  if ( !v58 )
                    goto LABEL_47;
                  isEnemy = v58->fields.isEnemy;
                  v60 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                  if ( !this->fields.actorObject )
                    goto LABEL_47;
                  v61 = v60;
                  v62 = UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_47;
                  nodeName = entity->fields.nodeName;
                  v65 = v62;
                  v66 = BattleActorControl__getLimitCount(this, v63);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v65, nodeName, v66, 1, 0LL);
                  *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Vector3__get_zero(0LL);
                  if ( !entity )
                    goto LABEL_47;
                  v71 = v68;
                  v72 = v69;
                  v73 = v70;
                  *(UnityEngine_Vector3_o *)&v74 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v61 )
                    goto LABEL_47;
                  v88.fields.x = v71 + v74;
                  v88.fields.y = v72 + v75;
                  v88.fields.z = v73 + v76;
                  UnityEngine_Transform__set_localPosition(v61, v88, 0LL);
                  if ( !entity )
                    goto LABEL_47;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  v93 = UnityEngine_Quaternion__Euler_34841604(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v61, v93, 0LL);
                  if ( !entity )
                    goto LABEL_47;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v61, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v61, NodeFromLvName, 0LL);
                }
              }
              v77 = this->fields.battleSvtData;
              if ( !v77 )
                goto LABEL_47;
              if ( v77->fields.isEnemy )
              {
                v78 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                if ( !v78 )
                  goto LABEL_47;
                localScale = UnityEngine_Transform__get_localScale(v78, 0LL);
                x = localScale.fields.x;
                y = localScale.fields.y;
                z = localScale.fields.z;
                v82 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0LL);
                if ( !v82 )
                  goto LABEL_47;
                v92.fields.x = -x;
                v92.fields.y = y;
                v92.fields.z = z;
                UnityEngine_Transform__set_localScale(v82, v92, 0LL);
              }
              reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
              if ( reservedEffectBuffEffectIdList )
              {
                v84 = System_Collections_Generic_List_int___Contains(
                        reservedEffectBuffEffectIdList,
                        buffEntity->fields.effectId,
                        (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v84, 0LL);
                v85 = this->fields.buffLoopEffectDict;
                if ( v85 )
                {
                  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
                    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v85,
                    buffEntity->fields.effectId,
                    (WarBoardEvalValueSquare_EvalValueSquare_o *)EffectToNode,
                    (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_47:
    sub_B170D4();
  }
  v24 = 0LL;
  while ( ValueArray->m_Items[v24 + 1] != buffEntity->fields.effectId )
  {
    if ( (int)++v24 >= (int)v23 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_B170D4();
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
  UnityEngine_Component_o *v8; // x0
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_40FDAD2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, isNormal);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40FDAD2 = 1;
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
      v8 = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !v8
        || (Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                                  v8,
                                                                  (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled(Component_WebViewObject, isNormal, 0LL),
            (v10 = this->fields.specialShadowObj) == 0LL) )
      {
        sub_B170D4();
      }
      UnityEngine_GameObject__SetActive(v10, !isNormal, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__changeSpecialShadow(
        BattleActorControl_o *this,
        int32_t shadowEffectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Component_o *v21; // x0
  UnityEngine_Renderer_o *Component_WebViewObject; // x0
  int32_t v23; // w21
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Action_o *v28; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_40FDAD1 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&shadowEffectId);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_Renderer___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass266_0__changeSpecialShadow_b__0__, v10);
    sub_B16FFC(&BattleActorControl___c__DisplayClass266_0_TypeInfo, v11);
    byte_40FDAD1 = 1;
  }
  v12 = sub_B170CC(BattleActorControl___c__DisplayClass266_0_TypeInfo, *(_QWORD *)&shadowEffectId, method, v3, v4);
  BattleActorControl___c__DisplayClass266_0___ctor((BattleActorControl___c__DisplayClass266_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_19;
  *(_QWORD *)(v12 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v13, v14, v15, v16, v17, v18);
  *(_DWORD *)(v12 + 24) = shadowEffectId;
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
      v21 = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( v21 )
      {
        Component_WebViewObject = (UnityEngine_Renderer_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                              v21,
                                                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_WebViewObject )
        {
          UnityEngine_Renderer__set_enabled(Component_WebViewObject, 0, 0LL);
          v23 = *(_DWORD *)(v12 + 24);
          v28 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v24, v25, v26, v27);
          System_Action___ctor(
            v28,
            (Il2CppObject *)v12,
            Method_BattleActorControl___c__DisplayClass266_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          BattleEffectUtility__LoadEffectAssetIfNotYet(v23, v28, performance, 0LL);
          return;
        }
      }
LABEL_19:
      sub_B170D4();
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
    sub_B170D4();
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  BattlePerformance_o *performance; // x20
  System_Action_o *v8; // x21

  if ( (byte_40FDAEA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleActorControl_endChangeAppearance__, v6);
    byte_40FDAEA = 1;
  }
  performance = this->fields.performance;
  v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_B170D4();
  BattlePerformance__checkChangeAppearance(performance, v8, 0LL);
}


bool __fastcall BattleActorControl__checkGEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  __int64 actindex; // x9
  PlayMakerFSM_o *v5; // x0
  int actorObject; // w8
  BattleActorControl_o *v8; // x20
  unsigned int v9; // w21
  HutongGames_PlayMaker_FsmTransition_o *v10; // x0
  System_String_o *EventName; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_13;
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= motionFSM->max_length )
  {
LABEL_14:
    sub_B17100(this, name, method);
    sub_B170A0();
  }
  v5 = motionFSM->m_Items[actindex];
  if ( !v5 || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions(v5, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  actorObject = (int)this->fields.actorObject;
  v8 = this;
  if ( actorObject < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= actorObject )
      goto LABEL_14;
    v10 = (HutongGames_PlayMaker_FsmTransition_o *)*((_QWORD *)&v8->fields.fbxcomponent + (int)v9);
    if ( !v10 )
      goto LABEL_13;
    EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(v10, 0LL);
    this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    actorObject = (int)v8->fields.actorObject;
    if ( (int)++v9 >= actorObject )
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
  PlayMakerFSM_o *v4; // x0
  int actorObject; // w8
  BattleActorControl_o *v7; // x20
  unsigned int v8; // w21
  HutongGames_PlayMaker_FsmTransition_o *v9; // x0
  System_String_o *EventName; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_13;
  if ( !motionFSM->max_length )
  {
LABEL_14:
    sub_B17100(this, name, method);
    sub_B170A0();
  }
  v4 = motionFSM->m_Items[0];
  if ( !v4 || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions(v4, 0LL)) == 0LL )
LABEL_13:
    sub_B170D4();
  actorObject = (int)this->fields.actorObject;
  v7 = this;
  if ( actorObject < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= actorObject )
      goto LABEL_14;
    v9 = (HutongGames_PlayMaker_FsmTransition_o *)*((_QWORD *)&v7->fields.fbxcomponent + (int)v8);
    if ( !v9 )
      goto LABEL_13;
    EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(v9, 0LL);
    this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    actorObject = (int)v7->fields.actorObject;
    if ( (int)++v8 >= actorObject )
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
    sub_B170D4();
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

  if ( (byte_40FDA96 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_22340/*"summon"*/, method);
    byte_40FDA96 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_22340/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_B170D4();
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_34843248(0, 1000, 0LL) < StepRate;
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

  if ( (byte_40FDAA4 & 1) == 0 )
  {
    sub_B16FFC(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_40FDAA4 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_32025484(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_32025484(
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
  int32_t LimitCount; // w0
  struct BattleServantData_o *v19; // x8
  int32_t v20; // w22
  int32_t v21; // w23

  if ( (byte_40FDAA5 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_40FDAA5 = 1;
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
          LimitCount = BattleActorControl__getLimitCount(this, v17),
          (v19 = this->fields.battleSvtData) == 0LL) )
    {
      sub_B170D4();
    }
    v20 = LimitCount;
    v21 = v19->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v11 = isNp;
    v12 = v16;
    v13 = v20;
    v14 = v21;
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
  __int64 v4; // x4
  __int64 v8; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FDAF2 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__coAddAura_d__316_TypeInfo, *(_QWORD *)&auraEffectId);
    byte_40FDAF2 = 1;
  }
  v8 = sub_B170CC(
         BattleActorControl__coAddAura_d__316_TypeInfo,
         *(_QWORD *)&auraEffectId,
         *(_QWORD *)&priority,
         method,
         v4);
  BattleActorControl__coAddAura_d__316___ctor((BattleActorControl__coAddAura_d__316_o *)v8, 0, 0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_DWORD *)(v8 + 40) = auraEffectId;
  *(_DWORD *)(v8 + 56) = priority;
  return (System_Collections_IEnumerator_o *)v8;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__colShiftServant(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x22
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
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_40FDAF5 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__colShiftServant_d__322_TypeInfo, shiftSvt);
    byte_40FDAF5 = 1;
  }
  v9 = sub_B170CC(BattleActorControl__colShiftServant_d__322_TypeInfo, shiftSvt, isShift, finishCallback, method);
  BattleActorControl__colShiftServant_d__322___ctor((BattleActorControl__colShiftServant_d__322_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_B170D4();
  *(_QWORD *)(v9 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 32), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_B16F98((BattleServantConfConponent_o *)(v9 + 40), (System_Int32_array **)shiftSvt, v16, v17, v18, v19, v20, v21);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v9 + 56),
    (System_Int32_array **)finishCallback,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  return (System_Collections_IEnumerator_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__colShiftServantChange(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
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

  if ( (byte_40FDAF6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__colShiftServantChange_d__323_TypeInfo, shiftSvt);
    byte_40FDAF6 = 1;
  }
  v8 = sub_B170CC(BattleActorControl__colShiftServantChange_d__323_TypeInfo, shiftSvt, isShift, method, v4);
  BattleActorControl__colShiftServantChange_d__323___ctor(
    (BattleActorControl__colShiftServantChange_d__323_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 32) = shiftSvt;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 32), (System_Int32_array **)shiftSvt, v15, v16, v17, v18, v19, v20);
  *(_BYTE *)(v8 + 48) = isShift;
  return (System_Collections_IEnumerator_o *)v8;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__collChangeAppearance(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDAEE & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__collChangeAppearance_d__311_TypeInfo, method);
    byte_40FDAEE = 1;
  }
  v6 = sub_B170CC(BattleActorControl__collChangeAppearance_d__311_TypeInfo, method, v2, v3, v4);
  BattleActorControl__collChangeAppearance_d__311___ctor(
    (BattleActorControl__collChangeAppearance_d__311_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadDressServant(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDAE9 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__colloadDressServant_d__306_TypeInfo, flg);
    byte_40FDAE9 = 1;
  }
  v7 = sub_B170CC(BattleActorControl__colloadDressServant_d__306_TypeInfo, flg, method, v3, v4);
  BattleActorControl__colloadDressServant_d__306___ctor((BattleActorControl__colloadDressServant_d__306_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_BYTE *)(v7 + 40) = flg;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__colloadTransformServant(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDAE8 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__colloadTransformServant_d__304_TypeInfo, method);
    byte_40FDAE8 = 1;
  }
  v6 = sub_B170CC(BattleActorControl__colloadTransformServant_d__304_TypeInfo, method, v2, v3, v4);
  BattleActorControl__colloadTransformServant_d__304___ctor(
    (BattleActorControl__colloadTransformServant_d__304_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__coroutinePostCallBack(
        BattleActorControl_o *this,
        BattleCallBackBase_o *callBack,
        float waitTime,
        const MethodInfo *method)
{
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40FDAA1 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__coroutinePostCallBack_d__198_TypeInfo, callBack);
    byte_40FDAA1 = 1;
  }
  v8 = sub_B170CC(BattleActorControl__coroutinePostCallBack_d__198_TypeInfo, callBack, method, v4, v5);
  BattleActorControl__coroutinePostCallBack_d__198___ctor(
    (BattleActorControl__coroutinePostCallBack_d__198_o *)v8,
    0,
    0LL);
  if ( !v8 )
    sub_B170D4();
  *(_QWORD *)(v8 + 40) = callBack;
  sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), (System_Int32_array **)callBack, v9, v10, v11, v12, v13, v14);
  *(float *)(v8 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v8;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FDAED & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_5469/*"END_LOAD"*/, method);
    byte_40FDAED = 1;
  }
  BattleActorControl__sendEventFSM_32017324(this, (System_String_o *)StringLiteral_5469/*"END_LOAD"*/, 0, v2);
}


void __fastcall BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x1
  struct BattleServantData_o *v8; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *actiondata; // x8
  const MethodInfo *v11; // x3
  BattleActionData_o *v12; // x0
  BattleServantData_o *v13; // x0
  BattleServantData_o *v14; // x0
  const MethodInfo *v15; // x2
  BattlePerformance_o *performance; // x0

  if ( (byte_40FDAA2 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8760/*"MOTION_BACK"*/, method);
    byte_40FDAA2 = 1;
  }
  BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_21;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v6);
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
  if ( System_String__op_Equality(actiondata->fields.motionname, (System_String_o *)StringLiteral_8760/*"MOTION_BACK"*/, 0LL) )
  {
LABEL_11:
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v7);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v11);
  }
  v12 = this->fields.actiondata;
  if ( !v12 )
    goto LABEL_21;
  if ( BattleActionData__isDeadMotion(v12, 0LL) )
  {
    v13 = this->fields.battleSvtData;
    if ( !v13 )
      goto LABEL_21;
    if ( !BattleServantData__isDeadStand(v13, 0LL) )
    {
      v14 = this->fields.battleSvtData;
      if ( !v14 )
        goto LABEL_21;
      if ( !BattleServantData__isDeadWait(v14, 0LL) )
        BattleActorControl__invisibleSvtModel(this, 1, v15);
    }
  }
  performance = this->fields.performance;
  if ( !performance )
LABEL_21:
    sub_B170D4();
  BattlePerformance__endActionData(performance, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_32017324(this, call, 0, v3);
}


void __fastcall BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Component_o *parent; // x0
  WellFired_USTimelineContainer_array *ComponentsInChildren_USTimelineContainer; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  WellFired_USTimelineContainer_array *v11; // x19
  unsigned int v12; // w21
  Il2CppClass **v13; // x8
  UnityEngine_Component_o *v14; // x20
  System_String_o *name; // x0
  int v16; // w8
  WellFired_USTimelineContainer_array *v17; // x20
  unsigned int v18; // w24
  UnityEngine_ParticleSystem_o *v19; // x0

  if ( (byte_40FDAF7 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v3);
    sub_B16FFC(&StringLiteral_18131/*"ef_pig_return01"*/, v4);
    byte_40FDAF7 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(transform, 0LL)) == 0LL
    || (ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     parent,
                                                     (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_B170D4();
  }
  max_length = ComponentsInChildren_USTimelineContainer->max_length;
  v11 = ComponentsInChildren_USTimelineContainer;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        goto LABEL_21;
      v13 = &v11->obj.klass + (int)v12;
      v14 = (UnityEngine_Component_o *)v13[4];
      if ( !v14 )
        goto LABEL_20;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v13[4], 0LL);
      if ( !name )
        goto LABEL_20;
      ComponentsInChildren_USTimelineContainer = (WellFired_USTimelineContainer_array *)System_String__Contains(
                                                                                          name,
                                                                                          (System_String_o *)StringLiteral_18131/*"ef_pig_return01"*/,
                                                                                          0LL);
      if ( ((unsigned __int8)ComponentsInChildren_USTimelineContainer & 1) != 0 )
      {
        ComponentsInChildren_USTimelineContainer = UnityEngine_Component__GetComponentsInChildren_USTimelineContainer_(
                                                     v14,
                                                     (const MethodInfo_18BD830 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !ComponentsInChildren_USTimelineContainer )
          goto LABEL_20;
        v16 = ComponentsInChildren_USTimelineContainer->max_length;
        v17 = ComponentsInChildren_USTimelineContainer;
        if ( v16 >= 1 )
          break;
      }
LABEL_18:
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
    v18 = 0;
    while ( v18 < v16 )
    {
      v19 = (UnityEngine_ParticleSystem_o *)v17->m_Items[v18];
      if ( !v19 )
        goto LABEL_20;
      UnityEngine_ParticleSystem__set_loop(v19, 0, 0LL);
      v16 = v17->max_length;
      if ( (int)++v18 >= v16 )
        goto LABEL_18;
    }
LABEL_21:
    sub_B17100(ComponentsInChildren_USTimelineContainer, v8, v9);
    sub_B170A0();
  }
}


void __fastcall BattleActorControl__finishMotion(
        BattleActorControl_o *this,
        System_String_o *finishFsmName,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v5; // x0
  const MethodInfo *v6; // x1
  BattleActorControl_ActorMotionActiveCheck_o *v7; // x0
  BattleCallBackBase_o *v8; // x0
  const MethodInfo *v9; // x1
  BattleCallBackBase_o *v10; // x20
  BattleActorControl_ActorMotionActiveCheck_o *v11; // x0
  const MethodInfo *v12; // x2
  System_Collections_IEnumerator_o *v13; // x0
  const MethodInfo *v14; // x3

  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)finishFsmName);
  if ( !v5 )
    goto LABEL_11;
  if ( !BattleActorControl_ActorMotionActiveCheck__inactiveFSM(v5, finishFsmName, 0LL) )
  {
    BattleActorControl__finishMotion_32024184(this, v6);
    return;
  }
  v7 = BattleActorControl__get_CheckMotion(this, v6);
  if ( !v7 )
    goto LABEL_11;
  v8 = BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(v7, 0LL);
  if ( !v8 )
    goto LABEL_7;
  v10 = v8;
  v11 = BattleActorControl__get_CheckMotion(this, v9);
  if ( !v11 )
LABEL_11:
    sub_B170D4();
  v13 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v11, v10, v11->fields.afterWaitTime, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v13, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v14);
  }
}


void __fastcall BattleActorControl__finishMotion_32024184(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  BattlePerformance_o *v4; // x0
  BaseMotionSkip_o *MotionSkip; // x0
  BattlePerformance_o *v6; // x0

  if ( (byte_40FDAA0 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDAA0 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) && this->fields.actiondata )
  {
    v4 = this->fields.performance;
    if ( !v4
      || (MotionSkip = BattlePerformance__get_MotionSkip(v4, 0LL)) == 0LL
      || (((void (__fastcall *)(BaseMotionSkip_o *, Il2CppMethodPointer))MotionSkip->klass->vtable._10_MotionEnd.method)(
            MotionSkip,
            MotionSkip->klass->vtable._11_ConvertSkipDuration.methodPtr),
          (v6 = this->fields.performance) == 0LL) )
    {
      sub_B170D4();
    }
    BattlePerformance__finishMotion(v6, this, 0LL);
  }
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffect(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  TreasureDvcEntity_o *TreasureDevice; // x0
  TreasureDvcEntity_o *v7; // x8
  BattleServantData_o *v8; // x0
  int32_t id; // w21
  int32_t DispLimitCount; // w0
  struct BattleServantData_o *v11; // x8
  int32_t v12; // w20
  int32_t seqIdFromMstTDSeqWeight; // w22

  if ( (byte_40FDA7F & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, name);
    byte_40FDA7F = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (TreasureDevice = BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v7 = TreasureDevice, (v8 = this->fields.battleSvtData) == 0LL)
    || (id = v7->fields.id,
        DispLimitCount = BattleServantData__getDispLimitCount(v8, 1, 0LL),
        (v11 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B170D4();
  }
  v12 = DispLimitCount;
  seqIdFromMstTDSeqWeight = v11->fields.seqIdFromMstTDSeqWeight;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__loadNoblePhantasmEffect(id, v12, name, seqIdFromMstTDSeqWeight, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffectFromActor(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w0
  int32_t v7; // w20
  int32_t DispLimitCount; // w0
  BattleServantData_o *v9; // x8
  int32_t v10; // w21
  int32_t WeaponGroup; // w22

  if ( (byte_40FDA80 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, name);
    byte_40FDA80 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (SvtId = BattleServantData__getSvtId(battleSvtData, 0LL), !this->fields.battleSvtData)
    || (v7 = SvtId,
        DispLimitCount = BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v9 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B170D4();
  }
  v10 = DispLimitCount;
  WeaponGroup = BattleServantData__getWeaponGroup(v9, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  return ServantAssetLoadManager__loadActorEffectFromActor(v7, v10, WeaponGroup, name, 0LL);
}


int32_t __fastcall BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_B170D4();
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
    sub_B170D4();
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
  struct BattleServantData_o *battleSvtData; // x8
  ServantEntity_o *svtdata; // x0
  float actorScale; // s0
  float *p_height; // x8
  BattleServantData_o *v7; // x0
  BattleActorControl_c *v8; // x0
  float height; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FDAB6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_TypeInfo, method);
    byte_40FDAB6 = 1;
  }
  height = 0.0;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_15;
  svtdata = battleSvtData->fields.svtdata;
  if ( !svtdata )
    goto LABEL_15;
  if ( ServantEntity__getBattleHeight(svtdata, &height, 0LL) )
  {
    actorScale = this->fields.actorScale;
    p_height = &height;
    return *p_height * actorScale;
  }
  v7 = this->fields.battleSvtData;
  if ( !v7 )
LABEL_15:
    sub_B170D4();
  if ( BattleServantData__get_BattleSize(v7, 0LL) == 6 )
  {
    p_height = &this->fields.actorScale;
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
    actorScale = this->fields.actorScale;
    p_height = &v8->static_fields->defaultHeight;
  }
  return *p_height * actorScale;
}


int32_t __fastcall BattleActorControl__getLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
  return BattleServantData__getStrParam(battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o __fastcall BattleActorControl__getTargetObjectVec(
        BattleActorControl_o *this,
        int32_t pos,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s11
  UnityEngine_Object_o *targetObject; // x21
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Transform_o *v14; // x0
  float v15; // s1
  float v16; // s2
  float v17; // s0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_Transform_o *v19; // x0
  float v20; // s0
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_Transform_o *v22; // x0
  float v23; // s0
  float v24; // s1
  float v25; // s2
  struct BattlePerformance_o *v26; // x8
  float v27; // s10
  float v28; // s8
  float v29; // s9
  float v30; // s2
  float v31; // s0
  float v32; // s1
  UnityEngine_GameObject_o *myStage; // x0
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  float v37; // s0
  float v38; // s1
  float v39; // s2
  struct BattlePerformance_o *v40; // x8
  float v41; // s0
  float v42; // s1
  float v43; // s2
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDA9A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&pos);
    byte_40FDA9A = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_37;
  distanceofactor = performance->fields.distanceofactor;
  zero = UnityEngine_Vector3__get_zero(0LL);
  targetObject = (UnityEngine_Object_o *)this->fields.targetObject;
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
    v11 = this->fields.targetObject;
    if ( v11 )
    {
      transform = UnityEngine_GameObject__get_transform(v11, 0LL);
      if ( transform )
      {
        position = UnityEngine_Transform__get_position(transform, 0LL);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        goto LABEL_11;
      }
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_11:
  if ( !this->fields.dir )
    distanceofactor = -distanceofactor;
  switch ( pos )
  {
    case 0:
      v13 = this->fields.targetObject;
      if ( !v13 )
        goto LABEL_37;
      v14 = UnityEngine_GameObject__get_transform(v13, 0LL);
      if ( !v14 )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_position(v14, 0LL);
      x = distanceofactor + v17;
      goto LABEL_20;
    case 1:
      v18 = this->fields.targetObject;
      if ( !v18 )
        goto LABEL_37;
      v19 = UnityEngine_GameObject__get_transform(v18, 0LL);
      if ( !v19 )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)(&v15 - 1) = UnityEngine_Transform__get_position(v19, 0LL);
      x = v20 - distanceofactor;
LABEL_20:
      y = v15 + 0.0;
      z = v16 + 0.0;
      break;
    case 3:
      x = this->fields.criteriaPos.fields.x;
      y = this->fields.criteriaPos.fields.y;
      z = this->fields.criteriaPos.fields.z;
      break;
    case 4:
      myStage = this->fields.myStage;
      if ( !myStage )
        goto LABEL_37;
      goto LABEL_29;
    case 5:
      myStage = this->fields.enemyStage;
      if ( !myStage )
        goto LABEL_37;
LABEL_29:
      v34 = UnityEngine_GameObject__get_transform(myStage, 0LL);
      if ( !v34 )
        goto LABEL_37;
      v46 = UnityEngine_Transform__get_position(v34, 0LL);
      x = v46.fields.x;
      y = v46.fields.y;
      z = v46.fields.z;
      break;
    case 6:
      v21 = this->fields.myStage;
      if ( !v21 )
        goto LABEL_37;
      v22 = UnityEngine_GameObject__get_transform(v21, 0LL);
      if ( !v22 )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Transform__get_position(v22, 0LL);
      v26 = this->fields.performance;
      if ( !v26 )
        goto LABEL_37;
      v27 = v25;
      v28 = v23;
      v29 = v24;
      v30 = UnityEngine_Mathf__InverseLerp(40.0, 70.0, v26->fields.currentFov, 0LL);
      v31 = 2.0;
      v32 = 14.0;
      goto LABEL_35;
    case 7:
      v35 = this->fields.myStage;
      if ( !v35 )
        goto LABEL_37;
      v36 = UnityEngine_GameObject__get_transform(v35, 0LL);
      if ( !v36 )
        goto LABEL_37;
      *(UnityEngine_Vector3_o *)&v37 = UnityEngine_Transform__get_position(v36, 0LL);
      v40 = this->fields.performance;
      if ( !v40 )
        goto LABEL_37;
      v27 = v39;
      v28 = v37;
      v29 = v38;
      v30 = UnityEngine_Mathf__InverseLerp(40.0, 70.0, v40->fields.currentFov, 0LL);
      v31 = 3.0;
      v32 = 8.0;
LABEL_35:
      x = v28 + (float)(distanceofactor * UnityEngine_Mathf__LerpUnclamped(v31, v32, v30, 0LL));
      y = v29 + 0.0;
      z = v27 + 0.0;
      break;
    default:
      break;
  }
  v41 = x;
  v42 = y;
  v43 = z;
  result.fields.z = v43;
  result.fields.y = v42;
  result.fields.x = v41;
  return result;
}


int32_t __fastcall BattleActorControl__getWaveCount(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v4; // x8
  struct BattleData_o *data; // x8

  if ( (byte_40FDA7E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FDA7E = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
    return -1;
  v4 = this->fields.performance;
  if ( !v4 || (data = v4->fields.data) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActorControl_ActorMotionActiveCheck_o *result; // x0
  BattleActorControl_ActorMotionActiveCheck_o *v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FDA9B & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_ActorMotionActiveCheck_TypeInfo, method);
    byte_40FDA9B = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v7 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_B170CC(
                                                          BattleActorControl_ActorMotionActiveCheck_TypeInfo,
                                                          method,
                                                          v2,
                                                          v3,
                                                          v4);
    BattleActorControl_ActorMotionActiveCheck___ctor(v7, this, 0LL);
    this->fields._checkMotion = v7;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._checkMotion,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    return this->fields._checkMotion;
  }
  return result;
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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
    sub_B170D4();
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w19
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w20

  if ( (byte_40FDA7D & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40FDA7D = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x19

  if ( (byte_40FDA79 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v6);
    byte_40FDA79 = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_string__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v7 )
    sub_B170D4();
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v7,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  __int64 v4; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  UnityEngine_Object_o *v8; // x19
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0

  v3 = this;
  if ( (byte_40FDA93 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_13104/*"SummonEndFlag"*/, v4);
    byte_40FDA93 = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B170D4();
  v6 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v6 < 1 )
    return 0;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v8 = (UnityEngine_Object_o *)motionFSM->m_Items[v7];
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v8 )
        goto LABEL_19;
      Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v8, 0LL);
      if ( !Fsm )
        goto LABEL_19;
      variables = Fsm->fields.variables;
      if ( !variables )
        goto LABEL_19;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                       variables,
                                       (System_String_o *)StringLiteral_13104/*"SummonEndFlag"*/,
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
    LODWORD(v6) = motionFSM->max_length;
    if ( (__int64)++v7 >= (int)v6 )
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
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_B170D4();
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  BattleActorControl_EndCallEvent_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x3
  int32_t v66; // [xsp+Ch] [xbp-54h] BYREF
  float v67; // [xsp+28h] [xbp-38h] BYREF
  float v68; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40FDABF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_moveStep__, target);
    sub_B16FFC(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, v20);
    sub_B16FFC(&float_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v22);
    sub_B16FFC(&StringLiteral_12320/*"STEP_START"*/, v23);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v24);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v25);
    sub_B16FFC(&StringLiteral_22235/*"step_back"*/, v26);
    byte_40FDABF = 1;
  }
  this->fields.targetObject = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32029680(this, (System_String_o *)StringLiteral_22235/*"step_back"*/, 0, v45);
  v50 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v46, v47, v48, v49);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v50, 0LL);
  v55 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v51, v52, v53, v54);
  BattleActorControl_EndCallEvent___ctor(v55, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v50 )
    sub_B170D4();
  *(_QWORD *)(v50 + 16) = v55;
  sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v68 = hight;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_19072/*"hight"*/,
    v62,
    0LL);
  v67 = time;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v67);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_22584/*"time"*/,
    v63,
    0LL);
  v66 = pos;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v66);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_21418/*"pos"*/,
    v64,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12320/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v50,
    v65);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_40FDAC1 & 1) == 0 )
  {
    sub_B16FFC(&iTween_TypeInfo, method);
    byte_40FDAC1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  BattleActorControl_EndCallEvent_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x3
  int32_t v66; // [xsp+Ch] [xbp-54h] BYREF
  float v67; // [xsp+28h] [xbp-38h] BYREF
  float v68; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40FDABC & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_moveJump__, target);
    sub_B16FFC(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, v20);
    sub_B16FFC(&float_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_8267/*"JUMP_UP"*/, v22);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v23);
    sub_B16FFC(&StringLiteral_20000/*"jump"*/, v24);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v25);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v26);
    byte_40FDABC = 1;
  }
  this->fields.targetObject = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32029680(this, (System_String_o *)StringLiteral_20000/*"jump"*/, 0, v45);
  v50 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v46, v47, v48, v49);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v50, 0LL);
  v55 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v51, v52, v53, v54);
  BattleActorControl_EndCallEvent___ctor(v55, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v50 )
    sub_B170D4();
  *(_QWORD *)(v50 + 16) = v55;
  sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v68 = hight;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_19072/*"hight"*/,
    v62,
    0LL);
  v67 = time;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v67);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_22584/*"time"*/,
    v63,
    0LL);
  v66 = pos;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v66);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_21418/*"pos"*/,
    v64,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8267/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v50,
    v65);
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  BattleActorControl_EndCallEvent_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x3
  int32_t v66; // [xsp+Ch] [xbp-54h] BYREF
  float v67; // [xsp+28h] [xbp-38h] BYREF
  float v68; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40FDABE & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_moveStep__, target);
    sub_B16FFC(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, v20);
    sub_B16FFC(&float_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v22);
    sub_B16FFC(&StringLiteral_12320/*"STEP_START"*/, v23);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v24);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v25);
    sub_B16FFC(&StringLiteral_22236/*"step_front"*/, v26);
    byte_40FDABE = 1;
  }
  this->fields.targetObject = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32029680(this, (System_String_o *)StringLiteral_22236/*"step_front"*/, 0, v45);
  v50 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v46, v47, v48, v49);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v50, 0LL);
  v55 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v51, v52, v53, v54);
  BattleActorControl_EndCallEvent___ctor(v55, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v50 )
    sub_B170D4();
  *(_QWORD *)(v50 + 16) = v55;
  sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v68 = hight;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_19072/*"hight"*/,
    v62,
    0LL);
  v67 = time;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v67);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_22584/*"time"*/,
    v63,
    0LL);
  v66 = pos;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v66);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_21418/*"pos"*/,
    v64,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12320/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v50,
    v65);
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
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  __int64 v54; // x21
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  BattleActorControl_EndCallEvent_o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  Il2CppObject *v66; // x0
  Il2CppObject *v67; // x0
  Il2CppObject *v68; // x0
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  __int64 v74; // x20
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  BattleActorControl_EndCallEvent_o *v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  const MethodInfo *v86; // x3
  int32_t v87; // [xsp+Ch] [xbp-54h] BYREF
  float v88; // [xsp+28h] [xbp-38h] BYREF
  float v89; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40FDABD & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_moveStep__, target);
    sub_B16FFC(&Method_BattleActorControl_playAnimation__, v18);
    sub_B16FFC(&BattleActorControl_EndCallEvent_TypeInfo, v19);
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, v20);
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, v21);
    sub_B16FFC(&float_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v23);
    sub_B16FFC(&StringLiteral_12320/*"STEP_START"*/, v24);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v25);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v26);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v27);
    sub_B16FFC(&StringLiteral_20914/*"name"*/, v28);
    sub_B16FFC(&StringLiteral_22236/*"step_front"*/, v29);
    sub_B16FFC(&StringLiteral_12319/*"STEP_END_02"*/, v30);
    byte_40FDABD = 1;
  }
  this->fields.targetObject = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  BattleActorControl__playAnimation_32029680(this, (System_String_o *)StringLiteral_22236/*"step_front"*/, 0, v49);
  v54 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v50, v51, v52, v53);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v54, 0LL);
  v59 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v55, v56, v57, v58);
  BattleActorControl_EndCallEvent___ctor(v59, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v54 )
    goto LABEL_6;
  *(_QWORD *)(v54 + 16) = v59;
  sub_B16F98((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)v59, v60, v61, v62, v63, v64, v65);
  v89 = hight;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v89);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v54,
    (System_String_o *)StringLiteral_19072/*"hight"*/,
    v66,
    0LL);
  v88 = time;
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v88);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v54,
    (System_String_o *)StringLiteral_22584/*"time"*/,
    v67,
    0LL);
  v87 = pos;
  v68 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v87);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v54,
    (System_String_o *)StringLiteral_21418/*"pos"*/,
    v68,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12320/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v54,
    v69);
  v74 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v70, v71, v72, v73);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v74, 0LL);
  v79 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v75, v76, v77, v78);
  BattleActorControl_EndCallEvent___ctor(v79, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v74 )
LABEL_6:
    sub_B170D4();
  *(_QWORD *)(v74 + 16) = v79;
  sub_B16F98((BattleServantConfConponent_o *)(v74 + 16), (System_Int32_array **)v79, v80, v81, v82, v83, v84, v85);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v74,
    (System_String_o *)StringLiteral_20914/*"name"*/,
    (Il2CppObject *)StringLiteral_23096/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12319/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v74,
    v86);
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
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  BattleActorControl_EndCallEvent_o *v55; // x22
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x0
  const MethodInfo *v65; // x3
  int32_t v66; // [xsp+Ch] [xbp-54h] BYREF
  float v67; // [xsp+28h] [xbp-38h] BYREF
  float v68; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_40FDAC0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_moveStep__, target);
    sub_B16FFC(&BattleActorControl_EndCallEvent_TypeInfo, v18);
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, v19);
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, v20);
    sub_B16FFC(&float_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_22697/*"treasure_arms"*/, v22);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v23);
    sub_B16FFC(&StringLiteral_12320/*"STEP_START"*/, v24);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v25);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v26);
    byte_40FDAC0 = 1;
  }
  this->fields.targetObject = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetObject,
    (System_Int32_array **)target,
    *(System_String_array ***)&pos,
    (System_String_array **)pmevent,
    (System_Boolean_array **)sendEventCallObject,
    (System_Int32_array **)sendEventCallMethod,
    (System_Int32_array *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionevent,
    (System_Int32_array **)pmevent,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallObject,
    (System_Int32_array **)sendEventCallObject,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endmotionCallMethod,
    (System_Int32_array **)sendEventCallMethod,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  BattleActorControl__playAnimation_32029680(this, (System_String_o *)StringLiteral_22697/*"treasure_arms"*/, 0, v45);
  v50 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v46, v47, v48, v49);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v50, 0LL);
  v55 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v51, v52, v53, v54);
  BattleActorControl_EndCallEvent___ctor(v55, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v50 )
    sub_B170D4();
  *(_QWORD *)(v50 + 16) = v55;
  sub_B16F98((BattleServantConfConponent_o *)(v50 + 16), (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
  v68 = hight;
  v62 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_19072/*"hight"*/,
    v62,
    0LL);
  v67 = time;
  v63 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v67);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_22584/*"time"*/,
    v63,
    0LL);
  v66 = pos;
  v64 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v66);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v50,
    (System_String_o *)StringLiteral_21418/*"pos"*/,
    v64,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12320/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v50,
    v65);
}


void __fastcall BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Hashtable_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v23; // [xsp+8h] [xbp-28h] BYREF
  int v24; // [xsp+Ch] [xbp-24h] BYREF
  char v25[4]; // [xsp+18h] [xbp-18h] BYREF
  int v26; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_40FDAC7 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v8);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&float_TypeInfo, v11);
    sub_B16FFC(&StringLiteral_18046/*"easetype"*/, v12);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v13);
    sub_B16FFC(&StringLiteral_23314/*"y"*/, v14);
    sub_B16FFC(&StringLiteral_19885/*"islocal"*/, v15);
    sub_B16FFC(&iTween_TypeInfo, v16);
    byte_40FDAC7 = 1;
  }
  v17 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v3, v4, v5);
  System_Collections_Hashtable___ctor_38240048(v17, 0LL);
  v26 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( !v17 )
    sub_B170D4();
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_23314/*"y"*/,
    v18,
    v17->klass->vtable._24_Clear.methodPtr);
  v25[0] = 1;
  v19 = j_il2cpp_value_box_0(bool_TypeInfo, v25);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_19885/*"islocal"*/,
    v19,
    v17->klass->vtable._24_Clear.methodPtr);
  v24 = 0;
  v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_18046/*"easetype"*/,
    v20,
    v17->klass->vtable._24_Clear.methodPtr);
  v23 = time;
  v21 = j_il2cpp_value_box_0(float_TypeInfo, &v23);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v17->klass->vtable._23_Add.method)(
    v17,
    StringLiteral_22584/*"time"*/,
    v21,
    v17->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(actorObject, v17, 0LL);
}


void __fastcall BattleActorControl__moveJump(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x21
  __int64 v11; // x0
  float *v12; // x0
  float v13; // s8
  float *v14; // x0
  float v15; // s9
  int32_t v16; // w1
  const MethodInfo *v17; // x2
  BattleActorControl_o *v18; // x0
  float v19; // s0
  float v20; // s1

  v3 = table;
  if ( (byte_40FDAC3 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, table);
    sub_B16FFC(&float_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v6);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v7);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v8);
    byte_40FDAC3 = 1;
  }
  if ( !v3
    || (v9 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
               v3,
               StringLiteral_19072/*"hight"*/,
               v3->klass->vtable._30_set_Item.methodPtr),
        v10 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
                v3,
                StringLiteral_22584/*"time"*/,
                v3->klass->vtable._30_set_Item.methodPtr),
        v11 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
                v3,
                StringLiteral_21418/*"pos"*/,
                v3->klass->vtable._30_set_Item.methodPtr),
        !v9) )
  {
LABEL_12:
    sub_B170D4();
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B173C8(v9);
    goto LABEL_14;
  }
  v3 = (System_Collections_Hashtable_o *)v11;
  v12 = (float *)j_il2cpp_object_unbox_0(v9);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B173C8(v10);
    goto LABEL_15;
  }
  v13 = *v12;
  v14 = (float *)j_il2cpp_object_unbox_0(v10);
  if ( !v3 )
    goto LABEL_12;
  if ( v3->klass->_1.element_class != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = (BattleActorControl_o *)sub_B173C8(v3);
    goto LABEL_11;
  }
  v15 = *v14;
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v3);
  v18 = this;
  v19 = v13;
  v20 = v15;
LABEL_11:
  BattleActorControl__moveJump_32042332(v18, v19, v20, v16, v17);
}


void __fastcall BattleActorControl__moveJump_32042332(
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
  BattleActorControl__moveUp_32041204(this, hight, time, v9);
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
  __int64 v28; // x0
  __int64 v29; // x0
  bool v30; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v32; // x19
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+0h] [xbp-50h] BYREF
  float v34; // [xsp+18h] [xbp-38h] BYREF
  int v35; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FDAC4 & 1) == 0 )
  {
    sub_B16FFC(&iTween_EaseType_TypeInfo, *(_QWORD *)&pos);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v14);
    sub_B16FFC(&float_TypeInfo, v15);
    sub_B16FFC(&UnityEngine_Vector3_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_18046/*"easetype"*/, v17);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v18);
    sub_B16FFC(&StringLiteral_21174/*"oncompleteparams"*/, v19);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v20);
    sub_B16FFC(&StringLiteral_21419/*"position"*/, v21);
    sub_B16FFC(&StringLiteral_18285/*"endMotion"*/, v22);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v23);
    sub_B16FFC(&iTween_TypeInfo, v24);
    byte_40FDAC4 = 1;
  }
  v25 = (System_Collections_Hashtable_o *)sub_B170CC(
                                            System_Collections_Hashtable_TypeInfo,
                                            *(_QWORD *)&pos,
                                            endcall,
                                            callbackObject,
                                            callbackEvent);
  System_Collections_Hashtable___ctor_38240048(v25, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v26);
  v27 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec);
  if ( !v25 )
    sub_B170D4();
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_21419/*"position"*/,
    v27,
    v25->klass->vtable._24_Clear.methodPtr);
  v35 = 1;
  v28 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v35);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_18046/*"easetype"*/,
    v28,
    v25->klass->vtable._24_Clear.methodPtr);
  v34 = time;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_22584/*"time"*/,
    v29,
    v25->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v30 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v30 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21175/*"oncompletetarget"*/,
        callbackObject,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21173/*"oncomplete"*/,
        callbackEvent,
        v25->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21175/*"oncompletetarget"*/,
        gameObject,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_21173/*"oncomplete"*/,
        StringLiteral_18285/*"endMotion"*/,
        v25->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_21174/*"oncompleteparams"*/,
      endcall,
      v25->klass->vtable._24_Clear.methodPtr);
  }
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(v32, v25, 0LL);
}


void __fastcall BattleActorControl__moveStep(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x21
  __int64 v11; // x0
  float *v12; // x0
  float v13; // s8
  float *v14; // x0
  float v15; // s9
  int32_t v16; // w1
  const MethodInfo *v17; // x2
  BattleActorControl_o *v18; // x0
  float v19; // s0
  float v20; // s1

  v3 = table;
  if ( (byte_40FDAC2 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_POS_TypeInfo, table);
    sub_B16FFC(&float_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v6);
    sub_B16FFC(&StringLiteral_21418/*"pos"*/, v7);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v8);
    byte_40FDAC2 = 1;
  }
  if ( !v3
    || (v9 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
               v3,
               StringLiteral_19072/*"hight"*/,
               v3->klass->vtable._30_set_Item.methodPtr),
        v10 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
                v3,
                StringLiteral_22584/*"time"*/,
                v3->klass->vtable._30_set_Item.methodPtr),
        v11 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
                v3,
                StringLiteral_21418/*"pos"*/,
                v3->klass->vtable._30_set_Item.methodPtr),
        !v9) )
  {
LABEL_12:
    sub_B170D4();
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B173C8(v9);
    goto LABEL_14;
  }
  v3 = (System_Collections_Hashtable_o *)v11;
  v12 = (float *)j_il2cpp_object_unbox_0(v9);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_B173C8(v10);
    goto LABEL_15;
  }
  v13 = *v12;
  v14 = (float *)j_il2cpp_object_unbox_0(v10);
  if ( !v3 )
    goto LABEL_12;
  if ( v3->klass->_1.element_class != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = (BattleActorControl_o *)sub_B173C8(v3);
    goto LABEL_11;
  }
  v15 = *v14;
  v16 = *(_DWORD *)j_il2cpp_object_unbox_0(v3);
  v18 = this;
  v19 = v13;
  v20 = v15;
LABEL_11:
  BattleActorControl__moveStep_32040308(v18, v19, v20, v16, v17);
}


void __fastcall BattleActorControl__moveStep_32040308(
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
  BattleActorControl__moveUp_32041204(this, hight, time, v9);
}


void __fastcall BattleActorControl__moveUp(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  float *v9; // x0
  float v10; // s8
  float v11; // s1
  const MethodInfo *v12; // x1
  BattleActorControl_o *v13; // x0
  const MethodInfo *v14; // x1
  float v15; // s0

  v3 = table;
  if ( (byte_40FDAC5 & 1) == 0 )
  {
    sub_B16FFC(&float_TypeInfo, table);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v5);
    sub_B16FFC(&StringLiteral_19072/*"hight"*/, v6);
    byte_40FDAC5 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v7 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
         v3,
         StringLiteral_19072/*"hight"*/,
         v3->klass->vtable._30_set_Item.methodPtr);
  v8 = ((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))v3->klass->vtable._29_get_Item.method)(
         v3,
         StringLiteral_22584/*"time"*/,
         v3->klass->vtable._30_set_Item.methodPtr);
  if ( !v7 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v7 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_B173C8(v7);
    goto LABEL_11;
  }
  v3 = (System_Collections_Hashtable_o *)v8;
  v9 = (float *)j_il2cpp_object_unbox_0(v7);
  if ( !v3 )
LABEL_9:
    sub_B170D4();
  if ( v3->klass->_1.element_class == float_TypeInfo->_1.element_class )
  {
    v10 = *v9;
    v11 = *(float *)j_il2cpp_object_unbox_0(v3);
    BattleActorControl__moveUp_32041204(this, v10, v11, v12);
    return;
  }
LABEL_11:
  v13 = (BattleActorControl_o *)sub_B173C8(v3);
  BattleActorControl__moveDown(v13, v15, v14);
}


void __fastcall BattleActorControl__moveUp_32041204(
        BattleActorControl_o *this,
        float hight,
        float time,
        const MethodInfo *method)
{
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
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
  System_Collections_Hashtable_o *v22; // x20
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v30; // [xsp+Ch] [xbp-44h] BYREF
  float v31; // [xsp+10h] [xbp-40h] BYREF
  int v32; // [xsp+14h] [xbp-3Ch] BYREF
  char v33[4]; // [xsp+18h] [xbp-38h] BYREF
  float v34; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_40FDAC6 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, method);
    sub_B16FFC(&iTween_EaseType_TypeInfo, v10);
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, v11);
    sub_B16FFC(&float_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_18046/*"easetype"*/, v13);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v14);
    sub_B16FFC(&StringLiteral_21174/*"oncompleteparams"*/, v15);
    sub_B16FFC(&StringLiteral_21175/*"oncompletetarget"*/, v16);
    sub_B16FFC(&StringLiteral_23314/*"y"*/, v17);
    sub_B16FFC(&StringLiteral_19885/*"islocal"*/, v18);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v19);
    sub_B16FFC(&StringLiteral_20493/*"moveDown"*/, v20);
    sub_B16FFC(&iTween_TypeInfo, v21);
    byte_40FDAC6 = 1;
  }
  v22 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v4, v5, v6);
  System_Collections_Hashtable___ctor_38240048(v22, 0LL);
  v34 = hight;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v34);
  if ( !v22 )
    sub_B170D4();
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_23314/*"y"*/,
    v23,
    v22->klass->vtable._24_Clear.methodPtr);
  v33[0] = 1;
  v24 = j_il2cpp_value_box_0(bool_TypeInfo, v33);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_19885/*"islocal"*/,
    v24,
    v22->klass->vtable._24_Clear.methodPtr);
  v32 = 1;
  v25 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_18046/*"easetype"*/,
    v25,
    v22->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21175/*"oncompletetarget"*/,
    gameObject,
    v22->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21173/*"oncomplete"*/,
    StringLiteral_20493/*"moveDown"*/,
    v22->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_21174/*"oncompleteparams"*/,
    v27,
    v22->klass->vtable._24_Clear.methodPtr);
  v30 = time;
  v28 = j_il2cpp_value_box_0(float_TypeInfo, &v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
    v22,
    StringLiteral_22584/*"time"*/,
    v28,
    v22->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(actorObject, v22, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v10; // x21

  if ( (byte_40FDADF & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_skipVoice__, method);
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_40FDADF = 1;
  }
  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v10 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B170CC(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v4,
                                                                  v5,
                                                                  v6,
                                                                  v7),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B170D4();
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v10, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v9; // x21

  if ( (byte_40FDAE7 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_skipDead__, method);
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v6);
    byte_40FDAE7 = 1;
  }
  performance = this->fields.performance;
  if ( !performance
    || (statusPerf = performance->fields.statusPerf,
        v9 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B170CC(
                                                               BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4),
        BattlePerformanceStatus_TouchEventDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleActorControl_skipDead__,
          0LL),
        !statusPerf) )
  {
    sub_B170D4();
  }
  BattlePerformanceStatus__setTouchOff(statusPerf, v9, 0LL);
}


void __fastcall BattleActorControl__onTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v10; // x21

  if ( (byte_40FDADE & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_skipVoice__, method);
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_40FDADE = 1;
  }
  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v10 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B170CC(
                                                                  BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                                  v4,
                                                                  v5,
                                                                  v6,
                                                                  v7),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v10,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_B170D4();
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v10, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v9; // x21

  if ( (byte_40FDAE6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_skipDead__, method);
    sub_B16FFC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v6);
    byte_40FDAE6 = 1;
  }
  performance = this->fields.performance;
  if ( !performance
    || (statusPerf = performance->fields.statusPerf,
        v9 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_B170CC(
                                                               BattlePerformanceStatus_TouchEventDelegate_TypeInfo,
                                                               method,
                                                               v2,
                                                               v3,
                                                               v4),
        BattlePerformanceStatus_TouchEventDelegate___ctor(
          v9,
          (Il2CppObject *)this,
          Method_BattleActorControl_skipDead__,
          0LL),
        !statusPerf) )
  {
    sub_B170D4();
  }
  BattlePerformanceStatus__setTouchOn(statusPerf, v9, 0LL);
}


void __fastcall BattleActorControl__playAnimation(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  BattleActorControl_o *v8; // x0
  System_String_o *v9; // x1
  bool v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_40FDAB1 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, table);
    sub_B16FFC(&StringLiteral_20914/*"name"*/, v5);
    byte_40FDAB1 = 1;
  }
  if ( !table )
    sub_B170D4();
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_20914/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v6 && v6->klass != string_TypeInfo )
  {
    v8 = (BattleActorControl_o *)sub_B173C8(v6);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v8, v9, v10, v11);
  }
  else
  {
    BattleActorControl__playAnimation_32029680(this, v6, 0, v7);
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
  BattleFBXComponent_o *fbxcomponent; // x0

  if ( (byte_40FDAB3 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1541/*"@playAnim\n =>{0},{1}"*/, animname);
    byte_40FDAB3 = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_43739268((System_String_o *)StringLiteral_1541/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_B170D4();
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_32029680(
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
  BattleFBXComponent_o *fbxcomponent; // x0
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Animation_o *ComponentInChildren_Dropdown_DropdownItem; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v18; // x19
  UnityEngine_AnimationState_o *v19; // x0
  float length; // s0
  float v21; // s0
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v23; // x21
  struct BattleFBXComponent_o *v24; // x22
  SimpleAnimation_State_o *v25; // x0
  SimpleAnimation_State_c *klass; // x8
  SimpleAnimation_State_o *v27; // x19
  unsigned __int64 v28; // x10
  SimpleAnimation_State_c **p_offset; // x11
  __int64 p_method; // x0
  UnityEngine_AnimationClip_o *v31; // x0
  float v32; // s0
  float v33; // s0

  if ( (byte_40FDAB2 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, animname);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&SimpleAnimation_State_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v10);
    sub_B16FFC(&StringLiteral_1540/*"@playAnim\n =>{0}"*/, v11);
    byte_40FDAB2 = 1;
  }
  v13 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v13 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v13, 1, v12);
  System_String__Format((System_String_o *)StringLiteral_1540/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v13, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_35;
  BattleFBXComponent__playAnimation(fbxcomponent, v13, 0LL);
  if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_23096/*"wait"*/, 0LL) )
  {
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_35;
    ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Animation_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                             actorObject,
                                                                             (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ComponentInChildren_Dropdown_DropdownItem, 0LL, 0LL) )
    {
      if ( !ComponentInChildren_Dropdown_DropdownItem )
        goto LABEL_35;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 ComponentInChildren_Dropdown_DropdownItem,
                                                 v13,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v18 = this->fields.fbxcomponent;
        v19 = UnityEngine_Animation__get_Item(ComponentInChildren_Dropdown_DropdownItem, v13, 0LL);
        if ( v19 )
        {
          length = UnityEngine_AnimationState__get_length(v19, 0LL);
          v21 = UnityEngine_Random__Range(0.0, length, 0LL);
          if ( v18 )
          {
            v18->fields.currentAnimTime = v21;
            return;
          }
        }
LABEL_35:
        sub_B170D4();
      }
    }
    else
    {
      v22 = this->fields.actorObject;
      if ( !v22 )
        goto LABEL_35;
      v23 = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
              v22,
              (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL) )
      {
        if ( !v23 )
          goto LABEL_35;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v23, v13, 0LL) )
        {
          v24 = this->fields.fbxcomponent;
          v25 = SimpleAnimation__get_Item((SimpleAnimation_o *)v23, v13, 0LL);
          if ( !v25 )
            goto LABEL_35;
          klass = v25->klass;
          v27 = v25;
          if ( *(_WORD *)&v25->klass->_2.bitflags1 )
          {
            v28 = 0LL;
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              ++v28;
              p_offset += 2;
              if ( v28 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
                goto LABEL_29;
            }
            p_method = (__int64)&klass->vtable[*(_DWORD *)p_offset + 14].method;
          }
          else
          {
LABEL_29:
            p_method = sub_AAFEF8(v25, SimpleAnimation_State_TypeInfo, 14LL);
          }
          v31 = (UnityEngine_AnimationClip_o *)(*(__int64 (__fastcall **)(SimpleAnimation_State_o *, _QWORD))p_method)(
                                                 v27,
                                                 *(_QWORD *)(p_method + 8));
          if ( !v31 )
            goto LABEL_35;
          v32 = UnityEngine_AnimationClip__get_length(v31, 0LL);
          v33 = UnityEngine_Random__Range(0.0, v32, 0LL);
          if ( !v24 )
            goto LABEL_35;
          v24->fields.currentAnimTime = v33;
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
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BattleCallBack_T__o *v22; // x20

  if ( (byte_40FDA9E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleActionData___ctor__, badata);
    sub_B16FFC(&System_Action_BattleActionData__TypeInfo, v5);
    sub_B16FFC(&Method_BattleActorControl_playBattleActionDataLocal__, v6);
    sub_B16FFC(&Method_BattleCallBack_BattleActionData___ctor__, v7);
    sub_B16FFC(&BattleCallBack_BattleActionData__TypeInfo, v8);
    byte_40FDA9E = 1;
  }
  v9 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v9 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v9, 0LL) )
  {
    v12 = BattleActorControl__get_CheckMotion(this, v10);
    v17 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                 System_Action_BattleActionData__TypeInfo,
                                                                                 v13,
                                                                                 v14,
                                                                                 v15,
                                                                                 v16);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v17,
      (Il2CppObject *)this,
      Method_BattleActorControl_playBattleActionDataLocal__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleActionData___ctor__);
    v22 = (BattleCallBack_T__o *)sub_B170CC(BattleCallBack_BattleActionData__TypeInfo, v18, v19, v20, v21);
    BattleCallBack_object____ctor(
      v22,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v17,
      (const MethodInfo_2D33F14 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v12 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v12, (BattleCallBackBase_o *)v22, 0LL);
      return;
    }
LABEL_8:
    sub_B170D4();
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v11);
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
  BattlePerformance_o *performance; // x0
  int32_t type; // w21
  BattleActionData_c *v29; // x0
  BattlePerformance_o *v30; // x0
  BaseMotionSkip_o *MotionSkip; // x0
  const MethodInfo *v32; // x3
  BattleActionData_o *v33; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  System_String_o *v36; // x0
  BattleServantData_o *battleSvtData; // x0

  if ( (byte_40FDA9F & 1) == 0 )
  {
    sub_B16FFC(&BattleActionData_TypeInfo, badata);
    sub_B16FFC(&StringLiteral_8758/*"MOTION_"*/, v10);
    byte_40FDA9F = 1;
  }
  p_actiondata = &this->fields.actiondata;
  this->fields.actiondata = badata;
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.myShiftData, 0LL, v15, v16, v17, v18, v19, v20);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_B16F98(
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
    performance = this->fields.performance;
    if ( performance )
    {
      BattlePerformance__endActionData(performance, 0LL);
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
  if ( !*p_actiondata )
    goto LABEL_34;
  if ( BattleActionData__isCommandAttack(*p_actiondata, 0LL) )
    goto LABEL_20;
  if ( !*p_actiondata )
    goto LABEL_34;
  if ( BattleActionData__isCommonEnemyAttack(*p_actiondata, 0LL) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, (const MethodInfo *)v22);
  v30 = this->fields.performance;
  if ( !v30
    || (MotionSkip = BattlePerformance__get_MotionSkip(v30, 0LL)) == 0LL
    || (((void (__fastcall *)(BaseMotionSkip_o *, Il2CppMethodPointer))MotionSkip->klass->vtable._9_MotionStart.method)(
          MotionSkip,
          MotionSkip->klass->vtable._10_MotionEnd.methodPtr),
        (v33 = *p_actiondata) == 0LL) )
  {
LABEL_34:
    sub_B170D4();
  }
  motionname = v33->fields.motionname;
  IsVanishSkill = v33->fields.IsVanishSkill;
  if ( !motionname )
  {
    v36 = System_Int32__ToString((int)v33 + 48, 0LL);
    motionname = System_String__Concat_43743732((System_String_o *)StringLiteral_8758/*"MOTION_"*/, v36, 0LL);
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
  BattleActorControl__sendEventFSM_32017324(this, motionname, 0, v32);
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
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  __int64 v17; // x23
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  BattleActorControl_EndCallEvent_o *v22; // x24
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x3

  if ( (byte_40FDAB0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_sendEventFSM__, animname);
    sub_B16FFC(&BattleActorControl_EndCallEvent_TypeInfo, v9);
    sub_B16FFC(&BattleActorControl_EventClass_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_1542/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/, v11);
    sub_B16FFC(&StringLiteral_18384/*"event"*/, v12);
    byte_40FDAB0 = 1;
  }
  System_String__Format_43744796(
    (System_String_o *)StringLiteral_1542/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v17 = sub_B170CC(BattleActorControl_EventClass_TypeInfo, v13, v14, v15, v16);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v17, 0LL);
  v22 = (BattleActorControl_EndCallEvent_o *)sub_B170CC(BattleActorControl_EndCallEvent_TypeInfo, v18, v19, v20, v21);
  BattleActorControl_EndCallEvent___ctor(v22, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v17 )
    sub_B170D4();
  *(_QWORD *)(v17 + 16) = v22;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), (System_Int32_array **)v22, v23, v24, v25, v26, v27, v28);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v17,
    (System_String_o *)StringLiteral_18384/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v17, v29);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v30);
  else
    BattleActorControl__playAnimation_32029680(this, animname, 0, v30);
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x3

  v7 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)name);
  if ( !v7 )
    sub_B170D4();
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.actiondata, 0LL, v8, v9, v10, v11, v12, v13);
  BattleActorControl__sendMotionEventFSM(this, name, 1, v14);
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
  BattleServantData_o *battleSvtData; // x0
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  bool v17; // w8
  UnityEngine_GameObject_o *result; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_Transform_o *v22; // x23
  int v23; // s0
  UnityEngine_Transform_o *v26; // x23
  int v27; // s0
  WebViewManager_o *Instance; // x0
  UnityEngine_Transform_o *v31; // x0
  System_String_o *actorside; // x0
  UnityEngine_Transform_o *v33; // x0
  UnityEngine_Transform_o *v34; // x0
  UnityEngine_Transform_o *v35; // x0
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_40FDA98 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, effectname);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v11);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__, v12);
    sub_B16FFC(&StringLiteral_15904/*"_ENEMY"*/, v13);
    byte_40FDA98 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_28;
  WeaponGroup = BattleServantData__getWeaponGroup(battleSvtData, 1, 0LL);
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
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        v21 = UnityEngine_GameObject__get_transform(gameObject, 0LL);
        if ( transform )
        {
          UnityEngine_Transform__set_parent(transform, v21, 0LL);
          v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
          *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL);
          if ( v22 )
          {
            UnityEngine_Transform__set_localPosition(v22, *(UnityEngine_Vector3_o *)&v23, 0LL);
            v26 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
            *(UnityEngine_Vector3_o *)&v27 = UnityEngine_Vector3__get_one(0LL);
            if ( v26 )
            {
              UnityEngine_Transform__set_localScale(v26, *(UnityEngine_Vector3_o *)&v27, 0LL);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( Instance )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)Instance, effectname, 0LL, 0LL);
                v31 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
                if ( v31 )
                {
                  v37.fields.x = -x;
                  v37.fields.y = y;
                  v37.fields.z = z;
                  UnityEngine_Transform__set_localPosition(v31, v37, 0LL);
                  if ( sideflip )
                  {
                    actorside = this->fields.actorside;
                    if ( !actorside )
                      goto LABEL_28;
                    if ( System_String__Equals_43731072(actorside, (System_String_o *)StringLiteral_15904/*"_ENEMY"*/, 0LL) )
                    {
                      v33 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
                      if ( !v33 )
                        goto LABEL_28;
                      v38.fields.x = x;
                      v38.fields.y = y;
                      v38.fields.z = z;
                      UnityEngine_Transform__set_localPosition(v33, v38, 0LL);
                      v34 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
                      if ( !v34 )
                        goto LABEL_28;
                      UnityEngine_Transform__Rotate_34931432(v34, 0.0, 180.0, 0.0, 0LL);
                    }
                  }
                  v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0LL);
                  performance = this->fields.performance;
                  if ( performance && v35 )
                  {
                    UnityEngine_Transform__set_parent(v35, performance->fields.root_field, 0LL);
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
    sub_B170D4();
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

  if ( (byte_40FDAA6 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_TypeInfo, *(_QWORD *)&type);
    sub_B16FFC(&Voice_TypeInfo, v11);
    byte_40FDAA6 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( !Voice__IsDeadVoice(type, 0LL) )
  {
    v14 = 0;
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
      sub_B170D4();
    }
  }
LABEL_19:
  v14 = 1;
LABEL_21:
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v17 = BattleActorControl__playVoice_32026200(this, FileName, volume, callback, isSaveVoicePlayed, v16);
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
    sub_B16F98((BattleServantConfConponent_o *)&static_fields->prevDeadVoice, v24, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_40FDAA9 & 1) == 0 )
  {
    sub_B16FFC(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_40FDAA9 = 1;
  }
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_32027260(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_32027260(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t svtId; // w22
  int32_t limit; // w23
  int32_t overwriteSvtVoiceId; // w24
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v14; // x1
  int32_t LimitCount; // w0
  struct BattleServantData_o *v16; // x8
  int32_t uniqueID; // w21

  if ( (byte_40FDAAA & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_40FDAAA = 1;
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
            LimitCount = BattleActorControl__getLimitCount(this, v14),
            (v16 = this->fields.battleSvtData) == 0LL) )
      {
        sub_B170D4();
      }
      limit = LimitCount;
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
  int32_t LimitCount; // w0
  struct BattleServantData_o *v18; // x8
  int32_t v19; // w20
  int32_t v20; // w22

  if ( (byte_40FDAAC & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, fileName);
    byte_40FDAAC = 1;
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
          LimitCount = BattleActorControl__getLimitCount(this, v16),
          (v18 = this->fields.battleSvtData) == 0LL) )
    {
      sub_B170D4();
    }
    v19 = LimitCount;
    v20 = v18->fields.overwriteSvtVoiceId;
    if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    }
    v11 = v15;
    v12 = v19;
    v13 = v20;
  }
  return ServantAssetLoadManager__playBattleVoiceSe(v11, v12, v13, fileName, volume, 0LL);
}


SePlayer_o *__fastcall BattleActorControl__playVoice_32026200(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  __int64 v15; // x2
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  __int64 v25; // x22
  const MethodInfo *v26; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v29; // w24
  int32_t v30; // w22
  int32_t uniqueID; // w21
  int32_t v32; // w0
  int32_t v33; // w1
  int32_t v34; // w2
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w22
  const MethodInfo *v37; // x1
  int32_t LimitCount; // w0
  struct BattleServantData_o *v39; // x8
  int32_t v40; // w23
  int32_t overwriteSvtVoiceId; // w24

  if ( (byte_40FDAA7 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    sub_B16FFC(&string___TypeInfo, v11);
    byte_40FDAA7 = 1;
  }
  if ( BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId) )
  {
    ActionExtensions__Call(callback, 0LL);
    return 0LL;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_30;
  data = performance->fields.data;
  if ( !data )
    goto LABEL_30;
  ServantData = BattleData__getServantData(data, this->fields.uniqueID, 0LL);
  if ( !ServantData )
    goto LABEL_30;
  if ( BattleServantData__HasAvailablePermanentSleepBuff(ServantData, 0LL) )
  {
    if ( callback )
      System_Action__Invoke(callback, 0LL);
    return 0LL;
  }
  if ( isSaveVoicePlayed )
  {
    v17 = sub_B17014(string___TypeInfo, 1LL, v15);
    if ( !v17 )
      goto LABEL_30;
    v25 = v17;
    if ( voiceTypeId )
    {
      v17 = sub_B170BC(voiceTypeId, *(_QWORD *)(*(_QWORD *)v17 + 64LL));
      if ( !v17 )
      {
        sub_B170F4(0LL);
        sub_B170A0();
      }
    }
    if ( !*(_DWORD *)(v25 + 24) )
    {
      sub_B17100(v17, v18, v19);
      sub_B170A0();
    }
    *(_QWORD *)(v25 + 32) = voiceTypeId;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v25 + 32),
      (System_Int32_array **)voiceTypeId,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    BattleActorControl__AddServantVoicePlayed(this, (System_String_array *)v25, v26);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( battleSvtData )
    {
      SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v37);
      v39 = this->fields.battleSvtData;
      if ( v39 )
      {
        v40 = LimitCount;
        overwriteSvtVoiceId = v39->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        v32 = SvtId;
        v33 = v40;
        v34 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v32, v33, v34, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_30:
    sub_B170D4();
  }
  v29 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v30 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  v32 = v29;
  v33 = limit;
  v34 = v30;
  return ServantAssetLoadManager__playBattleVoice(v32, v33, v34, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
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
  struct System_Collections_Generic_Dictionary_int__GameObject__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Int32_array *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x8
  System_Int32_array *v13; // x20
  unsigned __int64 v14; // x23
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v15; // x0
  int32_t v16; // w21
  UnityEngine_Object_o *Item; // x22
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v18; // x0
  UnityEngine_Object_o *v19; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v20; // x0

  if ( (byte_40FDAEF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FDAEF = 1;
  }
  auraList = this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)auraList,
           (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
         (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v9 )
    goto LABEL_21;
  v12 = *(_QWORD *)&v9->max_length;
  v13 = v9;
  if ( (int)v12 >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
      {
        sub_B17100(v9, v10, v11);
        sub_B170A0();
      }
      v15 = this->fields.auraList;
      if ( !v15 )
        break;
      v16 = v13->m_Items[v14 + 1];
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v15,
                                       v16,
                                       (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v9 = (System_Int32_array *)UnityEngine_Object__op_Inequality(Item, 0LL, 0LL);
      if ( ((unsigned __int8)v9 & 1) != 0 )
      {
        v18 = this->fields.auraList;
        if ( !v18 )
          break;
        v19 = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v18,
                                        v16,
                                        (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_34809464(v19, 0LL);
      }
      LODWORD(v12) = v13->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_19;
    }
LABEL_21:
    sub_B170D4();
  }
LABEL_19:
  v20 = this->fields.auraList;
  if ( !v20 )
    goto LABEL_21;
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v20,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *auraList; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v10; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x19
  BillBoard_o *Component_srcLineSprite; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FDAF1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v8);
    byte_40FDAF1 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  auraList = this->fields.auraList;
  if ( !auraList )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
          (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  v10 = this->fields.auraList;
  if ( !v10
    || (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                   (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v10,
                   (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_21:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v14,
    Values,
    (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
            &v14,
            (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v14.fields.currentValue;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL) )
    {
      if ( !currentValue )
        goto LABEL_21;
      Component_srcLineSprite = (BillBoard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                 (UnityEngine_GameObject_o *)currentValue,
                                                 (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_21;
        BillBoard__ResetFlip(Component_srcLineSprite, 0LL);
      }
    }
  }
}


void __fastcall BattleActorControl__resetSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  __int64 v4; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v6; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v8; // x19
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0

  v3 = this;
  if ( (byte_40FDA92 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_13104/*"SummonEndFlag"*/, v4);
    byte_40FDA92 = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_B170D4();
  v6 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v6 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v6; ++i )
    {
      if ( i >= (unsigned int)v6 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v8 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_18;
        Fsm = PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v8, 0LL);
        if ( !Fsm )
          goto LABEL_18;
        variables = Fsm->fields.variables;
        if ( !variables )
          goto LABEL_18;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         variables,
                                         (System_String_o *)StringLiteral_13104/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.specialShadowObj) = 0;
      }
      LODWORD(v6) = motionFSM->max_length;
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
    sub_B170D4();
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  const MethodInfo *v4; // x3

  if ( (byte_40FDA9D & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_8764/*"MOTION_DAMAGE"*/, method);
    byte_40FDA9D = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_B170D4();
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8764/*"MOTION_DAMAGE"*/, 0, v4);
}


void __fastcall BattleActorControl__sendEventFSM(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_c **v6; // x0
  const MethodInfo *v7; // x3
  System_String_o *v8; // x8
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  bool v11; // w2

  if ( (byte_40FDA94 & 1) == 0 )
  {
    sub_B16FFC(&string_TypeInfo, table);
    sub_B16FFC(&StringLiteral_18384/*"event"*/, v5);
    byte_40FDA94 = 1;
  }
  if ( !table )
    sub_B170D4();
  v6 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_18384/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v8 = (System_String_o *)v6;
  if ( v6 && *v6 != string_TypeInfo )
  {
    v9 = (BattleActorControl_o *)sub_B173C8(v6);
  }
  else
  {
    v9 = this;
    v10 = v8;
    v11 = 0;
  }
  BattleActorControl__sendEventFSM_32017324(v9, v10, v11, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__sendEventFSM_32017324(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  __int64 v18; // x22
  __int64 v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  PlayMakerFSM_o *v28; // x0
  Il2CppObject *v29; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v31; // x8
  __int64 v32; // x9
  int max_length; // w10
  UnityEngine_Object_o *v34; // x22
  struct PlayMakerFSM_array *v35; // x8
  __int64 v36; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v37; // x21
  PlayMakerFSM_o *v38; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  System_String_o *GameObjectName; // x0
  struct PlayMakerFSM_array *v41; // x8
  __int64 v42; // x9
  PlayMakerFSM_o *v43; // x0

  if ( (byte_40FDA97 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, name);
    sub_B16FFC(&string___TypeInfo, v7);
    sub_B16FFC(&StringLiteral_23162/*"weapon"*/, v8);
    sub_B16FFC(&StringLiteral_1544/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/, v9);
    sub_B16FFC(&StringLiteral_17547/*"common"*/, v10);
    byte_40FDA97 = 1;
  }
  v11 = sub_B17014(string___TypeInfo, 2LL, isCallFinishInterrupt);
  if ( !v11 )
    goto LABEL_38;
  v18 = v11;
  v19 = StringLiteral_23162/*"weapon"*/;
  if ( StringLiteral_23162/*"weapon"*/ )
  {
    v19 = sub_B170BC(StringLiteral_23162/*"weapon"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( !v19 )
      goto LABEL_39;
    v20 = (System_Int32_array **)StringLiteral_23162/*"weapon"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( !*(_DWORD *)(v18 + 24) )
    goto LABEL_37;
  *(_QWORD *)(v18 + 32) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), v20, v12, v13, v14, v15, v16, v17);
  v19 = StringLiteral_17547/*"common"*/;
  if ( StringLiteral_17547/*"common"*/ )
  {
    v19 = sub_B170BC(StringLiteral_17547/*"common"*/, *(_QWORD *)(*(_QWORD *)v18 + 64LL));
    if ( v19 )
    {
      v20 = (System_Int32_array **)StringLiteral_17547/*"common"*/;
      goto LABEL_13;
    }
LABEL_39:
    sub_B170F4(v19);
    sub_B170A0();
  }
  v20 = 0LL;
LABEL_13:
  if ( *(_DWORD *)(v18 + 24) <= 1u )
    goto LABEL_37;
  *(_QWORD *)(v18 + 40) = v20;
  sub_B16F98((BattleServantConfConponent_o *)(v18 + 40), v20, v12, v21, v22, v23, v24, v25);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v18 + 24) )
    goto LABEL_37;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_38;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_37;
  v28 = motionFSM->m_Items[actindex];
  if ( !v28 )
    goto LABEL_38;
  v29 = *(Il2CppObject **)(v18 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName(v28, 0LL);
  v19 = (__int64)System_String__Format_43744796(
                   (System_String_o *)StringLiteral_1544/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v29,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v31 = this->fields.motionFSM;
  if ( v31 )
  {
    v32 = this->fields.actindex;
    max_length = v31->max_length;
    if ( (int)v32 < max_length )
    {
      if ( (unsigned int)v32 >= max_length )
        goto LABEL_37;
      v34 = (UnityEngine_Object_o *)v31->m_Items[v32];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v19 = UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
      if ( (v19 & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          v19 = (__int64)BattleActorControl__get_CheckMotion(this, (const MethodInfo *)v20);
          v35 = this->fields.motionFSM;
          if ( !v35 )
            goto LABEL_38;
          v36 = this->fields.actindex;
          if ( (unsigned int)v36 >= v35->max_length )
            goto LABEL_37;
          v37 = (BattleActorControl_ActorMotionActiveCheck_o *)v19;
          v38 = v35->m_Items[v36];
          if ( !v38 )
            goto LABEL_38;
          Fsm = PlayMakerFSM__get_Fsm(v38, 0LL);
          if ( !Fsm )
            goto LABEL_38;
          GameObjectName = HutongGames_PlayMaker_Fsm__get_GameObjectName(Fsm, 0LL);
          if ( !v37 )
            goto LABEL_38;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v37, GameObjectName, 0LL);
        }
        v41 = this->fields.motionFSM;
        if ( !v41 )
          goto LABEL_38;
        v42 = this->fields.actindex;
        if ( (unsigned int)v42 < v41->max_length )
        {
          v43 = v41->m_Items[v42];
          if ( v43 )
          {
            PlayMakerFSM__SendEvent(v43, name, 0LL);
            return;
          }
LABEL_38:
          sub_B170D4();
        }
LABEL_37:
        sub_B17100(v19, v20, v12);
        sub_B170A0();
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
  bool v7; // w0
  const MethodInfo *v8; // x3

  v7 = BattleActorControl__checkMotionEvent(this, name, (const MethodInfo *)isCallFinishInterrupt);
  if ( !this )
    sub_B170D4();
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_32017324(this, name, isCallFinishInterrupt, v8);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_32017324(this, name, 0, v3);
}


void __fastcall BattleActorControl__setActionData(
        BattleActorControl_o *this,
        BattleActionData_o *actiondata,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *v7; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  HutongGames_PlayMaker_FsmInt_o *v11; // x21
  struct PlayMakerFSM_array *v12; // x8
  PlayMakerFSM_o *v13; // x0
  HutongGames_PlayMaker_Fsm_o *v14; // x0
  HutongGames_PlayMaker_FsmVariables_o *v15; // x0
  struct PlayMakerFSM_array *v16; // x8
  PlayMakerFSM_o *v17; // x0
  HutongGames_PlayMaker_Fsm_o *v18; // x0
  HutongGames_PlayMaker_FsmVariables_o *v19; // x0
  struct PlayMakerFSM_array *v20; // x8
  PlayMakerFSM_o *v21; // x0
  HutongGames_PlayMaker_Fsm_o *v22; // x0
  HutongGames_PlayMaker_FsmVariables_o *v23; // x0
  HutongGames_PlayMaker_FsmInt_o *v24; // x21
  struct PlayMakerFSM_array *v25; // x8
  PlayMakerFSM_o *v26; // x0
  HutongGames_PlayMaker_Fsm_o *v27; // x0
  HutongGames_PlayMaker_FsmVariables_o *v28; // x0
  struct PlayMakerFSM_array *v29; // x8
  PlayMakerFSM_o *v30; // x0
  HutongGames_PlayMaker_Fsm_o *v31; // x0
  HutongGames_PlayMaker_FsmVariables_o *v32; // x0
  HutongGames_PlayMaker_FsmInt_o *v33; // x0

  v4 = this;
  if ( (byte_40FDA8F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4392/*"Count_Action"*/, actiondata);
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_4393/*"Count_Hit"*/, v5);
    byte_40FDA8F = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_43;
  if ( !motionFSM->max_length )
    goto LABEL_44;
  v7 = motionFSM->m_Items[0];
  if ( !v7 )
    goto LABEL_43;
  Fsm = PlayMakerFSM__get_Fsm(v7, 0LL);
  if ( !Fsm )
    goto LABEL_43;
  variables = Fsm->fields.variables;
  if ( !variables )
    goto LABEL_43;
  FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)StringLiteral_4392/*"Count_Action"*/, 0LL);
  if ( !actiondata )
    goto LABEL_43;
  v11 = FsmInt;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v11 )
    goto LABEL_43;
  v11->fields.value = (int)this;
  v12 = v4->fields.motionFSM;
  if ( !v12 )
    goto LABEL_43;
  if ( !v12->max_length )
    goto LABEL_44;
  v13 = v12->m_Items[0];
  if ( !v13 )
    goto LABEL_43;
  v14 = PlayMakerFSM__get_Fsm(v13, 0LL);
  if ( !v14 )
    goto LABEL_43;
  v15 = v14->fields.variables;
  if ( !v15 )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   v15,
                                   (System_String_o *)StringLiteral_4393/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.specialShadowObj) = actiondata->fields.attackcount;
  v16 = v4->fields.motionFSM;
  if ( !v16 )
    goto LABEL_43;
  if ( v16->max_length <= 1 )
    goto LABEL_44;
  v17 = v16->m_Items[1];
  if ( !v17 || (v18 = PlayMakerFSM__get_Fsm(v17, 0LL)) == 0LL || (v19 = v18->fields.variables) == 0LL )
LABEL_43:
    sub_B170D4();
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   v19,
                                   (System_String_o *)StringLiteral_4392/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v20 = v4->fields.motionFSM;
    if ( !v20 )
      goto LABEL_43;
    if ( v20->max_length <= 1 )
      goto LABEL_44;
    v21 = v20->m_Items[1];
    if ( !v21 )
      goto LABEL_43;
    v22 = PlayMakerFSM__get_Fsm(v21, 0LL);
    if ( !v22 )
      goto LABEL_43;
    v23 = v22->fields.variables;
    if ( !v23 )
      goto LABEL_43;
    v24 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v23, (System_String_o *)StringLiteral_4392/*"Count_Action"*/, 0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !v24 )
      goto LABEL_43;
    v24->fields.value = (int)this;
  }
  v25 = v4->fields.motionFSM;
  if ( !v25 )
    goto LABEL_43;
  if ( v25->max_length <= 1 )
  {
LABEL_44:
    sub_B17100(this, actiondata, method);
    sub_B170A0();
  }
  v26 = v25->m_Items[1];
  if ( !v26 )
    goto LABEL_43;
  v27 = PlayMakerFSM__get_Fsm(v26, 0LL);
  if ( !v27 )
    goto LABEL_43;
  v28 = v27->fields.variables;
  if ( !v28 )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   v28,
                                   (System_String_o *)StringLiteral_4393/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v29 = v4->fields.motionFSM;
  if ( !v29 )
    goto LABEL_43;
  if ( v29->max_length <= 1 )
    goto LABEL_44;
  v30 = v29->m_Items[1];
  if ( !v30 )
    goto LABEL_43;
  v31 = PlayMakerFSM__get_Fsm(v30, 0LL);
  if ( !v31 )
    goto LABEL_43;
  v32 = v31->fields.variables;
  if ( !v32 )
    goto LABEL_43;
  v33 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v32, (System_String_o *)StringLiteral_4393/*"Count_Hit"*/, 0LL);
  if ( !v33 )
    goto LABEL_43;
  v33->fields.value = actiondata->fields.attackcount;
}


void __fastcall BattleActorControl__setAddAura(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v5; // x2

  if ( !svtdata )
    sub_B170D4();
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
  struct System_Collections_Hashtable_o *v8; // x0
  struct System_Collections_Hashtable_o *v9; // x0

  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr,
          method) & 1) != 0 )
  {
    v8 = this->fields.CompleteList;
    if ( !v8 )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._39_Remove.method)(
      v8,
      name,
      v8->klass->vtable._40_get_SyncRoot.methodPtr);
  }
  v9 = this->fields.CompleteList;
  if ( !v9 )
LABEL_7:
    sub_B170D4();
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))v9->klass->vtable._23_Add.method)(
    v9,
    name,
    ec,
    v9->klass->vtable._24_Clear.methodPtr);
}


void __fastcall BattleActorControl__setAnimationEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0
  struct System_Collections_Hashtable_o *v8; // x0
  struct System_Collections_Hashtable_o *v9; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))EventList->klass->vtable._26_Contains.method)(
          EventList,
          name,
          EventList->klass->vtable._27_ContainsKey.methodPtr,
          method) & 1) != 0 )
  {
    v8 = this->fields.EventList;
    if ( !v8 )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v8->klass->vtable._39_Remove.method)(
      v8,
      name,
      v8->klass->vtable._40_get_SyncRoot.methodPtr);
  }
  v9 = this->fields.EventList;
  if ( !v9 )
LABEL_7:
    sub_B170D4();
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))v9->klass->vtable._23_Add.method)(
    v9,
    name,
    ec,
    v9->klass->vtable._24_Clear.methodPtr);
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
  struct System_Collections_Generic_Dictionary_int__GameObject__o *auraList; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v12; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  bool v14; // w19
  Il2CppObject *currentValue; // x20
  BillBoard_o *Component_srcLineSprite; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FDAF0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, flg);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__, v6);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v8);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v10);
    byte_40FDAF0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  auraList = this->fields.auraList;
  if ( !auraList )
    goto LABEL_22;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
          (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)auraList,
          (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  v12 = this->fields.auraList;
  if ( !v12
    || (Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
                   (System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v12,
                   (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_22:
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__BillBoardGroupManager_GroupData___GetEnumerator(
    &v17,
    Values,
    (const MethodInfo_227BDC0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
         &v17,
         (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v14 = flg;
    do
    {
      currentValue = v17.fields.currentValue;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)currentValue, 0LL, 0LL) )
      {
        if ( !currentValue )
          goto LABEL_22;
        Component_srcLineSprite = (BillBoard_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                   (UnityEngine_GameObject_o *)currentValue,
                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
        {
          if ( !Component_srcLineSprite )
            goto LABEL_22;
          BillBoard__setFlip(Component_srcLineSprite, v14, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__BillBoardGroupManager_GroupData___MoveNext(
              &v17,
              (const MethodInfo_27297EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void __fastcall BattleActorControl__setCamera(
        BattleActorControl_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FDA8A & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, camera);
    byte_40FDA8A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                    gameObject,
                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_B170D4();
  }
  Component_srcLineSprite->fields.mFSM = (struct CStateManager_srcLineSprite__o *)camera;
  sub_B16F98(
    (BattleServantConfConponent_o *)&Component_srcLineSprite->fields.mFSM,
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
  unsigned int position; // s8
  float y; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_Transform_o *v12; // x0
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v15; // 0:s0.4,4:s1.4,8:s2.4

  v3 = (UnityEngine_Object_o *)tr;
  if ( (byte_40FDA99 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, tr);
    byte_40FDA99 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(v3, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
      if ( transform )
      {
        position = (unsigned int)UnityEngine_Transform__get_position(transform, 0LL);
        v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v9 )
        {
          v10 = UnityEngine_GameObject__get_transform(v9, 0LL);
          if ( v10 )
          {
            v14 = UnityEngine_Transform__get_position(v10, 0LL);
            y = v14.fields.y;
            v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( v11 )
            {
              v12 = UnityEngine_GameObject__get_transform(v11, 0LL);
              if ( v12 )
              {
                v3 = (UnityEngine_Object_o *)v12;
                goto LABEL_16;
              }
            }
          }
        }
      }
    }
LABEL_17:
    sub_B170D4();
  }
  if ( !v3 )
    goto LABEL_17;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  v13 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  y = v13.fields.y;
LABEL_16:
  v15 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  LODWORD(this->fields.criteriaPos.fields.x) = position;
  this->fields.criteriaPos.fields.y = y;
  this->fields.criteriaPos.fields.z = v15.fields.z;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDir(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t dir; // w8
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_Transform_o *v11; // x0
  float v12; // s0
  float scale; // s1
  float v14; // s2
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v17; // s0
  UnityEngine_GameObject_o *v21; // x0

  dir = this->fields.dir;
  if ( !dir )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      *(UnityEngine_Quaternion_o *)&v17 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL);
      if ( transform )
      {
        UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v17, 0LL);
        v21 = this->fields.actorObject;
        if ( v21 )
        {
          v11 = UnityEngine_GameObject__get_transform(v21, 0LL);
          if ( v11 )
          {
            scale = this->fields.scale;
            v12 = -scale;
            v14 = scale;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_15:
    sub_B170D4();
  }
  if ( dir == 1 )
  {
    v4 = this->fields.actorObject;
    if ( v4 )
    {
      v5 = UnityEngine_GameObject__get_transform(v4, 0LL);
      *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Euler(0.0, 90.0, 0.0, 0LL);
      if ( v5 )
      {
        UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL);
        v10 = this->fields.actorObject;
        if ( v10 )
        {
          v11 = UnityEngine_GameObject__get_transform(v10, 0LL);
          if ( v11 )
          {
            v12 = this->fields.scale;
            scale = v12;
            v14 = v12;
LABEL_13:
            UnityEngine_Transform__set_localScale(v11, *(UnityEngine_Vector3_o *)&v12, 0LL);
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
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject
    || (transform = UnityEngine_GameObject__get_transform(actorObject, 0LL),
        *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Quaternion__Euler(0.0, 90.0, 0.0, 0LL),
        !transform)
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v5, 0LL),
        (v9 = this->fields.actorObject) == 0LL)
    || (v10 = UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v11.fields.x = this->fields.scale;
  v11.fields.y = v11.fields.x;
  v11.fields.z = v11.fields.x;
  UnityEngine_Transform__set_localScale(v10, v11, 0LL);
  this->fields.dir = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDirRight(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v5; // s0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_Transform_o *v10; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject
    || (transform = UnityEngine_GameObject__get_transform(actorObject, 0LL),
        *(UnityEngine_Quaternion_o *)&v5 = UnityEngine_Quaternion__Euler(0.0, 270.0, 0.0, 0LL),
        !transform)
    || (UnityEngine_Transform__set_localRotation(transform, *(UnityEngine_Quaternion_o *)&v5, 0LL),
        (v9 = this->fields.actorObject) == 0LL)
    || (v10 = UnityEngine_GameObject__get_transform(v9, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  v11.fields.y = this->fields.scale;
  v11.fields.x = -v11.fields.y;
  v11.fields.z = v11.fields.y;
  UnityEngine_Transform__set_localScale(v10, v11, 0LL);
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
  sub_B16F98(
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
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x0
  HutongGames_PlayMaker_FsmInt_o *Value; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t v12; // w20
  unsigned __int64 i; // x9
  struct PlayMakerFSM_array *v14; // x8
  unsigned __int64 v15; // x24
  UnityEngine_Object_o *v16; // x21
  struct PlayMakerFSM_array *v17; // x8
  PlayMakerFSM_o *v18; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  struct PlayMakerFSM_array *v21; // x8
  PlayMakerFSM_o *v22; // x0
  HutongGames_PlayMaker_Fsm_o *v23; // x0
  HutongGames_PlayMaker_FsmVariables_o *v24; // x0

  if ( (byte_40FDA8E & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&StringLiteral_8499/*"LimitedPeriod"*/, v5);
    sub_B16FFC(&StringLiteral_8350/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v6);
    byte_40FDA8E = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_WarQuestSelectionMaster )
    {
      Value = (HutongGames_PlayMaker_FsmInt_o *)ConstantMaster__GetValue(
                                                  Master_WarQuestSelectionMaster,
                                                  (System_String_o *)StringLiteral_8350/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                  0LL);
      v12 = (int)Value;
      for ( i = 0LL; ; i = 1LL )
      {
        v14 = this->fields.motionFSM;
        if ( !v14 )
          break;
        v15 = i;
        if ( i >= v14->max_length )
          goto LABEL_32;
        v16 = (UnityEngine_Object_o *)v14->m_Items[i];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        Value = (HutongGames_PlayMaker_FsmInt_o *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
        if ( ((unsigned __int8)Value & 1) != 0 )
        {
          v17 = this->fields.motionFSM;
          if ( !v17 )
            break;
          if ( v15 >= v17->max_length )
            goto LABEL_32;
          v18 = v17->m_Items[v15];
          if ( !v18 )
            break;
          Fsm = PlayMakerFSM__get_Fsm(v18, 0LL);
          if ( !Fsm )
            break;
          variables = Fsm->fields.variables;
          if ( !variables )
            break;
          Value = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)StringLiteral_8499/*"LimitedPeriod"*/, 0LL);
          if ( Value )
          {
            v21 = this->fields.motionFSM;
            if ( !v21 )
              break;
            if ( v15 >= v21->max_length )
            {
LABEL_32:
              sub_B17100(Value, v10, v11);
              sub_B170A0();
            }
            v22 = v21->m_Items[v15];
            if ( !v22 )
              break;
            v23 = PlayMakerFSM__get_Fsm(v22, 0LL);
            if ( !v23 )
              break;
            v24 = v23->fields.variables;
            if ( !v24 )
              break;
            Value = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v24, (System_String_o *)StringLiteral_8499/*"LimitedPeriod"*/, 0LL);
            if ( !Value )
              break;
            Value->fields.value = v12;
          }
        }
        if ( v15 )
          return;
      }
    }
    sub_B170D4();
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
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x25
  int32_t SvtId; // w0
  int32_t v43; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *Manager__loadActorMotion; // x0
  UnityEngine_GameObject_o *v46; // x26
  struct PlayMakerFSM_array *v47; // x25
  __int64 Component_srcLineSprite; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x26
  struct PlayMakerFSM_array *v57; // x25
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x24
  unsigned int v64; // w8
  System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v66; // x9
  unsigned int v67; // w26
  PlayMakerFSM_o *v68; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  UnityEngine_GameObject_o *v72; // x0
  struct PlayMakerFSM_array *v73; // x8
  PlayMakerFSM_o *v74; // x0
  HutongGames_PlayMaker_Fsm_o *v75; // x0
  HutongGames_PlayMaker_FsmVariables_o *v76; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct PlayMakerFSM_array *v84; // x8
  PlayMakerFSM_o *v85; // x0
  HutongGames_PlayMaker_Fsm_o *v86; // x0
  HutongGames_PlayMaker_FsmVariables_o *v87; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v88; // x0
  struct PlayMakerFSM_array *v89; // x8
  PlayMakerFSM_o *v90; // x0
  HutongGames_PlayMaker_Fsm_o *v91; // x0
  HutongGames_PlayMaker_FsmVariables_o *v92; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v93; // x0
  struct PlayMakerFSM_array *v94; // x8
  PlayMakerFSM_o *v95; // x0
  HutongGames_PlayMaker_Fsm_o *v96; // x0
  HutongGames_PlayMaker_FsmVariables_o *v97; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v98; // x0
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct PlayMakerFSM_array *v105; // x8
  PlayMakerFSM_o *v106; // x0
  HutongGames_PlayMaker_Fsm_o *v107; // x0
  HutongGames_PlayMaker_FsmVariables_o *v108; // x0
  struct PlayMakerFSM_array *v109; // x8
  char v110; // w25
  PlayMakerFSM_o *v111; // x0
  HutongGames_PlayMaker_Fsm_o *v112; // x0
  HutongGames_PlayMaker_FsmVariables_o *v113; // x0
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v116; // x8
  PlayMakerFSM_o *v117; // x0
  HutongGames_PlayMaker_Fsm_o *v118; // x0
  HutongGames_PlayMaker_FsmVariables_o *v119; // x0
  struct BattlePerformance_o *v120; // x8
  struct PlayMakerFSM_array *v121; // x8
  PlayMakerFSM_o *v122; // x0
  HutongGames_PlayMaker_Fsm_o *v123; // x0
  HutongGames_PlayMaker_FsmVariables_o *v124; // x0
  struct BattlePerformance_o *v125; // x8
  BattleServantData_o *battleSvtData; // x0
  System_String_o *StrParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  struct PlayMakerFSM_array *v129; // x8
  PlayMakerFSM_o *v130; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *v133; // x0
  HutongGames_PlayMaker_FsmVariables_o *v134; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  struct PlayMakerFSM_array *v138; // x8
  PlayMakerFSM_o *v139; // x0
  HutongGames_PlayMaker_Fsm_o *v140; // x0
  HutongGames_PlayMaker_FsmVariables_o *v141; // x0
  HutongGames_PlayMaker_FsmInt_o *v142; // x21
  _BOOL8 v143; // x0
  __int64 v144; // x1
  __int64 v145; // x2
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v146; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v147; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40FDA8D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v14);
    sub_B16FFC(&long_TypeInfo, v15);
    sub_B16FFC(&JsonManager_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v18);
    sub_B16FFC(&PlayMakerFSM___TypeInfo, v19);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v20);
    sub_B16FFC(&StringLiteral_13519/*"TargetFrontPos"*/, v21);
    sub_B16FFC(&StringLiteral_13518/*"TargetBackPos"*/, v22);
    sub_B16FFC(&StringLiteral_3458/*"Camera"*/, v23);
    sub_B16FFC(&StringLiteral_1826/*"ActorObject"*/, v24);
    sub_B16FFC(&StringLiteral_15904/*"_ENEMY"*/, v25);
    sub_B16FFC(&StringLiteral_3464/*"CameraFsm"*/, v26);
    sub_B16FFC(&StringLiteral_10602/*"Performance"*/, v27);
    sub_B16FFC(&StringLiteral_1827/*"ActorSide"*/, v28);
    byte_40FDA8D = 1;
  }
  memset(&v147, 0, sizeof(v147));
  v29 = (struct PlayMakerFSM_array *)sub_B17014(PlayMakerFSM___TypeInfo, 2LL, camera);
  this->fields.motionFSM = v29;
  p_motionFSM = &this->fields.motionFSM;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.motionFSM,
    (System_Int32_array **)v29,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v41 = v40;
  SvtId = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v43 = SvtId;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadActorMotion = ServantAssetLoadManager__loadActorMotion(v41, v43, WeaponGroup, 0LL);
  if ( !Manager__loadActorMotion )
    goto LABEL_107;
  v46 = Manager__loadActorMotion;
  UnityEngine_GameObject__SetActive(Manager__loadActorMotion, 1, 0LL);
  v47 = *p_motionFSM;
  Component_srcLineSprite = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v46,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v47 )
    goto LABEL_107;
  v56 = (System_Int32_array **)Component_srcLineSprite;
  if ( Component_srcLineSprite )
  {
    Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v47->obj.klass->_1.element_class);
    if ( !Component_srcLineSprite )
      goto LABEL_122;
  }
  if ( !v47->max_length )
    goto LABEL_108;
  v47->m_Items[0] = (PlayMakerFSM_o *)v56;
  sub_B16F98((BattleServantConfConponent_o *)v47->m_Items, v56, v50, v51, v52, v53, v54, v55);
  if ( !Object )
    goto LABEL_107;
  v57 = *p_motionFSM;
  Component_srcLineSprite = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       Object,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v57 )
    goto LABEL_107;
  v63 = (System_Int32_array **)Component_srcLineSprite;
  if ( Component_srcLineSprite )
  {
    Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v57->obj.klass->_1.element_class);
    if ( !Component_srcLineSprite )
    {
LABEL_122:
      sub_B170F4(Component_srcLineSprite);
      sub_B170A0();
    }
  }
  if ( v57->max_length <= 1 )
  {
LABEL_108:
    sub_B17100(Component_srcLineSprite, v49, v50);
    sub_B170A0();
  }
  v57->m_Items[1] = (PlayMakerFSM_o *)v63;
  sub_B16F98((BattleServantConfConponent_o *)&v57->m_Items[1], v63, v50, v58, v59, v60, v61, v62);
  v64 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v67 = v64;
    if ( v64 >= v66->max_length )
      goto LABEL_108;
    v68 = v66->m_Items[v64];
    if ( !v68 )
      goto LABEL_107;
    Fsm = PlayMakerFSM__get_Fsm(v68, 0LL);
    if ( !Fsm )
      goto LABEL_107;
    variables = Fsm->fields.variables;
    if ( !variables )
      goto LABEL_107;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      variables,
                      (System_String_o *)StringLiteral_1826/*"ActorObject"*/,
                      0LL);
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v72, 0LL);
    v73 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v67 >= v73->max_length )
      goto LABEL_108;
    v74 = v73->m_Items[v67];
    if ( !v74 )
      goto LABEL_107;
    v75 = PlayMakerFSM__get_Fsm(v74, 0LL);
    if ( !v75 )
      goto LABEL_107;
    v76 = v75->fields.variables;
    if ( !v76 )
      goto LABEL_107;
    FsmString = HutongGames_PlayMaker_FsmVariables__FindFsmString(v76, (System_String_o *)StringLiteral_1827/*"ActorSide"*/, 0LL);
    if ( !FsmString )
      goto LABEL_107;
    FsmString->fields.value = side;
    sub_B16F98(
      (BattleServantConfConponent_o *)&FsmString->fields.value,
      (System_Int32_array **)side,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v84 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v67 >= v84->max_length )
      goto LABEL_108;
    v85 = v84->m_Items[v67];
    if ( !v85 )
      goto LABEL_107;
    v86 = PlayMakerFSM__get_Fsm(v85, 0LL);
    if ( !v86 )
      goto LABEL_107;
    v87 = v86->fields.variables;
    if ( !v87 )
      goto LABEL_107;
    v88 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v87, (System_String_o *)StringLiteral_3458/*"Camera"*/, 0LL);
    if ( !v88 )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v88, camera, 0LL);
    v89 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v67 >= v89->max_length )
      goto LABEL_108;
    v90 = v89->m_Items[v67];
    if ( !v90 )
      goto LABEL_107;
    v91 = PlayMakerFSM__get_Fsm(v90, 0LL);
    if ( !v91 )
      goto LABEL_107;
    v92 = v91->fields.variables;
    if ( !v92 )
      goto LABEL_107;
    v93 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v92, (System_String_o *)StringLiteral_3464/*"CameraFsm"*/, 0LL);
    if ( !v93 )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v93, camerafsm, 0LL);
    v94 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v67 >= v94->max_length )
      goto LABEL_108;
    v95 = v94->m_Items[v67];
    if ( !v95 )
      goto LABEL_107;
    v96 = PlayMakerFSM__get_Fsm(v95, 0LL);
    if ( !v96 )
      goto LABEL_107;
    v97 = v96->fields.variables;
    if ( !v97 )
      goto LABEL_107;
    v98 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v97, (System_String_o *)StringLiteral_10602/*"Performance"*/, 0LL);
    if ( !v98 )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v98, 0LL, 0LL);
    *p_actorside = side;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    v105 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v67 >= v105->max_length )
      goto LABEL_108;
    v106 = v105->m_Items[v67];
    if ( !v106 )
      goto LABEL_107;
    v107 = PlayMakerFSM__get_Fsm(v106, 0LL);
    if ( !v107 )
      goto LABEL_107;
    v108 = v107->fields.variables;
    if ( !v108 )
      goto LABEL_107;
    Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                         v108,
                                         (System_String_o *)StringLiteral_13519/*"TargetFrontPos"*/,
                                         0LL);
    if ( Component_srcLineSprite )
    {
      if ( !*p_actorside )
        goto LABEL_107;
      Component_srcLineSprite = System_String__Equals_43731072(
                                  *p_actorside,
                                  (System_String_o *)StringLiteral_15904/*"_ENEMY"*/,
                                  0LL);
      v109 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v67 >= v109->max_length )
        goto LABEL_108;
      v110 = Component_srcLineSprite;
      v111 = v109->m_Items[v67];
      if ( !v111 )
        goto LABEL_107;
      v112 = PlayMakerFSM__get_Fsm(v111, 0LL);
      if ( !v112 )
        goto LABEL_107;
      v113 = v112->fields.variables;
      if ( !v113 )
        goto LABEL_107;
      Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           v113,
                                           (System_String_o *)StringLiteral_13519/*"TargetFrontPos"*/,
                                           0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_107;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v110 & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_107;
        *(float *)(Component_srcLineSprite + 56) = -distanceofactor;
        *(_DWORD *)(Component_srcLineSprite + 60) = 0;
        *(_DWORD *)(Component_srcLineSprite + 64) = 0;
        v116 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v67 >= v116->max_length )
          goto LABEL_108;
        v117 = v116->m_Items[v67];
        if ( !v117 )
          goto LABEL_107;
        v118 = PlayMakerFSM__get_Fsm(v117, 0LL);
        if ( !v118 )
          goto LABEL_107;
        v119 = v118->fields.variables;
        if ( !v119 )
          goto LABEL_107;
        Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                             v119,
                                             (System_String_o *)StringLiteral_13518/*"TargetBackPos"*/,
                                             0LL);
        v120 = this->fields.performance;
        if ( !v120 || !Component_srcLineSprite )
          goto LABEL_107;
        *(float *)(Component_srcLineSprite + 56) = v120->fields.distanceofactor;
      }
      else
      {
        if ( !Component_srcLineSprite )
          goto LABEL_107;
        *(float *)(Component_srcLineSprite + 56) = distanceofactor;
        *(_DWORD *)(Component_srcLineSprite + 60) = 0;
        *(_DWORD *)(Component_srcLineSprite + 64) = 0;
        v121 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v67 >= v121->max_length )
          goto LABEL_108;
        v122 = v121->m_Items[v67];
        if ( !v122 )
          goto LABEL_107;
        v123 = PlayMakerFSM__get_Fsm(v122, 0LL);
        if ( !v123 )
          goto LABEL_107;
        v124 = v123->fields.variables;
        if ( !v124 )
          goto LABEL_107;
        Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                             v124,
                                             (System_String_o *)StringLiteral_13518/*"TargetBackPos"*/,
                                             0LL);
        v125 = this->fields.performance;
        if ( !v125 || !Component_srcLineSprite )
          goto LABEL_107;
        *(float *)(Component_srcLineSprite + 56) = -v125->fields.distanceofactor;
      }
      *(_DWORD *)(Component_srcLineSprite + 60) = 0;
      *(_DWORD *)(Component_srcLineSprite + 64) = 0;
    }
    v64 = 1;
  }
  while ( !v67 );
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam(battleSvtData, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(StrParam, 0LL);
  if ( !Dictionary )
LABEL_107:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v146,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v147 = v146;
  while ( 1 )
  {
    v143 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v147,
             (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v143 )
      break;
    v129 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B170D4();
    if ( !v129->max_length )
    {
      sub_B17100(v143, v144, v145);
      sub_B170A0();
    }
    v130 = v129->m_Items[0];
    if ( !v130 )
      sub_B170D4();
    key = v147.fields.current.fields.key;
    value = v147.fields.current.fields.value;
    v133 = PlayMakerFSM__get_Fsm(v130, 0LL);
    if ( !v133 )
      sub_B170D4();
    v134 = v133->fields.variables;
    if ( !v134 )
      sub_B170D4();
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v134, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v138 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B170D4();
      if ( !v138->max_length )
      {
        sub_B17100(FsmInt, v136, v137);
        sub_B170A0();
      }
      v139 = v138->m_Items[0];
      if ( !v139 )
        sub_B170D4();
      v140 = PlayMakerFSM__get_Fsm(v139, 0LL);
      if ( !v140 )
        sub_B170D4();
      v141 = v140->fields.variables;
      if ( !v141 )
        sub_B170D4();
      v142 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v141, (System_String_o *)key, 0LL);
      if ( !v142 )
        sub_B170D4();
      if ( !value )
        sub_B170D4();
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        Component_srcLineSprite = sub_B173C8(value);
        goto LABEL_122;
      }
      v142->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v147,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x25
  int32_t SvtId; // w0
  int32_t v43; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *Manager__loadActorMotion; // x0
  UnityEngine_GameObject_o *v46; // x26
  struct PlayMakerFSM_array *v47; // x25
  __int64 Component_srcLineSprite; // x0
  __int64 v49; // x1
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x26
  struct PlayMakerFSM_array *v57; // x25
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x24
  unsigned int v64; // w8
  System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v66; // x9
  unsigned int v67; // w26
  PlayMakerFSM_o *v68; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  UnityEngine_GameObject_o *v72; // x0
  struct PlayMakerFSM_array *v73; // x8
  PlayMakerFSM_o *v74; // x0
  HutongGames_PlayMaker_Fsm_o *v75; // x0
  HutongGames_PlayMaker_FsmVariables_o *v76; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct PlayMakerFSM_array *v84; // x8
  PlayMakerFSM_o *v85; // x0
  HutongGames_PlayMaker_Fsm_o *v86; // x0
  HutongGames_PlayMaker_FsmVariables_o *v87; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v88; // x0
  struct PlayMakerFSM_array *v89; // x8
  PlayMakerFSM_o *v90; // x0
  HutongGames_PlayMaker_Fsm_o *v91; // x0
  HutongGames_PlayMaker_FsmVariables_o *v92; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v93; // x0
  struct PlayMakerFSM_array *v94; // x8
  PlayMakerFSM_o *v95; // x0
  HutongGames_PlayMaker_Fsm_o *v96; // x0
  HutongGames_PlayMaker_FsmVariables_o *v97; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v98; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v99; // x25
  UnityEngine_GameObject_o *v100; // x0
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  struct PlayMakerFSM_array *v107; // x8
  PlayMakerFSM_o *v108; // x0
  HutongGames_PlayMaker_Fsm_o *v109; // x0
  HutongGames_PlayMaker_FsmVariables_o *v110; // x0
  struct PlayMakerFSM_array *v111; // x8
  char v112; // w25
  PlayMakerFSM_o *v113; // x0
  HutongGames_PlayMaker_Fsm_o *v114; // x0
  HutongGames_PlayMaker_FsmVariables_o *v115; // x0
  struct BattlePerformance_o *v116; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v118; // x8
  PlayMakerFSM_o *v119; // x0
  HutongGames_PlayMaker_Fsm_o *v120; // x0
  HutongGames_PlayMaker_FsmVariables_o *v121; // x0
  struct BattlePerformance_o *v122; // x8
  struct PlayMakerFSM_array *v123; // x8
  PlayMakerFSM_o *v124; // x0
  HutongGames_PlayMaker_Fsm_o *v125; // x0
  HutongGames_PlayMaker_FsmVariables_o *v126; // x0
  struct BattlePerformance_o *v127; // x8
  BattleServantData_o *battleSvtData; // x0
  System_String_o *StrParam; // x21
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  struct PlayMakerFSM_array *v131; // x8
  PlayMakerFSM_o *v132; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *v135; // x0
  HutongGames_PlayMaker_FsmVariables_o *v136; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v138; // x1
  __int64 v139; // x2
  struct PlayMakerFSM_array *v140; // x8
  PlayMakerFSM_o *v141; // x0
  HutongGames_PlayMaker_Fsm_o *v142; // x0
  HutongGames_PlayMaker_FsmVariables_o *v143; // x0
  HutongGames_PlayMaker_FsmInt_o *v144; // x22
  _BOOL8 v145; // x0
  __int64 v146; // x1
  __int64 v147; // x2
  const MethodInfo *v148; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  const MethodInfo *v156; // x1
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v157; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v158; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_40FDA8B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v12);
    sub_B16FFC(&long_TypeInfo, v13);
    sub_B16FFC(&JsonManager_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_B16FFC(&PlayMakerFSM___TypeInfo, v17);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_13519/*"TargetFrontPos"*/, v19);
    sub_B16FFC(&StringLiteral_13518/*"TargetBackPos"*/, v20);
    sub_B16FFC(&StringLiteral_3458/*"Camera"*/, v21);
    sub_B16FFC(&StringLiteral_1826/*"ActorObject"*/, v22);
    sub_B16FFC(&StringLiteral_15904/*"_ENEMY"*/, v23);
    sub_B16FFC(&StringLiteral_3464/*"CameraFsm"*/, v24);
    sub_B16FFC(&StringLiteral_10602/*"Performance"*/, v25);
    sub_B16FFC(&StringLiteral_1827/*"ActorSide"*/, v26);
    byte_40FDA8B = 1;
  }
  memset(&v158, 0, sizeof(v158));
  v27 = (struct PlayMakerFSM_array *)sub_B17014(PlayMakerFSM___TypeInfo, 2LL, camera);
  this->fields.motionFSM = v27;
  p_motionFSM = &this->fields.motionFSM;
  sub_B16F98(
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
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_109;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v41 = v40;
  SvtId = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_109;
  v43 = SvtId;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadActorMotion = ServantAssetLoadManager__loadActorMotion(v41, v43, WeaponGroup, 0LL);
  if ( !Manager__loadActorMotion )
    goto LABEL_109;
  v46 = Manager__loadActorMotion;
  UnityEngine_GameObject__SetActive(Manager__loadActorMotion, 1, 0LL);
  v47 = *p_motionFSM;
  Component_srcLineSprite = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       v46,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v47 )
    goto LABEL_109;
  v56 = (System_Int32_array **)Component_srcLineSprite;
  if ( Component_srcLineSprite )
  {
    Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v47->obj.klass->_1.element_class);
    if ( !Component_srcLineSprite )
      goto LABEL_124;
  }
  if ( !v47->max_length )
    goto LABEL_110;
  v47->m_Items[0] = (PlayMakerFSM_o *)v56;
  sub_B16F98((BattleServantConfConponent_o *)v47->m_Items, v56, v50, v51, v52, v53, v54, v55);
  if ( !Object )
    goto LABEL_109;
  v57 = *p_motionFSM;
  Component_srcLineSprite = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                       Object,
                                       (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v57 )
    goto LABEL_109;
  v63 = (System_Int32_array **)Component_srcLineSprite;
  if ( Component_srcLineSprite )
  {
    Component_srcLineSprite = sub_B170BC(Component_srcLineSprite, v57->obj.klass->_1.element_class);
    if ( !Component_srcLineSprite )
    {
LABEL_124:
      sub_B170F4(Component_srcLineSprite);
      sub_B170A0();
    }
  }
  if ( v57->max_length <= 1 )
  {
LABEL_110:
    sub_B17100(Component_srcLineSprite, v49, v50);
    sub_B170A0();
  }
  v57->m_Items[1] = (PlayMakerFSM_o *)v63;
  sub_B16F98((BattleServantConfConponent_o *)&v57->m_Items[1], v63, v50, v58, v59, v60, v61, v62);
  v64 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    v67 = v64;
    if ( v64 >= v66->max_length )
      goto LABEL_110;
    v68 = v66->m_Items[v64];
    if ( !v68 )
      goto LABEL_109;
    Fsm = PlayMakerFSM__get_Fsm(v68, 0LL);
    if ( !Fsm )
      goto LABEL_109;
    variables = Fsm->fields.variables;
    if ( !variables )
      goto LABEL_109;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      variables,
                      (System_String_o *)StringLiteral_1826/*"ActorObject"*/,
                      0LL);
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, v72, 0LL);
    v73 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v67 >= v73->max_length )
      goto LABEL_110;
    v74 = v73->m_Items[v67];
    if ( !v74 )
      goto LABEL_109;
    v75 = PlayMakerFSM__get_Fsm(v74, 0LL);
    if ( !v75 )
      goto LABEL_109;
    v76 = v75->fields.variables;
    if ( !v76 )
      goto LABEL_109;
    FsmString = HutongGames_PlayMaker_FsmVariables__FindFsmString(v76, (System_String_o *)StringLiteral_1827/*"ActorSide"*/, 0LL);
    if ( !FsmString )
      goto LABEL_109;
    FsmString->fields.value = side;
    sub_B16F98(
      (BattleServantConfConponent_o *)&FsmString->fields.value,
      (System_Int32_array **)side,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v84 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v67 >= v84->max_length )
      goto LABEL_110;
    v85 = v84->m_Items[v67];
    if ( !v85 )
      goto LABEL_109;
    v86 = PlayMakerFSM__get_Fsm(v85, 0LL);
    if ( !v86 )
      goto LABEL_109;
    v87 = v86->fields.variables;
    if ( !v87 )
      goto LABEL_109;
    v88 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v87, (System_String_o *)StringLiteral_3458/*"Camera"*/, 0LL);
    if ( !v88 )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v88, camera, 0LL);
    v89 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v67 >= v89->max_length )
      goto LABEL_110;
    v90 = v89->m_Items[v67];
    if ( !v90 )
      goto LABEL_109;
    v91 = PlayMakerFSM__get_Fsm(v90, 0LL);
    if ( !v91 )
      goto LABEL_109;
    v92 = v91->fields.variables;
    if ( !v92 )
      goto LABEL_109;
    v93 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v92, (System_String_o *)StringLiteral_3464/*"CameraFsm"*/, 0LL);
    if ( !v93 )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v93, camerafsm, 0LL);
    v94 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v67 >= v94->max_length )
      goto LABEL_110;
    v95 = v94->m_Items[v67];
    if ( !v95 )
      goto LABEL_109;
    v96 = PlayMakerFSM__get_Fsm(v95, 0LL);
    if ( !v96 )
      goto LABEL_109;
    v97 = v96->fields.variables;
    if ( !v97 )
      goto LABEL_109;
    v98 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v97, (System_String_o *)StringLiteral_10602/*"Performance"*/, 0LL);
    if ( !this->fields.performance )
      goto LABEL_109;
    v99 = v98;
    v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.performance, 0LL);
    if ( !v99 )
      goto LABEL_109;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v99, v100, 0LL);
    *p_actorside = side;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.actorside,
      (System_Int32_array **)side,
      v101,
      v102,
      v103,
      v104,
      v105,
      v106);
    v107 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_109;
    if ( v67 >= v107->max_length )
      goto LABEL_110;
    v108 = v107->m_Items[v67];
    if ( !v108 )
      goto LABEL_109;
    v109 = PlayMakerFSM__get_Fsm(v108, 0LL);
    if ( !v109 )
      goto LABEL_109;
    v110 = v109->fields.variables;
    if ( !v110 )
      goto LABEL_109;
    Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                         v110,
                                         (System_String_o *)StringLiteral_13519/*"TargetFrontPos"*/,
                                         0LL);
    if ( Component_srcLineSprite )
    {
      if ( !*p_actorside )
        goto LABEL_109;
      Component_srcLineSprite = System_String__Equals_43731072(
                                  *p_actorside,
                                  (System_String_o *)StringLiteral_15904/*"_ENEMY"*/,
                                  0LL);
      v111 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_109;
      if ( v67 >= v111->max_length )
        goto LABEL_110;
      v112 = Component_srcLineSprite;
      v113 = v111->m_Items[v67];
      if ( !v113 )
        goto LABEL_109;
      v114 = PlayMakerFSM__get_Fsm(v113, 0LL);
      if ( !v114 )
        goto LABEL_109;
      v115 = v114->fields.variables;
      if ( !v115 )
        goto LABEL_109;
      Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           v115,
                                           (System_String_o *)StringLiteral_13519/*"TargetFrontPos"*/,
                                           0LL);
      v116 = this->fields.performance;
      if ( !v116 )
        goto LABEL_109;
      distanceofactor = v116->fields.distanceofactor;
      if ( (v112 & 1) != 0 )
      {
        if ( !Component_srcLineSprite )
          goto LABEL_109;
        *(float *)(Component_srcLineSprite + 56) = -distanceofactor;
        *(_DWORD *)(Component_srcLineSprite + 60) = 0;
        *(_DWORD *)(Component_srcLineSprite + 64) = 0;
        v118 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v67 >= v118->max_length )
          goto LABEL_110;
        v119 = v118->m_Items[v67];
        if ( !v119 )
          goto LABEL_109;
        v120 = PlayMakerFSM__get_Fsm(v119, 0LL);
        if ( !v120 )
          goto LABEL_109;
        v121 = v120->fields.variables;
        if ( !v121 )
          goto LABEL_109;
        Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                             v121,
                                             (System_String_o *)StringLiteral_13518/*"TargetBackPos"*/,
                                             0LL);
        v122 = this->fields.performance;
        if ( !v122 || !Component_srcLineSprite )
          goto LABEL_109;
        *(float *)(Component_srcLineSprite + 56) = v122->fields.distanceofactor;
      }
      else
      {
        if ( !Component_srcLineSprite )
          goto LABEL_109;
        *(float *)(Component_srcLineSprite + 56) = distanceofactor;
        *(_DWORD *)(Component_srcLineSprite + 60) = 0;
        *(_DWORD *)(Component_srcLineSprite + 64) = 0;
        v123 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_109;
        if ( v67 >= v123->max_length )
          goto LABEL_110;
        v124 = v123->m_Items[v67];
        if ( !v124 )
          goto LABEL_109;
        v125 = PlayMakerFSM__get_Fsm(v124, 0LL);
        if ( !v125 )
          goto LABEL_109;
        v126 = v125->fields.variables;
        if ( !v126 )
          goto LABEL_109;
        Component_srcLineSprite = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                             v126,
                                             (System_String_o *)StringLiteral_13518/*"TargetBackPos"*/,
                                             0LL);
        v127 = this->fields.performance;
        if ( !v127 || !Component_srcLineSprite )
          goto LABEL_109;
        *(float *)(Component_srcLineSprite + 56) = -v127->fields.distanceofactor;
      }
      *(_DWORD *)(Component_srcLineSprite + 60) = 0;
      *(_DWORD *)(Component_srcLineSprite + 64) = 0;
    }
    v64 = 1;
  }
  while ( !v67 );
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_109;
  StrParam = BattleServantData__getStrParam(battleSvtData, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(StrParam, 0LL);
  if ( !Dictionary )
LABEL_109:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v157,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v158 = v157;
  while ( 1 )
  {
    v145 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v158,
             (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v145 )
      break;
    v131 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_B170D4();
    if ( !v131->max_length )
    {
      sub_B17100(v145, v146, v147);
      sub_B170A0();
    }
    v132 = v131->m_Items[0];
    if ( !v132 )
      sub_B170D4();
    key = v158.fields.current.fields.key;
    value = v158.fields.current.fields.value;
    v135 = PlayMakerFSM__get_Fsm(v132, 0LL);
    if ( !v135 )
      sub_B170D4();
    v136 = v135->fields.variables;
    if ( !v136 )
      sub_B170D4();
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v136, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v140 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_B170D4();
      if ( !v140->max_length )
      {
        sub_B17100(FsmInt, v138, v139);
        sub_B170A0();
      }
      v141 = v140->m_Items[0];
      if ( !v141 )
        sub_B170D4();
      v142 = PlayMakerFSM__get_Fsm(v141, 0LL);
      if ( !v142 )
        sub_B170D4();
      v143 = v142->fields.variables;
      if ( !v143 )
        sub_B170D4();
      v144 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v143, (System_String_o *)key, 0LL);
      if ( !v144 )
        sub_B170D4();
      if ( !value )
        sub_B170D4();
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        Component_srcLineSprite = sub_B173C8(value);
        goto LABEL_124;
      }
      v144->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v158,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v148);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (System_Int32_array **)DelayEndSequenceIdListFromMotion,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  BattleActorControl__setLimitedPeriod(this, v156);
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
  sub_B16F98(
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

  v4 = this;
  if ( (byte_40FDAAD & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, flg);
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_9571/*"Noble_Check"*/, v5);
    byte_40FDAAD = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_19:
    sub_B170D4();
  v7 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = flg;
    do
    {
      if ( v8 >= (unsigned int)v7 )
      {
        sub_B17100(this, flg, method);
        sub_B170A0();
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
                                           (System_String_o *)StringLiteral_9571/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)BuffEffectNodeName_k__BackingField,
                                             (System_String_o *)StringLiteral_9571/*"Noble_Check"*/,
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
  sub_B16F98(
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
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_GameObject_o *v23; // x20
  int32_t SvtId; // w0
  int32_t v25; // w21
  int32_t WeaponGroup; // w22
  UnityEngine_GameObject_o *Manager__loadActorMotion; // x0
  UnityEngine_GameObject_o *v28; // x21
  struct PlayMakerFSM_array *v29; // x20
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  struct PlayMakerFSM_array *v36; // x8
  PlayMakerFSM_o *v37; // x0
  HutongGames_PlayMaker_Fsm_o *v38; // x0
  HutongGames_PlayMaker_FsmVariables_o *v39; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v40; // x20
  UnityEngine_GameObject_o *v41; // x0
  struct PlayMakerFSM_array *v42; // x8
  PlayMakerFSM_o *v43; // x0
  HutongGames_PlayMaker_Fsm_o *v44; // x0
  HutongGames_PlayMaker_FsmVariables_o *v45; // x0
  struct PlayMakerFSM_array *v46; // x8
  BattleActorControl_o *v47; // x20
  PlayMakerFSM_o *v48; // x0
  HutongGames_PlayMaker_Fsm_o *v49; // x0
  HutongGames_PlayMaker_FsmVariables_o *v50; // x0
  HutongGames_PlayMaker_FsmString_o *FsmString; // x0
  System_Int32_array **Value; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct PlayMakerFSM_array *v59; // x8
  PlayMakerFSM_o *v60; // x0
  HutongGames_PlayMaker_Fsm_o *v61; // x0
  HutongGames_PlayMaker_FsmVariables_o *v62; // x0
  struct PlayMakerFSM_array *v63; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v64; // x20
  PlayMakerFSM_o *v65; // x0
  HutongGames_PlayMaker_Fsm_o *v66; // x0
  HutongGames_PlayMaker_FsmVariables_o *v67; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  struct PlayMakerFSM_array *v70; // x8
  PlayMakerFSM_o *v71; // x0
  HutongGames_PlayMaker_Fsm_o *v72; // x0
  HutongGames_PlayMaker_FsmVariables_o *v73; // x0
  struct PlayMakerFSM_array *v74; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v75; // x20
  PlayMakerFSM_o *v76; // x0
  HutongGames_PlayMaker_Fsm_o *v77; // x0
  HutongGames_PlayMaker_FsmVariables_o *v78; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  struct PlayMakerFSM_array *v81; // x8
  PlayMakerFSM_o *v82; // x0
  HutongGames_PlayMaker_Fsm_o *v83; // x0
  HutongGames_PlayMaker_FsmVariables_o *v84; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v85; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v86; // x20
  UnityEngine_GameObject_o *v87; // x0
  struct PlayMakerFSM_array *v88; // x8
  PlayMakerFSM_o *v89; // x0
  HutongGames_PlayMaker_Fsm_o *v90; // x0
  HutongGames_PlayMaker_FsmVariables_o *v91; // x0
  System_String_o *actorside; // x0
  struct PlayMakerFSM_array *v93; // x8
  char v94; // w20
  PlayMakerFSM_o *v95; // x0
  HutongGames_PlayMaker_Fsm_o *v96; // x0
  HutongGames_PlayMaker_FsmVariables_o *v97; // x0
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v100; // x8
  PlayMakerFSM_o *v101; // x0
  HutongGames_PlayMaker_Fsm_o *v102; // x0
  HutongGames_PlayMaker_FsmVariables_o *v103; // x0
  HutongGames_PlayMaker_FsmVector3_o *FsmVector3; // x0
  struct BattlePerformance_o *v105; // x8
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *v107; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v112; // x1
  struct PlayMakerFSM_array *v113; // x8
  PlayMakerFSM_o *v114; // x0
  HutongGames_PlayMaker_Fsm_o *v115; // x0
  HutongGames_PlayMaker_FsmVariables_o *v116; // x0
  struct BattlePerformance_o *v117; // x8
  BattleServantData_o *battleSvtData; // x0
  System_String_o *StrParam; // x20
  System_Collections_Generic_Dictionary_string__object__o *Dictionary; // x0
  struct PlayMakerFSM_array *v121; // x8
  PlayMakerFSM_o *v122; // x0
  Il2CppObject *v123; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *v125; // x0
  HutongGames_PlayMaker_FsmVariables_o *v126; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v128; // x1
  __int64 v129; // x2
  struct PlayMakerFSM_array *v130; // x8
  PlayMakerFSM_o *v131; // x0
  HutongGames_PlayMaker_Fsm_o *v132; // x0
  HutongGames_PlayMaker_FsmVariables_o *v133; // x0
  HutongGames_PlayMaker_FsmInt_o *v134; // x21
  _BOOL8 v135; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  const MethodInfo *v138; // x1
  System_Int32_array **DelayEndSequenceIdListFromMotion; // x0
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v146; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v147; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_40FDA8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, flg);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v8);
    sub_B16FFC(&long_TypeInfo, v9);
    sub_B16FFC(&JsonManager_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v13);
    sub_B16FFC(&StringLiteral_13519/*"TargetFrontPos"*/, v14);
    sub_B16FFC(&StringLiteral_13518/*"TargetBackPos"*/, v15);
    sub_B16FFC(&StringLiteral_3458/*"Camera"*/, v16);
    sub_B16FFC(&StringLiteral_1826/*"ActorObject"*/, v17);
    sub_B16FFC(&StringLiteral_15904/*"_ENEMY"*/, v18);
    sub_B16FFC(&StringLiteral_3464/*"CameraFsm"*/, v19);
    sub_B16FFC(&StringLiteral_10602/*"Performance"*/, v20);
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_1827/*"ActorSide"*/, v21);
    byte_40FDA8C = 1;
  }
  memset(&v147, 0, sizeof(v147));
  if ( !flg )
  {
    motionFSM = v4->fields.motionFSM;
    if ( motionFSM )
    {
      if ( !motionFSM->max_length )
        goto LABEL_141;
      v107 = motionFSM->m_Items[0];
      if ( v107 )
      {
        Fsm = PlayMakerFSM__get_Fsm(v107, 0LL);
        if ( Fsm )
        {
          variables = Fsm->fields.variables;
          if ( variables )
          {
            FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                              variables,
                              (System_String_o *)StringLiteral_1826/*"ActorObject"*/,
                              0LL);
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
            if ( FsmGameObject )
            {
              HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, gameObject, 0LL);
              goto LABEL_126;
            }
          }
        }
      }
    }
    goto LABEL_127;
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_127;
  v23 = v22;
  SvtId = BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_127;
  v25 = SvtId;
  WeaponGroup = BattleServantData__getWeaponGroup(v4->fields.battleSvtData, 0, 0LL);
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadActorMotion = ServantAssetLoadManager__loadActorMotion(v23, v25, WeaponGroup, 0LL);
  if ( !Manager__loadActorMotion )
    goto LABEL_127;
  v28 = Manager__loadActorMotion;
  UnityEngine_GameObject__SetActive(Manager__loadActorMotion, 1, 0LL);
  v29 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                   v28,
                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v29 )
    goto LABEL_127;
  v35 = (System_Int32_array **)this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_B170BC(this, v29->obj.klass->_1.element_class);
    if ( !this )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !v29->max_length )
  {
LABEL_141:
    sub_B17100(this, flg, method);
    sub_B170A0();
  }
  v29->m_Items[0] = (PlayMakerFSM_o *)v35;
  sub_B16F98((BattleServantConfConponent_o *)v29->m_Items, v35, (System_String_array **)method, v30, v31, v32, v33, v34);
  v36 = v4->fields.motionFSM;
  if ( !v36 )
    goto LABEL_127;
  if ( !v36->max_length )
    goto LABEL_141;
  v37 = v36->m_Items[0];
  if ( !v37 )
    goto LABEL_127;
  v38 = PlayMakerFSM__get_Fsm(v37, 0LL);
  if ( !v38 )
    goto LABEL_127;
  v39 = v38->fields.variables;
  if ( !v39 )
    goto LABEL_127;
  v40 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v39, (System_String_o *)StringLiteral_1826/*"ActorObject"*/, 0LL);
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v40 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v40, v41, 0LL);
  v42 = v4->fields.motionFSM;
  if ( !v42 )
    goto LABEL_127;
  if ( !v42->max_length )
    goto LABEL_141;
  v43 = v42->m_Items[0];
  if ( !v43 )
    goto LABEL_127;
  v44 = PlayMakerFSM__get_Fsm(v43, 0LL);
  if ( !v44 )
    goto LABEL_127;
  v45 = v44->fields.variables;
  if ( !v45 )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   v45,
                                   (System_String_o *)StringLiteral_1827/*"ActorSide"*/,
                                   0LL);
  v46 = v4->fields.motionFSM;
  if ( !v46 )
    goto LABEL_127;
  if ( v46->max_length <= 1 )
    goto LABEL_141;
  v47 = this;
  v48 = v46->m_Items[1];
  if ( !v48 )
    goto LABEL_127;
  v49 = PlayMakerFSM__get_Fsm(v48, 0LL);
  if ( !v49 )
    goto LABEL_127;
  v50 = v49->fields.variables;
  if ( !v50 )
    goto LABEL_127;
  FsmString = HutongGames_PlayMaker_FsmVariables__FindFsmString(v50, (System_String_o *)StringLiteral_1827/*"ActorSide"*/, 0LL);
  if ( !FsmString )
    goto LABEL_127;
  Value = (System_Int32_array **)HutongGames_PlayMaker_FsmString__get_Value(FsmString, 0LL);
  if ( !v47 )
    goto LABEL_127;
  v47->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)Value;
  sub_B16F98((BattleServantConfConponent_o *)&v47->fields.specialShadowObj, Value, v53, v54, v55, v56, v57, v58);
  v59 = v4->fields.motionFSM;
  if ( !v59 )
    goto LABEL_127;
  if ( !v59->max_length )
    goto LABEL_141;
  v60 = v59->m_Items[0];
  if ( !v60 )
    goto LABEL_127;
  v61 = PlayMakerFSM__get_Fsm(v60, 0LL);
  if ( !v61 )
    goto LABEL_127;
  v62 = v61->fields.variables;
  if ( !v62 )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   v62,
                                   (System_String_o *)StringLiteral_3458/*"Camera"*/,
                                   0LL);
  v63 = v4->fields.motionFSM;
  if ( !v63 )
    goto LABEL_127;
  if ( v63->max_length <= 1 )
    goto LABEL_141;
  v64 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  v65 = v63->m_Items[1];
  if ( !v65 )
    goto LABEL_127;
  v66 = PlayMakerFSM__get_Fsm(v65, 0LL);
  if ( !v66 )
    goto LABEL_127;
  v67 = v66->fields.variables;
  if ( !v67 )
    goto LABEL_127;
  v68 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v67, (System_String_o *)StringLiteral_3458/*"Camera"*/, 0LL);
  if ( !v68 )
    goto LABEL_127;
  v69 = HutongGames_PlayMaker_FsmGameObject__get_Value(v68, 0LL);
  if ( !v64 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v64, v69, 0LL);
  v70 = v4->fields.motionFSM;
  if ( !v70 )
    goto LABEL_127;
  if ( !v70->max_length )
    goto LABEL_141;
  v71 = v70->m_Items[0];
  if ( !v71 )
    goto LABEL_127;
  v72 = PlayMakerFSM__get_Fsm(v71, 0LL);
  if ( !v72 )
    goto LABEL_127;
  v73 = v72->fields.variables;
  if ( !v73 )
    goto LABEL_127;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   v73,
                                   (System_String_o *)StringLiteral_3464/*"CameraFsm"*/,
                                   0LL);
  v74 = v4->fields.motionFSM;
  if ( !v74 )
    goto LABEL_127;
  if ( v74->max_length <= 1 )
    goto LABEL_141;
  v75 = (HutongGames_PlayMaker_FsmGameObject_o *)this;
  v76 = v74->m_Items[1];
  if ( !v76 )
    goto LABEL_127;
  v77 = PlayMakerFSM__get_Fsm(v76, 0LL);
  if ( !v77 )
    goto LABEL_127;
  v78 = v77->fields.variables;
  if ( !v78 )
    goto LABEL_127;
  v79 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v78, (System_String_o *)StringLiteral_3464/*"CameraFsm"*/, 0LL);
  if ( !v79 )
    goto LABEL_127;
  v80 = HutongGames_PlayMaker_FsmGameObject__get_Value(v79, 0LL);
  if ( !v75 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v75, v80, 0LL);
  v81 = v4->fields.motionFSM;
  if ( !v81 )
    goto LABEL_127;
  if ( !v81->max_length )
    goto LABEL_141;
  v82 = v81->m_Items[0];
  if ( !v82 )
    goto LABEL_127;
  v83 = PlayMakerFSM__get_Fsm(v82, 0LL);
  if ( !v83 )
    goto LABEL_127;
  v84 = v83->fields.variables;
  if ( !v84 )
    goto LABEL_127;
  v85 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(v84, (System_String_o *)StringLiteral_10602/*"Performance"*/, 0LL);
  if ( !v4->fields.performance )
    goto LABEL_127;
  v86 = v85;
  v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4->fields.performance, 0LL);
  if ( !v86 )
    goto LABEL_127;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v86, v87, 0LL);
  v88 = v4->fields.motionFSM;
  if ( !v88 )
    goto LABEL_127;
  if ( !v88->max_length )
    goto LABEL_141;
  v89 = v88->m_Items[0];
  if ( !v89 )
    goto LABEL_127;
  v90 = PlayMakerFSM__get_Fsm(v89, 0LL);
  if ( !v90 )
    goto LABEL_127;
  v91 = v90->fields.variables;
  if ( !v91 )
    goto LABEL_127;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmVector3(v91, (System_String_o *)StringLiteral_13519/*"TargetFrontPos"*/, 0LL) )
  {
    actorside = v4->fields.actorside;
    if ( actorside )
    {
      this = (BattleActorControl_o *)System_String__Equals_43731072(
                                       actorside,
                                       (System_String_o *)StringLiteral_15904/*"_ENEMY"*/,
                                       0LL);
      v93 = v4->fields.motionFSM;
      if ( v93 )
      {
        if ( !v93->max_length )
          goto LABEL_141;
        v94 = (char)this;
        v95 = v93->m_Items[0];
        if ( v95 )
        {
          v96 = PlayMakerFSM__get_Fsm(v95, 0LL);
          if ( v96 )
          {
            v97 = v96->fields.variables;
            if ( v97 )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                               v97,
                                               (System_String_o *)StringLiteral_13519/*"TargetFrontPos"*/,
                                               0LL);
              performance = v4->fields.performance;
              if ( performance )
              {
                distanceofactor = performance->fields.distanceofactor;
                if ( (v94 & 1) != 0 )
                {
                  if ( this )
                  {
                    *(float *)&this->fields.specialShadowObj = -distanceofactor;
                    HIDWORD(this->fields.specialShadowObj) = 0;
                    this->fields.currentSpShadowEffectId = 0;
                    v100 = v4->fields.motionFSM;
                    if ( v100 )
                    {
                      if ( !v100->max_length )
                        goto LABEL_141;
                      v101 = v100->m_Items[0];
                      if ( v101 )
                      {
                        v102 = PlayMakerFSM__get_Fsm(v101, 0LL);
                        if ( v102 )
                        {
                          v103 = v102->fields.variables;
                          if ( v103 )
                          {
                            FsmVector3 = HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           v103,
                                           (System_String_o *)StringLiteral_13518/*"TargetBackPos"*/,
                                           0LL);
                            v105 = v4->fields.performance;
                            if ( v105 )
                            {
                              if ( FsmVector3 )
                              {
                                FsmVector3->fields.value.fields.x = v105->fields.distanceofactor;
LABEL_102:
                                FsmVector3->fields.value.fields.y = 0.0;
                                FsmVector3->fields.value.fields.z = 0.0;
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
                  v113 = v4->fields.motionFSM;
                  if ( v113 )
                  {
                    if ( !v113->max_length )
                      goto LABEL_141;
                    v114 = v113->m_Items[0];
                    if ( v114 )
                    {
                      v115 = PlayMakerFSM__get_Fsm(v114, 0LL);
                      if ( v115 )
                      {
                        v116 = v115->fields.variables;
                        if ( v116 )
                        {
                          FsmVector3 = HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                         v116,
                                         (System_String_o *)StringLiteral_13518/*"TargetBackPos"*/,
                                         0LL);
                          v117 = v4->fields.performance;
                          if ( v117 )
                          {
                            if ( FsmVector3 )
                            {
                              FsmVector3->fields.value.fields.x = -v117->fields.distanceofactor;
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
    sub_B170D4();
  }
LABEL_103:
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_127;
  StrParam = BattleServantData__getStrParam(battleSvtData, 0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  Dictionary = JsonManager__getDictionary(StrParam, 0LL);
  if ( !Dictionary )
    goto LABEL_127;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v146,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)Dictionary,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v147 = v146;
  while ( 1 )
  {
    v135 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v147,
             (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v135 )
      break;
    v121 = v4->fields.motionFSM;
    if ( !v121 )
      sub_B170D4();
    if ( !v121->max_length )
    {
      sub_B17100(v135, v136, v137);
      sub_B170A0();
    }
    v122 = v121->m_Items[0];
    if ( !v122 )
      sub_B170D4();
    key = v147.fields.current.fields.key;
    v123 = v147.fields.current.fields.value;
    v125 = PlayMakerFSM__get_Fsm(v122, 0LL);
    if ( !v125 )
      sub_B170D4();
    v126 = v125->fields.variables;
    if ( !v126 )
      sub_B170D4();
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v126, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v130 = v4->fields.motionFSM;
      if ( !v130 )
        sub_B170D4();
      if ( !v130->max_length )
      {
        sub_B17100(FsmInt, v128, v129);
        sub_B170A0();
      }
      v131 = v130->m_Items[0];
      if ( !v131 )
        sub_B170D4();
      v132 = PlayMakerFSM__get_Fsm(v131, 0LL);
      if ( !v132 )
        sub_B170D4();
      v133 = v132->fields.variables;
      if ( !v133 )
        sub_B170D4();
      v134 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v133, (System_String_o *)key, 0LL);
      if ( !v134 )
        sub_B170D4();
      if ( !v123 )
        sub_B170D4();
      if ( v123->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        this = (BattleActorControl_o *)sub_B173C8(v123);
        goto LABEL_141;
      }
      v134->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(v123);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v147,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = (System_Int32_array **)BattleActorControl__GetDelayEndSequenceIdListFromMotion(
                                                              v4,
                                                              v138);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = (struct System_Collections_Generic_List_int__o *)DelayEndSequenceIdListFromMotion;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    DelayEndSequenceIdListFromMotion,
    v140,
    v141,
    v142,
    v143,
    v144,
    v145);
LABEL_126:
  BattleActorControl__setLimitedPeriod(v4, v112);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x27
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  BattleServantData_o *v49; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v50; // x21
  __int64 v51; // x22
  __int64 v52; // x23
  int32_t v53; // w0
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x22
  ServantEntity_o *v56; // x26
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t DispLimitCount; // w0
  int32_t v66; // w21
  int32_t v67; // w23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v69; // x21
  int32_t v70; // w0
  int32_t v71; // w24
  _BOOL4 isForceAppearance; // w22
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  UnityEngine_Transform_o *v81; // x21
  int v82; // s0
  const MethodInfo *v85; // x2
  struct BattleServantData_o *battleSvtData; // x0
  BattlePerformance_o *performance; // x21
  int32_t uniqueId; // w22
  int32_t CameraActionId; // w0
  System_String_o *v90; // x21
  UnityEngine_Transform_o *v91; // x0
  UnityEngine_Component_o *NodeFromLvName; // x0
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x27
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_o *HideInAnimNodeName; // x26
  bool v102; // w0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  struct UnityEngine_GameObject_o *v109; // x1
  UnityEngine_Transform_o *v110; // x0
  UnityEngine_Component_o *v111; // x0
  UnityEngine_Transform_o *v112; // x0
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  struct System_String_o *v119; // x1
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  UnityEngine_GameObject_o *v124; // x26
  UnityEngine_Transform_o *v125; // x0
  UnityEngine_Transform_o *v126; // x21
  UnityEngine_Transform_o *v127; // x0
  UnityEngine_Transform_o *v128; // x21
  int v129; // s0
  int32_t v132; // w27
  UnityEngine_Transform_o *v133; // x21
  int v134; // s0
  UnityEngine_Transform_o *v137; // x21
  int v138; // s0
  UnityEngine_Transform_o *v141; // x21
  UnityEngine_GameObject_o *v142; // x0
  UnityEngine_Transform_o *v143; // x0
  UnityEngine_Transform_o *v144; // x0
  UnityEngine_GameObject_o *actorObject; // x0
  BattleFBXComponent_o *fbxcomponent; // x21
  UnityEngine_Transform_o *v147; // x0
  BattleFBXComponent_o *v148; // x0
  _BOOL4 v149; // w21
  UnityEngine_TextAsset_o *Manager__loadAnimEvents; // x0
  const MethodInfo *v151; // x2
  BattleServantData_o *v152; // x0
  const MethodInfo *v153; // x1
  const MethodInfo *v154; // x3
  int32_t displayType; // w8
  bool v156; // w1
  bool v157; // w2
  UnityEngine_GameObject_o *v158; // x0
  System_Collections_Generic_IEnumerable_T__o *v159; // x21
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v164; // x22
  System_String_array **v165; // x2
  System_String_array **v166; // x3
  System_Boolean_array **v167; // x4
  System_Int32_array **v168; // x5
  System_Int32_array *v169; // x6
  System_Int32_array *v170; // x7
  const MethodInfo *v171; // x2
  UnityEngine_Transform_o *v172; // x21
  float v173; // s0
  float v174; // s1
  float v175; // s2
  float actorScale; // s3
  const MethodInfo *v177; // x4
  struct BattlePerformance_o *v178; // x8
  struct BattleData_o *data; // x8
  int32_t v180; // w0
  __int64 v181; // x1
  __int64 v182; // x2
  __int64 v183; // x3
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  BattleActorControl___c_c *v185; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__128_0; // x21
  Il2CppObject *v188; // x22
  struct BattleActorControl___c_StaticFields *v189; // x0
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  peRenderTexture_ChangeLayerObject_o *v196; // x0
  UnityEngine_SkinnedMeshRenderer_o *v197; // x25
  UnityEngine_Collider_o *Component_srcLineSprite; // x26
  UnityEngine_MeshCollider_o *v199; // x0
  struct BattlePerformance_o *v200; // x8
  BattleData_o *v201; // x0
  bool IsEnemyPosCountNormal; // w24
  __int64 v203; // x1
  __int64 v204; // x2
  __int64 v205; // x3
  __int64 v206; // x4
  UnityEngine_Mesh_o *v207; // x21
  BattlePerformance_o *v208; // x27
  int32_t monitor; // w21
  __int64 v210; // x22
  __int64 v211; // x28
  int32_t v212; // w28
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x3
  __int64 v216; // x4
  System_Action_o *v217; // x22
  __int64 v218; // x0
  __int64 v219; // x1
  __int64 v220; // x2
  struct BattlePerformance_o *v221; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 monitor_low; // x9
  UnityEngine_Component_o *v226; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  struct BattlePerformance_o *v228; // x8
  UnityEngine_Camera_o *actorcamera; // x24
  UnityEngine_Camera_o *uicamera; // x25
  UnityEngine_GameObject_o *v231; // x26
  const MethodInfo *v232; // x1
  int v233; // s0
  Il2CppObject *object; // [xsp+0h] [xbp-60h]
  int32_t AppearanceId; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v238; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v239; // 0:x0.16
  UnityEngine_Vector3_o v240; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FDA81 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, svtdata);
    sub_B16FFC(&Method_System_Array_IndexOf_int___, v7);
    sub_B16FFC(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v11);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v12);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v13);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___66746072, v16);
    sub_B16FFC(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Mesh_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v20);
    sub_B16FFC(&Method_System_Predicate_SkinnedMeshRenderer___ctor__, v21);
    sub_B16FFC(&System_Predicate_SkinnedMeshRenderer__TypeInfo, v22);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&Method_BattleActorControl___c__setServantData_b__128_0__, v25);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass128_0__setServantData_b__1__, v26);
    sub_B16FFC(&BattleActorControl___c__DisplayClass128_0_TypeInfo, v27);
    sub_B16FFC(&BattleActorControl___c_TypeInfo, v28);
    sub_B16FFC(&StringLiteral_18248/*"en_Head"*/, v29);
    sub_B16FFC(&StringLiteral_12774/*"Shadow"*/, v30);
    sub_B16FFC(&StringLiteral_18252/*"en_buff01"*/, v31);
    sub_B16FFC(&StringLiteral_1/*""*/, v32);
    byte_40FDA81 = 1;
  }
  v33 = sub_B170CC(BattleActorControl___c__DisplayClass128_0_TypeInfo, svtdata, method, v3, v4);
  BattleActorControl___c__DisplayClass128_0___ctor((BattleActorControl___c__DisplayClass128_0_o *)v33, 0LL);
  if ( !v33 )
    goto LABEL_118;
  *(_QWORD *)(v33 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v33 + 16), (System_Int32_array **)this, v34, v35, v36, v37, v38, v39);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.battleSvtData,
    (System_Int32_array **)svtdata,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_118;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  v49 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v50 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
  v52 = *(_QWORD *)&v49->fields.svtId.fields.currentCryptoKey;
  v51 = *(_QWORD *)&v49->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v238.fields.currentCryptoKey = v52;
  *(_QWORD *)&v238.fields.fakeValue = v51;
  v53 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v238, 0LL);
  if ( !v50 )
    goto LABEL_118;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             v50,
             v53,
             (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v56 = (ServantEntity_o *)Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_118;
    v58 = UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_12774/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v58;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.shadowObj,
      (System_Int32_array **)v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  if ( !*p_battleSvtData )
    goto LABEL_118;
  AppearanceId = BattleServantData__getAppearanceId(*p_battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  DispLimitCount = BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v66 = DispLimitCount;
  v67 = AppearanceId == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v66 : 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_118;
  v69 = gameObject;
  v70 = BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v71 = v70;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(v69, v71, v67, isForceAppearance, 0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actorObject,
    (System_Int32_array **)Manager__loadBattleActor,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  if ( !this->fields.actorObject )
    goto LABEL_118;
  v81 = UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
  *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Vector3__get_zero(0LL);
  if ( !v81 )
    goto LABEL_118;
  UnityEngine_Transform__set_localPosition(v81, *(UnityEngine_Vector3_o *)&v82, 0LL);
  BattleActorControl__ChangeShadowParent(this, v67, v85);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_118;
  performance = this->fields.performance;
  uniqueId = battleSvtData->fields.uniqueId;
  CameraActionId = BattleServantData__getCameraActionId(battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_118;
  BattlePerformance__registerCameraAction(performance, uniqueId, CameraActionId, 0LL);
  if ( !*p_actorObject )
    goto LABEL_118;
  object = (Il2CppObject *)v33;
  v90 = (System_String_o *)StringLiteral_18248/*"en_Head"*/;
  v91 = UnityEngine_GameObject__get_transform(*p_actorObject, 0LL);
  NodeFromLvName = (UnityEngine_Component_o *)TransformHelper__getNodeFromLvName(v91, v90, v67, 0, 0LL);
  if ( !NodeFromLvName )
    goto LABEL_118;
  v93 = UnityEngine_Component__get_gameObject(NodeFromLvName, 0LL);
  this->fields.checkScaleNode = 0LL;
  v94 = v93;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.checkScaleNode, 0LL, v95, v96, v97, v98, v99, v100);
  if ( v56 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v56, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL) )
  {
    if ( !v90 )
      goto LABEL_118;
    v102 = System_String__Equals_43731072(v90, HideInAnimNodeName, 0LL);
    v109 = v94;
    if ( !v102 )
    {
      if ( !*p_actorObject )
        goto LABEL_118;
      v110 = UnityEngine_GameObject__get_transform(*p_actorObject, 0LL);
      v111 = (UnityEngine_Component_o *)TransformHelper__getNodeFromLvName(v110, HideInAnimNodeName, v67, 0, 0LL);
      if ( !v111 )
        goto LABEL_118;
      v109 = UnityEngine_Component__get_gameObject(v111, 0LL);
    }
    this->fields.checkScaleNode = v109;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.checkScaleNode,
      (System_Int32_array **)v109,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  v112 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v119 = TransformHelper__ExistNodeFromLvName(v112, (System_String_o *)StringLiteral_18252/*"en_buff01"*/, -1, 0, 0LL)
       ? (struct System_String_o *)StringLiteral_18252/*"en_buff01"*/
       : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v119;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (System_Int32_array **)v119,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  v124 = (UnityEngine_GameObject_o *)sub_B170CC(UnityEngine_GameObject_TypeInfo, v120, v121, v122, v123);
  UnityEngine_GameObject___ctor_40693716(v124, 0LL);
  if ( !v124 )
    goto LABEL_118;
  v125 = UnityEngine_GameObject__get_transform(v124, 0LL);
  if ( !v94 )
    goto LABEL_118;
  v126 = v125;
  v127 = UnityEngine_GameObject__get_transform(v94, 0LL);
  if ( !v126 )
    goto LABEL_118;
  UnityEngine_Transform__set_parent(v126, v127, 0LL);
  v128 = UnityEngine_GameObject__get_transform(v124, 0LL);
  *(UnityEngine_Vector3_o *)&v129 = UnityEngine_Vector3__get_zero(0LL);
  v132 = AppearanceId;
  if ( !v128 )
    goto LABEL_118;
  UnityEngine_Transform__set_localPosition(v128, *(UnityEngine_Vector3_o *)&v129, 0LL);
  v133 = UnityEngine_GameObject__get_transform(v124, 0LL);
  *(UnityEngine_Vector3_o *)&v134 = UnityEngine_Vector3__get_up(0LL);
  if ( !v133 )
    goto LABEL_118;
  UnityEngine_Transform__set_localEulerAngles(v133, *(UnityEngine_Vector3_o *)&v134, 0LL);
  v137 = UnityEngine_GameObject__get_transform(v124, 0LL);
  *(UnityEngine_Vector3_o *)&v138 = UnityEngine_Vector3__get_one(0LL);
  if ( !v137 )
    goto LABEL_118;
  UnityEngine_Transform__set_localScale(v137, *(UnityEngine_Vector3_o *)&v138, 0LL);
  v141 = UnityEngine_GameObject__get_transform(v124, 0LL);
  v142 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v142 )
    goto LABEL_118;
  v143 = UnityEngine_GameObject__get_transform(v142, 0LL);
  if ( !v141 )
    goto LABEL_118;
  UnityEngine_Transform__set_parent(v141, v143, 0LL);
  v144 = UnityEngine_GameObject__get_transform(v124, 0LL);
  if ( !v144 )
    goto LABEL_118;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition(v144, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v124, 0LL);
  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_118;
  fbxcomponent = this->fields.fbxcomponent;
  v147 = UnityEngine_GameObject__get_transform(actorObject, 0LL);
  if ( !fbxcomponent )
    goto LABEL_118;
  BattleFBXComponent__set_RootTransform(fbxcomponent, v147, 0LL);
  v148 = this->fields.fbxcomponent;
  if ( !v148 )
    goto LABEL_118;
  BattleFBXComponent__SetEvolutionLevel(v148, AppearanceId, v67, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_118;
  v149 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  Manager__loadAnimEvents = ServantAssetLoadManager__loadAnimEvents(AppearanceId, v67, v149, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_118;
  BattleFBXComponent__loadAnimationEvents(this->fields.fbxcomponent, Manager__loadAnimEvents, AppearanceId, v67, 0LL);
  BattleActorControl__InitAnimationEffect(this, v67, v151);
  v152 = this->fields.battleSvtData;
  if ( !v152 )
    goto LABEL_118;
  if ( !BattleServantData__isAppearanceId(v152, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v156 = displayType == 2;
      v157 = displayType == 3;
    }
    else
    {
      v156 = 0;
      v157 = 0;
    }
    BattleActorControl__SetDispServant(this, v156, v157, v154);
  }
  BattleActorControl__UpdateShadow(this, v153);
  this->fields.stepFlg = 0;
  v158 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v158 )
    goto LABEL_118;
  v159 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                                                          v158,
                                                          (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v164 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                           System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo,
                                                                           v160,
                                                                           v161,
                                                                           v162,
                                                                           v163);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v164,
    v159,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___66746072);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v164;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.rendererArrayList,
    (System_Int32_array **)v164,
    v165,
    v166,
    v167,
    v168,
    v169,
    v170);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v171);
  if ( !svtdata )
    goto LABEL_118;
  this->fields.actorScale = BattleServantData__getActorScale(svtdata, 0LL);
  v172 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  *(UnityEngine_Vector3_o *)&v173 = UnityEngine_Vector3__get_one(0LL);
  if ( !v172 )
    goto LABEL_118;
  actorScale = this->fields.actorScale;
  v240.fields.x = v173 * actorScale;
  v240.fields.y = v174 * actorScale;
  v240.fields.z = v175 * actorScale;
  UnityEngine_Transform__set_localScale(v172, v240, 0LL);
  if ( !svtdata->fields.isEnemy )
    goto LABEL_117;
  v178 = this->fields.performance;
  if ( !v178 )
    goto LABEL_118;
  data = v178->fields.data;
  if ( !data )
    goto LABEL_118;
  v180 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           svtdata->fields.uniqueId,
           (const MethodInfo_2045560 *)Method_System_Array_IndexOf_int___);
  LODWORD(object[1].monitor) = v180;
  if ( v180 == -1 )
    goto LABEL_117;
  rendererArrayList = this->fields.rendererArrayList;
  v185 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v185 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v185->static_fields;
  _9__128_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__128_0;
  if ( !_9__128_0 )
  {
    if ( (BYTE3(v185->vtable._0_Equals.methodPtr) & 4) != 0 && !v185->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v185);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v188 = (Il2CppObject *)static_fields->__9;
    _9__128_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_SkinnedMeshRenderer__TypeInfo,
                                                                           v181,
                                                                           v182,
                                                                           v183,
                                                                           v177);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__128_0,
      v188,
      Method_BattleActorControl___c__setServantData_b__128_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_SkinnedMeshRenderer___ctor__);
    v189 = BattleActorControl___c_TypeInfo->static_fields;
    v189->__9__128_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)_9__128_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v189->__9__128_0,
      (System_Int32_array **)_9__128_0,
      v190,
      v191,
      v192,
      v193,
      v194,
      v195);
  }
  if ( !rendererArrayList )
    goto LABEL_118;
  v196 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
           (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)rendererArrayList,
           (System_Predicate_T__o *)_9__128_0,
           (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_118;
  v197 = (UnityEngine_SkinnedMeshRenderer_o *)v196;
  Component_srcLineSprite = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        *p_actorObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( !*p_actorObject )
      goto LABEL_118;
    v199 = (UnityEngine_MeshCollider_o *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                           *p_actorObject,
                                           (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !v199 )
      goto LABEL_118;
    Component_srcLineSprite = (UnityEngine_Collider_o *)v199;
    UnityEngine_MeshCollider__set_convex(v199, 0, 0LL);
    UnityEngine_Collider__set_isTrigger(Component_srcLineSprite, 0, 0LL);
  }
  v200 = this->fields.performance;
  if ( !v200 )
    goto LABEL_118;
  v201 = v200->fields.data;
  if ( !v201 )
    goto LABEL_118;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal(v201, 0LL);
  v207 = (UnityEngine_Mesh_o *)sub_B170CC(UnityEngine_Mesh_TypeInfo, v203, v204, v205, v206);
  UnityEngine_Mesh___ctor(v207, 0LL);
  if ( !v197 )
    goto LABEL_118;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v197, v207, 0LL);
  if ( !Component_srcLineSprite )
    goto LABEL_118;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_srcLineSprite, v207, 0LL);
  v208 = this->fields.performance;
  monitor = (int32_t)object[1].monitor;
  v211 = *(_QWORD *)&svtdata->fields.svtId.fields.currentCryptoKey;
  v210 = *(_QWORD *)&svtdata->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v239.fields.currentCryptoKey = v211;
  *(_QWORD *)&v239.fields.fakeValue = v210;
  v212 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v239, 0LL);
  v217 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v213, v214, v215, v216);
  System_Action___ctor(v217, object, Method_BattleActorControl___c__DisplayClass128_0__setServantData_b__1__, 0LL);
  if ( !v208 )
    goto LABEL_118;
  BattlePerformance__AddCollider(
    v208,
    (UnityEngine_MeshCollider_o *)Component_srcLineSprite,
    v197,
    monitor,
    v212,
    v217,
    IsEnemyPosCountNormal,
    0LL);
  v221 = this->fields.performance;
  if ( !v221 )
    goto LABEL_118;
  statusPerf = v221->fields.statusPerf;
  v132 = AppearanceId;
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
    sub_B17100(v218, v219, v220);
    sub_B170A0();
  }
  v226 = (UnityEngine_Component_o *)svtHeadUpList->m_Items[monitor_low];
  if ( !v226 )
LABEL_118:
    sub_B170D4();
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              v226,
                              (const MethodInfo_18BD428 *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_WebViewObject, 0LL, 0LL) )
  {
    v228 = this->fields.performance;
    if ( v228 )
    {
      actorcamera = v228->fields.actorcamera;
      uicamera = v228->fields.uicamera;
      v231 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v233 = BattleActorControl__getHeadUpY(this, v232);
      if ( Component_WebViewObject )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)Component_WebViewObject,
          actorcamera,
          uicamera,
          v231,
          *(UnityEngine_Vector3_o *)&v233,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)Component_WebViewObject, 0LL);
        goto LABEL_117;
      }
    }
    goto LABEL_118;
  }
LABEL_117:
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v132, v67, svtdata->fields.isEnemy, v177);
}


void __fastcall BattleActorControl__setSlientDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v5; // x2
  struct BattleServantData_o *v6; // x8

  BattleActorControl__invisibleSvtModel(this, 1, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (BattleServantData__playDead(battleSvtData, 0LL),
        BattleActorControl__startDropItem(this, 1, v5),
        (v6 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B170D4();
  }
  v6->fields.isSilnetDead = 1;
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
  PlayMakerFSM_o *v6; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  struct PlayMakerFSM_array *v9; // x8
  PlayMakerFSM_o *v10; // x0
  HutongGames_PlayMaker_Fsm_o *v11; // x0
  HutongGames_PlayMaker_FsmVariables_o *v12; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  struct PlayMakerFSM_array *v14; // x8
  PlayMakerFSM_o *v15; // x0
  HutongGames_PlayMaker_Fsm_o *v16; // x0
  HutongGames_PlayMaker_FsmVariables_o *v17; // x0
  struct PlayMakerFSM_array *v18; // x8
  PlayMakerFSM_o *v19; // x0
  HutongGames_PlayMaker_Fsm_o *v20; // x0
  HutongGames_PlayMaker_FsmVariables_o *v21; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v22; // x0

  v4 = this;
  if ( (byte_40FDA91 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_13105/*"SummonMasterObject"*/, obj);
    byte_40FDA91 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( !motionFSM->max_length )
      goto LABEL_31;
    v6 = motionFSM->m_Items[0];
    if ( !v6 )
      goto LABEL_30;
    Fsm = PlayMakerFSM__get_Fsm(v6, 0LL);
    if ( !Fsm )
      goto LABEL_30;
    variables = Fsm->fields.variables;
    if ( !variables )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     variables,
                                     (System_String_o *)StringLiteral_13105/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v9 = v4->fields.motionFSM;
      if ( !v9 )
        goto LABEL_30;
      if ( !v9->max_length )
        goto LABEL_31;
      v10 = v9->m_Items[0];
      if ( !v10 )
        goto LABEL_30;
      v11 = PlayMakerFSM__get_Fsm(v10, 0LL);
      if ( !v11 )
        goto LABEL_30;
      v12 = v11->fields.variables;
      if ( !v12 )
        goto LABEL_30;
      FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                        v12,
                        (System_String_o *)StringLiteral_13105/*"SummonMasterObject"*/,
                        0LL);
      if ( !FsmGameObject )
        goto LABEL_30;
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0LL);
    }
    v14 = v4->fields.motionFSM;
    if ( !v14 )
      goto LABEL_30;
    if ( v14->max_length <= 1 )
    {
LABEL_31:
      sub_B17100(this, obj, method);
      sub_B170A0();
    }
    v15 = v14->m_Items[1];
    if ( !v15 )
      goto LABEL_30;
    v16 = PlayMakerFSM__get_Fsm(v15, 0LL);
    if ( !v16 )
      goto LABEL_30;
    v17 = v16->fields.variables;
    if ( !v17 )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     v17,
                                     (System_String_o *)StringLiteral_13105/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v18 = v4->fields.motionFSM;
      if ( !v18 )
        goto LABEL_30;
      if ( v18->max_length > 1 )
      {
        v19 = v18->m_Items[1];
        if ( v19 )
        {
          v20 = PlayMakerFSM__get_Fsm(v19, 0LL);
          if ( v20 )
          {
            v21 = v20->fields.variables;
            if ( v21 )
            {
              v22 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      v21,
                      (System_String_o *)StringLiteral_13105/*"SummonMasterObject"*/,
                      0LL);
              if ( v22 )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value(v22, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_30:
        sub_B170D4();
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
  PlayMakerFSM_o *v6; // x0
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x0
  struct PlayMakerFSM_array *v10; // x8
  PlayMakerFSM_o *v11; // x0
  HutongGames_PlayMaker_Fsm_o *v12; // x0
  HutongGames_PlayMaker_FsmVariables_o *v13; // x0
  HutongGames_PlayMaker_FsmGameObject_o *v14; // x0

  v4 = this;
  if ( (byte_40FDA90 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_B16FFC(&StringLiteral_13521/*"TargetObject"*/, obj);
    byte_40FDA90 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( motionFSM->max_length )
    {
      v6 = motionFSM->m_Items[0];
      if ( !v6 )
        goto LABEL_17;
      Fsm = PlayMakerFSM__get_Fsm(v6, 0LL);
      if ( !Fsm )
        goto LABEL_17;
      variables = Fsm->fields.variables;
      if ( !variables )
        goto LABEL_17;
      FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                        variables,
                        (System_String_o *)StringLiteral_13521/*"TargetObject"*/,
                        0LL);
      if ( !FsmGameObject )
        goto LABEL_17;
      HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, obj, 0LL);
      v10 = v4->fields.motionFSM;
      if ( !v10 )
        goto LABEL_17;
      if ( v10->max_length > 1 )
      {
        v11 = v10->m_Items[1];
        if ( v11 )
        {
          v12 = PlayMakerFSM__get_Fsm(v11, 0LL);
          if ( v12 )
          {
            v13 = v12->fields.variables;
            if ( v13 )
            {
              v14 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      v13,
                      (System_String_o *)StringLiteral_13521/*"TargetObject"*/,
                      0LL);
              if ( v14 )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value(v14, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_17:
        sub_B170D4();
      }
    }
    sub_B17100(this, obj, method);
    sub_B170A0();
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_B170D4();
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  BattlePerformance_o *performance; // x0

  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_B170D4();
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0
  bool v6; // zf
  int32_t uniqueID; // w20
  float v8; // s8
  const MethodInfo *v9; // x3

  if ( (byte_40FDAE2 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_12209/*"SKIP_VOICE"*/, v3);
    byte_40FDAE2 = 1;
  }
  performance = this->fields.performance;
  if ( !performance || (data = performance->fields.data) == 0LL )
    sub_B170D4();
  v6 = !BattleData__IsHighSpeedOption(data, 0LL);
  uniqueID = this->fields.uniqueID;
  if ( v6 )
    v8 = 1.0;
  else
    v8 = 0.5;
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  ServantAssetLoadManager__StopVoice(uniqueID, v8, 0LL);
  BattleActorControl__sendEventFSM_32017324(this, (System_String_o *)StringLiteral_12209/*"SKIP_VOICE"*/, 0, v9);
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
    sub_B170D4();
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2
  System_Collections_IEnumerator_o *v9; // x1

  if ( (byte_40FDAEB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_BattleActorControl_endChangeAppearance__, v6);
    byte_40FDAEB = 1;
  }
  v7 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v9 = BattleActorControl__waitChangeApp(this, v7, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v9, 0LL);
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
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct BattleServantData_o *v31; // x8
  int v32; // s8
  System_String_o *Value; // x0
  __int64 ActorSvtId; // x0
  System_Int32_array **v35; // x1
  System_String_array **v36; // x2
  int v37; // w8
  __int64 v38; // x19
  unsigned int v39; // w20
  BattleServantData_o *v40; // x0
  int v41; // w22
  UnityEngine_GameObject_o *v42; // x19
  __int64 v43; // x2
  __int64 v44; // x0
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Object_array *v50; // x20
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x22
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  const MethodInfo *v62; // x1
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x21
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x21
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x21
  System_Collections_Hashtable_o *v111; // x0
  int v112; // [xsp+8h] [xbp-48h] BYREF
  int v113; // [xsp+Ch] [xbp-44h] BYREF
  float Height; // [xsp+28h] [xbp-28h] BYREF
  int v115; // [xsp+2Ch] [xbp-24h] BYREF

  if ( (byte_40FDAB5 & 1) == 0 )
  {
    sub_B16FFC(&iTween_EaseType_TypeInfo, method);
    sub_B16FFC(&object___TypeInfo, v4);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B16FFC(&float_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_22845/*"updateDeadEffect"*/, v7);
    sub_B16FFC(&StringLiteral_18842/*"from"*/, v8);
    sub_B16FFC(&StringLiteral_18046/*"easetype"*/, v9);
    sub_B16FFC(&StringLiteral_9973/*"OnFinishDead"*/, v10);
    sub_B16FFC(&StringLiteral_22584/*"time"*/, v11);
    sub_B16FFC(&StringLiteral_12156/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v12);
    sub_B16FFC(&StringLiteral_21182/*"onupdate"*/, v13);
    sub_B16FFC(&StringLiteral_22621/*"to"*/, v14);
    sub_B16FFC(&StringLiteral_21173/*"oncomplete"*/, v15);
    sub_B16FFC(&iTween_TypeInfo, v16);
    byte_40FDAB5 = 1;
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
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v22 )
    goto LABEL_88;
  transform = UnityEngine_GameObject__get_transform(v22, 0LL);
  v24 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v24;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.particleDisconnectorObj,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = this->fields.battleSvtData;
  v32 = 1067869798;
  if ( v31 )
  {
    if ( v31->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12156/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_88;
        v37 = *(_DWORD *)(ActorSvtId + 24);
        v38 = ActorSvtId;
        if ( v37 >= 1 )
        {
          v39 = 0;
          while ( 1 )
          {
            if ( v39 >= v37 )
              goto LABEL_86;
            v40 = this->fields.battleSvtData;
            if ( !v40 )
              goto LABEL_88;
            v41 = *(_DWORD *)(v38 + 4LL * (int)v39 + 32);
            ActorSvtId = BattleServantData__getActorSvtId(v40, 0LL);
            if ( v41 == (_DWORD)ActorSvtId )
              break;
            v37 = *(_DWORD *)(v38 + 24);
            if ( (int)++v39 >= v37 )
              goto LABEL_29;
          }
          v32 = 1065353215;
        }
      }
    }
  }
LABEL_29:
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v44 = sub_B17014(object___TypeInfo, 12LL, v43);
  if ( !v44 )
LABEL_88:
    sub_B170D4();
  v50 = (System_Object_array *)v44;
  ActorSvtId = StringLiteral_18842/*"from"*/;
  if ( StringLiteral_18842/*"from"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_18842/*"from"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_18842/*"from"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v50->max_length )
    goto LABEL_86;
  v50->m_Items[0] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)v50->m_Items, v35, v36, v45, v46, v47, v48, v49);
  v115 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v115);
  v56 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B170BC(ActorSvtId, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_86;
  v50->m_Items[1] = (Il2CppObject *)v56;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[1], v56, v36, v51, v52, v53, v54, v55);
  ActorSvtId = StringLiteral_22621/*"to"*/;
  if ( StringLiteral_22621/*"to"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_22621/*"to"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_22621/*"to"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 2 )
    goto LABEL_86;
  v50->m_Items[2] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[2], v35, v36, v57, v58, v59, v60, v61);
  Height = BattleActorControl__getHeight(this, v62);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height);
  v68 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B170BC(ActorSvtId, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
  }
  if ( v50->max_length <= 3 )
    goto LABEL_86;
  v50->m_Items[3] = (Il2CppObject *)v68;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[3], v68, v36, v63, v64, v65, v66, v67);
  ActorSvtId = StringLiteral_18046/*"easetype"*/;
  if ( StringLiteral_18046/*"easetype"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_18046/*"easetype"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_18046/*"easetype"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 4 )
    goto LABEL_86;
  v50->m_Items[4] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[4], v35, v36, v69, v70, v71, v72, v73);
  v113 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v113);
  v79 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B170BC(ActorSvtId, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
  }
  if ( v50->max_length <= 5 )
    goto LABEL_86;
  v50->m_Items[5] = (Il2CppObject *)v79;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[5], v79, v36, v74, v75, v76, v77, v78);
  ActorSvtId = StringLiteral_21182/*"onupdate"*/;
  if ( StringLiteral_21182/*"onupdate"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_21182/*"onupdate"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_21182/*"onupdate"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 6 )
    goto LABEL_86;
  v50->m_Items[6] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[6], v35, v36, v80, v81, v82, v83, v84);
  ActorSvtId = StringLiteral_22845/*"updateDeadEffect"*/;
  if ( StringLiteral_22845/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_22845/*"updateDeadEffect"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_22845/*"updateDeadEffect"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 7 )
    goto LABEL_86;
  v50->m_Items[7] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[7], v35, v36, v85, v86, v87, v88, v89);
  ActorSvtId = StringLiteral_21173/*"oncomplete"*/;
  if ( StringLiteral_21173/*"oncomplete"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_21173/*"oncomplete"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_21173/*"oncomplete"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 8 )
    goto LABEL_86;
  v50->m_Items[8] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[8], v35, v36, v90, v91, v92, v93, v94);
  ActorSvtId = StringLiteral_9973/*"OnFinishDead"*/;
  if ( StringLiteral_9973/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_9973/*"OnFinishDead"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_9973/*"OnFinishDead"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 9 )
    goto LABEL_86;
  v50->m_Items[9] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[9], v35, v36, v95, v96, v97, v98, v99);
  ActorSvtId = StringLiteral_22584/*"time"*/;
  if ( StringLiteral_22584/*"time"*/ )
  {
    ActorSvtId = sub_B170BC(StringLiteral_22584/*"time"*/, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_87;
    v35 = (System_Int32_array **)StringLiteral_22584/*"time"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( v50->max_length <= 0xA )
    goto LABEL_86;
  v50->m_Items[10] = (Il2CppObject *)v35;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[10], v35, v36, v100, v101, v102, v103, v104);
  v112 = v32;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v110 = (System_Int32_array **)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_B170BC(ActorSvtId, v50->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_87:
      sub_B170F4(ActorSvtId);
      sub_B170A0();
    }
  }
  if ( v50->max_length <= 0xB )
  {
LABEL_86:
    sub_B17100(ActorSvtId, v35, v36);
    sub_B170A0();
  }
  v50->m_Items[11] = (Il2CppObject *)v110;
  sub_B16F98((BattleServantConfConponent_o *)&v50->m_Items[11], v110, v36, v105, v106, v107, v108, v109);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v111 = iTween__Hash(v50, 0LL);
  iTween__ValueTo(v42, v111, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__startDropItem(BattleActorControl_o *this, bool isSlient, const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v7; // x8
  BattleDeckServantData_o *deckSvt; // x0
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0
  struct BattleServantData_o *v11; // x8
  struct BattleServantData_o *v12; // x8
  struct DropInfo_array *droplist; // x27
  struct BattlePerformance_o *v14; // x9
  BattleData_o *v15; // x0
  int32_t ServantIndex; // w21
  const MethodInfo *v17; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  UnityEngine_Transform_o *v22; // x22
  unsigned __int64 v23; // x23
  BattlePerformance_o *v24; // x0
  DropInfo_o *v25; // x24
  UnityEngine_GameObject_o *Item; // x25
  BattlePerformance_o *v27; // x26
  int v28; // s0
  struct BattlePerformance_o *v31; // x8
  BattleData_o *v32; // x0
  BattlePerformance_o *v33; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  bool v35; // [xsp+1Ch] [xbp-54h]

  if ( (byte_40FDAB4 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, isSlient);
    sub_B16FFC(&StringLiteral_1/*""*/, v5);
    byte_40FDAB4 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_34;
  if ( battleSvtData->fields.isWithdraw || BattleServantData__isDead(battleSvtData, 0LL) )
    goto LABEL_9;
  v7 = this->fields.battleSvtData;
  if ( !v7 )
    goto LABEL_34;
  deckSvt = v7->fields.deckSvt;
  if ( !deckSvt )
    goto LABEL_34;
  if ( BattleDeckServantData__getIsForceDropItem(deckSvt, 0LL) )
  {
LABEL_9:
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_34;
    data = performance->fields.data;
    if ( !data )
      goto LABEL_34;
    v35 = isSlient;
    BattleData__RegisterItemDroppedSkillShiftInfo(data, this->fields.battleSvtData, 0LL);
    v11 = this->fields.battleSvtData;
    if ( !v11 )
      goto LABEL_34;
    v11->fields.IsAlreadyDrop = 1;
    v12 = this->fields.battleSvtData;
    if ( !v12 )
      goto LABEL_34;
    droplist = v12->fields.droplist;
    if ( droplist )
    {
      v14 = this->fields.performance;
      if ( !v14 )
        goto LABEL_34;
      v15 = v14->fields.data;
      if ( !v15 )
        goto LABEL_34;
      ServantIndex = BattleData__getServantIndex(v15, v12->fields.isEnemy, v12->fields.uniqueId, 0LL);
      DropTransform = BattleActorControl__getDropTransform(this, v17);
      LODWORD(v21) = droplist->max_length;
      if ( (int)v21 >= 1 )
      {
        v22 = DropTransform;
        v23 = 0LL;
        while ( 1 )
        {
          if ( v23 >= (unsigned int)v21 )
          {
            sub_B17100(DropTransform, v19, v20);
            sub_B170A0();
          }
          v24 = this->fields.performance;
          if ( !v24 )
            break;
          v25 = droplist->m_Items[v23];
          Item = BattlePerformance__dropGetItem(v24, v22, v25, v21, v23, ServantIndex, 0LL);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
          {
            if ( !v22 )
              break;
            v27 = this->fields.performance;
            *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_position(v22, 0LL);
            if ( !v27 )
              break;
            BattlePerformance__saveOriginalPos(v27, Item, *(UnityEngine_Vector3_o *)&v28, this->fields.criteriaPos, 0LL);
          }
          v31 = this->fields.performance;
          if ( !v31 )
            break;
          v32 = v31->fields.data;
          if ( !v32 )
            break;
          BattleData__addDropItems(v32, v25, 0LL);
          v21 = *(_QWORD *)&droplist->max_length;
          if ( (__int64)++v23 >= (int)v21 )
            goto LABEL_30;
        }
LABEL_34:
        sub_B170D4();
      }
    }
LABEL_30:
    if ( !v35 )
    {
      v33 = this->fields.performance;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v33 )
        goto LABEL_34;
      BattlePerformance__ShowAll(v33, gameObject, -1, 0LL, 0, 0, (System_String_o *)StringLiteral_1/*""*/, 0LL, 0, 0LL);
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
  BattleFBXComponent_o *fbxcomponent; // x0
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceBg_o *bgPerf; // x0
  BattlePerformance_o *v28; // x0
  struct BattlePerformance_o *v29; // x8
  BattleLogic_o *logic; // x0
  const MethodInfo *v31; // x2
  BattlePerformance_o *v32; // x0
  struct BattlePerformance_o *v33; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x21
  System_String_o *gameObject; // x0
  BattleFBXComponent_c *v36; // x0
  BattlePerformance_o *v37; // x0
  BattlePerformance_o *v38; // x0
  struct BattlePerformance_o *v39; // x8
  BattlePerformanceCommandCard_o *commandPerf; // x0
  WebViewManager_o *Instance; // x0
  BattlePerformance_o *v42; // x21
  BattleSequenceManager_o *v43; // x22
  UnityEngine_GameObject_o *v44; // x0
  struct BattlePerformance_o *v45; // x8
  struct BattlePerformanceBg_o *v46; // x9
  struct BattlePerformance_o *v47; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  struct BattleActionData_o *actiondata; // x8
  TreasureDvcEntity_o *Entity; // x0
  TreasureDvcEntity_o *v51; // x20
  BattleServantData_o *battleSvtData; // x0
  int32_t DispLimitCount; // w0
  struct BattleActionData_o *v54; // x8
  WebViewManager_o *v55; // x0
  AssetManager_o *v56; // x20
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  AssetManager_ResourceUnloadEventHandler_o *v61; // x21
  WebViewManager_o *v62; // x0
  struct BattleServantData_o *v63; // x8
  BattleSequenceManager_o *v64; // x20
  __int64 v65; // x21
  __int64 v66; // x22
  int32_t v67; // w0
  int32_t v68; // w21
  TreasureDvcEntity_o *TreasureDevice; // x0
  TreasureDvcEntity_o *v70; // x8
  BattleServantData_o *v71; // x0
  int32_t id; // w22
  int32_t v73; // w0
  struct BattleServantData_o *v74; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v77; // w23
  int32_t NpChargeStage; // w26
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  BattleSequenceManager_onGameObjectLoadComplete_o *v83; // x27
  UnityEngine_Object_o *v84; // x20
  struct BattlePerformance_o *v85; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v87; // x8
  struct BattleData_o *v88; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v89; // 0:x0.16

  if ( (byte_40FDAC8 & 1) == 0 )
  {
    sub_B16FFC(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, callback);
    sub_B16FFC(&Method_BattleActorControl__startNoblePhantasm_b__255_0__, v11);
    sub_B16FFC(&BattleFBXComponent_TypeInfo, v12);
    sub_B16FFC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v13);
    sub_B16FFC(&DataManager_TypeInfo, v14);
    sub_B16FFC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v15);
    sub_B16FFC(&Method_FieldMotionManager_SetVariables_GameObject___, v16);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_B16FFC(&OptionManager_TypeInfo, v19);
    sub_B16FFC(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v22);
    sub_B16FFC(&StringLiteral_9332/*"NPACTOR"*/, v23);
    sub_B16FFC(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v24);
    byte_40FDAC8 = 1;
  }
  this->fields.noblePhantasmCallback = callback;
  sub_B16F98(
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
  bgPerf = performance->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_65;
  BattlePerformanceBg__setCutNodeNoble(bgPerf, 1, 0LL);
  v28 = this->fields.performance;
  if ( !v28 )
    goto LABEL_65;
  BattlePerformance__setDamageVoiceFlg(v28, 0, 0LL);
  v29 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 1;
  if ( !v29 )
    goto LABEL_65;
  logic = v29->fields.logic;
  if ( !logic )
    goto LABEL_65;
  BattleLogic__ChangePhase(logic, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 0, v31);
  v32 = this->fields.performance;
  if ( !v32 )
    goto LABEL_65;
  BattlePerformance__AllServantClassIconEffectStartStop(v32, 0, 0LL);
  v33 = this->fields.performance;
  if ( !v33 )
    goto LABEL_65;
  fmManager_k__BackingField = v33->fields._fmManager_k__BackingField;
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_65;
  FieldMotionManager__SetVariables_string_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9332/*"NPACTOR"*/,
    gameObject,
    (const MethodInfo_19D0834 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v36 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v36 = BattleFBXComponent_TypeInfo;
  }
  v36->static_fields->EnableEvent = 0;
  v37 = this->fields.performance;
  if ( !v37 )
    goto LABEL_65;
  BattlePerformance__changeShadowType(v37, 1, 0LL);
  v38 = this->fields.performance;
  if ( !v38 )
    goto LABEL_65;
  BattlePerformance__UpdateAllShadow(v38, 0LL);
  v39 = this->fields.performance;
  if ( !v39 )
    goto LABEL_65;
  commandPerf = v39->fields.commandPerf;
  if ( !commandPerf )
    goto LABEL_65;
  BattlePerformanceCommandCard__SetCommandCardEffectActive(commandPerf, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v42 = this->fields.performance;
  v43 = (BattleSequenceManager_o *)Instance;
  v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v45 = this->fields.performance;
  if ( !v45 )
    goto LABEL_65;
  v46 = v45->fields.bgPerf;
  if ( !v46 )
    goto LABEL_65;
  if ( !v43 )
    goto LABEL_65;
  BattleSequenceManager__init(
    v43,
    v42,
    v44,
    v45->fields.p_actorlist,
    v45->fields.e_actorlist,
    v45->fields.actorcamera,
    v46->fields.bgobject,
    0LL);
  v47 = this->fields.performance;
  if ( !v47 )
    goto LABEL_65;
  v47->fields.isNoblePhantasmWhiteInFlg = flg;
  if ( this->fields.actiondata )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = this->fields.actiondata;
    if ( !actiondata || !Master_WarQuestSelectionMaster )
      goto LABEL_65;
    Entity = (TreasureDvcEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      Master_WarQuestSelectionMaster,
                                      actiondata->fields.treasureDvcId,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v51 = Entity;
      if ( TreasureDvcEntity__IsRandomTD(Entity, 0LL) )
      {
        battleSvtData = this->fields.battleSvtData;
        if ( !battleSvtData )
          goto LABEL_65;
        DispLimitCount = BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL);
        v54 = this->fields.actiondata;
        if ( !v54 )
          goto LABEL_65;
        TreasureDvcEntity__getRandomSeqIdEachLimit(v51, DispLimitCount, v54->fields.ActSetId, 0LL);
      }
    }
  }
  v55 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !v55 )
    goto LABEL_65;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)v55, this->fields.actiondata, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v56 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v61 = (AssetManager_ResourceUnloadEventHandler_o *)sub_B170CC(
                                                         AssetManager_ResourceUnloadEventHandler_TypeInfo,
                                                         v57,
                                                         v58,
                                                         v59,
                                                         v60);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v61,
      (Il2CppObject *)this,
      Method_BattleActorControl__startNoblePhantasm_b__255_0__,
      0LL);
    if ( !v56 )
      goto LABEL_65;
    AssetManager__RequestUnloadUnusedAssets(v56, v61, 0LL);
  }
  else
  {
    v62 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    v63 = this->fields.battleSvtData;
    if ( !v63 )
      goto LABEL_65;
    v64 = (BattleSequenceManager_o *)v62;
    v66 = *(_QWORD *)&v63->fields.svtId.fields.currentCryptoKey;
    v65 = *(_QWORD *)&v63->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v89.fields.currentCryptoKey = v66;
    *(_QWORD *)&v89.fields.fakeValue = v65;
    v67 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v89, 0LL);
    if ( !this->fields.battleSvtData )
      goto LABEL_65;
    v68 = v67;
    TreasureDevice = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
    if ( !TreasureDevice )
      goto LABEL_65;
    v70 = TreasureDevice;
    v71 = this->fields.battleSvtData;
    if ( !v71 )
      goto LABEL_65;
    id = v70->fields.id;
    v73 = BattleServantData__getDispLimitCount(v71, 1, 0LL);
    v74 = this->fields.battleSvtData;
    if ( !v74 )
      goto LABEL_65;
    overwriteSvtVoiceId = v74->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v74->fields.treasuredvcLevel;
    v77 = v73;
    NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL);
    v83 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_B170CC(
                                                                BattleSequenceManager_onGameObjectLoadComplete_TypeInfo,
                                                                v79,
                                                                v80,
                                                                v81,
                                                                v82);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v83,
      (Il2CppObject *)this,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v64 )
      goto LABEL_65;
    BattleSequenceManager__loadSequence(
      v64,
      v68,
      id,
      v77,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v83,
      0LL);
  }
  v84 = (UnityEngine_Object_o *)this->fields.performance;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(v84, 0LL, 0LL) )
  {
    v85 = this->fields.performance;
    if ( !v85 )
      goto LABEL_65;
    data = (UnityEngine_Object_o *)v85->fields.data;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) && !this->fields.isEnemy )
    {
      v87 = this->fields.performance;
      if ( v87 )
      {
        v88 = v87->fields.data;
        if ( v88 )
        {
          ++v88->fields.playerNpCount;
          return;
        }
      }
LABEL_65:
      sub_B170D4();
    }
  }
}


void __fastcall BattleActorControl__startWaitDeadEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleBuffData_o *buffData; // x0
  struct BattleServantData_o *v5; // x8
  BattleBuffData_o *v6; // x0
  const MethodInfo *v7; // x1
  BattleServantData_o *v8; // x0
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v10; // x2

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (buffData = battleSvtData->fields.buffData) == 0LL
    || (BattleBuffData__clearActiveBuff(buffData, 0LL), (v5 = this->fields.battleSvtData) == 0LL)
    || (v6 = v5->fields.buffData) == 0LL
    || (BattleBuffData__clearAuraBuff(v6, 0LL),
        BattleActorControl__updateBuffLoopEffect(this, v7),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_B170D4();
  }
  AuraIdList = BattleServantData__getAuraIdList(v8, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v10);
}


void __fastcall BattleActorControl__stopAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.resumetimescale = this->fields.animetimescale;
  if ( !fbxcomponent )
    sub_B170D4();
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_40FDAE3 & 1) == 0 )
  {
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, method);
    byte_40FDAE3 = 1;
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
  BattleBuffData_o *buffData; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  struct BattleServantData_o *v28; // x8
  BattleBuffData_o *v29; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v31; // x19
  BattleActorControl___c_c *v32; // x0
  struct BattleActorControl___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *_9__317_0; // x20
  Il2CppObject *v35; // x21
  struct BattleActorControl___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_List_int__o *v43; // x22
  WebViewManager_o *Instance; // x0
  void *MasterData_WarQuestSelectionMaster; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  unsigned __int64 v50; // x23
  struct System_Collections_Generic_Dictionary_int__GameObject__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  __int64 v55; // x8
  _DWORD *v56; // x22
  unsigned __int64 v57; // x25
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v58; // x0
  int32_t v59; // w23
  UnityEngine_GameObject_o *Item; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v62; // x0
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v64; // x2
  System_Collections_IEnumerator_o *v65; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v66; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v67; // x0
  UnityEngine_GameObject_o *v68; // x0
  __int64 v69; // x8
  unsigned __int64 v70; // x22
  const MethodInfo *v71; // x3
  System_Collections_IEnumerator_o *v72; // x0

  if ( (byte_40FDAF3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Remove_int__GameObject___, auraEffectList);
    sub_B16FFC(&Method_DataManager_GetMasterData_AuraEffectMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Except_int___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__, v13);
    sub_B16FFC(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&Method_BattleActorControl___c__updateAura_b__317_0__, v20);
    sub_B16FFC(&BattleActorControl___c_TypeInfo, v21);
    byte_40FDAF3 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_64;
  buffData = battleSvtData->fields.buffData;
  if ( !buffData )
    goto LABEL_64;
  if ( !BattleBuffData__GetIgnoreAuraBuffIds(buffData, 0LL) )
    goto LABEL_18;
  v28 = this->fields.battleSvtData;
  if ( !v28 )
    goto LABEL_64;
  v29 = v28->fields.buffData;
  if ( !v29 )
    goto LABEL_64;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v28->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(v29, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_18:
    v43 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                      System_Collections_Generic_List_int__TypeInfo,
                                                      v24,
                                                      v25,
                                                      v26,
                                                      v27);
    System_Collections_Generic_List_int____ctor(
      v43,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( auraEffectList )
      {
        v48 = *(_QWORD *)&auraEffectList->max_length;
        v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
        if ( (int)v48 >= 1 )
        {
          v50 = 0LL;
          while ( v50 < (unsigned int)v48 )
          {
            if ( !v49 )
              goto LABEL_64;
            MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                   v49,
                                                   auraEffectList->m_Items[v50 + 1],
                                                   (const MethodInfo_266F388 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( MasterData_WarQuestSelectionMaster )
            {
              if ( !v43 )
                goto LABEL_64;
              System_Collections_Generic_List_int___Add(
                v43,
                *((_DWORD *)MasterData_WarQuestSelectionMaster + 5),
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
            LODWORD(v48) = auraEffectList->max_length;
            if ( (__int64)++v50 >= (int)v48 )
              goto LABEL_28;
          }
          goto LABEL_65;
        }
LABEL_28:
        auraList = this->fields.auraList;
        if ( auraList )
        {
          Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
                   (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)auraList,
                   (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
          v54 = System_Linq_Enumerable__Except_int_(
                  v53,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                  (const MethodInfo_18D62FC *)Method_System_Linq_Enumerable_Except_int___);
          MasterData_WarQuestSelectionMaster = System_Linq_Enumerable__ToArray_int_(
                                                 v54,
                                                 (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( MasterData_WarQuestSelectionMaster )
          {
            v55 = *((_QWORD *)MasterData_WarQuestSelectionMaster + 3);
            v56 = MasterData_WarQuestSelectionMaster;
            if ( (int)v55 >= 1 )
            {
              v57 = 0LL;
              while ( v57 < (unsigned int)v55 )
              {
                v58 = this->fields.auraList;
                if ( !v58 )
                  goto LABEL_64;
                v59 = v56[v57 + 8];
                Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                                     (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v58,
                                                     v59,
                                                     (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( !gameObject )
                    goto LABEL_64;
                  if ( !UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL) )
                    goto LABEL_68;
                  if ( !Item )
                    goto LABEL_64;
                  v62 = UnityEngine_GameObject__get_gameObject(Item, 0LL);
                  if ( !v62 )
                    goto LABEL_64;
                  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(v62, 0LL);
                  if ( activeInHierarchy )
                  {
                    v65 = BattleActorControl__DestroyAuraEffect((BattleActorControl_o *)activeInHierarchy, Item, v64);
                    UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v65, 0LL);
                  }
                  else
                  {
LABEL_68:
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                v66 = this->fields.auraList;
                if ( !v66 )
                  goto LABEL_64;
                System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
                  (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v66,
                  v59,
                  (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                v67 = this->fields.auraList;
                if ( !v67 )
                  goto LABEL_64;
                MasterData_WarQuestSelectionMaster = (void *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
                                                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v67,
                                                               (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)MasterData_WarQuestSelectionMaster )
                  this->fields._currentPriority_k__BackingField = 0;
                LODWORD(v55) = v56[6];
                if ( (__int64)++v57 >= (int)v55 )
                  goto LABEL_53;
              }
              goto LABEL_65;
            }
LABEL_53:
            v68 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
            if ( v68 )
            {
              MasterData_WarQuestSelectionMaster = (void *)UnityEngine_GameObject__get_activeInHierarchy(v68, 0LL);
              if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) == 0 )
                return;
              v69 = *(_QWORD *)&auraEffectList->max_length;
              if ( (int)v69 < 1 )
                return;
              v70 = 0LL;
              while ( v70 < (unsigned int)v69 )
              {
                if ( !v49 )
                  goto LABEL_64;
                MasterData_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v49,
                                                       auraEffectList->m_Items[v70 + 1],
                                                       (const MethodInfo_266F388 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( MasterData_WarQuestSelectionMaster )
                {
                  v47 = *((unsigned int *)MasterData_WarQuestSelectionMaster + 6);
                  if ( this->fields._currentPriority_k__BackingField <= (int)v47 )
                  {
                    v72 = BattleActorControl__coAddAura(
                            this,
                            *((_DWORD *)MasterData_WarQuestSelectionMaster + 5),
                            v47,
                            v71);
                    MasterData_WarQuestSelectionMaster = UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                                           (UnityEngine_MonoBehaviour_o *)this,
                                                           v72,
                                                           0LL);
                  }
                }
                LODWORD(v69) = auraEffectList->max_length;
                if ( (__int64)++v70 >= (int)v69 )
                  return;
              }
LABEL_65:
              sub_B17100(MasterData_WarQuestSelectionMaster, v46, v47);
              sub_B170A0();
            }
          }
        }
      }
    }
LABEL_64:
    sub_B170D4();
  }
  v31 = this->fields.auraList;
  v32 = BattleActorControl___c_TypeInfo;
  if ( (BYTE3(BattleActorControl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v32 = BattleActorControl___c_TypeInfo;
  }
  static_fields = v32->static_fields;
  _9__317_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)static_fields->__9__317_0;
  if ( !_9__317_0 )
  {
    if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v32);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)static_fields->__9;
    _9__317_0 = (System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool__o *)sub_B170CC(
                                                                                              System_Func_KeyValuePair_int__GameObject___bool__TypeInfo,
                                                                                              v24,
                                                                                              v25,
                                                                                              v26,
                                                                                              v27);
    System_Func_KeyValuePair_int__WarBoardAIRoute_PiecePersonality___bool____ctor(
      _9__317_0,
      v35,
      Method_BattleActorControl___c__updateAura_b__317_0__,
      (const MethodInfo_2B5D860 *)Method_System_Func_KeyValuePair_int__GameObject___bool___ctor__);
    v36 = BattleActorControl___c_TypeInfo->static_fields;
    v36->__9__317_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__317_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v36->__9__317_0,
      (System_Int32_array **)_9__317_0,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  BasicHelper__Remove_int__object_(
    (System_Collections_Generic_Dictionary_K__V__o *)v31,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__317_0,
    (const MethodInfo_18B84C4 *)Method_BasicHelper_Remove_int__GameObject___);
}


void __fastcall BattleActorControl__updateBuffIcon(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleServantData_o *InfluenceIds; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x8
  BattleServantData_o *v8; // x20
  unsigned __int64 v9; // x21
  struct BattlePerformance_o *performance; // x8
  BattleData_o *data; // x0

  if ( !actionData )
    goto LABEL_12;
  InfluenceIds = (BattleServantData_o *)BattleActionData__getInfluenceIds(actionData, 0LL);
  if ( !InfluenceIds )
    goto LABEL_12;
  v7 = *(_QWORD *)&InfluenceIds->fields.uniqueId;
  v8 = InfluenceIds;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)v7 )
      {
        sub_B17100(InfluenceIds, v5, v6);
        sub_B170A0();
      }
      performance = this->fields.performance;
      if ( !performance )
        break;
      data = performance->fields.data;
      if ( !data )
        break;
      InfluenceIds = BattleData__getServantData(
                       data,
                       *((_DWORD *)&v8->fields.userSvtId.fields.currentCryptoKey + v9),
                       0LL);
      if ( InfluenceIds )
        BattleServantData__updateBuff(InfluenceIds, 1, 1, 0LL);
      LODWORD(v7) = v8->fields.uniqueId;
      if ( (__int64)++v9 >= (int)v7 )
        return;
    }
LABEL_12:
    sub_B170D4();
  }
}


void __fastcall BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleBuffData_o *buffData; // x0
  System_Collections_Generic_List_BattleBuffData_BuffData__o *EffectBuffList; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_int__o *v29; // x20
  int size; // w8
  int v31; // w24
  BattleBuffData_BuffData_o *v32; // x8
  BuffEntity_o *Entity; // x23
  const MethodInfo *v34; // x2
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v36; // x0
  UnityEngine_GameObject_o *Item; // x0
  changeVColor_array *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  int max_length; // w8
  changeVColor_array *v42; // x23
  unsigned int v43; // w27
  UnityEngine_ParticleSystemRenderer_o *v44; // x0
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v45; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_List_int__o *v47; // x0
  int32_t current; // w21
  const MethodInfo *v49; // x2
  System_Collections_IEnumerator_o *v50; // x1
  System_Collections_Generic_List_Enumerator_int__o v51; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v52; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_40FDB04 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____66859688, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_40FDB04 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_35;
  buffData = battleSvtData->fields.buffData;
  if ( !buffData )
    goto LABEL_35;
  EffectBuffList = BattleBuffData__GetEffectBuffList(buffData, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BuffMaster___);
  v29 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v25,
                                                    v26,
                                                    v27,
                                                    v28);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EffectBuffList )
    goto LABEL_35;
  size = EffectBuffList->fields._size;
  if ( size >= 1 )
  {
    v31 = 0;
    while ( 1 )
    {
      if ( size <= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v32 = EffectBuffList->fields._items->m_Items[v31];
      if ( !v32 )
        goto LABEL_35;
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_35;
      Entity = (BuffEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 MasterData_WarQuestSelectionMaster,
                                 v32->fields.buffId,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(this, Entity, v34);
      if ( !Entity || !v29 )
        goto LABEL_35;
      if ( !System_Collections_Generic_List_int___Contains(
              v29,
              Entity->fields.effectId,
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        System_Collections_Generic_List_int___Add(
          v29,
          Entity->fields.effectId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        buffLoopEffectDict = this->fields.buffLoopEffectDict;
        if ( !buffLoopEffectDict )
          goto LABEL_35;
        if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
               (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)buffLoopEffectDict,
               Entity->fields.effectId,
               (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          v36 = this->fields.buffLoopEffectDict;
          if ( !v36 )
            goto LABEL_35;
          Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                               (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v36,
                                               Entity->fields.effectId,
                                               (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !Item )
            goto LABEL_35;
          v38 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                  Item,
                  1,
                  (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____66859688);
          if ( !v38 )
            goto LABEL_35;
          max_length = v38->max_length;
          v42 = v38;
          if ( max_length >= 1 )
            break;
        }
      }
LABEL_26:
      size = EffectBuffList->fields._size;
      if ( ++v31 >= size )
        goto LABEL_27;
    }
    v43 = 0;
    while ( 1 )
    {
      if ( v43 >= max_length )
      {
        sub_B17100(v38, v39, v40);
        sub_B170A0();
      }
      v44 = (UnityEngine_ParticleSystemRenderer_o *)v42->m_Items[v43];
      if ( !v44 )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(v44, (float)((float)v31 * 0.01) + -1.0, 0LL);
      max_length = v42->max_length;
      if ( (int)++v43 >= max_length )
        goto LABEL_26;
    }
LABEL_35:
    sub_B170D4();
  }
LABEL_27:
  v45 = this->fields.buffLoopEffectDict;
  if ( !v45 )
    goto LABEL_35;
  Keys = System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData___get_Keys(
           (System_Collections_Generic_Dictionary_int__SoundPlayerListViewItem_BgmPriorityData__o *)v45,
           (const MethodInfo_2DE8FC8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  v47 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                    (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v47 )
    goto LABEL_35;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v51,
    v47,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v52 = v51;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v52,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !v29 )
      sub_B170D4();
    current = v52.fields.current;
    if ( !System_Collections_Generic_List_int___Contains(
            v29,
            v52.fields.current,
            (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v50 = BattleActorControl__DestroyEffectOnParticleStop(this, current, v49);
      UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v50, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v52,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  UnityEngine_GameObject_o *gameObject; // x19
  void *HasProperty_40721564; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  _DWORD *v17; // x20
  unsigned int v18; // w22
  char *v19; // x8
  UnityEngine_Renderer_o *v20; // x21
  UnityEngine_Material_o *material; // x0
  BattleActorControl_c *v22; // x0
  float defaultHeight; // s9
  UnityEngine_Material_o *v24; // x0
  float v25; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  UnityEngine_Material_o *v29; // x21
  float v30; // s4
  float v31; // s5
  float v32; // s6
  float v33; // s7
  int v34; // w8
  int v35; // w23
  char *v36; // x8
  UnityEngine_Component_o *v37; // x20
  __int64 v38; // x8
  _QWORD *v39; // x21
  unsigned __int64 v40; // x28
  UnityEngine_Material_o *v41; // x22
  UnityEngine_Object_o *v42; // x0
  System_String_o *name; // x0
  UnityEngine_Object_o *v44; // x0
  System_String_o *v45; // x0
  System_String_o *v46; // x1
  UnityEngine_Material_o *v47; // x0
  float v48; // s0
  float y; // s9
  float v50; // s10
  float v51; // s11
  int *v52; // [xsp+0h] [xbp-C0h]
  MethodInfo methoda; // [xsp+8h] [xbp-B8h] BYREF
  UnityEngine_Vector3_o center; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o extents; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v58; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40FDAB8 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v5);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_15887/*"_ClipSharpnessY"*/, v8);
    sub_B16FFC(&StringLiteral_15891/*"_Color"*/, v9);
    sub_B16FFC(&StringLiteral_23162/*"weapon"*/, v10);
    sub_B16FFC(&StringLiteral_16813/*"body"*/, v11);
    byte_40FDAB8 = 1;
  }
  memset(&methoda.klass, 0, 24);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)gameObject, 0LL, 0LL) )
  {
    if ( !gameObject )
      goto LABEL_47;
    HasProperty_40721564 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                             gameObject,
                             (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !HasProperty_40721564 )
      goto LABEL_47;
    v16 = *((_DWORD *)HasProperty_40721564 + 6);
    v17 = HasProperty_40721564;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( v18 < v16 )
      {
        v19 = (char *)&v17[2 * v18];
        v20 = (UnityEngine_Renderer_o *)*((_QWORD *)v19 + 4);
        if ( !v20 )
          goto LABEL_47;
        material = UnityEngine_Renderer__get_material(*((UnityEngine_Renderer_o **)v19 + 4), 0LL);
        if ( !material )
          goto LABEL_47;
        HasProperty_40721564 = (void *)UnityEngine_Material__HasProperty_40721564(
                                         material,
                                         (System_String_o *)StringLiteral_15891/*"_Color"*/,
                                         0LL);
        if ( ((unsigned __int8)HasProperty_40721564 & 1) != 0 )
        {
          v22 = BattleActorControl_TypeInfo;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v22 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v22->static_fields->defaultHeight;
          v24 = UnityEngine_Renderer__get_material(v20, 0LL);
          if ( !v24 )
            goto LABEL_47;
          v25 = val / defaultHeight;
          color = UnityEngine_Material__get_color(v24, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          v29 = UnityEngine_Renderer__get_material(v20, 0LL);
          v58.fields.a = 1.0 - v25;
          v58.fields.r = r;
          v58.fields.g = g;
          v58.fields.b = b;
          methoda.methodPointer = 0LL;
          methoda.invoker_method = 0LL;
          UnityEngine_Color___ctor(v58, v30, v31, v32, v33, &methoda);
          if ( !v29 )
            goto LABEL_47;
          *(_QWORD *)&v59.fields.r = methoda.methodPointer;
          *(_QWORD *)&v59.fields.b = methoda.invoker_method;
          UnityEngine_Material__set_color(v29, v59, 0LL);
        }
        v16 = v17[6];
        if ( (int)++v18 >= v16 )
          goto LABEL_22;
      }
LABEL_48:
      sub_B17100(HasProperty_40721564, v14, v15);
      sub_B170A0();
    }
LABEL_22:
    HasProperty_40721564 = UnityEngine_GameObject__GetComponentsInChildren_changeVColor__27072796(
                             gameObject,
                             (const MethodInfo_19D191C *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !HasProperty_40721564 )
LABEL_47:
      sub_B170D4();
    v34 = *((_DWORD *)HasProperty_40721564 + 6);
    if ( v34 >= 1 )
    {
      v35 = 0;
      v52 = (int *)HasProperty_40721564;
      while ( 1 )
      {
        if ( v35 >= (unsigned int)v34 )
          goto LABEL_48;
        v36 = (char *)HasProperty_40721564 + 8 * v35;
        v37 = (UnityEngine_Component_o *)*((_QWORD *)v36 + 4);
        if ( !v37 )
          goto LABEL_47;
        HasProperty_40721564 = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v36 + 4), 0LL);
        if ( !HasProperty_40721564 )
          goto LABEL_47;
        v38 = *((_QWORD *)HasProperty_40721564 + 3);
        v39 = HasProperty_40721564;
        if ( (int)v38 >= 1 )
          break;
LABEL_45:
        HasProperty_40721564 = v52;
        ++v35;
        v34 = v52[6];
        if ( v35 >= v34 )
          return;
      }
      v40 = 0LL;
      while ( v40 < (unsigned int)v38 )
      {
        v41 = (UnityEngine_Material_o *)v39[v40 + 4];
        v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
        if ( !v42 )
          goto LABEL_47;
        name = UnityEngine_Object__get_name(v42, 0LL);
        if ( !name )
          goto LABEL_47;
        if ( System_String__StartsWith(name, (System_String_o *)StringLiteral_16813/*"body"*/, 0LL) )
          goto LABEL_37;
        v44 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v37, 0LL);
        if ( !v44 )
          goto LABEL_47;
        v45 = UnityEngine_Object__get_name(v44, 0LL);
        if ( !v45 )
          goto LABEL_47;
        if ( System_String__StartsWith(v45, (System_String_o *)StringLiteral_23162/*"weapon"*/, 0LL) )
        {
LABEL_37:
          if ( !v41 )
            goto LABEL_47;
          v46 = (System_String_o *)StringLiteral_15887/*"_ClipSharpnessY"*/;
          v47 = v41;
          v48 = val;
        }
        else
        {
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v37,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          center = UnityEngine_Bounds__get_center((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          y = center.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v37,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          extents = UnityEngine_Bounds__get_extents((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          v50 = extents.fields.y;
          UnityEngine_SkinnedMeshRenderer__get_localBounds(
            (UnityEngine_Bounds_o *)&methoda,
            (UnityEngine_SkinnedMeshRenderer_o *)v37,
            0LL);
          methoda.parameters = methoda.name;
          *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
          size = UnityEngine_Bounds__get_size((UnityEngine_Bounds_o *)&methoda.klass, 0LL);
          v51 = size.fields.y;
          if ( (BYTE3(BattleActorControl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          }
          if ( !v41 )
            goto LABEL_47;
          v46 = (System_String_o *)StringLiteral_15887/*"_ClipSharpnessY"*/;
          v47 = v41;
          v48 = (float)(y - v50)
              + (float)((float)((float)(v51 + 0.2) / BattleActorControl_TypeInfo->static_fields->defaultHeight) * val);
        }
        UnityEngine_Material__SetFloat(v47, v46, v48, 0LL);
        LODWORD(v38) = *((_DWORD *)v39 + 6);
        if ( (__int64)++v40 >= (int)v38 )
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
  __int64 v4; // x4
  __int64 v7; // x21
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

  if ( (byte_40FDAEC & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl__waitChangeApp_d__309_TypeInfo, callback);
    byte_40FDAEC = 1;
  }
  v7 = sub_B170CC(BattleActorControl__waitChangeApp_d__309_TypeInfo, callback, method, v3, v4);
  BattleActorControl__waitChangeApp_d__309___ctor((BattleActorControl__waitChangeApp_d__309_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v15; // x21

  if ( (byte_40F84BC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, actor);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo, v9);
    byte_40F84BC = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  actor,
                                                                                                  method,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v10;
  sub_B16F98(&this->fields._activeFsmNameList, v10);
  v15 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                        System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo,
                                                                        v11,
                                                                        v12,
                                                                        v13,
                                                                        v14);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v15,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v15;
  sub_B16F98(&this->fields._callBackQueue, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_B16F98(&this->fields.battleActor, actor);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x20

  if ( (byte_40F84BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, fsmName);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_40F84BE = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B170D4();
  if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)activeFsmNameList,
          (WarBoardManager_TaskList_o *)fsmName,
          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)activeFsmNameList,
      (EventMissionProgressRequest_Argument_ProgressData_o *)fsmName,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_40F84C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__, callBack);
    byte_40F84C0 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B170D4();
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    callBackQueue,
    (Mono_Net_CFNetwork_GetProxyData_o *)callBack,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *callBackQueue; // x0

  if ( (byte_40F84C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__, v3);
    byte_40F84C1 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v4);
  callBackQueue = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_B170D4();
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_40F84BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_40F84BB = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B170D4();
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *activeFsmNameList; // x0

  if ( (byte_40F84BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Remove__, fsmName);
    byte_40F84BF = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_B170D4();
  return System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
           activeFsmNameList,
           (WarBoardManager_TaskList_o *)fsmName,
           (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  int32_t WaveCount; // w0
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8
  struct System_Collections_Generic_Queue_BattleCallBackBase__o *callBackQueue; // x0

  if ( (byte_40F84BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__, v3);
    byte_40F84BD = 1;
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
  WaveCount = BattleActorControl__getWaveCount(battleActor, 0LL);
  activeFsmNameList = this->fields._activeFsmNameList;
  this->fields.wave = WaveCount;
  if ( !activeFsmNameList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)activeFsmNameList,
          (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_string__Clear__),
        (callBackQueue = this->fields._callBackQueue) == 0LL) )
  {
LABEL_10:
    sub_B170D4();
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)callBackQueue,
    (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl_EndCallEvent___ctor(
        BattleActorControl_EndCallEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B16F98(p_method, object);
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
  return (System_IAsyncResult_o *)sub_B16FA0(this, v6, callback, object, method);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v27->fields.extra_arg, hash, method);
      v31 = sub_B1702C(v28);
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
            v40 = sub_B17024(v28);
            v41 = sub_B17428(v28);
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
                  v23 = sub_AAFEF8(hash, v43, v44);
                }
                v15 = *(_QWORD *)(v23 + 8);
              }
              else
              {
                v15 = *((_QWORD *)&hash->klass->vtable._1_Finalize.methodPtr + 2 * *(unsigned __int16 *)(v28 + 72));
              }
              v24 = (void (__fastcall **)(System_Collections_Hashtable_o *, _QWORD))sub_B170AC(v15, v28);
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
                  v14 = sub_AAFEF8(hash, class_0, v9);
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
          v33 = sub_B17024(v28);
          v34 = sub_B17428(v28);
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
                v25 = sub_AAFEF8(v29, v36, v37);
              }
              v22 = *(_QWORD *)(v25 + 8);
            }
            else
            {
              v22 = *(_QWORD *)(*v29 + 16LL * *(unsigned __int16 *)(v28 + 72) + 320);
            }
            v26 = (void (__fastcall **)(__int64 *, System_Collections_Hashtable_o *, _QWORD))sub_B170AC(v22, v28);
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
                v21 = sub_AAFEF8(v29, v17, v16);
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
  __int64 v4; // x4
  struct System_Collections_Hashtable_o *v8; // x0
  struct System_Collections_Hashtable_o **p_table; // x21
  struct System_Collections_Hashtable_o *table; // t1
  System_Collections_Hashtable_o *v11; // x22

  if ( (byte_40F84C2 & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, key);
    byte_40F84C2 = 1;
  }
  table = this->fields.table;
  p_table = &this->fields.table;
  v8 = table;
  if ( !table )
  {
    v11 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, key, obj, method, v4);
    System_Collections_Hashtable___ctor_38240048(v11, 0LL);
    *p_table = v11;
    sub_B16F98(p_table, v11);
    v8 = *p_table;
    if ( !*p_table )
      sub_B170D4();
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppObject *, Il2CppMethodPointer))v8->klass->vtable._23_Add.method)(
    v8,
    key,
    obj,
    v8->klass->vtable._24_Clear.methodPtr);
}


void __fastcall BattleActorControl_EventClass__Proc(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.eventcall )
    sub_B170D4();
  BattleActorControl_EndCallEvent__Invoke(this->fields.eventcall, this->fields.table, v2);
}


void __fastcall BattleActorControl_ExtraLoadedVoiceArgs___ctor(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v7; // 0:x0.16

  if ( (byte_40F84C3 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
    byte_40F84C3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_B170D4();
  v6 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v5 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v7.fields.currentCryptoKey = v6;
  *(_QWORD *)&v7.fields.fakeValue = v5;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v7, 0LL);
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


void __fastcall BattleActorControl__DestroyAuraEffect_d__318___ctor(
        BattleActorControl__DestroyAuraEffect_d__318_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__318__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__318_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyAuraEffect_d__318_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  UnityEngine_GameObject_o *effectObject; // x0
  UnityEngine_GameObject_o **p_effectObject; // x22
  srcLineSprite_o *Component_srcLineSprite; // x20
  System_Int32_array **v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x8
  int aliveCount_5__3; // w8
  int32_t *p_aliveCount_5__3; // x21
  struct UnityEngine_ParticleSystem_array *v26; // x22
  __int64 v27; // x8
  unsigned __int64 v28; // x23
  UnityEngine_Object_o *v29; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0
  BattleServantConfConponent_o *p_particleArray_5__2; // x19
  UnityEngine_GameObject_o *v33; // x19
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__318_o *v35; // x19
  unsigned __int64 v36; // x24
  UnityEngine_Object_o *v37; // x20
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v39; // x8
  BattleActorControl__DestroyAuraEffect_d__318_o *v40; // x20
  unsigned __int64 v41; // x25
  UnityEngine_Object_o *v42; // x21
  UnityEngine_GameObject_o *v43; // x19

  v8 = this;
  if ( (byte_40F9190 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696, v10);
    this = (BattleActorControl__DestroyAuraEffect_d__318_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9190 = 1;
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
    p_effectObject = &v8->fields.effectObject;
    effectObject = v8->fields.effectObject;
    v8->fields.__1__state = -1;
    if ( !effectObject )
      goto LABEL_68;
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                effectObject,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
    {
      if ( !Component_srcLineSprite )
        goto LABEL_68;
      if ( *(&Component_srcLineSprite->fields.mtIsUpdate + 2) )
      {
LABEL_33:
        v33 = *p_effectObject;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v33, 0LL, 0LL) )
        {
          if ( *p_effectObject )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__318_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                                       *p_effectObject,
                                                                       1,
                                                                       (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____66859696);
            if ( this )
            {
              _2__current = this->fields.__2__current;
              v35 = this;
              if ( (int)_2__current >= 1 )
              {
                v36 = 0LL;
                while ( 1 )
                {
                  if ( v36 >= (unsigned int)_2__current )
                    goto LABEL_67;
                  v37 = (UnityEngine_Object_o *)*((_QWORD *)&v35->fields.effectObject + v36);
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  this = (BattleActorControl__DestroyAuraEffect_d__318_o *)UnityEngine_Object__op_Equality(
                                                                             v37,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v37 )
                      goto LABEL_68;
                    materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                      (UnityEngine_Renderer_o *)v37,
                                                                      0LL);
                    this = (BattleActorControl__DestroyAuraEffect_d__318_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__318_o *)UnityEngine_Renderer__get_materials(
                                                                                 (UnityEngine_Renderer_o *)v37,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_68;
                      v39 = this->fields.__2__current;
                      v40 = this;
                      if ( (int)v39 >= 1 )
                        break;
                    }
                  }
LABEL_61:
                  LODWORD(_2__current) = v35->fields.__2__current;
                  if ( (__int64)++v36 >= (int)_2__current )
                    goto LABEL_62;
                }
                v41 = 0LL;
                while ( v41 < (unsigned int)v39 )
                {
                  v42 = (UnityEngine_Object_o *)*((_QWORD *)&v40->fields.effectObject + v41);
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  this = (BattleActorControl__DestroyAuraEffect_d__318_o *)UnityEngine_Object__op_Equality(
                                                                             v42,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    }
                    UnityEngine_Object__Destroy_34809464(v42, 0LL);
                  }
                  LODWORD(v39) = v40->fields.__2__current;
                  if ( (__int64)++v41 >= (int)v39 )
                    goto LABEL_61;
                }
LABEL_67:
                sub_B17100(this, method, v2);
                sub_B170A0();
              }
LABEL_62:
              v43 = *p_effectObject;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)v43, 0LL);
              return 0;
            }
          }
LABEL_68:
          sub_B170D4();
        }
        return 0;
      }
    }
    if ( !*p_effectObject )
      goto LABEL_68;
    v16 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   *p_effectObject,
                                   1,
                                   (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v16;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v16, v17, v18, v19, v20, v21, v22);
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
    sub_B16F98(p_particleArray_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    p_effectObject = (UnityEngine_GameObject_o **)&p_particleArray_5__2[-1].fields.isOpenAfter;
    goto LABEL_33;
  }
  v26 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !v26 )
    goto LABEL_68;
  v27 = *(_QWORD *)&v26->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0LL;
    while ( v28 < (unsigned int)v27 )
    {
      v29 = (UnityEngine_Object_o *)v26->m_Items[v28];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyAuraEffect_d__318_o *)UnityEngine_Object__op_Equality(v29, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v29 )
          goto LABEL_68;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v29, 0LL) )
          UnityEngine_ParticleSystem__Stop_49805596((UnityEngine_ParticleSystem_o *)v29, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__318_o *)UnityEngine_ParticleSystem__IsAlive_49805896(
                                                                   (UnityEngine_ParticleSystem_o *)v29,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v27) = v26->max_length;
      if ( (__int64)++v28 >= (int)v27 )
        goto LABEL_31;
    }
    goto LABEL_67;
  }
LABEL_31:
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B16F98(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__318__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__318_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__318__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__318_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__DestroyAuraEffect_d__318_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__318__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__318_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__318__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__318_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__344___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__344_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__344__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__344_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleActorControl__DestroyEffectOnParticleStop_d__344_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x20
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *buffLoopEffectDict; // x0
  UnityEngine_GameObject_o *Item; // x0
  System_Int32_array **v16; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x0
  UnityEngine_GameObject_o *v25; // x0
  int aliveCount_5__3; // w8
  int32_t *p_aliveCount_5__3; // x21
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x22
  __int64 v29; // x8
  unsigned __int64 v30; // x23
  UnityEngine_Object_o *v31; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_40F9191 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v9);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680, v10);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__344_o *)sub_B16FFC(&UnityEngine_Object_TypeInfo, v11);
    byte_40F9191 = 1;
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
    buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)_4__this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_36;
    Item = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                         buffLoopEffectDict,
                                         v8->fields.key,
                                         (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !Item )
      goto LABEL_36;
    v16 = (System_Int32_array **)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                   Item,
                                   1,
                                   (const MethodInfo_19D1940 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____66859680);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)v16;
    p_particleArray_5__2 = &v8->fields._particleArray_5__2;
    sub_B16F98((BattleServantConfConponent_o *)&v8->fields._particleArray_5__2, v16, v18, v19, v20, v21, v22, v23);
    if ( !v8->fields._particleArray_5__2 )
      goto LABEL_33;
    v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)_4__this->fields.buffLoopEffectDict;
    if ( !v24 )
      goto LABEL_36;
    v25 = (UnityEngine_GameObject_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                        v24,
                                        v8->fields.key,
                                        (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !v25 )
      goto LABEL_36;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__344_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v25,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    sub_B170D4();
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_36;
  v29 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v29 >= 1 )
  {
    v30 = 0LL;
    do
    {
      if ( v30 >= (unsigned int)v29 )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v31 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v30];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__344_o *)UnityEngine_Object__op_Equality(v31, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v31 )
          goto LABEL_36;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v31, 0LL) )
          UnityEngine_ParticleSystem__Stop_49805596((UnityEngine_ParticleSystem_o *)v31, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__344_o *)UnityEngine_ParticleSystem__IsAlive_49805896(
                                                                             (UnityEngine_ParticleSystem_o *)v31,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++*p_aliveCount_5__3;
      }
      LODWORD(v29) = particleArray_5__2->max_length;
      ++v30;
    }
    while ( (__int64)v30 < (int)v29 );
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
  sub_B16F98(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__344__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__344__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__344_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__344_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__344__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__344__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__344_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__258___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__258__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *this,
        const MethodInfo *method)
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
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v21; // x8
  struct BattleServantData_o *v22; // x8
  BattlePerformance_o *performance; // x0
  BattlePerformance_o *v24; // x0
  struct BattlePerformance_o *v25; // x20
  BattlePerformance_c *v26; // x0
  struct BattlePerformance_o *v27; // x8
  UnityEngine_Component_o *actorcamera; // x0
  UnityEngine_Transform_o *transform; // x20
  int v30; // s0
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int32_t Value; // w0
  BattleServantData_o *v36; // x20
  int32_t v37; // w21
  BattleActionData_o *actiondata; // x0
  System_Int32_array *TargetIds; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x8
  System_Int32_array *v43; // x20
  unsigned __int64 v44; // x26
  BattlePerformance_o *v45; // x0
  UnityEngine_Object_o *ServantActor; // x21
  BattleServantData_o *monitor; // x0
  _BYTE *v48; // x8
  System_String_o *v49; // x0
  System_String_o *v50; // x0
  int32_t v51; // w0
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v53; // x20
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v58; // x21
  struct BattlePerformance_o *v59; // x8
  BattleData_o *data; // x0
  StageEntity_o *StageEntity; // x0
  int32_t i_5__2; // w8
  UnityEngine_WaitForEndOfFrame_o *v63; // x19
  Il2CppObject **p__2__current; // x20
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  Il2CppObject **v71; // x20
  int v72; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_40F9192 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_USSequencer___ctor__, method);
    sub_B16FFC(&System_Action_USSequencer__TypeInfo, v9);
    sub_B16FFC(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__, v10);
    sub_B16FFC(&BattlePerformance_TypeInfo, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v13);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_13286/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v15);
    sub_B16FFC(&StringLiteral_23096/*"wait"*/, v16);
    byte_40F9192 = 1;
  }
  v72 = 0;
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      battleSvtData = _4__this->fields.battleSvtData;
      if ( battleSvtData )
      {
        if ( BattleServantData__IsTDAppearance(battleSvtData, 0LL) )
        {
          v21 = _4__this->fields.battleSvtData;
          if ( !v21 )
            goto LABEL_57;
          v21->fields.dressDispId = -1;
          v22 = _4__this->fields.battleSvtData;
          if ( !v22 )
            goto LABEL_57;
          v22->fields.isForceAppearance = 0;
        }
        performance = _4__this->fields.performance;
        if ( performance )
        {
          BattlePerformance__setDamageVoiceFlg(performance, 1, 0LL);
          v24 = _4__this->fields.performance;
          if ( v24 )
          {
            BattlePerformance__FlipAll(v24, _4__this->fields.isEnemy, 0LL);
            v25 = _4__this->fields.performance;
            if ( v25 )
            {
              _4__this->fields.backupFov = v25->fields.currentFov;
              v26 = BattlePerformance_TypeInfo;
              if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v26 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(v25, v26->static_fields->DefaultFov, 0LL);
              v27 = _4__this->fields.performance;
              if ( v27 )
              {
                actorcamera = (UnityEngine_Component_o *)v27->fields.actorcamera;
                if ( actorcamera )
                {
                  transform = UnityEngine_Component__get_transform(actorcamera, 0LL);
                  *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Vector3__get_zero(0LL);
                  if ( transform )
                  {
                    UnityEngine_Transform__set_localEulerAngles(transform, *(UnityEngine_Vector3_o *)&v30, 0LL);
                    v72 = 1;
                    v33 = System_Int32__ToString((int32_t)&v72, 0LL);
                    v34 = System_String__Concat_43743732((System_String_o *)StringLiteral_13286/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v33, 0LL);
                    Value = ConstantMaster__getValue(v34, 0LL);
                    v36 = _4__this->fields.battleSvtData;
                    if ( Value == -1 )
                    {
LABEL_45:
                      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v36 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, WebViewManager_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v36->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v36,
                          Instance,
                          _4__this,
                          v36->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        v53 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v58 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                                     System_Action_USSequencer__TypeInfo,
                                                                                                     v54,
                                                                                                     v55,
                                                                                                     v56,
                                                                                                     v57);
                        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
                          v58,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          (const MethodInfo_24B7310 *)Method_System_Action_USSequencer___ctor__);
                        if ( v53 )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)v53,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v58,
                            0LL);
                          v59 = _4__this->fields.performance;
                          if ( v59 )
                          {
                            data = v59->fields.data;
                            if ( data )
                            {
                              StageEntity = BattleData__getStageEntity(data, 0LL);
                              if ( StageEntity )
                              {
                                if ( StageEntity__Is3_6BossBattle(StageEntity, 0LL) )
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
                      v37 = Value;
                      while ( 1 )
                      {
                        if ( !v36 )
                          goto LABEL_57;
                        if ( v37 == BattleServantData__getSvtId(v36, 0LL) )
                        {
                          actiondata = _4__this->fields.actiondata;
                          if ( !actiondata )
                            goto LABEL_57;
                          TargetIds = BattleActionData__getTargetIds(actiondata, 0LL);
                          if ( !TargetIds )
                            goto LABEL_57;
                          v42 = *(_QWORD *)&TargetIds->max_length;
                          v43 = TargetIds;
                          if ( (int)v42 >= 1 )
                            break;
                        }
LABEL_44:
                        ++v72;
                        v49 = System_Int32__ToString((int32_t)&v72, 0LL);
                        v50 = System_String__Concat_43743732((System_String_o *)StringLiteral_13286/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v49, 0LL);
                        v51 = ConstantMaster__getValue(v50, 0LL);
                        v36 = _4__this->fields.battleSvtData;
                        v37 = v51;
                        if ( v51 == -1 )
                          goto LABEL_45;
                      }
                      v44 = 0LL;
                      while ( 1 )
                      {
                        if ( v44 >= (unsigned int)v42 )
                        {
                          sub_B17100(TargetIds, v40, v41);
                          sub_B170A0();
                        }
                        v45 = _4__this->fields.performance;
                        if ( !v45 )
                          break;
                        ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                                                 v45,
                                                                 v43->m_Items[v44 + 1],
                                                                 0LL);
                        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        }
                        TargetIds = (System_Int32_array *)UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
                        if ( ((unsigned __int8)TargetIds & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          monitor = (BattleServantData_o *)ServantActor[17].monitor;
                          if ( !monitor )
                            break;
                          if ( monitor->fields.isSleepWaitMode )
                          {
                            monitor->fields.isSleepWaitMode = 0;
                            v48 = ServantActor[17].monitor;
                            if ( !v48 )
                              break;
                            v48[793] = 1;
                            BattleActorControl__playAnimation_32029680(
                              (BattleActorControl_o *)ServantActor,
                              (System_String_o *)StringLiteral_23096/*"wait"*/,
                              0,
                              0LL);
                            monitor = (BattleServantData_o *)ServantActor[17].monitor;
                            if ( !monitor )
                              break;
                          }
                          TargetIds = (System_Int32_array *)BattleServantData__IsCounterWaitMotion(monitor, 0LL);
                          if ( ((unsigned __int8)TargetIds & 1) != 0 )
                            BattleActorControl__playAnimation_32029680(
                              (BattleActorControl_o *)ServantActor,
                              (System_String_o *)StringLiteral_23096/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(v42) = v43->max_length;
                        if ( (__int64)++v44 >= (int)v42 )
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
    sub_B170D4();
  }
  if ( _1__state == 1 )
  {
    i_5__2 = this->fields._i_5__2;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 >= 3 )
    {
      v63 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3, v4);
      UnityEngine_WaitForEndOfFrame___ctor(v63, 0LL);
      this->fields.__2__current = (Il2CppObject *)v63;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)v63,
        v65,
        v66,
        v67,
        v68,
        v69,
        v70);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
  }
  else
  {
    result = 0;
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    this->fields._i_5__2 = 0;
  }
  this->fields.__2__current = 0LL;
  v71 = &this->fields.__2__current;
  sub_B16F98((BattleServantConfConponent_o *)v71, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *((_DWORD *)v71 - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__258__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__258__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__258_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__258__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__258__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__258_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F9188 & 1) == 0 )
  {
    sub_B16FFC(&BattleActorControl___c_TypeInfo, v1);
    byte_40F9188 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(BattleActorControl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)BattleActorControl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__129_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__129_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_40F918A & 1) == 0 )
  {
    sub_B16FFC(&System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, x);
    byte_40F918A = 1;
  }
  if ( !x )
    sub_B170D4();
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
    p_method = sub_AAFEF8(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__129_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_40F918B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, x);
    byte_40F918B = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__185_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___setServantData_b__128_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *name; // x20
  System_String_o *v7; // x0

  if ( (byte_40F9189 & 1) == 0 )
  {
    sub_B16FFC(&BattleFBXComponent_TypeInfo, x);
    sub_B16FFC(&StringLiteral_16813/*"body"*/, v4);
    byte_40F9189 = 1;
  }
  if ( !x )
    goto LABEL_15;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  if ( UnityEngine_GameObject__get_activeSelf(gameObject, 0LL)
    && UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x, 0LL) )
  {
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
    if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    }
    if ( !name )
      goto LABEL_15;
    if ( System_String__Contains(name, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      v7 = UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( v7 )
        return System_String__Contains(v7, (System_String_o *)StringLiteral_16813/*"body"*/, 0LL);
LABEL_15:
      sub_B170D4();
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__317_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_40F918C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, *(_QWORD *)&x.fields.key);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40F918C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__279_object____cctor(const MethodInfo_1F89664 *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  BattleActorControl___c__279_T__c *klass; // x20
  Il2CppClass *_0_BattleActorControl___c__279_T; // x20
  __int64 v8; // x0
  BattleActorControl___c__279_T__c *v9; // x22
  System_Int32_array **v10; // x20
  __int16 v11; // w8
  BattleActorControl___c__279_T__c *v12; // x21
  void (__fastcall *methodPointer)(System_Int32_array **, MethodInfo *); // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleActorControl___c__279_T__c *v20; // x19
  Il2CppClass *_2_BattleActorControl___c__279_T; // x19
  BattleServantConfConponent_o *static_fields; // x0

  klass = method->klass;
  if ( (BYTE2(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(method->klass);
  _0_BattleActorControl___c__279_T = klass->rgctx_data->_0_BattleActorControl___c__279_T_;
  if ( (BYTE2(_0_BattleActorControl___c__279_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_0_BattleActorControl___c__279_T);
  v8 = sub_B170CC(_0_BattleActorControl___c__279_T, v1, v2, v3, v4);
  v9 = method->klass;
  v10 = (System_Int32_array **)v8;
  v11 = WORD1(v9->vtable._0_Equals.methodPtr);
  v12 = v9;
  if ( (v11 & 1) == 0 )
  {
    sub_AAFCFC(method->klass);
    v12 = method->klass;
    v11 = WORD1(v12->vtable._0_Equals.methodPtr);
  }
  methodPointer = (void (__fastcall *)(System_Int32_array **, MethodInfo *))v9->rgctx_data->_1_BattleActorControl___c__279_T___ctor->methodPointer;
  if ( (v11 & 1) == 0 )
    sub_AAFCFC(v12);
  methodPointer(v10, v12->rgctx_data->_1_BattleActorControl___c__279_T___ctor);
  v20 = method->klass;
  if ( (BYTE2(v20->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_AAFCFC(v20);
  _2_BattleActorControl___c__279_T = v20->rgctx_data->_2_BattleActorControl___c__279_T_;
  if ( (BYTE2(_2_BattleActorControl___c__279_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(_2_BattleActorControl___c__279_T);
  static_fields = (BattleServantConfConponent_o *)_2_BattleActorControl___c__279_T->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B16F98(static_fields, v10, v14, v15, v16, v17, v18, v19);
}


void __fastcall BattleActorControl___c__279_object____ctor(
        BattleActorControl___c__279_T__o *this,
        const MethodInfo_1F89740 *method)
{
  if ( !this )
    sub_B170D4();
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__279_object____UpdateMaterialsOnRenderders_b__279_0(
        BattleActorControl___c__279_T__o *this,
        Il2CppObject *x,
        const MethodInfo_1F89758 *method)
{
  if ( (byte_40FE21C & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40FE21C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__279_object____UpdateMaterialsOnRenderders_b__279_1(
        BattleActorControl___c__279_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_1F897C0 *method)
{
  if ( (byte_40FE21D & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_40FE21D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass128_0___ctor(
        BattleActorControl___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass128_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_B170D4();
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass129_0___ctor(
        BattleActorControl___c__DisplayClass129_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass129_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass129_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_B170D4();
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, method);
}


void __fastcall BattleActorControl___c__DisplayClass157_0___ctor(
        BattleActorControl___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass157_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass157_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  WellFired_USFGOPlayBgmEventConditional_CondBGM_array *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F918D & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_FsmTransition___, fsm);
    sub_B16FFC(&Method_System_Func_FsmTransition__bool___ctor__, v5);
    sub_B16FFC(&System_Func_FsmTransition__bool__TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass157_0__ExistMotionEvent_b__1__, v8);
    byte_40F918D = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL) )
    return 0;
  if ( !fsm )
    sub_B170D4();
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v15 = (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_B170CC(
                                                           System_Func_FsmTransition__bool__TypeInfo,
                                                           v10,
                                                           v11,
                                                           v12,
                                                           v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass157_0__ExistMotionEvent_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_FsmTransition__bool___ctor__);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
           v15,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_18B6074 *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass157_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass157_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_B170D4();
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass266_0___ctor(
        BattleActorControl___c__DisplayClass266_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass266_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass266_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v8; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v10; // x20
  UnityEngine_Component_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  int32_t shadowEffectId; // w22
  UnityEngine_GameObject_o *v14; // x21
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x23
  int32_t ActorSvtId; // w0
  int32_t v18; // w24
  int32_t LimitCount; // w25
  System_Int32_array **EffectToNode_23043844; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct BattleActorControl_o *v27; // x8
  UnityEngine_Object_o *v28; // x20
  struct BattleActorControl_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *transform; // x20
  int v32; // s0
  struct BattleActorControl_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  struct BattleActorControl_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Transform_o *v44; // x20
  int v45; // s0
  struct BattleActorControl_o *v48; // x8
  UnityEngine_GameObject_o *v49; // x0

  if ( (byte_40F918E & 1) == 0 )
  {
    sub_B16FFC(&BattleEffectUtility_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v3);
    byte_40F918E = 1;
  }
  _4__this = this->fields.__4__this;
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
    v6 = (UnityEngine_Component_o *)this->fields.__4__this;
    if ( !v6 )
      goto LABEL_45;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL) )
    {
      v8 = this->fields.__4__this;
      if ( !v8 )
        goto LABEL_45;
      if ( v8->fields.currentSpShadowEffectId == this->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v8->fields.specialShadowObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
        {
          v10 = this->fields.__4__this;
          if ( !v10 )
            goto LABEL_45;
          v11 = (UnityEngine_Component_o *)v10->fields.shadowObj;
          if ( !v11 )
            goto LABEL_45;
          v12 = UnityEngine_Component__get_gameObject(v11, 0LL);
          if ( !this->fields.__4__this )
            goto LABEL_45;
          shadowEffectId = this->fields.shadowEffectId;
          v14 = v12;
          v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.__4__this, 0LL);
          if ( !this->fields.__4__this )
            goto LABEL_45;
          v16 = v15;
          ActorSvtId = BattleActorControl__getActorSvtId(this->fields.__4__this, 0LL);
          if ( !this->fields.__4__this )
            goto LABEL_45;
          v18 = ActorSvtId;
          LimitCount = BattleActorControl__getLimitCount(this->fields.__4__this, 0LL);
          if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          }
          EffectToNode_23043844 = (System_Int32_array **)BattleEffectUtility__loadEffectToNode_23043844(
                                                           v14,
                                                           shadowEffectId,
                                                           v16,
                                                           v18,
                                                           LimitCount,
                                                           0LL);
          v10->fields.specialShadowObj = (struct UnityEngine_GameObject_o *)EffectToNode_23043844;
          sub_B16F98(
            (BattleServantConfConponent_o *)&v10->fields.specialShadowObj,
            EffectToNode_23043844,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26);
          v27 = this->fields.__4__this;
          if ( !v27 )
            goto LABEL_45;
          v28 = (UnityEngine_Object_o *)v27->fields.specialShadowObj;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
          {
            v29 = this->fields.__4__this;
            if ( v29 )
            {
              v30 = v29->fields.specialShadowObj;
              if ( v30 )
              {
                transform = UnityEngine_GameObject__get_transform(v30, 0LL);
                *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
                if ( transform )
                {
                  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
                  v35 = this->fields.__4__this;
                  if ( v35 )
                  {
                    v36 = v35->fields.specialShadowObj;
                    if ( v36 )
                    {
                      v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
                      *(UnityEngine_Quaternion_o *)&v38 = UnityEngine_Quaternion__get_identity(0LL);
                      if ( v37 )
                      {
                        UnityEngine_Transform__set_localRotation(v37, *(UnityEngine_Quaternion_o *)&v38, 0LL);
                        v42 = this->fields.__4__this;
                        if ( v42 )
                        {
                          v43 = v42->fields.specialShadowObj;
                          if ( v43 )
                          {
                            v44 = UnityEngine_GameObject__get_transform(v43, 0LL);
                            *(UnityEngine_Vector3_o *)&v45 = UnityEngine_Vector3__get_one(0LL);
                            if ( v44 )
                            {
                              UnityEngine_Transform__set_localScale(v44, *(UnityEngine_Vector3_o *)&v45, 0LL);
                              v48 = this->fields.__4__this;
                              if ( v48 )
                              {
                                v49 = v48->fields.specialShadowObj;
                                if ( v49 )
                                {
                                  UnityEngine_GameObject__SetActive(v49, 1, 0LL);
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
            sub_B170D4();
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass278_0___ctor(
        BattleActorControl___c__DisplayClass278_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass278_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass278_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  if ( (byte_40F918F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16081/*"_fade"*/, material);
    byte_40F918F = 1;
  }
  if ( !material )
    sub_B170D4();
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16081/*"_fade"*/, this->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass316_0___ctor(
        BattleActorControl___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass316_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl__coAddAura_d__316___ctor(
        BattleActorControl__coAddAura_d__316_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__316__MoveNext(
        BattleActorControl__coAddAura_d__316_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *auraList; // x0
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v30; // x0
  UnityEngine_Object_o *Item; // x21
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct EffectEntity_o *Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x22
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  Il2CppObject *v46; // x23
  struct BattleActorControl___c__DisplayClass316_0_o **p__8__1; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  int32_t id; // w22
  Il2CppObject *v59; // x24
  System_Action_o *v60; // x23
  BattlePerformance_o *v61; // x24
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_String_o **p_effectPath_5__3; // x21
  ServantAssetLoadManager_o *v65; // x0
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  Il2CppObject **v72; // x19
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v73; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  BattleServantData_o *battleSvtData; // x0
  int32_t EffectFolder; // w0
  int32_t v88; // w22
  int32_t WeaponGroup; // w0
  __int64 v90; // x0
  Il2CppObject *v91; // x22
  Il2CppObject *v92; // x0
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  BattleEffectUtility_BuffEffectLoadArgument_o *v100; // x21
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  struct BattlePerformance_o *performance; // x8
  System_Int32_array **actorcamera; // x1
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v126; // x0
  Il2CppObject *v127; // x0
  int32_t v128; // [xsp+Ch] [xbp-64h] BYREF
  int32_t v129; // [xsp+18h] [xbp-58h] BYREF
  int32_t v130; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9193 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&BattleEffectUtility_TypeInfo, v9);
    sub_B16FFC(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_EffectMaster___, v11);
    sub_B16FFC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_BillBoard___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v17);
    sub_B16FFC(&int_TypeInfo, v18);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v20);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v21);
    sub_B16FFC(&string_TypeInfo, v22);
    sub_B16FFC(&Method_BattleActorControl___c__DisplayClass316_0__coAddAura_b__0__, v23);
    sub_B16FFC(&BattleActorControl___c__DisplayClass316_0_TypeInfo, v24);
    sub_B16FFC(&StringLiteral_5846/*"Effect/weapon/{0}"*/, v25);
    sub_B16FFC(&StringLiteral_5847/*"Effect/weapon/{0}/{1}"*/, v26);
    byte_40F9193 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 2 )
  {
    p_effectPath_5__3 = &this->fields._effectPath_5__3;
    this->fields.__1__state = -1;
    goto LABEL_28;
  }
  if ( _1__state == 1 )
  {
    p__8__1 = &this->fields.__8__1;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_68;
    auraList = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.auraList;
    if ( !auraList )
      goto LABEL_68;
    if ( System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
           auraList,
           this->fields.auraEffectId,
           (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      v30 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)_4__this->fields.auraList;
      if ( !v30 )
        goto LABEL_68;
      Item = (UnityEngine_Object_o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                                       v30,
                                       this->fields.auraEffectId,
                                       (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(Item, 0LL, 0LL) )
        return 0;
    }
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_68;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                          (DataManager_o *)Instance,
                                                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_68;
    Entity = (struct EffectEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                        MasterData_WarQuestSelectionMaster,
                                        this->fields.auraEffectId,
                                        (const MethodInfo_266F388 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    p_effectEntity_5__2 = &this->fields._effectEntity_5__2;
    this->fields._effectEntity_5__2 = Entity;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._effectEntity_5__2,
      (System_Int32_array **)Entity,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    if ( !this->fields._effectEntity_5__2 )
    {
LABEL_43:
      v100 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_B170CC(
                                                               BattleEffectUtility_BuffEffectLoadArgument_TypeInfo,
                                                               v42,
                                                               v43,
                                                               v44,
                                                               v45);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v100, _4__this, 0LL);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = this->fields.auraEffectId;
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
        v132.fields.x = x;
        v132.fields.y = y;
        v132.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v132,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v100,
                                                 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL) )
          goto LABEL_64;
        if ( this->fields.priority > _4__this->fields._currentPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0LL);
          _4__this->fields._currentPriority_k__BackingField = this->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)EffectToNode,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(Component_srcLineSprite, 0LL, 0LL) )
          {
            v117 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                     (UnityEngine_GameObject_o *)EffectToNode,
                     (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_68;
            Component_srcLineSprite = (UnityEngine_Object_o *)v117;
            if ( !v117 )
              goto LABEL_68;
            actorcamera = (System_Int32_array **)performance->fields.actorcamera;
            v117->fields.callbackQueue = (struct System_Collections_Generic_Queue_Tuple_SendOrPostCallback__object___o *)actorcamera;
            sub_B16F98(
              (BattleServantConfConponent_o *)&v117->fields.callbackQueue,
              actorcamera,
              v118,
              v119,
              v120,
              v121,
              v122,
              v123);
          }
          else if ( !Component_srcLineSprite )
          {
            goto LABEL_68;
          }
          BillBoard__setFlip((BillBoard_o *)Component_srcLineSprite, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          v126 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.auraList;
          if ( v126 )
          {
            System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___set_Item(
              v126,
              this->fields.auraEffectId,
              (WarBoardAIRoute_RouteData_o *)EffectToNode,
              (const MethodInfo_2DE9394 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_64:
            this->fields._effectEntity_5__2 = 0LL;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._effectEntity_5__2,
              0LL,
              v110,
              v111,
              v112,
              v113,
              v114,
              v115);
            return 0;
          }
        }
      }
LABEL_68:
      sub_B170D4();
    }
    v46 = (Il2CppObject *)sub_B170CC(BattleActorControl___c__DisplayClass316_0_TypeInfo, v42, v43, v44, v45);
    System_Object___ctor(v46, 0LL);
    this->fields.__8__1 = (struct BattleActorControl___c__DisplayClass316_0_o *)v46;
    p__8__1 = &this->fields.__8__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__8__1,
      (System_Int32_array **)v46,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    if ( !this->fields.__8__1 )
      goto LABEL_68;
    this->fields.__8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_68;
    id = (*p_effectEntity_5__2)->fields.id;
    v59 = (Il2CppObject *)*p__8__1;
    v60 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v54, v55, v56, v57);
    System_Action___ctor(v60, v59, Method_BattleActorControl___c__DisplayClass316_0__coAddAura_b__0__, 0LL);
    v61 = _4__this->fields.performance;
    if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    }
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v60, v61, 0LL);
  }
  if ( !*p__8__1 )
    goto LABEL_68;
  if ( (*p__8__1)->fields.isLoading )
  {
    this->fields.__2__current = 0LL;
    p__2__current = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
    return result;
  }
  this->fields.__8__1 = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)p__8__1, 0LL, v2, v3, v4, v5, v6, v7);
  effectEntity_5__2 = this->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_43;
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields._effectPath_5__3 = static_fields->Empty;
  p_effectPath_5__3 = &this->fields._effectPath_5__3;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._effectPath_5__3,
    (System_Int32_array **)Empty,
    v43,
    v44,
    v45,
    v80,
    v81,
    v82);
  if ( !_4__this )
    goto LABEL_68;
  battleSvtData = _4__this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_68;
  EffectFolder = BattleServantData__getEffectFolder(battleSvtData, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_68;
  v88 = EffectFolder;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v88 )
  {
    v130 = WeaponGroup;
    v90 = j_il2cpp_value_box_0(int_TypeInfo, &v130);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_68;
    v91 = (Il2CppObject *)v90;
    v129 = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129);
    v93 = (System_Int32_array **)System_String__Format_43739268((System_String_o *)StringLiteral_5847/*"Effect/weapon/{0}/{1}"*/, v91, v92, 0LL);
  }
  else
  {
    v128 = WeaponGroup;
    v127 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
    v93 = (System_Int32_array **)System_String__Format((System_String_o *)StringLiteral_5846/*"Effect/weapon/{0}"*/, v127, 0LL);
  }
  *p_effectPath_5__3 = (System_String_o *)v93;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._effectPath_5__3, v93, v94, v95, v96, v97, v98, v99);
LABEL_28:
  v65 = (ServantAssetLoadManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !v65 )
    goto LABEL_68;
  if ( ServantAssetLoadManager__CheckLoadList(v65, *p_effectPath_5__3, 0LL) )
  {
    this->fields.__2__current = 0LL;
    v72 = &this->fields.__2__current;
    sub_B16F98((BattleServantConfConponent_o *)v72, 0LL, v66, v67, v68, v69, v70, v71);
    *((_DWORD *)v72 - 2) = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_68;
  v73 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)_4__this->fields.auraList;
  if ( !v73 )
    goto LABEL_68;
  if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
          v73,
          this->fields.auraEffectId,
          (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    *p_effectPath_5__3 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)p_effectPath_5__3, 0LL, v74, v75, v76, v77, v78, v79);
    goto LABEL_43;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__316__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__316_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__316__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__316_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__coAddAura_d__316_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__316__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__316_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__316__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__316_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__323___ctor(
        BattleActorControl__colShiftServantChange_d__323_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__colShiftServantChange_d__323__MoveNext(
        BattleActorControl__colShiftServantChange_d__323_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x0
  struct BattleActionData_ShiftServant_o *v10; // x8
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *fadeObject; // x0
  struct NGUIFader_o *Component_srcLineSprite; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  NGUIFader_o *fadeComp_5__2; // x20
  int v27; // s0
  DefCoroutine_c *v31; // x0
  Il2CppObject *milliSecTwo; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  struct BattleActionData_ShiftServant_o *v35; // x8
  BattlePerformance_o *v36; // x0
  Il2CppObject *v37; // x0
  Il2CppObject **v38; // x19
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int v45; // w8
  BattlePerformance_o *v46; // x0
  Il2CppObject *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Object_o *v56; // x21
  BattlePerformance_o *v57; // x0
  struct System_Collections_Generic_List_int__o *v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Component_o *v69; // x0
  UnityEngine_Object_o *gameObject; // x20
  Il2CppObject *v71; // x0
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  struct System_Collections_Generic_List_int__o **p_moveEffect_5__3; // x21
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  BattleFBXComponent_o *fbxcomponent; // x0
  BattleFBXComponent_o *v86; // x0
  Il2CppObject *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  Il2CppObject *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  NGUIFader_o *v101; // x21
  int v102; // s0
  BattleServantData_o *battleSvtData; // x0
  struct BattlePerformance_o *v107; // x9
  struct BattleServantData_o *v108; // x8
  BattleData_o *data; // x0
  struct BattlePerformance_o *v110; // x8
  struct BattleData_o *v111; // x8
  BattleLogic_o *logic; // x0
  Il2CppObject *v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  BattleServantConfConponent_o *p_fadeComp_5__2; // x19
  System_String_array **v121; // x2
  System_String_array **v122; // x3
  System_Boolean_array **v123; // x4
  System_Int32_array **v124; // x5
  System_Int32_array *v125; // x6
  System_Int32_array *v126; // x7
  int v127; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9195 & 1) == 0 )
  {
    sub_B16FFC(&DefCoroutine_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v3);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v7);
    byte_40F9195 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      shiftSvt = this->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_82;
      ((void (__fastcall *)(struct BattleActionData_ShiftServant_o *, struct BattleServantData_o *, void *))shiftSvt->klass->vtable._6_UpdateAfterShiftData.method)(
        shiftSvt,
        _4__this->fields.battleSvtData,
        shiftSvt->klass[1]._1.image);
      v10 = this->fields.shiftSvt;
      if ( !v10 )
        goto LABEL_82;
      if ( !v10->fields.isChange )
        return 0;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_82;
      fadeObject = performance->fields.fadeObject;
      if ( !fadeObject )
        goto LABEL_82;
      Component_srcLineSprite = (struct NGUIFader_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                        fadeObject,
                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      this->fields._fadeComp_5__2 = Component_srcLineSprite;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._fadeComp_5__2,
        (System_Int32_array **)Component_srcLineSprite,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      if ( !this->fields.isShift )
        goto LABEL_13;
      fadeComp_5__2 = this->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_white(0LL);
      if ( !fadeComp_5__2 )
        goto LABEL_82;
      NGUIFader__FadeStart(fadeComp_5__2, *(UnityEngine_Color_o *)&v27, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v31 = DefCoroutine_TypeInfo;
      if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v31 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (Il2CppObject *)v31->static_fields->milliSecTwo;
      this->fields.__2__current = milliSecTwo;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(
        (BattleServantConfConponent_o *)p__2__current,
        (System_Int32_array **)milliSecTwo,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      fbxcomponent = _4__this->fields.fbxcomponent;
      if ( !fbxcomponent )
        goto LABEL_82;
      BattleFBXComponent__stopAnimation(fbxcomponent, 0LL);
      v86 = _4__this->fields.fbxcomponent;
      if ( !v86 )
        goto LABEL_82;
      BattleFBXComponent__stopAnimationCheck(v86, 0LL);
      v127 = 0;
      v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
      this->fields.__2__current = v87;
      v38 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v38, (System_Int32_array **)v87, v88, v89, v90, v91, v92, v93);
      v45 = 2;
      goto LABEL_78;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      v35 = this->fields.shiftSvt;
      if ( !v35 )
        goto LABEL_82;
      v36 = _4__this->fields.performance;
      if ( !v36 )
        goto LABEL_82;
      BattlePerformance__unloadServantSet_18995928(v36, v35->fields.loadedAssetArgs, 0, 0LL);
      v127 = 0;
      v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
      this->fields.__2__current = v37;
      v38 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v38, (System_Int32_array **)v37, v39, v40, v41, v42, v43, v44);
      v45 = 3;
      goto LABEL_78;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      v46 = _4__this->fields.performance;
      if ( !v46 )
        goto LABEL_82;
      BattlePerformance__preLoadServantSet(v46, _4__this->fields.battleSvtData, 0LL);
LABEL_25:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      if ( ServantAssetLoadManager__checkLoad(0LL) )
      {
        v127 = 0;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
        this->fields.__2__current = v47;
        v38 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v38, (System_Int32_array **)v47, v48, v49, v50, v51, v52, v53);
        v45 = 4;
LABEL_78:
        *((_DWORD *)v38 - 2) = v45;
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
      v55 = _4__this->fields.actorObject;
      if ( !v55 )
        goto LABEL_82;
      v56 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      v55,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
        goto LABEL_42;
      v57 = _4__this->fields.performance;
      if ( v57 )
      {
        BattlePerformance__RemoveCollider(v57, (UnityEngine_MeshCollider_o *)v56, 0LL);
LABEL_42:
        v58 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        this->fields._moveEffect_5__3 = v58;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._moveEffect_5__3,
          (System_Int32_array **)v58,
          v59,
          v60,
          v61,
          v62,
          v63,
          v64);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
          {
            sub_B17100(v65, v66, v67);
            sub_B170A0();
          }
          v69 = (UnityEngine_Component_o *)motionFSM->m_Items[0];
          if ( v69 )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v69, 0LL);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            UnityEngine_Object__DestroyImmediate_34809676(gameObject, 0LL);
            v127 = 0;
            v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
            this->fields.__2__current = v71;
            v38 = &this->fields.__2__current;
            sub_B16F98((BattleServantConfConponent_o *)v38, (System_Int32_array **)v71, v72, v73, v74, v75, v76, v77);
            v45 = 5;
            goto LABEL_78;
          }
        }
      }
      goto LABEL_82;
    case 4:
      this->fields.__1__state = -1;
      goto LABEL_25;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_58:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      if ( ServantAssetLoadManager__checkLoad(0LL) )
      {
        v127 = 0;
        v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
        this->fields.__2__current = v94;
        v38 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v38, (System_Int32_array **)v94, v95, v96, v97, v98, v99, v100);
        v45 = 6;
        goto LABEL_78;
      }
      if ( !_4__this )
        goto LABEL_82;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !this->fields.isShift )
        goto LABEL_67;
      v101 = this->fields._fadeComp_5__2;
      *(UnityEngine_Color_o *)&v102 = UnityEngine_Color__get_white(0LL);
      if ( !v101 )
        goto LABEL_82;
      NGUIFader__FadeStart(v101, *(UnityEngine_Color_o *)&v102, 0.2, 1, 0LL, 0, 0LL);
LABEL_67:
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_82;
      if ( !BattleServantData__checkPlayer(battleSvtData, 0LL) )
        goto LABEL_76;
      v107 = _4__this->fields.performance;
      if ( !v107
        || (v108 = _4__this->fields.battleSvtData) == 0LL
        || (data = v107->fields.data) == 0LL
        || (BattleData__replaceCommandCard(data, v108->fields.uniqueId, v108->fields.uniqueId, 0LL),
            (v110 = _4__this->fields.performance) == 0LL)
        || (v111 = v110->fields.data) == 0LL
        || (logic = v111->fields.logic) == 0LL )
      {
LABEL_82:
        sub_B170D4();
      }
      BattleLogic__setDrawCard(logic, 0LL);
LABEL_76:
      p_moveEffect_5__3 = &this->fields._moveEffect_5__3;
      if ( this->fields._moveEffect_5__3 )
      {
        v127 = 0;
        v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
        this->fields.__2__current = v113;
        v38 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v38, (System_Int32_array **)v113, v114, v115, v116, v117, v118, v119);
        v45 = 7;
        goto LABEL_78;
      }
LABEL_79:
      this->fields._fadeComp_5__2 = 0LL;
      p_fadeComp_5__2 = (BattleServantConfConponent_o *)&this->fields._fadeComp_5__2;
      sub_B16F98(p_fadeComp_5__2, 0LL, v79, v80, v81, v82, v83, v84);
      p_fadeComp_5__2->monitor = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_moveEffect_5__3, 0LL, v121, v122, v123, v124, v125, v126);
      return 0;
    case 6:
      this->fields.__1__state = -1;
      goto LABEL_58;
    case 7:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_82;
      p_moveEffect_5__3 = &this->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, this->fields._moveEffect_5__3, 0LL);
      goto LABEL_79;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__323__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__323_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__323__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__323_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__colShiftServantChange_d__323_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__323__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__323_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__323__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__323_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__322___ctor(
        BattleActorControl__colShiftServant_d__322_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__322__MoveNext(
        BattleActorControl__colShiftServant_d__322_o *this,
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

  if ( (byte_40F9194 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, method);
    byte_40F9194 = 1;
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
        sub_B16F98(
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
      sub_B170D4();
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
  sub_B16F98(
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


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__322__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__322_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__322__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__322_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__colShiftServant_d__322_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__322__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__322_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__322__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__322_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__311___ctor(
        BattleActorControl__collChangeAppearance_d__311_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__311__MoveNext(
        BattleActorControl__collChangeAppearance_d__311_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleActorControl_o *_4__this; // x20
  BattleFBXComponent_o *fbxcomponent; // x0
  BattleFBXComponent_o *v8; // x0
  Il2CppObject *v9; // x0
  Il2CppObject **p__2__current; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  bool result; // w0
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  Il2CppObject *v20; // x0
  Il2CppObject **v21; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  int v28; // w8
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  BattlePerformance_o *performance; // x0
  struct System_Collections_Generic_List_int__o *v33; // x0
  struct System_Collections_Generic_List_int__o **p_moveEffect_5__2; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattleServantData_o *v48; // x0
  BattleServantData_o *v49; // x0
  ServantAssetArgs_o *updated; // x0
  struct BattleServantData_o *v51; // x8
  ServantAssetArgs_o *v52; // x21
  _BOOL4 isForceAppearance; // w22
  Il2CppObject *v54; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  Il2CppObject *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int v68; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F9196 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    byte_40F9196 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      fbxcomponent = _4__this->fields.fbxcomponent;
      if ( !fbxcomponent )
        goto LABEL_50;
      BattleFBXComponent__stopAnimation(fbxcomponent, 0LL);
      v8 = _4__this->fields.fbxcomponent;
      if ( !v8 )
        goto LABEL_50;
      BattleFBXComponent__stopAnimationCheck(v8, 0LL);
      v68 = 0;
      v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
      this->fields.__2__current = v9;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)p__2__current, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
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
      v30 = _4__this->fields.actorObject;
      if ( !v30 )
        goto LABEL_50;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v30,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_27;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_50;
      BattlePerformance__RemoveCollider(performance, (UnityEngine_MeshCollider_o *)Component_srcLineSprite, 0LL);
LABEL_27:
      v33 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      this->fields._moveEffect_5__2 = v33;
      p_moveEffect_5__2 = &this->fields._moveEffect_5__2;
      sub_B16F98(
        (BattleServantConfConponent_o *)p_moveEffect_5__2,
        (System_Int32_array **)v33,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v68 = 0;
      v41 = (System_Int32_array **)j_il2cpp_value_box_0(int_TypeInfo, &v68);
      *(p_moveEffect_5__2 - 2) = (struct System_Collections_Generic_List_int__o *)v41;
      sub_B16F98((BattleServantConfConponent_o *)(p_moveEffect_5__2 - 2), v41, v42, v43, v44, v45, v46, v47);
      *((_DWORD *)p_moveEffect_5__2 - 6) = 2;
      return 1;
    case 2:
      this->fields.__1__state = -1;
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
      v68 = 0;
      v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
      this->fields.__2__current = v20;
      v21 = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)v21, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
      v28 = 3;
      goto LABEL_46;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      v48 = _4__this->fields.battleSvtData;
      if ( !v48 )
        goto LABEL_50;
      BattleServantData__changeAppearanceId(v48, 0LL);
      v49 = _4__this->fields.battleSvtData;
      if ( !v49 )
        goto LABEL_50;
      updated = BattleServantData__UpdateLoadedAssetArgs(v49, 0LL);
      v51 = _4__this->fields.battleSvtData;
      if ( !v51 )
        goto LABEL_50;
      v52 = updated;
      isForceAppearance = v51->fields.isForceAppearance;
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadBattleActor(v52, isForceAppearance, 0LL);
LABEL_36:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      if ( ServantAssetLoadManager__checkLoad(0LL) )
      {
        v68 = 0;
        v54 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
        this->fields.__2__current = v54;
        v21 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v21, (System_Int32_array **)v54, v55, v56, v57, v58, v59, v60);
        v28 = 4;
      }
      else
      {
        if ( !_4__this )
LABEL_50:
          sub_B170D4();
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( !this->fields._moveEffect_5__2 )
          return 0;
        v68 = 0;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
        this->fields.__2__current = v61;
        v21 = &this->fields.__2__current;
        sub_B16F98((BattleServantConfConponent_o *)v21, (System_Int32_array **)v61, v62, v63, v64, v65, v66, v67);
        v28 = 5;
      }
LABEL_46:
      *((_DWORD *)v21 - 2) = v28;
      return 1;
    case 4:
      this->fields.__1__state = -1;
      goto LABEL_36;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_50;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, this->fields._moveEffect_5__2, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__311__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__311_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__311__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__311_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__collChangeAppearance_d__311_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__311__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__311_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__311__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__311_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__306___ctor(
        BattleActorControl__colloadDressServant_d__306_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__306__MoveNext(
        BattleActorControl__colloadDressServant_d__306_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleActorControl_o *_4__this; // x20
  BattleServantData_o *battleSvtData; // x0
  int DressId; // w0
  BattleFBXComponent_o *fbxcomponent; // x0
  BattleFBXComponent_o *v11; // x0
  Il2CppObject *v12; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  BattlePerformance_o *performance; // x0
  struct System_Collections_Generic_List_int__o *v19; // x0
  struct System_Collections_Generic_List_int__o **p_moveEffect_5__3; // x19
  __int64 v21; // x0
  struct BattleServantData_o *v22; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  Il2CppObject *v24; // x0
  Il2CppObject **v25; // x19
  int v26; // w8
  struct BattleServantData_o *v27; // x8
  BattleServantData_o *v28; // x0
  ServantAssetArgs_o *updated; // x21
  Il2CppObject *v30; // x0
  struct System_Collections_Generic_List_int__o **v31; // x21
  struct BattleServantData_o *v32; // x8
  BattleServantData_o *v33; // x0
  ServantAssetArgs_o *v34; // x21
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  int v39; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F84B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_B16FFC(&int_TypeInfo, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_5469/*"END_LOAD"*/, v6);
    byte_40F84B8 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_73;
      DressId = BattleServantData__getDressId(battleSvtData, 0LL);
      this->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_62;
      fbxcomponent = _4__this->fields.fbxcomponent;
      if ( !fbxcomponent )
        goto LABEL_73;
      BattleFBXComponent__stopAnimation(fbxcomponent, 0LL);
      v11 = _4__this->fields.fbxcomponent;
      if ( !v11 )
        goto LABEL_73;
      BattleFBXComponent__stopAnimationCheck(v11, 0LL);
      v39 = 0;
      v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      this->fields.__2__current = v12;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v12);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
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
      v16 = _4__this->fields.actorObject;
      if ( !v16 )
        goto LABEL_73;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v16,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_23;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_73;
      BattlePerformance__RemoveCollider(performance, (UnityEngine_MeshCollider_o *)Component_srcLineSprite, 0LL);
LABEL_23:
      v19 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      this->fields._moveEffect_5__3 = v19;
      p_moveEffect_5__3 = &this->fields._moveEffect_5__3;
      sub_B16F98(p_moveEffect_5__3, v19);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v39 = 0;
      v21 = j_il2cpp_value_box_0(int_TypeInfo, &v39);
      *(p_moveEffect_5__3 - 3) = (struct System_Collections_Generic_List_int__o *)v21;
      sub_B16F98(p_moveEffect_5__3 - 3, v21);
      *((_DWORD *)p_moveEffect_5__3 - 8) = 2;
      break;
    case 2:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v22 = _4__this->fields.battleSvtData;
      if ( !v22 )
        goto LABEL_73;
      LoadedAssetArgs_k__BackingField = v22->fields._LoadedAssetArgs_k__BackingField;
      if ( this->fields.flg )
      {
        if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
        v39 = 0;
        v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        this->fields.__2__current = v24;
        v25 = &this->fields.__2__current;
        sub_B16F98(v25, v24);
        v26 = 3;
      }
      else
      {
        if ( (WORD1(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        }
        ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
        v39 = 0;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        this->fields.__2__current = v38;
        v25 = &this->fields.__2__current;
        sub_B16F98(v25, v38);
        v26 = 5;
      }
      goto LABEL_63;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v27 = _4__this->fields.battleSvtData;
      if ( !v27 )
        goto LABEL_73;
      v27->fields.dressDispId = this->fields._dressId_5__2;
      v28 = _4__this->fields.battleSvtData;
      if ( !v28 )
        goto LABEL_73;
      updated = BattleServantData__UpdateLoadedAssetArgs(v28, 0LL);
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
      if ( !ServantAssetLoadManager__checkLoad(0LL) )
        goto LABEL_58;
      v39 = 0;
      v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
      this->fields.__2__current = v30;
      v25 = &this->fields.__2__current;
      sub_B16F98(v25, v30);
      v26 = 4;
      goto LABEL_63;
    case 4:
      this->fields.__1__state = -1;
      goto LABEL_38;
    case 5:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v32 = _4__this->fields.battleSvtData;
      if ( !v32 )
        goto LABEL_73;
      v32->fields.dressDispId = -1;
      v33 = _4__this->fields.battleSvtData;
      if ( !v33 )
        goto LABEL_73;
      v34 = BattleServantData__UpdateLoadedAssetArgs(v33, 0LL);
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      ServantAssetLoadManager__preloadServant(v34, 0, 0LL);
LABEL_53:
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      if ( ServantAssetLoadManager__checkLoad(0LL) )
      {
        v39 = 0;
        v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
        this->fields.__2__current = v35;
        v25 = &this->fields.__2__current;
        sub_B16F98(v25, v35);
        v26 = 6;
      }
      else
      {
LABEL_58:
        if ( !_4__this )
LABEL_73:
          sub_B170D4();
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        v31 = &this->fields._moveEffect_5__3;
        if ( this->fields._moveEffect_5__3 )
        {
          v39 = 0;
          v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
          this->fields.__2__current = v36;
          v25 = &this->fields.__2__current;
          sub_B16F98(v25, v36);
          v26 = 7;
        }
        else
        {
LABEL_61:
          *v31 = 0LL;
          sub_B16F98(v31, 0LL);
LABEL_62:
          v39 = 0;
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
          this->fields.__2__current = v37;
          v25 = &this->fields.__2__current;
          sub_B16F98(v25, v37);
          v26 = 8;
        }
      }
LABEL_63:
      *((_DWORD *)v25 - 2) = v26;
      break;
    case 6:
      this->fields.__1__state = -1;
      goto LABEL_53;
    case 7:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      v31 = &this->fields._moveEffect_5__3;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, this->fields._moveEffect_5__3, 0LL);
      goto LABEL_61;
    case 8:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_73;
      BattleActorControl__sendEventFSM_32017324(_4__this, (System_String_o *)StringLiteral_5469/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__306__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__306_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__306__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__306_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__colloadDressServant_d__306_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__306__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__306_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__306__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__306_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__304___ctor(
        BattleActorControl__colloadTransformServant_d__304_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__304__MoveNext(
        BattleActorControl__colloadTransformServant_d__304_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  struct BattleActorControl_o *_4__this; // x20
  BattleFBXComponent_o *fbxcomponent; // x0
  BattleFBXComponent_o *v20; // x0
  UnityEngine_Object_o *actorObject; // x21
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Object_o *Component_srcLineSprite; // x21
  BattlePerformance_o *performance; // x0
  struct System_Collections_Generic_List_int__o *v25; // x0
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v30; // x20
  Il2CppObject *v31; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v35; // x21
  const MethodInfo *v36; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *extraLoadedVoiceArgsList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v45; // x23
  BattlePerformance_o *v46; // x0
  BattleActionData_o *actiondata; // x0
  System_Collections_Generic_List_BattleActionData_TransformServant__o *TransformServantList; // x0
  Il2CppObject *current; // x8
  struct BattleServantData_o *v50; // x9
  struct BattleServantData_o *v51; // x9
  struct BattlePerformance_o *v52; // x9
  BattleServantData_o *v53; // x0
  BattleServantData_o *v54; // x0
  BattlePerformance_o *v55; // x0
  Il2CppObject *v56; // x0
  Il2CppObject **v57; // x19
  int v58; // w8
  BattleServantData_o *v59; // x0
  struct BattlePerformance_o *v60; // x8
  BattleData_o *data; // x0
  struct BattlePerformance_o *v62; // x8
  BattlePerformanceCommandCard_o *commandPerf; // x0
  struct BattlePerformance_o *v64; // x8
  BattlePerformanceCommandCard_o *v65; // x0
  Il2CppObject *v66; // x0
  Il2CppObject *v67; // x0
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F84B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__MoveNext__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__get_Current__, v7);
    sub_B16FFC(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo, v8);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v9);
    sub_B16FFC(&int_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActionData_TransformServant__GetEnumerator__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v14);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v15);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v16);
    sub_B16FFC(&StringLiteral_5469/*"END_LOAD"*/, v17);
    byte_40F84B9 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      fbxcomponent = _4__this->fields.fbxcomponent;
      if ( !fbxcomponent )
        goto LABEL_70;
      BattleFBXComponent__stopAnimation(fbxcomponent, 0LL);
      v20 = _4__this->fields.fbxcomponent;
      if ( !v20 )
        goto LABEL_70;
      BattleFBXComponent__stopAnimationCheck(v20, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_18;
      v22 = _4__this->fields.actorObject;
      if ( !v22 )
        goto LABEL_70;
      Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                          v22,
                                                          (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Inequality(Component_srcLineSprite, 0LL, 0LL) )
        goto LABEL_18;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_70;
      BattlePerformance__RemoveCollider(performance, (UnityEngine_MeshCollider_o *)Component_srcLineSprite, 0LL);
LABEL_18:
      v25 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      this->fields._moveEffect_5__2 = v25;
      sub_B16F98(&this->fields._moveEffect_5__2, v25);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_70;
      if ( !motionFSM->max_length )
      {
        sub_B17100(v26, v27, v28);
        sub_B170A0();
      }
      v30 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v30, 0LL);
      LODWORD(v68.fields.list) = 0;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
      this->fields.__2__current = v31;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, v31);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      battleSvtData = _4__this->fields.battleSvtData;
      v35 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_B170CC(
                                                           BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo,
                                                           method,
                                                           v2,
                                                           v3,
                                                           v4);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v35, battleSvtData, v36);
      if ( !v35 )
        goto LABEL_70;
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
      extraLoadedVoiceArgsList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !extraLoadedVoiceArgsList )
      {
        v45 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v40, v41, v42, v43);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
          v45,
          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v45;
        sub_B16F98(&_4__this->fields.extraLoadedVoiceArgsList, v45);
        extraLoadedVoiceArgsList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !extraLoadedVoiceArgsList )
          goto LABEL_70;
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        extraLoadedVoiceArgsList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v35,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
      v46 = _4__this->fields.performance;
      if ( !v46 )
        goto LABEL_70;
      BattlePerformance__unloadServantSet_18995764(v46, _4__this->fields.battleSvtData, 0, 0LL);
      actiondata = _4__this->fields.actiondata;
      if ( !actiondata )
        goto LABEL_70;
      TransformServantList = BattleActionData__GetTransformServantList(actiondata, 0LL);
      if ( !TransformServantList )
        goto LABEL_70;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v68,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)TransformServantList,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_BattleActionData_TransformServant__GetEnumerator__);
      v69 = v68;
      break;
    case 2:
      this->fields.__1__state = -1;
      goto LABEL_52;
    case 3:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, this->fields._moveEffect_5__2, 0LL);
      goto LABEL_67;
    case 4:
      this->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_70;
      BattleActorControl__sendEventFSM_32017324(_4__this, (System_String_o *)StringLiteral_5469/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v69,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__MoveNext__) )
  {
    current = v69.fields.current;
    if ( !v69.fields.current )
      sub_B170D4();
    v50 = _4__this->fields.battleSvtData;
    if ( !v50 )
      sub_B170D4();
    if ( LODWORD(v69.fields.current[2].klass) == v50->fields.uniqueId )
    {
      v50->fields.shiftNpcId = -1;
      v51 = _4__this->fields.battleSvtData;
      if ( !v51 )
        sub_B170D4();
      v51->fields.beforeUserSvtId = -1LL;
      v52 = _4__this->fields.performance;
      if ( !v52 )
        sub_B170D4();
      v53 = _4__this->fields.battleSvtData;
      if ( !v53 )
        sub_B170D4();
      BattleServantData__setTransformServant(
        v53,
        v52->fields.data,
        HIDWORD(current[1].monitor),
        HIDWORD(current[2].klass),
        0,
        0LL);
      break;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_BattleActionData_TransformServant__Dispose__);
  v54 = _4__this->fields.battleSvtData;
  if ( !v54 )
    goto LABEL_70;
  BattleServantData__changeTransformServant(v54, 0LL);
  v55 = _4__this->fields.performance;
  if ( !v55 )
    goto LABEL_70;
  BattlePerformance__preLoadServantSet(v55, _4__this->fields.battleSvtData, 0LL);
LABEL_52:
  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  }
  if ( !ServantAssetLoadManager__checkLoad(0LL) )
  {
    if ( _4__this )
    {
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      v59 = _4__this->fields.battleSvtData;
      if ( v59 )
      {
        BattleServantData__UpdateStatusUIByTransform(v59, 0LL);
        v60 = _4__this->fields.performance;
        if ( v60 )
        {
          data = v60->fields.data;
          if ( data )
          {
            BattleData__transformSvtCommand(data, _4__this->fields.battleSvtData, 0LL);
            v62 = _4__this->fields.performance;
            if ( v62 )
            {
              commandPerf = v62->fields.commandPerf;
              if ( commandPerf )
              {
                BattlePerformanceCommandCard__UpdateSelectedCommandCardServantFace(
                  commandPerf,
                  _4__this->fields.battleSvtData,
                  0LL);
                v64 = _4__this->fields.performance;
                if ( v64 )
                {
                  v65 = v64->fields.commandPerf;
                  if ( v65 )
                  {
                    BattlePerformanceCommandCard__UpdateDrawnCommandCardServantFace(
                      v65,
                      _4__this->fields.battleSvtData,
                      0LL);
                    if ( this->fields._moveEffect_5__2 )
                    {
                      LODWORD(v68.fields.list) = 0;
                      v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
                      this->fields.__2__current = v66;
                      v57 = &this->fields.__2__current;
                      sub_B16F98(v57, v66);
                      v58 = 3;
                    }
                    else
                    {
LABEL_67:
                      LODWORD(v68.fields.list) = 0;
                      v67 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
                      this->fields.__2__current = v67;
                      v57 = &this->fields.__2__current;
                      sub_B16F98(v57, v67);
                      v58 = 4;
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
    sub_B170D4();
  }
  LODWORD(v68.fields.list) = 0;
  v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68);
  this->fields.__2__current = v56;
  v57 = &this->fields.__2__current;
  sub_B16F98(v57, v56);
  v58 = 2;
LABEL_68:
  *((_DWORD *)v57 - 2) = v58;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__304__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__304_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__304__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__304_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__colloadTransformServant_d__304_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__304__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__304_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__304__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__304_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__198___ctor(
        BattleActorControl__coroutinePostCallBack_d__198_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__198__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__198_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v10; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v12; // x1
  Il2CppObject **v13; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **p__2__current; // x19

  if ( (byte_40F84BA & 1) == 0 )
  {
    sub_B16FFC(&DefCoroutine_TypeInfo, method);
    sub_B16FFC(&UnityEngine_WaitForSeconds_TypeInfo, v6);
    byte_40F84BA = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_B170D4();
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
    v15 = (UnityEngine_WaitForSeconds_o *)sub_B170CC(UnityEngine_WaitForSeconds_TypeInfo, method, v2, v3, v4);
    UnityEngine_WaitForSeconds___ctor(v15, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v15;
    p__2__current = &this->fields.__2__current;
    sub_B16F98(p__2__current, v15);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v10 = DefCoroutine_TypeInfo;
    if ( (BYTE3(DefCoroutine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v10 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v10->static_fields;
    v12 = *static_fields;
    this->fields.__2__current = *static_fields;
    v13 = &this->fields.__2__current;
    sub_B16F98(v13, v12);
    *((_DWORD *)v13 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__198__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__198_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__198__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__198_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__coroutinePostCallBack_d__198_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__198__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__198_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__198__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__198_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__309___ctor(
        BattleActorControl__waitChangeApp_d__309_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__309__MoveNext(
        BattleActorControl__waitChangeApp_d__309_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x0
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  System_Action_o *callback; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_8;
    System_Action__Invoke(callback, 0LL);
  }
  else if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = BattleActorControl__collChangeAppearance(_4__this, 0LL);
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_34804316(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0LL);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_B16F98(p__2__current, started);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_B170D4();
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__309__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__309_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__309__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__309_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_BattleActorControl__waitChangeApp_d__309_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__309__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__309_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__309__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__309_o *this,
        const MethodInfo *method)
{
  ;
}