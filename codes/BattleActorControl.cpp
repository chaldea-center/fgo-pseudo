void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B1F6D3 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_TypeInfo, v1);
    byte_4B1F6D3 = 1;
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  System_Collections_Generic_Dictionary_int__object__o *v22; // x20
  System_Action_object__o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_Dictionary_int__object__o *v28; // x20
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BattleLogData_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_Dictionary_int__object__o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_int__o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  TranslucentActorVisualInfo_o *v40; // x20
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Collections_Generic_List_T__o *v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v52; // x20
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  System_Collections_Hashtable_o *v55; // x20
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  System_Collections_Hashtable_o *v58; // x20
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_Dictionary_object__object__o *v66; // x20
  int32_t v67; // w2
  const MethodInfo *v68; // x3

  if ( (byte_4B1F6D2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattleActorControl__TypeInfo, method);
    sub_1BCAFF8(&Method_BattleActorControl_NotDisplayFuncMotionAction__, v3);
    sub_1BCAFF8(&BattleLogData_TypeInfo, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int___ctor__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl____ctor__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TypeInfo, v13);
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl____ctor__,
      v16);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___TypeInfo, v18);
    sub_1BCAFF8(&TranslucentActorVisualInfo_TypeInfo, v19);
    sub_1BCAFF8(&StringLiteral_16514/*"act"*/, v20);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v21);
    byte_4B1F6D2 = 1;
  }
  v22 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v22,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl____ctor__);
  v23 = (System_Action_object__o *)sub_1BCB244(System_Action_BattleActorControl__TypeInfo);
  System_Action_object____ctor(v23, 0LL, Method_BattleActorControl_NotDisplayFuncMotionAction__, 0LL);
  if ( !v22 )
    sub_1BCB254(v24, v25);
  System_Collections_Generic_Dictionary_int__object___Add(
    v22,
    1202,
    (Il2CppObject *)v23,
    (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___Add__);
  this->fields.noPlaymakerMotionActionDict = (struct System_Collections_Generic_Dictionary_int__Action_BattleActorControl___o *)v22;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.noPlaymakerMotionActionDict, (int32_t)v22, v26, v27);
  this->fields.currentSpShadowEffectId = -1;
  v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v28,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.auraList, (int32_t)v28, v29, v30);
  this->fields.actorScale = 1.0;
  v31 = (BattleLogData_o *)sub_1BCB244(BattleLogData_TypeInfo);
  BattleLogData___ctor_45177164(v31, (System_String_o *)StringLiteral_16514/*"act"*/, 90, 0LL);
  this->fields.battleLog = v31;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleLog, (int32_t)v31, v32, v33);
  v34 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v34,
    (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.buffLoopEffectDict, (int32_t)v34, v35, v36);
  v37 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v37;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.reservedEffectBuffEffectIdList, (int32_t)v37, v38, v39);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v40 = (TranslucentActorVisualInfo_o *)sub_1BCB244(TranslucentActorVisualInfo_TypeInfo);
  TranslucentActorVisualInfo___ctor(v40, 0LL);
  this->fields.translucentActorVisualInfo = v40;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.translucentActorVisualInfo, (int32_t)v40, v41, v42);
  v43 = (int)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.prevAnimEffectTriggerKey, v43, v44, v45);
  v46 = (int)StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.partAnimationSaveKey, v46, v47, v48);
  v49 = (System_Collections_Generic_List_T__o *)sub_1BCB244(System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v49,
    (const MethodInfo_366B440 *)Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl____ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *)v49;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.noblePhantasmObjectVisibleCtrList, (int32_t)v49, v50, v51);
  v52 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCB244(System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v52,
    (const MethodInfo_334C5C4 *)Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int___ctor__);
  this->fields._MotionProcessDict_k__BackingField = (struct System_Collections_Generic_Dictionary_BattleMotionProcessType__int__o *)v52;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._MotionProcessDict_k__BackingField, (int32_t)v52, v53, v54);
  v55 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v55, 0LL);
  this->fields.EventList = v55;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.EventList, (int32_t)v55, v56, v57);
  v58 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v58, 0LL);
  this->fields.CompleteList = v58;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.CompleteList, (int32_t)v58, v59, v60);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v66 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v66,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v66;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.eventClassAddedEventDict, (int32_t)v66, v67, v68);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v7; // x20
  System_Action_int__o *v8; // x21

  if ( (byte_4B1F6BD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_int___, v3);
    sub_1BCAFF8(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__405_0__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    byte_4B1F6BD = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_1BCB254(0LL, method);
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
  v8 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__405_0__,
    0LL);
  BasicHelper__ForEach_int_(v7, (System_Action_T__o *)v8, (const MethodInfo_3005F0C *)Method_BasicHelper_ForEach_int___);
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
  __int64 v10; // x2
  int v11; // w8
  void *v12; // x21
  unsigned int v13; // w22

  if ( (byte_4B1F6BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Remove__, v8);
    byte_4B1F6BC = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 1, 0LL);
    if ( this->fields.isPlayingNoblePhantasm )
    {
      buffLoopEffectDict = this->fields.buffLoopEffectDict;
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                             (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                             effectId,
                             (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      v11 = *((_DWORD *)buffLoopEffectDict + 6);
      v12 = buffLoopEffectDict;
      if ( v11 >= 1 )
      {
        v13 = 0;
        while ( 1 )
        {
          if ( v13 >= v11 )
            sub_1BCB25C(buffLoopEffectDict, *(_QWORD *)&effectId, v10);
          buffLoopEffectDict = (void *)*((_QWORD *)v12 + (int)v13 + 4);
          if ( !buffLoopEffectDict )
            break;
          buffLoopEffectDict = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffLoopEffectDict, 0LL);
          if ( !buffLoopEffectDict )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 0, 0LL);
          v11 = *((_DWORD *)v12 + 6);
          if ( (int)++v13 >= v11 )
            goto LABEL_17;
        }
LABEL_22:
        sub_1BCB254(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_369E0A8 *)Method_System_Collections_Generic_List_int__Remove__);
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
  __int64 v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v9; // x20
  unsigned __int64 v10; // x22
  struct System_Collections_Generic_Dictionary_int__Action_BattleActorControl___o **p_noPlaymakerMotionActionDict; // x25
  Il2CppObject *v12; // x21
  const MethodInfo *v13; // x3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v17; // x8

  v4 = this;
  if ( (byte_4B1F68B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v5);
    this = (BattleActorControl_o *)sub_1BCAFF8(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__,
                                     v6);
    byte_4B1F68B = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                   obj,
                                   (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_17;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0LL;
    p_noPlaymakerMotionActionDict = &this->fields.noPlaymakerMotionActionDict;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, obj, v7);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v12 = (Il2CppObject *)p_noPlaymakerMotionActionDict[v10];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v12,
                                       (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        v14 = *(_QWORD *)&this->fields.m_CachedPtr;
        v15 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v14 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v14 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v12,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = v14 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v17 + 32) = v12;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v12, v7, v13);
        }
      }
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_17:
    sub_1BCB254(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddNoblePhantasmChangedVisibleActor(
        BattleActorControl_o *this,
        int32_t timing,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  VisibleControlInfo_o *v9; // x21
  BattleActionData_o *actiondata; // x0
  const MethodInfo *v11; // x3
  const MethodInfo_3A0B304 *v12; // x4
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x20
  const MethodInfo *v14; // x3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v18; // x0
  System_ValueTuple_object__object__o v19; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_object__object__o v20; // 0:x0.16
  System_ValueTuple_object__object__o v21; // 0:x1.16

  if ( (byte_4B1F675 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Add__,
      *(_QWORD *)&timing);
    sub_1BCAFF8(&Method_System_ValueTuple_VisibleControlInfo__BattleActorControl___ctor__, v7);
    sub_1BCAFF8(&VisibleControlInfo_TypeInfo, v8);
    byte_4B1F675 = 1;
  }
  v9 = (VisibleControlInfo_o *)sub_1BCB244(VisibleControlInfo_TypeInfo);
  VisibleControlInfo___ctor(v9, 0LL);
  if ( !v9 )
    goto LABEL_14;
  v9->fields._Timing_k__BackingField = timing;
  if ( !targetActor )
    goto LABEL_14;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_14;
  v9->fields._TreasureDeviceRange_k__BackingField = BattleActionData__GetTargetSideFunctionRange(
                                                      actiondata,
                                                      targetActor->fields.isEnemy,
                                                      0LL);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_14;
  v9->fields._FunctionActorType_k__BackingField = BattleActionData__GetTargetOfTreasureDevice(
                                                    actiondata,
                                                    targetActor,
                                                    this,
                                                    0LL);
  if ( !BattleActorControl__ProcServantObjectVisibleCtr(targetActor, 0, v9, v11) )
    return;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  v20.fields.Item1 = (Il2CppObject *)&v19;
  v20.fields.Item2 = (Il2CppObject *)v9;
  v19.fields.Item1 = 0LL;
  v19.fields.Item2 = 0LL;
  System_ValueTuple_object__object____ctor(
    v20,
    (Il2CppObject *)targetActor,
    (Il2CppObject *)Method_System_ValueTuple_VisibleControlInfo__BattleActorControl___ctor__,
    v12);
  if ( !noblePhantasmObjectVisibleCtrList
    || (v21 = v19,
        items = noblePhantasmObjectVisibleCtrList->fields._items,
        v16 = Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Add__,
        ++noblePhantasmObjectVisibleCtrList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1BCB254(actiondata, v21.fields.Item1);
  }
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      noblePhantasmObjectVisibleCtrList,
      v21,
      *(const MethodInfo_366BCC0 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = (CGThumbnailListItem_o *)(&items->obj + size);
    noblePhantasmObjectVisibleCtrList->fields._size = size + 1;
    v18->fields.sortValue0 = (int64_t)v21.fields.Item1;
    v18 = (CGThumbnailListItem_o *)((char *)v18 + 32);
    v18->monitor = v21.fields.Item2;
    sub_1BCAF9C(v18, 0, (int32_t)v21.fields.Item2, v14);
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B1F6B7 & 1) == 0 )
  {
    sub_1BCAFF8(&ChangeBattlePhaseOverwriteAnimation_TypeInfo, *(_QWORD *)&svtId);
    byte_4B1F6B7 = 1;
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
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1BCB244(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, 0LL);
    this->fields.overwriteAnim = v13;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.overwriteAnim, (int32_t)v13, v14, v15);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, 0LL);
      return;
    }
LABEL_9:
    sub_1BCB254(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10

  if ( (byte_4B1F6BB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&effectId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_4B1F6BB = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList
    || (items = reservedEffectBuffEffectIdList->fields._items,
        v8 = Method_System_Collections_Generic_List_int__Add__,
        ++reservedEffectBuffEffectIdList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1BCB254(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  }
  size = reservedEffectBuffEffectIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      reservedEffectBuffEffectIdList,
      effectId,
      *(const MethodInfo_369CBAC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    reservedEffectBuffEffectIdList->fields._size = size + 1;
    items->m_Items[size + 1] = effectId;
  }
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
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  System_Action_object__o *v10; // x21

  v4 = this;
  if ( (byte_4B1F653 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_string__TypeInfo, playedSoundArray);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_string___, v5);
    sub_1BCAFF8(&Method_BattleActorControl__AddServantVoicePlayed_b__253_0__, v6);
    this = (BattleActorControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1F653 = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1BCB254(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v10 = (System_Action_object__o *)sub_1BCB244(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v10,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__253_0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v10,
          (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void __fastcall BattleActorControl__AfterProcLoadedChangeModel(
        BattleActorControl_o *this,
        bool isReloadWeapon,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  BattleActorControl__setServantData(this, this->fields.battleSvtData, method);
  BattleActorControl__setDir(this, v5);
  BattleActorControl__resetAura(this, v6);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v7);
  BattleActorControl__setReloadWeaponMotion(this, isReloadWeapon, v8);
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
  __int64 v10; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v12; // x20
  unsigned __int64 v13; // x25
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  int v19; // [xsp+Ch] [xbp-44h] BYREF

  v2 = (BattleActorControl_o **)this;
  if ( (byte_4B1F6BA & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_13246/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v3);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v4);
    byte_4B1F6BA = 1;
  }
  v5 = v2[65];
  if ( !v5 )
    goto LABEL_26;
  LOBYTE(v5[1].fields.endmotionCallObject) = BYTE1(v5[1].fields.endmotionCallObject);
  v19 = 1;
  v6 = System_Int32__ToString((int32_t)&v19, 0LL);
  v7 = System_String__Concat_62450424((System_String_o *)StringLiteral_13246/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v6, 0LL);
  Value = ConstantMaster__getValue(v7, 0LL);
  if ( Value != -1 )
  {
    v9 = Value;
    while ( 1 )
    {
      this = v2[65];
      if ( !this )
        goto LABEL_26;
      if ( v9 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v2[61];
        if ( !this )
          goto LABEL_26;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, 0LL);
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v12 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_24:
      ++v19;
      v17 = System_Int32__ToString((int32_t)&v19, 0LL);
      v18 = System_String__Concat_62450424((System_String_o *)StringLiteral_13246/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v17, 0LL);
      v9 = ConstantMaster__getValue(v18, 0LL);
      if ( v9 == -1 )
        return;
    }
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, method, v10);
      this = v2[21];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v12->fields.noPlaymakerMotionActionDict + v13),
                       0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ServantActor )
          break;
        this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
        if ( !this )
          break;
        if ( BYTE1(this[1].fields.endmotionCallObject) )
        {
          LOBYTE(this[1].fields.endmotionCallObject) = BYTE1(this[1].fields.endmotionCallObject);
          BattleActorControl__playAnimation_46091064(ServantActor, (System_String_o *)StringLiteral_24501/*"wait"*/, 0, v15);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_46091064(ServantActor, (System_String_o *)StringLiteral_24501/*"wait"*/, 1, v16);
      }
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
        goto LABEL_24;
    }
LABEL_26:
    sub_1BCB254(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_MaterialPropertyBlock_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B1F618 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_MaterialPropertyBlock_TypeInfo, method);
    byte_4B1F618 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_1BCB244(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0LL);
  this->fields.mpb = v3;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.mpb, (int32_t)v3, v4, v5);
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
  __int64 v8; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x25
  UnityEngine_Object_o *v12; // x20
  struct BattlePerformance_o *v13; // x8
  struct UnityEngine_GameObject_array *v14; // x8
  Il2CppObject *ComponentInChildren_object; // x20

  v4 = this;
  if ( (byte_4B1F67B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___, enable);
    this = (BattleActorControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1F67B = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_21:
    sub_1BCB254(this, enable);
  v7 = enable;
  v8 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_21;
    max_length = e_actorlist->max_length;
    v11 = v8 - 4;
    if ( v8 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_23;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v8);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v13 = v4->fields.performance;
      if ( !v13 )
        goto LABEL_21;
      v14 = v13->fields.e_actorlist;
      if ( !v14 )
        goto LABEL_21;
      if ( v11 >= v14->max_length )
LABEL_23:
        sub_1BCB25C(this, enable, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v14->obj.klass + v8);
      if ( !this )
        goto LABEL_21;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_21;
        LOBYTE(ComponentInChildren_object[2].klass) = v7;
      }
    }
    performance = v4->fields.performance;
    ++v8;
    if ( !performance )
      goto LABEL_21;
  }
}


void __fastcall BattleActorControl__ChangeBattleModel(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1F6A3 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5398/*"END_LOAD"*/, method);
    byte_4B1F6A3 = 1;
  }
  BattleActorControl__ChangeBattleModel_46120568(this, (System_String_o *)StringLiteral_5398/*"END_LOAD"*/, v2);
}


void __fastcall BattleActorControl__ChangeBattleModelArray(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4B1F6A1 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5398/*"END_LOAD"*/, method);
    byte_4B1F6A1 = 1;
  }
  BattleActorControl__ChangeBattleModelArray_46120272(this, (System_String_o *)StringLiteral_5398/*"END_LOAD"*/, v2);
}


void __fastcall BattleActorControl__ChangeBattleModelArray_46120272(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  BattlePerformance_o *performance; // x19
  System_Action_o *v15; // x20

  if ( (byte_4B1F6A2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, eventName);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass368_0__ChangeBattleModelArray_b__0__, v5);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass368_0_TypeInfo, v6);
    byte_4B1F6A2 = 1;
  }
  v7 = sub_1BCB244(BattleActorControl___c__DisplayClass368_0_TypeInfo);
  BattleActorControl___c__DisplayClass368_0___ctor((BattleActorControl___c__DisplayClass368_0_o *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = this,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11),
        *(_QWORD *)(v7 + 24) = eventName,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)eventName, v12, v13),
        performance = this->fields.performance,
        v15 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo),
        System_Action___ctor(
          v15,
          (Il2CppObject *)v7,
          Method_BattleActorControl___c__DisplayClass368_0__ChangeBattleModelArray_b__0__,
          0LL),
        !performance) )
  {
    sub_1BCB254(v8, v9);
  }
  BattlePerformance__ChangeBattleModelArray_44307656(performance, v15, 0LL);
}


void __fastcall BattleActorControl__ChangeBattleModel_46120568(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  BattlePerformance_o *performance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x3
  System_Collections_IEnumerator_o *v16; // x0
  BattleActionData_ChangeModelActionData_o *changeModelActData; // [xsp+0h] [xbp-40h] BYREF
  BattleActionData_o *actData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1F6A4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, eventName);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass370_0__ChangeBattleModel_b__0__, v5);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass370_0_TypeInfo, v6);
    byte_4B1F6A4 = 1;
  }
  changeModelActData = 0LL;
  actData = 0LL;
  v7 = sub_1BCB244(BattleActorControl___c__DisplayClass370_0_TypeInfo);
  BattleActorControl___c__DisplayClass370_0___ctor((BattleActorControl___c__DisplayClass370_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = eventName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 24), (int32_t)eventName, v12, v13);
  v14 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_BattleActorControl___c__DisplayClass370_0__ChangeBattleModel_b__0__,
    0LL);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_11;
  if ( !BattlePerformance__TryGetActionData(performance, &actData, 0LL) )
    goto LABEL_9;
  performance = (BattlePerformance_o *)actData;
  if ( !actData )
LABEL_11:
    sub_1BCB254(performance, v9);
  if ( BattleActionData__TryGetChangeModelData(actData, &changeModelActData, this->fields.uniqueID, 0LL) )
  {
    v16 = BattleActorControl__CoroutineChangeBattleModel(this, changeModelActData, v14, v15);
    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
    return;
  }
LABEL_9:
  ActionExtensions__Call(v14, 0LL);
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
  __int64 v7; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x21
  struct BattlePerformance_o *v12; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  Il2CppObject *ComponentInChildren_object; // x21

  v4 = this;
  if ( (byte_4B1F67A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___, enable);
    this = (BattleActorControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1F67A = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_1BCB254(this, enable);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_25:
        sub_1BCB25C(this, enable, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0LL,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_23;
        if ( enable )
          BattleActorRotationComponent__RotationReStart(
            (BattleActorRotationComponent_o *)ComponentInChildren_object,
            0LL);
        else
          BattleActorRotationComponent__RotationStop((BattleActorRotationComponent_o *)ComponentInChildren_object, 0LL);
      }
    }
    performance = v4->fields.performance;
    ++v7;
    if ( !performance )
      goto LABEL_23;
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
  BattleData_o *IsHideShadow; // x0
  __int64 v15; // x1
  struct BattlePerformance_o *performance; // x8
  float v17; // s9
  float v18; // s10
  float v19; // s11
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  __int64 v22; // x2
  unsigned __int64 m_CancellationTokenSource; // x8
  BattleData_o *v24; // x19
  unsigned __int64 v25; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  Il2CppObject *Component_object; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B1F67E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Renderer___, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76985264, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v12);
    sub_1BCAFF8(&StringLiteral_16128/*"_MainTex"*/, v13);
    byte_4B1F67E = 1;
  }
  IsHideShadow = (BattleData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
    return;
  if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
  {
    v17 = 1.0;
    v18 = 1.0;
    v19 = 1.0;
  }
  else
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_44;
    IsHideShadow = performance->fields.data;
    if ( !IsHideShadow )
      goto LABEL_44;
    GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0LL);
    v17 = GroundShadowColor.fields.r;
    v18 = GroundShadowColor.fields.g;
    v19 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__Clear_69993200((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    v29.fields.r = v17;
    v29.fields.g = v18;
    v29.fields.b = v19;
    v29.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16037/*"_Color"*/,
      v29,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16128/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v17;
    this->fields.currentShadowColor.fields.g = v18;
    this->fields.currentShadowColor.fields.b = v19;
    this->fields.currentShadowColor.fields.a = a;
    if ( !IsHideShadow )
      goto LABEL_44;
    IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)IsHideShadow,
                                     (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)IsHideShadow, this->fields.mpb, 0LL);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    return;
  IsHideShadow = (BattleData_o *)this->fields.specialShadowObj;
  if ( !IsHideShadow
    || (IsHideShadow = (BattleData_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                         (UnityEngine_GameObject_o *)IsHideShadow,
                                         1,
                                         (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76985264)) == 0LL )
  {
LABEL_44:
    sub_1BCB254(IsHideShadow, v15);
  }
  m_CancellationTokenSource = (unsigned __int64)IsHideShadow->fields.m_CancellationTokenSource;
  v24 = IsHideShadow;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v25 = 0LL;
    p_rootfsm = &IsHideShadow->fields.rootfsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_35;
      if ( v25 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_45;
      IsHideShadow = (BattleData_o *)p_rootfsm[v25];
      if ( !IsHideShadow )
        goto LABEL_44;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)IsHideShadow,
                           (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (BattleData_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
      m_CancellationTokenSource = LODWORD(v24->fields.m_CancellationTokenSource);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        if ( v25 >= m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v25];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsHideShadow,
                                         0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
      }
      else
      {
LABEL_35:
        if ( v25 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v25];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsHideShadow,
                                         0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
        if ( v25 >= LODWORD(v24->fields.m_CancellationTokenSource) )
LABEL_45:
          sub_1BCB25C(IsHideShadow, v15, v22);
        IsHideShadow = (BattleData_o *)p_rootfsm[v25];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)IsHideShadow, 0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        v30.fields.r = v17;
        v30.fields.g = v18;
        v30.fields.b = v19;
        v30.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)IsHideShadow, v30, 0LL);
      }
      LODWORD(m_CancellationTokenSource) = v24->fields.m_CancellationTokenSource;
      ++v25;
    }
    while ( (__int64)v25 < (int)m_CancellationTokenSource );
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

  if ( (byte_4B1F624 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&loadActorLimitCount);
    sub_1BCAFF8(&StringLiteral_11324/*"RootShadow"*/, v5);
    byte_4B1F624 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11324/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v9;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v9,
                         (System_String_o *)StringLiteral_11324/*"RootShadow"*/,
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = shadowId;
  if ( (byte_4B1F67D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Renderer___, *(_QWORD *)&shadowId);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Texture2D_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v7);
    sub_1BCAFF8(&StringLiteral_16128/*"_MainTex"*/, v8);
    sub_1BCAFF8(&StringLiteral_3079/*"Battle/Textures/shadow_"*/, v9);
    sub_1BCAFF8(&StringLiteral_3080/*"Battle/Textures/shadow_1"*/, v10);
    byte_4B1F67D = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgPerf = (BattlePerformanceBg_o *)UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL);
  if ( ((unsigned __int8)bgPerf & 1) == 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_34;
    bgPerf = performance->fields.bgPerf;
    if ( !bgPerf )
      goto LABEL_34;
    ShadowTexture = (UnityEngine_Object_o *)BattlePerformanceBg__GetShadowTexture(bgPerf, shadowId, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v16 = System_Int32__ToString((int32_t)&v22, 0LL);
      v17 = System_String__Concat_62450424((System_String_o *)StringLiteral_3079/*"Battle/Textures/shadow_"*/, v16, 0LL);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v19 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_3080/*"Battle/Textures/shadow_1"*/, 0LL);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(ShadowTexture, 0LL, 0LL) )
    {
      bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
      if ( bgPerf )
      {
        UnityEngine_MaterialPropertyBlock__Clear_69993200((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16037/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16128/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.currentShadowTexure, (int32_t)ShadowTexture, v20, v21);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( bgPerf )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)bgPerf, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_34:
      sub_1BCB254(bgPerf, v13);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *v14; // x20
  System_Enum_o v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+18h] [xbp-38h]

  v5 = animname;
  if ( (byte_4B1F6B5 & 1) == 0 )
  {
    sub_1BCAFF8(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v8);
    byte_4B1F6B5 = 1;
  }
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( BYTE6(Instance->fields.userSvtId.fields.fakeValue) )
    return v5;
  if ( isSaveAnim && this->fields.isFirstSaveBeforePlayAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField, (int32_t)v5, v11, v12);
  }
  if ( !v5 )
    goto LABEL_15;
  if ( !System_String__StartsWith(v5, (System_String_o *)StringLiteral_24501/*"wait"*/, 0LL) )
    return v5;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_15;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return v5;
  v17 = 49;
  v16.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v16.monitor = (void *)-1LL;
  Instance = (BattleServantData_o *)System_Enum__ToString(&v16, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_15:
    sub_1BCB254(Instance, v10);
  v14 = (System_String_o *)Instance;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)Instance, 0LL) )
    return v14;
  return v5;
}


System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  BattleActorControl_o *v6; // x20
  __int64 v7; // x1
  struct BattleServantData_o *battleSvtData; // x8
  BattleFBXComponent_o *fbxcomponent; // x8
  BattleActorControl_o *v10; // x20
  System_Enum_o v12; // [xsp+8h] [xbp-48h] BYREF
  int v13; // [xsp+18h] [xbp-38h]

  v5 = animname;
  v6 = this;
  if ( (byte_4B1F6B4 & 1) == 0 )
  {
    sub_1BCAFF8(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v7);
    byte_4B1F6B4 = 1;
  }
  if ( isSaveAnim && v6->fields.isFirstSaveBeforePlayAnim )
  {
    v6->fields.isFirstSaveBeforePlayAnim = 0;
    v6->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&v6->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)v5,
      isSaveAnim,
      method);
  }
  if ( !v5 )
    goto LABEL_13;
  this = (BattleActorControl_o *)System_String__StartsWith(v5, (System_String_o *)StringLiteral_24501/*"wait"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v5;
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return v5;
  v13 = 46;
  v12.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v12.monitor = (void *)-1LL;
  this = (BattleActorControl_o *)System_Enum__ToString(&v12, 0LL);
  fbxcomponent = v6->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_13:
    sub_1BCB254(this, animname);
  v10 = this;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)this, 0LL) )
    return (System_String_o *)v10;
  return v5;
}


bool __fastcall BattleActorControl__CheckAuraPriority(
        BattleActorControl_o *this,
        int32_t priority,
        const MethodInfo *method)
{
  return this->fields._currentPriority_k__BackingField <= priority;
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__ColShiftServantPartChangeOnly(
        BattleActorControl_o *this,
        BattleActionData_ShiftServant_o *shiftSvt,
        bool isShift,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1F6B0 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__ColShiftServantPartChangeOnly_d__387_TypeInfo, shiftSvt);
    byte_4B1F6B0 = 1;
  }
  v9 = sub_1BCB244(BattleActorControl__ColShiftServantPartChangeOnly_d__387_TypeInfo);
  BattleActorControl__ColShiftServantPartChangeOnly_d__387___ctor(
    (BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *)v9,
    0,
    0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)shiftSvt, v14, v15);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 56), (int32_t)finishCallback, v16, v17);
  return (System_Collections_IEnumerator_o *)v9;
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
  __int64 methodPtr_low; // x9
  BattleActorControl_o *v12; // x0
  System_String_o *v13; // x1
  BattleActorControl_EventClass_o *v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_4B1F65A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, name);
    sub_1BCAFF8(&StringLiteral_1762/*"@OnComplete Fired!\n => <{0}>:"*/, v5);
    byte_4B1F65A = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1762/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._26_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._27_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_46076216(this, name, 0, v8);
    return;
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList
    || (CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._28_get_Item.method)(
                                                                  CompleteList,
                                                                  name,
                                                                  CompleteList->klass->vtable._29_set_Item.methodPtr),
        (v9 = this->fields.CompleteList) == 0LL)
    || (v10 = (BattleActorControl_EventClass_o *)CompleteList,
        CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))v9->klass->vtable._37_Remove.method)(
                                                                  this->fields.CompleteList,
                                                                  name,
                                                                  v9->klass->vtable._38_get_SyncRoot.methodPtr),
        !v10) )
  {
LABEL_12:
    sub_1BCB254(CompleteList, v6);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v10, 0LL);
    goto LABEL_11;
  }
  sub_1BCB514(v10);
  BattleActorControl__setAnimationEvent(v12, v13, v14, v15);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__CoroutineChangeBattleModel(
        BattleActorControl_o *this,
        BattleActionData_ChangeModelActionData_o *changeModelActData,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B1F6A5 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__CoroutineChangeBattleModel_d__371_TypeInfo, changeModelActData);
    byte_4B1F6A5 = 1;
  }
  v7 = sub_1BCB244(BattleActorControl__CoroutineChangeBattleModel_d__371_TypeInfo);
  BattleActorControl__CoroutineChangeBattleModel_d__371___ctor(
    (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = changeModelActData;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)changeModelActData, v12, v13);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4B1F665 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, eventName);
    byte_4B1F665 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1BCB254(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (Il2CppObject *)motionName,
    (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4B1F666 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__Remove__, eventName);
    byte_4B1F666 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1BCB254(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___Remove(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (const MethodInfo_3387274 *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4B1F625 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F625 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_int__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1F6C3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v3);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    byte_4B1F6C3 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToList_int_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                 (const MethodInfo_305B8EC *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v12;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields._current, v11) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_1BCB254(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    buffLoopEffectDict,
    (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1F6AD & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__DestroyAuraEffect_d__381_TypeInfo, effectObject);
    byte_4B1F6AD = 1;
  }
  v4 = sub_1BCB244(BattleActorControl__DestroyAuraEffect_d__381_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__381___ctor((BattleActorControl__DestroyAuraEffect_d__381_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1BCB254(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v4 + 32), (int32_t)effectObject, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall BattleActorControl__DestroyBeforeModelChangeActorObject(
        BattleActorControl_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  if ( (byte_4B1F6A7 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, args);
    byte_4B1F6A7 = 1;
  }
  BattleActorControl__DestroyImmediateActorObject(this, (const MethodInfo *)args);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadBattleActor(args, 0LL);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1F6C1 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__DestroyEffectOnParticleStop_d__409_TypeInfo, *(_QWORD *)&key);
    byte_4B1F6C1 = 1;
  }
  v5 = sub_1BCB244(BattleActorControl__DestroyEffectOnParticleStop_d__409_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__409___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4B1F626 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F626 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70136264(actorObject, 0LL);
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
  Il2CppObject *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v11; // x8
  UnityEngine_GameObject_o *v12; // x19
  __int64 v13; // x2
  int v14; // w8
  void *v15; // x20
  unsigned int v16; // w24
  __int64 v17; // x8
  _QWORD *v18; // x21
  unsigned __int64 v19; // x25
  UnityEngine_Object_o *v20; // x22

  if ( (byte_4B1F6C2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76985264, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1F6C2 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
           effectId,
           (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                               (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v11 = this->fields.buffLoopEffectDict) == 0LL)
    || (v12 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__object___Remove(
                                       (System_Collections_Generic_Dictionary_int__object__o *)v11,
                                       effectId,
                                       (const MethodInfo_332276C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v12)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                               v12,
                               1,
                               (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76985264)) == 0LL )
  {
LABEL_30:
    sub_1BCB254(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v14 = *((_DWORD *)buffLoopEffectDict + 6);
  v15 = buffLoopEffectDict;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= v14 )
        goto LABEL_29;
      buffLoopEffectDict = (void *)*((_QWORD *)v15 + (int)v16 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      v17 = *((_QWORD *)buffLoopEffectDict + 3);
      v18 = buffLoopEffectDict;
      if ( (int)v17 >= 1 )
        break;
LABEL_25:
      v14 = *((_DWORD *)v15 + 6);
      if ( (int)++v16 >= v14 )
        goto LABEL_26;
    }
    v19 = 0LL;
    while ( v19 < (unsigned int)v17 )
    {
      v20 = (UnityEngine_Object_o *)v18[v19 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v20, 0LL);
      LODWORD(v17) = *((_DWORD *)v18 + 6);
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_25;
    }
LABEL_29:
    sub_1BCB25C(buffLoopEffectDict, *(_QWORD *)&effectId, v13);
  }
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)v12, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleActorControl_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4B1F629 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F629 = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.specialShadowObj, 0, v5, v6);
    BattleActorControl__EnableRenderer(v7, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v8);
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
  Il2CppObject *TriggerKey; // x20
  Il2CppObject *Value_object__object; // x21
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_String_o *prevAnimEffectTriggerKey; // x0
  System_Action_object__o *v16; // x22

  if ( (byte_4B1F623 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattleActorAnimationEffect__TypeInfo, animName);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___, v7);
    sub_1BCAFF8(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____, v8);
    sub_1BCAFF8(&Method_BattleActorControl__DisplayAnimationEffect_b__163_0__, v9);
    byte_4B1F623 = 1;
  }
  TriggerKey = (Il2CppObject *)BattleActorAnimationEffect__MakeTriggerKey(animName, eventTag, 0LL);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                           TriggerKey,
                           0LL,
                           (const MethodInfo_3008C9C *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0LL) )
  {
    prevAnimEffectTriggerKey = this->fields.prevAnimEffectTriggerKey;
    if ( !prevAnimEffectTriggerKey )
      sub_1BCB254(0LL, v12);
    if ( !System_String__Equals_62485728(prevAnimEffectTriggerKey, (System_String_o *)TriggerKey, 0LL) )
    {
      v16 = (System_Action_object__o *)sub_1BCB244(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_object____ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__163_0__,
        0LL);
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)Value_object__object,
        (System_Action_T__o *)v16,
        (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)TriggerKey;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.prevAnimEffectTriggerKey, (int32_t)TriggerKey, v13, v14);
}


void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1F628 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_TryGetComponent_Renderer___, target);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B1F628 = 1;
  }
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)v7 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_11;
    if ( !UnityEngine_Component__TryGetComponent_object_(
            target,
            &component,
            (const MethodInfo_3012370 *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v7 = component;
    if ( !component )
LABEL_11:
      sub_1BCB254(v7, v8);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)component, isEnable, 0LL);
  }
}


bool __fastcall BattleActorControl__EndServantObjectVisibleCtr(
        BattleActorControl_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, 1, visibleControlInfo, v3);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleActorControl__EnumerateMaterials(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  BattleActorControl___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__object__o *_9__333_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( (byte_4B1F68D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_Material___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___, v4);
    sub_1BCAFF8(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo, v5);
    sub_1BCAFF8(&Method_BattleActorControl___c__EnumerateMaterials_b__333_0__, v6);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v7);
    byte_4B1F68D = 1;
  }
  RendererArray = BattleActorControl__GetRendererArray(this, 0, v2);
  v9 = BattleActorControl___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)RendererArray;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v9 = BattleActorControl___c_TypeInfo;
  }
  _9__333_0 = (System_Func_object__object__o *)v9->static_fields->__9__333_0;
  if ( !_9__333_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleActorControl___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__333_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    System_Func_object__object____ctor(
      _9__333_0,
      v12,
      Method_BattleActorControl___c__EnumerateMaterials_b__333_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__333_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__333_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__333_0, (int32_t)_9__333_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         v10,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)_9__333_0,
                                                         (const MethodInfo_30514E0 *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
  return (System_Collections_Generic_IEnumerable_Material__o *)BasicHelper__ExcludeNull_object_(
                                                                 v16,
                                                                 (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_Material___);
}


bool __fastcall BattleActorControl__ExecuteServantObjectVisibleCtr(
        BattleActorControl_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, 0, visibleControlInfo, v3);
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
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4B1F63C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___, eventName);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___, v5);
    sub_1BCAFF8(&System_Func_PlayMakerFSM__bool__TypeInfo, v6);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass200_0__ExistMotionEvent_b__0__, v7);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass200_0_TypeInfo, v8);
    byte_4B1F63C = 1;
  }
  v9 = sub_1BCB244(BattleActorControl___c__DisplayClass200_0_TypeInfo);
  BattleActorControl___c__DisplayClass200_0___ctor((BattleActorControl___c__DisplayClass200_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 16) = eventName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)eventName, v12, v13);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v15 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass200_0__ExistMotionEvent_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          motionFSM,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_object_(
           v16,
           (const MethodInfo_3036E54 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4B1F696 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, method);
    byte_4B1F696 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__StopVoice(uniqueID, fadeoutTime, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__GenerateDropObjects(
        BattleActorControl_o *this,
        int32_t overwriteStartIndex,
        System_Action_GameObject__o *dropObjectGeneratedCallback,
        System_Action_DropInfo__o *dropInfoSelectedCallback,
        DropInfo_array *dropList,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v14; // x1
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Transform_o *v17; // x23
  __int64 v18; // x2
  __int64 v19; // x29
  UnityEngine_Object_c **v20; // x27
  int32_t v21; // w24
  unsigned __int64 v22; // x28
  il2cpp_array_size_t max_length; // w3
  DropInfo_o **m_Items; // x21
  UnityEngine_Object_o *Item_44242592; // x26
  DropInfo_o **v26; // x25
  __int64 v27; // x21
  int32_t v28; // w29
  DropInfo_array *v29; // x24
  System_Action_DropInfo__o *v30; // x19
  UnityEngine_Object_c **v31; // x20
  BattlePerformance_o *v32; // x27
  int v33; // s0
  Il2CppObject *arg; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1F660 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_DropInfo___, *(_QWORD *)&overwriteStartIndex);
    sub_1BCAFF8(&Method_ActionExtensions_Call_GameObject___, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    byte_4B1F660 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropList, 0LL) )
  {
    DropTransform = BattleActorControl__getDropTransform(this, v12);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_20;
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_20;
    v17 = DropTransform;
    DropTransform = (UnityEngine_Transform_o *)performance->fields.data;
    if ( !DropTransform )
      goto LABEL_20;
    DropTransform = (UnityEngine_Transform_o *)BattleData__getServantIndex(
                                                 (BattleData_o *)DropTransform,
                                                 battleSvtData->fields.isEnemy,
                                                 battleSvtData->fields.uniqueId,
                                                 0LL);
    if ( !dropList )
      goto LABEL_20;
    if ( (int)*(_QWORD *)&dropList->max_length >= 1 )
    {
      v19 = (unsigned int)overwriteStartIndex;
      v20 = &UnityEngine_Object_TypeInfo;
      v21 = (int)DropTransform;
      v22 = 0LL;
      max_length = *(_QWORD *)&dropList->max_length;
      m_Items = dropList->m_Items;
      while ( 1 )
      {
        if ( v22 >= max_length )
          sub_1BCB25C(DropTransform, v14, v18);
        DropTransform = (UnityEngine_Transform_o *)this->fields.performance;
        if ( !DropTransform )
          break;
        arg = (Il2CppObject *)m_Items[v22];
        Item_44242592 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_44242592(
                                                  (BattlePerformance_o *)DropTransform,
                                                  v17,
                                                  (DropInfo_o *)arg,
                                                  max_length,
                                                  (int)v19 + (int)v22,
                                                  v21,
                                                  this->fields.headupVec,
                                                  (System_Collections_Generic_IDictionary_DropInfo_DropEffectType__ScriptableObject__o *)this->fields.dropEffectOverwriteSettingDictionary,
                                                  0LL);
        if ( !(*v20)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v20);
        DropTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Item_44242592, 0LL, 0LL);
        if ( ((unsigned __int8)DropTransform & 1) != 0 )
        {
          if ( !v17 )
            break;
          v26 = m_Items;
          v27 = v19;
          v28 = v21;
          v29 = dropList;
          v30 = dropInfoSelectedCallback;
          v31 = v20;
          v32 = this->fields.performance;
          *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_position(v17, 0LL);
          if ( !v32 )
            break;
          BattlePerformance__saveOriginalPos(
            v32,
            (UnityEngine_GameObject_o *)Item_44242592,
            *(UnityEngine_Vector3_o *)&v33,
            this->fields.criteriaPos,
            0LL);
          ActionExtensions__Call_object_(
            (System_Action_T__o *)dropObjectGeneratedCallback,
            (Il2CppObject *)Item_44242592,
            (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_GameObject___);
          v20 = v31;
          dropInfoSelectedCallback = v30;
          dropList = v29;
          v21 = v28;
          v19 = v27;
          m_Items = v26;
        }
        ActionExtensions__Call_object_(
          (System_Action_T__o *)dropInfoSelectedCallback,
          arg,
          (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_DropInfo___);
        max_length = dropList->max_length;
        if ( (__int64)++v22 >= (int)max_length )
          return;
      }
LABEL_20:
      sub_1BCB254(DropTransform, v14);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__GetAddColor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v7; // x1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F686 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_1BCAFF8(&StringLiteral_15985/*"_AddColor"*/, v4);
    byte_4B1F686 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1BCB254(Item, v7);
  if ( !UnityEngine_Material__HasProperty_70002212(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_15985/*"_AddColor"*/,
          0LL) )
  {
LABEL_12:
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0.0;
    goto LABEL_14;
  }
  Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Item,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_15985/*"_AddColor"*/,
                                  0LL);
LABEL_14:
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v8;
  return result;
}


bool __fastcall BattleActorControl__GetBattleModelObjectVisibleControlComponentsEnable(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x8

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    sub_1BCB254(this, method);
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

  if ( (byte_4B1F6B6 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F6B6 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  result = 0LL;
  if ( v5 )
  {
    v7 = this->fields.performance;
    if ( !v7 )
      goto LABEL_14;
    data = (UnityEngine_Object_o *)v7->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_14:
      sub_1BCB254(0LL, v4);
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
  System_Collections_Generic_List_int__o *v6; // x19
  PlayMakerFSM_o *Fsm; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v13; // x20
  unsigned __int64 v14; // x21
  System_String_o *v15; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1F6CA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_5181/*"DelayEnd"*/, v5);
    byte_4B1F6CA = 1;
  }
  result = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_23;
  if ( !motionFSM->max_length )
    goto LABEL_24;
  Fsm = motionFSM->m_Items[0];
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0LL);
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                            (System_String_o *)StringLiteral_5181/*"DelayEnd"*/,
                            0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  Fsm = (PlayMakerFSM_o *)System_String__IsNullOrEmpty(Value, 0LL);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return v6;
  if ( !Value || (Fsm = (PlayMakerFSM_o *)System_String__Split(Value, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_23:
    sub_1BCB254(Fsm, v8);
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v13 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v14 = 0LL;
    while ( v14 < (unsigned int)m_CancellationTokenSource )
    {
      v15 = (System_String_o *)*((_QWORD *)&v13->fields.fsm + v14);
      result = 0;
      Fsm = (PlayMakerFSM_o *)System_Int32__TryParse(v15, &result, 0LL);
      if ( ((unsigned __int8)Fsm & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_23;
        v8 = (unsigned int)result;
        items = v6->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v8;
        }
      }
      LODWORD(m_CancellationTokenSource) = v13->fields.m_CancellationTokenSource;
      if ( (__int64)++v14 >= (int)m_CancellationTokenSource )
        return v6;
    }
LABEL_24:
    sub_1BCB25C(Fsm, v8, v9);
  }
  return v6;
}


System_String_o *__fastcall BattleActorControl__GetFixedMotionName(
        BattleActorControl_o *this,
        System_String_o *motionName,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  _BOOL8 IsPig; // x0
  const MethodInfo *v6; // x2

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData && (IsPig = BattleServantData__IsPig(battleSvtData, 0LL)) )
    return BattleActorControl__GetPigMotionName((BattleActorControl_o *)IsPig, motionName, v6);
  else
    return motionName;
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
  if ( (byte_4B1F662 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleActorControl_TypeInfo, method);
    byte_4B1F662 = 1;
  }
  height = 0.0;
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_14;
  this = (BattleActorControl_o *)battleSvtData->fields.svtdata;
  if ( !this )
    goto LABEL_14;
  if ( ServantEntity__getBattleHeight((ServantEntity_o *)this, &height, 0LL) )
  {
    actorScale = v2->fields.actorScale;
    p_height = &height;
    return *p_height * actorScale;
  }
  this = (BattleActorControl_o *)v2->fields.battleSvtData;
  if ( !this )
LABEL_14:
    sub_1BCB254(this, method);
  if ( BattleServantData__get_BattleSize((BattleServantData_o *)this, 0LL) == 6 )
  {
    p_height = &v2->fields.actorScale;
    actorScale = 15.0;
  }
  else
  {
    v6 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v7; // x1
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F685 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v4);
    byte_4B1F685 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1BCB254(Item, v7);
  if ( !UnityEngine_Material__HasProperty_70002212(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16037/*"_Color"*/,
          0LL) )
  {
LABEL_12:
    v8 = 1.0;
    v9 = 1.0;
    v10 = 1.0;
    v11 = 1.0;
    goto LABEL_14;
  }
  Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Item,
                                     0,
                                     (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16037/*"_Color"*/,
                                  0LL);
LABEL_14:
  result.fields.a = v11;
  result.fields.b = v10;
  result.fields.g = v9;
  result.fields.r = v8;
  return result;
}


BattleAdjustPopupPosInScreenComponent_o *__fastcall BattleActorControl__GetMatchAdjustPosInScreenComponent(
        BattleActorControl_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_TSource__o *AdjustPopupComponents_k__BackingField; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4B1F613 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_BattleAdjustPopupPosInScreenComponent___, data);
    sub_1BCAFF8(&System_Func_BattleAdjustPopupPosInScreenComponent__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass32_0__GetMatchAdjustPosInScreenComponent_b__0__, v6);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass32_0_TypeInfo, v7);
    byte_4B1F613 = 1;
  }
  v8 = sub_1BCB244(BattleActorControl___c__DisplayClass32_0_TypeInfo);
  BattleActorControl___c__DisplayClass32_0___ctor((BattleActorControl___c__DisplayClass32_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  *(_QWORD *)(v8 + 16) = data;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)data, v11, v12);
  AdjustPopupComponents_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._AdjustPopupComponents_k__BackingField;
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleAdjustPopupPosInScreenComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_BattleActorControl___c__DisplayClass32_0__GetMatchAdjustPosInScreenComponent_b__0__,
    0LL);
  return (BattleAdjustPopupPosInScreenComponent_o *)System_Linq_Enumerable__FirstOrDefault_object__50595188(
                                                      AdjustPopupComponents_k__BackingField,
                                                      (System_Func_TSource__bool__o *)v14,
                                                      (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleAdjustPopupPosInScreenComponent___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__string__o __fastcall BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  System_String_o *FixedMotionName; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  const MethodInfo_3A05F14 *v8; // x4
  Il2CppObject *v9; // x3
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  bool HasGlobalTransitionInFsm_46078152; // w0
  __int64 v14; // x0 OVERLAPPED
  struct System_String_o *v15; // x1
  __int64 v16; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v17; // [xsp+8h] [xbp-38h]
  System_ValueTuple_T1__T2__o v18; // 0:x0.16
  System_ValueTuple_int__string__o result; // 0:x0.16

  if ( (byte_4B1F637 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_ValueTuple_int__string___ctor__, eventName);
    byte_4B1F637 = 1;
  }
  FixedMotionName = BattleActorControl__GetFixedMotionName(this, eventName, method);
  if ( BattleActorControl__HasGlobalTransitionInFsm_46078152(this, 0, FixedMotionName, v6) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
LABEL_11:
    v12 = (int)FixedMotionName;
    goto LABEL_16;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData
    && BattleServantData__IsPig(battleSvtData, 0LL)
    && BattleActorControl__HasGlobalTransitionInFsm_46078152(this, 2, FixedMotionName, v7) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v16 = 0LL;
    v17 = 0LL;
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = (Il2CppObject *)(&dword_0 + 2);
    goto LABEL_11;
  }
  if ( BattleActorControl__HasGlobalTransitionInFsm_46078152(this, 1, FixedMotionName, v7) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v16 = 0LL;
    v17 = 0LL;
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = (Il2CppObject *)(&dword_0 + 1);
    goto LABEL_11;
  }
  HasGlobalTransitionInFsm_46078152 = BattleActorControl__HasGlobalTransitionInFsm_46078152(this, 0, eventName, v11);
  v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
  v16 = 0LL;
  v17 = 0LL;
  if ( HasGlobalTransitionInFsm_46078152 )
  {
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = 0LL;
  }
  else
  {
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = (Il2CppObject *)(&dword_0 + 1);
  }
  v12 = (int)eventName;
LABEL_16:
  System_ValueTuple_int__object____ctor(v18, v12, v9, v8);
  v14 = v16;
  v15 = v17;
  result.fields.Item2 = v15;
  *(_QWORD *)&result.fields.Item1 = v14;
  return result;
}


System_String_o *__fastcall BattleActorControl__GetPigMotionName(
        BattleActorControl_o *this,
        System_String_o *motionName,
        const MethodInfo *method)
{
  if ( (byte_4B1F63E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_16162/*"_PIG"*/, motionName);
    byte_4B1F63E = 1;
  }
  return System_String__Concat_62450424(motionName, (System_String_o *)StringLiteral_16162/*"_PIG"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattlePlayAnimationComponent_array *__fastcall BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4B1F6D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___, includeInactive);
    byte_4B1F6D1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
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

  if ( (byte_4B1F656 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, voiceId);
    byte_4B1F656 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1BCB254(Instance, v7);
  }
  v9 = this->fields.myShiftData;
  if ( !v9 || !Instance )
    goto LABEL_11;
  v10 = v9->fields.svtId;
  limit = v9->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_SkinnedMeshRenderer_array *__fastcall BattleActorControl__GetRendererArray(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4B1F68C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____76985280, includeInactive);
    byte_4B1F68C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCB254(0LL, v6);
  return (UnityEngine_SkinnedMeshRenderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                    gameObject,
                                                    includeInactive,
                                                    (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____76985280);
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleActorControl__GetServantObjectVisibleControlActor(
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x21
  BattleActionData_o *actiondata; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v27; // x22
  Il2CppObject *current; // x20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_c *klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B1F674 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_int__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_int___, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_1BCAFF8(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v14);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass303_0__GetServantObjectVisibleControlActor_b__0__, v15);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass303_0_TypeInfo, v16);
    byte_4B1F674 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v17 = sub_1BCB244(BattleActorControl___c__DisplayClass303_0_TypeInfo);
  BattleActorControl___c__DisplayClass303_0___ctor((BattleActorControl___c__DisplayClass303_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_29;
  *(_QWORD *)(v17 + 24) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)this, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v17 + 16) = v23;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v23, v24, v25);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, 0LL),
        v27 = (System_Action_int__o *)sub_1BCB244(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v27,
          (Il2CppObject *)v17,
          Method_BattleActorControl___c__DisplayClass303_0__GetServantObjectVisibleControlActor_b__0__,
          0LL),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v27,
          (const MethodInfo_3005F0C *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v17 + 16)) == 0LL) )
  {
LABEL_29:
    sub_1BCB254(actiondata, v19);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)actiondata,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v43.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v29 )
    {
      if ( !current )
        sub_1BCB254(v29, v30);
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)current,
                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v32 = UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
      if ( !v32 )
      {
        if ( !Component_object )
          sub_1BCB254(v32, v33);
        klass = Component_object[18].klass;
        if ( !klass )
          sub_1BCB254(v32, v33);
        if ( LODWORD(klass->_1.namespaze) )
        {
          if ( !v22 )
            sub_1BCB254(v32, v33);
          items = v22->fields._items;
          v38 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v22->fields._version;
          if ( !items )
            sub_1BCB254(v32, v33);
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              (Il2CppObject *)Component_object,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v40[4] = (Il2CppClass *)Component_object;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v40 + 4), (int32_t)Component_object, v34, v35);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v22;
}


UnityEngine_GameObject_array *__fastcall BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


void __fastcall BattleActorControl__GetShiftMotionNameAndOverwriteFlag(
        int32_t overwriteMotionNumber,
        System_String_o **motionName,
        bool *isOverwriteShift,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *v10; // x0
  System_String_o *v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1F6AE & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, motionName);
    sub_1BCAFF8(&StringLiteral_8699/*"MOTION_SHIFT"*/, v8);
    sub_1BCAFF8(&StringLiteral_8693/*"MOTION_OVERWRITE_SHIFT_{0}"*/, v9);
    byte_4B1F6AE = 1;
  }
  *isOverwriteShift = overwriteMotionNumber > 0;
  if ( overwriteMotionNumber <= 0 )
  {
    v11 = (System_String_o *)StringLiteral_8699/*"MOTION_SHIFT"*/;
  }
  else
  {
    v12 = overwriteMotionNumber;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, isOverwriteShift, method, v4);
    v11 = System_String__Format((System_String_o *)StringLiteral_8693/*"MOTION_OVERWRITE_SHIFT_{0}"*/, v10, 0LL);
  }
  *motionName = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)motionName, (int32_t)v11, (int32_t)isOverwriteShift, method);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__GetTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
}


PlayMakerFSM_o *__fastcall BattleActorControl__GetUniqueMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1BCB254(this, method);
  if ( !motionFSM->max_length )
    sub_1BCB25C(this, method, v2);
  return motionFSM->m_Items[0];
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActorControl__GetValueOfMotionProcess(
        BattleActorControl_o *this,
        int32_t type,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4B1F635 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_GetValue_BattleMotionProcessType__int___, *(_QWORD *)&type);
    byte_4B1F635 = 1;
  }
  return BasicHelper__GetValue_Int32Enum__int_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields._MotionProcessDict_k__BackingField,
           type,
           defaultValue,
           (const MethodInfo_300894C *)Method_BasicHelper_GetValue_BattleMotionProcessType__int___);
}


bool __fastcall BattleActorControl__HasGlobalTransitionInFsm_46077908(
        PlayMakerFSM_o *targetFsm,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Object_array *FsmGlobalTransitions; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4B1F63B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_FsmTransition___, globalTransitionName);
    sub_1BCAFF8(&System_Func_FsmTransition__bool__TypeInfo, v5);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass199_0__HasGlobalTransitionInFsm_b__0__, v6);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass199_0_TypeInfo, v7);
    byte_4B1F63B = 1;
  }
  v8 = sub_1BCB244(BattleActorControl___c__DisplayClass199_0_TypeInfo);
  BattleActorControl___c__DisplayClass199_0___ctor((BattleActorControl___c__DisplayClass199_0_o *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = globalTransitionName,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)globalTransitionName, v11, v12),
        !targetFsm) )
  {
    sub_1BCB254(v9, v10);
  }
  FsmGlobalTransitions = (System_Object_array *)PlayMakerFSM__get_FsmGlobalTransitions(targetFsm, 0LL);
  v14 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_FsmTransition__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v8,
    Method_BattleActorControl___c__DisplayClass199_0__HasGlobalTransitionInFsm_b__0__,
    0LL);
  return BasicHelper__Any_object__50347976(
           FsmGlobalTransitions,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_FsmTransition___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__HasGlobalTransitionInFsm_46078152(
        BattleActorControl_o *this,
        int32_t fsmIndex,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x21
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *v8; // x20

  v6 = this;
  if ( (byte_4B1F63A & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleActorControl_TypeInfo, *(_QWORD *)&fsmIndex);
    byte_4B1F63A = 1;
  }
  motionFSM = v6->fields.motionFSM;
  if ( !motionFSM )
    sub_1BCB254(this, *(_QWORD *)&fsmIndex);
  if ( motionFSM->max_length <= fsmIndex )
    sub_1BCB25C(this, *(_QWORD *)&fsmIndex, globalTransitionName);
  v8 = motionFSM->m_Items[fsmIndex];
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  return BattleActorControl__HasGlobalTransitionInFsm_46077908(
           v8,
           globalTransitionName,
           (const MethodInfo *)globalTransitionName);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__HasMotionIdInCommonMotion(
        BattleActorControl_o *this,
        int32_t motionId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  PlayMakerFSM_o *CommonFsm; // x20
  System_String_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4B1F639 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_TypeInfo, *(_QWORD *)&motionId);
    byte_4B1F639 = 1;
  }
  CommonFsm = BattleActorControl__get_CommonFsm(this, *(const MethodInfo **)&motionId);
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  v7 = BattleActorControl__MotionIdStr(motionId, v5);
  return BattleActorControl__HasGlobalTransitionInFsm_46077908(CommonFsm, v7, v8);
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
  BattleActorControl___c__DisplayClass162_0_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CGThumbnailListItem_o *p_dicTriggerAnimEffects; // x19
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  BattleActorControl___c_c *v35; // x0
  System_Func_object__object__o *_9__162_1; // x21
  Il2CppObject *v37; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v41; // x0
  BattleActorControl___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_object__object__o *_9__162_2; // x21
  Il2CppObject *v45; // x22
  struct BattleActorControl___c_StaticFields *v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_Func_object__object__o *_9__162_3; // x22
  Il2CppObject *v50; // x23
  struct BattleActorControl___c_StaticFields *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  if ( (byte_4B1F622 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___, *(_QWORD *)&limitCount);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, v5);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____,
      v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___, v7);
    sub_1BCAFF8(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v8);
    sub_1BCAFF8(&System_Func_BattleActorAnimationEffect__bool__TypeInfo, v9);
    sub_1BCAFF8(&System_Func_BattleActorAnimationEffect__string__TypeInfo, v10);
    sub_1BCAFF8(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___, v12);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v13);
    sub_1BCAFF8(&Method_BattleActorControl___c__InitAnimationEffect_b__162_1__, v14);
    sub_1BCAFF8(&Method_BattleActorControl___c__InitAnimationEffect_b__162_2__, v15);
    sub_1BCAFF8(&Method_BattleActorControl___c__InitAnimationEffect_b__162_3__, v16);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass162_0__InitAnimationEffect_b__0__, v17);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass162_0_TypeInfo, v18);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v19);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v20);
    byte_4B1F622 = 1;
  }
  v21 = (BattleActorControl___c__DisplayClass162_0_o *)sub_1BCB244(BattleActorControl___c__DisplayClass162_0_TypeInfo);
  BattleActorControl___c__DisplayClass162_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_29;
  v21->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (CGThumbnailListItem_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dicTriggerAnimEffects, 0, v24, v25);
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.prevAnimEffectTriggerKey, v27, v28, v29);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v22 = this->fields.actorObject;
    if ( v22 )
    {
      Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                                 v22,
                                                                                 (const MethodInfo_306F06C *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v32 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v32,
        (Il2CppObject *)v21,
        Method_BattleActorControl___c__DisplayClass162_0__InitAnimationEffect_b__0__,
        0LL);
      v33 = System_Linq_Enumerable__Where_object_(
              Components_object,
              (System_Func_TSource__bool__o *)v32,
              (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v33,
                                                                   (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34, 0LL) )
      {
        v35 = BattleActorControl___c_TypeInfo;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v35 = BattleActorControl___c_TypeInfo;
        }
        _9__162_1 = (System_Func_object__object__o *)v35->static_fields->__9__162_1;
        if ( !_9__162_1 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = BattleActorControl___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v35->static_fields->__9;
          _9__162_1 = (System_Func_object__object__o *)sub_1BCB244(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__162_1,
            v37,
            Method_BattleActorControl___c__InitAnimationEffect_b__162_1__,
            0LL);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__162_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__162_1;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__162_1, (int32_t)_9__162_1, v39, v40);
        }
        v41 = System_Linq_Enumerable__GroupBy_object__object_(
                v34,
                (System_Func_TSource__TKey__o *)_9__162_1,
                (const MethodInfo_3040FC4 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v42 = BattleActorControl___c_TypeInfo;
        v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v42 = BattleActorControl___c_TypeInfo;
        }
        _9__162_2 = (System_Func_object__object__o *)v42->static_fields->__9__162_2;
        if ( !_9__162_2 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = BattleActorControl___c_TypeInfo;
          }
          v45 = (Il2CppObject *)v42->static_fields->__9;
          _9__162_2 = (System_Func_object__object__o *)sub_1BCB244(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_object__object____ctor(
            _9__162_2,
            v45,
            Method_BattleActorControl___c__InitAnimationEffect_b__162_2__,
            0LL);
          v46 = BattleActorControl___c_TypeInfo->static_fields;
          v46->__9__162_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__162_2;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v46->__9__162_2, (int32_t)_9__162_2, v47, v48);
          v42 = BattleActorControl___c_TypeInfo;
        }
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = BattleActorControl___c_TypeInfo;
        }
        _9__162_3 = (System_Func_object__object__o *)v42->static_fields->__9__162_3;
        if ( !_9__162_3 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = BattleActorControl___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v42->static_fields->__9;
          _9__162_3 = (System_Func_object__object__o *)sub_1BCB244(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_object__object____ctor(
            _9__162_3,
            v50,
            Method_BattleActorControl___c__InitAnimationEffect_b__162_3__,
            0LL);
          v51 = BattleActorControl___c_TypeInfo->static_fields;
          v51->__9__162_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__162_3;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v51->__9__162_3, (int32_t)_9__162_3, v52, v53);
        }
        v54 = System_Linq_Enumerable__ToDictionary_object__object__object_(
                v43,
                (System_Func_TSource__TKey__o *)_9__162_2,
                (System_Func_TSource__TElement__o *)_9__162_3,
                (const MethodInfo_3057C84 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (CGThumbnailListItem_c *)v54;
        sub_1BCAF9C(p_dicTriggerAnimEffects, (int32_t)v54, v55, v56);
      }
      return;
    }
LABEL_29:
    sub_1BCB254(v22, v23);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v8; // x0
  System_Func_object__bool__o *_9__230_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B1F644 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___, method);
    sub_1BCAFF8(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo, v3);
    sub_1BCAFF8(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__230_0__, v4);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v5);
    byte_4B1F644 = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v8 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v8 = BattleActorControl___c_TypeInfo;
  }
  _9__230_0 = (System_Func_object__bool__o *)v8->static_fields->__9__230_0;
  if ( !_9__230_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleActorControl___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__230_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__230_0,
      v10,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__230_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__230_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__230_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__230_0, (int32_t)_9__230_0, v12, v13);
  }
  return System_Linq_Enumerable__All_object_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__230_0,
           (const MethodInfo_3024F54 *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
}


bool __fastcall BattleActorControl__IsAlreadyDrop(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.IsAlreadyDrop;
}


bool __fastcall BattleActorControl__IsCurrentMotionFsmType(
        BattleActorControl_o *this,
        int32_t fsmType,
        const MethodInfo *method)
{
  return this->fields.actindex == fsmType;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__IsDelayEndSequence(
        BattleActorControl_o *this,
        int32_t sequenceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x0

  if ( (byte_4B1F6CB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, *(_QWORD *)&sequenceId);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    byte_4B1F6CB = 1;
  }
  delayEndSequenceIdListFromMotion_k__BackingField = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( delayEndSequenceIdListFromMotion_k__BackingField )
  {
    if ( delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
    {
      if ( System_Collections_Generic_List_int___Contains(
             delayEndSequenceIdListFromMotion_k__BackingField,
             -1,
             (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = 1;
      }
      else
      {
        v8 = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
        if ( !v8 )
          sub_1BCB254(0LL, v7);
        LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = System_Collections_Generic_List_int___Contains(
                                                                     v8,
                                                                     sequenceId,
                                                                     (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
    else
    {
      LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = 0;
    }
  }
  return (char)delayEndSequenceIdListFromMotion_k__BackingField;
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattleServantData_o *v8; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t v10; // w21
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *v12; // x20
  struct BattlePerformance_o *v13; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v15; // x8
  System_Int32_array *ShadowOffSvtIds; // x20
  System_Func_int__bool__o *v17; // x21
  EnemyScriptParam_OverwriteShadowData_o *shadowData; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4B1F6C8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_int____76918080, method);
    sub_1BCAFF8(&Method_BattleActorControl__IsHideShadow_b__416_0__, v3);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v4);
    this = (BattleActorControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1F6C8 = 1;
  }
  shadowData = 0LL;
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_32;
  this = (BattleActorControl_o *)battleSvtData->fields.deckSvt;
  if ( this )
  {
    if ( BattleDeckServantData__isHideShadow((BattleDeckServantData_o *)this, 0LL) )
      return 1;
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v2->fields.battleSvtData;
      if ( !v8 )
        goto LABEL_32;
      this = (BattleActorControl_o *)v2->fields.performance;
      if ( !this )
        goto LABEL_32;
      deckSvt = v8->fields.deckSvt;
      this = (BattleActorControl_o *)BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)this, 0LL);
      if ( !v2->fields.performance )
        goto LABEL_32;
      v10 = (int)this;
      this = (BattleActorControl_o *)BattlePerformance__get_CurrentGroundType(v2->fields.performance, 0LL);
      if ( !deckSvt )
        goto LABEL_32;
      this = (BattleActorControl_o *)BattleDeckServantData__TryGetOverwriteShadowData(
                                       deckSvt,
                                       v10,
                                       (int32_t)this,
                                       &shadowData,
                                       0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)shadowData;
        if ( !shadowData )
          goto LABEL_32;
        this = (BattleActorControl_o *)EnemyScriptParam_OverwriteShadowData__get_IsHideShadow(shadowData, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return 1;
      }
    }
  }
  translucentActorVisualInfo = v2->fields.translucentActorVisualInfo;
  if ( !translucentActorVisualInfo )
    goto LABEL_32;
  if ( translucentActorVisualInfo->fields._IsActive_k__BackingField
    && !translucentActorVisualInfo->fields._IsDrawShadow_k__BackingField )
  {
    return 1;
  }
  v12 = (UnityEngine_Object_o *)v2->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v13 = v2->fields.performance;
  if ( !v13 )
    goto LABEL_32;
  data = (UnityEngine_Object_o *)v13->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v15 = v2->fields.performance;
  if ( !v15 || (this = (BattleActorControl_o *)v15->fields.data) == 0LL )
LABEL_32:
    sub_1BCB254(this, method);
  ShadowOffSvtIds = BattleData__GetShadowOffSvtIds((BattleData_o *)this, 0LL);
  v17 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v17, (Il2CppObject *)v2, Method_BattleActorControl__IsHideShadow_b__416_0__, 0LL);
  return BasicHelper__Any_int__50347164(
           ShadowOffSvtIds,
           (System_Func_T__bool__o *)v17,
           (const MethodInfo_3003C9C *)Method_BasicHelper_Any_int____76918080);
}


bool __fastcall BattleActorControl__IsMatchCurrentCommonAnimName(
        BattleActorControl_o *this,
        int32_t animName,
        bool exceptNullOrEmpty,
        const MethodInfo *method)
{
  BattleFBXComponent_o *fbxcomponent; // x0

  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1BCB254(0LL, animName);
  return BattleFBXComponent__IsMatchCurrentCommonAnimName(fbxcomponent, animName, exceptNullOrEmpty, 0LL);
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
  unsigned int v23; // w8
  struct BattleActionData_o *v24; // x8
  int32_t actionIndex; // w8
  int32_t v26; // w10
  int32_t v27; // w21
  int32_t i; // w20
  struct BattlePerformance_o *v29; // x8

  if ( (byte_4B1F6CD & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&expectedType);
    byte_4B1F6CD = 1;
  }
  if ( this->fields.isEnemy )
    goto LABEL_4;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return (unsigned __int8)actiondata & 1;
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_47;
  data = (UnityEngine_Object_o *)v16->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(data, 0LL, 0LL);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_47;
  v19 = this->fields.actiondata;
  if ( !v19 )
    goto LABEL_47;
  v14 = v18->fields.data;
  if ( !v14 )
    goto LABEL_47;
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
      {
LABEL_46:
        LOBYTE(actiondata) = 1;
        return (unsigned __int8)actiondata & 1;
      }
      goto LABEL_25;
    }
    isTreasureDvc = BattleCommandData__isTreasureDvc(v21, 0LL);
    LOBYTE(actiondata) = !isTreasureDvc;
    if ( !isTreasureDvc && !allowCutInOtherSvtCard )
    {
LABEL_25:
      if ( !byte_4B1715D )
      {
        sub_1BCAFF8(&System_Math_TypeInfo, v15);
        byte_4B1715D = 1;
      }
      v14 = (BattleData_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      if ( targetCardIndexFromNow >= 0 )
        v23 = targetCardIndexFromNow;
      else
        v23 = -targetCardIndexFromNow;
      if ( v23 < 2 )
        goto LABEL_46;
      v24 = this->fields.actiondata;
      if ( v24 )
      {
        actionIndex = v24->fields.actionIndex;
        if ( actionIndex >= actionIndex + targetCardIndexFromNow )
          v26 = actionIndex + targetCardIndexFromNow;
        else
          v26 = actionIndex;
        if ( actionIndex <= actionIndex + targetCardIndexFromNow )
          actionIndex += targetCardIndexFromNow;
        v27 = actionIndex - 1;
        for ( i = v26 + 1; i <= v27; ++i )
        {
          v29 = this->fields.performance;
          if ( !v29 )
            goto LABEL_47;
          v14 = v29->fields.data;
          if ( !v14 )
            goto LABEL_47;
          v14 = (BattleData_o *)BattleData__getSelectCommand(v14, i, 0LL);
          if ( !v14 )
            goto LABEL_4;
          LOBYTE(actiondata) = 0;
          if ( this->fields.uniqueID != LODWORD(v14->fields.fsm) )
            return (unsigned __int8)actiondata & 1;
        }
        goto LABEL_46;
      }
LABEL_47:
      sub_1BCB254(v14, v15);
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
    sub_1BCB254(battleSvtData, v3);
  return BattleData__IsNoSkipDeadFirst((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__IsVisibleByTargetNodeScale(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *checkScaleNode; // x20
  UnityEngine_Object_o *actorObject; // x20
  float v6; // s1
  float v7; // s2
  float v8; // s0

  if ( (byte_4B1F64C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F64C = 1;
  }
  checkScaleNode = (UnityEngine_Object_o *)this->fields.checkScaleNode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(checkScaleNode, 0LL, 0LL) )
    return 1;
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
    return 0;
  *(UnityEngine_Vector3_o *)(&v6 - 1) = GameObjectExtensions__GetLocalScale(this->fields.checkScaleNode, 0LL);
  return v8 > 0.01 && v6 > 0.01 && v7 > 0.01;
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

  if ( (byte_4B1F6CC & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F6CC = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(performance, 0LL, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_16:
    sub_1BCB254(battleSvtData, v5);
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
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v17; // x8
  System_Func_object__bool__o *_9__422_0; // x20
  Il2CppObject *v19; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  __int64 v24; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x20
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  BattlePlayAnimationComponent_o *v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x22
  System_Func_object__bool__o *v46; // x23
  Il2CppObject *v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B1F6CE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___, method);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v3);
    sub_1BCAFF8(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo, v4);
    sub_1BCAFF8(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v5);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1BCAFF8(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__422_0__, v10);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass422_0__LoadSavedPartAnimation_b__1__, v11);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass422_0_TypeInfo, v12);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v13);
    byte_4B1F6CE = 1;
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
                                                                                     v15);
    v17 = BattleActorControl___c_TypeInfo;
    if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
      v17 = BattleActorControl___c_TypeInfo;
    }
    _9__422_0 = (System_Func_object__bool__o *)v17->static_fields->__9__422_0;
    if ( !_9__422_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleActorControl___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__422_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__422_0,
        v19,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__422_0__,
        0LL);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
      static_fields->__9__422_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__422_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__422_0, (int32_t)_9__422_0, v21, v22);
    }
    v23 = System_Linq_Enumerable__Where_object_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__422_0,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v23 )
      sub_1BCB254(0LL, v24);
    klass = v23->klass;
    v26 = v23;
    v27 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        --v27;
        p_offset += 4;
        if ( !v27 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C1B560(v23, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v26,
            *(_QWORD *)(p_method + 8));
    if ( !v31 )
      sub_1BCB254(0LL, v30);
    while ( 1 )
    {
      v32 = *(_QWORD *)v31;
      v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v33;
          v34 += 4;
          if ( !v33 )
            goto LABEL_23;
        }
        v35 = v32 + 16LL * *v34 + 312;
      }
      else
      {
LABEL_23:
        v35 = sub_1C1B560(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
        break;
      v36 = sub_1BCB244(BattleActorControl___c__DisplayClass422_0_TypeInfo);
      BattleActorControl___c__DisplayClass422_0___ctor((BattleActorControl___c__DisplayClass422_0_o *)v36, 0LL);
      v37 = *(_QWORD *)v31;
      v38 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
      {
        v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          --v38;
          v39 += 4;
          if ( !v38 )
            goto LABEL_30;
        }
        v40 = v37 + 16LL * *v39 + 312;
      }
      else
      {
LABEL_30:
        v40 = sub_1C1B560(v31, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL);
      }
      v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v31, *(_QWORD *)(v40 + 8));
      if ( !v36 )
        sub_1BCB254(v41, v41);
      *(_QWORD *)(v36 + 16) = v41;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 16), v41, v42, v43);
      v44 = *(BattlePlayAnimationComponent_o **)(v36 + 16);
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v46 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v36,
        Method_BattleActorControl___c__DisplayClass422_0__LoadSavedPartAnimation_b__1__,
        0LL);
      v47 = System_Linq_Enumerable__FirstOrDefault_object__50595188(
              v45,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_3040574 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v44 )
        sub_1BCB254(v47, v47);
      BattlePlayAnimationComponent__SetSaveData(v44, (BattlePlayAnimationComponent_SaveData_o *)v47, 0LL);
    }
    v48 = *(_QWORD *)v31;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_39;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_39:
      v51 = sub_1C1B560(v31, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v51)(v31, *(_QWORD *)(v51 + 8));
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
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  __int64 v13; // x1
  _DWORD *ComponentsInChildren_object; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  _DWORD *v17; // x23
  int v18; // w8
  unsigned int v19; // w28
  _DWORD *v20; // x8
  UnityEngine_ParticleSystem_o *v21; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-80h] BYREF
  _DWORD *v29; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v30; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v31; // 0:x0.8

  if ( (byte_4B1F6C0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, isPlay);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v7);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v8);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v11);
    byte_4B1F6C0 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v29 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                                       buffLoopEffectDict,
                                                                                       (const MethodInfo_33210F4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1BCB254(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v27,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_39E2464 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v28 = v27;
LABEL_6:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v28,
            (const MethodInfo_3473984 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v28.fields._currentValue )
      sub_1BCB254(0LL, v13);
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)v28.fields._currentValue,
                                    1,
                                    (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248);
    v17 = ComponentsInChildren_object;
    if ( !ComponentsInChildren_object )
      sub_1BCB254(0LL, v15);
    v18 = ComponentsInChildren_object[6];
    if ( v18 >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        if ( v19 >= v18 )
          sub_1BCB25C(ComponentsInChildren_object, v15, v16);
        v20 = &v17[2 * v19];
        v21 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v20 + 4);
        if ( !v21 )
          sub_1BCB254(ComponentsInChildren_object, v15);
        ComponentsInChildren_object = UnityEngine_ParticleSystem__get_main(
                                        *((UnityEngine_ParticleSystem_o **)v20 + 4),
                                        0LL).fields.m_ParticleSystem;
        v29 = ComponentsInChildren_object;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_1BCB254(ComponentsInChildren_object, v15);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_24;
          UnityEngine_ParticleSystem__Play_70419484(v21, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
          if ( !gameObject )
            sub_1BCB254(0LL, v24);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v29;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v30, 0, 0LL);
            v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v21, 0LL);
            if ( !v25 )
              sub_1BCB254(0LL, v26);
            UnityEngine_GameObject__SetActive(v25, 0, 0LL);
            goto LABEL_24;
          }
          UnityEngine_ParticleSystem__Stop_70419836(v21, 0LL);
        }
        v31.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v29;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v31, !isPlay, 0LL);
LABEL_24:
        v18 = v17[6];
        if ( (int)++v19 >= v18 )
          goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v28,
    (const MethodInfo_3473980 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4B1F6C4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_13414/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, isPlay);
    byte_4B1F6C4 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13414/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1BCB254(0LL, v5);
    BattlePerformance__AllLoopEffectSwitch(performance, isPlay, 1, 0LL);
  }
  else
  {
    BattleActorControl__LoopEffectParticleSwitch(this, isPlay, 1, v6);
  }
}


System_String_o *__fastcall BattleActorControl__MotionIdStr(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  Il2CppObject *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B1F638 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_8707/*"MOTION_{0}"*/, v6);
    byte_4B1F638 = 1;
  }
  v9 = motionId;
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_8707/*"MOTION_{0}"*/, v7, 0LL);
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
  _BOOL8 v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v31; // x21
  UnityEngine_Transform_o *v32; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1F6C5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    byte_4B1F6C5 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_1BCB254(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
    (const MethodInfo_332171C *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v13 = 0LL;
  v35 = v34;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v35,
            (const MethodInfo_3472D10 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v35.fields._current.fields.key;
    value = v35.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !value )
        sub_1BCB254(v16, v17);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_1BCB254(0LL, v19);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_1BCB254(0LL, v21);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v23 )
        sub_1BCB254(0LL, v24);
      v25 = UnityEngine_Object__get_name(v23, 0LL);
      if ( !name )
        sub_1BCB254(v25, v25);
      v26 = System_String__Equals_62485728(name, v25, 0LL);
      if ( !v26 )
      {
        if ( !v13 )
        {
          v13 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v13,
            (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v13 )
            sub_1BCB254(v26, v27);
        }
        items = v13->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1BCB254(v26, v27);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            key,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = key;
        }
        v31 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v31 )
          sub_1BCB254(v32, v32);
        UnityEngine_Transform__set_parent(v31, v32, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v35,
    (const MethodInfo_3472E34 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v13;
}


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
  System_Collections_Generic_List_object__o *EffectBuffList; // x23
  Il2CppObject *MasterData_object; // x21
  StatusEffectPosOverwriteMaster_o *v22; // x22
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *v25; // x0
  Il2CppObject *v26; // x25
  int32_t monitor; // w1
  __int64 v28; // x1
  BattleServantData_o *v29; // x0
  int32_t v30; // w26
  int32_t ActorSvtId; // w27
  const MethodInfo *v32; // x1
  __int64 LimitCount; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  Il2CppObject *Item; // x0
  __int64 v38; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v40; // x1
  UnityEngine_Transform_o *v41; // x25
  UnityEngine_Object_o *parent; // x0
  __int64 v43; // x1
  System_String_o *name; // x0
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  const MethodInfo *v51; // x1
  System_String_o *nodeName; // x27
  UnityEngine_Transform_o *v53; // x26
  int32_t v54; // w2
  __int64 NodeFromLvName; // x0
  __int64 v56; // x1
  UnityEngine_Transform_o *v57; // x26
  struct BattleServantData_o *v58; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x0
  __int64 v66; // x1
  struct BattleServantData_o *v67; // x8
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+0h] [xbp-C0h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v75; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F6C6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BuffMaster___, movedEffect);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v14);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4B1F6C6 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  entity = 0LL;
  if ( movedEffect )
  {
    actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buffData = (BattleBuffData_o *)UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL);
    if ( ((unsigned __int8)buffData & 1) == 0 && movedEffect->fields._size >= 1 )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (buffData = battleSvtData->fields.buffData) == 0LL
        || (EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                            buffData,
                                                                            0LL),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffData,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_1BCB254(buffData, v18);
      }
      v22 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v68,
        EffectBuffList,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v70 = v68;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v70,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v23 )
          break;
        if ( !v70.fields._current )
          sub_1BCB254(v23, v24);
        if ( !MasterData_object )
          sub_1BCB254(v23, v24);
        v25 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)v70.fields._current[1].klass,
                (const MethodInfo_32C7E00 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v26 = v25;
        if ( v25 )
        {
          monitor = (int32_t)v25[6].monitor;
          if ( monitor >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 monitor,
                 (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v29 = this->fields.battleSvtData;
            if ( !v29 )
              sub_1BCB254(0LL, v28);
            v30 = (int32_t)v26[6].monitor;
            ActorSvtId = BattleServantData__getActorSvtId(v29, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v32);
            if ( !v22 )
              sub_1BCB254(LimitCount, v34);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v22, &entity, v30, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_1BCB254(0LL, v35);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                       (int32_t)v26[6].monitor,
                       (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_1BCB254(0LL, v38);
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Item, 0LL);
              v41 = transform;
              if ( !transform )
                sub_1BCB254(0LL, v40);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_1BCB254(0LL, v43);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_1BCB254(name, v45);
              if ( !name )
                sub_1BCB254(0LL, v45);
              if ( !System_String__Equals_62485728(name, entity->fields.nodeName, 0LL) )
              {
                if ( !byte_4B16191 )
                {
                  sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v46);
                  byte_4B16191 = 1;
                }
                UnityEngine_Transform__set_localPosition(
                  v41,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                if ( !byte_4B16197 )
                {
                  sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, v47);
                  byte_4B16197 = 1;
                }
                UnityEngine_Transform__set_localRotation(
                  v41,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
                v49 = this->fields.actorObject;
                if ( !v49 )
                  sub_1BCB254(0LL, v48);
                v50 = UnityEngine_GameObject__get_transform(v49, 0LL);
                if ( !entity )
                  sub_1BCB254(v50, v51);
                nodeName = entity->fields.nodeName;
                v53 = v50;
                v54 = BattleActorControl__getLimitCount(this, v51);
                NodeFromLvName = (__int64)TransformHelper__getNodeFromLvName(v53, nodeName, v54, 1, 0LL);
                v57 = (UnityEngine_Transform_o *)NodeFromLvName;
                if ( !byte_4B16191 )
                {
                  NodeFromLvName = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v56);
                  byte_4B16191 = 1;
                }
                v58 = this->fields.battleSvtData;
                if ( !v58 )
                  sub_1BCB254(NodeFromLvName, v56);
                if ( !entity )
                  sub_1BCB254(0LL, v56);
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                x = static_fields->zeroVector.fields.x;
                y = static_fields->zeroVector.fields.y;
                z = static_fields->zeroVector.fields.z;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v58->fields.isEnemy, 0LL);
                Offset.fields.x = x + Offset.fields.x;
                Offset.fields.y = y + Offset.fields.y;
                Offset.fields.z = z + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v41, Offset, 0LL);
                if ( !entity )
                  sub_1BCB254(0LL, v63);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                Rotation.fields.x = Rotation.fields.x * 0.017453;
                Rotation.fields.y = Rotation.fields.y * 0.017453;
                Rotation.fields.z = Rotation.fields.z * 0.017453;
                v75 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v41, v75, 0LL);
                if ( !entity )
                  sub_1BCB254(0LL, v64);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v41, Scale, 0LL);
                UnityEngine_Transform__set_parent(v41, v57, 0LL);
                v67 = this->fields.battleSvtData;
                if ( !v67 )
                  sub_1BCB254(v65, v66);
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
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v70,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void __fastcall BattleActorControl__NotDisplayFuncMotionAction(BattleActorControl_o *actor, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  BattlePerformance_o *performance; // x20
  const MethodInfo *v4; // x1

  if ( !actor )
    goto LABEL_6;
  v2 = actor;
  actor = (BattleActorControl_o *)actor->fields.actiondata;
  performance = v2->fields.performance;
  if ( actor )
    BattleActionData__UpdateBuffAfterActionFlag((BattleActionData_o *)actor, 0, 0LL);
  if ( !performance )
LABEL_6:
    sub_1BCB254(actor, method);
  BattlePerformance__ProcAfterFuncNotDisplay(performance, 0LL);
  BattlePerformance__SetWaitPrevEndAllActionSendEvent(performance, 1, 0LL);
  BattleActorControl__finishMotion_46084992(v2, v4);
}


void __fastcall BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_4B1F692 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_SkipDead__, method);
    sub_1BCAFF8(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4B1F692 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCB244(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1BCB254(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v8, 0LL);
  }
}


void __fastcall BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_GameObject_o *performance; // x0
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v18; // w9
  UnityEngine_Object_o *actorObject; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_object__o *extraLoadedVoiceArgsList; // x0
  CGThumbnailListItem_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B1F617 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__,
      method);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__,
      v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__,
      v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Clear__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v11);
    byte_4B1F617 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  this->fields.rendererArrayList = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.rendererArrayList, 0, v2, v3);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.BattleModelObjectVisibleControlComponents, 0, v12, v13);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_25;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v18 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
  {
    performance = this->fields.actorObject;
    if ( !performance )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         performance,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      performance = (UnityEngine_GameObject_o *)this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider(
          (BattlePerformance_o *)performance,
          (UnityEngine_MeshCollider_o *)Component_object,
          0LL);
        goto LABEL_15;
      }
LABEL_25:
      sub_1BCB254(performance, v15);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v15);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v21);
  extraLoadedVoiceArgsList = (System_Collections_Generic_List_object__o *)this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (CGThumbnailListItem_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      extraLoadedVoiceArgsList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v24 )
        break;
      if ( !v31.fields._current )
        sub_1BCB254(v24, v25);
      klass = (int32_t)v31.fields._current[1].klass;
      klass_high = HIDWORD(v31.fields._current[1].klass);
      monitor = (int32_t)v31.fields._current[1].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_1BCAF9C(p_extraLoadedVoiceArgsList, 0, v29, v30);
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
  __int64 methodPtr_low; // x9
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_4B1F659 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, name);
    byte_4B1F659 = 1;
  }
  fbxcomponent = v5->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_13;
  BattleActorControl__DisplayAnimationEffect(v5, fbxcomponent->fields.currentCommonAnimName, name, v3);
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
          this,
          name,
          this->klass[1].vtable._2_GetHashCode.methodPtr) & 1) == 0 )
  {
LABEL_12:
    BattleActorControl__sendEventFSM_46076216(v5, name, 0, v7);
    return;
  }
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this
    || (this = (BattleActorControl_o *)((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._3_ToString.method)(
                                         this,
                                         name,
                                         this->klass[1].vtable._4_GetTransform.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_1BCB254(this, name);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc((BattleActorControl_EventClass_o *)this, 0LL);
    this = (BattleActorControl_o *)v5->fields.EventList;
    if ( this )
    {
      ((void (__fastcall *)(BattleActorControl_o *, System_String_o *, void *))this->klass[2]._1.typeMetadataHandle)(
        this,
        name,
        this->klass[2]._1.interopData);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  sub_1BCB514(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void __fastcall BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1F663 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F663 = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (CGThumbnailListItem_o *)&this->fields.particleDisconnectorObj;
  v4 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70136076(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_1BCAF9C(p_particleDisconnectorObj, 0, v7, v8);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  TreasureDvcEntity_o *v12; // x20
  __int64 v13; // x2
  int v14; // w8
  struct BattleServantData_o *v15; // x9
  int32_t v16; // w10
  System_Action_o *v17; // x20
  const MethodInfo *v18; // x2
  System_Collections_IEnumerator_o *v19; // x0

  if ( (byte_4B1F677 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, obj);
    sub_1BCAFF8(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__307_0__, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_4B1F677 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_23;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( !performance )
    goto LABEL_23;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v8 = (BattleSequenceManager_o *)performance;
  performance = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_23;
  performance = TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v8 )
    goto LABEL_23;
  BattleSequenceManager__SetIntactBgms(v8, (System_Int32_array *)performance, 0LL);
  performance = this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_23;
  if ( *((_BYTE *)performance + 499) )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_23;
    v9 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v9 )
      goto LABEL_23;
    *((_QWORD *)v9 + 31) = performance;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 248), (int32_t)performance, v10, v11);
    performance = this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_23;
  }
  performance = BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v12 = (TreasureDvcEntity_o *)performance;
  performance = (void *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v12 )
    goto LABEL_23;
  performance = TreasureDvcEntity__getFixAppearanceInfoArray(v12, (int32_t)performance, 0LL);
  if ( !performance )
    goto LABEL_21;
  if ( *((_DWORD *)performance + 6) < 2u )
    sub_1BCB25C(performance, obj, v13);
  v14 = *((_DWORD *)performance + 8);
  if ( v14 < 1 )
  {
LABEL_21:
    v19 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_22;
  }
  v15 = this->fields.battleSvtData;
  if ( !v15 )
LABEL_23:
    sub_1BCB254(performance, obj);
  v16 = *((_DWORD *)performance + 9);
  v15->fields.tmpAppearanceId = v14;
  v15->fields.isForceAppearance = 1;
  v15->fields.dressDispId = v16;
  v17 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(
    v17,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__307_0__,
    0LL);
  v19 = BattleActorControl__waitChangeApp(this, v17, v18);
LABEL_22:
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v19, 0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleServantData_o *battleSvtData; // x20
  BattleServantData_o *Instance; // x0
  __int64 v15; // x1
  BattlePerformance_o *performance; // x20
  struct BattlePerformance_o *v17; // x8
  struct BattlePerformance_o *v18; // x8
  const MethodInfo *v19; // x1
  struct BattlePerformance_o *v20; // x8
  const MethodInfo *v21; // x2
  System_Action_o *v22; // x20
  const MethodInfo *v23; // x2
  System_Collections_IEnumerator_o *v24; // x0
  const MethodInfo *v25; // x3
  struct System_Action_o *noblePhantasmCallback; // x8
  struct BattlePerformance_o *v27; // x8
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2

  if ( (byte_4B1F679 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, seq);
    sub_1BCAFF8(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__309_0__, v4);
    sub_1BCAFF8(&BattleFBXComponent_TypeInfo, v5);
    sub_1BCAFF8(&System_GC_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v9);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v10);
    sub_1BCAFF8(&StringLiteral_7413/*"IN_BATTLE_START"*/, v11);
    sub_1BCAFF8(&StringLiteral_6368/*"FINISHED"*/, v12);
    byte_4B1F679 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_48;
  ((void (__fastcall *)(struct BattleServantData_o *, BattleServantData_o *, BattleActorControl_o *, struct BattlePerformance_o *, void *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass[1]._1.image);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__changeNp(Instance, Instance->fields.tmpNp + Instance->fields.np, 0, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__updateNpGauge(Instance, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__updateTDGauge(Instance, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  LOBYTE(Instance->fields._minActNum_k__BackingField) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__OnEndNoblePhantasm((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  performance = this->fields.performance;
  Instance = (BattleServantData_o *)BattleServantData__get_TreasureDevice(Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  if ( !performance )
    goto LABEL_48;
  BattlePerformance__endNoblePhantasm(performance, Instance->fields.index, 0LL);
  v17 = this->fields.performance;
  if ( !v17 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v17->fields.bgPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__setDamageTargetVoiceFlg((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_48;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)Instance, 1, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__changeShadowType((BattlePerformance_o *)Instance, 0, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)Instance, 0LL);
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v18->fields.commandPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v19);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__ResetOverwriteNobleDamageAnimationFlg((BattlePerformance_o *)Instance, 0LL);
  v20 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v20 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v20->fields.logic;
  if ( !Instance )
    goto LABEL_48;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v21);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  if ( BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    v22 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v22,
      (Il2CppObject *)this,
      Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__309_0__,
      0LL);
    v24 = BattleActorControl__waitChangeApp(this, v22, v23);
    Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_70121648(
                                        (UnityEngine_MonoBehaviour_o *)this,
                                        v24,
                                        0LL);
  }
  else
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_48;
    BattlePerformance__noblePhantasmWhiteInFade((BattlePerformance_o *)Instance, 0.2, 0.3, 0LL);
    noblePhantasmCallback = this->fields.noblePhantasmCallback;
    if ( noblePhantasmCallback )
    {
      if ( BattleFBXComponent_TypeInfo->_2.cctor_finished )
      {
        BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
        noblePhantasmCallback = this->fields.noblePhantasmCallback;
        BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
        if ( !noblePhantasmCallback )
          goto LABEL_48;
      }
      Instance = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
                                          noblePhantasmCallback->fields.original_method_info,
                                          *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
    }
    else
    {
      BattleActorControl__sendEventFSM_46076216(this, (System_String_o *)StringLiteral_6368/*"FINISHED"*/, 0, v25);
    }
  }
  v27 = this->fields.performance;
  if ( !v27 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v27->fields.data;
  if ( !Instance )
    goto LABEL_48;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v28);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v29);
  }
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance
    || (BattlePerformance__BattleMoviePause((BattlePerformance_o *)Instance, 0, 1, 0LL),
        (Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0LL) )
  {
LABEL_48:
    sub_1BCB254(Instance, v15);
  }
  CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_7413/*"IN_BATTLE_START"*/, 0LL);
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_4B1F691 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_SkipDead__, method);
    sub_1BCAFF8(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4B1F691 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCB244(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1BCB254(IsNoTouchSkip, v5);
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
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x8

  v4 = isSaveAnim;
  v6 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, isSaveAnim, method);
  result = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v6, v4, v7);
  overwriteAnim = this->fields.overwriteAnim;
  if ( overwriteAnim )
    return ChangeBattlePhaseOverwriteAnimation__Overwrite(overwriteAnim, this, result, 0LL);
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
  __int64 v15; // x22
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_object__bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  System_Action_object__o *v26; // x20

  if ( (byte_4B1F6D0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattlePlayAnimationComponent__TypeInfo, key);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v10);
    sub_1BCAFF8(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v11);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass425_0__PlayMatchPartAnimation_b__0__, v12);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass425_0__PlayMatchPartAnimation_b__1__, v13);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass425_0_TypeInfo, v14);
    byte_4B1F6D0 = 1;
  }
  v15 = sub_1BCB244(BattleActorControl___c__DisplayClass425_0_TypeInfo);
  BattleActorControl___c__DisplayClass425_0___ctor((BattleActorControl___c__DisplayClass425_0_o *)v15, 0LL);
  if ( !v15 )
    sub_1BCB254(v16, v17);
  *(_QWORD *)(v15 + 16) = key;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)key, v18, v19);
  *(_QWORD *)(v15 + 24) = animName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 24), (int32_t)animName, v20, v21);
  *(float *)(v15 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v22);
  v24 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v15,
    Method_BattleActorControl___c__DisplayClass425_0__PlayMatchPartAnimation_b__0__,
    0LL);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v24,
                                                         (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v26 = (System_Action_object__o *)sub_1BCB244(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_BattleActorControl___c__DisplayClass425_0__PlayMatchPartAnimation_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v25,
    (System_Action_T__o *)v26,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
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
        bool isEnd,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x24
  int max_length; // w8
  BattleActorControl_o *v6; // x19
  int v9; // w27
  bool v10; // w23
  char v11; // w26
  bool v12; // w25
  _BOOL4 v13; // w28
  Il2CppClass **v14; // x8
  BattleModelObjectVisibleControlComponent_o *v15; // x22
  BattleModelObjectVisibleControlComponent_o *v16; // x0

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    goto LABEL_21;
  max_length = BattleModelObjectVisibleControlComponents->max_length;
  v6 = this;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = isEnd;
  do
  {
    if ( v9 >= (unsigned int)max_length )
      sub_1BCB25C(this, isEnd, visibleControlInfo);
    v14 = &BattleModelObjectVisibleControlComponents->obj.klass + v9;
    v15 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( !v15 )
      goto LABEL_21;
    v16 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( isEnd )
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__EndProc(v16, visibleControlInfo, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__ExecuteProc(v16, visibleControlInfo, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__IsSkinnedMesh(v15, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = 1;
      v10 = v15->fields.visible != v13;
    }
    v12 = 1;
LABEL_13:
    max_length = BattleModelObjectVisibleControlComponents->max_length;
    ++v9;
  }
  while ( v9 < max_length );
  if ( (v11 & 1) != 0 && v12 )
  {
    this = (BattleActorControl_o *)v6->fields.fbxcomponent;
    if ( this )
    {
      BattleFBXComponent__SetActiveActorEffectAll((BattleFBXComponent_o *)this, v10, 0LL);
      return v12;
    }
LABEL_21:
    sub_1BCB254(this, isEnd);
  }
  return v12;
}


void __fastcall BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v9; // x20
  unsigned __int64 v10; // x22
  struct System_Collections_Generic_Dictionary_int__Action_BattleActorControl___o **p_noPlaymakerMotionActionDict; // x25
  Il2CppObject *v12; // x21

  v4 = this;
  if ( (byte_4B1F68A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v5);
    this = (BattleActorControl_o *)sub_1BCAFF8(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__,
                                     v6);
    byte_4B1F68A = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                   obj,
                                   (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0LL;
    p_noPlaymakerMotionActionDict = &this->fields.noPlaymakerMotionActionDict;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, obj, v7);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v12 = (Il2CppObject *)p_noPlaymakerMotionActionDict[v10];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v12,
                                       (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_object___Remove(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v12,
                                         (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_1BCB254(this, obj);
  }
}


void __fastcall BattleActorControl__RemoveColliderFromPerformance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *actorObject; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *performance; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4B1F6A6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1F6A6 = 1;
  }
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
  {
    performance = this->fields.actorObject;
    if ( !performance )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         performance,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      performance = (UnityEngine_GameObject_o *)this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider(
          (BattlePerformance_o *)performance,
          (UnityEngine_MeshCollider_o *)Component_object,
          0LL);
        return;
      }
LABEL_13:
      sub_1BCB254(performance, v5);
    }
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
    sub_1BCB254(0LL, eventName);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._37_Remove.method)(
    EventList,
    eventName,
    EventList->klass->vtable._38_get_SyncRoot.methodPtr);
}


void __fastcall BattleActorControl__RemoveOverwriteEachPhaseAnimation(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleObserver_o *overwriteAnim; // x0
  CGThumbnailListItem_o *p_overwriteAnim; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
  if ( overwriteAnim )
  {
    p_overwriteAnim = (CGThumbnailListItem_o *)&this->fields.overwriteAnim;
    BattleObserver__Remove(overwriteAnim, 0LL);
    p_overwriteAnim->klass = 0LL;
    sub_1BCAF9C(p_overwriteAnim, 0, v5, v6);
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


void __fastcall BattleActorControl__ResetAddColorOfMaterials(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_Material__o *v6; // x0
  BattleActorControl___c_c *v7; // x8
  System_Collections_Generic_IEnumerable_T__o *v8; // x19
  System_Action_object__o *_9__334_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B1F68E & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_Material__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_Material___, v3);
    sub_1BCAFF8(&Method_BattleActorControl___c__ResetAddColorOfMaterials_b__334_0__, v4);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v5);
    byte_4B1F68E = 1;
  }
  v6 = BattleActorControl__EnumerateMaterials(this, method);
  v7 = BattleActorControl___c_TypeInfo;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)v6;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v7 = BattleActorControl___c_TypeInfo;
  }
  _9__334_0 = (System_Action_object__o *)v7->static_fields->__9__334_0;
  if ( !_9__334_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = BattleActorControl___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__334_0 = (System_Action_object__o *)sub_1BCB244(System_Action_Material__TypeInfo);
    System_Action_object____ctor(
      _9__334_0,
      v10,
      Method_BattleActorControl___c__ResetAddColorOfMaterials_b__334_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__334_0 = (struct System_Action_Material__o *)_9__334_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__334_0, (int32_t)_9__334_0, v12, v13);
  }
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)_9__334_0,
    (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_Material___);
}


void __fastcall BattleActorControl__ResetChangeModelByOriginalChange(
        BattleActorControl_o *this,
        BattleServantData_o *changeAfterSvtData,
        const MethodInfo *method)
{
  int32_t originalModelId; // w20

  originalModelId = this->fields.originalModelId;
  if ( originalModelId >= 1 )
  {
    if ( !changeAfterSvtData )
      sub_1BCB254(this, 0LL);
    if ( originalModelId != BattleServantData__GetOriginalModelId(changeAfterSvtData, 0LL) )
      BattleServantData__ResetChangeModelData(changeAfterSvtData, 0LL);
  }
}


void __fastcall BattleActorControl__RevertDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4B1F6B9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F6B9 = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0LL, 0LL) )
    {
      v5 = this->fields.fbxcomponent;
      if ( !v5 )
        sub_1BCB254(0LL, v4);
      BattleFBXComponent__RevertDefaultAnimation(v5, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SendMotionEventForVanishSkill(
        BattleActorControl_o *this,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x3

  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                                       this,
                                       globalTransitionName,
                                       method);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  if ( BattleActorControl__HasGlobalTransitionInFsm_46078152(this, 1, MotionFsmIndexAndFixedMotionName.fields.Item2, v5) )
    this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_46076216(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v6);
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleActorControl___c__DisplayClass328_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_object__o *v12; // x22

  if ( (byte_4B1F689 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_Material__TypeInfo, method);
    sub_1BCAFF8(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___, v5);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass328_0__SetActorAlpha_b__0__, v6);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass328_0_TypeInfo, v7);
    byte_4B1F689 = 1;
  }
  v8 = (BattleActorControl___c__DisplayClass328_0_o *)sub_1BCB244(BattleActorControl___c__DisplayClass328_0_TypeInfo);
  BattleActorControl___c__DisplayClass328_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1BCB254(v9, v10);
  v8->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v12 = (System_Action_object__o *)sub_1BCB244(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleActorControl___c__DisplayClass328_0__SetActorAlpha_b__0__,
    0LL);
  BattleActorControl__UpdateMaterialsOnRenderders_object_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v12,
    (const MethodInfo_300AC18 *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
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
  __int64 v19; // x2
  UnityEngine_Material_array *v20; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x25
  UnityEngine_Object_o *v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B1F688 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_15985/*"_AddColor"*/, v12);
    byte_4B1F688 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v25 = v24;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v25.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_1BCB254(v15, v16);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v20 = materials;
        if ( !materials )
          sub_1BCB254(0LL, v18);
        v21 = *(_QWORD *)&materials->max_length;
        if ( (int)v21 >= 1 )
        {
          v22 = 0LL;
          do
          {
            if ( v22 >= (unsigned int)v21 )
              sub_1BCB25C(materials, v18, v19);
            v23 = (UnityEngine_Object_o *)v20->m_Items[v22];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v23 )
                sub_1BCB254(materials, v18);
              v26.fields.r = r;
              v26.fields.g = g;
              v26.fields.b = b;
              v26.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v23,
                (System_String_o *)StringLiteral_15985/*"_AddColor"*/,
                v26,
                0LL);
            }
            LODWORD(v21) = v20->max_length;
            ++v22;
          }
          while ( (__int64)v22 < (int)v21 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4B1F6B3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___, *(_QWORD *)&gId);
    byte_4B1F6B3 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_object )
    sub_1BCB254(0LL, v6);
  LODWORD(Component_object[4].monitor) = gId;
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
  CGThumbnailListItem_o *p_shadowEffectObject; // x21
  unsigned __int64 v10; // x24
  __int64 v11; // x26
  unsigned __int64 v12; // x9
  UnityEngine_Object_o *v13; // x23
  const MethodInfo *v14; // x3
  CGThumbnailListItem_c *klass; // x8
  BattleServantData_o *battleSvtData; // x23
  UnityEngine_GameObject_o *actorObject; // x24
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  UnityEngine_GameObject_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  v6 = this;
  if ( (byte_4B1F67C & 1) == 0 )
  {
    sub_1BCAFF8(&BattleEffectUtility_TypeInfo, isShadow);
    this = (BattleActorControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1F67C = 1;
  }
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  p_shadowEffectObject = (CGThumbnailListItem_o *)&v6->fields.shadowEffectObject;
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
        goto LABEL_17;
      v13 = (UnityEngine_Object_o *)p_klass[v10 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v13, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v10 >= LODWORD(klass->_1.namespaze) )
LABEL_17:
          sub_1BCB25C(this, isShadow, isChoco);
        *(void **)((char *)&klass->_1.image + v11) = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)((char *)klass + v11), 0, isChoco, v14);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v10;
        v11 += 8LL;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_18;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_18:
    sub_1BCB254(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v19 = BattleEffectUtility__ChangeServantView(battleSvtData, actorObject, isShadow, isChoco, svtlimitaddent, 0LL);
  p_shadowEffectObject->klass = (CGThumbnailListItem_c *)v19;
  sub_1BCAF9C(p_shadowEffectObject, (int32_t)v19, v20, v21);
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
  __int64 v19; // x2
  UnityEngine_Material_array *v20; // x19
  __int64 v21; // x8
  unsigned __int64 v22; // x25
  UnityEngine_Object_o *v23; // x20
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B1F687 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v12);
    byte_4B1F687 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v25 = v24;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v25.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_1BCB254(v15, v16);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v20 = materials;
        if ( !materials )
          sub_1BCB254(0LL, v18);
        v21 = *(_QWORD *)&materials->max_length;
        if ( (int)v21 >= 1 )
        {
          v22 = 0LL;
          do
          {
            if ( v22 >= (unsigned int)v21 )
              sub_1BCB25C(materials, v18, v19);
            v23 = (UnityEngine_Object_o *)v20->m_Items[v22];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v23 )
                sub_1BCB254(materials, v18);
              v26.fields.r = r;
              v26.fields.g = g;
              v26.fields.b = b;
              v26.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v23,
                (System_String_o *)StringLiteral_16037/*"_Color"*/,
                v26,
                0LL);
            }
            LODWORD(v21) = v20->max_length;
            ++v22;
          }
          while ( (__int64)v22 < (int)v21 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o fadeColour,
        float alpha,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  struct BattleServantData_o *v16; // x8
  int32_t displayType; // w8
  bool v18; // w1
  bool v19; // w2
  __int64 v20; // x2
  int uniqueId; // w8
  BattleServantData_o *v22; // x19
  unsigned int v23; // w22
  float v24; // s15
  BattleServantData_c **v25; // x8
  UnityEngine_Renderer_o *v26; // x20
  float v27; // s14
  float v28; // s13
  float v29; // s12
  UnityEngine_Material_o *material; // x0
  float v31; // s11
  float v32; // s10
  float v33; // s9
  float a; // s8
  __int64 v35; // x8
  BattleServantData_o *v36; // x20
  float v37; // s8
  unsigned __int64 v38; // x26
  float v39; // s12
  float v40; // s13
  float v41; // s9
  float v42; // s14
  float v43; // s10
  float v44; // s11
  UnityEngine_Object_o *v45; // x21
  float v46; // [xsp+4h] [xbp-9Ch]
  float v47; // [xsp+8h] [xbp-98h]
  float v48; // [xsp+Ch] [xbp-94h]
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o ColorOrDefault; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v52; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v53; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_4B1F684 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v10);
    sub_1BCAFF8(&StringLiteral_15985/*"_AddColor"*/, v11);
    byte_4B1F684 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0LL) )
  {
    BattleActorControl__SetMaterialWhite(this, v13);
    BattleActorControl__ResetAddColorOfMaterials(this, v15);
  }
  else
  {
    v16 = this->fields.battleSvtData;
    if ( v16 )
    {
      displayType = v16->fields.displayType;
      v18 = displayType == 2;
      v19 = displayType == 3;
    }
    else
    {
      v18 = 0;
      v19 = 0;
    }
    BattleActorControl__SetDispServant(this, v18, v19, v14);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_30:
    sub_1BCB254(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v22 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v23 = 0;
    v47 = g * alpha;
    v48 = r * alpha;
    v24 = 1.0 - alpha;
    v46 = b * alpha;
    while ( 1 )
    {
      if ( v23 >= uniqueId )
        goto LABEL_29;
      v25 = &v22->klass + (int)v23;
      v26 = (UnityEngine_Renderer_o *)v25[4];
      if ( !v26 )
        goto LABEL_30;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v25[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      v27 = color.fields.r;
      v28 = color.fields.g;
      v29 = color.fields.b;
      material = UnityEngine_Renderer__get_material(v26, 0LL);
      v50.fields.r = 0.0;
      v50.fields.g = 0.0;
      v50.fields.b = 0.0;
      v50.fields.a = 0.0;
      ColorOrDefault = MaterialExtensions__GetColorOrDefault(material, (System_String_o *)StringLiteral_15985/*"_AddColor"*/, v50, 0LL);
      v31 = ColorOrDefault.fields.r;
      v32 = ColorOrDefault.fields.g;
      v33 = ColorOrDefault.fields.b;
      a = ColorOrDefault.fields.a;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v26, 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      v35 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v36 = battleSvtData;
      if ( (int)v35 >= 1 )
        break;
LABEL_27:
      uniqueId = v22->fields.uniqueId;
      if ( (int)++v23 >= uniqueId )
        return;
    }
    v37 = a + 0.0;
    v38 = 0LL;
    v39 = v24 * v29;
    v40 = v24 * v28;
    v41 = v46 + v33;
    v42 = v24 * v27;
    v43 = v47 + v32;
    v44 = v48 + v31;
    while ( v38 < (unsigned int)v35 )
    {
      v45 = (UnityEngine_Object_o *)*(&v36->fields.userSvtId.fields.currentCryptoKey + v38);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v45 )
          goto LABEL_30;
        v52.fields.a = 1.0;
        v52.fields.r = v42;
        v52.fields.g = v40;
        v52.fields.b = v39;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v45, (System_String_o *)StringLiteral_16037/*"_Color"*/, v52, 0LL);
        v53.fields.r = v44;
        v53.fields.g = v43;
        v53.fields.b = v41;
        v53.fields.a = v37;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v45, (System_String_o *)StringLiteral_15985/*"_AddColor"*/, v53, 0LL);
      }
      LODWORD(v35) = v36->fields.uniqueId;
      if ( (__int64)++v38 >= (int)v35 )
        goto LABEL_27;
    }
LABEL_29:
    sub_1BCB25C(battleSvtData, method, v20);
  }
}


void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int v8; // w8
  _DWORD *v9; // x19
  unsigned int v10; // w22
  char *v11; // x8
  UnityEngine_Renderer_o *v12; // x20
  unsigned __int64 v13; // x25
  UnityEngine_Object_o *v14; // x21
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F683 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v4);
    byte_4B1F683 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_23;
  v8 = *((_DWORD *)gameObject + 6);
  v9 = gameObject;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
LABEL_24:
        sub_1BCB25C(gameObject, v6, v7);
      v11 = (char *)&v9[2 * v10];
      v12 = (UnityEngine_Renderer_o *)*((_QWORD *)v11 + 4);
      if ( !v12 )
        break;
      gameObject = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v11 + 4), 0LL);
      if ( !gameObject )
        break;
      v13 = 0LL;
      while ( (__int64)v13 < *((int *)gameObject + 6) )
      {
        gameObject = UnityEngine_Renderer__get_materials(v12, 0LL);
        if ( !gameObject )
          goto LABEL_23;
        if ( v13 >= *((unsigned int *)gameObject + 6) )
          goto LABEL_24;
        v14 = (UnityEngine_Object_o *)*((_QWORD *)gameObject + v13 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v14 )
            goto LABEL_23;
          v15.fields.r = 1.0;
          v15.fields.g = 1.0;
          v15.fields.b = 1.0;
          v15.fields.a = 1.0;
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)v14,
            (System_String_o *)StringLiteral_16037/*"_Color"*/,
            v15,
            0LL);
        }
        ++v13;
        gameObject = UnityEngine_Renderer__get_materials(v12, 0LL);
        if ( !gameObject )
          goto LABEL_23;
      }
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_23:
    sub_1BCB254(gameObject, v6);
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
  BattlePlayAnimationComponent_array *PlayAnimationComponents; // x0
  BattleActorControl___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__bool__o *_9__423_0; // x21
  Il2CppObject *v16; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  BattleActorControl___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__object__o *_9__423_1; // x21
  Il2CppObject *v24; // x22
  struct BattleActorControl___c_StaticFields *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Object_array *v30; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_4B1F6CF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___, method);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___,
      v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___, v5);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v6);
    sub_1BCAFF8(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v7);
    sub_1BCAFF8(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo, v8);
    sub_1BCAFF8(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__423_0__, v9);
    sub_1BCAFF8(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__423_1__, v10);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v11);
    byte_4B1F6CF = 1;
  }
  PlayAnimationComponents = BattleActorControl__GetPlayAnimationComponents(this, 0, v2);
  v13 = BattleActorControl___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayAnimationComponents;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v13 = BattleActorControl___c_TypeInfo;
  }
  _9__423_0 = (System_Func_object__bool__o *)v13->static_fields->__9__423_0;
  if ( !_9__423_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleActorControl___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__423_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__423_0,
      v16,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__423_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__423_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__423_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__423_0, (int32_t)_9__423_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)_9__423_0,
          (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v21 = BattleActorControl___c_TypeInfo;
  v22 = v20;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v21 = BattleActorControl___c_TypeInfo;
  }
  _9__423_1 = (System_Func_object__object__o *)v21->static_fields->__9__423_1;
  if ( !_9__423_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleActorControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__423_1 = (System_Func_object__object__o *)sub_1BCB244(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_object__object____ctor(
      _9__423_1,
      v24,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__423_1__,
      0LL);
    v25 = BattleActorControl___c_TypeInfo->static_fields;
    v25->__9__423_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__423_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v25->__9__423_1, (int32_t)_9__423_1, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v22,
                                                         (System_Func_TSource__TResult__o *)_9__423_1,
                                                         (const MethodInfo_304EFCC *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v29 = BasicHelper__ExcludeNull_object_(
          v28,
          (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(
      battleSvtData,
      this->fields.partAnimationSaveKey,
      (BattlePlayAnimationComponent_SaveData_array *)v30,
      0LL);
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

  if ( (byte_4B1F6C9 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, active);
    byte_4B1F6C9 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
      sub_1BCB254(IsHideShadow, v8);
    UnityEngine_GameObject__SetActive(IsHideShadow, active & ~v10 & 1, 0LL);
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
  BattleData_o *IsHideShadow; // x0
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4B1F681 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v9);
    sub_1BCAFF8(&StringLiteral_16128/*"_MainTex"*/, v10);
    byte_4B1F681 = 1;
  }
  IsHideShadow = (BattleData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( ((unsigned __int8)IsHideShadow & 1) == 0 )
  {
    if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) < 1.0e-10 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_18;
      IsHideShadow = performance->fields.data;
      if ( !IsHideShadow )
        goto LABEL_18;
      GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0LL);
      r = GroundShadowColor.fields.r;
      g = GroundShadowColor.fields.g;
      b = GroundShadowColor.fields.b;
      a = GroundShadowColor.fields.a;
    }
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
    {
      IsHideShadow = (BattleData_o *)this->fields.mpb;
      if ( IsHideShadow )
      {
        UnityEngine_MaterialPropertyBlock__Clear_69993200((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
        IsHideShadow = (BattleData_o *)this->fields.mpb;
        if ( IsHideShadow )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
            (System_String_o *)StringLiteral_16128/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          IsHideShadow = (BattleData_o *)this->fields.mpb;
          if ( IsHideShadow )
          {
            v16.fields.r = r;
            v16.fields.g = g;
            v16.fields.b = b;
            v16.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
              (System_String_o *)StringLiteral_16037/*"_Color"*/,
              v16,
              0LL);
            IsHideShadow = (BattleData_o *)this->fields.shadowObj;
            this->fields.currentShadowColor.fields.r = r;
            this->fields.currentShadowColor.fields.g = g;
            this->fields.currentShadowColor.fields.b = b;
            this->fields.currentShadowColor.fields.a = a;
            if ( IsHideShadow )
            {
              IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)IsHideShadow,
                                               (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( IsHideShadow )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)IsHideShadow, this->fields.mpb, 0LL);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1BCB254(IsHideShadow, v12);
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
  System_Collections_Generic_Dictionary_int__object__o *v14; // x21
  char *ShadowTransform; // x0
  __int64 v16; // x1
  int v17; // w8
  char *v18; // x2
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
  int v30; // w8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  BattleActorControl_c *v33; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v35; // x0
  System_Collections_Generic_Dictionary_int__object__o *v36; // x21
  int v37; // w8
  int v38; // w8
  int v39; // w8
  int v40; // w8
  int v46; // w8
  int v47; // w8
  int v49; // w8
  int v51; // w8
  int v53; // w8
  int v54; // w8
  int v56; // w8
  int v57; // w8
  int v58; // w8
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  BattleActorControl_c *v61; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0
  BattleActorControl_c *v63; // x0
  BattleActorControl_c *v64; // x0
  Il2CppObject *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  Il2CppObject *v68; // x22
  UnityEngine_Transform_o *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  BattleActorControl_c *v72; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v74; // x23
  BattleActorControl_c *v75; // x0
  UnityEngine_Object_o *v76; // x19

  if ( (byte_4B1F682 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_TypeInfo, *(_QWORD *)&btlSize);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__, v8);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v9);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Vector3___TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_12725/*"Shadow"*/, v12);
    byte_4B1F682 = 1;
  }
  v13 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v13 = BattleActorControl_TypeInfo;
  }
  if ( !v13->static_fields->ShadowTransform )
  {
    v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v14,
      (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v17 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v17 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0LL;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v17 == 1 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 6) = 0LL;
    *((_DWORD *)ShadowTransform + 11) = 0;
    if ( !v14 )
      goto LABEL_138;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      0,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v19 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v19 )
      goto LABEL_137;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v19 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      1,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v20 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v20 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v20 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      2,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v21 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v21 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v21 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      3,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v22 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v22 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v22 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      4,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v23 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v23 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v23 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      5,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v24 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v24 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v24 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      6,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v25 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v25 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v25 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      7,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v26 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v26 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v26 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      8,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v27 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v27 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v27 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      9,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v28 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v28 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v28 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      10,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v29 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v29 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v29 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      11,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v30 = *((_DWORD *)ShadowTransform + 6);
    v18 = ShadowTransform;
    if ( !v30 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v30 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      12,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v33 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v33 = BattleActorControl_TypeInfo;
    }
    v33->static_fields->ShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v14;
    sub_1BCAF9C((CGThumbnailListItem_o *)BattleActorControl_TypeInfo->static_fields, (int32_t)v14, v31, v32);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v35 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v35 = BattleActorControl_TypeInfo;
    }
    if ( !v35->static_fields->specialShadowTransform )
    {
      v36 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v36,
        (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v37 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v37 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v37 == 1 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      *((_DWORD *)ShadowTransform + 11) = 0;
      if ( !v36 )
        goto LABEL_138;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        0,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v38 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v38 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v38 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        1,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v39 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v39 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v39 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        2,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v40 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v40 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v40 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        3,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v46 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v46 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v46 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        4,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v47 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v47 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v47 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        5,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v49 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v49 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v49 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        6,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v51 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v51 )
        goto LABEL_137;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v51 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        7,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v53 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v53 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v53 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        8,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v54 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v54 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v54 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        9,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v56 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v56 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v56 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        10,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v57 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v57 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v57 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        11,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1BCB0A0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v58 = *((_DWORD *)ShadowTransform + 6);
      v18 = ShadowTransform;
      if ( !v58 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v58 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v36,
        12,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v61 = BattleActorControl_TypeInfo;
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v61 = BattleActorControl_TypeInfo;
      }
      static_fields = v61->static_fields;
      static_fields->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v36;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->specialShadowTransform, (int32_t)v36, v59, v60);
    }
  }
  v63 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v63 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v63->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_138;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v64 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v64 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v64->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_138;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v68 = Item;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
    {
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v69 = UnityEngine_Transform__Find(
              (UnityEngine_Transform_o *)ShadowTransform,
              (System_String_o *)StringLiteral_12725/*"Shadow"*/,
              0LL);
      *p_shadowObj = v69;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shadowObj, (int32_t)v69, v70, v71);
    }
    v72 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v72 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v72->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( !v72->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v72);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_138;
      }
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             (System_Collections_Generic_Dictionary_int__object__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v74 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v74, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_138;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v75 = BattleActorControl_TypeInfo;
            if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v75 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v75->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_138;
            v68 = System_Collections_Generic_Dictionary_int__object___get_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v76 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_138;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v68 )
        goto LABEL_138;
      if ( LODWORD(v68[1].monitor) )
      {
        if ( !ShadowTransform )
          goto LABEL_138;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v68[2].klass,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_138;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v68[1].monitor) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)((char *)&v68[2].monitor + 4),
              0LL);
            return;
          }
LABEL_138:
          sub_1BCB254(ShadowTransform, v16);
        }
      }
LABEL_137:
      sub_1BCB25C(ShadowTransform, v16, v18);
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
    sub_1BCB254(battleSvtData, v4);
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

  if ( (byte_4B1F6B8 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F6B8 = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        sub_1BCB254(overwriteAnim, v4);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v6, (System_String_o *)overwriteAnim, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetValueOfMotionProcess(
        BattleActorControl_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *MotionProcessDict_k__BackingField; // x0

  if ( (byte_4B1F634 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TryAdd__, *(_QWORD *)&type);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__set_Item__, v7);
    byte_4B1F634 = 1;
  }
  MotionProcessDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._MotionProcessDict_k__BackingField;
  if ( !MotionProcessDict_k__BackingField
    || (System_Collections_Generic_Dictionary_Int32Enum__int___TryAdd(
          MotionProcessDict_k__BackingField,
          type,
          0,
          (const MethodInfo_334E670 *)Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TryAdd__),
        (MotionProcessDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._MotionProcessDict_k__BackingField) == 0LL) )
  {
    sub_1BCB254(MotionProcessDict_k__BackingField, *(_QWORD *)&type);
  }
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    MotionProcessDict_k__BackingField,
    type,
    value,
    (const MethodInfo_334CF74 *)Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__set_Item__);
}


void __fastcall BattleActorControl__SetWithdrawFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(this, method);
  battleSvtData->fields.isAnimPlayedWithdraw = 1;
}


void __fastcall BattleActorControl__SetupNodes(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *NodeFromLvName; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Transform_o *v9; // x0
  struct UnityEngine_Transform_o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Transform_o *v13; // x0
  struct UnityEngine_Transform_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B1F616 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_18819/*"en_damage01"*/, method);
    sub_1BCAFF8(&StringLiteral_18822/*"en_text01"*/, v3);
    sub_1BCAFF8(&StringLiteral_18821/*"en_target01"*/, v4);
    byte_4B1F616 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_18822/*"en_text01"*/, -1, 0, 0LL);
  this->fields._NodeText_k__BackingField = NodeFromLvName;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._NodeText_k__BackingField, (int32_t)NodeFromLvName, v7, v8);
  v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v10 = TransformHelper__getNodeFromLvName(v9, (System_String_o *)StringLiteral_18819/*"en_damage01"*/, -1, 0, 0LL);
  this->fields._NodeDamage_k__BackingField = v10;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._NodeDamage_k__BackingField, (int32_t)v10, v11, v12);
  v13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v14 = TransformHelper__getNodeFromLvName(v13, (System_String_o *)StringLiteral_18821/*"en_target01"*/, -1, 0, 0LL);
  this->fields._NodeTarget_k__BackingField = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._NodeTarget_k__BackingField, (int32_t)v14, v15, v16);
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
  const MethodInfo *v3; // x3
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_o **p_myShiftData; // x21
  _BOOL4 isHideShadow; // w22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BattleServantData_o *battleSvtData; // x0

  myShiftData = this->fields.myShiftData;
  p_myShiftData = &this->fields.myShiftData;
  if ( myShiftData )
  {
    isHideShadow = myShiftData->fields.isHideShadow;
    if ( isHideShadow != BattleActorControl__IsHideShadow(this, (const MethodInfo *)isShift) )
      BattleActorControl__UpdateShadow(this, v9);
  }
  this->fields.myShiftData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_myShiftData, 0, (int32_t)method, v3);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v10);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, v11);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1F695 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_12134/*"SKIP_DEAD"*/, method);
    byte_4B1F695 = 1;
  }
  BattleActorControl__sendEventFSM_46076216(this, (System_String_o *)StringLiteral_12134/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x20
  CGThumbnailListItem_o *p_generic_class; // x20
  System_Delegate_o *generic_class; // t1
  BattleFBXComponent_onEventDelegate_o *v8; // x22
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Delegate_o *v12; // x8
  BattleFBXComponent_onEventDelegate_c *v13; // x1
  Il2CppClass *v14; // x20
  System_Delegate_o *typeMetadataHandle; // t1
  BattleFBXComponent_onEventDelegate_o *v16; // x22
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  BattleFBXComponent_onEventDelegate_c *v20; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_4B1F615 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_Complete__, method);
    sub_1BCAFF8(&Method_BattleActorControl_OnEvent__, v3);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleFBXComponent_onEventDelegate_TypeInfo, v4);
    byte_4B1F615 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_16;
  generic_class = (System_Delegate_o *)klass->_1.generic_class;
  p_generic_class = (CGThumbnailListItem_o *)&klass->_1.generic_class;
  v8 = (BattleFBXComponent_onEventDelegate_o *)sub_1BCB244(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v8, v2, Method_BattleActorControl_OnEvent__, 0LL);
  v9 = System_Delegate__Combine(generic_class, (System_Delegate_o *)v8, 0LL);
  v12 = v9;
  if ( v9 )
  {
    v13 = BattleFBXComponent_onEventDelegate_TypeInfo;
    if ( (BattleFBXComponent_onEventDelegate_c *)v9->klass != BattleFBXComponent_onEventDelegate_TypeInfo )
      goto LABEL_13;
    p_generic_class->klass = (CGThumbnailListItem_c *)v9;
    if ( (BattleFBXComponent_onEventDelegate_c *)v9->klass != v13 )
      goto LABEL_13;
  }
  else
  {
    p_generic_class->klass = 0LL;
  }
  sub_1BCAF9C(p_generic_class, (int32_t)v9, v10, v11);
  v14 = v2[3].klass;
  if ( !v14 )
LABEL_16:
    sub_1BCB254(this, method);
  typeMetadataHandle = (System_Delegate_o *)v14->_1.typeMetadataHandle;
  p_generic_class = (CGThumbnailListItem_o *)&v14->_1.typeMetadataHandle;
  v16 = (BattleFBXComponent_onEventDelegate_o *)sub_1BCB244(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v16, v2, Method_BattleActorControl_Complete__, 0LL);
  v17 = System_Delegate__Combine(typeMetadataHandle, (System_Delegate_o *)v16, 0LL);
  v12 = v17;
  if ( !v17 )
  {
LABEL_14:
    p_generic_class->klass = (CGThumbnailListItem_c *)v12;
    goto LABEL_15;
  }
  v20 = BattleFBXComponent_onEventDelegate_TypeInfo;
  if ( (BattleFBXComponent_onEventDelegate_c *)v17->klass != BattleFBXComponent_onEventDelegate_TypeInfo
    || (p_generic_class->klass = (CGThumbnailListItem_c *)v17, (BattleFBXComponent_onEventDelegate_c *)v17->klass != v20) )
  {
LABEL_13:
    sub_1BCB514(v12);
    goto LABEL_14;
  }
LABEL_15:
  sub_1BCAF9C(p_generic_class, (int32_t)v12, v18, v19);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDeadEffect(
        BattleActorControl_o *this,
        bool enableDropItem,
        float overwriteDuration,
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
  __int64 v19; // x1
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 v21; // w20
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 ActorSvtId; // x0
  __int64 v24; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct BattleServantData_o *v31; // x8
  float v32; // s9
  System_String_o *Value; // x0
  __int64 v34; // x2
  int v35; // w8
  __int64 v36; // x19
  unsigned int v37; // w20
  int v38; // w22
  UnityEngine_GameObject_o *v39; // x19
  const MethodInfo *v40; // x3
  System_Object_array *v41; // x20
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x22
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  const MethodInfo *v52; // x3
  Il2CppObject *v53; // x21
  const MethodInfo *v54; // x3
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x21
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  const MethodInfo *v64; // x3
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x21
  System_Collections_Hashtable_o *v70; // x0
  __int64 v71; // x0
  float v72; // [xsp+8h] [xbp-58h] BYREF
  int v73; // [xsp+Ch] [xbp-54h] BYREF
  float Height; // [xsp+28h] [xbp-38h] BYREF
  int v75; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4B1F661 & 1) == 0 )
  {
    sub_1BCAFF8(&iTween_EaseType_TypeInfo, enableDropItem);
    sub_1BCAFF8(&object___TypeInfo, v7);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1BCAFF8(&float_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_24220/*"updateDeadEffect"*/, v10);
    sub_1BCAFF8(&StringLiteral_19518/*"from"*/, v11);
    sub_1BCAFF8(&StringLiteral_18592/*"easetype"*/, v12);
    sub_1BCAFF8(&StringLiteral_9831/*"OnFinishDead"*/, v13);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v14);
    sub_1BCAFF8(&StringLiteral_12082/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v15);
    sub_1BCAFF8(&StringLiteral_22237/*"onupdate"*/, v16);
    sub_1BCAFF8(&StringLiteral_23894/*"to"*/, v17);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v18);
    sub_1BCAFF8(&iTween_TypeInfo, v19);
    byte_4B1F661 = 1;
  }
  if ( enableDropItem )
    BattleActorControl__StartDropItem(this, 0, method);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v21 = battleSvtData->fields.displayType == 3;
  else
    v21 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( v21 )
    ServantAssetLoadManager__changeChocoDeadShader(gameObject, 0LL);
  else
    ServantAssetLoadManager__changeDeadShader(gameObject, 0LL);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_87;
  root_field = performance->fields.root_field;
  ActorSvtId = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ActorSvtId )
    goto LABEL_87;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ActorSvtId, 0LL);
  v28 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.particleDisconnectorObj, (int32_t)v28, v29, v30);
  v31 = this->fields.battleSvtData;
  v32 = 1.3;
  if ( v31 )
  {
    if ( v31->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12082/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_87;
        v35 = *(_DWORD *)(ActorSvtId + 24);
        v36 = ActorSvtId;
        if ( v35 >= 1 )
        {
          v37 = 0;
          while ( 1 )
          {
            if ( v37 >= v35 )
              goto LABEL_85;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_87;
            v38 = *(_DWORD *)(v36 + 4LL * (int)v37 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v38 == (_DWORD)ActorSvtId )
              break;
            v35 = *(_DWORD *)(v36 + 24);
            if ( (int)++v37 >= v35 )
              goto LABEL_27;
          }
          v32 = 1.0;
        }
      }
    }
  }
LABEL_27:
  if ( overwriteDuration < 0.0 )
    overwriteDuration = v32;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_1BCB0A0(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_87:
    sub_1BCB254(ActorSvtId, v24);
  v41 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19518/*"from"*/;
  if ( StringLiteral_19518/*"from"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_19518/*"from"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_19518/*"from"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v41->max_length )
    goto LABEL_85;
  v41->m_Items[0] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)v41->m_Items, v24, v34, v40);
  v75 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v75, v42, v43, v44);
  v46 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCB134(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v41->max_length <= 1 )
    goto LABEL_85;
  v41->m_Items[1] = v46;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[1], (int32_t)v46, v34, v45);
  ActorSvtId = StringLiteral_23894/*"to"*/;
  if ( StringLiteral_23894/*"to"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_23894/*"to"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_23894/*"to"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 2 )
    goto LABEL_85;
  v41->m_Items[2] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[2], v24, v34, v47);
  Height = BattleActorControl__GetHeight(this, v48);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height, v49, v50, v51);
  v53 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCB134(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v41->max_length <= 3 )
    goto LABEL_85;
  v41->m_Items[3] = v53;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[3], (int32_t)v53, v34, v52);
  ActorSvtId = StringLiteral_18592/*"easetype"*/;
  if ( StringLiteral_18592/*"easetype"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_18592/*"easetype"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_18592/*"easetype"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 4 )
    goto LABEL_85;
  v41->m_Items[4] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[4], v24, v34, v54);
  v73 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v73, v55, v56, v57);
  v59 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCB134(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v41->max_length <= 5 )
    goto LABEL_85;
  v41->m_Items[5] = v59;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[5], (int32_t)v59, v34, v58);
  ActorSvtId = StringLiteral_22237/*"onupdate"*/;
  if ( StringLiteral_22237/*"onupdate"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_22237/*"onupdate"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_22237/*"onupdate"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 6 )
    goto LABEL_85;
  v41->m_Items[6] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[6], v24, v34, v60);
  ActorSvtId = StringLiteral_24220/*"updateDeadEffect"*/;
  if ( StringLiteral_24220/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_24220/*"updateDeadEffect"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_24220/*"updateDeadEffect"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 7 )
    goto LABEL_85;
  v41->m_Items[7] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[7], v24, v34, v61);
  ActorSvtId = StringLiteral_22229/*"oncomplete"*/;
  if ( StringLiteral_22229/*"oncomplete"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_22229/*"oncomplete"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_22229/*"oncomplete"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 8 )
    goto LABEL_85;
  v41->m_Items[8] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[8], v24, v34, v62);
  ActorSvtId = StringLiteral_9831/*"OnFinishDead"*/;
  if ( StringLiteral_9831/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_9831/*"OnFinishDead"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_9831/*"OnFinishDead"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 9 )
    goto LABEL_85;
  v41->m_Items[9] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[9], v24, v34, v63);
  ActorSvtId = StringLiteral_23855/*"time"*/;
  if ( StringLiteral_23855/*"time"*/ )
  {
    ActorSvtId = sub_1BCB134(StringLiteral_23855/*"time"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_23855/*"time"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 0xA )
    goto LABEL_85;
  v41->m_Items[10] = (Il2CppObject *)v24;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[10], v24, v34, v64);
  v72 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v72, v65, v66, v67);
  v69 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1BCB134(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_86:
      v71 = sub_1BCB278(ActorSvtId);
      sub_1BCB120(v71, 0LL);
    }
  }
  if ( v41->max_length <= 0xB )
LABEL_85:
    sub_1BCB25C(ActorSvtId, v24, v34);
  v41->m_Items[11] = v69;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v41->m_Items[11], (int32_t)v69, v34, v68);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v70 = iTween__Hash(v41, 0LL);
  iTween__ValueTo(v39, v70, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v8; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v10; // x8
  System_Action_object__o *v11; // x21
  const MethodInfo *v12; // x5
  struct BattleServantData_o *v13; // x8
  BattlePerformance_o *v14; // x20

  if ( (byte_4B1F65F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_DropInfo__TypeInfo, isSilent);
    sub_1BCAFF8(&Method_BattleActorControl__StartDropItem_b__278_0__, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B1F65F = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_19;
  if ( battleSvtData->fields.IsAlreadyDrop )
    return;
  if ( !battleSvtData->fields.isWithdraw )
  {
    battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
    if ( ((unsigned __int8)battleSvtData & 1) == 0 )
    {
      v8 = this->fields.battleSvtData;
      if ( !v8 )
        goto LABEL_19;
      battleSvtData = (BattleServantData_o *)v8->fields.deckSvt;
      if ( !battleSvtData )
        goto LABEL_19;
      battleSvtData = (BattleServantData_o *)BattleDeckServantData__getIsForceDropItem(
                                               (BattleDeckServantData_o *)battleSvtData,
                                               0LL);
      if ( ((unsigned __int8)battleSvtData & 1) == 0 )
        return;
    }
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_19;
  battleSvtData = (BattleServantData_o *)performance->fields.data;
  if ( !battleSvtData )
    goto LABEL_19;
  BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
  v10 = this->fields.battleSvtData;
  if ( v10 )
    v10->fields.IsAlreadyDrop = 1;
  v11 = (System_Action_object__o *)sub_1BCB244(System_Action_DropInfo__TypeInfo);
  System_Action_object____ctor(v11, (Il2CppObject *)this, Method_BattleActorControl__StartDropItem_b__278_0__, 0LL);
  v13 = this->fields.battleSvtData;
  if ( !v13 )
    goto LABEL_19;
  BattleActorControl__GenerateDropObjects(this, 0, 0LL, (System_Action_DropInfo__o *)v11, v13->fields.droplist, v12);
  if ( isSilent )
    return;
  v14 = this->fields.performance;
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v14 )
LABEL_19:
    sub_1BCB254(battleSvtData, isSilent);
  BattlePerformance__ShowAll(
    v14,
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
  UnityEngine_Transform_o *v13; // x20
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4

  if ( this->fields.Shaking )
  {
    v3 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.x * -0.5, this->fields.ShakeRange.fields.x * 0.5, 0LL);
    v4 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.y * -0.5, this->fields.ShakeRange.fields.y * 0.5, 0LL);
    v6 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.z * -0.5, this->fields.ShakeRange.fields.z * 0.5, 0LL);
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_11;
    v8 = v6;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
    if ( !actorObject )
      goto LABEL_11;
    v14.fields.x = v3;
    v14.fields.y = v4;
    v14.fields.z = v8;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)actorObject, v14, 0LL);
    ShakeTime = this->fields.ShakeTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0LL);
    ShakeTargetTime = this->fields.ShakeTargetTime;
    v12 = ShakeTime + deltaTime;
    this->fields.ShakeTime = v12;
    if ( v12 < ShakeTargetTime )
      return;
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_11;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
    v13 = (UnityEngine_Transform_o *)actorObject;
    if ( !byte_4B16191 )
    {
      actorObject = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v5);
      byte_4B16191 = 1;
    }
    if ( !v13 )
LABEL_11:
      sub_1BCB254(actorObject, v5);
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
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
  __int64 v11; // x2
  struct BattleServantData_o *v12; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v14; // x1

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_4B1F6C7 & 1) == 0 )
  {
    sub_1BCAFF8(&BuffList_TypeInfo, forceUpdate);
    sub_1BCAFF8(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BuffList_TYPE___TypeInfo, v6);
    byte_4B1F6C7 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( battleSvtData->fields.buffData )
  {
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    this = (BattleActorControl_o *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v8 = v4->fields.battleSvtData;
      if ( !v8 )
        goto LABEL_23;
      buffData = v8->fields.buffData;
      v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1BCB244(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_44896728(v10, v8, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_44696960(buffData, 100, v10, 1, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_1BCB0A0(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_23;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1BCB25C(this, this, v11);
      LODWORD(this->fields.noPlaymakerMotionActionDict) = 163;
      v12 = v4->fields.battleSvtData;
      if ( !v12 )
        goto LABEL_23;
      this = (BattleActorControl_o *)v12->fields.buffData;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_44668620(
                                       (BattleBuffData_o *)this,
                                       (BuffList_TYPE_array *)forceUpdate,
                                       0LL,
                                       0LL,
                                       0LL);
    }
    *(_QWORD *)&forceUpdate = this;
    if ( !this )
      goto LABEL_23;
    this = (BattleActorControl_o *)v4->fields.translucentActorVisualInfo;
    if ( !this )
      goto LABEL_23;
    if ( v3 || (*(_DWORD *)(forceUpdate + 24LL) != 0) != (LOBYTE(this->fields.m_CancellationTokenSource) != 0) )
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
        BattleActorControl__UpdateShadow(v4, v14);
        return;
      }
LABEL_23:
      sub_1BCB254(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateConditionBuffAfterAction(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v7; // x20
  unsigned __int64 v8; // x24
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v10; // x8
  BattleServantData_o *v11; // x21
  System_Int32_array *QuestIndividualities; // x0
  BuffAggregationArgs_c *v13; // x8
  BattlePerformance_o *v14; // x22
  System_Int32_array *v15; // x23

  v4 = this;
  if ( (byte_4B1F64E & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&BuffAggregationArgs_TypeInfo, actionData);
    byte_4B1F64E = 1;
  }
  if ( !actionData )
    goto LABEL_18;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0LL);
  if ( !this )
    goto LABEL_18;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, actionData, v5);
      performance = v4->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v7->fields.noPlaymakerMotionActionDict + v8),
                                       0LL);
      if ( this )
      {
        v10 = v4->fields.performance;
        if ( !v10 )
          break;
        v11 = (BattleServantData_o *)this;
        this = (BattleActorControl_o *)v10->fields.data;
        if ( !this )
          break;
        QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
        v13 = BuffAggregationArgs_TypeInfo;
        v14 = v4->fields.performance;
        v15 = QuestIndividualities;
        if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
          v13 = BuffAggregationArgs_TypeInfo;
        }
        BattleServantData__updateConditionsBuff(v11, v15, v14, v13->static_fields->EndMotionDisplaySet, 0LL);
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_18:
    sub_1BCB254(this, actionData);
  }
}


void __fastcall BattleActorControl__UpdateEachServantStatusUiByTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleActionData_o *actiondata; // x0
  __int64 v6; // x2
  long double inited; // q0
  BattleActionData_o *v8; // x20
  _QWORD *v9; // x20
  __int64 v10; // x8
  __int64 v11; // x0
  int endcameraname; // w8
  unsigned int v13; // w23
  struct BattlePerformance_o *performance; // x8
  __int64 v15; // x22
  struct BattlePerformance_o *v16; // x8
  BattleServantData_o *v17; // x21
  __int64 v18; // x8
  int32_t Value; // w0
  __int64 v20; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v21; // 0:x0.8

  if ( (byte_4B1F69A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Empty_BattleActionData_BuffData___, method);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v3);
    sub_1BCAFF8(&Method_System_Nullable_int__get_Value__, v4);
    byte_4B1F69A = 1;
  }
  v20 = 0LL;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_30;
  actiondata = (BattleActionData_o *)BattleActionData__getShiftServant(actiondata, 0LL);
  if ( !actiondata )
    goto LABEL_30;
  if ( !BYTE2(actiondata->fields.motionId) )
  {
    BYTE2(actiondata->fields.motionId) = 1;
    if ( !this->fields.actiondata )
      goto LABEL_30;
    actiondata = (BattleActionData_o *)BattleActionData__getBuffList(
                                         this->fields.actiondata,
                                         actiondata->fields.state,
                                         0LL);
    v8 = actiondata;
    if ( !actiondata )
    {
      v9 = Method_System_Array_Empty_BattleActionData_BuffData___;
      v10 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData___ + 7);
      if ( !v10 )
      {
        sub_1C1B4B8(Method_System_Array_Empty_BattleActionData_BuffData___);
        v10 = v9[7];
      }
      v11 = *(_QWORD *)(v10 + 16);
      if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
        v11 = sub_1C1B45C(inited);
      if ( !*(_DWORD *)(v11 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v11);
      actiondata = *(BattleActionData_o **)(v9[7] + 16LL);
      if ( (actiondata->fields._FirstAtkMainTargetId_k__BackingField & 0x100) == 0 )
        actiondata = (BattleActionData_o *)sub_1C1B45C(inited);
      v8 = *(BattleActionData_o **)actiondata->fields.userCommandCodeId;
      if ( !v8 )
        goto LABEL_30;
    }
    endcameraname = (int)v8->fields.endcameraname;
    if ( endcameraname >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= endcameraname )
          sub_1BCB25C(actiondata, method, v6);
        performance = this->fields.performance;
        if ( !performance )
          break;
        v15 = *((_QWORD *)&v8->fields.actorId + (int)v13);
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
          v18 = *(_QWORD *)(v15 + 92);
          v20 = v18;
          if ( (_BYTE)v18 )
          {
            v21 = (System_Nullable_int__o)&v20;
            v20 = v18;
            Value = System_Nullable_int___get_Value(
                      v21,
                      (const MethodInfo_37D8E40 *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v17, Value, v17->fields.maxtpturn, 0LL);
          }
          BattleServantData__updateHp(v17, 0LL);
          BattleServantData__updateBuff(v17, 1, 1, 0LL);
        }
        endcameraname = (int)v8->fields.endcameraname;
        if ( (int)++v13 >= endcameraname )
          return;
      }
LABEL_30:
      sub_1BCB254(actiondata, method);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_object_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_300AC18 *method)
{
  long double inited; // q0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppClass *_3_BattleActorControl___c__329_T; // x0
  Il2CppClass *v14; // x0
  System_Func_object__bool__o *v15; // x22
  Il2CppClass *v16; // x0
  const MethodInfo_300AC18_RGCTXs *rgctx_data; // x8
  __int64 v18; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v20; // x23
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  long double v23; // q0
  Il2CppClass *v24; // x0
  Il2CppClass *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  __int64 v27; // x1
  long double v28; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v32; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x19
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  long double v42; // q0
  Il2CppClass *_8_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  UnityEngine_Renderer_o *v48; // x0
  __int64 v49; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  long double v51; // q0
  Il2CppClass *v52; // x0
  Il2CppClass *v53; // x0
  System_Func_object__bool__o *v54; // x23
  Il2CppClass *v55; // x0
  Il2CppClass *v56; // x0
  Il2CppObject *v57; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  long double v60; // q0
  Il2CppClass *v61; // x0
  Il2CppClass *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  __int64 v64; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x22
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x0
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0

  if ( method->rgctx_data
    || (sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_Material___, rendererEnumerable),
        sub_1BCAFF8(&System_Func_Material__bool__TypeInfo, v8),
        sub_1BCAFF8(&System_IDisposable_TypeInfo, v9),
        sub_1BCAFF8(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v10),
        sub_1BCAFF8(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v11),
        sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v12),
        method->rgctx_data) )
  {
    if ( !rendererEnumerable )
      return;
  }
  else
  {
    sub_1C1B4B8(method);
    if ( !rendererEnumerable )
      return;
  }
  _3_BattleActorControl___c__329_T = method->rgctx_data->_3_BattleActorControl___c__329_T_;
  if ( (BYTE5(_3_BattleActorControl___c__329_T->vtable[0].methodPtr) & 1) == 0 )
    _3_BattleActorControl___c__329_T = (Il2CppClass *)sub_1C1B45C(inited);
  if ( !_3_BattleActorControl___c__329_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_3_BattleActorControl___c__329_T);
  v14 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
  if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
    v14 = (Il2CppClass *)sub_1C1B45C(inited);
  v15 = (System_Func_object__bool__o *)*((_QWORD *)v14->static_fields + 1);
  if ( !v15 )
  {
    v16 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
    if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
      v16 = (Il2CppClass *)sub_1C1B45C(inited);
    if ( !v16->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v16);
    rgctx_data = method->rgctx_data;
    v18 = (__int64)rgctx_data->_3_BattleActorControl___c__329_T_;
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    {
      v18 = sub_1C1B45C(inited);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)rgctx_data->_2_System_Func_T__bool_;
    v20 = **(Il2CppObject ***)(v18 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C1B45C(inited);
    v15 = (System_Func_object__bool__o *)sub_1BCB244(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v15,
      v20,
      (intptr_t)method->rgctx_data->_4_BattleActorControl___c__329_T___UpdateMaterialsOnRenderders_b__329_0,
      (const MethodInfo_3557AE8 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v24 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C1B45C(v23);
    *((_QWORD *)v24->static_fields + 1) = v15;
    v25 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
    if ( (BYTE5(v25->vtable[0].methodPtr) & 1) == 0 )
      v25 = (Il2CppClass *)sub_1C1B45C(v23);
    sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v25->static_fields + 8), (int32_t)v15, v21, v22);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)rendererEnumerable,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_305DC88 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
  if ( !v26 )
    sub_1BCB254(0LL, v27);
  v29 = v26;
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C1B45C(v28);
  klass = v29->klass;
  v32 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v32;
      p_offset += 4;
      if ( !v32 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1C1B560(v29, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  v37 = v35;
  while ( 1 )
  {
    if ( !v37 )
      sub_1BCB254(v35, v36);
    v38 = *(_QWORD *)v37;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_39;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_39:
      v41 = sub_1C1B560(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8)) & 1) == 0 )
      break;
    _8_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_8_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _8_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C1B45C(v42);
    v44 = *(_QWORD *)v37;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((Il2CppClass **)v46 - 1) != _8_System_Collections_Generic_IEnumerator_T )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_48;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_48:
      v47 = sub_1C1B560(v37, _8_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v48 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
    if ( !v48 )
      sub_1BCB254(0LL, v49);
    materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v48, 0LL);
    v52 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
    if ( (BYTE5(v52->vtable[0].methodPtr) & 1) == 0 )
      v52 = (Il2CppClass *)sub_1C1B45C(v51);
    if ( !v52->_2.cctor_finished )
      v51 = j_il2cpp_runtime_class_init_0(v52);
    v53 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
    if ( (BYTE5(v53->vtable[0].methodPtr) & 1) == 0 )
      v53 = (Il2CppClass *)sub_1C1B45C(v51);
    v54 = (System_Func_object__bool__o *)*((_QWORD *)v53->static_fields + 2);
    if ( !v54 )
    {
      v55 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
      if ( (BYTE5(v55->vtable[0].methodPtr) & 1) == 0 )
        v55 = (Il2CppClass *)sub_1C1B45C(v51);
      if ( !v55->_2.cctor_finished )
        v51 = j_il2cpp_runtime_class_init_0(v55);
      v56 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
      if ( (BYTE5(v56->vtable[0].methodPtr) & 1) == 0 )
        v56 = (Il2CppClass *)sub_1C1B45C(v51);
      v57 = *(Il2CppObject **)v56->static_fields;
      v54 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_Material__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v54,
        v57,
        (intptr_t)method->rgctx_data->_11_BattleActorControl___c__329_T___UpdateMaterialsOnRenderders_b__329_1,
        0LL);
      v61 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
      if ( (BYTE5(v61->vtable[0].methodPtr) & 1) == 0 )
        v61 = (Il2CppClass *)sub_1C1B45C(v60);
      *((_QWORD *)v61->static_fields + 2) = v54;
      v62 = method->rgctx_data->_3_BattleActorControl___c__329_T_;
      if ( (BYTE5(v62->vtable[0].methodPtr) & 1) == 0 )
        v62 = (Il2CppClass *)sub_1C1B45C(v60);
      sub_1BCAF9C((CGThumbnailListItem_o *)((char *)v62->static_fields + 16), (int32_t)v54, v58, v59);
    }
    v63 = System_Linq_Enumerable__Where_object_(
            materials,
            (System_Func_TSource__bool__o *)v54,
            (const MethodInfo_305DC88 *)Method_System_Linq_Enumerable_Where_Material___);
    v65 = v63;
    if ( !v63 )
      sub_1BCB254(0LL, v64);
    v66 = v63->klass;
    v67 = *(unsigned __int16 *)(&v63->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v63->klass->_2.bitflags2 + 3) )
    {
      v68 = &v66->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_Material__c **)v68 - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
      {
        --v67;
        v68 += 4;
        if ( !v67 )
          goto LABEL_74;
      }
      v69 = (__int64)&v66->vtable[*v68].method;
    }
    else
    {
LABEL_74:
      v69 = sub_1C1B560(v63, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
    }
    v71 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v69)(
            v65,
            *(_QWORD *)(v69 + 8));
    if ( !v71 )
      sub_1BCB254(0LL, v70);
    while ( 1 )
    {
      v72 = *(_QWORD *)v71;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
      {
        v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v74 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_81;
        }
        v75 = v72 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_81:
        v75 = sub_1C1B560(v71, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8)) & 1) == 0 )
        break;
      v76 = *(_QWORD *)v71;
      v77 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
      {
        v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_Material__c **)v78 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
        {
          --v77;
          v78 += 4;
          if ( !v77 )
            goto LABEL_88;
        }
        v79 = v76 + 16LL * *v78 + 312;
      }
      else
      {
LABEL_88:
        v79 = sub_1C1B560(v71, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
      }
      v80 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v71, *(_QWORD *)(v79 + 8));
      if ( !updateFunc )
        sub_1BCB254(v80, v80);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))updateFunc->fields.m_target)(
        updateFunc->fields.original_method_info,
        v80,
        *(_QWORD *)&updateFunc->fields.extra_arg);
    }
    v81 = *(_QWORD *)v71;
    v82 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
    {
      v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
      {
        --v82;
        v83 += 4;
        if ( !v82 )
          goto LABEL_96;
      }
      v84 = v81 + 16LL * *v83 + 312;
    }
    else
    {
LABEL_96:
      v84 = sub_1C1B560(v71, System_IDisposable_TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v71, *(_QWORD *)(v84 + 8));
  }
  v85 = *(_QWORD *)v37;
  v86 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
  {
    v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
    {
      --v86;
      v87 += 4;
      if ( !v86 )
        goto LABEL_105;
    }
    v88 = v85 + 16LL * *v87 + 312;
  }
  else
  {
LABEL_105:
    v88 = sub_1C1B560(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v88)(v37, *(_QWORD *)(v88 + 8));
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleServantData_o *battleSvtData; // x20
  UnityEngine_Component_o *IsHideShadow; // x0
  __int64 v7; // x1
  struct BattleServantData_o *v8; // x8
  _BOOL4 v9; // w22
  UnityEngine_Object_o *shadowObj; // x20
  bool v11; // w0
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleServantData_o *v13; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v15; // x8
  UnityEngine_Object_o *data; // x20
  int32_t ShadowImageId; // w0
  const MethodInfo *v18; // x2
  struct BattlePerformance_o *v19; // x8
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x2
  const MethodInfo *currentSpShadowEffectId; // x1
  Il2CppObject *Master_object; // x0
  UnityEngine_Object_o *v25; // x21
  BattleBgMaster_o *v26; // x20
  const MethodInfo *v27; // x2
  int32_t v28; // w21
  struct BattleServantData_o *v29; // x8
  int32_t BgShadowImageId; // w1
  int32_t BattleSize; // w0
  const MethodInfo *v32; // x2
  int32_t specialShadowEffectId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F627 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_BattleBgMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B1F627 = 1;
  }
  specialShadowEffectId = 0;
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (UnityEngine_Component_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_57;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v8 = this->fields.battleSvtData;
  if ( !v8 )
    goto LABEL_57;
  v9 = v8->fields.isHideShadow;
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL);
  if ( v9 )
  {
    if ( v11 )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !IsHideShadow )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsHideShadow, 0LL);
      if ( !IsHideShadow )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
    }
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.specialShadowObj;
      if ( IsHideShadow )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        return;
      }
LABEL_57:
      sub_1BCB254(IsHideShadow, v7);
    }
  }
  else
  {
    if ( v11 )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.battleSvtData;
      if ( !IsHideShadow )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)BattleServantData__isAlive((BattleServantData_o *)IsHideShadow, 0, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v13 = this->fields.battleSvtData;
        if ( !v13 )
          goto LABEL_57;
        if ( v13->fields.isEntry )
        {
          IsHideShadow = (UnityEngine_Component_o *)this->fields.shadowObj;
          if ( !IsHideShadow )
            goto LABEL_57;
          IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsHideShadow, 0LL);
          if ( !IsHideShadow )
            goto LABEL_57;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
        }
      }
    }
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
    if ( ((unsigned __int8)IsHideShadow & 1) == 0 )
      goto LABEL_60;
    v15 = this->fields.performance;
    if ( !v15 )
      goto LABEL_57;
    data = (UnityEngine_Object_o *)v15->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(data, 0LL, 0LL) )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.performance;
      if ( !IsHideShadow )
        goto LABEL_57;
      ShadowImageId = BattlePerformance__GetShadowImageId(
                        (BattlePerformance_o *)IsHideShadow,
                        this->fields.battleSvtData,
                        0LL);
      BattleActorControl__ChangeShadowTexture(this, ShadowImageId, v18);
      v19 = this->fields.performance;
      if ( !v19 )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)v19->fields.data;
      if ( !IsHideShadow )
        goto LABEL_57;
      GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
      BattleActorControl__SetShadowColor(this, GroundShadowColor, v20);
      IsHideShadow = (UnityEngine_Component_o *)this->fields.performance;
      if ( !IsHideShadow )
        goto LABEL_57;
      if ( BattlePerformance__TryGetSpecialShadowEffectId(
             (BattlePerformance_o *)IsHideShadow,
             this->fields.battleSvtData,
             &specialShadowEffectId,
             0LL) )
      {
        currentSpShadowEffectId = (const MethodInfo *)(unsigned int)this->fields.currentSpShadowEffectId;
        if ( (_DWORD)currentSpShadowEffectId != specialShadowEffectId )
        {
          this->fields.currentSpShadowEffectId = specialShadowEffectId;
          BattleActorControl__DestroySpShadowObj(this, currentSpShadowEffectId);
          LODWORD(currentSpShadowEffectId) = specialShadowEffectId;
        }
        BattleActorControl__changeSpecialShadow(this, (int32_t)currentSpShadowEffectId, v22);
      }
      else
      {
        BattleActorControl__DestroySpShadowObj(this, v21);
      }
    }
    else
    {
LABEL_60:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_BattleBgMaster___);
      v25 = (UnityEngine_Object_o *)this->fields.performance;
      v26 = (BattleBgMaster_o *)Master_object;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        IsHideShadow = (UnityEngine_Component_o *)this->fields.performance;
        if ( !IsHideShadow )
          goto LABEL_57;
        IsHideShadow = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(
                                                    (BattlePerformance_o *)IsHideShadow,
                                                    0LL);
        if ( !this->fields.performance )
          goto LABEL_57;
        v28 = (int)IsHideShadow;
        IsHideShadow = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundType(
                                                    this->fields.performance,
                                                    0LL);
        v29 = this->fields.battleSvtData;
        if ( !v29 || !v26 )
          goto LABEL_57;
        BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v26, v28, (int32_t)IsHideShadow, v29->fields.isEnemy, 0LL);
      }
      else
      {
        if ( !v26 )
          goto LABEL_57;
        BgShadowImageId = v26->fields.DefaultBgShadowImageId;
      }
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v27);
    }
    IsHideShadow = (UnityEngine_Component_o *)this->fields.battleSvtData;
    if ( !IsHideShadow )
      goto LABEL_57;
    BattleSize = BattleServantData__get_BattleSize((BattleServantData_o *)IsHideShadow, 0LL);
    BattleActorControl__SetShadowSize(this, BattleSize, v32);
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
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1F667 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, eventName);
    byte_4B1F667 = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1BCB254(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
         (Il2CppObject *)eventName,
         &value,
         (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1F678 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__WaitToNoblePhantasmPlay_d__308_TypeInfo, method);
    byte_4B1F678 = 1;
  }
  v3 = sub_1BCB244(BattleActorControl__WaitToNoblePhantasmPlay_d__308_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__308___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__253_0(
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
  if ( (byte_4B1F6D6 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, playedSoundId);
    byte_4B1F6D6 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_9;
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_9;
  data = performance->fields.data;
  v9 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v8 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v9;
  *(_QWORD *)&v10.fields.fakeValue = v8;
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v10, 0LL);
  if ( !data )
LABEL_9:
    sub_1BCB254(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__163_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl___IsHideShadow_b__416_0(
        BattleActorControl_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattleServantData_o *battleSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4B1F6DA & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(
                                     &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                     *(_QWORD *)&svtId);
    byte_4B1F6DA = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(this, *(_QWORD *)&svtId);
  v7 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL) == svtId;
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__307_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__309_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0
  const MethodInfo *v5; // x3
  struct System_Action_o *noblePhantasmCallback; // x8

  if ( (byte_4B1F6D9 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleFBXComponent_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6368/*"FINISHED"*/, v3);
    byte_4B1F6D9 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  noblePhantasmCallback = this->fields.noblePhantasmCallback;
  if ( !noblePhantasmCallback )
  {
    BattleActorControl__sendEventFSM_46076216(this, (System_String_o *)StringLiteral_6368/*"FINISHED"*/, 0, v5);
    return;
  }
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    noblePhantasmCallback = this->fields.noblePhantasmCallback;
    BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
    if ( noblePhantasmCallback )
      goto LABEL_9;
LABEL_10:
    sub_1BCB254(performance, method);
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
LABEL_9:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
    noblePhantasmCallback->fields.original_method_info,
    *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
}


void __fastcall BattleActorControl___StartDropItem_b__278_0(
        BattleActorControl_o *this,
        DropInfo_o *dInfo,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_1BCB254(this, dInfo);
  BattleData__addDropItems((BattleData_o *)this, dInfo, 0LL);
}


void __fastcall BattleActorControl___finishMotion_b__242_0(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4B1F6D4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_GC_TypeInfo, method);
    byte_4B1F6D4 = 1;
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
  BattleActorControl___finishMotion_g__Finish_242_1(this, v3);
}


void __fastcall BattleActorControl___finishMotion_g__Finish_242_1(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4B1F6D5 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F6D5 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      sub_1BCB254(MotionSkip, v4);
    }
    BattlePerformance__finishMotion(MotionSkip, this, 0LL);
  }
}


void __fastcall BattleActorControl___startNoblePhantasm_b__305_0(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  BattleActorControl_o *v12; // x20
  VisibleControlInfo_o *v13; // x21
  const MethodInfo *v14; // x3
  struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  __int128 v18; // [xsp+0h] [xbp-60h] BYREF
  __int128 v19; // [xsp+10h] [xbp-50h]

  if ( (byte_4B1F6D7 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___Dispose__,
      method);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___MoveNext__,
      v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___get_Current__,
      v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Clear__, v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___GetEnumerator__,
      v6);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v7);
    byte_4B1F6D7 = 1;
  }
  v18 = 0u;
  v19 = 0u;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_13;
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_366C818 *)Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)&v18,
           (const MethodInfo_342FA98 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___MoveNext__);
    if ( !v9 )
      break;
    v12 = (BattleActorControl_o *)*((_QWORD *)&v19 + 1);
    if ( !*((_QWORD *)&v19 + 1) )
      sub_1BCB254(v9, v10);
    v13 = (VisibleControlInfo_o *)v19;
    BattleActorControl__playAnimation_46091064(
      *((BattleActorControl_o **)&v19 + 1),
      (System_String_o *)StringLiteral_24501/*"wait"*/,
      0,
      v11);
    BattleActorControl__ProcServantObjectVisibleCtr(v12, 1, v13, v14);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (const MethodInfo_342FA94 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___Dispose__);
  v15 = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !v15 )
LABEL_13:
    sub_1BCB254(noblePhantasmObjectVisibleCtrList, method);
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__305_1(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4B1F6D8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, method);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v4);
    sub_1BCAFF8(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v5);
    byte_4B1F6D8 = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_12;
  v9 = Instance;
  v11 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v21.fields.currentCryptoKey = v11;
  *(_QWORD *)&v21.fields.fakeValue = v10;
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v21, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_12;
  v12 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !Instance )
    goto LABEL_12;
  v13 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_12;
  m_CachedPtr = v13->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0LL);
  v15 = this->fields.battleSvtData;
  if ( !v15
    || (overwriteSvtVoiceId = v15->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v15->fields.treasuredvcLevel,
        v18 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v20 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1BCB244(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v20,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v9) )
  {
LABEL_12:
    sub_1BCB254(Instance, v7);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  __int64 buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v17; // x8
  int v18; // w10
  BattleEffectUtility_BuffEffectLoadArgument_o *v19; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v21; // w22
  UnityEngine_GameObject_o *v22; // x23
  UnityEngine_GameObject_o *v23; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v29; // x1
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  UnityEngine_Transform_o *v32; // x22
  UnityEngine_Transform_o *v33; // x22
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
  struct UnityEngine_Vector3_StaticFields *v46; // x8
  float v47; // s8
  float v48; // s9
  float v49; // s10
  float v50; // s0
  float v51; // s1
  float v52; // s2
  struct BattleServantData_o *v53; // x8
  float v54; // s10
  float v55; // s8
  float v56; // s9
  bool v57; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v60; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F6BE & 1) == 0 )
  {
    sub_1BCAFF8(&BattleEffectUtility_TypeInfo, buffEntity);
    sub_1BCAFF8(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ConstantStrMaster___, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_7185/*"HIDE_STATUS_EFFECT_IDS"*/, v13);
    byte_4B1F6BE = 1;
  }
  entity = 0LL;
  if ( !buffEntity )
    return;
  effectId = (const MethodInfo *)(unsigned int)buffEntity->fields.effectId;
  if ( (int)effectId < 1 )
    return;
  buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         (int32_t)effectId,
         (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffLoopEffectDict,
                                  (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7185/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v17 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v17 < 1 )
  {
LABEL_15:
    v19 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1BCB244(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v19, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21 = buffEntity->fields.effectId;
    v22 = gameObject;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4B16191 )
    {
      sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, effectId);
      byte_4B16191 = 1;
    }
    buffLoopEffectDict = (__int64)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v29);
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v59.fields.x = x;
      v59.fields.y = y;
      v59.fields.z = z;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v22,
                                               v21,
                                               v23,
                                               v59,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v19,
                                               0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      buffLoopEffectDict = UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
      if ( (buffLoopEffectDict & 1) == 0 )
        return;
      if ( EffectToNode )
      {
        buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)EffectToNode,
                                        0LL);
        v32 = (UnityEngine_Transform_o *)buffLoopEffectDict;
        if ( !byte_4B16191 )
        {
          buffLoopEffectDict = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, effectId);
          byte_4B16191 = 1;
        }
        if ( v32 )
        {
          UnityEngine_Transform__set_localPosition(v32, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)EffectToNode,
                                          0LL);
          v33 = (UnityEngine_Transform_o *)buffLoopEffectDict;
          if ( !byte_4B16197 )
          {
            buffLoopEffectDict = sub_1BCAFF8(&UnityEngine_Quaternion_TypeInfo, effectId);
            byte_4B16197 = 1;
          }
          if ( v33 )
          {
            UnityEngine_Transform__set_localRotation(
              v33,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)buffLoopEffectDict,
                                              (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( buffLoopEffectDict )
              {
                v34 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (__int64)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v35 = buffEntity->fields.effectId;
                v36 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
                v38 = BattleActorControl__getLimitCount(this, v37);
                buffLoopEffectDict = StatusEffectPosOverwriteMaster__TryGetEntity(v34, &entity, v35, v36, v38, 0LL);
                if ( (buffLoopEffectDict & 1) != 0 )
                {
                  battleSvtData = this->fields.battleSvtData;
                  if ( !battleSvtData )
                    goto LABEL_53;
                  isEnemy = battleSvtData->fields.isEnemy;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)EffectToNode,
                                                  0LL);
                  if ( !this->fields.actorObject )
                    goto LABEL_53;
                  v41 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_53;
                  nodeName = entity->fields.nodeName;
                  v43 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v44 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v43, nodeName, v44, 1, 0LL);
                  if ( !byte_4B16191 )
                  {
                    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, effectId);
                    byte_4B16191 = 1;
                  }
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  v46 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v48 = v46->zeroVector.fields.y;
                  v47 = v46->zeroVector.fields.z;
                  v49 = v46->zeroVector.fields.x;
                  *(UnityEngine_Vector3_o *)&v50 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v41 )
                    goto LABEL_53;
                  v60.fields.z = v47 + v52;
                  v60.fields.y = v48 + v51;
                  v60.fields.x = v49 + v50;
                  UnityEngine_Transform__set_localPosition(v41, v60, 0LL);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  Rotation.fields.x = Rotation.fields.x * 0.017453;
                  Rotation.fields.y = Rotation.fields.y * 0.017453;
                  Rotation.fields.z = Rotation.fields.z * 0.017453;
                  v65 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v41, v65, 0LL);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v41, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v41, NodeFromLvName, 0LL);
                }
              }
              v53 = this->fields.battleSvtData;
              if ( !v53 )
                goto LABEL_53;
              if ( v53->fields.isEnemy )
              {
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, 0LL);
                v54 = localScale.fields.x;
                v55 = localScale.fields.y;
                v56 = localScale.fields.z;
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v64.fields.x = -v54;
                v64.fields.y = v55;
                v64.fields.z = v56;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v64, 0LL);
              }
              buffLoopEffectDict = (__int64)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v57 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v57, 0LL);
                buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (Il2CppObject *)EffectToNode,
                    (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1BCB254(buffLoopEffectDict, effectId);
  }
  v18 = 0;
  while ( ValueArray->m_Items[v18 + 1] != buffEntity->fields.effectId )
  {
    if ( (_DWORD)v17 == ++v18 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCB254(0LL, method);
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
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4B1F680 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Renderer___, isNormal);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v5);
    byte_4B1F680 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialShadowObj, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, isNormal, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_1BCB254(Component_object, v8);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, !isNormal, 0LL);
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
  UnityEngine_Component_o *Component_object; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v17; // w21
  System_Action_o *v18; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_4B1F67F & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, *(_QWORD *)&shadowEffectId);
    sub_1BCAFF8(&BattleEffectUtility_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Renderer___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass316_0__changeSpecialShadow_b__0__, v8);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass316_0_TypeInfo, v9);
    byte_4B1F67F = 1;
  }
  v10 = sub_1BCB244(BattleActorControl___c__DisplayClass316_0_TypeInfo);
  BattleActorControl___c__DisplayClass316_0___ctor((BattleActorControl___c__DisplayClass316_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_DWORD *)(v10 + 24) = shadowEffectId;
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_object )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, 0, 0LL);
          v17 = *(_DWORD *)(v10 + 24);
          v18 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v10,
            Method_BattleActorControl___c__DisplayClass316_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__LoadEffectAssetIfNotYet(v17, v18, performance, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1BCB254(Component_object, v12);
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
    sub_1BCB254(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4B1F69C & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BattleActorControl_endChangeAppearance__, v3);
    byte_4B1F69C = 1;
  }
  performance = this->fields.performance;
  v5 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_1BCB254(v6, v7);
  BattlePerformance__checkChangeAppearance(performance, v5, 0LL);
}


bool __fastcall BattleActorControl__checkGEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8
  __int64 actindex; // x9
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v7; // x20
  bool v8; // w21
  int v9; // w22
  System_String_o *EventName; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_12;
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_13;
  this = (BattleActorControl_o *)motionFSM->m_Items[actindex];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(this, name);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  v8 = m_CancellationTokenSource > 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)m_CancellationTokenSource )
    {
      this = (BattleActorControl_o *)*((_QWORD *)&v7->fields.noPlaymakerMotionActionDict + v9);
      if ( !this )
        goto LABEL_12;
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0LL);
      this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
        v8 = ++v9 < m_CancellationTokenSource;
        if ( v9 < m_CancellationTokenSource )
          continue;
      }
      return v8;
    }
LABEL_13:
    sub_1BCB25C(this, name, method);
  }
  return v8;
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
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v6; // x20
  bool v7; // w21
  int v8; // w22
  System_String_o *EventName; // x0

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_12;
  if ( !motionFSM->max_length )
    goto LABEL_13;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0LL)) == 0LL )
  {
LABEL_12:
    sub_1BCB254(this, name);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = this;
  v7 = m_CancellationTokenSource > 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)m_CancellationTokenSource )
    {
      this = (BattleActorControl_o *)*((_QWORD *)&v6->fields.noPlaymakerMotionActionDict + v8);
      if ( !this )
        goto LABEL_12;
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0LL);
      this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        m_CancellationTokenSource = (int)v6->fields.m_CancellationTokenSource;
        v7 = ++v8 < m_CancellationTokenSource;
        if ( v8 < m_CancellationTokenSource )
          continue;
      }
      return v7;
    }
LABEL_13:
    sub_1BCB25C(this, name, method);
  }
  return v7;
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
    sub_1BCB254(0LL, key);
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

  if ( (byte_4B1F63D & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_23615/*"summon"*/, method);
    byte_4B1F63D = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_23615/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_1BCB254(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_70096296(0, 1000, 0LL) < StepRate;
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

  if ( (byte_4B1F64F & 1) == 0 )
  {
    sub_1BCAFF8(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_4B1F64F = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_46087196(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_46087196(
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
  int32_t v16; // w22
  const MethodInfo *v17; // x1
  struct BattleServantData_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w23

  if ( (byte_4B1F650 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_4B1F650 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    svtId = myShiftData->fields.svtId;
    limit = myShiftData->fields.limit;
    overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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
      sub_1BCB254(battleSvtData, voiceTypeId);
    }
    v19 = (int)battleSvtData;
    v20 = v18->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1F6AB & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__coAddAura_d__379_TypeInfo, *(_QWORD *)&auraEffectId);
    byte_4B1F6AB = 1;
  }
  v7 = sub_1BCB244(BattleActorControl__coAddAura_d__379_TypeInfo);
  BattleActorControl__coAddAura_d__379___ctor((BattleActorControl__coAddAura_d__379_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1F6AF & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__colShiftServant_d__386_TypeInfo, shiftSvt);
    byte_4B1F6AF = 1;
  }
  v9 = sub_1BCB244(BattleActorControl__colShiftServant_d__386_TypeInfo);
  BattleActorControl__colShiftServant_d__386___ctor((BattleActorControl__colShiftServant_d__386_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1BCB254(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 40), (int32_t)shiftSvt, v14, v15);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v9 + 56), (int32_t)finishCallback, v16, v17);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4B1F6B1 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__colShiftServantChange_d__388_TypeInfo, shiftSvt);
    byte_4B1F6B1 = 1;
  }
  v7 = sub_1BCB244(BattleActorControl__colShiftServantChange_d__388_TypeInfo);
  BattleActorControl__colShiftServantChange_d__388___ctor(
    (BattleActorControl__colShiftServantChange_d__388_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1BCB254(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = shiftSvt;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)shiftSvt, v12, v13);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1F6A0 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__collChangeAppearance_d__365_TypeInfo, method);
    byte_4B1F6A0 = 1;
  }
  v3 = sub_1BCB244(BattleActorControl__collChangeAppearance_d__365_TypeInfo);
  BattleActorControl__collChangeAppearance_d__365___ctor(
    (BattleActorControl__collChangeAppearance_d__365_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B1F69B & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__colloadDressServant_d__360_TypeInfo, flg);
    byte_4B1F69B = 1;
  }
  v5 = sub_1BCB244(BattleActorControl__colloadDressServant_d__360_TypeInfo);
  BattleActorControl__colloadDressServant_d__360___ctor((BattleActorControl__colloadDressServant_d__360_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B1F699 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__colloadTransformServant_d__357_TypeInfo, method);
    byte_4B1F699 = 1;
  }
  v3 = sub_1BCB244(BattleActorControl__colloadTransformServant_d__357_TypeInfo);
  BattleActorControl__colloadTransformServant_d__357___ctor(
    (BattleActorControl__colloadTransformServant_d__357_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4B1F64A & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__coroutinePostCallBack_d__243_TypeInfo, callBack);
    byte_4B1F64A = 1;
  }
  v6 = sub_1BCB244(BattleActorControl__coroutinePostCallBack_d__243_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__243___ctor(
    (BattleActorControl__coroutinePostCallBack_d__243_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1BCB254(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v6 + 40), (int32_t)callBack, v9, v10);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B1F69F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_5398/*"END_LOAD"*/, method);
    byte_4B1F69F = 1;
  }
  BattleActorControl__sendEventFSM_46076216(this, (System_String_o *)StringLiteral_5398/*"END_LOAD"*/, 0, v2);
}


void __fastcall BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleActionData_o *actiondata; // x1
  const MethodInfo *v5; // x2
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v8; // x2
  struct BattleActionData_o *v9; // x8
  struct BattleServantData_o *v10; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *v12; // x8
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B1F64B & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8672/*"MOTION_BACK"*/, method);
    byte_4B1F64B = 1;
  }
  actiondata = this->fields.actiondata;
  if ( actiondata && actiondata->fields._IsUpdateBuffAfterAction_k__BackingField )
  {
    BattleActorControl__UpdateConditionBuffAfterAction(this, actiondata, v2);
    BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v5);
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v8);
  v9 = this->fields.actiondata;
  if ( !v9 )
    goto LABEL_30;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsExecOverwriteTreasureDevice(
                                           battleSvtData,
                                           v9->fields.treasureDvcId,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_30;
    BattleServantData__ResetOverwriteTreasureDevice(battleSvtData, 0LL);
  }
  v10 = this->fields.battleSvtData;
  if ( !v10 )
    goto LABEL_30;
  isEnemy = v10->fields.isEnemy;
  v12 = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !v12 )
      goto LABEL_30;
    if ( v12->fields.treasureDvcId >= 1 )
    {
      BattleActorControl__ActiveRemainReservedBuffEffect(this, (const MethodInfo *)actiondata);
      BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_30;
      BattleServantData__updateTDGauge(battleSvtData, 0LL);
      goto LABEL_21;
    }
  }
  else if ( !v12 )
  {
    goto LABEL_30;
  }
  if ( System_String__op_Equality(v12->fields.motionname, (System_String_o *)StringLiteral_8672/*"MOTION_BACK"*/, 0LL) )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, (const MethodInfo *)actiondata);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v14);
  }
LABEL_21:
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_30;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, 0LL) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_30;
    if ( !BattleServantData__isDeadStand(battleSvtData, 0LL) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_30;
      if ( !BattleServantData__isDeadWait(battleSvtData, 0LL) )
        BattleActorControl__invisibleSvtModel(this, 1, v15);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_30:
    sub_1BCB254(battleSvtData, actiondata);
  BattlePerformance__EndActionDataFromAnyMotion((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_46076216(this, call, 0, v3);
}


void __fastcall BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *transform; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  int v8; // w8
  _DWORD *v9; // x19
  unsigned int v10; // w21
  char *v11; // x8
  UnityEngine_Component_o *v12; // x20
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w24
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v17; // 0:x0.8

  if ( (byte_4B1F6B2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___, method);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v3);
    sub_1BCAFF8(&StringLiteral_18687/*"ef_pig_return01"*/, v4);
    byte_4B1F6B2 = 1;
  }
  m_ParticleSystem = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_object__50405148(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_3011F1C *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_1BCB254(transform, v6);
  }
  v8 = *((_DWORD *)transform + 6);
  v9 = transform;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        goto LABEL_21;
      v11 = (char *)&v9[2 * v10];
      v12 = (UnityEngine_Component_o *)*((_QWORD *)v11 + 4);
      if ( !v12 )
        goto LABEL_20;
      transform = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v11 + 4), 0LL);
      if ( !transform )
        goto LABEL_20;
      transform = (void *)System_String__Contains(
                            (System_String_o *)transform,
                            (System_String_o *)StringLiteral_18687/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_object__50405148(
                      v12,
                      (const MethodInfo_3011F1C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !transform )
          goto LABEL_20;
        v13 = *((_DWORD *)transform + 6);
        v14 = transform;
        if ( v13 >= 1 )
          break;
      }
LABEL_18:
      v8 = v9[6];
      if ( (int)++v10 >= v8 )
        return;
    }
    v15 = 0;
    while ( v15 < v13 )
    {
      transform = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !transform )
        goto LABEL_20;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)transform, 0LL).fields.m_ParticleSystem;
      v17.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v17, 0, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_18;
    }
LABEL_21:
    sub_1BCB25C(transform, v6, v7);
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
    BattleActorControl__finishMotion_46084992(this, v7);
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
    sub_1BCB254(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_46084992(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct PlayMakerFSM_o **p_beforeWeaponFsm; // x20
  UnityEngine_Object_o *beforeWeaponFsm; // x21
  const MethodInfo *v8; // x1
  UnityEngine_Component_o *v9; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleActionData_o *actiondata; // x8
  Il2CppObject *Instance; // x20
  AssetManager_ResourceUnloadEventHandler_o *v15; // x21

  if ( (byte_4B1F649 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl__finishMotion_b__242_0__, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v4);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    byte_4B1F649 = 1;
  }
  p_beforeWeaponFsm = &this->fields.beforeWeaponFsm;
  beforeWeaponFsm = (UnityEngine_Object_o *)this->fields.beforeWeaponFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(beforeWeaponFsm, 0LL, 0LL) )
  {
    v9 = (UnityEngine_Component_o *)*p_beforeWeaponFsm;
    if ( !*p_beforeWeaponFsm )
      goto LABEL_15;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v9, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_70136264(gameObject, 0LL);
    *p_beforeWeaponFsm = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.beforeWeaponFsm, 0, v11, v12);
  }
  actiondata = this->fields.actiondata;
  if ( actiondata && actiondata->fields.isReleaseMemoryWhenFinished )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v15 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1BCB244(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v15,
      (Il2CppObject *)this,
      Method_BattleActorControl__finishMotion_b__242_0__,
      0LL);
    if ( Instance )
    {
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, v15, 0LL);
      return;
    }
LABEL_15:
    sub_1BCB254(v9, v8);
  }
  BattleActorControl___finishMotion_g__Finish_242_1(this, v8);
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffect(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  BattleServantData_o *v6; // x8
  int32_t index; // w20
  int32_t DispLimitCount; // w21

  if ( (byte_4B1F61F & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, name);
    byte_4B1F61F = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL) )
  {
    sub_1BCB254(battleSvtData, name);
  }
  index = v6->fields.index;
  DispLimitCount = BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__LoadNoblePhantasmEffect(index, DispLimitCount, name, 0LL);
}


UnityEngine_GameObject_o *__fastcall BattleActorControl__getActorEffectFromActor(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t v6; // w21
  int32_t DispLimitCount; // w22
  const MethodInfo *v8; // x2
  int32_t WeaponGroup; // w20

  if ( (byte_4B1F620 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, name);
    byte_4B1F620 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData) )
  {
    sub_1BCB254(battleSvtData, name);
  }
  v6 = (int)battleSvtData;
  DispLimitCount = BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 0, v8);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__loadActorEffectFromActor(v6, DispLimitCount, WeaponGroup, name, 0LL);
}


int32_t __fastcall BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
  return BattleServantData__getActorSvtId(battleSvtData, 0LL);
}


UnityEngine_Vector3_o __fastcall BattleActorControl__getBaseScale(BattleActorControl_o *this, const MethodInfo *method)
{
  float actorScale; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4B16196 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B16196 = 1;
  }
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v5 = static_fields->oneVector.fields.x * actorScale;
  v6 = static_fields->oneVector.fields.y * actorScale;
  v7 = static_fields->oneVector.fields.z * actorScale;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
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
  UnityEngine_Object_o *dropPointComp; // x20
  __int64 v4; // x1
  BattleDropPointComponent_o *gameObject; // x0

  if ( (byte_4B1F646 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F646 = 1;
  }
  dropPointComp = (UnityEngine_Object_o *)this->fields.dropPointComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dropPointComp, 0LL, 0LL) )
  {
    gameObject = this->fields.dropPointComp;
    if ( gameObject )
      return BattleDropPointComponent__get_Transform(gameObject, 0LL);
LABEL_10:
    sub_1BCB254(gameObject, v4);
  }
  gameObject = (BattleDropPointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  return UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_WeaponData_o *Weapon; // x8
  int32_t EffectFolder_k__BackingField; // w1
  BattleServantData_o *battleSvtData; // x0
  __int64 v10; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v11; // 0:x0.8

  if ( (byte_4B1F61A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_int__GetValueOrDefault__, method);
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v3);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v4);
    byte_4B1F61A = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    Weapon = myShiftData->fields.Weapon;
    if ( Weapon )
    {
      EffectFolder_k__BackingField = Weapon->fields._EffectFolder_k__BackingField;
      v11 = (System_Nullable_int__o)&v10;
      v10 = 0LL;
      System_Nullable_int____ctor(
        v11,
        EffectFolder_k__BackingField,
        (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
      if ( (_BYTE)v10 )
        return HIDWORD(v10);
    }
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCB254(this, method);
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
    sub_1BCB254(0LL, method);
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
    sub_1BCB254(0LL, method);
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
    sub_1BCB254(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(this, method);
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
    sub_1BCB254(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
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
  float v20; // s3
  float v21; // s4
  float v22; // s5
  bool v23; // nf
  float v24; // s3
  struct BattlePerformance_o *v25; // x8
  float v26; // s3
  float v27; // s1
  float v28; // s0
  float v29; // s1
  float v30; // s2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1F642 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, *(_QWORD *)&pos);
    byte_4B1F642 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_42;
  distanceofactor = performance->fields.distanceofactor;
  if ( !byte_4B16191 )
  {
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&pos);
    byte_4B16191 = 1;
  }
  targetObject = (UnityEngine_Object_o *)v4->fields.targetObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        goto LABEL_12;
      }
    }
LABEL_42:
    sub_1BCB254(this, *(_QWORD *)&pos);
  }
LABEL_12:
  if ( !v4->fields.dir )
    distanceofactor = -distanceofactor;
  switch ( pos )
  {
    case 0:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = distanceofactor + v14;
      goto LABEL_21;
    case 1:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v15 - distanceofactor;
LABEL_21:
      z = v13 + 0.0;
      y = v12 + 0.0;
      break;
    case 3:
      x = v4->fields.criteriaPos.fields.x;
      y = v4->fields.criteriaPos.fields.y;
      z = v4->fields.criteriaPos.fields.z;
      break;
    case 4:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      goto LABEL_31;
    case 5:
      this = (BattleActorControl_o *)v4->fields.enemyStage;
      if ( !this )
        goto LABEL_42;
LABEL_31:
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      v32 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      x = v32.fields.x;
      y = v32.fields.y;
      z = v32.fields.z;
      break;
    case 6:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v25 = v4->fields.performance;
      if ( !v25 )
        goto LABEL_42;
      v26 = (float)(v25->fields.currentFov + -40.0) / 30.0;
      v21 = 12.0;
      v22 = fminf(v26, 1.0);
      v23 = v26 < 0.0;
      v24 = 2.0;
      goto LABEL_37;
    default:
      if ( pos != 7 )
        break;
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !this )
        goto LABEL_42;
      *(UnityEngine_Vector3_o *)&v16 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      v19 = v4->fields.performance;
      if ( !v19 )
        goto LABEL_42;
      v20 = (float)(v19->fields.currentFov + -40.0) / 30.0;
      v21 = 5.0;
      v22 = fminf(v20, 1.0);
      v23 = v20 < 0.0;
      v24 = 3.0;
LABEL_37:
      y = v17 + 0.0;
      v27 = (float)(v22 * v21) + v24;
      if ( v23 )
        v27 = v24;
      x = v16 + (float)(distanceofactor * v27);
      z = v18 + 0.0;
      break;
  }
  v28 = x;
  v29 = y;
  v30 = z;
  result.fields.z = v30;
  result.fields.y = v29;
  result.fields.x = v28;
  return result;
}


int32_t __fastcall BattleActorControl__getWaveCount(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  struct BattleData_o *data; // x8

  if ( (byte_4B1F61E & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    byte_4B1F61E = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.performance;
  if ( !v6 || (data = v6->fields.data) == 0LL )
    sub_1BCB254(v4, v5);
  return data->fields.wavecount;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall BattleActorControl__getWeaponColor(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_WeaponData_o *Weapon; // x8
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  BattleServantData_o *battleSvtData; // x0
  System_Nullable_Color__o v12; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o Color_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F61C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_Color__GetValueOrDefault__, method);
    sub_1BCAFF8(&Method_System_Nullable_Color___ctor__, v3);
    sub_1BCAFF8(&Method_System_Nullable_Color__get_HasValue__, v4);
    byte_4B1F61C = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData
    && (Weapon = myShiftData->fields.Weapon) != 0LL
    && (Color_k__BackingField = Weapon->fields._Color_k__BackingField,
        memset(&v12, 0, sizeof(v12)),
        System_Nullable_Color____ctor(
          &v12,
          Color_k__BackingField,
          (const MethodInfo_37D6364 *)Method_System_Nullable_Color___ctor__),
        v12.fields.hasValue) )
  {
    r = v12.fields.value.fields.r;
    g = v12.fields.value.fields.g;
    b = v12.fields.value.fields.b;
    a = v12.fields.value.fields.a;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1BCB254(0LL, method);
    *(UnityEngine_Color_o *)&r = BattleServantData__getWeaponColor(battleSvtData, 0LL);
  }
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleActorControl__getWeaponGroup(
        BattleActorControl_o *this,
        bool isEffect,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  BattleActionData_ShiftServant_WeaponData_o *Weapon; // x0
  int32_t WeaponGroup; // w1
  BattleServantData_o *battleSvtData; // x0
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF
  System_Nullable_int__o v13; // 0:x0.8

  if ( (byte_4B1F619 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_int__GetValueOrDefault__, isEffect);
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v5);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v6);
    byte_4B1F619 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    Weapon = myShiftData->fields.Weapon;
    if ( Weapon )
    {
      WeaponGroup = BattleActionData_ShiftServant_WeaponData__GetWeaponGroup(Weapon, isEffect, 0LL);
      v13 = (System_Nullable_int__o)&v12;
      v12 = 0LL;
      System_Nullable_int____ctor(v13, WeaponGroup, (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
      if ( (_BYTE)v12 )
        return HIDWORD(v12);
    }
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_WeaponData_o *Weapon; // x8
  int32_t Scale_k__BackingField; // w1
  BattleServantData_o *battleSvtData; // x0
  __int64 v10; // [xsp+8h] [xbp-18h] BYREF
  System_Nullable_int__o v11; // 0:x0.8

  if ( (byte_4B1F61B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Nullable_int__GetValueOrDefault__, method);
    sub_1BCAFF8(&Method_System_Nullable_int___ctor__, v3);
    sub_1BCAFF8(&Method_System_Nullable_int__get_HasValue__, v4);
    byte_4B1F61B = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    Weapon = myShiftData->fields.Weapon;
    if ( Weapon )
    {
      Scale_k__BackingField = Weapon->fields._Scale_k__BackingField;
      v11 = (System_Nullable_int__o)&v10;
      v10 = 0LL;
      System_Nullable_int____ctor(
        v11,
        Scale_k__BackingField,
        (const MethodInfo_37D8E28 *)Method_System_Nullable_int___ctor__);
      if ( (_BYTE)v10 )
        return HIDWORD(v10);
    }
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
  return BattleServantData__getWeaponScale(battleSvtData, 0LL);
}


BattleActionData_o *__fastcall BattleActorControl__get_ActionData(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.actiondata;
}


BattleAdjustPopupPosInScreenComponent_array *__fastcall BattleActorControl__get_AdjustPopupComponents(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._AdjustPopupComponents_k__BackingField;
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
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B1F643 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_ActorMotionActiveCheck_TypeInfo, method);
    byte_4B1F643 = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_1BCB244(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0LL);
    this->fields._checkMotion = v4;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._checkMotion, (int32_t)v4, v5, v6);
    return this->fields._checkMotion;
  }
  return result;
}


PlayMakerFSM_o *__fastcall BattleActorControl__get_CommonFsm(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1BCB254(this, method);
  if ( motionFSM->max_length <= 1 )
    sub_1BCB25C(this, method, v2);
  return motionFSM->m_Items[1];
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
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
    sub_1BCB254(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w19

  if ( (byte_4B1F61D & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, method);
    byte_4B1F61D = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1BCB254(0LL, method);
  SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
  LimitCount = BattleActorControl__getLimitCount(this, v5);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__GetLimitImageIndex(SvtId, LimitCount, 0, 0LL);
}


System_Collections_Generic_Dictionary_BattleMotionProcessType__int__o *__fastcall BattleActorControl__get_MotionProcessDict(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._MotionProcessDict_k__BackingField;
}


BaseMotionSkip_o *__fastcall BattleActorControl__get_MotionSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1BCB254(0LL, method);
  return BattlePerformance__get_MotionSkip(performance, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeDamage(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._NodeDamage_k__BackingField;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeTarget(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._NodeTarget_k__BackingField;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__get_NodeText(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._NodeText_k__BackingField;
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
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4B1F614 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__ToArray__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4B1F614 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v4 )
    sub_1BCB254(v5, v6);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v4,
                                  (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_1BCB254(0LL, hideFlg);
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
    sub_1BCB254(this, method);
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
  bool v7; // w21
  unsigned __int64 v8; // x22
  UnityEngine_Object_o *v9; // x19

  v3 = this;
  if ( (byte_4B1F633 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_13058/*"SummonEndFlag"*/, v4);
    byte_4B1F633 = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1BCB254(this, method);
  v6 = *(_QWORD *)&motionFSM->max_length;
  v7 = (int)v6 > 0;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
        sub_1BCB25C(this, method, v2);
      v9 = (UnityEngine_Object_o *)motionFSM->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v9, 0LL);
        if ( !this )
          goto LABEL_17;
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13058/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmBool__get_Value(
                                           (HutongGames_PlayMaker_FsmBool_o *)this,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v7;
        }
      }
      LODWORD(v6) = motionFSM->max_length;
      v7 = (__int64)++v8 < (int)v6;
    }
    while ( (__int64)v8 < (int)v6 );
  }
  return v7;
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
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_1BCB254(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x3
  int32_t v52; // [xsp+4h] [xbp-7Ch] BYREF
  float v53; // [xsp+8h] [xbp-78h] BYREF
  float v54; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B1F66B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_moveStep__, target);
    sub_1BCAFF8(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, v19);
    sub_1BCAFF8(&float_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v21);
    sub_1BCAFF8(&StringLiteral_12256/*"STEP_START"*/, v22);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v23);
    sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v24);
    sub_1BCAFF8(&StringLiteral_23499/*"step_back"*/, v25);
    byte_4B1F66B = 1;
  }
  this->fields.targetObject = target;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v28, v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v30, v31);
  BattleActorControl__playAnimation_46091064(this, (System_String_o *)StringLiteral_23499/*"step_back"*/, 0, v32);
  v33 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v33 )
    sub_1BCB254(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19800/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23855/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22531/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12256/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v33,
    v51);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4B1F66D & 1) == 0 )
  {
    sub_1BCAFF8(&iTween_TypeInfo, method);
    byte_4B1F66D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_62198328(gameObject, 0LL);
}


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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x3
  int32_t v52; // [xsp+4h] [xbp-7Ch] BYREF
  float v53; // [xsp+8h] [xbp-78h] BYREF
  float v54; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B1F668 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_moveJump__, target);
    sub_1BCAFF8(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, v19);
    sub_1BCAFF8(&float_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_8106/*"JUMP_UP"*/, v21);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v22);
    sub_1BCAFF8(&StringLiteral_20905/*"jump"*/, v23);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v24);
    sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v25);
    byte_4B1F668 = 1;
  }
  this->fields.targetObject = target;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v28, v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v30, v31);
  BattleActorControl__playAnimation_46091064(this, (System_String_o *)StringLiteral_20905/*"jump"*/, 0, v32);
  v33 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v33 )
    sub_1BCB254(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19800/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23855/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22531/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8106/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v33,
    v51);
}


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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x3
  int32_t v52; // [xsp+4h] [xbp-7Ch] BYREF
  float v53; // [xsp+8h] [xbp-78h] BYREF
  float v54; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B1F66A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_moveStep__, target);
    sub_1BCAFF8(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, v19);
    sub_1BCAFF8(&float_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v21);
    sub_1BCAFF8(&StringLiteral_12256/*"STEP_START"*/, v22);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v23);
    sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v24);
    sub_1BCAFF8(&StringLiteral_23500/*"step_front"*/, v25);
    byte_4B1F66A = 1;
  }
  this->fields.targetObject = target;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v28, v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v30, v31);
  BattleActorControl__playAnimation_46091064(this, (System_String_o *)StringLiteral_23500/*"step_front"*/, 0, v32);
  v33 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v33 )
    sub_1BCB254(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19800/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23855/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22531/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12256/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v33,
    v51);
}


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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  __int64 v36; // x21
  BattleActorControl_EndCallEvent_o *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  Il2CppObject *v45; // x0
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  const MethodInfo *v54; // x3
  __int64 v55; // x20
  BattleActorControl_EndCallEvent_o *v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  const MethodInfo *v59; // x3
  int32_t v61; // [xsp+4h] [xbp-7Ch] BYREF
  float v62; // [xsp+8h] [xbp-78h] BYREF
  float v63; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B1F669 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_moveStep__, target);
    sub_1BCAFF8(&Method_BattleActorControl_playAnimation__, v16);
    sub_1BCAFF8(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, v19);
    sub_1BCAFF8(&float_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v21);
    sub_1BCAFF8(&StringLiteral_12256/*"STEP_START"*/, v22);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v23);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v24);
    sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v25);
    sub_1BCAFF8(&StringLiteral_21950/*"name"*/, v26);
    sub_1BCAFF8(&StringLiteral_23500/*"step_front"*/, v27);
    sub_1BCAFF8(&StringLiteral_12255/*"STEP_END_02"*/, v28);
    byte_4B1F669 = 1;
  }
  this->fields.targetObject = target;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v29, v30);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v31, v32);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v33, v34);
  BattleActorControl__playAnimation_46091064(this, (System_String_o *)StringLiteral_23500/*"step_front"*/, 0, v35);
  v36 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v36, 0LL);
  v37 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v37, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v36 )
    goto LABEL_6;
  *(_QWORD *)(v36 + 16) = v37;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v36 + 16), (int32_t)v37, v40, v41);
  v63 = hight;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v42, v43, v44);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_19800/*"hight"*/,
    v45,
    0LL);
  v62 = time;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v46, v47, v48);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_23855/*"time"*/,
    v49,
    0LL);
  v61 = pos;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v61, v50, v51, v52);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_22531/*"pos"*/,
    v53,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12256/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v36,
    v54);
  v55 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v55, 0LL);
  v56 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v56, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v55 )
LABEL_6:
    sub_1BCB254(v38, v39);
  *(_QWORD *)(v55 + 16) = v56;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v55 + 16), (int32_t)v56, v57, v58);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v55,
    (System_String_o *)StringLiteral_21950/*"name"*/,
    (Il2CppObject *)StringLiteral_24501/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12255/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v55,
    v59);
}


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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  const MethodInfo *v51; // x3
  int32_t v52; // [xsp+4h] [xbp-7Ch] BYREF
  float v53; // [xsp+8h] [xbp-78h] BYREF
  float v54; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4B1F66C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_moveStep__, target);
    sub_1BCAFF8(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, v19);
    sub_1BCAFF8(&float_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_23983/*"treasure_arms"*/, v21);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v22);
    sub_1BCAFF8(&StringLiteral_12256/*"STEP_START"*/, v23);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v24);
    sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v25);
    byte_4B1F66C = 1;
  }
  this->fields.targetObject = target;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v28, v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v30, v31);
  BattleActorControl__playAnimation_46091064(this, (System_String_o *)StringLiteral_23983/*"treasure_arms"*/, 0, v32);
  v33 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v33 )
    sub_1BCB254(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19800/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23855/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22531/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12256/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v33,
    v51);
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
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  __int64 v27; // x0
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v33; // [xsp+8h] [xbp-68h] BYREF
  int v34; // [xsp+Ch] [xbp-64h] BYREF
  char v35[4]; // [xsp+18h] [xbp-58h] BYREF
  int v36; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4B1F673 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, method);
    sub_1BCAFF8(&iTween_EaseType_TypeInfo, v5);
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&float_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_18592/*"easetype"*/, v9);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v10);
    sub_1BCAFF8(&StringLiteral_24747/*"y"*/, v11);
    sub_1BCAFF8(&StringLiteral_20782/*"islocal"*/, v12);
    sub_1BCAFF8(&iTween_TypeInfo, v13);
    byte_4B1F673 = 1;
  }
  v14 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v14, 0LL);
  v36 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v15, v16, v17);
  if ( !v14 )
    sub_1BCB254(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_24747/*"y"*/,
    v18,
    v14->klass->vtable._23_Clear.methodPtr);
  v35[0] = 1;
  v23 = j_il2cpp_value_box_0(bool_TypeInfo, v35, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_20782/*"islocal"*/,
    v23,
    v14->klass->vtable._23_Clear.methodPtr);
  v34 = 0;
  v27 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v34, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_18592/*"easetype"*/,
    v27,
    v14->klass->vtable._23_Clear.methodPtr);
  v33 = time;
  v31 = j_il2cpp_value_box_0(float_TypeInfo, &v33, v28, v29, v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._22_Add.method)(
    v14,
    StringLiteral_23855/*"time"*/,
    v31,
    v14->klass->vtable._23_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_62087988(actorObject, v14, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x2
  __int64 v14; // x3
  int klass; // s8
  __int64 v16; // x2
  __int64 v17; // x3
  float v18; // s9
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  BattleActorControl_o *v21; // x0
  long double v22; // q0
  float v23; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4B1F66F & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, table);
    sub_1BCAFF8(&float_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v6);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v7);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v8);
    byte_4B1F66F = 1;
  }
  if ( !v3
    || (v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
               v3,
               StringLiteral_19800/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                v3,
                StringLiteral_23855/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                                         v3,
                                         StringLiteral_22531/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        !v9) )
  {
LABEL_12:
    sub_1BCB254(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1BCB514(v9);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9, float_TypeInfo, v11, v12);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1BCB514(v10);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v10, float_TypeInfo, v13, v14);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v22 = sub_1BCB514(v3);
    goto LABEL_11;
  }
  v18 = *(float *)&this->klass;
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v16, v17);
  v21 = v4;
  LODWORD(v22) = klass;
  v23 = v18;
LABEL_11:
  BattleActorControl__moveJump_46103756(v21, *(float *)&v22, v23, v19, v20);
}


void __fastcall BattleActorControl__moveJump_46103756(
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
  BattleActorControl__moveUp_46102628(this, hight, time, v9);
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
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  __int64 v35; // x0
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  __int64 v39; // x0
  bool v40; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v42; // x19
  float v43; // [xsp+8h] [xbp-78h] BYREF
  int v44; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4B1F670 & 1) == 0 )
  {
    sub_1BCAFF8(&iTween_EaseType_TypeInfo, *(_QWORD *)&pos);
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v14);
    sub_1BCAFF8(&float_TypeInfo, v15);
    sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v16);
    sub_1BCAFF8(&StringLiteral_18592/*"easetype"*/, v17);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v18);
    sub_1BCAFF8(&StringLiteral_22230/*"oncompleteparams"*/, v19);
    sub_1BCAFF8(&StringLiteral_22231/*"oncompletetarget"*/, v20);
    sub_1BCAFF8(&StringLiteral_22532/*"position"*/, v21);
    sub_1BCAFF8(&StringLiteral_18853/*"endMotion"*/, v22);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v23);
    sub_1BCAFF8(&iTween_TypeInfo, v24);
    byte_4B1F670 = 1;
  }
  v25 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v25, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v26);
  v30 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec, v27, v28, v29);
  if ( !v25 )
    sub_1BCB254(v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
    v25,
    StringLiteral_22532/*"position"*/,
    v30,
    v25->klass->vtable._23_Clear.methodPtr);
  v44 = 1;
  v35 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v44, v32, v33, v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
    v25,
    StringLiteral_18592/*"easetype"*/,
    v35,
    v25->klass->vtable._23_Clear.methodPtr);
  v43 = time;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v36, v37, v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
    v25,
    StringLiteral_23855/*"time"*/,
    v39,
    v25->klass->vtable._23_Clear.methodPtr);
  if ( endcall )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v40 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v40 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
        v25,
        StringLiteral_22231/*"oncompletetarget"*/,
        callbackObject,
        v25->klass->vtable._23_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
        v25,
        StringLiteral_22229/*"oncomplete"*/,
        callbackEvent,
        v25->klass->vtable._23_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
        v25,
        StringLiteral_22231/*"oncompletetarget"*/,
        gameObject,
        v25->klass->vtable._23_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
        v25,
        StringLiteral_22229/*"oncomplete"*/,
        StringLiteral_18853/*"endMotion"*/,
        v25->klass->vtable._23_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._22_Add.method)(
      v25,
      StringLiteral_22230/*"oncompleteparams"*/,
      endcall,
      v25->klass->vtable._23_Clear.methodPtr);
  }
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_62087988(v42, v25, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x2
  __int64 v14; // x3
  int klass; // s8
  __int64 v16; // x2
  __int64 v17; // x3
  float v18; // s9
  int32_t v19; // w1
  const MethodInfo *v20; // x2
  BattleActorControl_o *v21; // x0
  long double v22; // q0
  float v23; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4B1F66E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_POS_TypeInfo, table);
    sub_1BCAFF8(&float_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v6);
    sub_1BCAFF8(&StringLiteral_22531/*"pos"*/, v7);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v8);
    byte_4B1F66E = 1;
  }
  if ( !v3
    || (v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
               v3,
               StringLiteral_19800/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                v3,
                StringLiteral_23855/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                                         v3,
                                         StringLiteral_22531/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        !v9) )
  {
LABEL_12:
    sub_1BCB254(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1BCB514(v9);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9, float_TypeInfo, v11, v12);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1BCB514(v10);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v10, float_TypeInfo, v13, v14);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v22 = sub_1BCB514(v3);
    goto LABEL_11;
  }
  v18 = *(float *)&this->klass;
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v16, v17);
  v21 = v4;
  LODWORD(v22) = klass;
  v23 = v18;
LABEL_11:
  BattleActorControl__moveStep_46101748(v21, *(float *)&v22, v23, v19, v20);
}


void __fastcall BattleActorControl__moveStep_46101748(
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
  BattleActorControl__moveUp_46102628(this, hight, time, v9);
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x2
  __int64 v11; // x3
  float v12; // s8
  float v13; // s1
  const MethodInfo *v14; // x1
  BattleActorControl_o *v15; // x0
  const MethodInfo *v16; // x1
  long double v17; // q0

  v3 = table;
  v4 = this;
  if ( (byte_4B1F671 & 1) == 0 )
  {
    sub_1BCAFF8(&float_TypeInfo, table);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v5);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_19800/*"hight"*/, v6);
    byte_4B1F671 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
         v3,
         StringLiteral_19800/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 768LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                                   v3,
                                   StringLiteral_23855/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 768LL));
  if ( !v7 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v7 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1BCB514(v7);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v7, float_TypeInfo, v8, v9);
  if ( !v3 )
LABEL_9:
    sub_1BCB254(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v12 = *(float *)&this->klass;
    v13 = *(float *)j_il2cpp_object_unbox_0(v3, float_TypeInfo, v10, v11);
    BattleActorControl__moveUp_46102628(v4, v12, v13, v14);
    return;
  }
LABEL_11:
  v17 = sub_1BCB514(v3);
  BattleActorControl__moveDown(v15, *(float *)&v17, v16);
}


void __fastcall BattleActorControl__moveUp_46102628(
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
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  __int64 v28; // x0
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  __int64 v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v43; // [xsp+Ch] [xbp-84h] BYREF
  float v44; // [xsp+10h] [xbp-80h] BYREF
  int v45; // [xsp+14h] [xbp-7Ch] BYREF
  char v46[4]; // [xsp+18h] [xbp-78h] BYREF
  float v47; // [xsp+1Ch] [xbp-74h] BYREF

  if ( (byte_4B1F672 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, method);
    sub_1BCAFF8(&iTween_EaseType_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1BCAFF8(&float_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_18592/*"easetype"*/, v10);
    sub_1BCAFF8(&StringLiteral_23855/*"time"*/, v11);
    sub_1BCAFF8(&StringLiteral_22230/*"oncompleteparams"*/, v12);
    sub_1BCAFF8(&StringLiteral_22231/*"oncompletetarget"*/, v13);
    sub_1BCAFF8(&StringLiteral_24747/*"y"*/, v14);
    sub_1BCAFF8(&StringLiteral_20782/*"islocal"*/, v15);
    sub_1BCAFF8(&StringLiteral_22229/*"oncomplete"*/, v16);
    sub_1BCAFF8(&StringLiteral_21466/*"moveDown"*/, v17);
    sub_1BCAFF8(&iTween_TypeInfo, v18);
    byte_4B1F672 = 1;
  }
  v19 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63813256(v19, 0LL);
  v47 = hight;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v47, v20, v21, v22);
  if ( !v19 )
    sub_1BCB254(v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_24747/*"y"*/,
    v23,
    v19->klass->vtable._23_Clear.methodPtr);
  v46[0] = 1;
  v28 = j_il2cpp_value_box_0(bool_TypeInfo, v46, v25, v26, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_20782/*"islocal"*/,
    v28,
    v19->klass->vtable._23_Clear.methodPtr);
  v45 = 1;
  v32 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v45, v29, v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_18592/*"easetype"*/,
    v32,
    v19->klass->vtable._23_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_22231/*"oncompletetarget"*/,
    gameObject,
    v19->klass->vtable._23_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_22229/*"oncomplete"*/,
    StringLiteral_21466/*"moveDown"*/,
    v19->klass->vtable._23_Clear.methodPtr);
  v44 = time;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_22230/*"oncompleteparams"*/,
    v37,
    v19->klass->vtable._23_Clear.methodPtr);
  v43 = time;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v38, v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._22_Add.method)(
    v19,
    StringLiteral_23855/*"time"*/,
    v41,
    v19->klass->vtable._23_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_62087988(actorObject, v19, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_4B1F690 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_skipVoice__, method);
    sub_1BCAFF8(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4B1F690 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCB244(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1BCB254(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v8, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  BattlePerformanceStatus_o *v5; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B1F698 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_skipDead__, method);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4B1F698 = 1;
  }
  monitor = v2[10].monitor;
  if ( !monitor
    || (v5 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 37),
        v6 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCB244(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v6, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v5) )
  {
    sub_1BCB254(this, method);
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

  if ( (byte_4B1F68F & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_skipVoice__, method);
    sub_1BCAFF8(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4B1F68F = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCB244(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1BCB254(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v8, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  __int64 v3; // x1
  void *monitor; // x8
  BattlePerformanceStatus_o *v5; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v6; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4B1F697 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_skipDead__, method);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4B1F697 = 1;
  }
  monitor = v2[10].monitor;
  if ( !monitor
    || (v5 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 37),
        v6 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1BCB244(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v6, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v5) )
  {
    sub_1BCB254(this, method);
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
  if ( (byte_4B1F65C & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, table);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_21950/*"name"*/, v5);
    byte_4B1F65C = 1;
  }
  if ( !table )
    sub_1BCB254(this, table);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._28_get_Item.method)(
                            table,
                            StringLiteral_21950/*"name"*/,
                            table->klass->vtable._29_set_Item.methodPtr);
  if ( v6 && v6->klass != string_TypeInfo )
  {
    sub_1BCB514(v6);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v8, v9, v10, v11);
  }
  else
  {
    BattleActorControl__playAnimation_46091064(v4, v6, 0, v7);
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

  if ( (byte_4B1F65E & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1767/*"@playAnim\n =>{0},{1}"*/, animname);
    byte_4B1F65E = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_62491716((System_String_o *)StringLiteral_1767/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1BCB254(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_46091064(
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
  Il2CppObject *ComponentInChildren_object; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v18; // x19
  float length; // s0
  float v20; // s0
  Il2CppObject *v21; // x21
  struct BattleFBXComponent_o *v22; // x22
  BattleFBXComponent_c *klass; // x8
  BattleFBXComponent_o *v24; // x19
  __int64 v25; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v27; // x0
  float v28; // s0
  float v29; // s0

  if ( (byte_4B1F65D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, animname);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&SimpleAnimation_State_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v10);
    sub_1BCAFF8(&StringLiteral_1766/*"@playAnim\n =>{0}"*/, v11);
    byte_4B1F65D = 1;
  }
  v13 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v13 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v13, 1, v12);
  System_String__Format((System_String_o *)StringLiteral_1766/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v13, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_33;
  BattleFBXComponent__playAnimation(fbxcomponent, v13, 0LL);
  if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_24501/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_33;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)fbxcomponent,
                                   (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0LL,
                                             0LL);
    if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
    {
      if ( !ComponentInChildren_object )
        goto LABEL_33;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
                                                 v13,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v18 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
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
LABEL_33:
        sub_1BCB254(fbxcomponent, v14);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_33;
      v21 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)fbxcomponent,
              (const MethodInfo_306E974 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v21 )
          goto LABEL_33;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v21, v13, 0LL) )
        {
          v22 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v21, v13, 0LL);
          if ( !fbxcomponent )
            goto LABEL_33;
          klass = fbxcomponent->klass;
          v24 = fbxcomponent;
          v25 = *(unsigned __int16 *)(&fbxcomponent->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&fbxcomponent->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v25;
              p_offset += 2;
              if ( !v25 )
                goto LABEL_27;
            }
            v27 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_27:
            v27 = sub_1C1B560(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v27)(
                                                   v24,
                                                   *(_QWORD *)(v27 + 8));
          if ( !fbxcomponent )
            goto LABEL_33;
          v28 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0LL);
          v29 = UnityEngine_Random__Range(0.0, v28, 0LL);
          if ( !v22 )
            goto LABEL_33;
          v22->fields.currentAnimTime = v29;
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
  BattleActorControl_ActorMotionActiveCheck_o *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v12; // x21
  System_Action_object__o *v13; // x22
  BattleCallBack_T__o *v14; // x20

  if ( (byte_4B1F647 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattleActionData__TypeInfo, badata);
    sub_1BCAFF8(&Method_BattleActorControl_playBattleActionDataLocal__, v5);
    sub_1BCAFF8(&Method_BattleCallBack_BattleActionData___ctor__, v6);
    sub_1BCAFF8(&BattleCallBack_BattleActionData__TypeInfo, v7);
    byte_4B1F647 = 1;
  }
  v8 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v8 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v8, 0LL) )
  {
    v12 = BattleActorControl__get_CheckMotion(this, v10);
    v13 = (System_Action_object__o *)sub_1BCB244(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(v13, (Il2CppObject *)this, Method_BattleActorControl_playBattleActionDataLocal__, 0LL);
    v14 = (BattleCallBack_T__o *)sub_1BCB244(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v14,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v13,
      (const MethodInfo_3240C78 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v12 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v12, (BattleCallBackBase_o *)v14, 0LL);
      return;
    }
LABEL_8:
    sub_1BCB254(v8, v9);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v11);
}


void __fastcall BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v16; // x2
  System_String_o *motionname; // x1
  __int64 actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t type; // w21
  BattleActionData_c *v25; // x0
  const MethodInfo *v26; // x2
  BattleActionData_o *v27; // x8
  BattleActionData_o *v28; // x8
  int32_t *p_motionId; // x0
  int32_t v30; // w21
  System_String_o *v31; // x0
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v33; // x3
  struct BattlePerformance_o *performance; // x8
  __int64 v35; // x2
  int v36; // w8
  __int64 v37; // x21
  unsigned int v38; // w23
  BattleServantData_o *v39; // x22
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v41; // x8
  const MethodInfo *v42; // x2
  BattleActorControl_o *v43; // x22
  System_ValueTuple_int__string__o v44; // kr10_16
  const MethodInfo *v45; // x3
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v47; // x8
  struct BattlePerformance_o *v48; // x9
  struct BattleServantData_o *v49; // x8
  BattlePerformance_o *v50; // x8
  int32_t v51; // w19
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *npcIds; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1F648 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_ActionExtensions_Call_BattleActorControl___, badata);
    sub_1BCAFF8(&BattleActionData_TypeInfo, v6);
    sub_1BCAFF8(&BattleActorControl_TypeInfo, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_TreasureDvcMaster___, v8);
    sub_1BCAFF8(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TryGetValue__, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_8689/*"MOTION_FOLLOW_BACK_STEP"*/, v13);
    sub_1BCAFF8(&StringLiteral_8669/*"MOTION_"*/, v14);
    byte_4B1F648 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  npcIds = 0LL;
  entity = 0LL;
  value = 0LL;
  this->fields.actiondata = badata;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.actiondata, (int32_t)badata, (int32_t)method, v3);
  BattleActorControl__setActionData(this, this->fields.actiondata, v16);
  actiondata = (__int64)this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_73;
  ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)actiondata, 0LL);
  this->fields.myShiftData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.myShiftData, 0, v20, v21);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.myShiftData, (int32_t)ShiftServant, v22, v23);
  }
  if ( !badata )
    goto LABEL_73;
  if ( badata->fields.noOperation )
  {
    actiondata = (__int64)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0LL);
      return;
    }
    goto LABEL_73;
  }
  if ( !*p_actiondata )
    goto LABEL_73;
  type = (*p_actiondata)->fields.type;
  v25 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v25 = BattleActionData_TypeInfo;
  }
  if ( type == v25->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_73;
  if ( BattleActionData__isCommandAttack((BattleActionData_o *)actiondata, 0LL) )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_73;
  if ( BattleActionData__isCommonEnemyAttack((BattleActionData_o *)actiondata, 0LL) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, v23);
  actiondata = (__int64)this->fields.performance;
  if ( !actiondata
    || (actiondata = (__int64)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0
    || (actiondata = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)actiondata + 456LL))(
                       actiondata,
                       *(_QWORD *)(*(_QWORD *)actiondata + 464LL)),
        (v27 = *p_actiondata) == 0LL) )
  {
LABEL_73:
    sub_1BCB254(actiondata, motionname);
  }
  motionname = v27->fields.motionname;
  if ( motionname )
  {
    if ( !v27->fields.IsVanishSkill )
      goto LABEL_37;
LABEL_35:
    BattleActorControl__SendMotionEventForVanishSkill(this, motionname, v26);
    goto LABEL_38;
  }
  actiondata = (__int64)this->fields.noPlaymakerMotionActionDict;
  if ( !actiondata )
    goto LABEL_73;
  actiondata = System_Collections_Generic_Dictionary_int__object___TryGetValue(
                 (System_Collections_Generic_Dictionary_int__object__o *)actiondata,
                 v27->fields.motionId,
                 &value,
                 (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TryGetValue__);
  if ( (actiondata & 1) == 0 )
  {
    v28 = *p_actiondata;
    if ( !*p_actiondata )
      goto LABEL_73;
    p_motionId = &v28->fields.motionId;
    if ( !v28->fields.IsVanishSkill )
    {
      v31 = System_Int32__ToString((int32_t)p_motionId, 0LL);
      motionname = System_String__Concat_62450424((System_String_o *)StringLiteral_8669/*"MOTION_"*/, v31, 0LL);
LABEL_37:
      MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, motionname, v26);
      this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
      BattleActorControl__sendEventFSM_46076216(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v33);
      goto LABEL_38;
    }
    v30 = *p_motionId;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    motionname = BattleActorControl__MotionIdStr(v30, (const MethodInfo *)motionname);
    goto LABEL_35;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)value,
    (Il2CppObject *)this,
    (const MethodInfo_2F6A0EC *)Method_ActionExtensions_Call_BattleActorControl___);
LABEL_38:
  actiondata = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !actiondata )
    goto LABEL_73;
  actiondata = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)actiondata,
                          (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !*p_actiondata || !actiondata )
    goto LABEL_73;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)actiondata,
         &entity,
         (*p_actiondata)->fields.treasureDvcId,
         (const MethodInfo_32C7E4C *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    actiondata = (__int64)entity;
    if ( !entity )
      goto LABEL_73;
    actiondata = TreasureDvcEntity__TryGetWithBackStepNpcIds((TreasureDvcEntity_o *)entity, &npcIds, 0LL);
    if ( (actiondata & 1) != 0 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_73;
      actiondata = (__int64)performance->fields.data;
      if ( !actiondata )
        goto LABEL_73;
      actiondata = (__int64)BattleData__getFieldServantList((BattleData_o *)actiondata, 0, 0LL);
      if ( !actiondata )
        goto LABEL_73;
      v36 = *(_DWORD *)(actiondata + 24);
      v37 = actiondata;
      if ( v36 >= 1 )
      {
        v38 = 0;
        do
        {
          if ( v38 >= v36 )
            sub_1BCB25C(actiondata, motionname, v35);
          v39 = *(BattleServantData_o **)(v37 + 8LL * (int)v38 + 32);
          if ( !v39 )
            goto LABEL_73;
          deckSvt = v39->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_73;
          if ( LODWORD(deckSvt->fields.dropInfos) )
          {
            if ( v39->fields.uniqueId != this->fields.uniqueID )
            {
              actiondata = BattleServantData__isAlive(v39, 0, 0LL);
              if ( (actiondata & 1) != 0 )
              {
                v41 = v39->fields.deckSvt;
                if ( !v41 )
                  goto LABEL_73;
                actiondata = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)npcIds,
                               (int32_t)v41->fields.dropInfos,
                               (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
                if ( (actiondata & 1) != 0 )
                {
                  actiondata = (__int64)this->fields.performance;
                  if ( !actiondata )
                    goto LABEL_73;
                  actiondata = (__int64)BattlePerformance__getServantActor(
                                          (BattlePerformance_o *)actiondata,
                                          v39->fields.uniqueId,
                                          0LL);
                  if ( !actiondata )
                    goto LABEL_73;
                  v43 = (BattleActorControl_o *)actiondata;
                  v44 = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                          (BattleActorControl_o *)actiondata,
                          (System_String_o *)StringLiteral_8689/*"MOTION_FOLLOW_BACK_STEP"*/,
                          v42);
                  v43->fields.actindex = v44.fields.Item1;
                  BattleActorControl__sendEventFSM_46076216(v43, v44.fields.Item2, 0, v45);
                }
              }
            }
          }
          v36 = *(_DWORD *)(v37 + 24);
        }
        while ( (int)++v38 < v36 );
      }
    }
  }
  if ( *p_actiondata )
  {
    if ( BattleActionData__isDeadMotion(*p_actiondata, 0LL) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        actiondata = BattleServantData__playDead(battleSvtData, 0LL);
        v47 = this->fields.battleSvtData;
        if ( !v47 )
          goto LABEL_73;
        actiondata = (__int64)v47->fields.deckSvt;
        if ( !actiondata )
          goto LABEL_73;
        actiondata = BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion((BattleDeckServantData_o *)actiondata, 0LL);
        if ( (actiondata & 1) != 0 )
        {
          v48 = this->fields.performance;
          if ( v48 )
          {
            v49 = this->fields.battleSvtData;
            if ( v49 )
            {
              actiondata = (__int64)v48->fields.data;
              if ( actiondata )
              {
                actiondata = BattleData__getServantIndex(
                               (BattleData_o *)actiondata,
                               v49->fields.isEnemy,
                               v49->fields.uniqueId,
                               0LL);
                v50 = this->fields.performance;
                if ( v50 )
                {
                  v51 = actiondata;
                  actiondata = (__int64)BattlePerformance__get_EnemyPerf(v50, 0LL);
                  if ( actiondata )
                  {
                    BattlePerformanceEnemy__SetActiveParameterView((BattlePerformanceEnemy_o *)actiondata, v51, 0, 0LL);
                    return;
                  }
                }
              }
            }
          }
          goto LABEL_73;
        }
      }
    }
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4B1F65B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BattleActorControl_sendEventFSM__, animname);
    sub_1BCAFF8(&BattleActorControl_EndCallEvent_TypeInfo, v9);
    sub_1BCAFF8(&BattleActorControl_EventClass_TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_1768/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/, v11);
    sub_1BCAFF8(&StringLiteral_18956/*"event"*/, v12);
    byte_4B1F65B = 1;
  }
  System_String__Format_62491784(
    (System_String_o *)StringLiteral_1768/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v13 = sub_1BCB244(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v13, 0LL);
  v14 = (BattleActorControl_EndCallEvent_o *)sub_1BCB244(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v14, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v13 )
    sub_1BCB254(v15, v16);
  *(_QWORD *)(v13 + 16) = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)v14, v17, v18);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v13,
    (System_String_o *)StringLiteral_18956/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v13, v19);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v20);
  else
    BattleActorControl__playAnimation_46091064(this, animname, 0, v20);
}


void __fastcall BattleActorControl__playMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v5; // x3

  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, name, method);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  BattleActorControl__sendEventFSM_46076216(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v5);
}


void __fastcall BattleActorControl__playNoActionDataMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        float afterWaitTime,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v13; // x3

  v7 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)name);
  if ( !v7 )
    sub_1BCB254(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.actiondata, 0, v9, v10);
  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, name, v11);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  BattleActorControl__sendEventFSM_46076216(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 1, v13);
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
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  __int64 v16; // x1
  bool v17; // w8
  UnityEngine_GameObject_o *result; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v20; // x23
  UnityEngine_GameObject_o *v21; // x23
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_4B1F640 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, effectname);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__, v12);
    sub_1BCAFF8(&StringLiteral_16054/*"_ENEMY"*/, v13);
    byte_4B1F640 = 1;
  }
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 1, (const MethodInfo *)sideflip);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadEffect(effectname, WeaponGroup, 0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                 0LL);
          v20 = result;
          if ( !byte_4B16191 )
          {
            result = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v16);
            byte_4B16191 = 1;
          }
          if ( v20 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v20,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0LL);
            result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                   0LL);
            v21 = result;
            if ( !byte_4B16196 )
            {
              result = (UnityEngine_GameObject_o *)sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v16);
              byte_4B16196 = 1;
            }
            if ( v21 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v21,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v23.fields.x = -x;
                  v23.fields.y = y;
                  v23.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v23, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_29;
                    if ( System_String__Equals_62485728(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16054/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_29;
                      v24.fields.x = x;
                      v24.fields.y = y;
                      v24.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v24, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_29;
                      UnityEngine_Transform__Rotate_70160752((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
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
LABEL_29:
    sub_1BCB254(result, v16);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  SePlayer_o *v21; // x19
  BattleActorControl_c *v22; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_4B1F651 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&Voice_TypeInfo, v11);
    byte_4B1F651 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( Voice__IsDeadVoice(type, 0LL) )
  {
    v12 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v12 = BattleActorControl_TypeInfo;
    }
    prevDeadVoice = v12->static_fields->prevDeadVoice;
    if ( !prevDeadVoice )
      goto LABEL_15;
    if ( v12->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v12),
          v12 = BattleActorControl_TypeInfo,
          (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
    {
      if ( prevDeadVoice->fields.isStop )
      {
LABEL_15:
        v15 = 1;
        goto LABEL_17;
      }
      if ( v12->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v12),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0LL);
        goto LABEL_15;
      }
    }
    sub_1BCB254(v12, v14);
  }
  v15 = 0;
LABEL_17:
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v18 = BattleActorControl__playVoice_46087824(this, FileName, volume, callback, isSaveVoicePlayed, v17);
  if ( v15 )
  {
    v21 = v18;
    v22 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v22 = BattleActorControl_TypeInfo;
    }
    static_fields = v22->static_fields;
    static_fields->prevDeadVoice = v21;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->prevDeadVoice, (int32_t)v21, v19, v20);
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

  if ( (byte_4B1F654 & 1) == 0 )
  {
    sub_1BCAFF8(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_4B1F654 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_46088752(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_46088752(
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

  if ( (byte_4B1F655 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_4B1F655 = 1;
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
        sub_1BCB254(battleSvtData, v9);
      }
      limit = (int)battleSvtData;
      overwriteSvtVoiceId = v16->fields.overwriteSvtVoiceId;
    }
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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

  if ( (byte_4B1F657 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, fileName);
    byte_4B1F657 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    svtId = myShiftData->fields.svtId;
    limit = myShiftData->fields.limit;
    overwriteSvtVoiceId = myShiftData->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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
      sub_1BCB254(battleSvtData, fileName);
    }
    v18 = (int)battleSvtData;
    v19 = v17->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v11 = v15;
    v12 = v18;
    v13 = v19;
  }
  return ServantAssetLoadManager__playBattleVoiceSe(v11, v12, v13, fileName, volume, 0LL);
}


SePlayer_o *__fastcall BattleActorControl__playVoice_46087824(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  __int64 v11; // x1
  BattleData_o *isNoVoice; // x0
  __int64 v13; // x1
  struct BattlePerformance_o *performance; // x8
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  System_String_array *v18; // x22
  const MethodInfo *v19; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v22; // w24
  int32_t v23; // w22
  int32_t uniqueID; // w21
  int32_t v25; // w0
  int32_t v26; // w1
  int32_t v27; // w2
  int32_t SvtId; // w22
  const MethodInfo *v29; // x1
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v31; // w23
  int32_t overwriteSvtVoiceId; // w24

  if ( (byte_4B1F652 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    sub_1BCAFF8(&string___TypeInfo, v11);
    byte_4B1F652 = 1;
  }
  isNoVoice = (BattleData_o *)BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId);
  if ( ((unsigned __int8)isNoVoice & 1) != 0 )
  {
    ActionExtensions__Call(callback, 0LL);
    return 0LL;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_26;
  isNoVoice = performance->fields.data;
  if ( !isNoVoice )
    goto LABEL_26;
  isNoVoice = (BattleData_o *)BattleData__getServantData(isNoVoice, this->fields.uniqueID, 0LL);
  if ( !isNoVoice )
    goto LABEL_26;
  if ( BattleServantData__HasAvailablePermanentSleepBuff((BattleServantData_o *)isNoVoice, 0LL) )
  {
    if ( callback )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
    return 0LL;
  }
  if ( isSaveVoicePlayed )
  {
    isNoVoice = (BattleData_o *)sub_1BCB0A0(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_26;
    v18 = (System_String_array *)isNoVoice;
    if ( !LODWORD(isNoVoice->fields.m_CancellationTokenSource) )
      sub_1BCB25C(isNoVoice, v13, v16);
    isNoVoice->fields.rootfsm = (struct PlayMakerFSM_o *)voiceTypeId;
    sub_1BCAF9C((CGThumbnailListItem_o *)&isNoVoice->fields.rootfsm, (int32_t)voiceTypeId, v16, v17);
    BattleActorControl__AddServantVoicePlayed(this, v18, v19);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (BattleData_o *)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
      isNoVoice = (BattleData_o *)BattleActorControl__getLimitCount(this, v29);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v31 = (int)isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v25 = SvtId;
        v26 = v31;
        v27 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v25, v26, v27, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_26:
    sub_1BCB254(isNoVoice, v13);
  }
  v22 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v23 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v25 = v22;
  v26 = limit;
  v27 = v23;
  return ServantAssetLoadManager__playBattleVoice(v25, v26, v27, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
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
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v11; // x20
  unsigned __int64 v12; // x23
  int32_t v13; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v15; // x21

  if ( (byte_4B1F6A8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v4);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    byte_4B1F6A8 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           auraList,
           (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_19;
  entries = auraList->fields._entries;
  v11 = auraList;
  if ( (int)entries >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)entries )
        sub_1BCB25C(auraList, method, v9);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v13 = *(&v11->fields._count + v12);
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               auraList,
               v13,
               (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Item,
                                                                           0LL,
                                                                           0LL);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
        if ( !auraList )
          break;
        v15 = System_Collections_Generic_Dictionary_int__object___get_Item(
                auraList,
                v13,
                (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)v15, 0LL);
      }
      LODWORD(entries) = v11->fields._entries;
      if ( (__int64)++v12 >= (int)entries )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCB254(auraList, method);
  }
LABEL_17:
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___Clear(
    auraList,
    (const MethodInfo_332146C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1F6AA & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v3);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v4);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v8);
    byte_4B1F6AA = 1;
  }
  memset(&v12, 0, sizeof(v12));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_3320F94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_33210F4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_19:
    sub_1BCB254(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_39E2464 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v12,
            (const MethodInfo_3473984 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v12.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Equality(
                                                                         (UnityEngine_Object_o *)currentValue,
                                                                         0LL,
                                                                         0LL);
    if ( ((unsigned __int8)auraList & 1) == 0 )
    {
      if ( !currentValue )
        goto LABEL_19;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)currentValue,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Component_object,
                                                                           0LL,
                                                                           0LL);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_19;
        BillBoard__ResetFlip((BillBoard_o *)Component_object, 0LL);
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

  v3 = this;
  if ( (byte_4B1F632 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_13058/*"SummonEndFlag"*/, v4);
    byte_4B1F632 = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1BCB254(this, method);
  v6 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v6 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v6; ++i )
    {
      if ( i >= (unsigned int)v6 )
        sub_1BCB25C(this, method, v2);
      v8 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v8, 0LL);
        if ( !this )
          goto LABEL_17;
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13058/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.motionFSM) = 0;
      }
      LODWORD(v6) = motionFSM->max_length;
    }
  }
}


void __fastcall BattleActorControl__resumeAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  float resumetimescale; // s0
  struct BattleFBXComponent_o *fbxcomponent; // x8

  resumetimescale = this->fields.resumetimescale;
  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = resumetimescale;
  if ( !fbxcomponent )
    sub_1BCB254(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v7; // x3

  if ( (byte_4B1F645 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_8677/*"MOTION_DAMAGE"*/, method);
    byte_4B1F645 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_1BCB254(0LL, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
  {
    MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                                         this,
                                         (System_String_o *)StringLiteral_8677/*"MOTION_DAMAGE"*/,
                                         v5);
    this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
    BattleActorControl__sendEventFSM_46076216(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v7);
  }
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
  if ( (byte_4B1F636 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, table);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_18956/*"event"*/, v5);
    byte_4B1F636 = 1;
  }
  if ( !table )
    sub_1BCB254(this, table);
  v6 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._28_get_Item.method)(
                             table,
                             StringLiteral_18956/*"event"*/,
                             table->klass->vtable._29_set_Item.methodPtr);
  v8 = (System_String_o *)v6;
  if ( v6 && *v6 != string_TypeInfo )
  {
    sub_1BCB514(v6);
  }
  else
  {
    v9 = v4;
    v10 = v8;
    v11 = 0;
  }
  BattleActorControl__sendEventFSM_46076216(v9, v10, v11, v7);
}


void __fastcall BattleActorControl__sendEventFSM_46076216(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *beforeWeaponFsm; // x22
  const MethodInfo *v13; // x1
  __int64 Fsm; // x0
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  __int64 v17; // x22
  int32_t v18; // w1
  const MethodInfo *v19; // x3
  int32_t v20; // w1
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v25; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v27; // x8
  __int64 v28; // x9
  int max_length; // w10
  UnityEngine_Object_o *v30; // x22
  struct PlayMakerFSM_array *v31; // x8
  __int64 v32; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v33; // x21
  struct PlayMakerFSM_array *v34; // x8
  __int64 v35; // x9

  if ( (byte_4B1F63F & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, name);
    sub_1BCAFF8(&string___TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_22495/*"pig"*/, v8);
    sub_1BCAFF8(&StringLiteral_24572/*"weapon"*/, v9);
    sub_1BCAFF8(&StringLiteral_1770/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/, v10);
    sub_1BCAFF8(&StringLiteral_18021/*"common"*/, v11);
    byte_4B1F63F = 1;
  }
  beforeWeaponFsm = (UnityEngine_Object_o *)this->fields.beforeWeaponFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(beforeWeaponFsm, 0LL, 0LL) )
  {
    Fsm = (__int64)this->fields.beforeWeaponFsm;
    if ( Fsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
      return;
    }
LABEL_32:
    sub_1BCB254(Fsm, v13);
  }
  Fsm = sub_1BCB0A0(string___TypeInfo, 3LL);
  if ( !Fsm )
    goto LABEL_32;
  v17 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_34;
  v18 = StringLiteral_24572/*"weapon"*/;
  *(_QWORD *)(Fsm + 32) = StringLiteral_24572/*"weapon"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(Fsm + 32), v18, v15, v16);
  if ( *(_DWORD *)(v17 + 24) <= 1u )
    goto LABEL_34;
  v20 = StringLiteral_18021/*"common"*/;
  *(_QWORD *)(v17 + 40) = StringLiteral_18021/*"common"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 40), v20, v15, v19);
  if ( *(_DWORD *)(v17 + 24) <= 2u )
    goto LABEL_34;
  v22 = StringLiteral_22495/*"pig"*/;
  *(_QWORD *)(v17 + 48) = StringLiteral_22495/*"pig"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 48), v22, v15, v21);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v17 + 24) )
    goto LABEL_34;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_32;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_34;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_32;
  v25 = *(Il2CppObject **)(v17 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_62491784(
                   (System_String_o *)StringLiteral_1770/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v25,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v27 = this->fields.motionFSM;
  if ( v27 )
  {
    v28 = this->fields.actindex;
    max_length = v27->max_length;
    if ( (int)v28 < max_length )
    {
      if ( (unsigned int)v28 >= max_length )
        goto LABEL_34;
      v30 = (UnityEngine_Object_o *)v27->m_Items[v28];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v13);
          v31 = this->fields.motionFSM;
          if ( !v31 )
            goto LABEL_32;
          v32 = this->fields.actindex;
          if ( (unsigned int)v32 >= v31->max_length )
            goto LABEL_34;
          v33 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v31->m_Items[v32];
          if ( !Fsm )
            goto LABEL_32;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_32;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v33 )
            goto LABEL_32;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v33, (System_String_o *)Fsm, 0LL);
        }
        v34 = this->fields.motionFSM;
        if ( !v34 )
          goto LABEL_32;
        v35 = this->fields.actindex;
        if ( (unsigned int)v35 < v34->max_length )
        {
          Fsm = (__int64)v34->m_Items[v35];
          if ( Fsm )
            goto LABEL_7;
          goto LABEL_32;
        }
LABEL_34:
        sub_1BCB25C(Fsm, v13, v15);
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
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v7; // x3

  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                                       this,
                                       name,
                                       (const MethodInfo *)isCallFinishInterrupt);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  BattleActorControl__sendEventFSM_46076216(
    this,
    MotionFsmIndexAndFixedMotionName.fields.Item2,
    isCallFinishInterrupt,
    v7);
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
  struct PlayMakerFSM_array *v14; // x8
  struct PlayMakerFSM_array *v15; // x8
  HutongGames_PlayMaker_FsmInt_o *v16; // x21
  struct PlayMakerFSM_array *v17; // x8
  struct PlayMakerFSM_array *v18; // x8

  v4 = this;
  if ( (byte_4B1F62F & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_4791/*"Count_Action"*/, actiondata);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_4792/*"Count_Hit"*/, v5);
    byte_4B1F62F = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_69;
  if ( !motionFSM->max_length )
    goto LABEL_70;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4791/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_69;
  v7 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v7 )
    goto LABEL_69;
  LODWORD(v7->fields.motionFSM) = (_DWORD)this;
  v8 = v4->fields.motionFSM;
  if ( !v8 )
    goto LABEL_69;
  if ( !v8->max_length )
    goto LABEL_70;
  this = (BattleActorControl_o *)v8->m_Items[0];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4792/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_69;
  LODWORD(this->fields.motionFSM) = actiondata->fields.attackcount;
  v9 = v4->fields.motionFSM;
  if ( !v9 )
    goto LABEL_69;
  if ( v9->max_length <= 1 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v9->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId) == 0LL )
  {
LABEL_69:
    sub_1BCB254(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4791/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v10 = v4->fields.motionFSM;
    if ( !v10 )
      goto LABEL_69;
    if ( v10->max_length <= 1 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v10->m_Items[1];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_69;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_69;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4791/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !FsmInt )
      goto LABEL_69;
    FsmInt->fields.value = (int)this;
  }
  v12 = v4->fields.motionFSM;
  if ( !v12 )
    goto LABEL_69;
  if ( v12->max_length <= 1 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v12->m_Items[1];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4792/*"Count_Hit"*/,
                                   0LL);
  if ( this )
  {
    v13 = v4->fields.motionFSM;
    if ( !v13 )
      goto LABEL_69;
    if ( v13->max_length <= 1 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v13->m_Items[1];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_69;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_4792/*"Count_Hit"*/,
                                     0LL);
    if ( !this )
      goto LABEL_69;
    LODWORD(this->fields.motionFSM) = actiondata->fields.attackcount;
  }
  v14 = v4->fields.motionFSM;
  if ( !v14 )
    goto LABEL_69;
  if ( v14->max_length <= 2 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v14->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4791/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v15 = v4->fields.motionFSM;
    if ( !v15 )
      goto LABEL_69;
    if ( v15->max_length <= 2 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v15->m_Items[2];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_69;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_69;
    v16 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
            (HutongGames_PlayMaker_FsmVariables_o *)this,
            (System_String_o *)StringLiteral_4791/*"Count_Action"*/,
            0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !v16 )
      goto LABEL_69;
    v16->fields.value = (int)this;
  }
  v17 = v4->fields.motionFSM;
  if ( !v17 )
    goto LABEL_69;
  if ( v17->max_length <= 2 )
LABEL_70:
    sub_1BCB25C(this, actiondata, method);
  this = (BattleActorControl_o *)v17->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4792/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v18 = v4->fields.motionFSM;
  if ( !v18 )
    goto LABEL_69;
  if ( v18->max_length <= 2 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v18->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4792/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_69;
  LODWORD(this->fields.motionFSM) = actiondata->fields.attackcount;
}


void __fastcall BattleActorControl__setAddAura(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v5; // x2

  if ( !svtdata )
    sub_1BCB254(this, 0LL);
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
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))CompleteList->klass->vtable._26_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._27_CopyTo.methodPtr,
          method) & 1) != 0 )
  {
    CompleteList = this->fields.CompleteList;
    if ( !CompleteList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._37_Remove.method)(
      CompleteList,
      name,
      CompleteList->klass->vtable._38_get_SyncRoot.methodPtr);
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
LABEL_7:
    sub_1BCB254(CompleteList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))CompleteList->klass->vtable._22_Add.method)(
    CompleteList,
    name,
    ec,
    CompleteList->klass->vtable._23_Clear.methodPtr);
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
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer, const MethodInfo *))EventList->klass->vtable._25_Contains.method)(
          EventList,
          name,
          EventList->klass->vtable._26_ContainsKey.methodPtr,
          method) & 1) != 0 )
  {
    EventList = this->fields.EventList;
    if ( !EventList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._37_Remove.method)(
      EventList,
      name,
      EventList->klass->vtable._38_get_SyncRoot.methodPtr);
  }
  EventList = this->fields.EventList;
  if ( !EventList )
LABEL_7:
    sub_1BCB254(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))EventList->klass->vtable._22_Add.method)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._23_Clear.methodPtr);
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
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  bool v12; // w19
  Il2CppObject *currentValue; // x20
  Il2CppObject *Component_object; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B1F6A9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, flg);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v5);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v6);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v7);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v8);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v10);
    byte_4B1F6A9 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_3320F94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_33210F4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_20:
    sub_1BCB254(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_39E2464 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
         &v15,
         (const MethodInfo_3473984 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v12 = flg;
    do
    {
      currentValue = v15.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Equality(
                                                                           (UnityEngine_Object_o *)currentValue,
                                                                           0LL,
                                                                           0LL);
      if ( ((unsigned __int8)auraList & 1) == 0 )
      {
        if ( !currentValue )
          goto LABEL_20;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)currentValue,
                             (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                             (UnityEngine_Object_o *)Component_object,
                                                                             0LL,
                                                                             0LL);
        if ( ((unsigned __int8)auraList & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          BillBoard__setFlip((BillBoard_o *)Component_object, v12, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v15,
              (const MethodInfo_3473984 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void __fastcall BattleActorControl__setCamera(
        BattleActorControl_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4B1F62A & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, camera);
    byte_4B1F62A = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_1BCB254(gameObject, v6);
  }
  *((_QWORD *)gameObject + 4) = camera;
  sub_1BCAF9C((CGThumbnailListItem_o *)(gameObject + 32), (int32_t)camera, v7, v8);
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
  if ( (byte_4B1F641 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, tr);
    byte_4B1F641 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_1BCB254(gameObject, v6);
  }
  if ( !v3 )
    goto LABEL_16;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  v9 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)v3, 0LL);
  y = v9.fields.y;
LABEL_15:
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
  UnityEngine_Transform_o *v5; // x0
  UnityEngine_Transform_o *v6; // x20
  int v7; // s0
  float v11; // s0
  float scale; // s1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v14; // x20
  int v15; // s0
  float v19; // s2
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  dir = this->fields.dir;
  if ( !dir )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      v21.fields.y = 4.7124;
      v14 = transform;
      v21.fields.x = 0.0;
      v21.fields.z = 0.0;
      *(UnityEngine_Quaternion_o *)&v15 = UnityEngine_Quaternion__Internal_FromEulerRad(v21, 0LL);
      if ( v14 )
      {
        UnityEngine_Transform__set_localRotation(v14, *(UnityEngine_Quaternion_o *)&v15, 0LL);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
          if ( actorObject )
          {
            scale = this->fields.scale;
            v11 = -scale;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_15:
    sub_1BCB254(actorObject, method);
  }
  if ( dir == 1 )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      v5 = UnityEngine_GameObject__get_transform(actorObject, 0LL);
      v20.fields.y = 1.5708;
      v6 = v5;
      v20.fields.x = 0.0;
      v20.fields.z = 0.0;
      *(UnityEngine_Quaternion_o *)&v7 = UnityEngine_Quaternion__Internal_FromEulerRad(v20, 0LL);
      if ( v6 )
      {
        UnityEngine_Transform__set_localRotation(v6, *(UnityEngine_Quaternion_o *)&v7, 0LL);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL);
          if ( actorObject )
          {
            v11 = this->fields.scale;
            scale = v11;
LABEL_13:
            v19 = scale;
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)actorObject,
              *(UnityEngine_Vector3_o *)&v11,
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
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
  v10.fields.y = 1.5708;
  v5 = transform;
  v10.fields.x = 0.0;
  v10.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v10, 0LL);
  if ( !v5
    || (UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL),
        (actorObject = this->fields.actorObject) == 0LL)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCB254(actorObject, method);
  }
  v11.fields.x = this->fields.scale;
  v11.fields.y = v11.fields.x;
  v11.fields.z = v11.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v11, 0LL);
  this->fields.dir = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setDirRight(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  int v6; // s0
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(actorObject, 0LL);
  v10.fields.y = 4.7124;
  v5 = transform;
  v10.fields.x = 0.0;
  v10.fields.z = 0.0;
  *(UnityEngine_Quaternion_o *)&v6 = UnityEngine_Quaternion__Internal_FromEulerRad(v10, 0LL);
  if ( !v5
    || (UnityEngine_Transform__set_localRotation(v5, *(UnityEngine_Quaternion_o *)&v6, 0LL),
        (actorObject = this->fields.actorObject) == 0LL)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0LL)) == 0LL )
  {
LABEL_6:
    sub_1BCB254(actorObject, method);
  }
  v11.fields.y = this->fields.scale;
  v11.fields.x = -v11.fields.y;
  v11.fields.z = v11.fields.y;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v11, 0LL);
  this->fields.dir = 0;
}


void __fastcall BattleActorControl__setEnemyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.enemyStage = obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.enemyStage, (int32_t)obj, (int32_t)method, v3);
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
  ConstantMaster_o *Master_object; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  int v11; // w20
  __int64 v12; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x25
  UnityEngine_Object_o *v15; // x21
  struct PlayMakerFSM_array *v16; // x8
  struct PlayMakerFSM_array *v17; // x8

  if ( (byte_4B1F62E & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    sub_1BCAFF8(&StringLiteral_8365/*"LimitedPeriod"*/, v5);
    sub_1BCAFF8(&StringLiteral_8195/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v6);
    byte_4B1F62E = 1;
  }
  if ( this->fields.motionFSM )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ConstantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( !Master_object
      || (Master_object = (ConstantMaster_o *)ConstantMaster__GetValue(
                                                Master_object,
                                                (System_String_o *)StringLiteral_8195/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                0LL),
          (motionFSM = this->fields.motionFSM) == 0LL) )
    {
LABEL_28:
      sub_1BCB254(Master_object, v8);
    }
    v11 = (int)Master_object;
    v12 = 4LL;
    while ( 1 )
    {
      max_length = motionFSM->max_length;
      v14 = v12 - 4;
      if ( v12 - 4 >= (int)max_length )
        break;
      if ( v14 >= max_length )
        goto LABEL_30;
      v15 = (UnityEngine_Object_o *)*((_QWORD *)&motionFSM->obj.klass + v12);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ConstantMaster_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v16 = this->fields.motionFSM;
        if ( !v16 )
          goto LABEL_28;
        if ( v14 >= v16->max_length )
          goto LABEL_30;
        Master_object = (ConstantMaster_o *)*((_QWORD *)&v16->obj.klass + v12);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (ConstantMaster_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Master_object, 0LL);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = *(ConstantMaster_o **)&Master_object[1].fields._MasterKind_k__BackingField;
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (ConstantMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                              (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                              (System_String_o *)StringLiteral_8365/*"LimitedPeriod"*/,
                                              0LL);
        if ( Master_object )
        {
          v17 = this->fields.motionFSM;
          if ( !v17 )
            goto LABEL_28;
          if ( v14 >= v17->max_length )
LABEL_30:
            sub_1BCB25C(Master_object, v8, v9);
          Master_object = (ConstantMaster_o *)*((_QWORD *)&v17->obj.klass + v12);
          if ( !Master_object )
            goto LABEL_28;
          Master_object = (ConstantMaster_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Master_object, 0LL);
          if ( !Master_object )
            goto LABEL_28;
          Master_object = *(ConstantMaster_o **)&Master_object[1].fields._MasterKind_k__BackingField;
          if ( !Master_object )
            goto LABEL_28;
          Master_object = (ConstantMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                (System_String_o *)StringLiteral_8365/*"LimitedPeriod"*/,
                                                0LL);
          if ( !Master_object )
            goto LABEL_28;
          LODWORD(Master_object->fields.seriazlier) = v11;
        }
      }
      motionFSM = this->fields.motionFSM;
      ++v12;
      if ( !motionFSM )
        goto LABEL_28;
    }
  }
}


void __fastcall BattleActorControl__setMotionListForDemo(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        UnityEngine_GameObject_o *commonMotionPrefab,
        UnityEngine_GameObject_o *commonPigMotionPrefab,
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
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  struct PlayMakerFSM_array *v31; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 gameObject; // x0
  __int64 v36; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x25
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x24
  UnityEngine_GameObject_o *v41; // x26
  int32_t SvtId; // w27
  const MethodInfo *v43; // x2
  int32_t WeaponGroup; // w28
  UnityEngine_GameObject_o *v45; // x27
  struct PlayMakerFSM_array *v46; // x26
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  __int64 v49; // x27
  struct PlayMakerFSM_array *v50; // x26
  const MethodInfo *v51; // x3
  __int64 v52; // x25
  struct PlayMakerFSM_array *v53; // x25
  const MethodInfo *v54; // x3
  __int64 v55; // x24
  unsigned __int64 v56; // x28
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v58; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v60; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct PlayMakerFSM_array *v63; // x8
  struct PlayMakerFSM_array *v64; // x8
  struct PlayMakerFSM_array *v65; // x8
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct PlayMakerFSM_array *v68; // x8
  struct PlayMakerFSM_array *v69; // x8
  char v70; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v73; // x8
  struct BattlePerformance_o *v74; // x8
  float v75; // s0
  struct PlayMakerFSM_array *v76; // x8
  struct BattlePerformance_o *v77; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  struct PlayMakerFSM_array *v82; // x8
  PlayMakerFSM_o *v83; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v87; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  struct PlayMakerFSM_array *v92; // x8
  PlayMakerFSM_o *v93; // x0
  HutongGames_PlayMaker_Fsm_o *v94; // x0
  __int64 v95; // x1
  HutongGames_PlayMaker_FsmVariables_o *v96; // x0
  HutongGames_PlayMaker_FsmInt_o *v97; // x0
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  __int64 v101; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v102; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v103; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1F62D & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v15);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v16);
    sub_1BCAFF8(&long_TypeInfo, v17);
    sub_1BCAFF8(&JsonManager_TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v20);
    sub_1BCAFF8(&PlayMakerFSM___TypeInfo, v21);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v22);
    sub_1BCAFF8(&StringLiteral_13538/*"TargetFrontPos"*/, v23);
    sub_1BCAFF8(&StringLiteral_13537/*"TargetBackPos"*/, v24);
    sub_1BCAFF8(&StringLiteral_3926/*"Camera"*/, v25);
    sub_1BCAFF8(&StringLiteral_2122/*"ActorObject"*/, v26);
    sub_1BCAFF8(&StringLiteral_16054/*"_ENEMY"*/, v27);
    sub_1BCAFF8(&StringLiteral_3932/*"CameraFsm"*/, v28);
    sub_1BCAFF8(&StringLiteral_10520/*"Performance"*/, v29);
    sub_1BCAFF8(&StringLiteral_2123/*"ActorSide"*/, v30);
    byte_4B1F62D = 1;
  }
  memset(&v103, 0, sizeof(v103));
  v31 = (struct PlayMakerFSM_array *)sub_1BCB0A0(PlayMakerFSM___TypeInfo, 3LL);
  this->fields.motionFSM = v31;
  p_motionFSM = &this->fields.motionFSM;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.motionFSM, (int32_t)v31, v33, v34);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_110;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_110;
  v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  v40 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonPigMotionPrefab, v39, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_110;
  v41 = (UnityEngine_GameObject_o *)gameObject;
  SvtId = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 0, v43);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v41, SvtId, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_110;
  v45 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v46 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v45,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v46 )
    goto LABEL_110;
  v49 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCB134(gameObject, v46->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_125;
  }
  if ( !v46->max_length )
    goto LABEL_111;
  v46->m_Items[0] = (PlayMakerFSM_o *)v49;
  sub_1BCAF9C((CGThumbnailListItem_o *)v46->m_Items, v49, v47, v48);
  if ( !Object )
    goto LABEL_110;
  v50 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v50 )
    goto LABEL_110;
  v52 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCB134(gameObject, v50->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_125;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_111;
  v50->m_Items[1] = (PlayMakerFSM_o *)v52;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v50->m_Items[1], v52, v47, v51);
  if ( !v40 )
    goto LABEL_110;
  v53 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v40,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v53 )
    goto LABEL_110;
  v55 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCB134(gameObject, v53->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_125:
      v101 = sub_1BCB278(gameObject);
      sub_1BCB120(v101, 0LL);
    }
  }
  if ( v53->max_length <= 2 )
LABEL_111:
    sub_1BCB25C(gameObject, v36, v47);
  v53->m_Items[2] = (PlayMakerFSM_o *)v55;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v53->m_Items[2], v55, v47, v54);
  v56 = 0LL;
  p_actorside = &this->fields.actorside;
  do
  {
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v56 >= v58->max_length )
      goto LABEL_111;
    gameObject = (__int64)v58->m_Items[v56];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2122/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v60 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v56 >= v60->max_length )
      goto LABEL_111;
    gameObject = (__int64)v60->m_Items[v56];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2123/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_110;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1BCAF9C((CGThumbnailListItem_o *)(gameObject + 56), (int32_t)side, v61, v62);
    v63 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v56 >= v63->max_length )
      goto LABEL_111;
    gameObject = (__int64)v63->m_Items[v56];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3926/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v64 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v56 >= v64->max_length )
      goto LABEL_111;
    gameObject = (__int64)v64->m_Items[v56];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3932/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v65 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v56 >= v65->max_length )
      goto LABEL_111;
    gameObject = (__int64)v65->m_Items[v56];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10520/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.actorside, (int32_t)side, v66, v67);
    v68 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v56 >= v68->max_length )
      goto LABEL_111;
    gameObject = (__int64)v68->m_Items[v56];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13538/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_110;
      gameObject = System_String__Equals_62485728(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16054/*"_ENEMY"*/,
                     0LL);
      v69 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_110;
      if ( v56 >= v69->max_length )
        goto LABEL_111;
      v70 = gameObject;
      gameObject = (__int64)v69->m_Items[v56];
      if ( !gameObject )
        goto LABEL_110;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_110;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_110;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13538/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_110;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v70 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_110;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v73 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_110;
        if ( v56 >= v73->max_length )
          goto LABEL_111;
        gameObject = (__int64)v73->m_Items[v56];
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13537/*"TargetBackPos"*/,
                                0LL);
        v74 = this->fields.performance;
        if ( !v74 || !gameObject )
          goto LABEL_110;
        v75 = v74->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_110;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v76 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_110;
        if ( v56 >= v76->max_length )
          goto LABEL_111;
        gameObject = (__int64)v76->m_Items[v56];
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13537/*"TargetBackPos"*/,
                                0LL);
        v77 = this->fields.performance;
        if ( !v77 || !gameObject )
          goto LABEL_110;
        v75 = -v77->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v75;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    ++v56;
  }
  while ( v56 != 3 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_110;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_110:
    sub_1BCB254(gameObject, v36);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v102,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v103 = v102;
  while ( 1 )
  {
    v79 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v103,
            (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v79 )
      break;
    v82 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1BCB254(v79, v80);
    if ( !v82->max_length )
      sub_1BCB25C(v79, v80, v81);
    v83 = v82->m_Items[0];
    if ( !v83 )
      sub_1BCB254(0LL, v80);
    key = v103.fields._current.fields.key;
    value = v103.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v83, 0LL);
    if ( !Fsm )
      sub_1BCB254(0LL, v87);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1BCB254(0LL, v87);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v92 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1BCB254(FsmInt, v90);
      if ( !v92->max_length )
        sub_1BCB25C(FsmInt, v90, v91);
      v93 = v92->m_Items[0];
      if ( !v93 )
        sub_1BCB254(0LL, v90);
      v94 = PlayMakerFSM__get_Fsm(v93, 0LL);
      if ( !v94 )
        sub_1BCB254(0LL, v95);
      v96 = v94->fields.variables;
      if ( !v96 )
        sub_1BCB254(0LL, v95);
      v97 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v96, (System_String_o *)key, 0LL);
      if ( !v97 )
        sub_1BCB254(0LL, v98);
      if ( !value )
        goto LABEL_118;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1BCB514(value);
LABEL_118:
        sub_1BCB254(v97, v98);
      }
      v97->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v99, v100);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v103,
    (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 gameObject; // x0
  __int64 v32; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *CommonMotionPrefab_k__BackingField; // x24
  UnityEngine_Transform_o *transform; // x0
  struct BattlePerformance_o *v36; // x8
  UnityEngine_GameObject_o *CommonPigMotionPrefab_k__BackingField; // x24
  UnityEngine_GameObject_o *v38; // x25
  UnityEngine_Transform_o *v39; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v41; // x26
  int32_t SvtId; // w27
  const MethodInfo *v43; // x2
  int32_t WeaponGroup; // w28
  UnityEngine_GameObject_o *v45; // x27
  struct PlayMakerFSM_array *v46; // x26
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  __int64 v49; // x27
  struct PlayMakerFSM_array *v50; // x26
  const MethodInfo *v51; // x3
  __int64 v52; // x25
  struct PlayMakerFSM_array *v53; // x25
  const MethodInfo *v54; // x3
  __int64 v55; // x24
  unsigned __int64 v56; // x28
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v58; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v60; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct PlayMakerFSM_array *v63; // x8
  struct PlayMakerFSM_array *v64; // x8
  struct PlayMakerFSM_array *v65; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v66; // x25
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  struct PlayMakerFSM_array *v69; // x8
  struct PlayMakerFSM_array *v70; // x8
  char v71; // w25
  struct BattlePerformance_o *v72; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v74; // x8
  struct BattlePerformance_o *v75; // x8
  float v76; // s0
  struct PlayMakerFSM_array *v77; // x8
  struct BattlePerformance_o *v78; // x8
  System_String_o *StrParam; // x21
  _BOOL8 v80; // x0
  __int64 v81; // x1
  __int64 v82; // x2
  struct PlayMakerFSM_array *v83; // x8
  PlayMakerFSM_o *v84; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v88; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  struct PlayMakerFSM_array *v93; // x8
  PlayMakerFSM_o *v94; // x0
  HutongGames_PlayMaker_Fsm_o *v95; // x0
  __int64 v96; // x1
  HutongGames_PlayMaker_FsmVariables_o *v97; // x0
  HutongGames_PlayMaker_FsmInt_o *v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x3
  const MethodInfo *v102; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x1
  __int64 v107; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v108; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v109; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4B1F62B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v12);
    sub_1BCAFF8(&long_TypeInfo, v13);
    sub_1BCAFF8(&JsonManager_TypeInfo, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_1BCAFF8(&PlayMakerFSM___TypeInfo, v17);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v18);
    sub_1BCAFF8(&StringLiteral_13538/*"TargetFrontPos"*/, v19);
    sub_1BCAFF8(&StringLiteral_13537/*"TargetBackPos"*/, v20);
    sub_1BCAFF8(&StringLiteral_3926/*"Camera"*/, v21);
    sub_1BCAFF8(&StringLiteral_2122/*"ActorObject"*/, v22);
    sub_1BCAFF8(&StringLiteral_16054/*"_ENEMY"*/, v23);
    sub_1BCAFF8(&StringLiteral_3932/*"CameraFsm"*/, v24);
    sub_1BCAFF8(&StringLiteral_10520/*"Performance"*/, v25);
    sub_1BCAFF8(&StringLiteral_2123/*"ActorSide"*/, v26);
    byte_4B1F62B = 1;
  }
  memset(&v109, 0, sizeof(v109));
  v27 = (struct PlayMakerFSM_array *)sub_1BCB0A0(PlayMakerFSM___TypeInfo, 3LL);
  this->fields.motionFSM = v27;
  p_motionFSM = &this->fields.motionFSM;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.motionFSM, (int32_t)v27, v29, v30);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_113;
  CommonMotionPrefab_k__BackingField = performance->fields._CommonMotionPrefab_k__BackingField;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_113;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  gameObject = (__int64)BaseMonoBehaviour__createObject(
                          (BaseMonoBehaviour_o *)this,
                          CommonMotionPrefab_k__BackingField,
                          transform,
                          0LL,
                          0LL);
  v36 = this->fields.performance;
  if ( !v36 )
    goto LABEL_113;
  CommonPigMotionPrefab_k__BackingField = v36->fields._CommonPigMotionPrefab_k__BackingField;
  v38 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_113;
  v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             CommonPigMotionPrefab_k__BackingField,
             v39,
             0LL,
             0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_113;
  v41 = (UnityEngine_GameObject_o *)gameObject;
  SvtId = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 0, v43);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v41, SvtId, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_113;
  v45 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v46 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v45,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v46 )
    goto LABEL_113;
  v49 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCB134(gameObject, v46->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_128;
  }
  if ( !v46->max_length )
    goto LABEL_114;
  v46->m_Items[0] = (PlayMakerFSM_o *)v49;
  sub_1BCAF9C((CGThumbnailListItem_o *)v46->m_Items, v49, v47, v48);
  if ( !v38 )
    goto LABEL_113;
  v50 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v38,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v50 )
    goto LABEL_113;
  v52 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCB134(gameObject, v50->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_128;
  }
  if ( v50->max_length <= 1 )
    goto LABEL_114;
  v50->m_Items[1] = (PlayMakerFSM_o *)v52;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v50->m_Items[1], v52, v47, v51);
  if ( !Object )
    goto LABEL_113;
  v53 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v53 )
    goto LABEL_113;
  v55 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1BCB134(gameObject, v53->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_128:
      v107 = sub_1BCB278(gameObject);
      sub_1BCB120(v107, 0LL);
    }
  }
  if ( v53->max_length <= 2 )
LABEL_114:
    sub_1BCB25C(gameObject, v32, v47);
  v53->m_Items[2] = (PlayMakerFSM_o *)v55;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v53->m_Items[2], v55, v47, v54);
  v56 = 0LL;
  p_actorside = &this->fields.actorside;
  do
  {
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v56 >= v58->max_length )
      goto LABEL_114;
    gameObject = (__int64)v58->m_Items[v56];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2122/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v60 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v56 >= v60->max_length )
      goto LABEL_114;
    gameObject = (__int64)v60->m_Items[v56];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2123/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_113;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1BCAF9C((CGThumbnailListItem_o *)(gameObject + 56), (int32_t)side, v61, v62);
    v63 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v56 >= v63->max_length )
      goto LABEL_114;
    gameObject = (__int64)v63->m_Items[v56];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3926/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v64 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v56 >= v64->max_length )
      goto LABEL_114;
    gameObject = (__int64)v64->m_Items[v56];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3932/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v65 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v56 >= v65->max_length )
      goto LABEL_114;
    gameObject = (__int64)v65->m_Items[v56];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10520/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_113;
    v66 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v66 )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v66, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.actorside, (int32_t)side, v67, v68);
    v69 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v56 >= v69->max_length )
      goto LABEL_114;
    gameObject = (__int64)v69->m_Items[v56];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13538/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_113;
      gameObject = System_String__Equals_62485728(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16054/*"_ENEMY"*/,
                     0LL);
      v70 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_113;
      if ( v56 >= v70->max_length )
        goto LABEL_114;
      v71 = gameObject;
      gameObject = (__int64)v70->m_Items[v56];
      if ( !gameObject )
        goto LABEL_113;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_113;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_113;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13538/*"TargetFrontPos"*/,
                              0LL);
      v72 = this->fields.performance;
      if ( !v72 )
        goto LABEL_113;
      distanceofactor = v72->fields.distanceofactor;
      if ( (v71 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_113;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v74 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_113;
        if ( v56 >= v74->max_length )
          goto LABEL_114;
        gameObject = (__int64)v74->m_Items[v56];
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13537/*"TargetBackPos"*/,
                                0LL);
        v75 = this->fields.performance;
        if ( !v75 || !gameObject )
          goto LABEL_113;
        v76 = v75->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_113;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v77 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_113;
        if ( v56 >= v77->max_length )
          goto LABEL_114;
        gameObject = (__int64)v77->m_Items[v56];
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13537/*"TargetBackPos"*/,
                                0LL);
        v78 = this->fields.performance;
        if ( !v78 || !gameObject )
          goto LABEL_113;
        v76 = -v78->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v76;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    ++v56;
  }
  while ( v56 != 3 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_113;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_113:
    sub_1BCB254(gameObject, v32);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v108,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v109 = v108;
  while ( 1 )
  {
    v80 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v109,
            (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v80 )
      break;
    v83 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1BCB254(v80, v81);
    if ( !v83->max_length )
      sub_1BCB25C(v80, v81, v82);
    v84 = v83->m_Items[0];
    if ( !v84 )
      sub_1BCB254(0LL, v81);
    key = v109.fields._current.fields.key;
    value = v109.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v84, 0LL);
    if ( !Fsm )
      sub_1BCB254(0LL, v88);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1BCB254(0LL, v88);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v93 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1BCB254(FsmInt, v91);
      if ( !v93->max_length )
        sub_1BCB25C(FsmInt, v91, v92);
      v94 = v93->m_Items[0];
      if ( !v94 )
        sub_1BCB254(0LL, v91);
      v95 = PlayMakerFSM__get_Fsm(v94, 0LL);
      if ( !v95 )
        sub_1BCB254(0LL, v96);
      v97 = v95->fields.variables;
      if ( !v97 )
        sub_1BCB254(0LL, v96);
      v98 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v97, (System_String_o *)key, 0LL);
      if ( !v98 )
        sub_1BCB254(0LL, v99);
      if ( !value )
        goto LABEL_121;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1BCB514(value);
LABEL_121:
        sub_1BCB254(v98, v99);
      }
      v98->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v100, v101);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v109,
    (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v102);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v104,
    v105);
  BattleActorControl__setLimitedPeriod(this, v106);
}


void __fastcall BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.myStage = obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.myStage, (int32_t)obj, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setNpDamageVoice(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  __int64 v5; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v7; // x8
  unsigned __int64 v8; // x21
  bool v9; // w24
  UnityEngine_Object_o *v10; // x19
  HutongGames_PlayMaker_FsmVariables_o *v11; // x19

  v4 = this;
  if ( (byte_4B1F658 & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, flg);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_9446/*"Noble_Check"*/, v5);
    byte_4B1F658 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_1BCB254(this, flg);
  v7 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = flg;
    do
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1BCB25C(this, flg, method);
      v10 = (UnityEngine_Object_o *)motionFSM->m_Items[v8];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v10 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v10, 0LL);
        if ( !this )
          goto LABEL_18;
        v11 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.currentSpShadowEffectId;
        if ( v11 )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.currentSpShadowEffectId,
                                           (System_String_o *)StringLiteral_9446/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             v11,
                                             (System_String_o *)StringLiteral_9446/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_18;
            LOBYTE(this->fields.motionFSM) = v9;
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
  const MethodInfo *v3; // x3

  this->fields.performance = perf;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.performance, (int32_t)perf, (int32_t)method, v3);
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
  BattleActorControl_o *v22; // x20
  int32_t SvtId; // w21
  const MethodInfo *v24; // x2
  int32_t WeaponGroup; // w22
  BattleActorControl_o *v26; // x21
  struct PlayMakerFSM_array *v27; // x20
  const MethodInfo *v28; // x3
  BattleActorControl_o *v29; // x21
  struct PlayMakerFSM_array *v30; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v31; // x20
  struct PlayMakerFSM_array *v32; // x8
  struct PlayMakerFSM_array *v33; // x8
  BattleActorControl_o *v34; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct PlayMakerFSM_array *v37; // x8
  struct PlayMakerFSM_array *v38; // x8
  BattleActorControl_o *v39; // x20
  struct PlayMakerFSM_array *v40; // x8
  struct PlayMakerFSM_array *v41; // x8
  BattleActorControl_o *v42; // x20
  struct PlayMakerFSM_array *v43; // x8
  BattleActorControl_o *v44; // x20
  struct PlayMakerFSM_array *v45; // x8
  struct PlayMakerFSM_array *v46; // x8
  char v47; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v50; // x8
  struct BattlePerformance_o *v51; // x8
  float v52; // s0
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v55; // x1
  struct PlayMakerFSM_array *v56; // x8
  struct BattlePerformance_o *v57; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  struct PlayMakerFSM_array *v62; // x8
  PlayMakerFSM_o *v63; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v67; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  struct PlayMakerFSM_array *v72; // x8
  PlayMakerFSM_o *v73; // x0
  HutongGames_PlayMaker_Fsm_o *v74; // x0
  __int64 v75; // x1
  HutongGames_PlayMaker_FsmVariables_o *v76; // x0
  HutongGames_PlayMaker_FsmInt_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  const MethodInfo *v81; // x1
  System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  __int64 v85; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v86; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v87; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4B1F62C & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, flg);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v8);
    sub_1BCAFF8(&long_TypeInfo, v9);
    sub_1BCAFF8(&JsonManager_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v13);
    sub_1BCAFF8(&StringLiteral_13538/*"TargetFrontPos"*/, v14);
    sub_1BCAFF8(&StringLiteral_13537/*"TargetBackPos"*/, v15);
    sub_1BCAFF8(&StringLiteral_3926/*"Camera"*/, v16);
    sub_1BCAFF8(&StringLiteral_2122/*"ActorObject"*/, v17);
    sub_1BCAFF8(&StringLiteral_16054/*"_ENEMY"*/, v18);
    sub_1BCAFF8(&StringLiteral_3932/*"CameraFsm"*/, v19);
    sub_1BCAFF8(&StringLiteral_10520/*"Performance"*/, v20);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_2123/*"ActorSide"*/, v21);
    byte_4B1F62C = 1;
  }
  memset(&v87, 0, sizeof(v87));
  if ( !flg )
  {
    motionFSM = v4->fields.motionFSM;
    if ( !motionFSM )
      goto LABEL_124;
    if ( !motionFSM->max_length )
      goto LABEL_138;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( this )
    {
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( this )
        {
          FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)this,
                            (System_String_o *)StringLiteral_2122/*"ActorObject"*/,
                            0LL);
          this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
          if ( FsmGameObject )
          {
            HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)this, 0LL);
            goto LABEL_123;
          }
        }
      }
    }
LABEL_124:
    sub_1BCB254(this, flg);
  }
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_124;
  v22 = this;
  SvtId = BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  WeaponGroup = BattleActorControl__getWeaponGroup(v4, 0, v24);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(
                                   (UnityEngine_GameObject_o *)v22,
                                   SvtId,
                                   WeaponGroup,
                                   0LL);
  if ( !this )
    goto LABEL_124;
  v26 = this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v27 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v26,
                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v27 )
    goto LABEL_124;
  v29 = this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_1BCB134(this, v27->obj.klass->_1.element_class);
    if ( !this )
    {
      v85 = sub_1BCB278(0LL);
      sub_1BCB120(v85, 0LL);
    }
  }
  if ( !v27->max_length )
    goto LABEL_138;
  v27->m_Items[0] = (PlayMakerFSM_o *)v29;
  sub_1BCAF9C((CGThumbnailListItem_o *)v27->m_Items, (int32_t)v29, (int32_t)method, v28);
  v30 = v4->fields.motionFSM;
  if ( !v30 )
    goto LABEL_124;
  if ( !v30->max_length )
    goto LABEL_138;
  this = (BattleActorControl_o *)v30->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  v31 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_2122/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v31 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v31, (UnityEngine_GameObject_o *)this, 0LL);
  v32 = v4->fields.motionFSM;
  if ( !v32 )
    goto LABEL_124;
  if ( !v32->max_length )
    goto LABEL_138;
  this = (BattleActorControl_o *)v32->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2123/*"ActorSide"*/,
                                   0LL);
  v33 = v4->fields.motionFSM;
  if ( !v33 )
    goto LABEL_124;
  if ( v33->max_length <= 1 )
    goto LABEL_138;
  v34 = this;
  this = (BattleActorControl_o *)v33->m_Items[1];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2123/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v34 )
    goto LABEL_124;
  v34->fields.motionFSM = (struct PlayMakerFSM_array *)this;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v34->fields.motionFSM, (int32_t)this, v35, v36);
  v37 = v4->fields.motionFSM;
  if ( !v37 )
    goto LABEL_124;
  if ( !v37->max_length )
    goto LABEL_138;
  this = (BattleActorControl_o *)v37->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3926/*"Camera"*/,
                                   0LL);
  v38 = v4->fields.motionFSM;
  if ( !v38 )
    goto LABEL_124;
  if ( v38->max_length <= 1 )
    goto LABEL_138;
  v39 = this;
  this = (BattleActorControl_o *)v38->m_Items[1];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3926/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v39 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v39,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v40 = v4->fields.motionFSM;
  if ( !v40 )
    goto LABEL_124;
  if ( !v40->max_length )
    goto LABEL_138;
  this = (BattleActorControl_o *)v40->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3932/*"CameraFsm"*/,
                                   0LL);
  v41 = v4->fields.motionFSM;
  if ( !v41 )
    goto LABEL_124;
  if ( v41->max_length <= 1 )
    goto LABEL_138;
  v42 = this;
  this = (BattleActorControl_o *)v41->m_Items[1];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3932/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v42 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v42,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v43 = v4->fields.motionFSM;
  if ( !v43 )
    goto LABEL_124;
  if ( !v43->max_length )
    goto LABEL_138;
  this = (BattleActorControl_o *)v43->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_10520/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_124;
  v44 = this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v44 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v44,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v45 = v4->fields.motionFSM;
  if ( !v45 )
    goto LABEL_124;
  if ( !v45->max_length )
    goto LABEL_138;
  this = (BattleActorControl_o *)v45->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
         (HutongGames_PlayMaker_FsmVariables_o *)this,
         (System_String_o *)StringLiteral_13538/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( !this )
      goto LABEL_124;
    this = (BattleActorControl_o *)System_String__Equals_62485728(
                                     (System_String_o *)this,
                                     (System_String_o *)StringLiteral_16054/*"_ENEMY"*/,
                                     0LL);
    v46 = v4->fields.motionFSM;
    if ( !v46 )
      goto LABEL_124;
    if ( v46->max_length )
    {
      v47 = (char)this;
      this = (BattleActorControl_o *)v46->m_Items[0];
      if ( !this )
        goto LABEL_124;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_124;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_124;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13538/*"TargetFrontPos"*/,
                                       0LL);
      performance = v4->fields.performance;
      if ( !performance )
        goto LABEL_124;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v47 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_124;
        *(float *)&this->fields.motionFSM = -distanceofactor;
        HIDWORD(this->fields.motionFSM) = 0;
        LODWORD(this->fields.beforeWeaponFsm) = 0;
        v50 = v4->fields.motionFSM;
        if ( !v50 )
          goto LABEL_124;
        if ( v50->max_length )
        {
          this = (BattleActorControl_o *)v50->m_Items[0];
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( !this )
            goto LABEL_124;
          this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13537/*"TargetBackPos"*/,
                                           0LL);
          v51 = v4->fields.performance;
          if ( !v51 || !this )
            goto LABEL_124;
          v52 = v51->fields.distanceofactor;
LABEL_100:
          *(float *)&this->fields.motionFSM = v52;
          HIDWORD(this->fields.motionFSM) = 0;
          LODWORD(this->fields.beforeWeaponFsm) = 0;
          goto LABEL_101;
        }
      }
      else
      {
        if ( !this )
          goto LABEL_124;
        *(float *)&this->fields.motionFSM = distanceofactor;
        HIDWORD(this->fields.motionFSM) = 0;
        LODWORD(this->fields.beforeWeaponFsm) = 0;
        v56 = v4->fields.motionFSM;
        if ( !v56 )
          goto LABEL_124;
        if ( v56->max_length )
        {
          this = (BattleActorControl_o *)v56->m_Items[0];
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( !this )
            goto LABEL_124;
          this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13537/*"TargetBackPos"*/,
                                           0LL);
          v57 = v4->fields.performance;
          if ( !v57 || !this )
            goto LABEL_124;
          v52 = -v57->fields.distanceofactor;
          goto LABEL_100;
        }
      }
    }
LABEL_138:
    sub_1BCB25C(this, flg, method);
  }
LABEL_101:
  this = (BattleActorControl_o *)v4->fields.battleSvtData;
  if ( !this )
    goto LABEL_124;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)this, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BattleActorControl_o *)JsonManager__getDictionary(StrParam, 0LL);
  if ( !this )
    goto LABEL_124;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v86,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v87 = v86;
  while ( 1 )
  {
    v59 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v87,
            (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v59 )
      break;
    v62 = v4->fields.motionFSM;
    if ( !v62 )
      sub_1BCB254(v59, v60);
    if ( !v62->max_length )
      sub_1BCB25C(v59, v60, v61);
    v63 = v62->m_Items[0];
    if ( !v63 )
      sub_1BCB254(0LL, v60);
    key = v87.fields._current.fields.key;
    value = v87.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v63, 0LL);
    if ( !Fsm )
      sub_1BCB254(0LL, v67);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1BCB254(0LL, v67);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v72 = v4->fields.motionFSM;
      if ( !v72 )
        sub_1BCB254(FsmInt, v70);
      if ( !v72->max_length )
        sub_1BCB25C(FsmInt, v70, v71);
      v73 = v72->m_Items[0];
      if ( !v73 )
        sub_1BCB254(0LL, v70);
      v74 = PlayMakerFSM__get_Fsm(v73, 0LL);
      if ( !v74 )
        sub_1BCB254(0LL, v75);
      v76 = v74->fields.variables;
      if ( !v76 )
        sub_1BCB254(0LL, v75);
      v77 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v76, (System_String_o *)key, 0LL);
      if ( !v77 )
        sub_1BCB254(0LL, v78);
      if ( !value )
        goto LABEL_131;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1BCB514(value);
LABEL_131:
        sub_1BCB254(v77, v78);
      }
      v77->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v79, v80);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v87,
    (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(v4, v81);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v83,
    v84);
LABEL_123:
  BattleActorControl__setLimitedPeriod(v4, v55);
}


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
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x25
  __int64 Instance; // x0
  struct UnityEngine_GameObject_o *v36; // x1
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  BattleServantData_o **p_battleSvtData; // x22
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  BattleServantData_o *v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x21
  __int64 v44; // x23
  __int64 v45; // x24
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x23
  ServantEntity_o *v48; // x26
  struct UnityEngine_Transform_o *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w28
  _BOOL4 isForceAppearance; // w21
  int32_t v54; // w23
  UnityEngine_GameObject_o *gameObject; // x25
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  UnityEngine_Transform_o *v60; // x27
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x2
  BattlePerformance_o *performance; // x25
  int32_t v64; // w27
  System_String_o *v65; // x29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x27
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  System_String_o *HideInAnimNodeName; // x26
  bool v72; // w0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  UnityEngine_Transform_o *v75; // x0
  UnityEngine_Transform_o *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  struct System_String_o *v79; // x1
  UnityEngine_GameObject_o *v80; // x26
  int32_t v81; // w29
  UnityEngine_Transform_o *v82; // x25
  UnityEngine_Transform_o *v83; // x27
  UnityEngine_Transform_o *v84; // x27
  UnityEngine_Transform_o *v85; // x27
  UnityEngine_Transform_o *v86; // x27
  BattleFBXComponent_o *fbxcomponent; // x25
  _BOOL4 v88; // w21
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x3
  int32_t displayType; // w8
  bool v93; // w1
  bool v94; // w2
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__50787124; // x25
  System_Collections_Generic_List_object__o *v96; // x27
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x2
  UnityEngine_Transform_o *v100; // x27
  float actorScale; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  Il2CppObject *v103; // x28
  struct BattlePerformance_o *v104; // x8
  struct BattleData_o *data; // x8
  int32_t v106; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x26
  System_Predicate_object__o *v108; // x27
  Il2CppObject *v109; // x25
  struct BattleActorControl___c_StaticFields *v110; // x0
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  UnityEngine_SkinnedMeshRenderer_o *v113; // x27
  Il2CppObject *Component_object; // x26
  UnityEngine_Mesh_o *v115; // x28
  BattlePerformance_o *v116; // x28
  __int64 v117; // x25
  __int64 v118; // x29
  int32_t v119; // w29
  System_Action_o *v120; // x25
  struct BattlePerformance_o *v121; // x8
  EnemyScriptParam_EnemyTargetTouchAreaData_o *v122; // x27
  BattlePerformanceEnemy_o *EnemyPerf; // x25
  System_Object_array *Components_object; // x0
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  VisibleControlInfo_o *v127; // x25
  const MethodInfo *v128; // x3
  const MethodInfo *v129; // x4
  const MethodInfo *v130; // x1
  System_Object_array *v131; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  struct System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *Manager__LoadBattleActorDropEffectDict; // x0
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  UnityEngine_Object_o *v137; // x20
  struct BattlePerformance_o *v138; // x8
  UnityEngine_Object_o *v139; // x20
  struct BattlePerformance_o *v140; // x9
  int32_t ServantIndex; // w0
  int32_t v142; // w20
  UnityEngine_Object_o *dropPointComp; // x22
  UnityEngine_GameObject_o *v144; // x22
  Il2CppObject *v145; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Transform_o *v149; // x20
  __int64 v150; // x22
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  UnityEngine_GameObject_o *v153; // x1
  _BOOL4 v154; // [xsp+0h] [xbp-70h]
  int32_t v155; // [xsp+4h] [xbp-6Ch]
  Il2CppObject *object; // [xsp+8h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v157; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v158; // 0:x0.16
  UnityEngine_Vector3_o v159; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1F621 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, svtdata);
    sub_1BCAFF8(&Method_System_Array_IndexOf_int___, v5);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_1BCAFF8(&BattleDropPointComponent_DropPointData_TypeInfo, v8);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_BattleDropPointComponent___, v9);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v10);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v12);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponents_BattleAdjustPopupPosInScreenComponent___, v13);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___, v14);
    sub_1BCAFF8(&UnityEngine_GameObject_TypeInfo, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___76877152, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v18);
    sub_1BCAFF8(&UnityEngine_Mesh_TypeInfo, v19);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v20);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1BCAFF8(&System_Predicate_SkinnedMeshRenderer__TypeInfo, v22);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v23);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_1BCAFF8(&Method_BattleActorControl___c__setServantData_b__161_0__, v25);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass161_0__setServantData_b__1__, v26);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass161_0_TypeInfo, v27);
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v28);
    sub_1BCAFF8(&VisibleControlInfo_TypeInfo, v29);
    sub_1BCAFF8(&StringLiteral_18814/*"en_Head"*/, v30);
    sub_1BCAFF8(&StringLiteral_12725/*"Shadow"*/, v31);
    sub_1BCAFF8(&StringLiteral_18818/*"en_buff01"*/, v32);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v33);
    byte_4B1F621 = 1;
  }
  v34 = sub_1BCB244(BattleActorControl___c__DisplayClass161_0_TypeInfo);
  BattleActorControl___c__DisplayClass161_0___ctor((BattleActorControl___c__DisplayClass161_0_o *)v34, 0LL);
  if ( !v34 )
    goto LABEL_141;
  *(_QWORD *)(v34 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v34 + 16), (int32_t)this, v37, v38);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleSvtData, (int32_t)svtdata, v40, v41);
  if ( !svtdata )
    goto LABEL_141;
  this->fields.originalModelId = BattleServantData__GetOriginalModelId(svtdata, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_141;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_141;
  v43 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v157.fields.currentCryptoKey = v45;
  *(_QWORD *)&v157.fields.fakeValue = v44;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v157, 0LL);
  if ( !v43 )
    goto LABEL_141;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v43,
             Instance,
             (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v48 = (ServantEntity_o *)Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_141;
    v49 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12725/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.shadowObj, (int32_t)v49, v50, v51);
  }
  Instance = (__int64)*p_battleSvtData;
  object = (Il2CppObject *)v34;
  if ( !*p_battleSvtData )
    goto LABEL_141;
  Instance = BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_141;
  v52 = Instance;
  Instance = BattleServantData__GetLoadActorLimitCount(*p_battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_141;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  v54 = Instance;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v154 = isForceAppearance;
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               gameObject,
                               v52,
                               v54,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.actorObject, (int32_t)Manager__loadBattleActor, v58, v59);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_141;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  v60 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B16191 )
  {
    Instance = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_4B16191 = 1;
  }
  if ( !v60 )
    goto LABEL_141;
  UnityEngine_Transform__set_localPosition(v60, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleActorControl__SetupNodes(this, v61);
  BattleActorControl__ChangeShadowParent(this, v54, v62);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_141;
  performance = this->fields.performance;
  v64 = *(_DWORD *)(Instance + 24);
  Instance = BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_141;
  v155 = v52;
  BattlePerformance__registerCameraAction(performance, v64, Instance, 0LL);
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_141;
  v65 = (System_String_o *)StringLiteral_18814/*"en_Head"*/;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (__int64)TransformHelper__getNodeFromLvName(transform, v65, v54, 0, 0LL);
  if ( !Instance )
    goto LABEL_141;
  v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v68 = v67;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.checkScaleNode, 0, v69, v70);
  if ( v48 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v48, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( (Instance & 1) == 0 )
  {
    if ( !v65 )
      goto LABEL_141;
    v72 = System_String__Equals_62485728(v65, HideInAnimNodeName, 0LL);
    v36 = v68;
    if ( !v72 )
    {
      Instance = (__int64)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_141;
      v75 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (__int64)TransformHelper__getNodeFromLvName(v75, HideInAnimNodeName, v54, 0, 0LL);
      if ( !Instance )
        goto LABEL_141;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v36;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.checkScaleNode, (int32_t)v36, v73, v74);
  }
  v76 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v79 = TransformHelper__ExistNodeFromLvName(v76, (System_String_o *)StringLiteral_18818/*"en_buff01"*/, -1, 0, 0LL)
      ? (struct System_String_o *)StringLiteral_18818/*"en_buff01"*/
      : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v79;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._BuffEffectNodeName_k__BackingField, (int32_t)v79, v77, v78);
  v80 = (UnityEngine_GameObject_o *)sub_1BCB244(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_70118240(v80, 0LL);
  if ( !v80 )
    goto LABEL_141;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v80, 0LL);
  v81 = v52;
  if ( !v68 )
    goto LABEL_141;
  v82 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v68, 0LL);
  if ( !v82 )
    goto LABEL_141;
  UnityEngine_Transform__set_parent(v82, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v80, 0LL);
  v83 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B16191 )
  {
    Instance = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_4B16191 = 1;
  }
  if ( !v83 )
    goto LABEL_141;
  UnityEngine_Transform__set_localPosition(v83, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v80, 0LL);
  v84 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B16199 )
  {
    Instance = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_4B16199 = 1;
  }
  if ( !v84 )
    goto LABEL_141;
  UnityEngine_Transform__set_localEulerAngles(v84, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v80, 0LL);
  v85 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B16196 )
  {
    Instance = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_4B16196 = 1;
  }
  if ( !v85 )
    goto LABEL_141;
  UnityEngine_Transform__set_localScale(v85, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v86 = UnityEngine_GameObject__get_transform(v80, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_141;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v86 )
    goto LABEL_141;
  UnityEngine_Transform__set_parent(v86, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v80, 0LL);
  if ( !Instance )
    goto LABEL_141;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)v80, 0LL);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_141;
  fbxcomponent = this->fields.fbxcomponent;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !fbxcomponent )
    goto LABEL_141;
  BattleFBXComponent__set_RootTransform(fbxcomponent, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_141;
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v52, v54, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_141;
  v88 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Instance = (__int64)ServantAssetLoadManager__loadAnimEvents(v52, v54, v88, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_141;
  BattleFBXComponent__loadAnimationEvents(this->fields.fbxcomponent, (UnityEngine_TextAsset_o *)Instance, v52, v54, 0LL);
  BattleActorControl__InitAnimationEffect(this, v54, v89);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_141;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v93 = displayType == 2;
      v94 = displayType == 3;
    }
    else
    {
      v93 = 0;
      v94 = 0;
    }
    BattleActorControl__SetDispServant(this, v93, v94, v91);
  }
  BattleActorControl__UpdateShadow(this, v90);
  this->fields.stepFlg = 0;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_141;
  ComponentsInChildren_object__50787124 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                                           (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v96 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor_57382084(
    v96,
    ComponentsInChildren_object__50787124,
    (const MethodInfo_36B94C4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___76877152);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v96;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.rendererArrayList, (int32_t)v96, v97, v98);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v99);
  this->fields.actorScale = BattleServantData__getActorScale(svtdata, 0LL);
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v100 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4B16196 )
  {
    Instance = sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v36);
    byte_4B16196 = 1;
  }
  if ( !v100 )
    goto LABEL_141;
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v159.fields.z = actorScale * static_fields->oneVector.fields.z;
  v159.fields.y = actorScale * static_fields->oneVector.fields.y;
  v159.fields.x = actorScale * static_fields->oneVector.fields.x;
  UnityEngine_Transform__set_localScale(v100, v159, 0LL);
  v103 = object;
  if ( svtdata->fields.isEnemy )
  {
    v104 = this->fields.performance;
    if ( !v104 )
      goto LABEL_141;
    data = v104->fields.data;
    if ( !data )
      goto LABEL_141;
    v106 = System_Array__IndexOf_int_(
             data->fields.e_entryid,
             svtdata->fields.uniqueId,
             (const MethodInfo_3119038 *)Method_System_Array_IndexOf_int___);
    LODWORD(object[1].monitor) = v106;
    if ( v106 != -1 )
    {
      rendererArrayList = this->fields.rendererArrayList;
      Instance = (__int64)BattleActorControl___c_TypeInfo;
      if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
        Instance = (__int64)BattleActorControl___c_TypeInfo;
      }
      v108 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
      if ( !v108 )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (__int64)BattleActorControl___c_TypeInfo;
        }
        v109 = **(Il2CppObject ***)(Instance + 184);
        v108 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_SkinnedMeshRenderer__TypeInfo);
        System_Predicate_object____ctor(v108, v109, Method_BattleActorControl___c__setServantData_b__161_0__, 0LL);
        v110 = BattleActorControl___c_TypeInfo->static_fields;
        v110->__9__161_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)v108;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v110->__9__161_0, (int32_t)v108, v111, v112);
      }
      if ( rendererArrayList )
      {
        Instance = (__int64)System_Collections_Generic_List_object___Find(
                              (System_Collections_Generic_List_object__o *)rendererArrayList,
                              (System_Predicate_T__o *)v108,
                              (const MethodInfo_36BA238 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
        if ( *p_actorObject )
        {
          v113 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               *p_actorObject,
                               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
          {
            Instance = (__int64)*p_actorObject;
            if ( !*p_actorObject )
              goto LABEL_141;
            Instance = (__int64)UnityEngine_GameObject__AddComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
            if ( !Instance )
              goto LABEL_141;
            Component_object = (Il2CppObject *)Instance;
            UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
            UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_object, 0, 0LL);
          }
          Instance = (__int64)svtdata->fields.deckSvt;
          if ( !Instance )
            goto LABEL_141;
          if ( BattleDeckServantData__IsActiveEnemyMeshCollider((BattleDeckServantData_o *)Instance, 0LL) )
          {
            v115 = (UnityEngine_Mesh_o *)sub_1BCB244(UnityEngine_Mesh_TypeInfo);
            UnityEngine_Mesh___ctor(v115, 0LL);
            if ( !v113 )
              goto LABEL_141;
            UnityEngine_SkinnedMeshRenderer__BakeMesh(v113, v115, 0LL);
            if ( !Component_object )
              goto LABEL_141;
            UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_object, v115, 0LL);
            v116 = this->fields.performance;
            v118 = *(_QWORD *)&svtdata->fields.svtId.fields.currentCryptoKey;
            v117 = *(_QWORD *)&svtdata->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v158.fields.currentCryptoKey = v118;
            *(_QWORD *)&v158.fields.fakeValue = v117;
            v119 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v158, 0LL);
            v120 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
            System_Action___ctor(
              v120,
              object,
              Method_BattleActorControl___c__DisplayClass161_0__setServantData_b__1__,
              0LL);
            if ( !v116 )
              goto LABEL_141;
            BattlePerformance__AddCollider(v116, (UnityEngine_MeshCollider_o *)Component_object, v113, v119, v120, 0LL);
            v81 = v155;
            v103 = object;
          }
          Instance = (__int64)svtdata->fields.deckSvt;
          if ( Instance )
          {
            Instance = (__int64)BattleDeckServantData__GetEnemyTargetTouchAreaData(
                                  (BattleDeckServantData_o *)Instance,
                                  0LL);
            v121 = this->fields.performance;
            if ( v121 )
            {
              v122 = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)Instance;
              Instance = (__int64)v121->fields.data;
              if ( Instance )
              {
                if ( BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL)
                  && (!v122 || EnemyScriptParam_EnemyTargetTouchAreaData__get_IsActive(v122, 0LL)) )
                {
                  Instance = (__int64)this->fields.performance;
                  if ( !Instance )
                    goto LABEL_141;
                  BattlePerformance__AddUiCollider(
                    (BattlePerformance_o *)Instance,
                    (UnityEngine_MeshCollider_o *)Component_object,
                    (int32_t)v103[1].monitor,
                    0LL);
                }
                Instance = (__int64)this->fields.performance;
                if ( Instance )
                {
                  EnemyPerf = BattlePerformance__get_EnemyPerf((BattlePerformance_o *)Instance, 0LL);
                  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( EnemyPerf )
                  {
                    BattlePerformanceEnemy__SetupTargetIcon(
                      EnemyPerf,
                      svtdata,
                      (UnityEngine_GameObject_o *)Instance,
                      (int32_t)v103[1].monitor,
                      0LL);
                    Instance = (__int64)this->fields.performance;
                    if ( Instance )
                    {
                      BattlePerformance__UpdateEnemyTargetButton(
                        (BattlePerformance_o *)Instance,
                        v122,
                        (int32_t)v103[1].monitor,
                        0LL);
                      goto LABEL_113;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_141:
      sub_1BCB254(Instance, v36);
    }
  }
LABEL_113:
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_141;
  Components_object = UnityEngine_GameObject__GetComponents_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_306F06C *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_object;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (int32_t)Components_object,
    v125,
    v126);
  v127 = (VisibleControlInfo_o *)sub_1BCB244(VisibleControlInfo_TypeInfo);
  VisibleControlInfo___ctor(v127, 0LL);
  if ( !v127 )
    goto LABEL_141;
  v127->fields._Timing_k__BackingField = 0;
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, v127, v128);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v81, v54, svtdata->fields.isEnemy, v129);
  BattleActorControl__LoadSavedPartAnimation(this, v130);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_141;
  v131 = UnityEngine_GameObject__GetComponents_object_(
           (UnityEngine_GameObject_o *)Instance,
           (const MethodInfo_306F06C *)Method_UnityEngine_GameObject_GetComponents_BattleAdjustPopupPosInScreenComponent___);
  this->fields._AdjustPopupComponents_k__BackingField = (struct BattleAdjustPopupPosInScreenComponent_array *)v131;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._AdjustPopupComponents_k__BackingField, (int32_t)v131, v132, v133);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleActorDropEffectDict = ServantAssetLoadManager__LoadBattleActorDropEffectDict(v81, v54, v154, 0LL);
  this->fields.dropEffectOverwriteSettingDictionary = Manager__LoadBattleActorDropEffectDict;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.dropEffectOverwriteSettingDictionary,
    (int32_t)Manager__LoadBattleActorDropEffectDict,
    v135,
    v136);
  v137 = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(v137, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v138 = this->fields.performance;
    if ( !v138 )
      goto LABEL_141;
    v139 = (UnityEngine_Object_o *)v138->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(v139, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      v140 = this->fields.performance;
      if ( !v140 )
        goto LABEL_141;
      if ( !*p_battleSvtData )
        goto LABEL_141;
      Instance = (__int64)v140->fields.data;
      if ( !Instance )
        goto LABEL_141;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)Instance,
                       (*p_battleSvtData)->fields.isEnemy,
                       (*p_battleSvtData)->fields.uniqueId,
                       0LL);
      if ( ServantIndex != -1 )
      {
        v142 = ServantIndex;
        dropPointComp = (UnityEngine_Object_o *)this->fields.dropPointComp;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Equality(dropPointComp, 0LL, 0LL);
        if ( (Instance & 1) != 0 )
        {
          v144 = (UnityEngine_GameObject_o *)sub_1BCB244(UnityEngine_GameObject_TypeInfo);
          UnityEngine_GameObject___ctor_70118240(v144, 0LL);
          if ( !v144 )
            goto LABEL_141;
          v145 = UnityEngine_GameObject__AddComponent_object_(
                   v144,
                   (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_BattleDropPointComponent___);
          this->fields.dropPointComp = (struct BattleDropPointComponent_o *)v145;
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dropPointComp, (int32_t)v145, v146, v147);
        }
        battleSvtData = this->fields.battleSvtData;
        if ( battleSvtData )
        {
          Instance = (__int64)this->fields.performance;
          if ( Instance )
          {
            Instance = (__int64)BattlePerformance__getDefaultTargetPosObject(
                                  (BattlePerformance_o *)Instance,
                                  v142,
                                  battleSvtData->fields.isEnemy,
                                  0LL);
            if ( Instance )
            {
              v149 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
              v150 = sub_1BCB244(BattleDropPointComponent_DropPointData_TypeInfo);
              BattleDropPointComponent_DropPointData___ctor((BattleDropPointComponent_DropPointData_o *)v150, 0LL);
              if ( v150 )
              {
                v153 = *p_actorObject;
                *(_QWORD *)(v150 + 16) = *p_actorObject;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v150 + 16), (int32_t)v153, v151, v152);
                *(_DWORD *)(v150 + 24) = this->fields.uniqueID;
                Instance = (__int64)this->fields.dropPointComp;
                if ( Instance )
                {
                  BattleDropPointComponent__Initialize(
                    (BattleDropPointComponent_o *)Instance,
                    (BattleDropPointComponent_DropPointData_o *)v150,
                    v149,
                    v81,
                    v54,
                    v154,
                    0LL);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_141;
      }
    }
  }
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
  struct PlayMakerFSM_array *v9; // x8
  struct PlayMakerFSM_array *v10; // x8

  v4 = this;
  if ( (byte_4B1F631 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_13059/*"SummonMasterObject"*/, obj);
    byte_4B1F631 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( !motionFSM->max_length )
      goto LABEL_44;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13059/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_43;
      if ( !v6->max_length )
        goto LABEL_44;
      this = (BattleActorControl_o *)v6->m_Items[0];
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_43;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13059/*"SummonMasterObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_43;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
    }
    v7 = v4->fields.motionFSM;
    if ( !v7 )
      goto LABEL_43;
    if ( v7->max_length <= 1 )
      goto LABEL_44;
    this = (BattleActorControl_o *)v7->m_Items[1];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13059/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v8 = v4->fields.motionFSM;
      if ( !v8 )
        goto LABEL_43;
      if ( v8->max_length <= 1 )
        goto LABEL_44;
      this = (BattleActorControl_o *)v8->m_Items[1];
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_43;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13059/*"SummonMasterObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_43;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
    }
    v9 = v4->fields.motionFSM;
    if ( !v9 )
      goto LABEL_43;
    if ( v9->max_length <= 2 )
LABEL_44:
      sub_1BCB25C(this, obj, method);
    this = (BattleActorControl_o *)v9->m_Items[2];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13059/*"SummonMasterObject"*/,
                                     0LL);
    if ( this )
    {
      v10 = v4->fields.motionFSM;
      if ( !v10 )
        goto LABEL_43;
      if ( v10->max_length > 2 )
      {
        this = (BattleActorControl_o *)v10->m_Items[2];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( this )
          {
            this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13059/*"SummonMasterObject"*/,
                                               0LL);
              if ( this )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
                return;
              }
            }
          }
        }
LABEL_43:
        sub_1BCB254(this, obj);
      }
      goto LABEL_44;
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
  struct PlayMakerFSM_array *v7; // x8

  v4 = this;
  if ( (byte_4B1F630 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_13541/*"TargetObject"*/, obj);
    byte_4B1F630 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( motionFSM->max_length )
    {
      this = (BattleActorControl_o *)motionFSM->m_Items[0];
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_23;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13541/*"TargetObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_23;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_23;
      if ( v6->max_length > 1 )
      {
        this = (BattleActorControl_o *)v6->m_Items[1];
        if ( !this )
          goto LABEL_23;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
        if ( !this )
          goto LABEL_23;
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( !this )
          goto LABEL_23;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13541/*"TargetObject"*/,
                                         0LL);
        if ( !this )
          goto LABEL_23;
        HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
        v7 = v4->fields.motionFSM;
        if ( !v7 )
          goto LABEL_23;
        if ( v7->max_length > 2 )
        {
          this = (BattleActorControl_o *)v7->m_Items[2];
          if ( this )
          {
            this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
            if ( this )
            {
              this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
              if ( this )
              {
                this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                 (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                 (System_String_o *)StringLiteral_13541/*"TargetObject"*/,
                                                 0LL);
                if ( this )
                {
                  HutongGames_PlayMaker_FsmGameObject__set_Value(
                    (HutongGames_PlayMaker_FsmGameObject_o *)this,
                    obj,
                    0LL);
                  return;
                }
              }
            }
          }
LABEL_23:
          sub_1BCB254(this, obj);
        }
      }
    }
    sub_1BCB25C(this, obj, method);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_1BCB254(this, method);
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


void __fastcall BattleActorControl__set_AdjustPopupComponents(
        BattleActorControl_o *this,
        BattleAdjustPopupPosInScreenComponent_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AdjustPopupComponents_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._AdjustPopupComponents_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActorControl__set_BuffEffectNodeName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BuffEffectNodeName_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActorControl__set_IsStepInBattle(
        BattleActorControl_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = value;
}


void __fastcall BattleActorControl__set_NodeDamage(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NodeDamage_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._NodeDamage_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActorControl__set_NodeTarget(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NodeTarget_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._NodeTarget_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActorControl__set_NodeText(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NodeText_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._NodeText_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleActorControl__set_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PlayedOriginalAnimName_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = value;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleActorControl__skipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0

  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1BCB254(0LL, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformance_o *performance; // x8
  bool IsHighSpeedOption; // w0
  int32_t uniqueID; // w20
  bool v7; // w21
  float v8; // s0
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4B1F693 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, method);
    this = (BattleActorControl_o *)sub_1BCAFF8(&StringLiteral_12138/*"SKIP_VOICE"*/, v3);
    byte_4B1F693 = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_1BCB254(this, method);
  IsHighSpeedOption = BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v2->fields.uniqueID;
  v7 = IsHighSpeedOption;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v8 = 1.0;
  if ( v7 )
    v8 = 0.5;
  ServantAssetLoadManager__StopVoice(uniqueID, v8, 0LL);
  BattleActorControl__sendEventFSM_46076216(v2, (System_String_o *)StringLiteral_12138/*"SKIP_VOICE"*/, 0, v9);
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
    sub_1BCB254(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4B1F69D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&Method_BattleActorControl_endChangeAppearance__, v3);
    byte_4B1F69D = 1;
  }
  v4 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v6 = BattleActorControl__waitChangeApp(this, v4, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
}


void __fastcall BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x19
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
  struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v29; // w9
  bool v30; // w25
  System_Delegate_o *v31; // x21
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  System_Action_o *v34; // x0
  System_Delegate_c *klass; // x2
  System_Delegate_o *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v40; // x8
  const MethodInfo *v41; // x2
  struct BattlePerformance_o *v42; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x20
  BattleFBXComponent_c *v44; // x0
  struct BattlePerformance_o *v45; // x8
  Il2CppObject *Instance; // x0
  BattlePerformance_o *v47; // x20
  BattleSequenceManager_o *v48; // x21
  struct BattlePerformance_o *v49; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v51; // x8
  BattleActorControl_o *v52; // x8
  int32_t m_CachedPtr; // w20
  int32_t v54; // w21
  struct BattleActionData_o *actiondata; // x8
  ExecutingTdInfo_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  Il2CppObject *v59; // x20
  AssetManager_ResourceUnloadEventHandler_o *v60; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v62; // x20
  __int64 v63; // x21
  __int64 v64; // x22
  int32_t v65; // w21
  BattleActorControl_o *v66; // x8
  int32_t v67; // w22
  struct BattleServantData_o *v68; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v71; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v73; // x27
  UnityEngine_Object_o *v74; // x20
  struct BattlePerformance_o *v75; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v77; // x8
  struct BattleData_o *v78; // x8
  const MethodInfo *v79; // x2
  struct BattleServantData_o *v80; // x8
  CrashReporter_o *v81; // x19
  System_String_o *v82; // x0
  void *v83; // x0
  int v84; // w1
  __int64 v85; // x24
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+18h] [xbp-A8h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF
  __int64 patternId; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v90; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v6 = this;
  if ( (byte_4B1F676 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, v7);
    sub_1BCAFF8(&Method_BattleActorControl__startNoblePhantasm_b__305_0__, v8);
    sub_1BCAFF8(&Method_BattleActorControl__startNoblePhantasm_b__305_1__, v9);
    sub_1BCAFF8(&BattleFBXComponent_TypeInfo, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v13);
    sub_1BCAFF8(&Method_FieldMotionManager_SetVariables_GameObject___, v14);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Clear__,
      v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v16);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v18);
    sub_1BCAFF8(&OptionManager_TypeInfo, v19);
    sub_1BCAFF8(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v20);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__, v21);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v22);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v23);
    sub_1BCAFF8(&StringLiteral_9266/*"NPACTOR"*/, v24);
    sub_1BCAFF8(&StringLiteral_12208/*"START_BATTLE_NOBLE_"*/, v25);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v26);
    byte_4B1F676 = 1;
  }
  patternId = 0LL;
  memset(&i, 0, sizeof(i));
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  noblePhantasmObjectVisibleCtrList = v6->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_73;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v29 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0LL);
  this = (BattleActorControl_o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                   v6,
                                   (const MethodInfo *)callback);
  if ( !this )
    goto LABEL_73;
  v30 = flg;
  v31 = (System_Delegate_o *)&Method_BattleActorControl__startNoblePhantasm_b__305_0__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  for ( i = v86;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
        BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 1, (BattleActorControl_o *)i.fields._current, v32) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 2, v6, v33);
    v34 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    klass = v31->klass;
    v31 = (System_Delegate_o *)v34;
    System_Action___ctor(v34, (Il2CppObject *)v6, (intptr_t)klass, 0LL);
    v36 = System_Delegate__Combine((System_Delegate_o *)callback, v31, 0LL);
    if ( !v36 || (System_Action_c *)v36->klass == System_Action_TypeInfo )
      break;
    sub_1BCB514(v36);
    if ( v84 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
      sub_1CB3D40();
    }
    v85 = *(_QWORD *)__cxa_begin_catch(v83);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v85 )
      sub_1BCB24C(v85);
  }
  v6->fields.noblePhantasmCallback = (struct System_Action_o *)v36;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->fields.noblePhantasmCallback, (int32_t)v36, v37, v38);
  this = (BattleActorControl_o *)v6->fields.fbxcomponent;
  if ( !this )
    goto LABEL_73;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)this, 0, 0LL);
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_73;
  this = (BattleActorControl_o *)performance->fields.bgPerf;
  if ( !this )
    goto LABEL_73;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 0, 0LL);
  v40 = v6->fields.performance;
  v6->fields.isPlayingNoblePhantasm = 1;
  if ( !v40 )
    goto LABEL_73;
  this = (BattleActorControl_o *)v40->fields.logic;
  if ( !this )
    goto LABEL_73;
  BattleLogic__ChangePhase((BattleLogic_o *)this, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(v6, 0, v41);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)this, 0, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__AllServantGrandEffectStartStop((BattlePerformance_o *)this, 0, 0LL);
  v42 = v6->fields.performance;
  if ( !v42 )
    goto LABEL_73;
  fmManager_k__BackingField = v42->fields._fmManager_k__BackingField;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_73;
  FieldMotionManager__SetVariables_object_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9266/*"NPACTOR"*/,
    (Il2CppObject *)this,
    (const MethodInfo_306C258 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v44 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v44 = BattleFBXComponent_TypeInfo;
  }
  v44->static_fields->EnableEvent = 0;
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__changeShadowType((BattlePerformance_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)this, 0LL);
  v45 = v6->fields.performance;
  if ( !v45 )
    goto LABEL_73;
  this = (BattleActorControl_o *)v45->fields.commandPerf;
  if ( !this )
    goto LABEL_73;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v47 = v6->fields.performance;
  v48 = (BattleSequenceManager_o *)Instance;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v49 = v6->fields.performance;
  if ( !v49 )
    goto LABEL_73;
  bgPerf = v49->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_73;
  if ( !v48 )
    goto LABEL_73;
  BattleSequenceManager__init(
    v48,
    v47,
    (UnityEngine_GameObject_o *)this,
    v49->fields.p_actorlist,
    v49->fields.e_actorlist,
    v49->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v51 = v6->fields.performance;
  if ( !v51 )
    goto LABEL_73;
  this = (BattleActorControl_o *)v51->fields.data;
  v51->fields.isNoblePhantasmWhiteInFlg = v30;
  if ( !this )
    goto LABEL_73;
  BattleData__GetSequenceSelectType(
    (BattleData_o *)this,
    v6->fields.battleSvtData,
    v6->fields.isEnemy,
    (int32_t *)&patternId + 1,
    (int32_t *)&patternId,
    0LL);
  this = (BattleActorControl_o *)v6->fields.battleSvtData;
  if ( !this )
    goto LABEL_73;
  this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)this, 0LL);
  if ( !this )
    goto LABEL_73;
  v52 = this;
  this = (BattleActorControl_o *)v6->fields.battleSvtData;
  if ( !this )
    goto LABEL_73;
  m_CachedPtr = v52->fields.m_CachedPtr;
  this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
  if ( !v6->fields.battleSvtData )
    goto LABEL_73;
  v54 = (int)this;
  this = (BattleActorControl_o *)BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
  actiondata = v6->fields.actiondata;
  if ( !actiondata )
    goto LABEL_73;
  v56 = ExecutingTdInfo__Create(
          m_CachedPtr,
          v54,
          (int32_t)this,
          actiondata->fields.ActSetId,
          SHIDWORD(patternId),
          patternId,
          0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  *(_QWORD *)&this->fields.isFirstSaveBeforePlayAnim = v56;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.isFirstSaveBeforePlayAnim, (int32_t)v56, v57, v58);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)this, v6->fields.actiondata, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  BattleSequenceManager__CacheRendererBaseAddColor((BattleSequenceManager_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v59 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v60 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1BCB244(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v60,
      (Il2CppObject *)v6,
      Method_BattleActorControl__startNoblePhantasm_b__305_1__,
      0LL);
    if ( !v59 )
      goto LABEL_73;
    AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)v59, v60, 0LL);
  }
  else
  {
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = v6->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    v62 = (BattleSequenceManager_o *)this;
    v64 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v63 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v90.fields.currentCryptoKey = v64;
    *(_QWORD *)&v90.fields.fakeValue = v63;
    this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v90, 0LL);
    if ( !v6->fields.battleSvtData )
      goto LABEL_73;
    v65 = (int)this;
    this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice(v6->fields.battleSvtData, 0LL);
    if ( !this )
      goto LABEL_73;
    v66 = this;
    this = (BattleActorControl_o *)v6->fields.battleSvtData;
    if ( !this )
      goto LABEL_73;
    v67 = v66->fields.m_CachedPtr;
    this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
    v68 = v6->fields.battleSvtData;
    if ( !v68 )
      goto LABEL_73;
    overwriteSvtVoiceId = v68->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v68->fields.treasuredvcLevel;
    v71 = (int)this;
    NpChargeStage = BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
    v73 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1BCB244(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v73,
      (Il2CppObject *)v6,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v62 )
      goto LABEL_73;
    BattleSequenceManager__loadSequence(
      v62,
      v65,
      v67,
      v71,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v73,
      0LL);
  }
  v74 = (UnityEngine_Object_o *)v6->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v74, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v75 = v6->fields.performance;
    if ( !v75 )
      goto LABEL_73;
    data = (UnityEngine_Object_o *)v75->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && !v6->fields.isEnemy )
    {
      v77 = v6->fields.performance;
      if ( !v77 )
        goto LABEL_73;
      v78 = v77->fields.data;
      if ( !v78 )
        goto LABEL_73;
      ++v78->fields.playerNpCount;
    }
  }
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)this, 1, 1, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v80 = v6->fields.battleSvtData;
  if ( !v80 )
    goto LABEL_73;
  v81 = (CrashReporter_o *)this;
  svtId = v80->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v91.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v91.fields.fakeValue = 0LL;
  v82 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v91, v79);
  this = (BattleActorControl_o *)System_String__Concat_62450424((System_String_o *)StringLiteral_12208/*"START_BATTLE_NOBLE_"*/, v82, 0LL);
  if ( !v81 )
LABEL_73:
    sub_1BCB254(this, callback);
  CrashReporter__SetNowState(v81, (System_String_o *)this, 0LL);
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
    sub_1BCB254(this, method);
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
    sub_1BCB254(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4B1F694 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, method);
    byte_4B1F694 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__StopVoice(uniqueID, 0.0, 0LL);
  }
}


void __fastcall BattleActorControl__updateAura(
        BattleActorControl_o *this,
        System_Int32_array *auraEffectList,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x20
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
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v22; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v26; // x0
  System_Func_T__TResult__o *_9__380_0; // x20
  Il2CppObject *v28; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_int__o *v32; // x22
  __int64 m_CancellationTokenSource_low; // x2
  __int64 v34; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x21
  unsigned __int64 v36; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v44; // x22
  unsigned __int64 v45; // x25
  int32_t v46; // w23
  Il2CppObject *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v49; // x2
  System_Collections_IEnumerator_o *v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x22
  const MethodInfo *v53; // x3
  System_Collections_IEnumerator_o *v54; // x0

  v3 = auraEffectList;
  v4 = this;
  if ( (byte_4B1F6AC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Remove_int__GameObject___, auraEffectList);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_AuraEffectMaster___, v5);
    sub_1BCAFF8(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v10);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Except_int___, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1BCAFF8(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v17);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1BCAFF8(&Method_BattleActorControl___c__updateAura_b__380_0__, v19);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v20);
    byte_4B1F6AC = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_63;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_63;
  this = (BattleActorControl_o *)BattleBuffData__GetIgnoreAuraBuffIds((BattleBuffData_o *)this, 0LL);
  if ( !this )
    goto LABEL_16;
  v22 = v4->fields.battleSvtData;
  if ( !v22 )
    goto LABEL_63;
  buffData = v22->fields.buffData;
  if ( !buffData )
    goto LABEL_63;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v22->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_16:
    v32 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( v3 )
      {
        v34 = *(_QWORD *)&v3->max_length;
        v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( (int)v34 >= 1 )
        {
          v36 = 0LL;
          while ( v36 < (unsigned int)v34 )
          {
            if ( !v35 )
              goto LABEL_63;
            this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v35,
                                             v3->m_Items[v36 + 1],
                                             (const MethodInfo_32C7E00 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v32 )
                goto LABEL_63;
              auraEffectList = (System_Int32_array *)*((unsigned int *)&this->fields.UnityEngine_Behaviour_Fields + 1);
              items = v32->fields._items;
              v38 = Method_System_Collections_Generic_List_int__Add__;
              ++v32->fields._version;
              if ( !items )
                goto LABEL_63;
              size = v32->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v32,
                  (int32_t)auraEffectList,
                  *(const MethodInfo_369CBAC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
              }
              else
              {
                v32->fields._size = size + 1;
                items->m_Items[size + 1] = (int)auraEffectList;
              }
            }
            LODWORD(v34) = v3->max_length;
            if ( (__int64)++v36 >= (int)v34 )
              goto LABEL_29;
          }
          goto LABEL_64;
        }
LABEL_29:
        this = (BattleActorControl_o *)v4->fields.auraList;
        if ( this )
        {
          Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
                   (System_Collections_Generic_Dictionary_int__object__o *)this,
                   (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
          v42 = System_Linq_Enumerable__Except_int_(
                  v41,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                  (const MethodInfo_303C310 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v42,
                                           (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
            v44 = this;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v45 = 0LL;
              while ( v45 < (unsigned int)m_CancellationTokenSource )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                v46 = *((_DWORD *)&v44->fields.noPlaymakerMotionActionDict + v45);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                         v46,
                         (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
                {
                  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)v4,
                                                   0LL);
                  if ( !this )
                    goto LABEL_63;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_67;
                  if ( !Item )
                    goto LABEL_63;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)Item,
                                                   0LL);
                  if ( !this )
                    goto LABEL_63;
                  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(
                                        (UnityEngine_GameObject_o *)this,
                                        0LL);
                  if ( activeInHierarchy )
                  {
                    v50 = BattleActorControl__DestroyAuraEffect(
                            (BattleActorControl_o *)activeInHierarchy,
                            (UnityEngine_GameObject_o *)Item,
                            v49);
                    UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)v4, v50, 0LL);
                  }
                  else
                  {
LABEL_67:
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_70136076((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                System_Collections_Generic_Dictionary_int__object___Remove(
                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                  v46,
                  (const MethodInfo_332276C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                 (const MethodInfo_3320F94 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(m_CancellationTokenSource) = v44->fields.m_CancellationTokenSource;
                if ( (__int64)++v45 >= (int)m_CancellationTokenSource )
                  goto LABEL_52;
              }
              goto LABEL_64;
            }
LABEL_52:
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
            if ( this )
            {
              this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                               (UnityEngine_GameObject_o *)this,
                                               0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v51 = *(_QWORD *)&v3->max_length;
              if ( (int)v51 < 1 )
                return;
              v52 = 0LL;
              while ( v52 < (unsigned int)v51 )
              {
                if ( !v35 )
                  goto LABEL_63;
                this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v35,
                                                 v3->m_Items[v52 + 1],
                                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  m_CancellationTokenSource_low = LODWORD(this->fields.m_CancellationTokenSource);
                  if ( v4->fields._currentPriority_k__BackingField <= (int)m_CancellationTokenSource_low )
                  {
                    v54 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
                            m_CancellationTokenSource_low,
                            v53);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_70121648(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v54,
                                                     0LL);
                  }
                }
                LODWORD(v51) = v3->max_length;
                if ( (__int64)++v52 >= (int)v51 )
                  return;
              }
LABEL_64:
              sub_1BCB25C(this, auraEffectList, m_CancellationTokenSource_low);
            }
          }
        }
      }
    }
LABEL_63:
    sub_1BCB254(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v26 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v26 = BattleActorControl___c_TypeInfo;
  }
  _9__380_0 = (System_Func_T__TResult__o *)v26->static_fields->__9__380_0;
  if ( !_9__380_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = BattleActorControl___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__380_0 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__380_0,
      v28,
      Method_BattleActorControl___c__updateAura_b__380_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__380_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__380_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__380_0, (int32_t)_9__380_0, v30, v31);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__380_0,
    (const MethodInfo_3009770 *)Method_BasicHelper_Remove_int__GameObject___);
}


void __fastcall BattleActorControl__updateBuffIcon(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v9; // x20
  unsigned __int64 v10; // x25
  struct BattlePerformance_o *performance; // x8
  BattleServantData_o *v12; // x21
  struct BattlePerformance_o *v13; // x8
  BattleActorControl___c_c *v14; // x0
  BattleData_o *data; // x22
  System_Action_object__o *_9__247_0; // x23
  Il2CppObject *v17; // x24
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v4 = this;
  if ( (byte_4B1F64D & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_BattleServantData__TypeInfo, actionData);
    sub_1BCAFF8(&Method_BattleActorControl___c__updateBuffIcon_b__247_0__, v5);
    this = (BattleActorControl_o *)sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v6);
    byte_4B1F64D = 1;
  }
  if ( !actionData )
    goto LABEL_21;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0LL);
  if ( !this )
    goto LABEL_21;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        sub_1BCB25C(this, actionData, v7);
      performance = v4->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v9->fields.noPlaymakerMotionActionDict + v10),
                                       0LL);
      if ( this )
      {
        v12 = (BattleServantData_o *)this;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v13 = v4->fields.performance;
        if ( !v13 )
          break;
        v14 = BattleActorControl___c_TypeInfo;
        data = v13->fields.data;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v14 = BattleActorControl___c_TypeInfo;
        }
        _9__247_0 = (System_Action_object__o *)v14->static_fields->__9__247_0;
        if ( !_9__247_0 )
        {
          if ( !v14->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v14);
            v14 = BattleActorControl___c_TypeInfo;
          }
          v17 = (Il2CppObject *)v14->static_fields->__9;
          _9__247_0 = (System_Action_object__o *)sub_1BCB244(System_Action_BattleServantData__TypeInfo);
          System_Action_object____ctor(_9__247_0, v17, Method_BattleActorControl___c__updateBuffIcon_b__247_0__, 0LL);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__247_0 = (struct System_Action_BattleServantData__o *)_9__247_0;
          sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__247_0, (int32_t)_9__247_0, v19, v20);
        }
        BattleServantData__UpdateBuffExistSyncUsedBuffDataSvt(
          v12,
          data,
          (System_Action_BattleServantData__o *)_9__247_0,
          0LL);
      }
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_21:
    sub_1BCB254(this, actionData);
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
  System_Collections_Generic_List_object__o *EffectBuffList; // x21
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v23; // x20
  int32_t v24; // w23
  BuffEntity_o *Entity; // x24
  const MethodInfo *v26; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  __int64 v30; // x2
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v32; // x24
  unsigned int v33; // w28
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v35; // x0
  __int64 v36; // x1
  int32_t current; // w21
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x1
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v41; // [xsp+20h] [xbp-A0h] BYREF

  v2 = this;
  if ( (byte_4B1F6BF & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_1BCAFF8(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v4);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76985256, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v17);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v18);
    this = (BattleActorControl_o *)sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4B1F6BF = 1;
  }
  memset(&v41, 0, sizeof(v41));
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_37;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_37;
  EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_BuffMaster___);
  v23 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EffectBuffList )
    goto LABEL_37;
  if ( EffectBuffList->fields._size >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___get_Item(
                                       EffectBuffList,
                                       v24,
                                       (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !this )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 this->fields.m_CachedPtr,
                                 (const MethodInfo_32C7E00 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v26);
      if ( !Entity || !v23 )
        goto LABEL_37;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v23,
                                       Entity->fields.effectId,
                                       (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        method = (const MethodInfo *)(unsigned int)Entity->fields.effectId;
        items = v23->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++v23->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v23->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v23,
            (int32_t)method,
            *(const MethodInfo_369CBAC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v23->fields._size = size + 1;
          items->m_Items[size + 1] = (int)method;
        }
        this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_37;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               Entity->fields.effectId,
               (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76985256);
          if ( !this )
            goto LABEL_37;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v32 = this;
          if ( m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_28:
      if ( ++v24 >= EffectBuffList->fields._size )
        goto LABEL_29;
    }
    v33 = 0;
    while ( 1 )
    {
      if ( v33 >= m_CancellationTokenSource )
        sub_1BCB25C(this, method, v30);
      this = (BattleActorControl_o *)*((_QWORD *)&v32->fields.noPlaymakerMotionActionDict + (int)v33);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v24 * 0.01) + -1.0,
        0LL);
      m_CancellationTokenSource = (int)v32->fields.m_CancellationTokenSource;
      if ( (int)++v33 >= m_CancellationTokenSource )
        goto LABEL_28;
    }
LABEL_37:
    sub_1BCB254(this, method);
  }
LABEL_29:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_37;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           (const MethodInfo_3320FA4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_305B8EC *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_369D680 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v41 = v40;
  while ( 1 )
  {
    v35 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v41,
            (const MethodInfo_344B704 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v35 )
      break;
    if ( !v23 )
      sub_1BCB254(v35, v36);
    current = v41.fields._current;
    if ( !System_Collections_Generic_List_int___Contains(
            v23,
            v41.fields._current,
            (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v39 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v38);
      UnityEngine_MonoBehaviour__StartCoroutine_70121648((UnityEngine_MonoBehaviour_o *)v2, v39, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v41,
    (const MethodInfo_344B700 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  void *ComponentsInChildren_object__50787124; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int v16; // w8
  _DWORD *v17; // x20
  unsigned int v18; // w22
  char *v19; // x8
  UnityEngine_Renderer_o *v20; // x21
  BattleActorControl_c *v21; // x0
  float defaultHeight; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  int v26; // w8
  _DWORD *v27; // x19
  unsigned int v28; // w23
  char *v29; // x8
  UnityEngine_Component_o *v30; // x20
  __int64 v31; // x8
  _QWORD *v32; // x21
  unsigned __int64 v33; // x28
  UnityEngine_Material_o *v34; // x22
  System_String_o *v35; // x1
  UnityEngine_Material_o *v36; // x0
  float v37; // s0
  float y; // s10
  float v39; // s11
  float v40; // s12
  UnityEngine_Bounds_o v41; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F664 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl_TypeInfo, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_16033/*"_ClipSharpnessY"*/, v8);
    sub_1BCAFF8(&StringLiteral_16037/*"_Color"*/, v9);
    sub_1BCAFF8(&StringLiteral_24572/*"weapon"*/, v10);
    sub_1BCAFF8(&StringLiteral_17185/*"body"*/, v11);
    byte_4B1F664 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__50787124 = (void *)UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__50787124 & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_44;
    ComponentsInChildren_object__50787124 = UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !ComponentsInChildren_object__50787124 )
      goto LABEL_44;
    v16 = *((_DWORD *)ComponentsInChildren_object__50787124 + 6);
    v17 = ComponentsInChildren_object__50787124;
    if ( v16 >= 1 )
    {
      v18 = 0;
      while ( v18 < v16 )
      {
        v19 = (char *)&v17[2 * v18];
        v20 = (UnityEngine_Renderer_o *)*((_QWORD *)v19 + 4);
        if ( !v20 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = UnityEngine_Renderer__get_material(
                                                  *((UnityEngine_Renderer_o **)v19 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__50787124 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = (void *)UnityEngine_Material__HasProperty_70002212(
                                                          (UnityEngine_Material_o *)ComponentsInChildren_object__50787124,
                                                          (System_String_o *)StringLiteral_16037/*"_Color"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__50787124 & 1) != 0 )
        {
          v21 = BattleActorControl_TypeInfo;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v21 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v21->static_fields->defaultHeight;
          ComponentsInChildren_object__50787124 = UnityEngine_Renderer__get_material(v20, 0LL);
          if ( !ComponentsInChildren_object__50787124 )
            goto LABEL_44;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)ComponentsInChildren_object__50787124, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          ComponentsInChildren_object__50787124 = UnityEngine_Renderer__get_material(v20, 0LL);
          if ( !ComponentsInChildren_object__50787124 )
            goto LABEL_44;
          v43.fields.a = 1.0 - (float)(val / defaultHeight);
          v43.fields.r = r;
          v43.fields.g = g;
          v43.fields.b = b;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)ComponentsInChildren_object__50787124, v43, 0LL);
        }
        v16 = v17[6];
        if ( (int)++v18 >= v16 )
          goto LABEL_20;
      }
LABEL_45:
      sub_1BCB25C(ComponentsInChildren_object__50787124, v14, v15);
    }
LABEL_20:
    ComponentsInChildren_object__50787124 = UnityEngine_GameObject__GetComponentsInChildren_object__50787124(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_306F334 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !ComponentsInChildren_object__50787124 )
LABEL_44:
      sub_1BCB254(ComponentsInChildren_object__50787124, v14);
    v26 = *((_DWORD *)ComponentsInChildren_object__50787124 + 6);
    v27 = ComponentsInChildren_object__50787124;
    if ( v26 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= v26 )
          goto LABEL_45;
        v29 = (char *)&v27[2 * v28];
        v30 = (UnityEngine_Component_o *)*((_QWORD *)v29 + 4);
        if ( !v30 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = UnityEngine_Renderer__get_materials(
                                                  *((UnityEngine_Renderer_o **)v29 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__50787124 )
          goto LABEL_44;
        v31 = *((_QWORD *)ComponentsInChildren_object__50787124 + 3);
        v32 = ComponentsInChildren_object__50787124;
        if ( (int)v31 >= 1 )
          break;
LABEL_42:
        v26 = v27[6];
        if ( (int)++v28 >= v26 )
          return;
      }
      v33 = 0LL;
      while ( v33 < (unsigned int)v31 )
      {
        v34 = (UnityEngine_Material_o *)v32[v33 + 4];
        ComponentsInChildren_object__50787124 = UnityEngine_Component__get_gameObject(v30, 0LL);
        if ( !ComponentsInChildren_object__50787124 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__50787124,
                                                  0LL);
        if ( !ComponentsInChildren_object__50787124 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__50787124,
                                                          (System_String_o *)StringLiteral_17185/*"body"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__50787124 & 1) != 0 )
          goto LABEL_35;
        ComponentsInChildren_object__50787124 = UnityEngine_Component__get_gameObject(v30, 0LL);
        if ( !ComponentsInChildren_object__50787124 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__50787124,
                                                  0LL);
        if ( !ComponentsInChildren_object__50787124 )
          goto LABEL_44;
        ComponentsInChildren_object__50787124 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__50787124,
                                                          (System_String_o *)StringLiteral_24572/*"weapon"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__50787124 & 1) != 0 )
        {
LABEL_35:
          if ( !v34 )
            goto LABEL_44;
          v35 = (System_String_o *)StringLiteral_16033/*"_ClipSharpnessY"*/;
          v36 = v34;
          v37 = val;
        }
        else
        {
          UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v30, 0LL);
          y = v41.fields.m_Center.fields.y;
          UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v30, 0LL);
          v39 = v41.fields.m_Extents.fields.y;
          UnityEngine_Renderer__get_localBounds(&v41, (UnityEngine_Renderer_o *)v30, 0LL);
          ComponentsInChildren_object__50787124 = BattleActorControl_TypeInfo;
          v40 = v41.fields.m_Extents.fields.y;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          if ( !v34 )
            goto LABEL_44;
          v35 = (System_String_o *)StringLiteral_16033/*"_ClipSharpnessY"*/;
          v36 = v34;
          v37 = (float)(y - v39)
              + (float)((float)((float)((float)(v40 + v40) + 0.2)
                              / BattleActorControl_TypeInfo->static_fields->defaultHeight)
                      * val);
        }
        UnityEngine_Material__SetFloat(v36, v35, v37, 0LL);
        LODWORD(v31) = *((_DWORD *)v32 + 6);
        if ( (__int64)++v33 >= (int)v31 )
          goto LABEL_42;
      }
      goto LABEL_45;
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4B1F69E & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl__waitChangeApp_d__363_TypeInfo, callback);
    byte_4B1F69E = 1;
  }
  v5 = sub_1BCB244(BattleActorControl__waitChangeApp_d__363_TypeInfo);
  BattleActorControl__waitChangeApp_d__363___ctor((BattleActorControl__waitChangeApp_d__363_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
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
  System_Collections_Generic_List_object__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_Queue_T__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4B1F7D2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, actor);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__, v6);
    sub_1BCAFF8(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo, v7);
    byte_4B1F7D2 = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._activeFsmNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_Queue_T__o *)sub_1BCB244(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v11,
    (const MethodInfo_382E240 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._callBackQueue, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.battleActor, (int32_t)actor, v14, v15);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *activeFsmNameList; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4B1F7D4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, fsmName);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_4B1F7D4 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_object__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    goto LABEL_9;
  v6 = System_Collections_Generic_List_object___Contains(
         activeFsmNameList,
         (Il2CppObject *)fsmName,
         (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( v6 )
    return;
  items = activeFsmNameList->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++activeFsmNameList->fields._version;
  if ( !items )
LABEL_9:
    sub_1BCB254(v6, v7);
  size = activeFsmNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      activeFsmNameList,
      (Il2CppObject *)fsmName,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    activeFsmNameList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)fsmName;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v14 + 4), (int32_t)fsmName, v9, v10);
  }
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4B1F7D6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__, callBack);
    byte_4B1F7D6 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1BCB254(0LL, v5);
  System_Collections_Generic_Queue_object___Enqueue(
    callBackQueue,
    (Il2CppObject *)callBack,
    (const MethodInfo_382E808 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4B1F7D7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__, v3);
    byte_4B1F7D7 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v4);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1BCB254(0LL, v5);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_object___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_382E998 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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

  if ( (byte_4B1F7D1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4B1F7D1 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1BCB254(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x0

  if ( (byte_4B1F7D5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Remove__, fsmName);
    byte_4B1F7D5 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1BCB254(0LL, v5);
  return System_Collections_Generic_List_object___Remove(
           (System_Collections_Generic_List_object__o *)activeFsmNameList,
           (Il2CppObject *)fsmName,
           (const MethodInfo_36BB0F8 *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8
  int32_t size; // w2
  int v8; // w9

  if ( (byte_4B1F7D3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__, v3);
    byte_4B1F7D3 = 1;
  }
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_12;
  if ( this->fields.uniqueId == battleActor->fields.uniqueID )
  {
    wave = this->fields.wave;
    if ( wave == BattleActorControl__getWaveCount(battleActor, 0LL) )
      return;
    battleActor = this->fields.battleActor;
    if ( !battleActor )
      goto LABEL_12;
  }
  this->fields.uniqueId = battleActor->fields.uniqueID;
  battleActor = (BattleActorControl_o *)BattleActorControl__getWaveCount(battleActor, 0LL);
  activeFsmNameList = this->fields._activeFsmNameList;
  this->fields.wave = (int)battleActor;
  if ( !activeFsmNameList )
    goto LABEL_12;
  size = activeFsmNameList->fields._size;
  v8 = activeFsmNameList->fields._version + 1;
  activeFsmNameList->fields._size = 0;
  activeFsmNameList->fields._version = v8;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)activeFsmNameList->fields._items, 0, size, 0LL);
  battleActor = (BattleActorControl_o *)this->fields._callBackQueue;
  if ( !battleActor )
LABEL_12:
    sub_1BCB254(battleActor, method);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)battleActor,
    (const MethodInfo_382E4C8 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl_EndCallEvent___ctor(
        BattleActorControl_EndCallEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A18B58;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1BCB0B0(v6);
        v12 = sub_1BCB56C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A18C54;
          else
            v9 = (Il2CppObject *)sub_1A18C18;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A18B94;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A18B68;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A18B38;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A18AF0;
}


System_IAsyncResult_o *__fastcall BattleActorControl_EndCallEvent__BeginInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = hash;
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, &v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall BattleActorControl_EndCallEvent__Invoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Hashtable_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    hash,
    *(_QWORD *)&this->fields.extra_arg);
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
  CGThumbnailListItem_o *p_table; // x21
  struct System_Collections_Hashtable_o *table; // t1
  System_Collections_Hashtable_o *v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1

  if ( (byte_4B1F7D0 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Collections_Hashtable_TypeInfo, key);
    byte_4B1F7D0 = 1;
  }
  table = this->fields.table;
  p_table = (CGThumbnailListItem_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_1BCB244(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63813256(v10, 0LL);
    p_table->klass = (CGThumbnailListItem_c *)v10;
    sub_1BCAF9C(p_table, (int32_t)v10, v11, v12);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_1BCB254(0LL, v13);
  }
  (*(void (__fastcall **)(void *, System_String_o *, Il2CppObject *, _QWORD))(*(_QWORD *)klass + 664LL))(
    klass,
    key,
    obj,
    *(_QWORD *)(*(_QWORD *)klass + 672LL));
}


void __fastcall BattleActorControl_EventClass__Proc(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  struct BattleActorControl_EndCallEvent_o *eventcall; // x8

  eventcall = this->fields.eventcall;
  if ( !eventcall )
    sub_1BCB254(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_Collections_Hashtable_o *, _QWORD))eventcall->fields.m_target)(
    eventcall->fields.original_method_info,
    this->fields.table,
    *(_QWORD *)&eventcall->fields.extra_arg);
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

  if ( (byte_4B1F7CF & 1) == 0 )
  {
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
    byte_4B1F7CF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1BCB254(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v9, 0LL);
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


void __fastcall BattleActorControl__ColShiftServantPartChangeOnly_d__387___ctor(
        BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__ColShiftServantPartChangeOnly_d__387__MoveNext(
        BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v5; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  System_Action_o *finishCallback; // x0

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    finishCallback = this->fields.finishCallback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(finishCallback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  v5 = (Il2CppObject *)BattleActorControl__colShiftServantChange(
                         _4__this,
                         this->fields.shiftSvt,
                         this->fields.isShift,
                         0LL);
  this->fields.__2__current = v5;
  p__2__current = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v7, v8);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__ColShiftServantPartChangeOnly_d__387__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__ColShiftServantPartChangeOnly_d__387__System_Collections_IEnumerator_Reset(
        BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__ColShiftServantPartChangeOnly_d__387_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__ColShiftServantPartChangeOnly_d__387__System_Collections_IEnumerator_get_Current(
        BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__ColShiftServantPartChangeOnly_d__387__System_IDisposable_Dispose(
        BattleActorControl__ColShiftServantPartChangeOnly_d__387_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__CoroutineChangeBattleModel_d__371___ctor(
        BattleActorControl__CoroutineChangeBattleModel_d__371_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__CoroutineChangeBattleModel_d__371__MoveNext(
        BattleActorControl__CoroutineChangeBattleModel_d__371_o *this,
        const MethodInfo *method)
{
  BattleActorControl__CoroutineChangeBattleModel_d__371_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleActorControl_o *_4__this; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool v9; // w21
  System_Collections_Generic_List_int__o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleServantData_o *battleSvtData; // x21
  ServantAssetArgs_o *v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  CGThumbnailListItem_o *v17; // x19
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct BattleActionData_ChangeModelActionData_o *changeModelActData; // x8
  ServantAssetLoadManager_o *v21; // x21
  struct BattleServantData_o *v22; // x8
  struct BattleServantData_o *v23; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x21
  _BOOL4 isForceAppearance; // w22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  CGThumbnailListItem_o *v28; // x19
  int v29; // w8
  int32_t v30; // w2
  const MethodInfo *v31; // x3

  v2 = this;
  if ( (byte_4B1F7E2 & 1) == 0 )
  {
    sub_1BCAFF8(&ServantAssetArgs_TypeInfo, method);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v3);
    this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)sub_1BCAFF8(
                                                                        &Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__,
                                                                        v4);
    byte_4B1F7E2 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_35;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_35;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(p__2__current, 0, v7, v8);
      v9 = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return v9;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      BattleActorControl__RemoveColliderFromPerformance(_4__this, 0LL);
      v10 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v10;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v10, v11, v12);
      battleSvtData = _4__this->fields.battleSvtData;
      v14 = (ServantAssetArgs_o *)sub_1BCB244(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor(v14, battleSvtData, 0LL);
      v2->fields._beforeServantAssetArgs_5__3 = v14;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._beforeServantAssetArgs_5__3, (int32_t)v14, v15, v16);
      v9 = 1;
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      v2->fields.__2__current = 0LL;
      v17 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(v17, 0, v18, v19);
      LODWORD(v17[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v9;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      changeModelActData = v2->fields.changeModelActData;
      if ( !changeModelActData )
        goto LABEL_35;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_35;
      BattleServantData__SetChangeModelData(
        (BattleServantData_o *)this,
        changeModelActData->fields._ChangeData_k__BackingField,
        0LL);
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !_4__this->fields.battleSvtData )
        goto LABEL_35;
      v21 = (ServantAssetLoadManager_o *)this;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                          _4__this->fields.battleSvtData,
                                                                          0LL);
      v22 = _4__this->fields.battleSvtData;
      if ( !v22 || !v21 )
        goto LABEL_35;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)ServantAssetLoadManager__IsPreloadedBattleActor(
                                                                          v21,
                                                                          (ServantAssetArgs_o *)this,
                                                                          v22->fields.isForceAppearance,
                                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_29;
      v23 = _4__this->fields.battleSvtData;
      if ( !v23 )
        goto LABEL_35;
      LoadedAssetArgs_k__BackingField = v23->fields._LoadedAssetArgs_k__BackingField;
      isForceAppearance = v23->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadBattleActor(LoadedAssetArgs_k__BackingField, isForceAppearance, 0LL);
LABEL_22:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__CoroutineChangeBattleModel_d__371_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v28 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(v28, 0, v26, v27);
        v29 = 3;
LABEL_31:
        LODWORD(v28[-1].fields._ThumbnailSpritePath_k__BackingField) = v29;
        return 1;
      }
      if ( !_4__this )
LABEL_35:
        sub_1BCB254(this, method);
LABEL_29:
      BattleActorControl__DestroyBeforeModelChangeActorObject(_4__this, v2->fields._beforeServantAssetArgs_5__3, 0LL);
      BattleActorControl__AfterProcLoadedChangeModel(_4__this, 0, 0LL);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0LL;
        v28 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(v28, 0, v30, v31);
        v29 = 4;
        goto LABEL_31;
      }
LABEL_32:
      ActionExtensions__Call(v2->fields.finishCallback, 0LL);
      return 0;
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      goto LABEL_32;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__CoroutineChangeBattleModel_d__371__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__CoroutineChangeBattleModel_d__371_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__CoroutineChangeBattleModel_d__371__System_Collections_IEnumerator_Reset(
        BattleActorControl__CoroutineChangeBattleModel_d__371_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__CoroutineChangeBattleModel_d__371_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__CoroutineChangeBattleModel_d__371__System_Collections_IEnumerator_get_Current(
        BattleActorControl__CoroutineChangeBattleModel_d__371_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__CoroutineChangeBattleModel_d__371__System_IDisposable_Dispose(
        BattleActorControl__CoroutineChangeBattleModel_d__371_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__381___ctor(
        BattleActorControl__DestroyAuraEffect_d__381_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__381__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__381_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattleActorControl__DestroyAuraEffect_d__381_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  Il2CppObject *Component_object; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleActorControl__DestroyAuraEffect_d__381_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__381_o *v19; // x20
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  UnityEngine_ParticleSystem_o *v33; // x0
  __int64 v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v40; // x8
  unsigned __int64 v41; // x22
  UnityEngine_Object_o *v42; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *effectObject; // x20
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__381_o *v47; // x20
  unsigned __int64 v48; // x24
  UnityEngine_Object_o *v49; // x21
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v51; // x8
  BattleActorControl__DestroyAuraEffect_d__381_o *v52; // x21
  unsigned __int64 v53; // x25
  UnityEngine_Object_o *v54; // x22
  UnityEngine_Object_o *v55; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v57; // 0:x0.8

  v4 = this;
  if ( (byte_4B1F7E3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_ParticleSystem___, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76985264, v7);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v10);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v11);
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v12);
    byte_4B1F7E3 = 1;
  }
  m_ParticleSystem = 0LL;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)v4->fields.effectObject;
    v4->fields.__1__state = -1;
    if ( !this )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0LL,
                                                               0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_90;
      if ( BYTE2(Component_object[2].monitor) )
      {
LABEL_60:
        effectObject = (UnityEngine_Object_o *)v4->fields.effectObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(effectObject, 0LL, 0LL) )
        {
          this = (BattleActorControl__DestroyAuraEffect_d__381_o *)v4->fields.effectObject;
          if ( this )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76985264);
            if ( this )
            {
              _2__current = this->fields.__2__current;
              v47 = this;
              if ( (int)_2__current >= 1 )
              {
                v48 = 0LL;
                while ( 1 )
                {
                  if ( v48 >= (unsigned int)_2__current )
                    goto LABEL_89;
                  v49 = (UnityEngine_Object_o *)*((_QWORD *)&v47->fields.effectObject + v48);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_Object__op_Equality(
                                                                             v49,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v49 )
                      goto LABEL_90;
                    materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                      (UnityEngine_Renderer_o *)v49,
                                                                      0LL);
                    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_Renderer__get_materials(
                                                                                 (UnityEngine_Renderer_o *)v49,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_90;
                      v51 = this->fields.__2__current;
                      v52 = this;
                      if ( (int)v51 >= 1 )
                        break;
                    }
                  }
LABEL_84:
                  LODWORD(_2__current) = v47->fields.__2__current;
                  if ( (__int64)++v48 >= (int)_2__current )
                    goto LABEL_85;
                }
                v53 = 0LL;
                while ( v53 < (unsigned int)v51 )
                {
                  v54 = (UnityEngine_Object_o *)*((_QWORD *)&v52->fields.effectObject + v53);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_Object__op_Equality(
                                                                             v54,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_70136076(v54, 0LL);
                  }
                  LODWORD(v51) = v52->fields.__2__current;
                  if ( (__int64)++v53 >= (int)v51 )
                    goto LABEL_84;
                }
LABEL_89:
                sub_1BCB25C(this, method, v2);
              }
LABEL_85:
              v55 = (UnityEngine_Object_o *)v4->fields.effectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_70136076(v55, 0LL);
              return 0;
            }
          }
LABEL_90:
          sub_1BCB254(this, method);
        }
        return 0;
      }
    }
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)v4->fields.effectObject;
    if ( !this )
      goto LABEL_90;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&v4->fields._particleArray_5__2,
      (int32_t)ComponentsInChildren_object,
      v16,
      v17);
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)v4->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_90;
    v4->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)BasicHelper__ExcludeNull_object_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    if ( !this )
      goto LABEL_90;
    klass = this->klass;
    v19 = this;
    v20 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_18;
      }
      v22 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_18:
      v22 = sub_1C1B560(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__381_o *, _QWORD))v22)(
            v19,
            *(_QWORD *)(v22 + 8));
    if ( !v24 )
      sub_1BCB254(0LL, v23);
    while ( 1 )
    {
      v25 = *(_QWORD *)v24;
      v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v26;
          v27 += 4;
          if ( !v26 )
            goto LABEL_26;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_26:
        v28 = sub_1C1B560(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      v29 = *(_QWORD *)v24;
      v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
        {
          --v30;
          v31 += 4;
          if ( !v30 )
            goto LABEL_33;
        }
        v32 = v29 + 16LL * *v31 + 312;
      }
      else
      {
LABEL_33:
        v32 = sub_1C1B560(v24, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
      }
      v33 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
      if ( !v33 )
        sub_1BCB254(0LL, v34);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v33, 0LL).fields.m_ParticleSystem;
      v57.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v57, 0, 0LL);
    }
    v35 = *(_QWORD *)v24;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_41;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_41:
      v38 = sub_1C1B560(v24, System_IDisposable_TypeInfo, 0LL);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__381_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(
                                                               v24,
                                                               *(_QWORD *)(v38 + 8));
  }
  if ( v4->fields._aliveCount_5__3 <= 0 )
  {
    v4->fields._particleArray_5__2 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._particleArray_5__2, 0, v2, v3);
    goto LABEL_60;
  }
  particleArray_5__2 = v4->fields._particleArray_5__2;
  v4->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_90;
  v40 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    while ( v41 < (unsigned int)v40 )
    {
      v42 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v41];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v42 )
          goto LABEL_90;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v42, 0LL) )
          UnityEngine_ParticleSystem__Stop_70419836((UnityEngine_ParticleSystem_o *)v42, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__381_o *)UnityEngine_ParticleSystem__IsAlive_70420104(
                                                                   (UnityEngine_ParticleSystem_o *)v42,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v4->fields._aliveCount_5__3;
      }
      LODWORD(v40) = particleArray_5__2->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_58;
    }
    goto LABEL_89;
  }
LABEL_58:
  v4->fields.__2__current = 0LL;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BCAF9C(p__2__current, 0, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__381__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__381_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__381__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__381_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__DestroyAuraEffect_d__381_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__381__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__381_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__381__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__381_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__409___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__409_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__409__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__409_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattleActorControl__DestroyEffectOnParticleStop_d__409_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int aliveCount_5__3; // w8
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  UnityEngine_Object_o *v18; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4B1F7E4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, method);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248, v6);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    byte_4B1F7E4 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    aliveCount_5__3 = v4->fields._aliveCount_5__3;
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_306F3B0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76985248);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    p_particleArray_5__2 = &v4->fields._particleArray_5__2;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&v4->fields._particleArray_5__2,
      (int32_t)ComponentsInChildren_object,
      v12,
      v13);
    if ( !v4->fields._particleArray_5__2 )
      goto LABEL_32;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !this )
      goto LABEL_35;
    if ( BYTE2(this->fields.key) )
    {
LABEL_32:
      BattleActorControl__DestroyLoopEffect(_4__this, v4->fields.key, 0LL);
      return 0;
    }
    if ( !*p_particleArray_5__2 )
      goto LABEL_35;
    aliveCount_5__3 = (*p_particleArray_5__2)->max_length;
    v4->fields._aliveCount_5__3 = aliveCount_5__3;
  }
  if ( aliveCount_5__3 <= 0 )
  {
    if ( _4__this )
      goto LABEL_32;
LABEL_35:
    sub_1BCB254(this, method);
  }
  particleArray_5__2 = v4->fields._particleArray_5__2;
  v4->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_35;
  v16 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v16 >= 1 )
  {
    v17 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v16 )
        sub_1BCB25C(this, method, v2);
      v18 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v18 )
          goto LABEL_35;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v18, 0LL) )
          UnityEngine_ParticleSystem__Stop_70419836((UnityEngine_ParticleSystem_o *)v18, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__409_o *)UnityEngine_ParticleSystem__IsAlive_70420104(
                                                                             (UnityEngine_ParticleSystem_o *)v18,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v4->fields._aliveCount_5__3;
      }
      LODWORD(v16) = particleArray_5__2->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v16 );
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1BCAF9C(p__2__current, 0, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__409__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__409__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__409_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__409_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__409__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__409__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__409_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__308___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__308__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v17; // x0
  struct BattlePerformance_o *v18; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  BattleServantData_o *v22; // x20
  int v23; // w21
  __int64 v24; // x2
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *v26; // x20
  unsigned __int64 v27; // x26
  BattleActorControl_o *ServantActor; // x21
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  Il2CppObject *Instance; // x20
  System_Action_object__o *v32; // x21
  struct BattlePerformance_o *v33; // x8
  int i_5__2; // w8
  CGThumbnailListItem_o *v35; // x20
  UnityEngine_WaitForEndOfFrame_o *v36; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int v40; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4B1F7E5 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_USSequencer__TypeInfo, method);
    sub_1BCAFF8(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__, v5);
    sub_1BCAFF8(&BattlePerformance_TypeInfo, v6);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v7);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_13246/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v10);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)sub_1BCAFF8(&StringLiteral_24501/*"wait"*/, v11);
    byte_4B1F7E5 = 1;
  }
  v40 = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)BattleServantData__IsTDAppearance(
                                                                         (BattleServantData_o *)this,
                                                                         0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          battleSvtData = _4__this->fields.battleSvtData;
          if ( !battleSvtData )
            goto LABEL_55;
          battleSvtData->fields.dressDispId = -1;
          battleSvtData->fields.isForceAppearance = 0;
        }
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v17 = BattlePerformance_TypeInfo;
              if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v17 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v17->static_fields->DefaultFov, 0LL);
              v18 = _4__this->fields.performance;
              if ( v18 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)v18->fields.actorcamera;
                if ( this )
                {
                  this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                  v19 = this;
                  if ( !byte_4B16191 )
                  {
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)sub_1BCAFF8(
                                                                                     &UnityEngine_Vector3_TypeInfo,
                                                                                     method);
                    byte_4B16191 = 1;
                  }
                  if ( v19 )
                  {
                    UnityEngine_Transform__set_localEulerAngles(
                      (UnityEngine_Transform_o *)v19,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0LL);
                    v40 = 1;
                    v20 = System_Int32__ToString((int32_t)&v40, 0LL);
                    v21 = System_String__Concat_62450424((System_String_o *)StringLiteral_13246/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v20, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)ConstantMaster__getValue(v21, 0LL);
                    v22 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_43:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v22 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v22->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v22,
                          this,
                          _4__this,
                          v22->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v32 = (System_Action_object__o *)sub_1BCB244(System_Action_USSequencer__TypeInfo);
                        System_Action_object____ctor(
                          v32,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          0LL);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v32,
                            0LL);
                          v33 = _4__this->fields.performance;
                          if ( v33 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)v33->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)BattleData__getStageEntity(
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
                      v23 = (int)this;
                      while ( 1 )
                      {
                        if ( !v22 )
                          goto LABEL_55;
                        if ( v23 == BattleServantData__getSvtId(v22, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_55;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_55;
                          _2__current = this->fields.__2__current;
                          v26 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_42:
                        ++v40;
                        v29 = System_Int32__ToString((int32_t)&v40, 0LL);
                        v30 = System_String__Concat_62450424((System_String_o *)StringLiteral_13246/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v29, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)ConstantMaster__getValue(
                                                                                         v30,
                                                                                         0LL);
                        v22 = _4__this->fields.battleSvtData;
                        v23 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_43;
                      }
                      v27 = 0LL;
                      while ( 1 )
                      {
                        if ( v27 >= (unsigned int)_2__current )
                          sub_1BCB25C(this, method, v24);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v26->fields.__4__this + v27),
                                         0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[18].klass) )
                          {
                            LOWORD(this[18].klass) = 256;
                            BattleActorControl__playAnimation_46091064(
                              ServantActor,
                              (System_String_o *)StringLiteral_24501/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_46091064(
                              ServantActor,
                              (System_String_o *)StringLiteral_24501/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v26->fields.__2__current;
                        if ( (__int64)++v27 >= (int)_2__current )
                          goto LABEL_42;
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
LABEL_55:
    sub_1BCB254(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    v4->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 < 3 )
      goto LABEL_52;
    v36 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v36, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v36;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BCAF9C(p__2__current, (int32_t)v36, v38, v39);
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return 1;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      v4->fields._i_5__2 = 0;
LABEL_52:
      v4->fields.__2__current = 0LL;
      v35 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v35, 0, v2, v3);
      result = 1;
      LODWORD(v35[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__308__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__308__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__308_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__308__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__308__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__308_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1F7D8 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleActorControl___c_TypeInfo, v1);
    byte_4B1F7D8 = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActorControl___c_TypeInfo->static_fields->__9 = (struct BattleActorControl___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)BattleActorControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleActorControl___c___EnumerateMaterials_b__333_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__162_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, (const MethodInfo *)x);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__162_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4B1F7DA & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1BCAFF8(
                                         &System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo,
                                         x);
    byte_4B1F7DA = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)(&x->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&x->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_string__BattleActorAnimationEffect__c **)p_offset - 1) != System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1B560(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__162_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4B1F7DB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, x);
    byte_4B1F7DB = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_object_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__230_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__422_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.isSaveAnimation;
}


void __fastcall BattleActorControl___c___ResetAddColorOfMaterials_b__334_0(
        BattleActorControl___c_o *this,
        UnityEngine_Material_o *x,
        const MethodInfo *method)
{
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1F7DC & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1BCAFF8(&StringLiteral_15985/*"_AddColor"*/, x);
    byte_4B1F7DC = 1;
  }
  if ( !x )
    sub_1BCB254(this, x);
  v4.fields.r = 0.0;
  v4.fields.g = 0.0;
  v4.fields.b = 0.0;
  v4.fields.a = 0.0;
  UnityEngine_Material__SetColor(x, (System_String_o *)StringLiteral_15985/*"_AddColor"*/, v4, 0LL);
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__423_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__423_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__161_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleActorControl___c_o *v5; // x20

  if ( (byte_4B1F7D9 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleFBXComponent_TypeInfo, x);
    this = (BattleActorControl___c_o *)sub_1BCAFF8(&StringLiteral_17185/*"body"*/, v4);
    byte_4B1F7D9 = 1;
  }
  if ( !x )
    goto LABEL_14;
  this = (BattleActorControl___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
  if ( !this )
    goto LABEL_14;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL)
    && UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x, 0LL) )
  {
    this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
    v5 = this;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !v5 )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)v5, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17185/*"body"*/, 0LL);
LABEL_14:
      sub_1BCB254(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__380_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4B1F7DD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, *(_QWORD *)&x.fields.key);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v4);
    byte_4B1F7DD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c___updateBuffIcon_b__247_0(
        BattleActorControl___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1BCB254(this, 0LL);
  BattleServantData__updateBuff(svt, 1, 1, 0LL);
}


void __fastcall BattleActorControl___c__329_object____cctor(const MethodInfo_31E3008 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C1B45C();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C1B45C();
  v4 = (Il2CppObject *)sub_1BCB244(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C1B45C();
  System_Object___ctor(v4, 0LL);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C1B45C();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C1B45C();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1B45C();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1B45C();
  sub_1BCAF9C(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BattleActorControl___c__329_object____ctor(
        BattleActorControl___c__329_T__o *this,
        const MethodInfo_31E30C4 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__329_object____UpdateMaterialsOnRenderders_b__329_0(
        BattleActorControl___c__329_T__o *this,
        Il2CppObject *x,
        const MethodInfo_31E30CC *method)
{
  if ( (byte_4B21B1C & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, x);
    byte_4B21B1C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__329_object____UpdateMaterialsOnRenderders_b__329_1(
        BattleActorControl___c__329_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_31E3128 *method)
{
  if ( (byte_4B21B1D & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, x);
    byte_4B21B1D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass161_0___ctor(
        BattleActorControl___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass161_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass161_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_1BCB254(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass162_0___ctor(
        BattleActorControl___c__DisplayClass162_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass162_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass162_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_1BCB254(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, method);
}


void __fastcall BattleActorControl___c__DisplayClass199_0___ctor(
        BattleActorControl___c__DisplayClass199_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass199_0___HasGlobalTransitionInFsm_b__0(
        BattleActorControl___c__DisplayClass199_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1BCB254(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.globalTransitionName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass200_0___ctor(
        BattleActorControl___c__DisplayClass200_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass200_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass200_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  System_Object_array *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4B1F7DE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Any_FsmTransition___, fsm);
    sub_1BCAFF8(&System_Func_FsmTransition__bool__TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v6);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass200_0__ExistMotionEvent_b__1__, v7);
    byte_4B1F7DE = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v8 )
    return 0;
  if ( !fsm )
    sub_1BCB254(v8, v9);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v12 = (System_Object_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_1BCB244(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass200_0__ExistMotionEvent_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  return BasicHelper__Any_object__50347976(
           v12,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_3003FC8 *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass200_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass200_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1BCB254(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass303_0___ctor(
        BattleActorControl___c__DisplayClass303_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass303_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass303_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass303_0_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *targets; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  BattleActorControl___c__DisplayClass303_0_o *v12; // x1
  Il2CppClass **v13; // x0

  v4 = this;
  if ( (byte_4B1F7DF & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass303_0_o *)sub_1BCAFF8(
                                                            &Method_System_Collections_Generic_List_GameObject__Add__,
                                                            *(_QWORD *)&x);
    byte_4B1F7DF = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass303_0_o *)_4__this->fields.performance) == 0LL
    || (targets = (System_Collections_Generic_List_object__o *)v4->fields.targets,
        this = (BattleActorControl___c__DisplayClass303_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0LL),
        !targets)
    || (items = targets->fields._items,
        v10 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++targets->fields._version,
        !items) )
  {
    sub_1BCB254(this, *(_QWORD *)&x);
  }
  size = targets->fields._size;
  v12 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      targets,
      (Il2CppObject *)this,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    targets->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
  }
}


void __fastcall BattleActorControl___c__DisplayClass316_0___ctor(
        BattleActorControl___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass316_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass316_0_o *v2; // x19
  __int64 v3; // x1
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v7; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v9; // x20
  int32_t shadowEffectId; // w22
  BattleActorControl___c__DisplayClass316_0_o *v11; // x21
  BattleActorControl___c__DisplayClass316_0_o *v12; // x23
  int32_t v13; // w24
  int32_t LimitCount; // w25
  UnityEngine_GameObject_o *EffectToNode_44984072; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleActorControl_o *v18; // x8
  UnityEngine_Object_o *v19; // x20
  struct BattleActorControl_o *v20; // x8
  BattleActorControl___c__DisplayClass316_0_o *v21; // x20
  struct BattleActorControl_o *v22; // x8
  BattleActorControl___c__DisplayClass316_0_o *v23; // x20
  struct BattleActorControl_o *v24; // x8
  BattleActorControl___c__DisplayClass316_0_o *v25; // x20
  struct BattleActorControl_o *v26; // x8

  v2 = this;
  if ( (byte_4B1F7E0 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleEffectUtility_TypeInfo, method);
    this = (BattleActorControl___c__DisplayClass316_0_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    byte_4B1F7E0 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    this = (BattleActorControl___c__DisplayClass316_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v7 = v2->fields.__4__this;
      if ( !v7 )
        goto LABEL_46;
      if ( v7->fields.currentSpShadowEffectId == v2->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v7->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v9 = v2->fields.__4__this;
          if ( !v9 )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass316_0_o *)v9->fields.shadowObj;
          if ( !this )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          shadowEffectId = v2->fields.shadowEffectId;
          v11 = this;
          this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v12 = this;
          this = (BattleActorControl___c__DisplayClass316_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v13 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectToNode_44984072 = BattleEffectUtility__loadEffectToNode_44984072(
                                    (UnityEngine_GameObject_o *)v11,
                                    shadowEffectId,
                                    (UnityEngine_GameObject_o *)v12,
                                    v13,
                                    LimitCount,
                                    0LL);
          v9->fields.specialShadowObj = EffectToNode_44984072;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v9->fields.specialShadowObj, (int32_t)EffectToNode_44984072, v16, v17);
          v18 = v2->fields.__4__this;
          if ( !v18 )
            goto LABEL_46;
          v19 = (UnityEngine_Object_o *)v18->fields.specialShadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v20 = v2->fields.__4__this;
            if ( v20 )
            {
              this = (BattleActorControl___c__DisplayClass316_0_o *)v20->fields.specialShadowObj;
              if ( this )
              {
                this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                v21 = this;
                if ( !byte_4B16191 )
                {
                  this = (BattleActorControl___c__DisplayClass316_0_o *)sub_1BCAFF8(
                                                                          &UnityEngine_Vector3_TypeInfo,
                                                                          method);
                  byte_4B16191 = 1;
                }
                if ( v21 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v21,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  v22 = v2->fields.__4__this;
                  if ( v22 )
                  {
                    this = (BattleActorControl___c__DisplayClass316_0_o *)v22->fields.specialShadowObj;
                    if ( this )
                    {
                      this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                      v23 = this;
                      if ( !byte_4B16197 )
                      {
                        this = (BattleActorControl___c__DisplayClass316_0_o *)sub_1BCAFF8(
                                                                                &UnityEngine_Quaternion_TypeInfo,
                                                                                method);
                        byte_4B16197 = 1;
                      }
                      if ( v23 )
                      {
                        UnityEngine_Transform__set_localRotation(
                          (UnityEngine_Transform_o *)v23,
                          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                          0LL);
                        v24 = v2->fields.__4__this;
                        if ( v24 )
                        {
                          this = (BattleActorControl___c__DisplayClass316_0_o *)v24->fields.specialShadowObj;
                          if ( this )
                          {
                            this = (BattleActorControl___c__DisplayClass316_0_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                            v25 = this;
                            if ( !byte_4B16196 )
                            {
                              this = (BattleActorControl___c__DisplayClass316_0_o *)sub_1BCAFF8(
                                                                                      &UnityEngine_Vector3_TypeInfo,
                                                                                      method);
                              byte_4B16196 = 1;
                            }
                            if ( v25 )
                            {
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)v25,
                                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                                0LL);
                              v26 = v2->fields.__4__this;
                              if ( v26 )
                              {
                                this = (BattleActorControl___c__DisplayClass316_0_o *)v26->fields.specialShadowObj;
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
LABEL_46:
            sub_1BCB254(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass328_0___ctor(
        BattleActorControl___c__DisplayClass328_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass328_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass328_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass328_0_o *v4; // x20

  v4 = this;
  if ( (byte_4B1F7E1 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass328_0_o *)sub_1BCAFF8(&StringLiteral_16415/*"_fade"*/, material);
    byte_4B1F7E1 = 1;
  }
  if ( !material )
    sub_1BCB254(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16415/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass32_0___ctor(
        BattleActorControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass32_0___GetMatchAdjustPosInScreenComponent_b__0(
        BattleActorControl___c__DisplayClass32_0_o *this,
        BattleAdjustPopupPosInScreenComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1BCB254(this, 0LL);
  return BattleAdjustPopupPosInScreenComponent__IsMatchCond(comp, this->fields.data, method);
}


void __fastcall BattleActorControl___c__DisplayClass368_0___ctor(
        BattleActorControl___c__DisplayClass368_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass368_0___ChangeBattleModelArray_b__0(
        BattleActorControl___c__DisplayClass368_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  BattleActorControl__sendEventFSM_46076216(_4__this, this->fields.eventName, 0, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass370_0___ctor(
        BattleActorControl___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass370_0___ChangeBattleModel_b__0(
        BattleActorControl___c__DisplayClass370_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1BCB254(0LL, method);
  BattleActorControl__sendEventFSM_46076216(_4__this, this->fields.eventName, 0, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass379_0___ctor(
        BattleActorControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass379_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass379_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass422_0___ctor(
        BattleActorControl___c__DisplayClass422_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass422_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass422_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass422_0_o *)this->fields.component) == 0LL )
    sub_1BCB254(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass425_0___ctor(
        BattleActorControl___c__DisplayClass425_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass425_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass425_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass425_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass425_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__379___ctor(
        BattleActorControl__coAddAura_d__379_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__379__MoveNext(
        BattleActorControl__coAddAura_d__379_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__coAddAura_d__379_o *v4; // x19
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
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  Il2CppObject *Item; // x21
  Il2CppObject *Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct BattleActorControl___c__DisplayClass379_0_o *_8__1; // x22
  int32_t id; // w21
  System_Action_o *v35; // x23
  BattlePerformance_o *v36; // x22
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  CGThumbnailListItem_o *v39; // x19
  bool result; // w0
  struct BattleActorControl___c__DisplayClass379_0_o *v41; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *v48; // x8
  struct System_String_o *Empty; // x1
  int32_t EffectFolder; // w22
  int32_t WeaponGroup; // w0
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x22
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x0
  System_String_o *v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  BattleEffectUtility_BuffEffectLoadArgument_o *v63; // x21
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  __int64 v66; // x1
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  UnityEngine_Object_o *Component_object; // x22
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct BattlePerformance_o *performance; // x8
  struct BattleActorControl_o *actorcamera; // x1
  Il2CppObject *v82; // x0
  int32_t v83; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v84; // [xsp+8h] [xbp-68h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B1F7E6 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, method);
    sub_1BCAFF8(&BattleEffectUtility_TypeInfo, v5);
    sub_1BCAFF8(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EffectMaster___, v7);
    sub_1BCAFF8(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v11);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_AddComponent_BillBoard___, v12);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v13);
    sub_1BCAFF8(&int_TypeInfo, v14);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v15);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1BCAFF8(&string_TypeInfo, v18);
    sub_1BCAFF8(&Method_BattleActorControl___c__DisplayClass379_0__coAddAura_b__0__, v19);
    sub_1BCAFF8(&BattleActorControl___c__DisplayClass379_0_TypeInfo, v20);
    sub_1BCAFF8(&StringLiteral_5858/*"Effect/weapon/{0}"*/, v21);
    this = (BattleActorControl__coAddAura_d__379_o *)sub_1BCAFF8(&StringLiteral_5861/*"Effect/weapon/{0}/{1}"*/, v22);
    byte_4B1F7E6 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_62;
    this = (BattleActorControl__coAddAura_d__379_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_62;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v4->fields.auraEffectId,
           (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__379_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_62;
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_3321244 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__379_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (BattleActorControl__coAddAura_d__379_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_32C7E00 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    v4->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    p_effectEntity_5__2 = &v4->fields._effectEntity_5__2;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._effectEntity_5__2, (int32_t)Entity, v28, v29);
    if ( !v4->fields._effectEntity_5__2 )
    {
LABEL_38:
      v63 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1BCB244(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v63, _4__this, 0LL);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v4->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !byte_4B16191 )
        {
          sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v66);
          byte_4B16191 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->zeroVector.fields.x;
        y = static_fields->zeroVector.fields.y;
        z = static_fields->zeroVector.fields.z;
        ActorSvtId = BattleActorControl__getActorSvtId(_4__this, 0LL);
        LimitCount = BattleActorControl__getLimitCount(_4__this, 0LL);
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v86.fields.x = x;
        v86.fields.y = y;
        v86.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v86,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v63,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleActorControl__coAddAura_d__379_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_58;
        if ( v4->fields.priority > _4__this->fields._currentPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0LL);
          _4__this->fields._currentPriority_k__BackingField = v4->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)EffectToNode,
                                                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl__coAddAura_d__379_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__379_o *)UnityEngine_GameObject__AddComponent_object_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_306E628 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_62;
            Component_object = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_62;
            actorcamera = (struct BattleActorControl_o *)performance->fields.actorcamera;
            this->fields.__4__this = actorcamera;
            sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.__4__this, (int32_t)actorcamera, v78, v79);
          }
          else if ( !Component_object )
          {
            goto LABEL_62;
          }
          BillBoard__setFlip((BillBoard_o *)Component_object, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__379_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v4->fields.auraEffectId,
              (Il2CppObject *)EffectToNode,
              (const MethodInfo_33212D0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_58:
            v4->fields._effectEntity_5__2 = 0LL;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._effectEntity_5__2, 0, v75, v76);
            return 0;
          }
        }
      }
LABEL_62:
      sub_1BCB254(this, method);
    }
    v30 = (Il2CppObject *)sub_1BCB244(BattleActorControl___c__DisplayClass379_0_TypeInfo);
    System_Object___ctor(v30, 0LL);
    v4->fields.__8__1 = (struct BattleActorControl___c__DisplayClass379_0_o *)v30;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v30, v31, v32);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_62;
    _8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_62;
    id = (*p_effectEntity_5__2)->fields.id;
    v35 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)_8__1,
      Method_BattleActorControl___c__DisplayClass379_0__coAddAura_b__0__,
      0LL);
    v36 = _4__this->fields.performance;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v35, v36, 0LL);
  }
  this = (BattleActorControl__coAddAura_d__379_o *)&v4->fields.__8__1;
  v41 = v4->fields.__8__1;
  if ( !v41 )
    goto LABEL_62;
  if ( v41->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BCAF9C(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  v4->fields.__8__1 = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)this, 0, v2, v3);
  effectEntity_5__2 = v4->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_38;
  v48 = string_TypeInfo->static_fields;
  Empty = v48->Empty;
  v4->fields._effectPath_5__3 = v48->Empty;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._effectPath_5__3, (int32_t)Empty, v45, v46);
  if ( !_4__this )
    goto LABEL_62;
  EffectFolder = BattleActorControl__getEffectFolder(_4__this, 0LL);
  WeaponGroup = BattleActorControl__getWeaponGroup(_4__this, 0, 0LL);
  if ( EffectFolder )
  {
    v85 = WeaponGroup;
    v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v52, v53, v54);
    v84 = BattleActorControl__getEffectFolder(_4__this, 0LL);
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v56, v57, v58);
    v60 = System_String__Format_62491716((System_String_o *)StringLiteral_5861/*"Effect/weapon/{0}/{1}"*/, v55, v59, 0LL);
  }
  else
  {
    v83 = WeaponGroup;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v52, v53, v54);
    v60 = System_String__Format((System_String_o *)StringLiteral_5858/*"Effect/weapon/{0}"*/, v82, 0LL);
  }
  v4->fields._effectPath_5__3 = v60;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._effectPath_5__3, (int32_t)v60, v61, v62);
LABEL_22:
  this = (BattleActorControl__coAddAura_d__379_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (BattleActorControl__coAddAura_d__379_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     v4->fields._effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4->fields.__2__current = 0LL;
    v39 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BCAF9C(v39, 0, v37, v38);
    LODWORD(v39[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_62;
  this = (BattleActorControl__coAddAura_d__379_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_62;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.auraEffectId,
          (const MethodInfo_33214D8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v4->fields._effectPath_5__3 = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._effectPath_5__3, 0, v43, v44);
    goto LABEL_38;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__379__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__379_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__379__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__379_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__coAddAura_d__379_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__379__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__379_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__379__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__379_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__388___ctor(
        BattleActorControl__colShiftServantChange_d__388_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServantChange_d__388__MoveNext(
        BattleActorControl__colShiftServantChange_d__388_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__colShiftServantChange_d__388_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleActorControl_o *_4__this; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x1
  struct BattleActionData_o **p_actionData_5__2; // x21
  BattleActionData_ShiftServant_o *myShiftData; // x0
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *v16; // x8
  Il2CppObject *Component_object; // x0
  BattleActorControl__colShiftServantChange_d__388_o **p_fadeComp_5__3; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  DefCoroutine_c *v23; // x0
  Il2CppObject *milliSecTwo; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  CGThumbnailListItem_o *v27; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int v30; // w8
  struct BattleActionData_ShiftServant_o *v31; // x8
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _BOOL4 isShift; // w8
  struct BattleActionData_o *actionData_5__2; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct BattleActionData_o *v40; // x8
  struct BattlePerformance_o *v41; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v43; // x8
  struct BattleData_o *data; // x8
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  UnityEngine_AsyncOperation_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *v55; // x21
  System_Collections_Generic_List_int__o *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  __int64 v59; // x2
  const MethodInfo *v60; // x3
  struct BattleActionData_o *v61; // x8
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_o *v63; // x1
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct PlayMakerFSM_array *v66; // x8
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Color_o v68; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v69; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4B1F7E7 & 1) == 0 )
  {
    sub_1BCAFF8(&DefCoroutine_TypeInfo, method);
    sub_1BCAFF8(&System_GC_TypeInfo, v5);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    this = (BattleActorControl__colShiftServantChange_d__388_o *)sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v9);
    byte_4B1F7E7 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_104;
      nowAction = performance->fields.nowAction;
      v4->fields._actionData_5__2 = nowAction;
      p_actionData_5__2 = &v4->fields._actionData_5__2;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._actionData_5__2, (int32_t)nowAction, v2, v3);
      myShiftData = _4__this->fields.myShiftData;
      if ( myShiftData )
        BattleActionData_ShiftServant__ResetBeforeWeapon(myShiftData, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__388_o *)v4->fields.shiftSvt;
      if ( !this )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__388_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__388_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      shiftSvt = v4->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_104;
      if ( !shiftSvt->fields.isChange )
        goto LABEL_62;
      v16 = _4__this->fields.performance;
      if ( !v16 )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__388_o *)v16->fields.fadeObject;
      if ( !this )
        goto LABEL_104;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v4->fields._fadeComp_5__3 = (struct NGUIFader_o *)Component_object;
      p_fadeComp_5__3 = (BattleActorControl__colShiftServantChange_d__388_o **)&v4->fields._fadeComp_5__3;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._fadeComp_5__3, (int32_t)Component_object, v19, v20);
      if ( !v4->fields.isShift )
        goto LABEL_18;
      if ( !*p_actionData_5__2 )
        goto LABEL_104;
      if ( (*p_actionData_5__2)->fields.isIgnoreShiftWhiteFade )
        goto LABEL_18;
      this = *p_fadeComp_5__3;
      if ( !*p_fadeComp_5__3 )
        goto LABEL_104;
      v68.fields.r = 1.0;
      v68.fields.g = 1.0;
      v68.fields.b = 1.0;
      v68.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v68, 0.2, 0, 0LL, 0, 0LL);
LABEL_18:
      v23 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v23 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (Il2CppObject *)v23->static_fields->milliSecTwo;
      v4->fields.__2__current = milliSecTwo;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(p__2__current, (int32_t)milliSecTwo, v21, v22);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_104;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_104;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v4->fields.__2__current = 0LL;
      v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v27, 0, v28, v29);
      v30 = 2;
      goto LABEL_103;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      v31 = v4->fields.shiftSvt;
      if ( !v31 )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_104;
      BattlePerformance__unloadServantSet_44282788((BattlePerformance_o *)this, v31->fields.loadedAssetArgs, 0, 0LL);
      v4->fields.__2__current = 0LL;
      v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v27, 0, v32, v33);
      v30 = 3;
      goto LABEL_103;
    case 3:
      isShift = v4->fields.isShift;
      v4->fields.__1__state = -1;
      if ( !isShift )
        goto LABEL_66;
      actionData_5__2 = v4->fields._actionData_5__2;
      if ( !actionData_5__2 )
        goto LABEL_104;
      if ( actionData_5__2->fields.isIgnoreShiftWhiteFade )
      {
        actionData_5__2->fields.isReleaseMemoryWhenFinished = 1;
      }
      else
      {
LABEL_66:
        v47 = UnityEngine_Resources__UnloadUnusedAssets(0LL);
        v4->fields._asyncUnload_5__5 = v47;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._asyncUnload_5__5, (int32_t)v47, v48, v49);
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0LL);
LABEL_69:
        this = (BattleActorControl__colShiftServantChange_d__388_o *)v4->fields._asyncUnload_5__5;
        if ( !this )
          goto LABEL_104;
        if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0LL) )
        {
          v4->fields.__2__current = 0LL;
          v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(v27, 0, v50, v51);
          v30 = 4;
          goto LABEL_103;
        }
        v4->fields._asyncUnload_5__5 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._asyncUnload_5__5, 0, v50, v51);
      }
      if ( _4__this )
      {
        BattleActorControl__ResetChangeModelByOriginalChange(_4__this, _4__this->fields.battleSvtData, 0LL);
        this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_75:
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          this = (BattleActorControl__colShiftServantChange_d__388_o *)ServantAssetLoadManager__checkLoad(0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v4->fields.__2__current = 0LL;
            v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(v27, 0, v52, v53);
            v30 = 5;
            goto LABEL_103;
          }
          if ( _4__this )
          {
            actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
            {
              this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.actorObject;
              if ( !this )
                goto LABEL_104;
              v55 = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)this,
                      (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v55, 0LL, 0LL) )
              {
                this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.performance;
                if ( !this )
                  goto LABEL_104;
                BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v55, 0LL);
              }
            }
            v56 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
            v4->fields._moveEffect_5__4 = v56;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._moveEffect_5__4, (int32_t)v56, v57, v58);
            BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
            BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
            this = (BattleActorControl__colShiftServantChange_d__388_o *)BattleActorControl__IsCurrentMotionFsmType(
                                                                           _4__this,
                                                                           0,
                                                                           0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_96;
            v61 = v4->fields._actionData_5__2;
            if ( !v61 )
              goto LABEL_104;
            if ( v61->fields.isOverwriteShift )
            {
              motionFSM = _4__this->fields.motionFSM;
              if ( motionFSM )
              {
                if ( motionFSM->max_length )
                {
                  v63 = motionFSM->m_Items[0];
                  _4__this->fields.beforeWeaponFsm = v63;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.beforeWeaponFsm, (int32_t)v63, v59, v60);
LABEL_102:
                  v4->fields.__2__current = 0LL;
                  v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1BCAF9C(v27, 0, v64, v65);
                  v30 = 6;
                  goto LABEL_103;
                }
LABEL_105:
                sub_1BCB25C(this, method, v59);
              }
            }
            else
            {
LABEL_96:
              v66 = _4__this->fields.motionFSM;
              if ( v66 )
              {
                if ( !v66->max_length )
                  goto LABEL_105;
                this = (BattleActorControl__colShiftServantChange_d__388_o *)v66->m_Items[0];
                if ( this )
                {
                  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UnityEngine_Object__DestroyImmediate_70136264(gameObject, 0LL);
                  goto LABEL_102;
                }
              }
            }
          }
        }
      }
      goto LABEL_104;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_69;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_75;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_38:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colShiftServantChange_d__388_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v27, 0, v36, v37);
        v30 = 7;
LABEL_103:
        LODWORD(v27[-1].fields._ThumbnailSpritePath_k__BackingField) = v30;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_104;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( v4->fields.isShift )
      {
        v40 = v4->fields._actionData_5__2;
        if ( !v40 )
          goto LABEL_104;
        if ( !v40->fields.isIgnoreShiftWhiteFade )
        {
          this = (BattleActorControl__colShiftServantChange_d__388_o *)v4->fields._fadeComp_5__3;
          if ( !this )
            goto LABEL_104;
          v69.fields.r = 1.0;
          v69.fields.g = 1.0;
          v69.fields.b = 1.0;
          v69.fields.a = 1.0;
          NGUIFader__FadeStart((NGUIFader_o *)this, v69, 0.2, 1, 0LL, 0, 0LL);
        }
      }
      this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__388_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v41 = _4__this->fields.performance;
        if ( !v41 )
          goto LABEL_104;
        battleSvtData = _4__this->fields.battleSvtData;
        if ( !battleSvtData )
          goto LABEL_104;
        this = (BattleActorControl__colShiftServantChange_d__388_o *)v41->fields.data;
        if ( !this )
          goto LABEL_104;
        BattleData__replaceCommandCard(
          (BattleData_o *)this,
          battleSvtData->fields.uniqueId,
          battleSvtData->fields.uniqueId,
          0LL);
        v43 = _4__this->fields.performance;
        if ( !v43 )
          goto LABEL_104;
        data = v43->fields.data;
        if ( !data )
          goto LABEL_104;
        this = (BattleActorControl__colShiftServantChange_d__388_o *)data->fields.logic;
        if ( !this )
          goto LABEL_104;
        BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
      }
      if ( v4->fields._moveEffect_5__4 )
      {
        v4->fields.__2__current = 0LL;
        v27 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v27, 0, v38, v39);
        v30 = 8;
        goto LABEL_103;
      }
LABEL_61:
      v4->fields._fadeComp_5__3 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._fadeComp_5__3, 0, v38, v39);
      v4->fields._moveEffect_5__4 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._moveEffect_5__4, 0, v45, v46);
LABEL_62:
      this = (BattleActorControl__colShiftServantChange_d__388_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__388_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0LL)) == 0LL )
      {
LABEL_104:
        sub_1BCB254(this, method);
      }
      BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)this, 0LL);
      return 0;
    case 7:
      v4->fields.__1__state = -1;
      goto LABEL_38;
    case 8:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__4, 0LL);
      goto LABEL_61;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__388__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__388_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__388__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__388_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__colShiftServantChange_d__388_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__388__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__388_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__388__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__388_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__386___ctor(
        BattleActorControl__colShiftServant_d__386_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__386__MoveNext(
        BattleActorControl__colShiftServant_d__386_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v5; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  Il2CppObject **v10; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o *finishCallback; // x0

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
        p__2__current = &this->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_10:
      sub_1BCB254(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  this->fields.__2__current = 0LL;
  v10 = &this->fields.__2__current;
  sub_1BCAF9C((CGThumbnailListItem_o *)v10, 0, v11, v12);
  *((_DWORD *)v10 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__386__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__386_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__386__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__386_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__colShiftServant_d__386_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__386__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__386_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__386__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__386_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__365___ctor(
        BattleActorControl__collChangeAppearance_d__365_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__365__MoveNext(
        BattleActorControl__collChangeAppearance_d__365_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__365_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleActorControl_o *_4__this; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct BattleServantData_o *v23; // x8
  ServantAssetArgs_o *v24; // x21
  _BOOL4 isForceAppearance; // w22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_4B1F7E8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    this = (BattleActorControl__collChangeAppearance_d__365_o *)sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v4);
    byte_4B1F7E8 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__365_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__365_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(p__2__current, 0, v7, v8);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__365_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_43;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__365_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_43;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_18:
      v12 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v12;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v12, v13, v14);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v15 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(v15, 0, v16, v17);
      v18 = 2;
      goto LABEL_41;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_43;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadBattleActor(LoadedAssetArgs_k__BackingField, 0LL);
      v2->fields.__2__current = 0LL;
      v15 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(v15, 0, v21, v22);
      v18 = 3;
      goto LABEL_41;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__365_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__365_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__365_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0LL);
      v23 = _4__this->fields.battleSvtData;
      if ( !v23 )
        goto LABEL_43;
      v24 = (ServantAssetArgs_o *)this;
      isForceAppearance = v23->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadBattleActor(v24, isForceAppearance, 0LL);
LABEL_32:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__collChangeAppearance_d__365_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v15 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(v15, 0, v26, v27);
        v18 = 4;
LABEL_41:
        LODWORD(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = v18;
        return 1;
      }
      if ( !_4__this )
LABEL_43:
        sub_1BCB254(this, method);
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0LL;
        v15 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(v15, 0, v28, v29);
        v18 = 5;
        goto LABEL_41;
      }
      return 0;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_32;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__365__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__365_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__365__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__365_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__collChangeAppearance_d__365_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__365__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__365_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__365__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__365_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__360___ctor(
        BattleActorControl__colloadDressServant_d__360_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__360__MoveNext(
        BattleActorControl__colloadDressServant_d__360_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__360_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CGThumbnailListItem_o *v19; // x19
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int v22; // w8
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 flg; // w21
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int v28; // w8
  ServantAssetArgs_o *updated; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  ServantAssetArgs_o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3

  v2 = this;
  if ( (byte_4B1F7E9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v3);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v4);
    this = (BattleActorControl__colloadDressServant_d__360_o *)sub_1BCAFF8(&StringLiteral_5398/*"END_LOAD"*/, v5);
    byte_4B1F7E9 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_53;
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(p__2__current, 0, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_61;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_20:
      v16 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__3 = v16;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__3, (int32_t)v16, v17, v18);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v19 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(v19, 0, v20, v21);
      v22 = 2;
      break;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_61;
      flg = v2->fields.flg;
      LoadedAssetArgs_k__BackingField = battleSvtData->fields._LoadedAssetArgs_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
      v2->fields.__2__current = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields.__2__current, 0, v26, v27);
      if ( flg )
        v28 = 3;
      else
        v28 = 5;
      v2->fields.__1__state = v28;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = v2->fields._dressId_5__2;
      updated = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(updated, 0, 0LL);
LABEL_33:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__360_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v2->fields.__2__current = 0LL;
      v19 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1BCAF9C(v19, 0, v30, v31);
      v22 = 4;
      break;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__360_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = -1;
      v32 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(v32, 0, 0LL);
LABEL_43:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__360_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v19 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(v19, 0, v33, v34);
        v22 = 6;
      }
      else
      {
LABEL_47:
        if ( !_4__this )
LABEL_61:
          sub_1BCB254(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( v2->fields._moveEffect_5__3 )
        {
          v2->fields.__2__current = 0LL;
          v19 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1BCAF9C(v19, 0, v35, v36);
          v22 = 7;
        }
        else
        {
LABEL_52:
          v2->fields._moveEffect_5__3 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__3, 0, v35, v36);
LABEL_53:
          v2->fields.__2__current = 0LL;
          v19 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1BCAF9C(v19, 0, v8, v9);
          v22 = 8;
        }
      }
      break;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_43;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_52;
    case 8:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      BattleActorControl__sendEventFSM_46076216(_4__this, (System_String_o *)StringLiteral_5398/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  LODWORD(v19[-1].fields._ThumbnailSpritePath_k__BackingField) = v22;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__360__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__360_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__360__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__360_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__colloadDressServant_d__360_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__360__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__360_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__360__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__360_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__357___ctor(
        BattleActorControl__colloadTransformServant_d__357_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__357__MoveNext(
        BattleActorControl__colloadTransformServant_d__357_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__colloadTransformServant_d__357_o *v4; // x19
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
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v25; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v31; // x21
  const MethodInfo *v32; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_List_object__o *v38; // x23
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 _2__current_low; // x10
  __int64 v44; // x8
  System_Collections_IEnumerator_o *v45; // x0
  CGThumbnailListItem_o *v46; // x19
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int v49; // w8
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  BattleActionData_ShiftServant_o *ShiftServant; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  UnityEngine_WaitForEndOfFrame_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct BattleActionData_ShiftServant_o *v59; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v62; // x1
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v66; // x8
  struct BattlePerformance_o *v67; // x8

  v4 = this;
  if ( (byte_4B1F7EA & 1) == 0 )
  {
    sub_1BCAFF8(&BattleServantSnapShotShiftServant_TypeInfo, method);
    sub_1BCAFF8(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo, v5);
    sub_1BCAFF8(&System_GC_TypeInfo, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__, v9);
    sub_1BCAFF8(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v10);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v11);
    sub_1BCAFF8(&OptionManager_TypeInfo, v12);
    sub_1BCAFF8(&ServantAssetLoadManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v14);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v15);
    this = (BattleActorControl__colloadTransformServant_d__357_o *)sub_1BCAFF8(&StringLiteral_5398/*"END_LOAD"*/, v16);
    byte_4B1F7EA = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_16:
      v20 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v4->fields._moveEffect_5__2 = v20;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._moveEffect_5__2, (int32_t)v20, v21, v22);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_78;
      if ( !motionFSM->max_length )
        sub_1BCB25C(this, method, v23);
      v25 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70136076(v25, 0LL);
      v4->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(p__2__current, 0, v27, v28);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      v31 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_1BCB244(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v31, battleSvtData, v32);
      if ( !v31 )
        goto LABEL_78;
      svtId_k__BackingField = v31->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v31->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v31->fields._overwriteSvtVoiceId_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0LL);
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v38 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v38,
          (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v38;
        sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.extraLoadedVoiceArgsList, (int32_t)v38, v39, v40);
        this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_78;
      }
      v41 = *(_QWORD *)&this->fields.__1__state;
      v42 = Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v41 )
        goto LABEL_78;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v41 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v31,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = v41 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v44 + 32) = v31;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 32), (int32_t)v31, v36, v37);
      }
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_78;
      ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)this, 0LL);
      v4->fields._shiftSvtData_5__3 = ShiftServant;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._shiftSvtData_5__3, (int32_t)ShiftServant, v53, v54);
      shiftSvtData_5__3 = v4->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_44282788(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__357_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0LL);
        v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v56, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v56;
        v46 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v46, (int32_t)v56, v57, v58);
        v49 = 2;
        goto LABEL_77;
      }
LABEL_51:
      v59 = v4->fields._shiftSvtData_5__3;
      if ( !v59 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      AfterSvtCache_k__BackingField = v59->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(AfterSvtCache_k__BackingField->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v62 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
            ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
            : 0LL;
      }
      else
      {
        v62 = 0LL;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v62, 0LL);
      BattleActorControl__ResetChangeModelByOriginalChange(_4__this, _4__this->fields.battleSvtData, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_61:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__357_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
          BattleActorControl__setDir(_4__this, 0LL);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0LL);
          this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v66 = _4__this->fields.battleSvtData;
              if ( v66 )
              {
                this = (BattleActorControl__colloadTransformServant_d__357_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard((BattleData_o *)this, v66->fields.uniqueId, v66->fields.uniqueId, 0LL);
                  v67 = _4__this->fields.performance;
                  if ( v67 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__357_o *)v67->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v67->fields.data,
                        _4__this->fields.battleSvtData,
                        0LL);
                      this = (BattleActorControl__colloadTransformServant_d__357_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__357_o *)BattlePerformance__get_FieldEnvData(
                                                                                         (BattlePerformance_o *)this,
                                                                                         0LL);
                        if ( this )
                        {
                          BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
                            (BattleFieldEnvironmentData_o *)this,
                            0LL);
                          if ( v4->fields._moveEffect_5__2 )
                          {
                            v4->fields.__2__current = 0LL;
                            v46 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                            sub_1BCAF9C(v46, 0, v50, v51);
                            v49 = 5;
                          }
                          else
                          {
LABEL_76:
                            v4->fields.__2__current = 0LL;
                            v46 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                            sub_1BCAF9C(v46, 0, v50, v51);
                            v49 = 6;
                          }
                          goto LABEL_77;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_78:
        sub_1BCB254(this, method);
      }
      v4->fields.__2__current = 0LL;
      v46 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v46, 0, v63, v64);
      v49 = 4;
LABEL_77:
      LODWORD(v46[-1].fields._ThumbnailSpritePath_k__BackingField) = v49;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__357_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__357_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      v45 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v45;
      v46 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v46, (int32_t)v45, v47, v48);
      v49 = 3;
      goto LABEL_77;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      goto LABEL_51;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_61;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__2, 0LL);
      goto LABEL_76;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      _4__this->fields.myShiftData = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.myShiftData, 0, v2, v3);
      BattleActorControl__sendEventFSM_46076216(_4__this, (System_String_o *)StringLiteral_5398/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__357__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__357_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__357__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__357_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__colloadTransformServant_d__357_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__357__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__357_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__357__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__357_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__243___ctor(
        BattleActorControl__coroutinePostCallBack_d__243_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__243__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__243_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v9; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v11; // x1
  Il2CppObject **v12; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v14; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4B1F7EB & 1) == 0 )
  {
    sub_1BCAFF8(&DefCoroutine_TypeInfo, method);
    sub_1BCAFF8(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4B1F7EB = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1BCB254(0LL, method);
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
    v14 = (UnityEngine_WaitForSeconds_o *)sub_1BCB244(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v14, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v14;
    p__2__current = &this->fields.__2__current;
    sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v9 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v9 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v9->static_fields;
    v11 = *static_fields;
    this->fields.__2__current = *static_fields;
    v12 = &this->fields.__2__current;
    sub_1BCAF9C((CGThumbnailListItem_o *)v12, (int32_t)v11, v2, v3);
    *((_DWORD *)v12 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__243__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__243_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__243__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__243_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__coroutinePostCallBack_d__243_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__243__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__243_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__243__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__243_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__363___ctor(
        BattleActorControl__waitChangeApp_d__363_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__363__MoveNext(
        BattleActorControl__waitChangeApp_d__363_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x0
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  struct System_Action_o *callback; // x8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    if ( !callback )
      goto LABEL_8;
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
  }
  else if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = BattleActorControl__collChangeAppearance(_4__this, 0LL);
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_70121648(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0LL);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)started, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_1BCB254(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__363__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__363_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__363__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__363_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_BattleActorControl__waitChangeApp_d__363_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__363__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__363_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__363__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__363_o *this,
        const MethodInfo *method)
{
  ;
}