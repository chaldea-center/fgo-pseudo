void BattleActorControl___cctor(const MethodInfo *method)
{
  if ( (byte_4C2A660 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_TypeInfo);
    byte_4C2A660 = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  System_Action_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattleLogData_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_int__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  TranslucentActorVisualInfo_o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_T__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Hashtable_o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Hashtable_o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_Dictionary_object__object__o *v47; // x20
  int32_t v48; // w2
  const MethodInfo *v49; // x3

  if ( (byte_4C2A65F & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleActorControl__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_NotDisplayFuncMotionAction__);
    sub_1C2D490(&BattleLogData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___TypeInfo);
    sub_1C2D490(&TranslucentActorVisualInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_16647/*"act"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A65F = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl____ctor__);
  v4 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleActorControl__TypeInfo);
  System_Action_object____ctor(v4, 0, Method_BattleActorControl_NotDisplayFuncMotionAction__, 0);
  if ( !v3 )
    sub_1C2D6EC(v5, v6);
  System_Collections_Generic_Dictionary_int__object___Add(
    v3,
    1202,
    (Il2CppObject *)v4,
    (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___Add__);
  this->fields.noPlaymakerMotionActionDict = (struct System_Collections_Generic_Dictionary_int__Action_BattleActorControl___o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.noPlaymakerMotionActionDict, (int32_t)v3, v7, v8);
  this->fields.currentSpShadowEffectId = -1;
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.auraList, (int32_t)v9, v10, v11);
  this->fields.actorScale = 1.0;
  v12 = (BattleLogData_o *)sub_1C2D6DC(BattleLogData_TypeInfo);
  BattleLogData___ctor_45860948(v12, (System_String_o *)StringLiteral_16647/*"act"*/, 90, 0);
  this->fields.battleLog = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleLog, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.buffLoopEffectDict, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.reservedEffectBuffEffectIdList, (int32_t)v18, v19, v20);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v21 = (TranslucentActorVisualInfo_o *)sub_1C2D6DC(TranslucentActorVisualInfo_TypeInfo);
  TranslucentActorVisualInfo___ctor(v21, 0);
  this->fields.translucentActorVisualInfo = v21;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.translucentActorVisualInfo, (int32_t)v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.prevAnimEffectTriggerKey, v24, v25, v26);
  v27 = StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.partAnimationSaveKey, v27, v28, v29);
  v30 = (System_Collections_Generic_List_T__o *)sub_1C2D6DC(System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___TypeInfo);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor(
    v30,
    (const MethodInfo_3738690 *)Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl____ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *)v30;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.noblePhantasmObjectVisibleCtrList, (int32_t)v30, v31, v32);
  v33 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__int____ctor(
    v33,
    (const MethodInfo_340DBE4 *)Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int___ctor__);
  this->fields._MotionProcessDict_k__BackingField = (struct System_Collections_Generic_Dictionary_BattleMotionProcessType__int__o *)v33;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._MotionProcessDict_k__BackingField, (int32_t)v33, v34, v35);
  v36 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v36, 0);
  this->fields.EventList = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.EventList, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v39, 0);
  this->fields.CompleteList = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.CompleteList, (int32_t)v39, v40, v41);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v47 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v47,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v47;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.eventClassAddedEventDict, (int32_t)v47, v48, v49);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void BattleActorControl__ActiveRemainReservedBuffEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_4C2A64A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_int___);
    sub_1C2D490(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__411_0__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4C2A64A = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_1C2D6EC(0, method);
  v4 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_376E618 *)Method_System_Collections_Generic_List_int__ToArray__);
  v5 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__411_0__,
    0);
  BasicHelper__ForEach_int_(v4, (System_Action_T__o *)v5, (const MethodInfo_30B9CE0 *)Method_BasicHelper_ForEach_int___);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__ActiveReservedBuffEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  void *buffLoopEffectDict; // x0
  __int64 v6; // x2
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w22

  if ( (byte_4C2A649 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4C2A649 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 1, 0);
    if ( this->fields.isPlayingNoblePhantasm )
    {
      buffLoopEffectDict = this->fields.buffLoopEffectDict;
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                             (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                             effectId,
                             (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      v7 = *((_DWORD *)buffLoopEffectDict + 6);
      v8 = buffLoopEffectDict;
      if ( v7 >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( v9 >= v7 )
            sub_1C2D6F4(buffLoopEffectDict, *(_QWORD *)&effectId, v6);
          buffLoopEffectDict = (void *)*((_QWORD *)v8 + (int)v9 + 4);
          if ( !buffLoopEffectDict )
            break;
          buffLoopEffectDict = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)buffLoopEffectDict, 0);
          if ( !buffLoopEffectDict )
            break;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)buffLoopEffectDict, 0, 0);
          v7 = *((_DWORD *)v8 + 6);
          if ( (int)++v9 >= v7 )
            goto LABEL_17;
        }
LABEL_22:
        sub_1C2D6EC(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_376E05C *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v7; // x20
  unsigned __int64 v8; // x22
  struct System_Collections_Generic_Dictionary_int__Action_BattleActorControl___o **p_noPlaymakerMotionActionDict; // x25
  Il2CppObject *v10; // x21
  const MethodInfo *v11; // x3
  intptr_t m_CachedPtr; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  intptr_t v15; // x8

  v4 = this;
  if ( (byte_4C2A617 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    this = (BattleActorControl_o *)sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    byte_4C2A617 = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                   obj,
                                   (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_17;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    p_noPlaymakerMotionActionDict = &this->fields.noPlaymakerMotionActionDict;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, obj, v5);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v10 = (Il2CppObject *)p_noPlaymakerMotionActionDict[v8];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v10,
                                       (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v13 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v10,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = m_CachedPtr + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v15 + 32) = v10;
          sub_1C2D434((CGThumbnailListItem_o *)(v15 + 32), (int32_t)v10, v5, v11);
        }
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_17:
    sub_1C2D6EC(this, obj);
  }
}


void BattleActorControl__AddNoblePhantasmChangedVisibleActor(
        BattleActorControl_o *this,
        int32_t timing,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  VisibleControlInfo_o *v7; // x21
  BattleActionData_o *actiondata; // x0
  System_ValueTuple_object__object__o v9; // x1 OVERLAPPED
  const MethodInfo *v10; // x3
  const MethodInfo_3AE98C8 *v11; // x4
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x20
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  CGThumbnailListItem_o *v17; // x0
  System_ValueTuple_object__object__o v18; // [xsp+0h] [xbp-40h] BYREF
  System_ValueTuple_object__object__o v19; // 0:x0.16

  if ( (byte_4C2A601 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Add__);
    sub_1C2D490(&Method_System_ValueTuple_VisibleControlInfo__BattleActorControl___ctor__);
    sub_1C2D490(&VisibleControlInfo_TypeInfo);
    byte_4C2A601 = 1;
  }
  v7 = (VisibleControlInfo_o *)sub_1C2D6DC(VisibleControlInfo_TypeInfo);
  VisibleControlInfo___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_14;
  v7->fields._Timing_k__BackingField = timing;
  if ( !targetActor )
    goto LABEL_14;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_14;
  v7->fields._TreasureDeviceRange_k__BackingField = BattleActionData__GetTargetSideFunctionRange(
                                                      actiondata,
                                                      targetActor->fields.isEnemy,
                                                      0);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_14;
  v7->fields._FunctionActorType_k__BackingField = BattleActionData__GetTargetOfTreasureDevice(
                                                    actiondata,
                                                    targetActor,
                                                    this,
                                                    0);
  if ( !BattleActorControl__ProcServantObjectVisibleCtr(targetActor, 0, v7, v10) )
    return;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  v19.fields.Item1 = (Il2CppObject *)&v18;
  v19.fields.Item2 = (Il2CppObject *)v7;
  v18.fields.Item1 = 0;
  v18.fields.Item2 = 0;
  System_ValueTuple_object__object____ctor(
    v19,
    (Il2CppObject *)targetActor,
    (Il2CppObject *)Method_System_ValueTuple_VisibleControlInfo__BattleActorControl___ctor__,
    v11);
  if ( !noblePhantasmObjectVisibleCtrList
    || (v9 = v18,
        items = noblePhantasmObjectVisibleCtrList->fields._items,
        v15 = Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Add__,
        ++noblePhantasmObjectVisibleCtrList->fields._version,
        !items) )
  {
LABEL_14:
    sub_1C2D6EC(actiondata, v9.fields.Item1);
  }
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize(
      noblePhantasmObjectVisibleCtrList,
      v9,
      *(const MethodInfo_3738F10 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = (CGThumbnailListItem_o *)(&items->obj + size);
    noblePhantasmObjectVisibleCtrList->fields._size = size + 1;
    v17->fields.sortValue0 = (int64_t)v9.fields.Item1;
    v17 = (CGThumbnailListItem_o *)((char *)v17 + 32);
    v17->monitor = v9.fields.Item2;
    sub_1C2D434(v17, 0, (int32_t)v9.fields.Item2, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__AddOverwriteEachPhaseAnimation(
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

  if ( (byte_4C2A644 & 1) == 0 )
  {
    sub_1C2D490(&ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    byte_4C2A644 = 1;
  }
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, *(const MethodInfo **)&svtId);
  Master = ServantAnimationOverwriteMaster__get_Master(0);
  if ( !Master )
    goto LABEL_9;
  Master = (ServantAnimationOverwriteMaster_o *)ServantAnimationOverwriteMaster__GetList(
                                                  Master,
                                                  svtId,
                                                  limitCount,
                                                  isEnemy,
                                                  0);
  if ( !Master )
    goto LABEL_9;
  v11 = (ServantAnimationOverwriteEntity_array *)Master;
  if ( Master->fields._MasterName_k__BackingField )
  {
    v12 = BattleActorControl__GetChangePhaseNotify(this, v10);
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1C2D6DC(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, 0);
    this->fields.overwriteAnim = v13;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.overwriteAnim, (int32_t)v13, v14, v15);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, 0);
      return;
    }
LABEL_9:
    sub_1C2D6EC(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4C2A648 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C2A648 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList
    || (items = reservedEffectBuffEffectIdList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++reservedEffectBuffEffectIdList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C2D6EC(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  }
  size = reservedEffectBuffEffectIdList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      reservedEffectBuffEffectIdList,
      effectId,
      *(const MethodInfo_376CB60 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    reservedEffectBuffEffectIdList->fields._size = size + 1;
    items->m_Items[size] = effectId;
  }
}


void BattleActorControl__AddServantVoicePlayed(
        BattleActorControl_o *this,
        System_String_array *playedSoundArray,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  System_Action_object__o *v7; // x21

  v4 = this;
  if ( (byte_4C2A5DF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_string__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_string___);
    sub_1C2D490(&Method_BattleActorControl__AddServantVoicePlayed_b__258_0__);
    this = (BattleActorControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5DF = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1C2D6EC(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(performance, 0, 0) )
      {
        v7 = (System_Action_object__o *)sub_1C2D6DC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v7,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__258_0__,
          0);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v7,
          (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_string___);
      }
    }
  }
}


void BattleActorControl__AfterProcLoadedChangeModel(
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


void BattleActorControl__ApplySpecialWaitModeFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o **v2; // x19
  BattleActorControl_o *v3; // x8
  System_String_o *v4; // x0
  System_String_o *v5; // x0
  int32_t Value; // w0
  int32_t v7; // w20
  __int64 v8; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v10; // x20
  unsigned __int64 v11; // x25
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x3
  System_String_o *v15; // x0
  System_String_o *v16; // x0
  int v17; // [xsp+Ch] [xbp-44h] BYREF

  v2 = (BattleActorControl_o **)this;
  if ( (byte_4C2A647 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_13358/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C2A647 = 1;
  }
  v3 = v2[66];
  if ( !v3 )
    goto LABEL_26;
  LOBYTE(v3[1].fields.endmotionCallMethod) = BYTE1(v3[1].fields.endmotionCallMethod);
  v17 = 1;
  v4 = System_Int32__ToString((int32_t)&v17, 0);
  v5 = System_String__Concat_63457864((System_String_o *)StringLiteral_13358/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v4, 0);
  Value = ConstantMaster__getValue(v5, 0);
  if ( Value != -1 )
  {
    v7 = Value;
    while ( 1 )
    {
      this = v2[66];
      if ( !this )
        goto LABEL_26;
      if ( v7 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0) )
      {
        this = v2[62];
        if ( !this )
          goto LABEL_26;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, 0);
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v10 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_24:
      ++v17;
      v15 = System_Int32__ToString((int32_t)&v17, 0);
      v16 = System_String__Concat_63457864((System_String_o *)StringLiteral_13358/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v15, 0);
      v7 = ConstantMaster__getValue(v16, 0);
      if ( v7 == -1 )
        return;
    }
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, method, v8);
      this = v2[21];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v10->fields.noPlaymakerMotionActionDict + v11),
                       0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)ServantActor, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ServantActor )
          break;
        this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
        if ( !this )
          break;
        if ( BYTE1(this[1].fields.endmotionCallMethod) )
        {
          LOBYTE(this[1].fields.endmotionCallMethod) = BYTE1(this[1].fields.endmotionCallMethod);
          BattleActorControl__playAnimation_46911212(ServantActor, (System_String_o *)StringLiteral_24695/*"wait"*/, 0, v13);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_46911212(ServantActor, (System_String_o *)StringLiteral_24695/*"wait"*/, 1, v14);
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C2D6EC(this, method);
  }
}


void BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_MaterialPropertyBlock_o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2A5A3 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    byte_4C2A5A3 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_1C2D6DC(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0);
  this->fields.mpb = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.mpb, (int32_t)v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__ChangeAnimationCurveEnemy(BattleActorControl_o *this, bool enable, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct BattlePerformance_o *performance; // x8
  bool v6; // w21
  __int64 v7; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x20
  struct BattlePerformance_o *v12; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  Il2CppObject *ComponentInChildren_object; // x20

  v4 = this;
  if ( (byte_4C2A607 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
    this = (BattleActorControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A607 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_21:
    sub_1C2D6EC(this, enable);
  v6 = enable;
  v7 = 4;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_21;
    max_length_low = LODWORD(e_actorlist->max_length);
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length_low )
      break;
    if ( v10 >= max_length_low )
      goto LABEL_23;
    v11 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v11, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v12 = v4->fields.performance;
      if ( !v12 )
        goto LABEL_21;
      v13 = v12->fields.e_actorlist;
      if ( !v13 )
        goto LABEL_21;
      if ( v10 >= LODWORD(v13->max_length) )
LABEL_23:
        sub_1C2D6F4(this, enable, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_21;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0,
                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_21;
        LOBYTE(ComponentInChildren_object[2].klass) = v6;
      }
    }
    performance = v4->fields.performance;
    ++v7;
    if ( !performance )
      goto LABEL_21;
  }
}


void BattleActorControl__ChangeBattleModel(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2A62F & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2A62F = 1;
  }
  BattleActorControl__ChangeBattleModel_46940720(this, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, v2);
}


void BattleActorControl__ChangeBattleModelArray(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4C2A62D & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2A62D = 1;
  }
  BattleActorControl__ChangeBattleModelArray_46940424(this, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, v2);
}


void BattleActorControl__ChangeBattleModelArray_46940424(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BattlePerformance_o *performance; // x19
  System_Action_o *v13; // x20

  if ( (byte_4C2A62E & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass373_0__ChangeBattleModelArray_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass373_0_TypeInfo);
    byte_4C2A62E = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass373_0_TypeInfo);
  BattleActorControl___c__DisplayClass373_0___ctor((BattleActorControl___c__DisplayClass373_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9),
        *(_QWORD *)(v5 + 24) = eventName,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)eventName, v10, v11),
        performance = this->fields.performance,
        v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_BattleActorControl___c__DisplayClass373_0__ChangeBattleModelArray_b__0__,
          0),
        !performance) )
  {
    sub_1C2D6EC(v6, v7);
  }
  BattlePerformance__ChangeBattleModelArray_44951784(performance, v13, 0);
}


void BattleActorControl__ChangeBattleModel_46940720(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  BattlePerformance_o *performance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20
  const MethodInfo *v13; // x3
  System_Collections_IEnumerator_o *v14; // x0
  BattleActionData_ChangeModelActionData_o *changeModelActData; // [xsp+0h] [xbp-40h] BYREF
  BattleActionData_o *actData; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2A630 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass375_0__ChangeBattleModel_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass375_0_TypeInfo);
    byte_4C2A630 = 1;
  }
  changeModelActData = 0;
  actData = 0;
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass375_0_TypeInfo);
  BattleActorControl___c__DisplayClass375_0___ctor((BattleActorControl___c__DisplayClass375_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = eventName;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)eventName, v10, v11);
  v12 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(
    v12,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass375_0__ChangeBattleModel_b__0__,
    0);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_11;
  if ( !BattlePerformance__TryGetActionData(performance, &actData, 0) )
    goto LABEL_9;
  performance = (BattlePerformance_o *)actData;
  if ( !actData )
LABEL_11:
    sub_1C2D6EC(performance, v7);
  if ( BattleActionData__TryGetChangeModelData(actData, &changeModelActData, this->fields.uniqueID, 0) )
  {
    v14 = BattleActorControl__CoroutineChangeBattleModel(this, changeModelActData, v12, v13);
    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v14, 0);
    return;
  }
LABEL_9:
  ActionExtensions__Call(v12, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__ChangeRotationEnemy(BattleActorControl_o *this, bool enable, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattlePerformance_o *performance; // x8
  __int64 v6; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v9; // x25
  UnityEngine_Object_o *v10; // x21
  struct BattlePerformance_o *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  Il2CppObject *ComponentInChildren_object; // x21

  v4 = this;
  if ( (byte_4C2A606 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
    this = (BattleActorControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A606 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_1C2D6EC(this, enable);
  v6 = 4;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_23;
    max_length_low = LODWORD(e_actorlist->max_length);
    v9 = v6 - 4;
    if ( v6 - 4 >= (int)max_length_low )
      break;
    if ( v9 >= max_length_low )
      goto LABEL_25;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v10, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v11 = v4->fields.performance;
      if ( !v11 )
        goto LABEL_23;
      v12 = v11->fields.e_actorlist;
      if ( !v12 )
        goto LABEL_23;
      if ( v9 >= LODWORD(v12->max_length) )
LABEL_25:
        sub_1C2D6F4(this, enable, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v12->obj.klass + v6);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)ComponentInChildren_object,
                                       0,
                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !ComponentInChildren_object )
          goto LABEL_23;
        if ( enable )
          BattleActorRotationComponent__RotationReStart((BattleActorRotationComponent_o *)ComponentInChildren_object, 0);
        else
          BattleActorRotationComponent__RotationStop((BattleActorRotationComponent_o *)ComponentInChildren_object, 0);
      }
    }
    performance = v4->fields.performance;
    ++v6;
    if ( !performance )
      goto LABEL_23;
  }
}


void BattleActorControl__ChangeShadowColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o col,
        float duration,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  BattleData_o *IsHideShadow; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  __int64 v17; // x2
  unsigned __int64 m_CancellationTokenSource; // x8
  BattleData_o *v19; // x19
  unsigned __int64 v20; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  Il2CppObject *Component_object; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4C2A60A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    byte_4C2A60A = 1;
  }
  IsHideShadow = (BattleData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
    return;
  if ( (float)((float)(a * a) + (float)((float)(b * b) + (float)((float)(r * r) + (float)(g * g)))) >= 1.0e-10 )
  {
    v12 = 1.0;
    v13 = 1.0;
    v14 = 1.0;
  }
  else
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_44;
    IsHideShadow = performance->fields.data;
    if ( !IsHideShadow )
      goto LABEL_44;
    GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0);
    v12 = GroundShadowColor.fields.r;
    v13 = GroundShadowColor.fields.g;
    v14 = GroundShadowColor.fields.b;
    a = GroundShadowColor.fields.a;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(shadowObj, 0, 0) )
  {
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__Clear_71020828((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    v24.fields.r = v12;
    v24.fields.g = v13;
    v24.fields.b = v14;
    v24.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16169/*"_Color"*/,
      v24,
      0);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0);
    IsHideShadow = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v12;
    this->fields.currentShadowColor.fields.g = v13;
    this->fields.currentShadowColor.fields.b = v14;
    this->fields.currentShadowColor.fields.a = a;
    if ( !IsHideShadow )
      goto LABEL_44;
    IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)IsHideShadow,
                                     (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)IsHideShadow, this->fields.mpb, 0);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0, 0) )
    return;
  IsHideShadow = (BattleData_o *)this->fields.specialShadowObj;
  if ( !IsHideShadow
    || (IsHideShadow = (BattleData_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                         (UnityEngine_GameObject_o *)IsHideShadow,
                                         1,
                                         (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224)) == 0 )
  {
LABEL_44:
    sub_1C2D6EC(IsHideShadow, v10);
  }
  m_CancellationTokenSource = (unsigned __int64)IsHideShadow->fields.m_CancellationTokenSource;
  v19 = IsHideShadow;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    p_rootfsm = &IsHideShadow->fields.rootfsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_35;
      if ( v20 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_45;
      IsHideShadow = (BattleData_o *)p_rootfsm[v20];
      if ( !IsHideShadow )
        goto LABEL_44;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)IsHideShadow,
                           (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (BattleData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      m_CancellationTokenSource = LODWORD(v19->fields.m_CancellationTokenSource);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        if ( v20 >= m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v20];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsHideShadow, 0);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0);
      }
      else
      {
LABEL_35:
        if ( v20 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v20];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsHideShadow, 0);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0);
        if ( v20 >= LODWORD(v19->fields.m_CancellationTokenSource) )
LABEL_45:
          sub_1C2D6F4(IsHideShadow, v10, v17);
        IsHideShadow = (BattleData_o *)p_rootfsm[v20];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)IsHideShadow, 0);
        if ( !IsHideShadow )
          goto LABEL_44;
        v25.fields.r = v12;
        v25.fields.g = v13;
        v25.fields.b = v14;
        v25.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)IsHideShadow, v25, 0);
      }
      LODWORD(m_CancellationTokenSource) = v19->fields.m_CancellationTokenSource;
      ++v20;
    }
    while ( (__int64)v20 < (int)m_CancellationTokenSource );
  }
}


void BattleActorControl__ChangeShadowParent(
        BattleActorControl_o *this,
        int32_t loadActorLimitCount,
        const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Transform_o *transform; // x0
  bool exist; // w21
  UnityEngine_Transform_o *v8; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x2

  if ( (byte_4C2A5B0 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_11421/*"RootShadow"*/);
    byte_4C2A5B0 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11421/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0);
    v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    NodeFromLvName = v8;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v8,
                         (System_String_o *)StringLiteral_11421/*"RootShadow"*/,
                         loadActorLimitCount,
                         0,
                         0);
    TransformHelper__SafeSetParentNonNull(this->fields.shadowObj, NodeFromLvName, 0);
  }
}


void BattleActorControl__ChangeShadowTexture(BattleActorControl_o *this, int32_t shadowId, const MethodInfo *method)
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = shadowId;
  if ( (byte_4C2A609 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Texture2D_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    sub_1C2D490(&StringLiteral_3097/*"Battle/Textures/shadow_"*/);
    sub_1C2D490(&StringLiteral_3098/*"Battle/Textures/shadow_1"*/);
    byte_4C2A609 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgPerf = (BattlePerformanceBg_o *)UnityEngine_Object__op_Equality(shadowObj, 0, 0);
  if ( ((unsigned __int8)bgPerf & 1) == 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_34;
    bgPerf = performance->fields.bgPerf;
    if ( !bgPerf )
      goto LABEL_34;
    ShadowTexture = (UnityEngine_Object_o *)BattlePerformanceBg__GetShadowTexture(bgPerf, shadowId, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0, 0) )
    {
      v10 = System_Int32__ToString((int32_t)&v16, 0);
      v11 = System_String__Concat_63457864((System_String_o *)StringLiteral_3097/*"Battle/Textures/shadow_"*/, v10, 0);
      v12 = UnityEngine_Resources__Load(v11, 0);
      if ( v12 )
      {
        if ( (UnityEngine_Texture2D_c *)v12->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v12;
        else
          ShadowTexture = 0;
      }
      else
      {
        ShadowTexture = 0;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0, 0) )
    {
      v13 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_3098/*"Battle/Textures/shadow_1"*/, 0);
      if ( v13 )
      {
        if ( (UnityEngine_Texture2D_c *)v13->klass == UnityEngine_Texture2D_TypeInfo )
          ShadowTexture = v13;
        else
          ShadowTexture = 0;
      }
      else
      {
        ShadowTexture = 0;
      }
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(ShadowTexture, 0, 0) )
    {
      bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
      if ( bgPerf )
      {
        UnityEngine_MaterialPropertyBlock__Clear_71020828((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16169/*"_Color"*/,
            this->fields.currentShadowColor,
            0);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.currentShadowTexure, (int32_t)ShadowTexture, v14, v15);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( bgPerf )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)bgPerf, this->fields.mpb, 0);
                return;
              }
            }
          }
        }
      }
LABEL_34:
      sub_1C2D6EC(bgPerf, v7);
    }
  }
}


System_String_o *BattleActorControl__CheckAnimationAndChangeCounterAttackWait(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  BattleServantData_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *v12; // x20
  System_Enum_o v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+18h] [xbp-38h]

  if ( (byte_4C2A642 & 1) == 0 )
  {
    sub_1C2D490(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C2A642 = 1;
  }
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( BYTE6(Instance->fields.userSvtId.fields.fakeValue) )
    return animname;
  if ( isSaveAnim && this->fields.isFirstSaveBeforePlayAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = animname;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)animname,
      v9,
      v10);
  }
  if ( !animname )
    goto LABEL_15;
  if ( !System_String__StartsWith(animname, (System_String_o *)StringLiteral_24695/*"wait"*/, 0) )
    return animname;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_15;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0) )
    return animname;
  v15 = 49;
  v14.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v14.monitor = (void *)-1LL;
  Instance = (BattleServantData_o *)System_Enum__ToString(&v14, 0);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_15:
    sub_1C2D6EC(Instance, v8);
  v12 = (System_String_o *)Instance;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)Instance, 0) )
    return v12;
  return animname;
}


System_String_o *BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_String_o *v5; // x19
  BattleActorControl_o *v6; // x20
  struct BattleServantData_o *battleSvtData; // x8
  BattleFBXComponent_o *fbxcomponent; // x8
  BattleActorControl_o *v9; // x20
  System_Enum_o v11; // [xsp+8h] [xbp-48h] BYREF
  int v12; // [xsp+18h] [xbp-38h]

  v5 = animname;
  v6 = this;
  if ( (byte_4C2A641 & 1) == 0 )
  {
    sub_1C2D490(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C2A641 = 1;
  }
  if ( isSaveAnim && v6->fields.isFirstSaveBeforePlayAnim )
  {
    v6->fields.isFirstSaveBeforePlayAnim = 0;
    v6->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&v6->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)v5,
      isSaveAnim,
      method);
  }
  if ( !v5 )
    goto LABEL_13;
  this = (BattleActorControl_o *)System_String__StartsWith(v5, (System_String_o *)StringLiteral_24695/*"wait"*/, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v5;
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return v5;
  v12 = 46;
  v11.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v11.monitor = (void *)-1LL;
  this = (BattleActorControl_o *)System_Enum__ToString(&v11, 0);
  fbxcomponent = v6->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_13:
    sub_1C2D6EC(this, animname);
  v9 = this;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)this, 0) )
    return (System_String_o *)v9;
  return v5;
}


bool BattleActorControl__CheckAuraPriority(BattleActorControl_o *this, int32_t priority, const MethodInfo *method)
{
  return this->fields._CurrentAuraPriority_k__BackingField <= priority;
}


System_Collections_IEnumerator_o *BattleActorControl__ColShiftServantPartChangeOnly(
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

  if ( (byte_4C2A63D & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__ColShiftServantPartChangeOnly_d__393_TypeInfo);
    byte_4C2A63D = 1;
  }
  v9 = sub_1C2D6DC(BattleActorControl__ColShiftServantPartChangeOnly_d__393_TypeInfo);
  BattleActorControl__ColShiftServantPartChangeOnly_d__393___ctor(
    (BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), (int32_t)shiftSvt, v14, v15);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 56), (int32_t)finishCallback, v16, v17);
  return (System_Collections_IEnumerator_o *)v9;
}


void BattleActorControl__Complete(BattleActorControl_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Hashtable_o *CompleteList; // x0
  const MethodInfo *v7; // x3
  struct System_Collections_Hashtable_o *v8; // x8
  BattleActorControl_EventClass_o *v9; // x21
  __int64 naturalAligment; // x9
  BattleActorControl_o *v11; // x0
  System_String_o *v12; // x1
  BattleActorControl_EventClass_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4C2A5E6 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&StringLiteral_1770/*"@OnComplete Fired!\n => <{0}>:"*/);
    byte_4C2A5E6 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1770/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *))CompleteList->klass->vtable._26_ContainsKey.methodPtr)(
          CompleteList,
          name,
          CompleteList->klass->vtable._26_ContainsKey.method)
      & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_46896280(this, name, 0, v7);
    return;
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList
    || (CompleteList = (struct System_Collections_Hashtable_o *)((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *))CompleteList->klass->vtable._28_get_Item.methodPtr)(
                                                                  CompleteList,
                                                                  name,
                                                                  CompleteList->klass->vtable._28_get_Item.method),
        (v8 = this->fields.CompleteList) == 0)
    || (v9 = (BattleActorControl_EventClass_o *)CompleteList,
        CompleteList = (struct System_Collections_Hashtable_o *)((struct System_Collections_Hashtable_o *(__fastcall *)(struct System_Collections_Hashtable_o *__return_ptr, struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *))v8->klass->vtable._37_Remove.methodPtr)(
                                                                  v8,
                                                                  this->fields.CompleteList,
                                                                  name,
                                                                  v8->klass->vtable._37_Remove.method),
        !v9) )
  {
LABEL_12:
    sub_1C2D6EC(CompleteList, v5);
  }
  naturalAligment = BattleActorControl_EventClass_TypeInfo->_2.naturalAligment;
  if ( v9->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (BattleActorControl_EventClass_c *)v9->klass->_2.typeHierarchy[naturalAligment - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v9, 0);
    goto LABEL_11;
  }
  sub_1C2D9AC(v9);
  BattleActorControl__setAnimationEvent(v11, v12, v13, v14);
}


System_Collections_IEnumerator_o *BattleActorControl__CoroutineChangeBattleModel(
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

  if ( (byte_4C2A631 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__CoroutineChangeBattleModel_d__376_TypeInfo);
    byte_4C2A631 = 1;
  }
  v7 = sub_1C2D6DC(BattleActorControl__CoroutineChangeBattleModel_d__376_TypeInfo);
  BattleActorControl__CoroutineChangeBattleModel_d__376___ctor(
    (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = changeModelActData;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)changeModelActData, v12, v13);
  *(_QWORD *)(v7 + 48) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 48), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v7;
}


void BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4C2A5F1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4C2A5F1 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1C2D6EC(0, eventName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (Il2CppObject *)motionName,
    (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4C2A5F2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__Remove__);
    byte_4C2A5F2 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1C2D6EC(0, eventName);
  System_Collections_Generic_Dictionary_object__object___Remove(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (const MethodInfo_344B824 *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4C2A5B1 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5B1 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704(actorObject, 0);
}


void BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_int__o v6; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C2A650 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4C2A650 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToList_int_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                 (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v6;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields._current, v5) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_1C2D6EC(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    buffLoopEffectDict,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A639 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__DestroyAuraEffect_d__386_TypeInfo);
    byte_4C2A639 = 1;
  }
  v4 = sub_1C2D6DC(BattleActorControl__DestroyAuraEffect_d__386_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__386___ctor((BattleActorControl__DestroyAuraEffect_d__386_o *)v4, 0, 0);
  if ( !v4 )
    sub_1C2D6EC(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 32), (int32_t)effectObject, v7, v8);
  return (System_Collections_IEnumerator_o *)v4;
}


void BattleActorControl__DestroyBeforeModelChangeActorObject(
        BattleActorControl_o *this,
        ServantAssetArgs_o *args,
        const MethodInfo *method)
{
  if ( (byte_4C2A633 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A633 = 1;
  }
  BattleActorControl__DestroyImmediateActorObject(this, (const MethodInfo *)args);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  ServantAssetLoadManager__unloadBattleActor(args, 0);
}


System_Collections_IEnumerator_o *BattleActorControl__DestroyEffectOnParticleStop(
        BattleActorControl_o *this,
        int32_t key,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A64E & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__DestroyEffectOnParticleStop_d__415_TypeInfo);
    byte_4C2A64E = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl__DestroyEffectOnParticleStop_d__415_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__415___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4C2A5B2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5B2 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_71163892(actorObject, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__DestroyLoopEffect(BattleActorControl_o *this, int32_t effectId, const MethodInfo *method)
{
  void *buffLoopEffectDict; // x0
  Il2CppObject *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19
  __int64 v9; // x2
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w24
  __int64 v13; // x8
  _QWORD *v14; // x21
  unsigned __int64 v15; // x25
  UnityEngine_Object_o *v16; // x22

  if ( (byte_4C2A64F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A64F = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
           effectId,
           (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                               (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v7 = this->fields.buffLoopEffectDict) == 0)
    || (v8 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__object___Remove(
                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                       effectId,
                                       (const MethodInfo_33E2704 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v8)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                               v8,
                               1,
                               (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224)) == 0 )
  {
LABEL_30:
    sub_1C2D6EC(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v10 = *((_DWORD *)buffLoopEffectDict + 6);
  v11 = buffLoopEffectDict;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= v10 )
        goto LABEL_29;
      buffLoopEffectDict = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      v13 = *((_QWORD *)buffLoopEffectDict + 3);
      v14 = buffLoopEffectDict;
      if ( (int)v13 >= 1 )
        break;
LABEL_25:
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_26;
    }
    v15 = 0;
    while ( v15 < (unsigned int)v13 )
    {
      v16 = (UnityEngine_Object_o *)v14[v15 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v16, 0);
      LODWORD(v13) = *((_DWORD *)v14 + 6);
      if ( (__int64)++v15 >= (int)v13 )
        goto LABEL_25;
    }
LABEL_29:
    sub_1C2D6F4(buffLoopEffectDict, *(_QWORD *)&effectId, v9);
  }
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v8, 0);
}


void BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  BattleActorControl_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4C2A5B5 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5B5 = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0, 0) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(v4, 0);
    this->fields.specialShadowObj = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.specialShadowObj, 0, v5, v6);
    BattleActorControl__EnableRenderer(v7, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v8);
  }
}


void BattleActorControl__DisplayAnimationEffect(
        BattleActorControl_o *this,
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  Il2CppObject *TriggerKey; // x20
  Il2CppObject *Value_object__object; // x21
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *prevAnimEffectTriggerKey; // x0
  System_Action_object__o *v13; // x22

  if ( (byte_4C2A5AF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleActorAnimationEffect__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    sub_1C2D490(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
    sub_1C2D490(&Method_BattleActorControl__DisplayAnimationEffect_b__168_0__);
    byte_4C2A5AF = 1;
  }
  TriggerKey = (Il2CppObject *)BattleActorAnimationEffect__MakeTriggerKey(animName, eventTag, 0);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                           TriggerKey,
                           0,
                           (const MethodInfo_30BCA70 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0) )
  {
    prevAnimEffectTriggerKey = this->fields.prevAnimEffectTriggerKey;
    if ( !prevAnimEffectTriggerKey )
      sub_1C2D6EC(0, v9);
    if ( !System_String__Equals_63493168(prevAnimEffectTriggerKey, (System_String_o *)TriggerKey, 0) )
    {
      v13 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_object____ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__168_0__,
        0);
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)Value_object__object,
        (System_Action_T__o *)v13,
        (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)TriggerKey;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.prevAnimEffectTriggerKey, (int32_t)TriggerKey, v10, v11);
}


void BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A5B4 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_TryGetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5B4 = 1;
  }
  component = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0, 0);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_11;
    if ( !UnityEngine_Component__TryGetComponent_object_(
            target,
            &component,
            (const MethodInfo_30C621C *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v6 = component;
    if ( !component )
LABEL_11:
      sub_1C2D6EC(v6, v7);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)component, isEnable, 0);
  }
}


bool BattleActorControl__EndServantObjectVisibleCtr(
        BattleActorControl_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, 1, visibleControlInfo, v3);
}


void BattleActorControl__EndSwapPositionBackStep(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  BattlePerformanceEnemy_o *enemyPref; // x8
  BattlePerformancePlayer_o *playerPerf; // x8

  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_8;
  statusPerf = performance->fields.statusPerf;
  if ( !statusPerf )
    goto LABEL_8;
  if ( this->fields.isEnemy )
  {
    enemyPref = statusPerf->fields.enemyPref;
    if ( enemyPref )
    {
      BattlePerformanceEnemy__DeleteStatusByUniqueId(enemyPref, this->fields.uniqueID, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(this, method);
  }
  playerPerf = statusPerf->fields.playerPerf;
  if ( !playerPerf )
    goto LABEL_8;
  BattlePerformancePlayer__DeleteStatusByUniqueId(playerPerf, this->fields.uniqueID, 0);
}


System_Collections_Generic_IEnumerable_Material__o *BattleActorControl__EnumerateMaterials(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  BattleActorControl___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__object__o *_9__338_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_T__o *v12; // x0

  if ( (byte_4C2A619 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_Material___);
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_1C2D490(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__EnumerateMaterials_b__338_0__);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A619 = 1;
  }
  RendererArray = BattleActorControl__GetRendererArray(this, 0, v2);
  v5 = BattleActorControl___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)RendererArray;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  _9__338_0 = (System_Func_object__object__o *)v5->static_fields->__9__338_0;
  if ( !_9__338_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__338_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    System_Func_object__object____ctor(_9__338_0, v8, Method_BattleActorControl___c__EnumerateMaterials_b__338_0__, 0);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__338_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__338_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__338_0, (int32_t)_9__338_0, v10, v11);
  }
  v12 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         v6,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)_9__338_0,
                                                         (const MethodInfo_3107E0C *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
  return (System_Collections_Generic_IEnumerable_Material__o *)BasicHelper__ExcludeNull_object_(
                                                                 v12,
                                                                 (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_Material___);
}


bool BattleActorControl__ExecuteServantObjectVisibleCtr(
        BattleActorControl_o *this,
        VisibleControlInfo_o *visibleControlInfo,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleActorControl__ProcServantObjectVisibleCtr(this, 0, visibleControlInfo, v3);
}


bool BattleActorControl__ExistMotionEvent(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4C2A5C8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
    sub_1C2D490(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass205_0__ExistMotionEvent_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass205_0_TypeInfo);
    byte_4C2A5C8 = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass205_0_TypeInfo);
  BattleActorControl___c__DisplayClass205_0___ctor((BattleActorControl___c__DisplayClass205_0_o *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = eventName;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)eventName, v8, v9);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass205_0__ExistMotionEvent_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          motionFSM,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_object_(
           v12,
           (const MethodInfo_30EECD8 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void BattleActorControl__FadeoutVoide(BattleActorControl_o *this, float fadeoutTime, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4C2A622 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A622 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__StopVoice(uniqueID, fadeoutTime, 0);
  }
}


void BattleActorControl__GenerateDropObjects(
        BattleActorControl_o *this,
        int32_t overwriteStartIndex,
        System_Action_GameObject__o *dropObjectGeneratedCallback,
        System_Action_DropInfo__o *dropInfoSelectedCallback,
        DropInfo_array *dropList,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Transform_o *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x29
  UnityEngine_Object_c **v18; // x27
  int32_t v19; // w24
  unsigned __int64 v20; // x28
  int32_t max_length; // w3
  DropInfo_o **m_Items; // x21
  UnityEngine_Object_o *Item_44884516; // x26
  DropInfo_o **v24; // x25
  __int64 v25; // x21
  int32_t v26; // w29
  DropInfo_array *v27; // x24
  System_Action_DropInfo__o *v28; // x19
  UnityEngine_Object_c **v29; // x20
  BattlePerformance_o *v30; // x27
  Il2CppObject *arg; // [xsp+8h] [xbp-68h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A5EC & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_DropInfo___);
    sub_1C2D490(&Method_ActionExtensions_Call_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5EC = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)dropList, 0) )
  {
    DropTransform = BattleActorControl__getDropTransform(this, v10);
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_20;
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_20;
    v15 = DropTransform;
    DropTransform = (UnityEngine_Transform_o *)performance->fields.data;
    if ( !DropTransform )
      goto LABEL_20;
    DropTransform = (UnityEngine_Transform_o *)BattleData__getServantIndex(
                                                 (BattleData_o *)DropTransform,
                                                 battleSvtData->fields.isEnemy,
                                                 battleSvtData->fields.uniqueId,
                                                 0);
    if ( !dropList )
      goto LABEL_20;
    if ( (int)dropList->max_length >= 1 )
    {
      v17 = (unsigned int)overwriteStartIndex;
      v18 = &UnityEngine_Object_TypeInfo;
      v19 = (int)DropTransform;
      v20 = 0;
      max_length = dropList->max_length;
      m_Items = dropList->m_Items;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)max_length )
          sub_1C2D6F4(DropTransform, v12, v16);
        DropTransform = (UnityEngine_Transform_o *)this->fields.performance;
        if ( !DropTransform )
          break;
        arg = (Il2CppObject *)m_Items[v20];
        Item_44884516 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_44884516(
                                                  (BattlePerformance_o *)DropTransform,
                                                  v15,
                                                  (DropInfo_o *)arg,
                                                  max_length,
                                                  (int)v17 + (int)v20,
                                                  v19,
                                                  this->fields.headupVec,
                                                  (System_Collections_Generic_IDictionary_DropInfo_DropEffectType__ScriptableObject__o *)this->fields.dropEffectOverwriteSettingDictionary,
                                                  0);
        if ( !(*v18)->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(*v18);
        DropTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Inequality(Item_44884516, 0, 0);
        if ( ((unsigned __int8)DropTransform & 1) != 0 )
        {
          if ( !v15 )
            break;
          v24 = m_Items;
          v25 = v17;
          v26 = v19;
          v27 = dropList;
          v28 = dropInfoSelectedCallback;
          v29 = v18;
          v30 = this->fields.performance;
          position = UnityEngine_Transform__get_position(v15, 0);
          if ( !v30 )
            break;
          BattlePerformance__saveOriginalPos(
            v30,
            (UnityEngine_GameObject_o *)Item_44884516,
            position,
            this->fields.criteriaPos,
            0);
          ActionExtensions__Call_object_(
            (System_Action_T__o *)dropObjectGeneratedCallback,
            (Il2CppObject *)Item_44884516,
            (const MethodInfo_301B240 *)Method_ActionExtensions_Call_GameObject___);
          v18 = v29;
          dropInfoSelectedCallback = v28;
          dropList = v27;
          v19 = v26;
          v17 = v25;
          m_Items = v24;
        }
        ActionExtensions__Call_object_(
          (System_Action_T__o *)dropInfoSelectedCallback,
          arg,
          (const MethodInfo_301B240 *)Method_ActionExtensions_Call_DropInfo___);
        max_length = dropList->max_length;
        if ( (__int64)++v20 >= max_length )
          return;
      }
LABEL_20:
      sub_1C2D6EC(DropTransform, v12);
    }
  }
}


UnityEngine_Color_o BattleActorControl__GetAddColor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v5; // x1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A612 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    byte_4C2A612 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( rendererArrayList && rendererArrayList->fields._size >= 1 )
  {
    Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                       rendererArrayList,
                                       0,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    if ( !Item )
      goto LABEL_13;
    Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0);
    if ( !Item )
      goto LABEL_13;
    if ( UnityEngine_Material__HasProperty_71029840(
           (UnityEngine_Material_o *)Item,
           (System_String_o *)StringLiteral_16117/*"_AddColor"*/,
           0) )
    {
      Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
      if ( Item )
      {
        Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)Item,
                                           0,
                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
        if ( Item )
        {
          Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0);
          if ( Item )
            return UnityEngine_Material__GetColor(
                     (UnityEngine_Material_o *)Item,
                     (System_String_o *)StringLiteral_16117/*"_AddColor"*/,
                     0);
        }
      }
LABEL_13:
      sub_1C2D6EC(Item, v5);
    }
  }
  result.fields.r = 0.0;
  result.fields.g = 0.0;
  result.fields.b = 0.0;
  result.fields.a = 0.0;
  return result;
}


bool BattleActorControl__GetBattleModelObjectVisibleControlComponentsEnable(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleModelObjectVisibleControlComponent_array *BattleModelObjectVisibleControlComponents; // x8

  BattleModelObjectVisibleControlComponents = this->fields.BattleModelObjectVisibleControlComponents;
  if ( !BattleModelObjectVisibleControlComponents )
    sub_1C2D6EC(this, method);
  return LODWORD(BattleModelObjectVisibleControlComponents->max_length) != 0;
}


ChangeBattlePhaseNotify_o *BattleActorControl__GetChangePhaseNotify(
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

  if ( (byte_4C2A643 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A643 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality(performance, 0, 0);
  result = 0;
  if ( v5 )
  {
    v7 = this->fields.performance;
    if ( !v7 )
      goto LABEL_14;
    data = (UnityEngine_Object_o *)v7->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality(data, 0, 0);
    result = 0;
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
      sub_1C2D6EC(0, v4);
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  PlayMakerFSM_o *Fsm; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v10; // x20
  unsigned __int64 v11; // x21
  System_String_o *v12; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C2A657 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&StringLiteral_5216/*"DelayEnd"*/);
    byte_4C2A657 = 1;
  }
  result = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_23;
  if ( !LODWORD(motionFSM->max_length) )
    goto LABEL_24;
  Fsm = motionFSM->m_Items[0];
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Fsm, 0);
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)Fsm[1].fields.m_CancellationTokenSource;
  if ( !Fsm )
    goto LABEL_23;
  Fsm = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__GetFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)Fsm,
                            (System_String_o *)StringLiteral_5216/*"DelayEnd"*/,
                            0);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0);
  Fsm = (PlayMakerFSM_o *)System_String__IsNullOrEmpty(Value, 0);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return v3;
  if ( !Value || (Fsm = (PlayMakerFSM_o *)System_String__Split(Value, 0x2Cu, 0, 0)) == 0 )
LABEL_23:
    sub_1C2D6EC(Fsm, v5);
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v10 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v11 = 0;
    while ( v11 < (unsigned int)m_CancellationTokenSource )
    {
      v12 = (System_String_o *)*((_QWORD *)&v10->fields.fsm + v11);
      result = 0;
      Fsm = (PlayMakerFSM_o *)System_Int32__TryParse(v12, &result, 0);
      if ( ((unsigned __int8)Fsm & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_23;
        v5 = (unsigned int)result;
        items = v3->fields._items;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = v5;
        }
      }
      LODWORD(m_CancellationTokenSource) = v10->fields.m_CancellationTokenSource;
      if ( (__int64)++v11 >= (int)m_CancellationTokenSource )
        return v3;
    }
LABEL_24:
    sub_1C2D6F4(Fsm, v5, v6);
  }
  return v3;
}


System_String_o *BattleActorControl__GetFixedMotionName(
        BattleActorControl_o *this,
        System_String_o *motionName,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  _BOOL8 IsPig; // x0
  const MethodInfo *v6; // x2

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData && (IsPig = BattleServantData__IsPig(battleSvtData, 0)) )
    return BattleActorControl__GetPigMotionName((BattleActorControl_o *)IsPig, motionName, v6);
  else
    return motionName;
}


float BattleActorControl__GetHeight(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleServantData_o *battleSvtData; // x8
  float actorScale; // s0
  float *p_height; // x8
  BattleActorControl_c *v6; // x0
  float height; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4C2A5EE & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&BattleActorControl_TypeInfo);
    byte_4C2A5EE = 1;
  }
  height = 0.0;
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_14;
  this = (BattleActorControl_o *)battleSvtData->fields.svtdata;
  if ( !this )
    goto LABEL_14;
  if ( ServantEntity__getBattleHeight((ServantEntity_o *)this, &height, 0) )
  {
    actorScale = v2->fields.actorScale;
    p_height = &height;
    return *p_height * actorScale;
  }
  this = (BattleActorControl_o *)v2->fields.battleSvtData;
  if ( !this )
LABEL_14:
    sub_1C2D6EC(this, method);
  if ( BattleServantData__get_BattleSize((BattleServantData_o *)this, 0) == 6 )
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


UnityEngine_Color_o BattleActorControl__GetMainColor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v5; // x1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A611 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    byte_4C2A611 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( rendererArrayList && rendererArrayList->fields._size >= 1 )
  {
    Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                       rendererArrayList,
                                       0,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    if ( !Item )
      goto LABEL_13;
    Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0);
    if ( !Item )
      goto LABEL_13;
    if ( UnityEngine_Material__HasProperty_71029840(
           (UnityEngine_Material_o *)Item,
           (System_String_o *)StringLiteral_16169/*"_Color"*/,
           0) )
    {
      Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
      if ( Item )
      {
        Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)Item,
                                           0,
                                           (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
        if ( Item )
        {
          Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0);
          if ( Item )
            return UnityEngine_Material__GetColor(
                     (UnityEngine_Material_o *)Item,
                     (System_String_o *)StringLiteral_16169/*"_Color"*/,
                     0);
        }
      }
LABEL_13:
      sub_1C2D6EC(Item, v5);
    }
  }
  result.fields.r = 1.0;
  result.fields.g = 1.0;
  result.fields.b = 1.0;
  result.fields.a = 1.0;
  return result;
}


BattleAdjustPopupPosInScreenComponent_o *BattleActorControl__GetMatchAdjustPosInScreenComponent(
        BattleActorControl_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Collections_Generic_IEnumerable_TSource__o *AdjustPopupComponents_k__BackingField; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C2A59E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_BattleAdjustPopupPosInScreenComponent___);
    sub_1C2D490(&System_Func_BattleAdjustPopupPosInScreenComponent__bool__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass32_0__GetMatchAdjustPosInScreenComponent_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass32_0_TypeInfo);
    byte_4C2A59E = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass32_0_TypeInfo);
  BattleActorControl___c__DisplayClass32_0___ctor((BattleActorControl___c__DisplayClass32_0_o *)v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 16) = data;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)data, v8, v9);
  AdjustPopupComponents_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._AdjustPopupComponents_k__BackingField;
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleAdjustPopupPosInScreenComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass32_0__GetMatchAdjustPosInScreenComponent_b__0__,
    0);
  return (BattleAdjustPopupPosInScreenComponent_o *)System_Linq_Enumerable__FirstOrDefault_object__51348472(
                                                      AdjustPopupComponents_k__BackingField,
                                                      (System_Func_TSource__bool__o *)v11,
                                                      (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleAdjustPopupPosInScreenComponent___);
}


// local variable allocation has failed, the output may be wrong!
System_ValueTuple_int__string__o BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  System_String_o *FixedMotionName; // x20
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x3
  const MethodInfo_3AE44D8 *v8; // x4
  Il2CppObject *v9; // x3
  System_ValueTuple_T1__T2__o v10; // x0
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  bool HasGlobalTransitionInFsm_46898216; // w0
  __int64 v15; // x0
  struct System_String_o *v16; // x1
  __int64 v17; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v18; // [xsp+8h] [xbp-38h]
  System_ValueTuple_int__string__o result; // 0:x0.16

  if ( (byte_4C2A5C3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_ValueTuple_int__string___ctor__);
    byte_4C2A5C3 = 1;
  }
  FixedMotionName = BattleActorControl__GetFixedMotionName(this, eventName, method);
  if ( BattleActorControl__HasGlobalTransitionInFsm_46898216(this, 0, FixedMotionName, v6) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v10.fields.Item1 = (Il2CppObject *)&v17;
    v10.fields.Item2 = 0;
    v17 = 0;
    v18 = 0;
LABEL_11:
    v13 = (int)FixedMotionName;
    goto LABEL_16;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData
    && BattleServantData__IsPig(battleSvtData, 0)
    && BattleActorControl__HasGlobalTransitionInFsm_46898216(this, 2, FixedMotionName, v7) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v17 = 0;
    v18 = 0;
    v10.fields.Item1 = (Il2CppObject *)&v17;
    v10.fields.Item2 = (Il2CppObject *)(&dword_0 + 2);
    goto LABEL_11;
  }
  if ( BattleActorControl__HasGlobalTransitionInFsm_46898216(this, 1, FixedMotionName, v7) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v17 = 0;
    v18 = 0;
    v10.fields.Item1 = (Il2CppObject *)&v17;
    v10.fields.Item2 = (Il2CppObject *)(&dword_0 + 1);
    goto LABEL_11;
  }
  HasGlobalTransitionInFsm_46898216 = BattleActorControl__HasGlobalTransitionInFsm_46898216(this, 0, eventName, v12);
  v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
  v17 = 0;
  v18 = 0;
  if ( HasGlobalTransitionInFsm_46898216 )
  {
    v10.fields.Item1 = (Il2CppObject *)&v17;
    v10.fields.Item2 = 0;
  }
  else
  {
    v10.fields.Item1 = (Il2CppObject *)&v17;
    v10.fields.Item2 = (Il2CppObject *)(&dword_0 + 1);
  }
  v13 = (int)eventName;
LABEL_16:
  System_ValueTuple_int__object____ctor(v10, v13, v9, v8);
  v15 = v17;
  v16 = v18;
  result.fields.Item2 = v16;
  *(_QWORD *)&result.fields.Item1 = v15;
  return result;
}


System_String_o *BattleActorControl__GetPigMotionName(
        BattleActorControl_o *this,
        System_String_o *motionName,
        const MethodInfo *method)
{
  if ( (byte_4C2A5CA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16294/*"_PIG"*/);
    byte_4C2A5CA = 1;
  }
  return System_String__Concat_63457864(motionName, (System_String_o *)StringLiteral_16294/*"_PIG"*/, 0);
}


BattlePlayAnimationComponent_array *BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4C2A65E & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
    byte_4C2A65E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
}


System_String_o *BattleActorControl__GetPrefixVoiceId(
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

  if ( (byte_4C2A5E2 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C2A5E2 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  v8 = Instance;
  if ( !myShiftData )
  {
    Instance = this->fields.battleSvtData;
    if ( Instance )
    {
      SvtId = BattleServantData__getSvtId(Instance, 0);
      Instance = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v13);
      if ( v8 )
      {
        limit = (int)Instance;
        Instance = v8;
        v10 = SvtId;
        return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0);
      }
    }
LABEL_11:
    sub_1C2D6EC(Instance, v7);
  }
  v9 = this->fields.myShiftData;
  if ( !v9 || !Instance )
    goto LABEL_11;
  v10 = v9->fields.svtId;
  limit = v9->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0);
}


UnityEngine_SkinnedMeshRenderer_array *BattleActorControl__GetRendererArray(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4C2A618 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____78065240);
    byte_4C2A618 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v6);
  return (UnityEngine_SkinnedMeshRenderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                    gameObject,
                                                    includeInactive,
                                                    (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____78065240);
}


System_Collections_Generic_List_BattleActorControl__o *BattleActorControl__GetServantObjectVisibleControlActor(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  BattleActionData_o *actiondata; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v13; // x22
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *Component_object; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _DWORD *monitor; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C2A600 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_int__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass308_0__GetServantObjectVisibleControlActor_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass308_0_TypeInfo);
    byte_4C2A600 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = sub_1C2D6DC(BattleActorControl___c__DisplayClass308_0_TypeInfo);
  BattleActorControl___c__DisplayClass308_0___ctor((BattleActorControl___c__DisplayClass308_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v3 + 16) = v9;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 16), (int32_t)v9, v10, v11);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, 0),
        v13 = (System_Action_int__o *)sub_1C2D6DC(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v13,
          (Il2CppObject *)v3,
          Method_BattleActorControl___c__DisplayClass308_0__GetServantObjectVisibleControlActor_b__0__,
          0),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v13,
          (const MethodInfo_30B9CE0 *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v3 + 16)) == 0) )
  {
LABEL_29:
    sub_1C2D6EC(actiondata, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)actiondata,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( !v15 )
    {
      if ( !current )
        sub_1C2D6EC(v15, v16);
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   (UnityEngine_GameObject_o *)current,
                                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Equality(Component_object, 0, 0);
      if ( !v18 )
      {
        if ( !Component_object )
          sub_1C2D6EC(v18, v19);
        monitor = Component_object[18].monitor;
        if ( !monitor )
          sub_1C2D6EC(v18, v19);
        if ( monitor[6] )
        {
          if ( !v8 )
            sub_1C2D6EC(v18, v19);
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1C2D6EC(v18, v19);
          size = v8->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)Component_object,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v26[4] = (Il2CppClass *)Component_object;
            sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)Component_object, v20, v21);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v8;
}


UnityEngine_GameObject_array *BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


void BattleActorControl__GetShiftMotionNameAndOverwriteFlag(
        int32_t overwriteMotionNumber,
        System_String_o **motionName,
        bool *isOverwriteShift,
        const MethodInfo *method)
{
  __int64 v4; // x4
  Il2CppObject *v8; // x0
  System_String_o *v9; // x1
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2A63B & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_8763/*"MOTION_SHIFT"*/);
    sub_1C2D490(&StringLiteral_8757/*"MOTION_OVERWRITE_SHIFT_{0}"*/);
    byte_4C2A63B = 1;
  }
  *isOverwriteShift = overwriteMotionNumber > 0;
  if ( overwriteMotionNumber <= 0 )
  {
    v9 = (System_String_o *)StringLiteral_8763/*"MOTION_SHIFT"*/;
  }
  else
  {
    v10 = overwriteMotionNumber;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v10, isOverwriteShift, method, v4);
    v9 = System_String__Format((System_String_o *)StringLiteral_8757/*"MOTION_OVERWRITE_SHIFT_{0}"*/, v8, 0);
  }
  *motionName = v9;
  sub_1C2D434((CGThumbnailListItem_o *)motionName, (int32_t)v9, (int32_t)isOverwriteShift, method);
}


UnityEngine_Transform_o *BattleActorControl__GetTransform(BattleActorControl_o *this, const MethodInfo *method)
{
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
}


PlayMakerFSM_o *BattleActorControl__GetUniqueMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1C2D6EC(this, method);
  if ( !LODWORD(motionFSM->max_length) )
    sub_1C2D6F4(this, method, v2);
  return motionFSM->m_Items[0];
}


int32_t BattleActorControl__GetValueOfMotionProcess(
        BattleActorControl_o *this,
        int32_t type,
        int32_t defaultValue,
        const MethodInfo *method)
{
  if ( (byte_4C2A5C1 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_GetValue_BattleMotionProcessType__int___);
    byte_4C2A5C1 = 1;
  }
  return BasicHelper__GetValue_Int32Enum__int_(
           (System_Collections_Generic_Dictionary_K__V__o *)this->fields._MotionProcessDict_k__BackingField,
           type,
           defaultValue,
           (const MethodInfo_30BC720 *)Method_BasicHelper_GetValue_BattleMotionProcessType__int___);
}


bool BattleActorControl__HasGlobalTransitionInFsm_46897972(
        PlayMakerFSM_o *targetFsm,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Object_array *FsmGlobalTransitions; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4C2A5C7 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_FsmTransition___);
    sub_1C2D490(&System_Func_FsmTransition__bool__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass204_0__HasGlobalTransitionInFsm_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass204_0_TypeInfo);
    byte_4C2A5C7 = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass204_0_TypeInfo);
  BattleActorControl___c__DisplayClass204_0___ctor((BattleActorControl___c__DisplayClass204_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = globalTransitionName,
        sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)globalTransitionName, v8, v9),
        !targetFsm) )
  {
    sub_1C2D6EC(v6, v7);
  }
  FsmGlobalTransitions = (System_Object_array *)PlayMakerFSM__get_FsmGlobalTransitions(targetFsm, 0);
  v11 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_FsmTransition__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass204_0__HasGlobalTransitionInFsm_b__0__,
    0);
  return BasicHelper__Any_object__51084700(
           FsmGlobalTransitions,
           (System_Func_T__bool__o *)v11,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_FsmTransition___);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActorControl__HasGlobalTransitionInFsm_46898216(
        BattleActorControl_o *this,
        int32_t fsmIndex,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x21
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *v8; // x20

  v6 = this;
  if ( (byte_4C2A5C6 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&BattleActorControl_TypeInfo);
    byte_4C2A5C6 = 1;
  }
  motionFSM = v6->fields.motionFSM;
  if ( !motionFSM )
    sub_1C2D6EC(this, *(_QWORD *)&fsmIndex);
  if ( LODWORD(motionFSM->max_length) <= fsmIndex )
    sub_1C2D6F4(this, *(_QWORD *)&fsmIndex, globalTransitionName);
  v8 = motionFSM->m_Items[fsmIndex];
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  return BattleActorControl__HasGlobalTransitionInFsm_46897972(
           v8,
           globalTransitionName,
           (const MethodInfo *)globalTransitionName);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActorControl__HasMotionIdInCommonMotion(
        BattleActorControl_o *this,
        int32_t motionId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  PlayMakerFSM_o *CommonFsm; // x20
  System_String_o *v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4C2A5C5 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_TypeInfo);
    byte_4C2A5C5 = 1;
  }
  CommonFsm = BattleActorControl__get_CommonFsm(this, *(const MethodInfo **)&motionId);
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  v7 = BattleActorControl__MotionIdStr(motionId, v5);
  return BattleActorControl__HasGlobalTransitionInFsm_46897972(CommonFsm, v7, v8);
}


void BattleActorControl__InitAnimationEffect(BattleActorControl_o *this, int32_t limitCount, const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass167_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_dicTriggerAnimEffects; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  BattleActorControl___c_c *v19; // x0
  System_Func_object__object__o *_9__167_1; // x21
  Il2CppObject *v21; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v25; // x0
  BattleActorControl___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__object__o *_9__167_2; // x21
  Il2CppObject *v29; // x22
  struct BattleActorControl___c_StaticFields *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Func_object__object__o *_9__167_3; // x22
  Il2CppObject *v34; // x23
  struct BattleActorControl___c_StaticFields *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4C2A5AE & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
    sub_1C2D490(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
    sub_1C2D490(&System_Func_BattleActorAnimationEffect__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattleActorAnimationEffect__string__TypeInfo);
    sub_1C2D490(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__InitAnimationEffect_b__167_1__);
    sub_1C2D490(&Method_BattleActorControl___c__InitAnimationEffect_b__167_2__);
    sub_1C2D490(&Method_BattleActorControl___c__InitAnimationEffect_b__167_3__);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass167_0__InitAnimationEffect_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass167_0_TypeInfo);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A5AE = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass167_0_o *)sub_1C2D6DC(BattleActorControl___c__DisplayClass167_0_TypeInfo);
  BattleActorControl___c__DisplayClass167_0___ctor(v5, 0);
  if ( !v5 )
    goto LABEL_29;
  v5->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (CGThumbnailListItem_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dicTriggerAnimEffects, 0, v8, v9);
  v11 = StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.prevAnimEffectTriggerKey, v11, v12, v13);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actorObject, 0, 0) )
  {
    v6 = this->fields.actorObject;
    if ( v6 )
    {
      Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                                 v6,
                                                                                 (const MethodInfo_312682C *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v16 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_BattleActorControl___c__DisplayClass167_0__InitAnimationEffect_b__0__,
        0);
      v17 = System_Linq_Enumerable__Where_object_(
              Components_object,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v17,
                                                                   (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18, 0) )
      {
        v19 = BattleActorControl___c_TypeInfo;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v19 = BattleActorControl___c_TypeInfo;
        }
        _9__167_1 = (System_Func_object__object__o *)v19->static_fields->__9__167_1;
        if ( !_9__167_1 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = BattleActorControl___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__167_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__167_1,
            v21,
            Method_BattleActorControl___c__InitAnimationEffect_b__167_1__,
            0);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__167_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__167_1;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__167_1, (int32_t)_9__167_1, v23, v24);
        }
        v25 = System_Linq_Enumerable__GroupBy_object__object_(
                v18,
                (System_Func_TSource__TKey__o *)_9__167_1,
                (const MethodInfo_30F8E48 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v26 = BattleActorControl___c_TypeInfo;
        v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v26 = BattleActorControl___c_TypeInfo;
        }
        _9__167_2 = (System_Func_object__object__o *)v26->static_fields->__9__167_2;
        if ( !_9__167_2 )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = BattleActorControl___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v26->static_fields->__9;
          _9__167_2 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_object__object____ctor(
            _9__167_2,
            v29,
            Method_BattleActorControl___c__InitAnimationEffect_b__167_2__,
            0);
          v30 = BattleActorControl___c_TypeInfo->static_fields;
          v30->__9__167_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__167_2;
          sub_1C2D434((CGThumbnailListItem_o *)&v30->__9__167_2, (int32_t)_9__167_2, v31, v32);
          v26 = BattleActorControl___c_TypeInfo;
        }
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleActorControl___c_TypeInfo;
        }
        _9__167_3 = (System_Func_object__object__o *)v26->static_fields->__9__167_3;
        if ( !_9__167_3 )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = BattleActorControl___c_TypeInfo;
          }
          v34 = (Il2CppObject *)v26->static_fields->__9;
          _9__167_3 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_object__object____ctor(
            _9__167_3,
            v34,
            Method_BattleActorControl___c__InitAnimationEffect_b__167_3__,
            0);
          v35 = BattleActorControl___c_TypeInfo->static_fields;
          v35->__9__167_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__167_3;
          sub_1C2D434((CGThumbnailListItem_o *)&v35->__9__167_3, (int32_t)_9__167_3, v36, v37);
        }
        v38 = System_Linq_Enumerable__ToDictionary_object__object__object_(
                v27,
                (System_Func_TSource__TKey__o *)_9__167_2,
                (System_Func_TSource__TElement__o *)_9__167_3,
                (const MethodInfo_310EA00 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (CGThumbnailListItem_c *)v38;
        sub_1C2D434(p_dicTriggerAnimEffects, (int32_t)v38, v39, v40);
      }
      return;
    }
LABEL_29:
    sub_1C2D6EC(v6, v7);
  }
}


bool BattleActorControl__IsAllSucceededMovingToSubMember(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v5; // x0
  System_Func_object__bool__o *_9__235_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2A5D0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
    sub_1C2D490(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__235_0__);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A5D0 = 1;
  }
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return 1;
  moveToSubMemberList = (System_Collections_Generic_IEnumerable_TSource__o *)actiondata->fields.moveToSubMemberList;
  if ( !moveToSubMemberList )
    return 1;
  v5 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  _9__235_0 = (System_Func_object__bool__o *)v5->static_fields->__9__235_0;
  if ( !_9__235_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__235_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__235_0,
      v7,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__235_0__,
      0);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__235_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__235_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__235_0, (int32_t)_9__235_0, v9, v10);
  }
  return System_Linq_Enumerable__All_object_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__235_0,
           (const MethodInfo_30D8E00 *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
}


bool BattleActorControl__IsAlreadyDrop(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.IsAlreadyDrop;
}


bool BattleActorControl__IsCurrentMotionFsmType(BattleActorControl_o *this, int32_t fsmType, const MethodInfo *method)
{
  return this->fields.actindex == fsmType;
}


bool BattleActorControl__IsDelayEndSequence(BattleActorControl_o *this, int32_t sequenceId, const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x0

  if ( (byte_4C2A658 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C2A658 = 1;
  }
  delayEndSequenceIdListFromMotion_k__BackingField = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( delayEndSequenceIdListFromMotion_k__BackingField )
  {
    if ( delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
    {
      if ( System_Collections_Generic_List_int___Contains(
             delayEndSequenceIdListFromMotion_k__BackingField,
             -1,
             (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = 1;
      }
      else
      {
        v7 = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
        if ( !v7 )
          sub_1C2D6EC(0, v6);
        LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = System_Collections_Generic_List_int___Contains(
                                                                     v7,
                                                                     sequenceId,
                                                                     (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
    else
    {
      LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = 0;
    }
  }
  return (char)delayEndSequenceIdListFromMotion_k__BackingField;
}


bool BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattleServantData_o *v5; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t v7; // w21
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  UnityEngine_Object_o *v9; // x20
  struct BattlePerformance_o *v10; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v12; // x8
  System_Int32_array *ShadowOffSvtIds; // x20
  System_Func_int__bool__o *v14; // x21
  EnemyScriptParam_OverwriteShadowData_o *shadowData; // [xsp+8h] [xbp-28h] BYREF

  v2 = this;
  if ( (byte_4C2A655 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_int____77996856);
    sub_1C2D490(&Method_BattleActorControl__IsHideShadow_b__422_0__);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A655 = 1;
  }
  shadowData = 0;
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_32;
  this = (BattleActorControl_o *)battleSvtData->fields.deckSvt;
  if ( this )
  {
    if ( BattleDeckServantData__isHideShadow((BattleDeckServantData_o *)this, 0) )
      return 1;
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(performance, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v5 = v2->fields.battleSvtData;
      if ( !v5 )
        goto LABEL_32;
      this = (BattleActorControl_o *)v2->fields.performance;
      if ( !this )
        goto LABEL_32;
      deckSvt = v5->fields.deckSvt;
      this = (BattleActorControl_o *)BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)this, 0);
      if ( !v2->fields.performance )
        goto LABEL_32;
      v7 = (int)this;
      this = (BattleActorControl_o *)BattlePerformance__get_CurrentGroundType(v2->fields.performance, 0);
      if ( !deckSvt )
        goto LABEL_32;
      this = (BattleActorControl_o *)BattleDeckServantData__TryGetOverwriteShadowData(
                                       deckSvt,
                                       v7,
                                       (int32_t)this,
                                       &shadowData,
                                       0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)shadowData;
        if ( !shadowData )
          goto LABEL_32;
        this = (BattleActorControl_o *)EnemyScriptParam_OverwriteShadowData__get_IsHideShadow(shadowData, 0);
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
  v9 = (UnityEngine_Object_o *)v2->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v10 = v2->fields.performance;
  if ( !v10 )
    goto LABEL_32;
  data = (UnityEngine_Object_o *)v10->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v12 = v2->fields.performance;
  if ( !v12 || (this = (BattleActorControl_o *)v12->fields.data) == 0 )
LABEL_32:
    sub_1C2D6EC(this, method);
  ShadowOffSvtIds = BattleData__GetShadowOffSvtIds((BattleData_o *)this, 0);
  v14 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v14, (Il2CppObject *)v2, Method_BattleActorControl__IsHideShadow_b__422_0__, 0);
  return BasicHelper__Any_int__51083888(
           ShadowOffSvtIds,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_30B7A70 *)Method_BasicHelper_Any_int____77996856);
}


bool BattleActorControl__IsMatchCurrentCommonAnimName(
        BattleActorControl_o *this,
        int32_t animName,
        bool exceptNullOrEmpty,
        const MethodInfo *method)
{
  BattleFBXComponent_o *fbxcomponent; // x0

  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1C2D6EC(0, animName);
  return BattleFBXComponent__IsMatchCurrentCommonAnimName(fbxcomponent, animName, exceptNullOrEmpty, 0);
}


bool BattleActorControl__IsMatchFollowingCardType(
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

  if ( (byte_4C2A65A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A65A = 1;
  }
  if ( this->fields.isEnemy )
    goto LABEL_4;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    return (unsigned __int8)actiondata & 1;
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( ((unsigned __int8)v14 & 1) != 0 )
    goto LABEL_4;
  v16 = this->fields.performance;
  if ( !v16 )
    goto LABEL_47;
  data = (UnityEngine_Object_o *)v16->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = (BattleData_o *)UnityEngine_Object__op_Equality(data, 0, 0);
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
  SelectCommand = BattleData__getSelectCommand(v14, v19->fields.actionIndex + targetCardIndexFromNow, 0);
  if ( !SelectCommand
    || (v21 = SelectCommand, this->fields.uniqueID != SelectCommand->fields.uniqueId)
    || BattleCommandData__get_type(SelectCommand, 0) != expectedType )
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
    isTreasureDvc = BattleCommandData__isTreasureDvc(v21, 0);
    LOBYTE(actiondata) = !isTreasureDvc;
    if ( !isTreasureDvc && !allowCutInOtherSvtCard )
    {
LABEL_25:
      if ( !byte_4C21DCF )
      {
        sub_1C2D490(&System_Math_TypeInfo);
        byte_4C21DCF = 1;
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
          v14 = (BattleData_o *)BattleData__getSelectCommand(v14, i, 0);
          if ( !v14 )
            goto LABEL_4;
          LOBYTE(actiondata) = 0;
          if ( this->fields.uniqueID != LODWORD(v14->fields.fsm) )
            return (unsigned __int8)actiondata & 1;
        }
        goto LABEL_46;
      }
LABEL_47:
      sub_1C2D6EC(v14, v15);
    }
  }
  return (unsigned __int8)actiondata & 1;
}


bool BattleActorControl__IsNoTouchSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattlePerformance_o *performance; // x8

  if ( BattleActorControl__isNoVoice(this, method) )
    return 1;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_8;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsNoSkipDead(battleSvtData, 0);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 1;
  performance = this->fields.performance;
  if ( !performance || (battleSvtData = (BattleServantData_o *)performance->fields.data) == 0 )
LABEL_8:
    sub_1C2D6EC(battleSvtData, v3);
  return BattleData__IsNoSkipDeadFirst((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0);
}


bool BattleActorControl__IsVisibleByTargetNodeScale(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *checkScaleNode; // x20
  UnityEngine_Object_o *actorObject; // x20
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A5D8 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5D8 = 1;
  }
  checkScaleNode = (UnityEngine_Object_o *)this->fields.checkScaleNode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(checkScaleNode, 0, 0) )
    return 1;
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(actorObject, 0, 0) )
    return 0;
  LocalScale = GameObjectExtensions__GetLocalScale(this->fields.checkScaleNode, 0);
  return LocalScale.fields.x > 0.01 && LocalScale.fields.y > 0.01 && LocalScale.fields.z > 0.01;
}


bool BattleActorControl__IsVoiceOffSvt(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  BattleServantData_o *battleSvtData; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v9; // x8
  BattleData_o *v10; // x19

  if ( (byte_4C2A659 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A659 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(performance, 0, 0);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    return 0;
  v6 = this->fields.performance;
  if ( !v6 )
    goto LABEL_16;
  data = (UnityEngine_Object_o *)v6->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Equality(data, 0, 0);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 || this->fields.isEnemy )
    return 0;
  v9 = this->fields.performance;
  if ( !v9
    || (battleSvtData = this->fields.battleSvtData) == 0
    || (v10 = v9->fields.data, battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0),
                               !v10) )
  {
LABEL_16:
    sub_1C2D6EC(battleSvtData, v5);
  }
  return BattleData__IsVoiceOffSvt(v10, (int32_t)battleSvtData, 0);
}


void BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v6; // x8
  System_Func_object__bool__o *_9__428_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  BattlePlayAnimationComponent_o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  System_Func_object__bool__o *v35; // x23
  Il2CppObject *v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C2A65B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1C2D490(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__428_0__);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass428_0__LoadSavedPartAnimation_b__1__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass428_0_TypeInfo);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A65B = 1;
  }
  saveDataArray = 0;
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData
    && BattleServantData__TryGetPartAnimationSaveData(
         battleSvtData,
         this->fields.partAnimationSaveKey,
         &saveDataArray,
         0) )
  {
    PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                     this,
                                                                                     0,
                                                                                     v4);
    v6 = BattleActorControl___c_TypeInfo;
    if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
      v6 = BattleActorControl___c_TypeInfo;
    }
    _9__428_0 = (System_Func_object__bool__o *)v6->static_fields->__9__428_0;
    if ( !_9__428_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActorControl___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__428_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__428_0,
        v8,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__428_0__,
        0);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
      static_fields->__9__428_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__428_0;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__428_0, (int32_t)_9__428_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__428_0,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v12 )
      sub_1C2D6EC(0, v13);
    klass = v12->klass;
    v15 = v12;
    v16 = *(unsigned __int16 *)&v12->klass->_2.rank;
    if ( *(_WORD *)&v12->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      v18 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_16:
      v18 = sub_1C7DCA8(v12, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v18)(
            v15,
            *(_QWORD *)(v18 + 8));
    if ( !v20 )
      sub_1C2D6EC(0, v19);
    while ( 1 )
    {
      v21 = *(_QWORD *)v20;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_23;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_23:
        v24 = sub_1C7DCA8(v20, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = sub_1C2D6DC(BattleActorControl___c__DisplayClass428_0_TypeInfo);
      BattleActorControl___c__DisplayClass428_0___ctor((BattleActorControl___c__DisplayClass428_0_o *)v25, 0);
      v26 = *(_QWORD *)v20;
      v27 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
      {
        v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v28 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_30;
        }
        v29 = v26 + 16LL * *v28 + 312;
      }
      else
      {
LABEL_30:
        v29 = sub_1C7DCA8(v20, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
      if ( !v25 )
        sub_1C2D6EC(v30, v30);
      *(_QWORD *)(v25 + 16) = v30;
      sub_1C2D434((CGThumbnailListItem_o *)(v25 + 16), v30, v31, v32);
      v33 = *(BattlePlayAnimationComponent_o **)(v25 + 16);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v35 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v35,
        (Il2CppObject *)v25,
        Method_BattleActorControl___c__DisplayClass428_0__LoadSavedPartAnimation_b__1__,
        0);
      v36 = System_Linq_Enumerable__FirstOrDefault_object__51348472(
              v34,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_30F83F8 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v33 )
        sub_1C2D6EC(v36, v36);
      BattlePlayAnimationComponent__SetSaveData(v33, (BattlePlayAnimationComponent_SaveData_o *)v36, 0);
    }
    v37 = *(_QWORD *)v20;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_39;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_39:
      v40 = sub_1C7DCA8(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v20, *(_QWORD *)(v40 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__LoopEffectParticleSwitch(
        BattleActorControl_o *this,
        bool isPlay,
        bool isNoblePhantasm,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  __int64 v8; // x1
  _DWORD *ComponentsInChildren_object; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  _DWORD *v12; // x23
  int v13; // w8
  unsigned int v14; // w28
  _DWORD *v15; // x8
  UnityEngine_ParticleSystem_o *v16; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UnityEngine_ParticleSystem_MainModule_o v20; // x0
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x1
  UnityEngine_ParticleSystem_MainModule_o v23; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+20h] [xbp-80h] BYREF
  _DWORD *v26; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4C2A64D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4C2A64D = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v26 = 0;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                                       buffLoopEffectDict,
                                                                                       (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
    sub_1C2D6EC(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_3AC041C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v25 = v24;
LABEL_6:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_3538D64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v25.fields._currentValue )
      sub_1C2D6EC(0, v8);
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)v25.fields._currentValue,
                                    1,
                                    (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    v12 = ComponentsInChildren_object;
    if ( !ComponentsInChildren_object )
      sub_1C2D6EC(0, v10);
    v13 = ComponentsInChildren_object[6];
    if ( v13 >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= v13 )
          sub_1C2D6F4(ComponentsInChildren_object, v10, v11);
        v15 = &v12[2 * v14];
        v16 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v15 + 4);
        if ( !v16 )
          sub_1C2D6EC(ComponentsInChildren_object, v10);
        ComponentsInChildren_object = UnityEngine_ParticleSystem__get_main(
                                        *((UnityEngine_ParticleSystem_o **)v15 + 4),
                                        0).fields.m_ParticleSystem;
        v26 = ComponentsInChildren_object;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_1C2D6EC(ComponentsInChildren_object, v10);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_24;
          UnityEngine_ParticleSystem__Play_71447112(v16, 0);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
          if ( !gameObject )
            sub_1C2D6EC(0, v19);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v20.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v26;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v20, 0, 0);
            v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v16, 0);
            if ( !v21 )
              sub_1C2D6EC(0, v22);
            UnityEngine_GameObject__SetActive(v21, 0, 0);
            goto LABEL_24;
          }
          UnityEngine_ParticleSystem__Stop_71447464(v16, 0);
        }
        v23.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v26;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v23, !isPlay, 0);
LABEL_24:
        v13 = v12[6];
        if ( (int)++v14 >= v13 )
          goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_3538D60 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_4C2A651 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_13525/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/);
    byte_4C2A651 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13525/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1C2D6EC(0, v5);
    BattlePerformance__AllLoopEffectSwitch(performance, isPlay, 1, 0);
  }
  else
  {
    BattleActorControl__LoopEffectParticleSwitch(this, isPlay, 1, v6);
  }
}


System_String_o *BattleActorControl__MotionIdStr(int32_t motionId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C2A5C4 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&StringLiteral_8771/*"MOTION_{0}"*/);
    byte_4C2A5C4 = 1;
  }
  v8 = motionId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_8771/*"MOTION_{0}"*/, v6, 0);
}


System_Collections_Generic_List_int__o *BattleActorControl__MoveLoopEffectFromActorObject(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  System_Collections_Generic_List_int__o *v4; // x19
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *parent; // x0
  __int64 v11; // x1
  System_String_o *name; // x23
  UnityEngine_Object_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v21; // x21
  UnityEngine_Transform_o *v22; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C2A652 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A652 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
    (const MethodInfo_33E16B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v4 = 0;
  v25 = v24;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v25,
            (const MethodInfo_35380F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v6 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current.fields.value, 0, 0);
    if ( !v6 )
    {
      if ( !current.fields.value )
        sub_1C2D6EC(v6, v7);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current.fields.value, 0);
      if ( !transform )
        sub_1C2D6EC(0, v9);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
      if ( !parent )
        sub_1C2D6EC(0, v11);
      name = UnityEngine_Object__get_name(parent, 0);
      v13 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !v13 )
        sub_1C2D6EC(0, v14);
      v15 = UnityEngine_Object__get_name(v13, 0);
      if ( !name )
        sub_1C2D6EC(v15, v15);
      v16 = System_String__Equals_63493168(name, v15, 0);
      if ( !v16 )
      {
        if ( !v4 )
        {
          v4 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v4,
            (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v4 )
            sub_1C2D6EC(v16, v17);
        }
        items = v4->fields._items;
        v19 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C2D6EC(v16, v17);
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            (int32_t)current.fields.key,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = (int32_t)current.fields.key;
        }
        v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)current.fields.value, 0);
        v22 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !v21 )
          sub_1C2D6EC(v22, v22);
        UnityEngine_Transform__set_parent(v21, v22, 0);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v25,
    (const MethodInfo_3538214 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v4;
}


void BattleActorControl__MoveLoopEffectToActorObject(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *movedEffect,
        const MethodInfo *method)
{
  UnityEngine_Object_o *actorObject; // x21
  BattleBuffData_o *buffData; // x0
  __int64 v7; // x1
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_object__o *EffectBuffList; // x23
  Il2CppObject *MasterData_object; // x21
  StatusEffectPosOverwriteMaster_o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x0
  Il2CppObject *v15; // x25
  int32_t monitor; // w1
  __int64 v17; // x1
  BattleServantData_o *v18; // x0
  int32_t v19; // w26
  int32_t ActorSvtId; // w27
  const MethodInfo *v21; // x1
  __int64 LimitCount; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  struct System_Collections_Generic_Dictionary_int__GameObject__o *buffLoopEffectDict; // x0
  Il2CppObject *Item; // x0
  __int64 v27; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v29; // x1
  UnityEngine_Transform_o *v30; // x25
  UnityEngine_Object_o *parent; // x0
  __int64 v32; // x1
  System_String_o *name; // x0
  __int64 v34; // x1
  __int64 v35; // x1
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  const MethodInfo *v38; // x1
  System_String_o *nodeName; // x27
  UnityEngine_Transform_o *v40; // x26
  int32_t v41; // w2
  UnityEngine_Transform_o *NodeFromLvName; // x0
  __int64 v43; // x1
  UnityEngine_Transform_o *v44; // x26
  struct BattleServantData_o *v45; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float x; // s9
  float y; // s10
  float z; // s11
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x0
  __int64 v53; // x1
  struct BattleServantData_o *v54; // x8
  System_Collections_Generic_List_Enumerator_object__o v55; // [xsp+0h] [xbp-C0h] BYREF
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+18h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-A0h] BYREF
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v62; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A653 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A653 = 1;
  }
  memset(&v57, 0, sizeof(v57));
  entity = 0;
  if ( movedEffect )
  {
    actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    buffData = (BattleBuffData_o *)UnityEngine_Object__op_Equality(actorObject, 0, 0);
    if ( ((unsigned __int8)buffData & 1) == 0 && movedEffect->fields._size >= 1 )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData
        || (buffData = battleSvtData->fields.buffData) == 0
        || (EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(buffData, 0),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
        || (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffData,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_1C2D6EC(buffData, v7);
      }
      v11 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        EffectBuffList,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v57 = v55;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v57,
                (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v12 )
          break;
        if ( !v57.fields._current )
          sub_1C2D6EC(v12, v13);
        if ( !MasterData_object )
          sub_1C2D6EC(v12, v13);
        v14 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)v57.fields._current[1].klass,
                (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v15 = v14;
        if ( v14 )
        {
          monitor = (int32_t)v14[6].monitor;
          if ( monitor >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 monitor,
                 (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0;
            v18 = this->fields.battleSvtData;
            if ( !v18 )
              sub_1C2D6EC(0, v17);
            v19 = (int32_t)v15[6].monitor;
            ActorSvtId = BattleServantData__getActorSvtId(v18, 0);
            LimitCount = BattleActorControl__getLimitCount(this, v21);
            if ( !v11 )
              sub_1C2D6EC(LimitCount, v23);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v11, &entity, v19, ActorSvtId, LimitCount, 0) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_1C2D6EC(0, v24);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                       (int32_t)v15[6].monitor,
                       (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_1C2D6EC(0, v27);
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Item, 0);
              v30 = transform;
              if ( !transform )
                sub_1C2D6EC(0, v29);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0);
              if ( !parent )
                sub_1C2D6EC(0, v32);
              name = UnityEngine_Object__get_name(parent, 0);
              if ( !entity )
                sub_1C2D6EC(name, v34);
              if ( !name )
                sub_1C2D6EC(0, v34);
              if ( !System_String__Equals_63493168(name, entity->fields.nodeName, 0) )
              {
                if ( !byte_4C20DA1 )
                {
                  sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                  byte_4C20DA1 = 1;
                }
                UnityEngine_Transform__set_localPosition(
                  v30,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0);
                if ( !byte_4C20DA7 )
                {
                  sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
                  byte_4C20DA7 = 1;
                }
                UnityEngine_Transform__set_localRotation(
                  v30,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0);
                v36 = this->fields.actorObject;
                if ( !v36 )
                  sub_1C2D6EC(0, v35);
                v37 = UnityEngine_GameObject__get_transform(v36, 0);
                if ( !entity )
                  sub_1C2D6EC(v37, v38);
                nodeName = entity->fields.nodeName;
                v40 = v37;
                v41 = BattleActorControl__getLimitCount(this, v38);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v40, nodeName, v41, 1, 0);
                v44 = NodeFromLvName;
                if ( !byte_4C20DA1 )
                {
                  NodeFromLvName = (UnityEngine_Transform_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                  byte_4C20DA1 = 1;
                }
                v45 = this->fields.battleSvtData;
                if ( !v45 )
                  sub_1C2D6EC(NodeFromLvName, v43);
                if ( !entity )
                  sub_1C2D6EC(0, v43);
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                x = static_fields->zeroVector.fields.x;
                y = static_fields->zeroVector.fields.y;
                z = static_fields->zeroVector.fields.z;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v45->fields.isEnemy, 0);
                Offset.fields.x = x + Offset.fields.x;
                Offset.fields.y = y + Offset.fields.y;
                Offset.fields.z = z + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v30, Offset, 0);
                if ( !entity )
                  sub_1C2D6EC(0, v50);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0);
                Rotation.fields.x = Rotation.fields.x * 0.017453;
                Rotation.fields.y = Rotation.fields.y * 0.017453;
                Rotation.fields.z = Rotation.fields.z * 0.017453;
                v62 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0);
                UnityEngine_Transform__set_localRotation(v30, v62, 0);
                if ( !entity )
                  sub_1C2D6EC(0, v51);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0);
                UnityEngine_Transform__set_localScale(v30, Scale, 0);
                UnityEngine_Transform__set_parent(v30, v44, 0);
                v54 = this->fields.battleSvtData;
                if ( !v54 )
                  sub_1C2D6EC(v52, v53);
                if ( v54->fields.isEnemy )
                {
                  localScale = UnityEngine_Transform__get_localScale(v30, 0);
                  localScale.fields.x = -localScale.fields.x;
                  UnityEngine_Transform__set_localScale(v30, localScale, 0);
                }
              }
            }
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v57,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
  }
}


void BattleActorControl__NotDisplayFuncMotionAction(BattleActorControl_o *actor, const MethodInfo *method)
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
    BattleActionData__UpdateBuffAfterActionFlag((BattleActionData_o *)actor, 0, 0);
  if ( !performance )
LABEL_6:
    sub_1C2D6EC(actor, method);
  BattlePerformance__ProcAfterFuncNotDisplay(performance, 0);
  BattlePerformance__SetWaitPrevEndAllActionSendEvent(performance, 1, 0);
  BattleActorControl__finishMotion_46905056(v2, v4);
}


void BattleActorControl__OffTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4C2A61E & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_SkipDead__);
    sub_1C2D490(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4C2A61E = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C2D6DC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0),
          !statusPerf) )
    {
      sub_1C2D6EC(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0);
  }
}


void BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_GameObject_o *performance; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v11; // w9
  UnityEngine_Object_o *actorObject; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_object__o *extraLoadedVoiceArgsList; // x0
  CGThumbnailListItem_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t v19; // w20
  int32_t v20; // w22
  int32_t v21; // w21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C2A5A2 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5A2 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.rendererArrayList = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rendererArrayList, 0, v2, v3);
  this->fields.BattleModelObjectVisibleControlComponents = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.BattleModelObjectVisibleControlComponents, 0, v5, v6);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_25;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v11 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v11;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorObject, 0, 0) )
  {
    performance = this->fields.actorObject;
    if ( !performance )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         performance,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      performance = (UnityEngine_GameObject_o *)this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider(
          (BattlePerformance_o *)performance,
          (UnityEngine_MeshCollider_o *)Component_object,
          0);
        goto LABEL_15;
      }
LABEL_25:
      sub_1C2D6EC(performance, v8);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v8);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v14);
  extraLoadedVoiceArgsList = (System_Collections_Generic_List_object__o *)this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (CGThumbnailListItem_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      extraLoadedVoiceArgsList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v17 )
        break;
      if ( !v24.fields._current )
        sub_1C2D6EC(v17, v18);
      v20 = *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&word_10);
      v19 = *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&word_10 + 4);
      v21 = *(_DWORD *)((char *)&v24.fields._current->klass + (unsigned __int64)&off_18);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadServantVoice(v20, v19, v21, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0;
    sub_1C2D434(p_extraLoadedVoiceArgsList, 0, v22, v23);
  }
}


void BattleActorControl__OnEvent(BattleActorControl_o *this, System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleActorControl_o *v5; // x20
  struct BattleFBXComponent_o *fbxcomponent; // x8
  const MethodInfo *v7; // x3
  __int64 naturalAligment; // x9
  BattleActorControl_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v5 = this;
  if ( (byte_4C2A5E5 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    byte_4C2A5E5 = 1;
  }
  fbxcomponent = v5->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_13;
  BattleActorControl__DisplayAnimationEffect(v5, fbxcomponent->fields.currentCommonAnimName, name, v3);
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
          this,
          name,
          this->klass[1].vtable._1_Finalize.methodPtr)
      & 1) == 0 )
  {
LABEL_12:
    BattleActorControl__sendEventFSM_46896280(v5, name, 0, v7);
    return;
  }
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this
    || (this = (BattleActorControl_o *)((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
                                         this,
                                         name,
                                         this->klass[1].vtable._3_ToString.methodPtr)) == 0 )
  {
LABEL_13:
    sub_1C2D6EC(this, name);
  }
  naturalAligment = BattleActorControl_EventClass_TypeInfo->_2.naturalAligment;
  if ( this->klass->_2.naturalAligment >= (unsigned int)naturalAligment
    && (BattleActorControl_EventClass_c *)this->klass->_2.typeHierarchy[naturalAligment - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc((BattleActorControl_EventClass_o *)this, 0);
    this = (BattleActorControl_o *)v5->fields.EventList;
    if ( this )
    {
      ((void (__fastcall *)(BattleActorControl_o *, System_String_o *, void *))this->klass[2]._1.parent)(
        this,
        name,
        this->klass[2]._1.generic_class);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  sub_1C2D9AC(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  CGThumbnailListItem_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A5EF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5EF = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (CGThumbnailListItem_o *)&this->fields.particleDisconnectorObj;
  v4 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71163704(klass, 0);
    p_particleDisconnectorObj->klass = 0;
    sub_1C2D434(p_particleDisconnectorObj, 0, v7, v8);
  }
}


void BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  void *performance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v6; // x20
  char *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  TreasureDvcEntity_o *v10; // x20
  __int64 v11; // x2
  int v12; // w8
  struct BattleServantData_o *v13; // x9
  int32_t v14; // w10
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *v17; // x0

  if ( (byte_4C2A603 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__312_0__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4C2A603 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_23;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( !performance )
    goto LABEL_23;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0, 0, battleSvtData->fields.buffData, 0);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v6 = (BattleSequenceManager_o *)performance;
  performance = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0);
  if ( !performance )
    goto LABEL_23;
  performance = TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0);
  if ( !v6 )
    goto LABEL_23;
  BattleSequenceManager__SetIntactBgms(v6, (System_Int32_array *)performance, 0);
  performance = this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_23;
  if ( *((_BYTE *)performance + 507) )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_23;
    v7 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0);
    if ( !v7 )
      goto LABEL_23;
    *((_QWORD *)v7 + 31) = performance;
    sub_1C2D434((CGThumbnailListItem_o *)(v7 + 248), (int32_t)performance, v8, v9);
    performance = this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_23;
  }
  performance = BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v10 = (TreasureDvcEntity_o *)performance;
  performance = (void *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0);
  if ( !v10 )
    goto LABEL_23;
  performance = TreasureDvcEntity__getFixAppearanceInfoArray(v10, (int32_t)performance, 0);
  if ( !performance )
    goto LABEL_21;
  if ( *((_DWORD *)performance + 6) < 2u )
    sub_1C2D6F4(performance, obj, v11);
  v12 = *((_DWORD *)performance + 8);
  if ( v12 < 1 )
  {
LABEL_21:
    v17 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_22;
  }
  v13 = this->fields.battleSvtData;
  if ( !v13 )
LABEL_23:
    sub_1C2D6EC(performance, obj);
  v14 = *((_DWORD *)performance + 9);
  v13->fields.tmpAppearanceId = v12;
  v13->fields.isForceAppearance = 1;
  v13->fields.dressDispId = v14;
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__312_0__, 0);
  v17 = BattleActorControl__waitChangeApp(this, v15, v16);
LABEL_22:
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v17, 0);
}


void BattleActorControl__OnNoblePhantasmPlayComplete(
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
  struct System_Action_o *noblePhantasmCallback; // x8
  struct BattlePerformance_o *v18; // x8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4C2A605 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__314_0__);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&StringLiteral_7474/*"IN_BATTLE_START"*/);
    sub_1C2D490(&StringLiteral_6410/*"FINISHED"*/);
    byte_4C2A605 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !battleSvtData )
    goto LABEL_48;
  ((void (__fastcall *)(struct BattleServantData_o *, BattleServantData_o *, BattleActorControl_o *, struct BattlePerformance_o *, const MethodInfo *))battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.methodPtr)(
    battleSvtData,
    Instance,
    this,
    this->fields.performance,
    battleSvtData->klass->vtable._24_AfterActorNoblePhantasm.method);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__changeNp(Instance, Instance->fields.tmpNp + Instance->fields.np, 0, 0);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__updateNpGauge(Instance, 0);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  BattleServantData__updateTDGauge(Instance, 0);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  LOBYTE(Instance->fields.hpHealValueWhenBaseHpActived) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__OnEndNoblePhantasm((BattleSequenceManager_o *)Instance, 0);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  performance = this->fields.performance;
  Instance = (BattleServantData_o *)BattleServantData__get_TreasureDevice(Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  if ( !performance )
    goto LABEL_48;
  BattlePerformance__endNoblePhantasm(performance, Instance->fields.index, 0);
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v8->fields.bgPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)Instance, 0, 0);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__setDamageTargetVoiceFlg((BattlePerformance_o *)Instance, 0, 0);
  Instance = (BattleServantData_o *)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_48;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)Instance, 1, 0);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__changeShadowType((BattlePerformance_o *)Instance, 0, 0);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)Instance, 0);
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v9->fields.commandPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v10);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__ResetOverwriteNobleDamageAnimationFlg((BattlePerformance_o *)Instance, 0);
  v11 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v11 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v11->fields.logic;
  if ( !Instance )
    goto LABEL_48;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v12);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  if ( BattleServantData__IsTDAppearance(Instance, 0) )
  {
    v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__314_0__,
      0);
    v15 = BattleActorControl__waitChangeApp(this, v13, v14);
    Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                                        (UnityEngine_MonoBehaviour_o *)this,
                                        v15,
                                        0);
  }
  else
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_48;
    BattlePerformance__noblePhantasmWhiteInFade((BattlePerformance_o *)Instance, 0.2, 0.3, 0);
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
      Instance = (BattleServantData_o *)((__int64 (__fastcall *)(intptr_t, intptr_t))noblePhantasmCallback->fields.invoke_impl)(
                                          noblePhantasmCallback->fields.method_code,
                                          noblePhantasmCallback->fields.method);
    }
    else
    {
      BattleActorControl__sendEventFSM_46896280(this, (System_String_o *)StringLiteral_6410/*"FINISHED"*/, 0, v16);
    }
  }
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v18->fields.data;
  if ( !Instance )
    goto LABEL_48;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_48;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v19);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v20);
  }
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance
    || (BattlePerformance__BattleMoviePause((BattlePerformance_o *)Instance, 0, 1, 0),
        (Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__)) == 0) )
  {
LABEL_48:
    sub_1C2D6EC(Instance, v6);
  }
  CrashReporter__SetNowState((CrashReporter_o *)Instance, (System_String_o *)StringLiteral_7474/*"IN_BATTLE_START"*/, 0);
}


void BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4C2A61D & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_SkipDead__);
    sub_1C2D490(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4C2A61D = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C2D6DC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0),
          !statusPerf) )
    {
      sub_1C2D6EC(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v7, 0);
  }
}


System_String_o *BattleActorControl__OverwriteAnimation(
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
    return ChangeBattlePhaseOverwriteAnimation__Overwrite(overwriteAnim, this, result, 0);
  return result;
}


void BattleActorControl__PlayMatchPartAnimation(
        BattleActorControl_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_T__o *v19; // x19
  System_Action_object__o *v20; // x20

  if ( (byte_4C2A65D & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattlePlayAnimationComponent__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1C2D490(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass431_0__PlayMatchPartAnimation_b__0__);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass431_0__PlayMatchPartAnimation_b__1__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass431_0_TypeInfo);
    byte_4C2A65D = 1;
  }
  v9 = sub_1C2D6DC(BattleActorControl___c__DisplayClass431_0_TypeInfo);
  BattleActorControl___c__DisplayClass431_0___ctor((BattleActorControl___c__DisplayClass431_0_o *)v9, 0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
  *(_QWORD *)(v9 + 16) = key;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)key, v12, v13);
  *(_QWORD *)(v9 + 24) = animName;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 24), (int32_t)animName, v14, v15);
  *(float *)(v9 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v16);
  v18 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass431_0__PlayMatchPartAnimation_b__0__,
    0);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v20 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass431_0__PlayMatchPartAnimation_b__1__,
    0);
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)v20,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
}


void BattleActorControl__PreDestroyActor(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x19
  UnityEngine_Transform_o *transform; // x1

  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActorControl__ProcServantObjectVisibleCtr(
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
      sub_1C2D6F4(this, isEnd, visibleControlInfo);
    v14 = &BattleModelObjectVisibleControlComponents->obj.klass + v9;
    v15 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( !v15 )
      goto LABEL_21;
    v16 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( isEnd )
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__EndProc(v16, visibleControlInfo, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__ExecuteProc(v16, visibleControlInfo, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__IsSkinnedMesh(v15, 0);
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
      BattleFBXComponent__SetActiveActorEffectAll((BattleFBXComponent_o *)this, v10, 0);
      return v12;
    }
LABEL_21:
    sub_1C2D6EC(this, isEnd);
  }
  return v12;
}


void BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v7; // x20
  unsigned __int64 v8; // x22
  struct System_Collections_Generic_Dictionary_int__Action_BattleActorControl___o **p_noPlaymakerMotionActionDict; // x25
  Il2CppObject *v10; // x21

  v4 = this;
  if ( (byte_4C2A616 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    this = (BattleActorControl_o *)sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    byte_4C2A616 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                   obj,
                                   (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    p_noPlaymakerMotionActionDict = &this->fields.noPlaymakerMotionActionDict;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, obj, v5);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v10 = (Il2CppObject *)p_noPlaymakerMotionActionDict[v8];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v10,
                                       (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_object___Remove(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v10,
                                         (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_1C2D6EC(this, obj);
  }
}


void BattleActorControl__RemoveColliderFromPerformance(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *actorObject; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *performance; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4C2A632 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A632 = 1;
  }
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(actorObject, 0, 0) )
  {
    performance = this->fields.actorObject;
    if ( !performance )
      goto LABEL_13;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         performance,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      performance = (UnityEngine_GameObject_o *)this->fields.performance;
      if ( performance )
      {
        BattlePerformance__RemoveCollider(
          (BattlePerformance_o *)performance,
          (UnityEngine_MeshCollider_o *)Component_object,
          0);
        return;
      }
LABEL_13:
      sub_1C2D6EC(performance, v4);
    }
  }
}


void BattleActorControl__RemoveEventClass(
        BattleActorControl_o *this,
        System_String_o *eventName,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    sub_1C2D6EC(0, eventName);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *))EventList->klass->vtable._37_Remove.methodPtr)(
    EventList,
    eventName,
    EventList->klass->vtable._37_Remove.method);
}


void BattleActorControl__RemoveOverwriteEachPhaseAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleObserver_o *overwriteAnim; // x0
  CGThumbnailListItem_o *p_overwriteAnim; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
  if ( overwriteAnim )
  {
    p_overwriteAnim = (CGThumbnailListItem_o *)&this->fields.overwriteAnim;
    BattleObserver__Remove(overwriteAnim, 0);
    p_overwriteAnim->klass = 0;
    sub_1C2D434(p_overwriteAnim, 0, v5, v6);
  }
}


void BattleActorControl__RemovePartAnimationSaveData(BattleActorControl_o *this, bool isAll, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  System_String_o *partAnimationSaveKey; // x1

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
  {
    if ( isAll )
      partAnimationSaveKey = 0;
    else
      partAnimationSaveKey = this->fields.partAnimationSaveKey;
    BattleServantData__RemovePartAnimationSaveData(battleSvtData, partAnimationSaveKey, 0);
  }
}


void BattleActorControl__ResetAddColorOfMaterials(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_Material__o *v3; // x0
  BattleActorControl___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  System_Action_object__o *_9__339_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C2A61A & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Material__TypeInfo);
    sub_1C2D490(&Method_BasicHelper_ForEach_Material___);
    sub_1C2D490(&Method_BattleActorControl___c__ResetAddColorOfMaterials_b__339_0__);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A61A = 1;
  }
  v3 = BattleActorControl__EnumerateMaterials(this, method);
  v4 = BattleActorControl___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_T__o *)v3;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v4 = BattleActorControl___c_TypeInfo;
  }
  _9__339_0 = (System_Action_object__o *)v4->static_fields->__9__339_0;
  if ( !_9__339_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActorControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__339_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Material__TypeInfo);
    System_Action_object____ctor(_9__339_0, v7, Method_BattleActorControl___c__ResetAddColorOfMaterials_b__339_0__, 0);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__339_0 = (struct System_Action_Material__o *)_9__339_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__339_0, (int32_t)_9__339_0, v9, v10);
  }
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)_9__339_0,
    (const MethodInfo_30BA910 *)Method_BasicHelper_ForEach_Material___);
}


void BattleActorControl__ResetChangeModelByOriginalChange(
        BattleActorControl_o *this,
        BattleServantData_o *changeAfterSvtData,
        const MethodInfo *method)
{
  int32_t originalModelId; // w20

  originalModelId = this->fields.originalModelId;
  if ( originalModelId >= 1 )
  {
    if ( !changeAfterSvtData )
      sub_1C2D6EC(this, 0);
    if ( originalModelId != BattleServantData__GetOriginalModelId(changeAfterSvtData, 0) )
      BattleServantData__ResetChangeModelData(changeAfterSvtData, 0);
  }
}


void BattleActorControl__RevertDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4C2A646 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A646 = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0, 0) )
    {
      v5 = this->fields.fbxcomponent;
      if ( !v5 )
        sub_1C2D6EC(0, v4);
      BattleFBXComponent__RevertDefaultAnimation(v5, 0);
    }
  }
}


void BattleActorControl__SendMotionEventForVanishSkill(
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
  if ( BattleActorControl__HasGlobalTransitionInFsm_46898216(this, 1, MotionFsmIndexAndFixedMotionName.fields.Item2, v5) )
    this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_46896280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__SetActiveAura(BattleActorControl_o *this, bool value, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  Il2CppObject *valuea; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A63A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__);
    byte_4C2A63A = 1;
  }
  valuea = 0;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_8;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          auraList,
          this->fields._CurrentAuraEffectId_k__BackingField,
          &valuea,
          (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__GameObject__TryGetValue__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)valuea;
  if ( !valuea )
LABEL_8:
    sub_1C2D6EC(auraList, value);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)valuea, value, 0);
}


void BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass333_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_object__o *v9; // x22

  if ( (byte_4C2A615 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_Material__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass333_0__SetActorAlpha_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass333_0_TypeInfo);
    byte_4C2A615 = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass333_0_o *)sub_1C2D6DC(BattleActorControl___c__DisplayClass333_0_TypeInfo);
  BattleActorControl___c__DisplayClass333_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  v5->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v9 = (System_Action_object__o *)sub_1C2D6DC(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass333_0__SetActorAlpha_b__0__,
    0);
  BattleActorControl__UpdateMaterialsOnRenderders_object_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v9,
    (const MethodInfo_30BE9EC *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
}


void BattleActorControl__SetAddColor(BattleActorControl_o *this, UnityEngine_Color_o col, const MethodInfo *method)
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
  __int64 v14; // x2
  UnityEngine_Material_array *v15; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x25
  UnityEngine_Object_o *v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4C2A614 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    byte_4C2A614 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v20.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v10 )
      {
        if ( !current )
          sub_1C2D6EC(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0);
        v15 = materials;
        if ( !materials )
          sub_1C2D6EC(0, v13);
        max_length = materials->max_length;
        if ( (int)max_length >= 1 )
        {
          v17 = 0;
          do
          {
            if ( v17 >= (unsigned int)max_length )
              sub_1C2D6F4(materials, v13, v14);
            v18 = (UnityEngine_Object_o *)v15->m_Items[v17];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v18, 0, 0);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v18 )
                sub_1C2D6EC(materials, v13);
              v21.fields.r = r;
              v21.fields.g = g;
              v21.fields.b = b;
              v21.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v18,
                (System_String_o *)StringLiteral_16117/*"_AddColor"*/,
                v21,
                0);
            }
            LODWORD(max_length) = v15->max_length;
            ++v17;
          }
          while ( (__int64)v17 < (int)max_length );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


void BattleActorControl__SetAlreadyDrop(BattleActorControl_o *this, bool isDrop, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    battleSvtData->fields.IsAlreadyDrop = isDrop;
}


void BattleActorControl__SetBillBoardGroup(BattleActorControl_o *this, int32_t gId, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4C2A640 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
    byte_4C2A640 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_object )
    sub_1C2D6EC(0, v6);
  LODWORD(Component_object[4].monitor) = gId;
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__SetDispServant(
        BattleActorControl_o *this,
        bool isShadow,
        bool isChoco,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x22
  _QWORD *p_klass; // x8
  CGThumbnailListItem_o *p_shadowEffectObject; // x21
  unsigned __int64 v9; // x24
  __int64 v10; // x26
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x23
  const MethodInfo *v13; // x3
  CGThumbnailListItem_c *klass; // x8
  BattleServantData_o *battleSvtData; // x23
  UnityEngine_GameObject_o *actorObject; // x24
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  UnityEngine_GameObject_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  v6 = this;
  if ( (byte_4C2A608 & 1) == 0 )
  {
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A608 = 1;
  }
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  p_shadowEffectObject = (CGThumbnailListItem_o *)&v6->fields.shadowEffectObject;
  if ( p_klass )
  {
    v9 = 0;
    v10 = 32;
    while ( 1 )
    {
      v11 = *((unsigned int *)p_klass + 6);
      if ( (__int64)v9 >= (int)v11 )
        break;
      if ( v9 >= v11 )
        goto LABEL_17;
      v12 = (UnityEngine_Object_o *)p_klass[v9 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v12, 0);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v9 >= LODWORD(klass->_1.namespaze) )
LABEL_17:
          sub_1C2D6F4(this, isShadow, isChoco);
        *(void **)((char *)&klass->_1.image + v10) = 0;
        sub_1C2D434((CGThumbnailListItem_o *)((char *)klass + v10), 0, isChoco, v13);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v9;
        v10 += 8;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_18;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_18:
    sub_1C2D6EC(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v18 = BattleEffectUtility__ChangeServantView(battleSvtData, actorObject, isShadow, isChoco, svtlimitaddent, 0);
  p_shadowEffectObject->klass = (CGThumbnailListItem_c *)v18;
  sub_1C2D434(p_shadowEffectObject, (int32_t)v18, v19, v20);
}


void BattleActorControl__SetMainColor(BattleActorControl_o *this, UnityEngine_Color_o col, const MethodInfo *method)
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
  __int64 v14; // x2
  UnityEngine_Material_array *v15; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x25
  UnityEngine_Object_o *v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4C2A613 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    byte_4C2A613 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v20,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v20.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v10 )
      {
        if ( !current )
          sub_1C2D6EC(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0);
        v15 = materials;
        if ( !materials )
          sub_1C2D6EC(0, v13);
        max_length = materials->max_length;
        if ( (int)max_length >= 1 )
        {
          v17 = 0;
          do
          {
            if ( v17 >= (unsigned int)max_length )
              sub_1C2D6F4(materials, v13, v14);
            v18 = (UnityEngine_Object_o *)v15->m_Items[v17];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v18, 0, 0);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v18 )
                sub_1C2D6EC(materials, v13);
              v21.fields.r = r;
              v21.fields.g = g;
              v21.fields.b = b;
              v21.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v18,
                (System_String_o *)StringLiteral_16169/*"_Color"*/,
                v21,
                0);
            }
            LODWORD(max_length) = v15->max_length;
            ++v17;
          }
          while ( (__int64)v17 < (int)max_length );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v20,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


void BattleActorControl__SetMaterialColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o fadeColour,
        float alpha,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  struct BattleServantData_o *v13; // x8
  int32_t displayType; // w8
  bool v15; // w1
  bool v16; // w2
  __int64 v17; // x2
  int uniqueId; // w8
  BattleServantData_o *v19; // x19
  unsigned int v20; // w22
  float v21; // s15
  BattleServantData_c **v22; // x8
  UnityEngine_Renderer_o *v23; // x20
  float v24; // s14
  float v25; // s13
  float v26; // s12
  UnityEngine_Material_o *material; // x0
  float v28; // s11
  float v29; // s10
  float v30; // s9
  float a; // s8
  __int64 v32; // x8
  BattleServantData_o *v33; // x20
  float v34; // s8
  unsigned __int64 v35; // x26
  float v36; // s12
  float v37; // s13
  float v38; // s9
  float v39; // s14
  float v40; // s10
  float v41; // s11
  UnityEngine_Object_o *v42; // x21
  float v43; // [xsp+4h] [xbp-9Ch]
  float v44; // [xsp+8h] [xbp-98h]
  float v45; // [xsp+Ch] [xbp-94h]
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o ColorOrDefault; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v50; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_4C2A610 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    byte_4C2A610 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0) )
  {
    BattleActorControl__SetMaterialWhite(this, v10);
    BattleActorControl__ResetAddColorOfMaterials(this, v12);
  }
  else
  {
    v13 = this->fields.battleSvtData;
    if ( v13 )
    {
      displayType = v13->fields.displayType;
      v15 = displayType == 2;
      v16 = displayType == 3;
    }
    else
    {
      v15 = 0;
      v16 = 0;
    }
    BattleActorControl__SetDispServant(this, v15, v16, v11);
  }
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0 )
  {
LABEL_30:
    sub_1C2D6EC(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v19 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v20 = 0;
    v44 = g * alpha;
    v45 = r * alpha;
    v21 = 1.0 - alpha;
    v43 = b * alpha;
    while ( 1 )
    {
      if ( v20 >= uniqueId )
        goto LABEL_29;
      v22 = &v19->klass + (int)v20;
      v23 = (UnityEngine_Renderer_o *)v22[4];
      if ( !v23 )
        goto LABEL_30;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v22[4], 0);
      if ( !battleSvtData )
        goto LABEL_30;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0);
      v24 = color.fields.r;
      v25 = color.fields.g;
      v26 = color.fields.b;
      material = UnityEngine_Renderer__get_material(v23, 0);
      v47.fields.r = 0.0;
      v47.fields.g = 0.0;
      v47.fields.b = 0.0;
      v47.fields.a = 0.0;
      ColorOrDefault = MaterialExtensions__GetColorOrDefault(material, (System_String_o *)StringLiteral_16117/*"_AddColor"*/, v47, 0);
      v28 = ColorOrDefault.fields.r;
      v29 = ColorOrDefault.fields.g;
      v30 = ColorOrDefault.fields.b;
      a = ColorOrDefault.fields.a;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v23, 0);
      if ( !battleSvtData )
        goto LABEL_30;
      v32 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v33 = battleSvtData;
      if ( (int)v32 >= 1 )
        break;
LABEL_27:
      uniqueId = v19->fields.uniqueId;
      if ( (int)++v20 >= uniqueId )
        return;
    }
    v34 = a + 0.0;
    v35 = 0;
    v36 = v21 * v26;
    v37 = v21 * v25;
    v38 = v43 + v30;
    v39 = v21 * v24;
    v40 = v44 + v29;
    v41 = v45 + v28;
    while ( v35 < (unsigned int)v32 )
    {
      v42 = (UnityEngine_Object_o *)*(&v33->fields.userSvtId.fields.currentCryptoKey + v35);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v42 )
          goto LABEL_30;
        v49.fields.a = 1.0;
        v49.fields.r = v39;
        v49.fields.g = v37;
        v49.fields.b = v36;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v42, (System_String_o *)StringLiteral_16169/*"_Color"*/, v49, 0);
        v50.fields.r = v41;
        v50.fields.g = v40;
        v50.fields.b = v38;
        v50.fields.a = v34;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v42, (System_String_o *)StringLiteral_16117/*"_AddColor"*/, v50, 0);
      }
      LODWORD(v32) = v33->fields.uniqueId;
      if ( (__int64)++v35 >= (int)v32 )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C2D6F4(battleSvtData, method, v17);
  }
}


void BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w8
  _DWORD *v7; // x19
  unsigned int v8; // w22
  char *v9; // x8
  UnityEngine_Renderer_o *v10; // x20
  unsigned __int64 v11; // x25
  UnityEngine_Object_o *v12; // x21
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A60F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    byte_4C2A60F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_23;
  v6 = *((_DWORD *)gameObject + 6);
  v7 = gameObject;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
LABEL_24:
        sub_1C2D6F4(gameObject, v4, v5);
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_Renderer_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        break;
      gameObject = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v9 + 4), 0);
      if ( !gameObject )
        break;
      v11 = 0;
      while ( (__int64)v11 < *((int *)gameObject + 6) )
      {
        gameObject = UnityEngine_Renderer__get_materials(v10, 0);
        if ( !gameObject )
          goto LABEL_23;
        if ( v11 >= *((unsigned int *)gameObject + 6) )
          goto LABEL_24;
        v12 = (UnityEngine_Object_o *)*((_QWORD *)gameObject + v11 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(v12, 0, 0);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v12 )
            goto LABEL_23;
          v13.fields.r = 1.0;
          v13.fields.g = 1.0;
          v13.fields.b = 1.0;
          v13.fields.a = 1.0;
          UnityEngine_Material__SetColor((UnityEngine_Material_o *)v12, (System_String_o *)StringLiteral_16169/*"_Color"*/, v13, 0);
        }
        ++v11;
        gameObject = UnityEngine_Renderer__get_materials(v10, 0);
        if ( !gameObject )
          goto LABEL_23;
      }
      v6 = v7[6];
      if ( (int)++v8 >= v6 )
        return;
    }
LABEL_23:
    sub_1C2D6EC(gameObject, v4);
  }
}


void BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePlayAnimationComponent_array *PlayAnimationComponents; // x0
  BattleActorControl___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__bool__o *_9__429_0; // x21
  Il2CppObject *v8; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  BattleActorControl___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *_9__429_1; // x21
  Il2CppObject *v16; // x22
  struct BattleActorControl___c_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Object_array *v22; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_4C2A65C & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1C2D490(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1C2D490(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__429_0__);
    sub_1C2D490(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__429_1__);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A65C = 1;
  }
  PlayAnimationComponents = BattleActorControl__GetPlayAnimationComponents(this, 0, v2);
  v5 = BattleActorControl___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayAnimationComponents;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  _9__429_0 = (System_Func_object__bool__o *)v5->static_fields->__9__429_0;
  if ( !_9__429_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__429_0 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__429_0,
      v8,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__429_0__,
      0);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__429_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__429_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__429_0, (int32_t)_9__429_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__429_0,
          (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v13 = BattleActorControl___c_TypeInfo;
  v14 = v12;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v13 = BattleActorControl___c_TypeInfo;
  }
  _9__429_1 = (System_Func_object__object__o *)v13->static_fields->__9__429_1;
  if ( !_9__429_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleActorControl___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__429_1 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_object__object____ctor(
      _9__429_1,
      v16,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__429_1__,
      0);
    v17 = BattleActorControl___c_TypeInfo->static_fields;
    v17->__9__429_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__429_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v17->__9__429_1, (int32_t)_9__429_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v14,
                                                         (System_Func_TSource__TResult__o *)_9__429_1,
                                                         (const MethodInfo_310501C *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v21 = BasicHelper__ExcludeNull_object_(
          v20,
          (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(
      battleSvtData,
      this->fields.partAnimationSaveKey,
      (BattlePlayAnimationComponent_SaveData_array *)v22,
      0);
}


void BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *IsHideShadow; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x8
  char v10; // w20

  if ( (byte_4C2A656 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A656 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0)) == 0) )
      sub_1C2D6EC(IsHideShadow, v8);
    UnityEngine_GameObject__SetActive(IsHideShadow, active & ~v10 & 1, 0);
  }
}


void BattleActorControl__SetShadowColor(BattleActorControl_o *this, UnityEngine_Color_o col, const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  BattleData_o *IsHideShadow; // x0
  __int64 v9; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4C2A60D & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_16260/*"_MainTex"*/);
    byte_4C2A60D = 1;
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
      GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0);
      r = GroundShadowColor.fields.r;
      g = GroundShadowColor.fields.g;
      b = GroundShadowColor.fields.b;
      a = GroundShadowColor.fields.a;
    }
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shadowObj, 0, 0) )
    {
      IsHideShadow = (BattleData_o *)this->fields.mpb;
      if ( IsHideShadow )
      {
        UnityEngine_MaterialPropertyBlock__Clear_71020828((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0);
        IsHideShadow = (BattleData_o *)this->fields.mpb;
        if ( IsHideShadow )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
            (System_String_o *)StringLiteral_16260/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0);
          IsHideShadow = (BattleData_o *)this->fields.mpb;
          if ( IsHideShadow )
          {
            v13.fields.r = r;
            v13.fields.g = g;
            v13.fields.b = b;
            v13.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
              (System_String_o *)StringLiteral_16169/*"_Color"*/,
              v13,
              0);
            IsHideShadow = (BattleData_o *)this->fields.shadowObj;
            this->fields.currentShadowColor.fields.r = r;
            this->fields.currentShadowColor.fields.g = g;
            this->fields.currentShadowColor.fields.b = b;
            this->fields.currentShadowColor.fields.a = a;
            if ( IsHideShadow )
            {
              IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)IsHideShadow,
                                               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
              if ( IsHideShadow )
              {
                UnityEngine_Renderer__SetPropertyBlock((UnityEngine_Renderer_o *)IsHideShadow, this->fields.mpb, 0);
                return;
              }
            }
          }
        }
      }
LABEL_18:
      sub_1C2D6EC(IsHideShadow, v9);
    }
  }
}


void BattleActorControl__SetShadowSize(BattleActorControl_o *this, int32_t btlSize, const MethodInfo *method)
{
  BattleActorControl_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *v6; // x21
  char *ShadowTransform; // x0
  __int64 v8; // x1
  int v9; // w8
  char *v10; // x2
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
  int v22; // w8
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattleActorControl_c *v25; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v27; // x0
  System_Collections_Generic_Dictionary_int__object__o *v28; // x21
  int v29; // w8
  int v30; // w8
  int v31; // w8
  int v32; // w8
  int v38; // w8
  int v39; // w8
  int v41; // w8
  int v43; // w8
  int v45; // w8
  int v46; // w8
  int v48; // w8
  int v49; // w8
  int v50; // w8
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  BattleActorControl_c *v53; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0
  BattleActorControl_c *v55; // x0
  BattleActorControl_c *v56; // x0
  Il2CppObject *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  Il2CppObject *v60; // x22
  UnityEngine_Transform_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  BattleActorControl_c *v64; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v66; // x23
  BattleActorControl_c *v67; // x0
  UnityEngine_Object_o *v68; // x19

  if ( (byte_4C2A60E & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3___TypeInfo);
    sub_1C2D490(&StringLiteral_12834/*"Shadow"*/);
    byte_4C2A60E = 1;
  }
  v5 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v5 = BattleActorControl_TypeInfo;
  }
  if ( !v5->static_fields->ShadowTransform )
  {
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v6,
      (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v9 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v9 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v9 == 1 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 6) = 0;
    *((_DWORD *)ShadowTransform + 11) = 0;
    if ( !v6 )
      goto LABEL_138;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      0,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v11 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v11 )
      goto LABEL_137;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v11 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      1,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v12 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v12 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v12 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      2,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v13 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v13 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v13 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      3,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v14 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v14 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v14 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      4,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v15 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v15 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v15 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      5,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v16 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v16 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v16 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      6,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v17 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v17 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v17 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      7,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v18 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v18 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v18 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      8,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v19 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v19 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v19 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      9,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v20 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v20 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v20 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      10,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v21 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v21 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v21 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      11,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
    if ( !ShadowTransform )
      goto LABEL_138;
    v22 = *((_DWORD *)ShadowTransform + 6);
    v10 = ShadowTransform;
    if ( !v22 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v22 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      12,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v25 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v25 = BattleActorControl_TypeInfo;
    }
    v25->static_fields->ShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v6;
    sub_1C2D434((CGThumbnailListItem_o *)BattleActorControl_TypeInfo->static_fields, (int32_t)v6, v23, v24);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0, 0) )
  {
    v27 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v27 = BattleActorControl_TypeInfo;
    }
    if ( !v27->static_fields->specialShadowTransform )
    {
      v28 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v28,
        (const MethodInfo_33E08A8 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v29 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v29 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v29 == 1 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 6) = 0;
      *((_DWORD *)ShadowTransform + 11) = 0;
      if ( !v28 )
        goto LABEL_138;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        0,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v30 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v30 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v30 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        1,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v31 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v31 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v31 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        2,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v32 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v32 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v32 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        3,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v38 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v38 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v38 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        4,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v39 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v39 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v39 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        5,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v41 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v41 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v41 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        6,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v43 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v43 )
        goto LABEL_137;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v43 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        7,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v45 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v45 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v45 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        8,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v46 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v46 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v46 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        9,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v48 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v48 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v48 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        10,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v49 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v49 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v49 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        11,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C2D538(UnityEngine_Vector3___TypeInfo, 2);
      if ( !ShadowTransform )
        goto LABEL_138;
      v50 = *((_DWORD *)ShadowTransform + 6);
      v10 = ShadowTransform;
      if ( !v50 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v50 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v28,
        12,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v53 = BattleActorControl_TypeInfo;
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v53 = BattleActorControl_TypeInfo;
      }
      static_fields = v53->static_fields;
      static_fields->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v28;
      sub_1C2D434((CGThumbnailListItem_o *)&static_fields->specialShadowTransform, (int32_t)v28, v51, v52);
    }
  }
  v55 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v55 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v55->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_138;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v56 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v56 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v56->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_138;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v60 = Item;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
    {
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !ShadowTransform )
        goto LABEL_138;
      v61 = UnityEngine_Transform__Find(
              (UnityEngine_Transform_o *)ShadowTransform,
              (System_String_o *)StringLiteral_12834/*"Shadow"*/,
              0);
      *p_shadowObj = v61;
      sub_1C2D434((CGThumbnailListItem_o *)&this->fields.shadowObj, (int32_t)v61, v62, v63);
    }
    v64 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v64 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v64->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_138;
      }
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             (System_Collections_Generic_Dictionary_int__object__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v66 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v66, 0, 0) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_138;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0) )
          {
            v67 = BattleActorControl_TypeInfo;
            if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v67 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v67->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_138;
            v60 = System_Collections_Generic_Dictionary_int__object___get_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v68 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v68, 0, 0) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_138;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0);
      if ( !v60 )
        goto LABEL_138;
      if ( LODWORD(v60[1].monitor) )
      {
        if ( !ShadowTransform )
          goto LABEL_138;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v60[2].klass,
          0);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_138;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0);
        if ( LODWORD(v60[1].monitor) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)((char *)&v60[2].monitor + 4),
              0);
            return;
          }
LABEL_138:
          sub_1C2D6EC(ShadowTransform, v8);
        }
      }
LABEL_137:
      sub_1C2D6F4(ShadowTransform, v8, v10);
    }
  }
}


void BattleActorControl__SetSilentDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v6; // x2
  struct BattleServantData_o *v7; // x8

  BattleActorControl__invisibleSvtModel(this, 1, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (BattleServantData__playDead(battleSvtData, 0),
        BattleActorControl__StartDropItem(this, 1, v6),
        (v7 = this->fields.battleSvtData) == 0) )
  {
    sub_1C2D6EC(battleSvtData, v4);
  }
  v7->fields.isSilnetDead = 1;
}


void BattleActorControl__SetStepInBattle(BattleActorControl_o *this, bool isInBattle, const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = isInBattle;
}


void BattleActorControl__SetTempDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v4; // x1
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x0
  BattleFBXComponent_o *v6; // x20

  if ( (byte_4C2A645 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A645 = 1;
  }
  if ( this->fields.overwriteAnim )
  {
    fbxcomponent = (UnityEngine_Object_o *)this->fields.fbxcomponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fbxcomponent, 0, 0) )
    {
      overwriteAnim = this->fields.overwriteAnim;
      if ( !overwriteAnim
        || (v6 = this->fields.fbxcomponent,
            overwriteAnim = (ChangeBattlePhaseOverwriteAnimation_o *)ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
                                                                       overwriteAnim,
                                                                       this->fields._PlayedOriginalAnimName_k__BackingField,
                                                                       0),
            !v6) )
      {
        sub_1C2D6EC(overwriteAnim, v4);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v6, (System_String_o *)overwriteAnim, 0);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__SetValueOfMotionProcess(
        BattleActorControl_o *this,
        int32_t type,
        int32_t value,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *MotionProcessDict_k__BackingField; // x0

  if ( (byte_4C2A5C0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TryAdd__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__set_Item__);
    byte_4C2A5C0 = 1;
  }
  MotionProcessDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._MotionProcessDict_k__BackingField;
  if ( !MotionProcessDict_k__BackingField
    || (System_Collections_Generic_Dictionary_Int32Enum__int___TryAdd(
          MotionProcessDict_k__BackingField,
          type,
          0,
          (const MethodInfo_340FC90 *)Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__TryAdd__),
        (MotionProcessDict_k__BackingField = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields._MotionProcessDict_k__BackingField) == 0) )
  {
    sub_1C2D6EC(MotionProcessDict_k__BackingField, *(_QWORD *)&type);
  }
  System_Collections_Generic_Dictionary_Int32Enum__int___set_Item(
    MotionProcessDict_k__BackingField,
    type,
    value,
    (const MethodInfo_340E594 *)Method_System_Collections_Generic_Dictionary_BattleMotionProcessType__int__set_Item__);
}


void BattleActorControl__SetWithdrawFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(this, method);
  battleSvtData->fields.isAnimPlayedWithdraw = 1;
}


void BattleActorControl__SetupNodes(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  struct UnityEngine_Transform_o *NodeFromLvName; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  UnityEngine_Transform_o *v7; // x0
  struct UnityEngine_Transform_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Transform_o *v11; // x0
  struct UnityEngine_Transform_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C2A5A1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_18972/*"en_damage01"*/);
    sub_1C2D490(&StringLiteral_18975/*"en_text01"*/);
    sub_1C2D490(&StringLiteral_18974/*"en_target01"*/);
    byte_4C2A5A1 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_18975/*"en_text01"*/, -1, 0, 0);
  this->fields._NodeText_k__BackingField = NodeFromLvName;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NodeText_k__BackingField, (int32_t)NodeFromLvName, v5, v6);
  v7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v8 = TransformHelper__getNodeFromLvName(v7, (System_String_o *)StringLiteral_18972/*"en_damage01"*/, -1, 0, 0);
  this->fields._NodeDamage_k__BackingField = v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NodeDamage_k__BackingField, (int32_t)v8, v9, v10);
  v11 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v12 = TransformHelper__getNodeFromLvName(v11, (System_String_o *)StringLiteral_18974/*"en_target01"*/, -1, 0, 0);
  this->fields._NodeTarget_k__BackingField = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NodeTarget_k__BackingField, (int32_t)v12, v13, v14);
}


void BattleActorControl__ShakePosition(
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
void BattleActorControl__ShiftServantChangeAfter(BattleActorControl_o *this, bool isShift, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_o **p_myShiftData; // x21
  _BOOL4 isHideShadow; // w22
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v13; // x8

  myShiftData = this->fields.myShiftData;
  p_myShiftData = &this->fields.myShiftData;
  if ( myShiftData )
  {
    isHideShadow = myShiftData->fields.isHideShadow;
    if ( isHideShadow != BattleActorControl__IsHideShadow(this, (const MethodInfo *)isShift) )
      BattleActorControl__UpdateShadow(this, v9);
  }
  this->fields.myShiftData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)p_myShiftData, 0, (int32_t)method, v3);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v10);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_12;
  if ( isShift )
  {
    BattleServantData__shiftUpdateStatus(battleSvtData, 0);
    v13 = this->fields.battleSvtData;
    if ( !v13 )
      goto LABEL_12;
    if ( v13->fields._IsUseGrandBoard_k__BackingField )
    {
      battleSvtData = (BattleServantData_o *)this->fields.performance;
      if ( battleSvtData )
      {
        BattlePerformance__AllServantGrandEffectAnimationSync((BattlePerformance_o *)battleSvtData, 0);
        return;
      }
LABEL_12:
      sub_1C2D6EC(battleSvtData, v11);
    }
  }
  else
  {
    BattleServantData__changeUpdateStatus(battleSvtData, 0);
  }
}


void BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2A621 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_12232/*"SKIP_DEAD"*/);
    byte_4C2A621 = 1;
  }
  BattleActorControl__sendEventFSM_46896280(this, (System_String_o *)StringLiteral_12232/*"SKIP_DEAD"*/, 0, v2);
}


void BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  Il2CppClass *klass; // x20
  CGThumbnailListItem_o *p_generic_class; // x20
  System_Delegate_o *generic_class; // t1
  BattleFBXComponent_onEventDelegate_o *v6; // x22
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Delegate_o *v10; // x8
  BattleFBXComponent_onEventDelegate_c *v11; // x1
  Il2CppClass *v12; // x20
  System_Delegate_o *typeMetadataHandle; // t1
  BattleFBXComponent_onEventDelegate_o *v14; // x22
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleFBXComponent_onEventDelegate_c *v18; // x1

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2A5A0 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_Complete__);
    sub_1C2D490(&Method_BattleActorControl_OnEvent__);
    this = (BattleActorControl_o *)sub_1C2D490(&BattleFBXComponent_onEventDelegate_TypeInfo);
    byte_4C2A5A0 = 1;
  }
  klass = v2[3].klass;
  if ( !klass )
    goto LABEL_16;
  generic_class = (System_Delegate_o *)klass->_1.generic_class;
  p_generic_class = (CGThumbnailListItem_o *)&klass->_1.generic_class;
  v6 = (BattleFBXComponent_onEventDelegate_o *)sub_1C2D6DC(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v6, v2, Method_BattleActorControl_OnEvent__, 0);
  v7 = System_Delegate__Combine(generic_class, (System_Delegate_o *)v6, 0);
  v10 = v7;
  if ( v7 )
  {
    v11 = BattleFBXComponent_onEventDelegate_TypeInfo;
    if ( (BattleFBXComponent_onEventDelegate_c *)v7->klass != BattleFBXComponent_onEventDelegate_TypeInfo )
      goto LABEL_13;
    p_generic_class->klass = (CGThumbnailListItem_c *)v7;
    if ( (BattleFBXComponent_onEventDelegate_c *)v7->klass != v11 )
      goto LABEL_13;
  }
  else
  {
    p_generic_class->klass = 0;
  }
  sub_1C2D434(p_generic_class, (int32_t)v7, v8, v9);
  v12 = v2[3].klass;
  if ( !v12 )
LABEL_16:
    sub_1C2D6EC(this, method);
  typeMetadataHandle = (System_Delegate_o *)v12->_1.typeMetadataHandle;
  p_generic_class = (CGThumbnailListItem_o *)&v12->_1.typeMetadataHandle;
  v14 = (BattleFBXComponent_onEventDelegate_o *)sub_1C2D6DC(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v14, v2, Method_BattleActorControl_Complete__, 0);
  v15 = System_Delegate__Combine(typeMetadataHandle, (System_Delegate_o *)v14, 0);
  v10 = v15;
  if ( !v15 )
  {
LABEL_14:
    p_generic_class->klass = (CGThumbnailListItem_c *)v10;
    goto LABEL_15;
  }
  v18 = BattleFBXComponent_onEventDelegate_TypeInfo;
  if ( (BattleFBXComponent_onEventDelegate_c *)v15->klass != BattleFBXComponent_onEventDelegate_TypeInfo
    || (p_generic_class->klass = (CGThumbnailListItem_c *)v15, (BattleFBXComponent_onEventDelegate_c *)v15->klass != v18) )
  {
LABEL_13:
    sub_1C2D9AC(v10);
    goto LABEL_14;
  }
LABEL_15:
  sub_1C2D434(p_generic_class, (int32_t)v10, v16, v17);
}


void BattleActorControl__StartDeadEffect(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleServantData_o *v18; // x8
  float v19; // s9
  System_String_o *Value; // x0
  __int64 v21; // x2
  int v22; // w8
  __int64 v23; // x19
  unsigned int v24; // w20
  int v25; // w22
  UnityEngine_GameObject_o *v26; // x19
  const MethodInfo *v27; // x3
  System_Object_array *v28; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x21
  const MethodInfo *v41; // x3
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  const MethodInfo *v45; // x3
  Il2CppObject *v46; // x21
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // x21
  System_Collections_Hashtable_o *v57; // x0
  __int64 v58; // x0
  float v59; // [xsp+8h] [xbp-58h] BYREF
  int v60; // [xsp+Ch] [xbp-54h] BYREF
  float Height; // [xsp+28h] [xbp-38h] BYREF
  int v62; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4C2A5ED & 1) == 0 )
  {
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&object___TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24414/*"updateDeadEffect"*/);
    sub_1C2D490(&StringLiteral_19677/*"from"*/);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_9902/*"OnFinishDead"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_12180/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/);
    sub_1C2D490(&StringLiteral_22418/*"onupdate"*/);
    sub_1C2D490(&StringLiteral_24088/*"to"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A5ED = 1;
  }
  if ( enableDropItem )
    BattleActorControl__StartDropItem(this, 0, method);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v8 = battleSvtData->fields.displayType == 3;
  else
    v8 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( v8 )
    ServantAssetLoadManager__changeChocoDeadShader(gameObject, 0);
  else
    ServantAssetLoadManager__changeDeadShader(gameObject, 0);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_87;
  root_field = performance->fields.root_field;
  ActorSvtId = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !ActorSvtId )
    goto LABEL_87;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)ActorSvtId, 0);
  v15 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0);
  this->fields.particleDisconnectorObj = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.particleDisconnectorObj, (int32_t)v15, v16, v17);
  v18 = this->fields.battleSvtData;
  v19 = 1.3;
  if ( v18 )
  {
    if ( v18->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12180/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0);
        if ( !ActorSvtId )
          goto LABEL_87;
        v22 = *(_DWORD *)(ActorSvtId + 24);
        v23 = ActorSvtId;
        if ( v22 >= 1 )
        {
          v24 = 0;
          while ( 1 )
          {
            if ( v24 >= v22 )
              goto LABEL_85;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_87;
            v25 = *(_DWORD *)(v23 + 4LL * (int)v24 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0);
            if ( v25 == (_DWORD)ActorSvtId )
              break;
            v22 = *(_DWORD *)(v23 + 24);
            if ( (int)++v24 >= v22 )
              goto LABEL_27;
          }
          v19 = 1.0;
        }
      }
    }
  }
LABEL_27:
  if ( overwriteDuration < 0.0 )
    overwriteDuration = v19;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ActorSvtId = sub_1C2D538(object___TypeInfo, 12);
  if ( !ActorSvtId )
LABEL_87:
    sub_1C2D6EC(ActorSvtId, v11);
  v28 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19677/*"from"*/;
  if ( StringLiteral_19677/*"from"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_19677/*"from"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_19677/*"from"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( !LODWORD(v28->max_length) )
    goto LABEL_85;
  v28->m_Items[0] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)v28->m_Items, v11, v21, v27);
  v62 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v62, v29, v30, v31);
  v33 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C2D5CC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( LODWORD(v28->max_length) <= 1 )
    goto LABEL_85;
  v28->m_Items[1] = v33;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[1], (int32_t)v33, v21, v32);
  ActorSvtId = StringLiteral_24088/*"to"*/;
  if ( StringLiteral_24088/*"to"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_24088/*"to"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24088/*"to"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 2 )
    goto LABEL_85;
  v28->m_Items[2] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[2], v11, v21, v34);
  Height = BattleActorControl__GetHeight(this, v35);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height, v36, v37, v38);
  v40 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C2D5CC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( LODWORD(v28->max_length) <= 3 )
    goto LABEL_85;
  v28->m_Items[3] = v40;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[3], (int32_t)v40, v21, v39);
  ActorSvtId = StringLiteral_18742/*"easetype"*/;
  if ( StringLiteral_18742/*"easetype"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_18742/*"easetype"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_18742/*"easetype"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 4 )
    goto LABEL_85;
  v28->m_Items[4] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[4], v11, v21, v41);
  v60 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v60, v42, v43, v44);
  v46 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C2D5CC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( LODWORD(v28->max_length) <= 5 )
    goto LABEL_85;
  v28->m_Items[5] = v46;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[5], (int32_t)v46, v21, v45);
  ActorSvtId = StringLiteral_22418/*"onupdate"*/;
  if ( StringLiteral_22418/*"onupdate"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_22418/*"onupdate"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_22418/*"onupdate"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 6 )
    goto LABEL_85;
  v28->m_Items[6] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[6], v11, v21, v47);
  ActorSvtId = StringLiteral_24414/*"updateDeadEffect"*/;
  if ( StringLiteral_24414/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_24414/*"updateDeadEffect"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24414/*"updateDeadEffect"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 7 )
    goto LABEL_85;
  v28->m_Items[7] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[7], v11, v21, v48);
  ActorSvtId = StringLiteral_22410/*"oncomplete"*/;
  if ( StringLiteral_22410/*"oncomplete"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_22410/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_22410/*"oncomplete"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 8 )
    goto LABEL_85;
  v28->m_Items[8] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[8], v11, v21, v49);
  ActorSvtId = StringLiteral_9902/*"OnFinishDead"*/;
  if ( StringLiteral_9902/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_9902/*"OnFinishDead"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_9902/*"OnFinishDead"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 9 )
    goto LABEL_85;
  v28->m_Items[9] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[9], v11, v21, v50);
  ActorSvtId = StringLiteral_24049/*"time"*/;
  if ( StringLiteral_24049/*"time"*/ )
  {
    ActorSvtId = sub_1C2D5CC(StringLiteral_24049/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24049/*"time"*/;
  }
  else
  {
    v11 = 0;
  }
  if ( LODWORD(v28->max_length) <= 0xA )
    goto LABEL_85;
  v28->m_Items[10] = (Il2CppObject *)v11;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[10], v11, v21, v51);
  v59 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v59, v52, v53, v54);
  v56 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C2D5CC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_86:
      v58 = sub_1C2D710(ActorSvtId);
      sub_1C2D5B8(v58, 0);
    }
  }
  if ( LODWORD(v28->max_length) <= 0xB )
LABEL_85:
    sub_1C2D6F4(ActorSvtId, v11, v21);
  v28->m_Items[11] = v56;
  sub_1C2D434((CGThumbnailListItem_o *)&v28->m_Items[11], (int32_t)v56, v21, v55);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v57 = iTween__Hash(v28, 0);
  iTween__ValueTo(v26, v57, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v6; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v8; // x8
  System_Action_object__o *v9; // x21
  const MethodInfo *v10; // x5
  struct BattleServantData_o *v11; // x8
  BattlePerformance_o *v12; // x20

  if ( (byte_4C2A5EB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_DropInfo__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl__StartDropItem_b__283_0__);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A5EB = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_19;
  if ( battleSvtData->fields.IsAlreadyDrop )
    return;
  if ( !battleSvtData->fields.isWithdraw )
  {
    battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0);
    if ( ((unsigned __int8)battleSvtData & 1) == 0 )
    {
      v6 = this->fields.battleSvtData;
      if ( !v6 )
        goto LABEL_19;
      battleSvtData = (BattleServantData_o *)v6->fields.deckSvt;
      if ( !battleSvtData )
        goto LABEL_19;
      battleSvtData = (BattleServantData_o *)BattleDeckServantData__getIsForceDropItem(
                                               (BattleDeckServantData_o *)battleSvtData,
                                               0);
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
  BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0);
  v8 = this->fields.battleSvtData;
  if ( v8 )
    v8->fields.IsAlreadyDrop = 1;
  v9 = (System_Action_object__o *)sub_1C2D6DC(System_Action_DropInfo__TypeInfo);
  System_Action_object____ctor(v9, (Il2CppObject *)this, Method_BattleActorControl__StartDropItem_b__283_0__, 0);
  v11 = this->fields.battleSvtData;
  if ( !v11 )
    goto LABEL_19;
  BattleActorControl__GenerateDropObjects(this, 0, 0, (System_Action_DropInfo__o *)v9, v11->fields.droplist, v10);
  if ( isSilent )
    return;
  v12 = this->fields.performance;
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v12 )
LABEL_19:
    sub_1C2D6EC(battleSvtData, isSilent);
  BattlePerformance__ShowAll(
    v12,
    (UnityEngine_GameObject_o *)battleSvtData,
    -1,
    0,
    0,
    0,
    (System_String_o *)StringLiteral_1/*""*/,
    0,
    0,
    0);
}


bool BattleActorControl__StopAudioEvent(BattleActorControl_o *this, const MethodInfo *method)
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
      LOBYTE(battleSvtData) = BattleServantData__IsNoVoice(battleSvtData, 0);
  }
  return (char)battleSvtData;
}


void BattleActorControl__Update(BattleActorControl_o *this, const MethodInfo *method)
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
    v3 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.x * -0.5, this->fields.ShakeRange.fields.x * 0.5, 0);
    v4 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.y * -0.5, this->fields.ShakeRange.fields.y * 0.5, 0);
    v6 = UnityEngine_Random__Range(this->fields.ShakeRange.fields.z * -0.5, this->fields.ShakeRange.fields.z * 0.5, 0);
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_11;
    v8 = v6;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0);
    if ( !actorObject )
      goto LABEL_11;
    v14.fields.x = v3;
    v14.fields.y = v4;
    v14.fields.z = v8;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)actorObject, v14, 0);
    ShakeTime = this->fields.ShakeTime;
    deltaTime = UnityEngine_Time__get_deltaTime(0);
    ShakeTargetTime = this->fields.ShakeTargetTime;
    v12 = ShakeTime + deltaTime;
    this->fields.ShakeTime = v12;
    if ( v12 < ShakeTargetTime )
      return;
    actorObject = this->fields.actorObject;
    if ( !actorObject )
      goto LABEL_11;
    actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0);
    v13 = (UnityEngine_Transform_o *)actorObject;
    if ( !byte_4C20DA1 )
    {
      actorObject = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    if ( !v13 )
LABEL_11:
      sub_1C2D6EC(actorObject, v5);
    UnityEngine_Transform__set_localPosition(v13, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
    this->fields.Shaking = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__UpdateActorVisibilityByBuff(
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
  __int64 v9; // x2
  struct BattleServantData_o *v10; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v12; // x1

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_4C2A654 & 1) == 0 )
  {
    sub_1C2D490(&BuffList_TypeInfo);
    sub_1C2D490(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&BuffList_TYPE___TypeInfo);
    byte_4C2A654 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( battleSvtData->fields.buffData )
  {
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    this = (BattleActorControl_o *)BuffList__IsConstantMasterIndvAddBuffActive(0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = v4->fields.battleSvtData;
      if ( !v6 )
        goto LABEL_23;
      buffData = v6->fields.buffData;
      v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C2D6DC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_45569888(v8, v6, 0, 0, 0, 0, 0, 1, 0);
      if ( !buffData )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_45349584(buffData, 100, v8, 1, 0, 0, 0, 0);
    }
    else
    {
      this = (BattleActorControl_o *)sub_1C2D538(BuffList_TYPE___TypeInfo, 1);
      if ( !this )
        goto LABEL_23;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C2D6F4(this, this, v9);
      LODWORD(this->fields.noPlaymakerMotionActionDict) = 163;
      v10 = v4->fields.battleSvtData;
      if ( !v10 )
        goto LABEL_23;
      this = (BattleActorControl_o *)v10->fields.buffData;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_45321240(
                                       (BattleBuffData_o *)this,
                                       (BuffList_TYPE_array *)forceUpdate,
                                       0,
                                       0,
                                       0);
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
        0);
      translucentActorVisualInfo = v4->fields.translucentActorVisualInfo;
      if ( translucentActorVisualInfo )
      {
        BattleActorControl__SetActorAlpha(
          v4,
          translucentActorVisualInfo->fields._Alpha_k__BackingField,
          (const MethodInfo *)forceUpdate);
        BattleActorControl__UpdateShadow(v4, v12);
        return;
      }
LABEL_23:
      sub_1C2D6EC(this, forceUpdate);
    }
  }
}


void BattleActorControl__UpdateConditionBuffAfterAction(
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
  if ( (byte_4C2A5DA & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&BuffAggregationArgs_TypeInfo);
    byte_4C2A5DA = 1;
  }
  if ( !actionData )
    goto LABEL_18;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0);
  if ( !this )
    goto LABEL_18;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, actionData, v5);
      performance = v4->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v7->fields.noPlaymakerMotionActionDict + v8),
                                       0);
      if ( this )
      {
        v10 = v4->fields.performance;
        if ( !v10 )
          break;
        v11 = (BattleServantData_o *)this;
        this = (BattleActorControl_o *)v10->fields.data;
        if ( !this )
          break;
        QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0);
        v13 = BuffAggregationArgs_TypeInfo;
        v14 = v4->fields.performance;
        v15 = QuestIndividualities;
        if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
          v13 = BuffAggregationArgs_TypeInfo;
        }
        BattleServantData__updateConditionsBuff(v11, v15, v14, v13->static_fields->EndMotionDisplaySet, 0);
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_18:
    sub_1C2D6EC(this, actionData);
  }
}


void BattleActorControl__UpdateEachServantStatusUiByTransform(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActionData_o *actiondata; // x0
  __int64 v4; // x2
  long double inited; // q0
  BattleActionData_o *v6; // x20
  _QWORD *v7; // x20
  __int64 v8; // x8
  __int64 v9; // x0
  int endcameraname; // w8
  unsigned int v11; // w23
  struct BattlePerformance_o *performance; // x8
  __int64 v13; // x22
  struct BattlePerformance_o *v14; // x8
  BattleServantData_o *v15; // x21
  __int64 v16; // x8
  System_Nullable_int__o v17; // x0
  int32_t Value; // w0
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2A626 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Array_Empty_BattleActionData_BuffData___);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    sub_1C2D490(&Method_System_Nullable_int__get_Value__);
    byte_4C2A626 = 1;
  }
  v19 = 0;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_30;
  actiondata = (BattleActionData_o *)BattleActionData__getShiftServant(actiondata, 0);
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
                                         0);
    v6 = actiondata;
    if ( !actiondata )
    {
      v7 = Method_System_Array_Empty_BattleActionData_BuffData___;
      v8 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData___ + 7);
      if ( !v8 )
      {
        sub_1C7DC00(Method_System_Array_Empty_BattleActionData_BuffData___);
        v8 = v7[7];
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1C7DBA4(inited);
      if ( !*(_DWORD *)(v9 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v9);
      actiondata = *(BattleActionData_o **)(v7[7] + 16LL);
      if ( (actiondata->fields._FirstAtkMainTargetId_k__BackingField & 0x100) == 0 )
        actiondata = (BattleActionData_o *)sub_1C7DBA4(inited);
      v6 = *(BattleActionData_o **)actiondata->fields.userCommandCodeId;
      if ( !v6 )
        goto LABEL_30;
    }
    endcameraname = (int)v6->fields.endcameraname;
    if ( endcameraname >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= endcameraname )
          sub_1C2D6F4(actiondata, method, v4);
        performance = this->fields.performance;
        if ( !performance )
          break;
        v13 = *((_QWORD *)&v6->fields.actorId + (int)v11);
        if ( !v13 )
          break;
        actiondata = (BattleActionData_o *)performance->fields.data;
        if ( !actiondata )
          break;
        actiondata = (BattleActionData_o *)BattleData__getServantData(
                                             (BattleData_o *)actiondata,
                                             *(_DWORD *)(v13 + 40),
                                             0);
        if ( actiondata )
        {
          v14 = this->fields.performance;
          if ( !v14 )
            break;
          v15 = (BattleServantData_o *)actiondata;
          BattleActionData_BuffData__ExecAfterEffectProc((BattleActionData_BuffData_o *)v13, v14->fields.data, 0);
          BattleServantData__UpdateNpImmediately(v15, *(_DWORD *)(v13 + 84), 0);
          v16 = *(_QWORD *)(v13 + 92);
          v19 = v16;
          if ( (_BYTE)v16 )
          {
            v17 = (System_Nullable_int__o)&v19;
            v19 = v16;
            Value = System_Nullable_int___get_Value(
                      v17,
                      (const MethodInfo_38AF31C *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v15, Value, v15->fields.maxtpturn, 0);
          }
          BattleServantData__updateHp(v15, 0, 0);
          BattleServantData__updateBuff(v15, 1, 1, 0);
        }
        endcameraname = (int)v6->fields.endcameraname;
        if ( (int)++v11 >= endcameraname )
          return;
      }
LABEL_30:
      sub_1C2D6EC(actiondata, method);
    }
  }
}


void BattleActorControl__UpdateMaterialsOnRenderders_object_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_30BE9EC *method)
{
  long double inited; // q0
  Il2CppClass *_3_BattleActorControl___c__334_T; // x0
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x22
  Il2CppClass *v11; // x0
  const MethodInfo_30BE9EC_RGCTXs *rgctx_data; // x8
  __int64 v13; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double v18; // q0
  Il2CppClass *v19; // x0
  Il2CppClass *v20; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v22; // x1
  long double v23; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v27; // x9
  int *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x19
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  long double v37; // q0
  Il2CppClass *_8_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  UnityEngine_Renderer_o *v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  long double v46; // q0
  Il2CppClass *v47; // x0
  Il2CppClass *v48; // x0
  System_Func_object__bool__o *v49; // x23
  Il2CppClass *v50; // x0
  Il2CppClass *v51; // x0
  Il2CppObject *v52; // x24
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  long double v55; // q0
  Il2CppClass *v56; // x0
  Il2CppClass *v57; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v61; // x8
  __int64 v62; // x9
  int32_t *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x22
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x0
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0

  if ( method->rgctx_data
    || (sub_1C2D490(&Method_System_Linq_Enumerable_Where_Material___),
        sub_1C2D490(&System_Func_Material__bool__TypeInfo),
        sub_1C2D490(&System_IDisposable_TypeInfo),
        sub_1C2D490(&System_Collections_Generic_IEnumerable_Material__TypeInfo),
        sub_1C2D490(&System_Collections_Generic_IEnumerator_Material__TypeInfo),
        sub_1C2D490(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !rendererEnumerable )
      return;
  }
  else
  {
    sub_1C7DC00(method);
    if ( !rendererEnumerable )
      return;
  }
  _3_BattleActorControl___c__334_T = method->rgctx_data->_3_BattleActorControl___c__334_T_;
  if ( (*(&_3_BattleActorControl___c__334_T->_2.bitflags2 + 2) & 1) == 0 )
    _3_BattleActorControl___c__334_T = (Il2CppClass *)sub_1C7DBA4(inited);
  if ( !_3_BattleActorControl___c__334_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_3_BattleActorControl___c__334_T);
  v9 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
  if ( (*(&v9->_2.bitflags2 + 2) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C7DBA4(inited);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
    if ( (*(&v11->_2.bitflags2 + 2) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C7DBA4(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    rgctx_data = method->rgctx_data;
    v13 = (__int64)rgctx_data->_3_BattleActorControl___c__334_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C7DBA4(inited);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)rgctx_data->_2_System_Func_T__bool_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C7DBA4(inited);
    v10 = (System_Func_object__bool__o *)sub_1C2D6DC(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_4_BattleActorControl___c__334_T___UpdateMaterialsOnRenderders_b__334_0,
      (const MethodInfo_361FFB0 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v19 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
    if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
      v19 = (Il2CppClass *)sub_1C7DBA4(v18);
    *((_QWORD *)v19->static_fields + 1) = v10;
    v20 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
    if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
      v20 = (Il2CppClass *)sub_1C7DBA4(v18);
    sub_1C2D434((CGThumbnailListItem_o *)((char *)v20->static_fields + 8), (int32_t)v10, v16, v17);
  }
  v21 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)rendererEnumerable,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_3115108 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
  if ( !v21 )
    sub_1C2D6EC(0, v22);
  v24 = v21;
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (*(&_0_System_Collections_Generic_IEnumerable_T->_2.bitflags2 + 2) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C7DBA4(v23);
  klass = v24->klass;
  v27 = *(unsigned __int16 *)&v24->klass->_2.rank;
  if ( *(_WORD *)&v24->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_31;
    }
    v29 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_31:
    v29 = sub_1C7DCA8(v24, _0_System_Collections_Generic_IEnumerable_T, 0);
  }
  v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v29)(
          v24,
          *(_QWORD *)(v29 + 8));
  v32 = v30;
  while ( 1 )
  {
    if ( !v32 )
      sub_1C2D6EC(v30, v31);
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_39;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_39:
      v36 = sub_1C7DCA8(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    _8_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_;
    if ( (*(&_8_System_Collections_Generic_IEnumerator_T->_2.bitflags2 + 2) & 1) == 0 )
      _8_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C7DBA4(v37);
    v39 = *(_QWORD *)v32;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((Il2CppClass **)v41 - 1) != _8_System_Collections_Generic_IEnumerator_T )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_48;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_48:
      v42 = sub_1C7DCA8(v32, _8_System_Collections_Generic_IEnumerator_T, 0);
    }
    v43 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v32, *(_QWORD *)(v42 + 8));
    if ( !v43 )
      sub_1C2D6EC(0, v44);
    materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v43, 0);
    v47 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
    if ( (*(&v47->_2.bitflags2 + 2) & 1) == 0 )
      v47 = (Il2CppClass *)sub_1C7DBA4(v46);
    if ( !v47->_2.cctor_finished )
      v46 = j_il2cpp_runtime_class_init_0(v47);
    v48 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
    if ( (*(&v48->_2.bitflags2 + 2) & 1) == 0 )
      v48 = (Il2CppClass *)sub_1C7DBA4(v46);
    v49 = (System_Func_object__bool__o *)*((_QWORD *)v48->static_fields + 2);
    if ( !v49 )
    {
      v50 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
      if ( (*(&v50->_2.bitflags2 + 2) & 1) == 0 )
        v50 = (Il2CppClass *)sub_1C7DBA4(v46);
      if ( !v50->_2.cctor_finished )
        v46 = j_il2cpp_runtime_class_init_0(v50);
      v51 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
      if ( (*(&v51->_2.bitflags2 + 2) & 1) == 0 )
        v51 = (Il2CppClass *)sub_1C7DBA4(v46);
      v52 = *(Il2CppObject **)v51->static_fields;
      v49 = (System_Func_object__bool__o *)sub_1C2D6DC(System_Func_Material__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v49,
        v52,
        (intptr_t)method->rgctx_data->_11_BattleActorControl___c__334_T___UpdateMaterialsOnRenderders_b__334_1,
        0);
      v56 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
      if ( (*(&v56->_2.bitflags2 + 2) & 1) == 0 )
        v56 = (Il2CppClass *)sub_1C7DBA4(v55);
      *((_QWORD *)v56->static_fields + 2) = v49;
      v57 = method->rgctx_data->_3_BattleActorControl___c__334_T_;
      if ( (*(&v57->_2.bitflags2 + 2) & 1) == 0 )
        v57 = (Il2CppClass *)sub_1C7DBA4(v55);
      sub_1C2D434((CGThumbnailListItem_o *)((char *)v57->static_fields + 16), (int32_t)v49, v53, v54);
    }
    v58 = System_Linq_Enumerable__Where_object_(
            materials,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_3115108 *)Method_System_Linq_Enumerable_Where_Material___);
    v60 = v58;
    if ( !v58 )
      sub_1C2D6EC(0, v59);
    v61 = v58->klass;
    v62 = *(unsigned __int16 *)&v58->klass->_2.rank;
    if ( *(_WORD *)&v58->klass->_2.rank )
    {
      v63 = &v61->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_Material__c **)v63 - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
      {
        --v62;
        v63 += 4;
        if ( !v62 )
          goto LABEL_74;
      }
      v64 = (__int64)&v61->vtable[*v63];
    }
    else
    {
LABEL_74:
      v64 = sub_1C7DCA8(v58, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0);
    }
    v66 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v64)(
            v60,
            *(_QWORD *)(v64 + 8));
    if ( !v66 )
      sub_1C2D6EC(0, v65);
    while ( 1 )
    {
      v67 = *(_QWORD *)v66;
      v68 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
      {
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v69 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v68;
          v69 += 4;
          if ( !v68 )
            goto LABEL_81;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_81:
        v70 = sub_1C7DCA8(v66, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8)) & 1) == 0 )
        break;
      v71 = *(_QWORD *)v66;
      v72 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
      {
        v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_Material__c **)v73 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
        {
          --v72;
          v73 += 4;
          if ( !v72 )
            goto LABEL_88;
        }
        v74 = v71 + 16LL * *v73 + 312;
      }
      else
      {
LABEL_88:
        v74 = sub_1C7DCA8(v66, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0);
      }
      v75 = (*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v66, *(_QWORD *)(v74 + 8));
      if ( !updateFunc )
        sub_1C2D6EC(v75, v75);
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))updateFunc->fields.invoke_impl)(
        updateFunc->fields.method_code,
        v75,
        updateFunc->fields.method);
    }
    v76 = *(_QWORD *)v66;
    v77 = *(unsigned __int16 *)(*(_QWORD *)v66 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v66 + 302LL) )
    {
      v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_96;
      }
      v79 = v76 + 16LL * *v78 + 312;
    }
    else
    {
LABEL_96:
      v79 = sub_1C7DCA8(v66, System_IDisposable_TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v79)(v66, *(_QWORD *)(v79 + 8));
  }
  v80 = *(_QWORD *)v32;
  v81 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
    {
      --v81;
      v82 += 4;
      if ( !v81 )
        goto LABEL_105;
    }
    v83 = v80 + 16LL * *v82 + 312;
  }
  else
  {
LABEL_105:
    v83 = sub_1C7DCA8(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v83)(v32, *(_QWORD *)(v83 + 8));
}


void BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x20
  UnityEngine_Component_o *IsHideShadow; // x0
  __int64 v5; // x1
  struct BattleServantData_o *v6; // x8
  _BOOL4 v7; // w22
  UnityEngine_Object_o *shadowObj; // x20
  bool v9; // w0
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleServantData_o *v11; // x8
  UnityEngine_Object_o *performance; // x20
  struct BattlePerformance_o *v13; // x8
  UnityEngine_Object_o *data; // x20
  int32_t ShadowImageId; // w0
  const MethodInfo *v16; // x2
  struct BattlePerformance_o *v17; // x8
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x2
  const MethodInfo *currentSpShadowEffectId; // x1
  Il2CppObject *Master_object; // x0
  UnityEngine_Object_o *v23; // x21
  BattleBgMaster_o *v24; // x20
  const MethodInfo *v25; // x2
  int32_t v26; // w21
  struct BattleServantData_o *v27; // x8
  int32_t BgShadowImageId; // w1
  int32_t BattleSize; // w0
  const MethodInfo *v30; // x2
  int32_t specialShadowEffectId; // [xsp+Ch] [xbp-24h] BYREF
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A5B3 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5B3 = 1;
  }
  specialShadowEffectId = 0;
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (UnityEngine_Component_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_57;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v6 = this->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_57;
  v7 = v6->fields.isHideShadow;
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(shadowObj, 0, 0);
  if ( v7 )
  {
    if ( v9 )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !IsHideShadow )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsHideShadow, 0);
      if ( !IsHideShadow )
        goto LABEL_57;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0);
    }
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0, 0) )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.specialShadowObj;
      if ( IsHideShadow )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0);
        return;
      }
LABEL_57:
      sub_1C2D6EC(IsHideShadow, v5);
    }
  }
  else
  {
    if ( v9 )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.battleSvtData;
      if ( !IsHideShadow )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)BattleServantData__isAlive((BattleServantData_o *)IsHideShadow, 0, 0);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v11 = this->fields.battleSvtData;
        if ( !v11 )
          goto LABEL_57;
        if ( v11->fields.isEntry )
        {
          IsHideShadow = (UnityEngine_Component_o *)this->fields.shadowObj;
          if ( !IsHideShadow )
            goto LABEL_57;
          IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(IsHideShadow, 0);
          if ( !IsHideShadow )
            goto LABEL_57;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0);
        }
      }
    }
    performance = (UnityEngine_Object_o *)this->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(performance, 0, 0);
    if ( ((unsigned __int8)IsHideShadow & 1) == 0 )
      goto LABEL_60;
    v13 = this->fields.performance;
    if ( !v13 )
      goto LABEL_57;
    data = (UnityEngine_Object_o *)v13->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(data, 0, 0) )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.performance;
      if ( !IsHideShadow )
        goto LABEL_57;
      ShadowImageId = BattlePerformance__GetShadowImageId(
                        (BattlePerformance_o *)IsHideShadow,
                        this->fields.battleSvtData,
                        0);
      BattleActorControl__ChangeShadowTexture(this, ShadowImageId, v16);
      v17 = this->fields.performance;
      if ( !v17 )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)v17->fields.data;
      if ( !IsHideShadow )
        goto LABEL_57;
      GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0);
      BattleActorControl__SetShadowColor(this, GroundShadowColor, v18);
      IsHideShadow = (UnityEngine_Component_o *)this->fields.performance;
      if ( !IsHideShadow )
        goto LABEL_57;
      if ( BattlePerformance__TryGetSpecialShadowEffectId(
             (BattlePerformance_o *)IsHideShadow,
             this->fields.battleSvtData,
             &specialShadowEffectId,
             0) )
      {
        currentSpShadowEffectId = (const MethodInfo *)(unsigned int)this->fields.currentSpShadowEffectId;
        if ( (_DWORD)currentSpShadowEffectId != specialShadowEffectId )
        {
          this->fields.currentSpShadowEffectId = specialShadowEffectId;
          BattleActorControl__DestroySpShadowObj(this, currentSpShadowEffectId);
          LODWORD(currentSpShadowEffectId) = specialShadowEffectId;
        }
        BattleActorControl__changeSpecialShadow(this, (int32_t)currentSpShadowEffectId, v20);
      }
      else
      {
        BattleActorControl__DestroySpShadowObj(this, v19);
      }
    }
    else
    {
LABEL_60:
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_BattleBgMaster___);
      v23 = (UnityEngine_Object_o *)this->fields.performance;
      v24 = (BattleBgMaster_o *)Master_object;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v23, 0, 0);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        IsHideShadow = (UnityEngine_Component_o *)this->fields.performance;
        if ( !IsHideShadow )
          goto LABEL_57;
        IsHideShadow = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundNo(
                                                    (BattlePerformance_o *)IsHideShadow,
                                                    0);
        if ( !this->fields.performance )
          goto LABEL_57;
        v26 = (int)IsHideShadow;
        IsHideShadow = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0);
        v27 = this->fields.battleSvtData;
        if ( !v27 || !v24 )
          goto LABEL_57;
        BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v24, v26, (int32_t)IsHideShadow, v27->fields.isEnemy, 0);
      }
      else
      {
        if ( !v24 )
          goto LABEL_57;
        BgShadowImageId = v24->fields.DefaultBgShadowImageId;
      }
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v25);
    }
    IsHideShadow = (UnityEngine_Component_o *)this->fields.battleSvtData;
    if ( !IsHideShadow )
      goto LABEL_57;
    BattleSize = BattleServantData__get_BattleSize((BattleServantData_o *)IsHideShadow, 0);
    BattleActorControl__SetShadowSize(this, BattleSize, v30);
  }
}


void BattleActorControl__ValidateAbusingEventClass(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        System_String_o *logOnInvalid,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A5F3 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    byte_4C2A5F3 = 1;
  }
  value = 0;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1C2D6EC(0, eventName);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
         (Il2CppObject *)eventName,
         &value,
         (const MethodInfo_344BB34 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    System_String__op_Inequality(motionName, (System_String_o *)value, 0);
  }
}


System_Collections_IEnumerator_o *BattleActorControl__WaitActiveCoroutine(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *waitTarget,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2A5AD & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__WaitActiveCoroutine_d__166_TypeInfo);
    byte_4C2A5AD = 1;
  }
  v6 = sub_1C2D6DC(BattleActorControl__WaitActiveCoroutine_d__166_TypeInfo);
  BattleActorControl__WaitActiveCoroutine_d__166___ctor((BattleActorControl__WaitActiveCoroutine_d__166_o *)v6, 0, 0);
  if ( !v6 )
    sub_1C2D6EC(v7, v8);
  *(_QWORD *)(v6 + 32) = waitTarget;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 32), (int32_t)waitTarget, v9, v10);
  *(_QWORD *)(v6 + 40) = action;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), (int32_t)action, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *BattleActorControl__WaitToNoblePhantasmPlay(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A604 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__WaitToNoblePhantasmPlay_d__313_TypeInfo);
    byte_4C2A604 = 1;
  }
  v3 = sub_1C2D6DC(BattleActorControl__WaitToNoblePhantasmPlay_d__313_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__313___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void BattleActorControl___AddServantVoicePlayed_b__258_0(
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
  if ( (byte_4C2A663 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2A663 = 1;
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
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v10, 0);
  if ( !data )
LABEL_9:
    sub_1C2D6EC(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0);
}


void BattleActorControl___DisplayAnimationEffect_b__168_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, const MethodInfo *))x->klass->vtable._4_OnExec.methodPtr)(
    x,
    this,
    x->klass->vtable._4_OnExec.method);
}


// local variable allocation has failed, the output may be wrong!
bool BattleActorControl___IsHideShadow_b__422_0(BattleActorControl_o *this, int32_t svtId, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct BattleServantData_o *battleSvtData; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4C2A667 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2A667 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(this, *(_QWORD *)&svtId);
  v7 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0) == svtId;
}


void BattleActorControl___OnNoblePhantasmLoadComplete_b__312_0(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void BattleActorControl___OnNoblePhantasmPlayComplete_b__314_0(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  const MethodInfo *v4; // x3
  struct System_Action_o *noblePhantasmCallback; // x8

  if ( (byte_4C2A666 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&StringLiteral_6410/*"FINISHED"*/);
    byte_4C2A666 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0);
  noblePhantasmCallback = this->fields.noblePhantasmCallback;
  if ( !noblePhantasmCallback )
  {
    BattleActorControl__sendEventFSM_46896280(this, (System_String_o *)StringLiteral_6410/*"FINISHED"*/, 0, v4);
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
    sub_1C2D6EC(performance, method);
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
LABEL_9:
  ((void (__fastcall *)(intptr_t, intptr_t))noblePhantasmCallback->fields.invoke_impl)(
    noblePhantasmCallback->fields.method_code,
    noblePhantasmCallback->fields.method);
}


void BattleActorControl___StartDropItem_b__283_0(
        BattleActorControl_o *this,
        DropInfo_o *dInfo,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0 )
    sub_1C2D6EC(this, dInfo);
  BattleData__addDropItems((BattleData_o *)this, dInfo, 0);
}


void BattleActorControl___finishMotion_b__247_0(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C2A661 & 1) == 0 )
  {
    sub_1C2D490(&System_GC_TypeInfo);
    byte_4C2A661 = 1;
  }
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  BattleActorControl___finishMotion_g__Finish_247_1(this, v3);
}


void BattleActorControl___finishMotion_g__Finish_247_1(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4C2A662 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A662 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(performance, 0, 0) && this->fields.actiondata )
  {
    MotionSkip = this->fields.performance;
    if ( !MotionSkip
      || (MotionSkip = (BattlePerformance_o *)BattlePerformance__get_MotionSkip(MotionSkip, 0)) == 0
      || (((void (__fastcall *)(BattlePerformance_o *, void *))MotionSkip->klass[1]._1.generic_class)(
            MotionSkip,
            MotionSkip->klass[1]._1.typeMetadataHandle),
          (MotionSkip = this->fields.performance) == 0) )
    {
      sub_1C2D6EC(MotionSkip, v4);
    }
    BattlePerformance__finishMotion(MotionSkip, this, 0);
  }
}


void BattleActorControl___startNoblePhantasm_b__310_0(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattleActorControl_o *v7; // x20
  VisibleControlInfo_o *v8; // x21
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  __int128 v13; // [xsp+0h] [xbp-60h] BYREF
  BattleActorControl_o *v14[2]; // [xsp+10h] [xbp-50h]

  if ( (byte_4C2A664 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___GetEnumerator__);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C2A664 = 1;
  }
  v13 = 0u;
  *(_OWORD *)v14 = 0u;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_13;
  System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_3739A68 *)Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)&v13,
           (const MethodInfo_350BA5C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___MoveNext__);
    if ( !v4 )
      break;
    v7 = v14[1];
    if ( !v14[1] )
      sub_1C2D6EC(v4, v5);
    v8 = (VisibleControlInfo_o *)v14[0];
    BattleActorControl__playAnimation_46911212(v14[1], (System_String_o *)StringLiteral_24695/*"wait"*/, 0, v6);
    BattleActorControl__ProcServantObjectVisibleCtr(v7, 1, v8, v9);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (const MethodInfo_350BA58 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_VisibleControlInfo__BattleActorControl___Dispose__);
  v10 = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !v10 )
LABEL_13:
    sub_1C2D6EC(noblePhantasmObjectVisibleCtrList, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
}


void BattleActorControl___startNoblePhantasm_b__310_1(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4C2A665 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4C2A665 = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_12;
  v6 = Instance;
  v8 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v18.fields.currentCryptoKey = v8;
  *(_QWORD *)&v18.fields.fakeValue = v7;
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v18, 0);
  if ( !this->fields.battleSvtData )
    goto LABEL_12;
  v9 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0);
  if ( !Instance )
    goto LABEL_12;
  v10 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_12;
  m_CachedPtr = v10->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0);
  v12 = this->fields.battleSvtData;
  if ( !v12
    || (overwriteSvtVoiceId = v12->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v12->fields.treasuredvcLevel,
        v15 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0),
        v17 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1C2D6DC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0),
        !v6) )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v4);
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
    0);
}


void BattleActorControl__addAura(
        BattleActorControl_o *this,
        int32_t auraEffectId,
        int32_t priority,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = BattleActorControl__coAddAura(this, auraEffectId, priority, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void BattleActorControl__addBuffLoopEffect(
        BattleActorControl_o *this,
        BuffEntity_o *buffEntity,
        const MethodInfo *method)
{
  const MethodInfo *effectId; // x1
  __int64 buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  il2cpp_array_size_t max_length; // x8
  int v9; // w10
  BattleEffectUtility_BuffEffectLoadArgument_o *v10; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v12; // w22
  UnityEngine_GameObject_o *v13; // x23
  UnityEngine_GameObject_o *v14; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  const MethodInfo *v20; // x1
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  UnityEngine_Transform_o *v23; // x22
  UnityEngine_Transform_o *v24; // x22
  StatusEffectPosOverwriteMaster_o *v25; // x22
  int32_t v26; // w23
  int32_t v27; // w24
  const MethodInfo *v28; // x1
  int32_t v29; // w0
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 isEnemy; // w25
  UnityEngine_Transform_o *v32; // x22
  System_String_o *nodeName; // x24
  UnityEngine_Transform_o *v34; // x23
  int32_t v35; // w0
  UnityEngine_Transform_o *NodeFromLvName; // x23
  struct UnityEngine_Vector3_StaticFields *v37; // x8
  float v38; // s8
  float v39; // s9
  float v40; // s10
  struct BattleServantData_o *v41; // x8
  float v42; // s10
  float v43; // s8
  float v44; // s9
  bool v45; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v47; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Offset; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v54; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A64B & 1) == 0 )
  {
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_7246/*"HIDE_STATUS_EFFECT_IDS"*/);
    byte_4C2A64B = 1;
  }
  entity = 0;
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
         (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffLoopEffectDict,
                                  (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7246/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0,
                 0);
  if ( !ValueArray || (max_length = ValueArray->max_length) == 0 || (int)max_length < 1 )
  {
LABEL_15:
    v10 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1C2D6DC(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v10, this, 0);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v12 = buffEntity->fields.effectId;
    v13 = gameObject;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !byte_4C20DA1 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA1 = 1;
    }
    buffLoopEffectDict = (__int64)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0);
      LimitCount = BattleActorControl__getLimitCount(this, v20);
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v47.fields.x = x;
      v47.fields.y = y;
      v47.fields.z = z;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v13,
                                               v12,
                                               v14,
                                               v47,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v10,
                                               0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      buffLoopEffectDict = UnityEngine_Object__op_Inequality(EffectToNode, 0, 0);
      if ( (buffLoopEffectDict & 1) == 0 )
        return;
      if ( EffectToNode )
      {
        buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)EffectToNode, 0);
        v23 = (UnityEngine_Transform_o *)buffLoopEffectDict;
        if ( !byte_4C20DA1 )
        {
          buffLoopEffectDict = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        if ( v23 )
        {
          UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)EffectToNode,
                                          0);
          v24 = (UnityEngine_Transform_o *)buffLoopEffectDict;
          if ( !byte_4C20DA7 )
          {
            buffLoopEffectDict = sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
            byte_4C20DA7 = 1;
          }
          if ( v24 )
          {
            UnityEngine_Transform__set_localRotation(
              v24,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0);
            buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)buffLoopEffectDict,
                                              (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0;
              if ( buffLoopEffectDict )
              {
                v25 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (__int64)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v26 = buffEntity->fields.effectId;
                v27 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0);
                v29 = BattleActorControl__getLimitCount(this, v28);
                buffLoopEffectDict = StatusEffectPosOverwriteMaster__TryGetEntity(v25, &entity, v26, v27, v29, 0);
                if ( (buffLoopEffectDict & 1) != 0 )
                {
                  battleSvtData = this->fields.battleSvtData;
                  if ( !battleSvtData )
                    goto LABEL_53;
                  isEnemy = battleSvtData->fields.isEnemy;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)EffectToNode,
                                                  0);
                  if ( !this->fields.actorObject )
                    goto LABEL_53;
                  v32 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0);
                  if ( !entity )
                    goto LABEL_53;
                  nodeName = entity->fields.nodeName;
                  v34 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v35 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v34, nodeName, v35, 1, 0);
                  if ( !byte_4C20DA1 )
                  {
                    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                    byte_4C20DA1 = 1;
                  }
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  v37 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v39 = v37->zeroVector.fields.y;
                  v38 = v37->zeroVector.fields.z;
                  v40 = v37->zeroVector.fields.x;
                  Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0);
                  if ( !v32 )
                    goto LABEL_53;
                  v49.fields.z = v38 + Offset.fields.z;
                  v49.fields.y = v39 + Offset.fields.y;
                  v49.fields.x = v40 + Offset.fields.x;
                  UnityEngine_Transform__set_localPosition(v32, v49, 0);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0);
                  Rotation.fields.x = Rotation.fields.x * 0.017453;
                  Rotation.fields.y = Rotation.fields.y * 0.017453;
                  Rotation.fields.z = Rotation.fields.z * 0.017453;
                  v54 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0);
                  UnityEngine_Transform__set_localRotation(v32, v54, 0);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0);
                  UnityEngine_Transform__set_localScale(v32, Scale, 0);
                  UnityEngine_Transform__set_parent(v32, NodeFromLvName, 0);
                }
              }
              v41 = this->fields.battleSvtData;
              if ( !v41 )
                goto LABEL_53;
              if ( v41->fields.isEnemy )
              {
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, 0);
                v42 = localScale.fields.x;
                v43 = localScale.fields.y;
                v44 = localScale.fields.z;
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v53.fields.x = -v42;
                v53.fields.y = v43;
                v53.fields.z = v44;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v53, 0);
              }
              buffLoopEffectDict = (__int64)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v45 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v45, 0);
                buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (Il2CppObject *)EffectToNode,
                    (const MethodInfo_33E127C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C2D6EC(buffLoopEffectDict, effectId);
  }
  v9 = 0;
  while ( ValueArray->m_Items[v9] != buffEntity->fields.effectId )
  {
    if ( (_DWORD)max_length == ++v9 )
      goto LABEL_15;
  }
}


void BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C2D6EC(0, method);
  BattlePerformance__callServant(performance, this->fields.actiondata, 0);
}


void BattleActorControl__changeShadowType(BattleActorControl_o *this, bool isNormal, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  __int64 v7; // x1
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4C2A60C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A60C = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(specialShadowObj, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( !Component_object
        || (Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                            Component_object,
                                                            (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, isNormal, 0),
            (Component_object = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0) )
      {
        sub_1C2D6EC(Component_object, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, !isNormal, 0);
    }
  }
}


void BattleActorControl__changeSpecialShadow(
        BattleActorControl_o *this,
        int32_t shadowEffectId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *Component_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v12; // w21
  System_Action_o *v13; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_4C2A60B & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass321_0__changeSpecialShadow_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass321_0_TypeInfo);
    byte_4C2A60B = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass321_0_TypeInfo);
  BattleActorControl___c__DisplayClass321_0___ctor((BattleActorControl___c__DisplayClass321_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = shadowEffectId;
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
  {
    specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(specialShadowObj, 0, 0) )
    {
      Component_object = (UnityEngine_Component_o *)this->fields.shadowObj;
      if ( Component_object )
      {
        Component_object = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                        Component_object,
                                                        (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_object )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, 0, 0);
          v12 = *(_DWORD *)(v5 + 24);
          v13 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            (Il2CppObject *)v5,
            Method_BattleActorControl___c__DisplayClass321_0__changeSpecialShadow_b__0__,
            0);
          performance = this->fields.performance;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__LoadEffectAssetIfNotYet(v12, v13, performance, 0);
          return;
        }
      }
LABEL_16:
      sub_1C2D6EC(Component_object, v7);
    }
  }
}


bool BattleActorControl__checkAnimation(
        BattleActorControl_o *this,
        System_String_o *animname,
        const MethodInfo *method)
{
  BattleFBXComponent_o *fbxcomponent; // x0

  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1C2D6EC(0, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0);
}


void BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4C2A628 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_endChangeAppearance__);
    byte_4C2A628 = 1;
  }
  performance = this->fields.performance;
  v4 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0);
  if ( !performance )
    sub_1C2D6EC(v5, v6);
  BattlePerformance__checkChangeAppearance(performance, v4, 0);
}


bool BattleActorControl__checkGEvent(BattleActorControl_o *this, System_String_o *name, const MethodInfo *method)
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
  if ( (unsigned int)actindex >= LODWORD(motionFSM->max_length) )
    goto LABEL_13;
  this = (BattleActorControl_o *)motionFSM->m_Items[actindex];
  if ( !this || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0)) == 0 )
LABEL_12:
    sub_1C2D6EC(this, name);
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
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0);
      this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0);
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
    sub_1C2D6F4(this, name, method);
  }
  return v8;
}


bool BattleActorControl__checkID(BattleActorControl_o *this, int32_t id, const MethodInfo *method)
{
  return this->fields.uniqueID == id;
}


bool BattleActorControl__checkMotionEvent(BattleActorControl_o *this, System_String_o *name, const MethodInfo *method)
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
  if ( !LODWORD(motionFSM->max_length) )
    goto LABEL_13;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this || (this = (BattleActorControl_o *)PlayMakerFSM__get_FsmGlobalTransitions((PlayMakerFSM_o *)this, 0)) == 0 )
LABEL_12:
    sub_1C2D6EC(this, name);
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
      EventName = HutongGames_PlayMaker_FsmTransition__get_EventName((HutongGames_PlayMaker_FsmTransition_o *)this, 0);
      this = (BattleActorControl_o *)System_String__op_Equality(EventName, name, 0);
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
    sub_1C2D6F4(this, name, method);
  }
  return v7;
}


bool BattleActorControl__checkNextAttackMe(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.nextattackme;
}


bool BattleActorControl__checkPrevAttackMe(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.prevattackme;
}


bool BattleActorControl__checkScriptValue(
        BattleActorControl_o *this,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, key);
  return BattleServantData__checkScriptValue(battleSvtData, key, value, 0);
}


bool BattleActorControl__checkStepFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.stepFlg;
}


bool BattleActorControl__checkStepIn(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t StepRate; // w19

  if ( (byte_4C2A5C9 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_23805/*"summon"*/);
    byte_4C2A5C9 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_23805/*"summon"*/, 1, 0);
LABEL_8:
    sub_1C2D6EC(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0);
  return UnityEngine_Random__Range_71123924(0, 1000, 0) < StepRate;
}


bool BattleActorControl__checkVoice(BattleActorControl_o *this, int32_t type, bool isNp, const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4C2A5DB & 1) == 0 )
  {
    sub_1C2D490(&Voice_TypeInfo);
    byte_4C2A5DB = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0);
  return BattleActorControl__checkVoice_46907344(this, FileName, isNp, v8);
}


bool BattleActorControl__checkVoice_46907344(
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

  if ( (byte_4C2A5DC & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5DC = 1;
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
      || (v16 = BattleServantData__getSvtId(battleSvtData, 0),
          battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v17),
          (v18 = this->fields.battleSvtData) == 0) )
    {
      sub_1C2D6EC(battleSvtData, voiceTypeId);
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
  return ServantAssetLoadManager__checkBattleVoice(v12, v13, v14, voiceTypeId, v11, 0);
}


System_Collections_IEnumerator_o *BattleActorControl__coAddAura(
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

  if ( (byte_4C2A637 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__coAddAura_d__384_TypeInfo);
    byte_4C2A637 = 1;
  }
  v7 = sub_1C2D6DC(BattleActorControl__coAddAura_d__384_TypeInfo);
  BattleActorControl__coAddAura_d__384___ctor((BattleActorControl__coAddAura_d__384_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 40) = auraEffectId;
  *(_DWORD *)(v7 + 56) = priority;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *BattleActorControl__colShiftServant(
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

  if ( (byte_4C2A63C & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__colShiftServant_d__392_TypeInfo);
    byte_4C2A63C = 1;
  }
  v9 = sub_1C2D6DC(BattleActorControl__colShiftServant_d__392_TypeInfo);
  BattleActorControl__colShiftServant_d__392___ctor((BattleActorControl__colShiftServant_d__392_o *)v9, 0, 0);
  if ( !v9 )
    sub_1C2D6EC(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 40), (int32_t)shiftSvt, v14, v15);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 56), (int32_t)finishCallback, v16, v17);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *BattleActorControl__colShiftServantChange(
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

  if ( (byte_4C2A63E & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__colShiftServantChange_d__394_TypeInfo);
    byte_4C2A63E = 1;
  }
  v7 = sub_1C2D6DC(BattleActorControl__colShiftServantChange_d__394_TypeInfo);
  BattleActorControl__colShiftServantChange_d__394___ctor(
    (BattleActorControl__colShiftServantChange_d__394_o *)v7,
    0,
    0);
  if ( !v7 )
    sub_1C2D6EC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = shiftSvt;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 40), (int32_t)shiftSvt, v12, v13);
  *(_BYTE *)(v7 + 48) = isShift;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *BattleActorControl__collChangeAppearance(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A62C & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__collChangeAppearance_d__370_TypeInfo);
    byte_4C2A62C = 1;
  }
  v3 = sub_1C2D6DC(BattleActorControl__collChangeAppearance_d__370_TypeInfo);
  BattleActorControl__collChangeAppearance_d__370___ctor((BattleActorControl__collChangeAppearance_d__370_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleActorControl__colloadDressServant(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C2A627 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__colloadDressServant_d__365_TypeInfo);
    byte_4C2A627 = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl__colloadDressServant_d__365_TypeInfo);
  BattleActorControl__colloadDressServant_d__365___ctor((BattleActorControl__colloadDressServant_d__365_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 40) = flg;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *BattleActorControl__colloadTransformServant(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2A625 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__colloadTransformServant_d__362_TypeInfo);
    byte_4C2A625 = 1;
  }
  v3 = sub_1C2D6DC(BattleActorControl__colloadTransformServant_d__362_TypeInfo);
  BattleActorControl__colloadTransformServant_d__362___ctor(
    (BattleActorControl__colloadTransformServant_d__362_o *)v3,
    0,
    0);
  if ( !v3 )
    sub_1C2D6EC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *BattleActorControl__coroutinePostCallBack(
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

  if ( (byte_4C2A5D6 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__coroutinePostCallBack_d__248_TypeInfo);
    byte_4C2A5D6 = 1;
  }
  v6 = sub_1C2D6DC(BattleActorControl__coroutinePostCallBack_d__248_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__248___ctor(
    (BattleActorControl__coroutinePostCallBack_d__248_o *)v6,
    0,
    0);
  if ( !v6 )
    sub_1C2D6EC(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1C2D434((CGThumbnailListItem_o *)(v6 + 40), (int32_t)callBack, v9, v10);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C2A62B & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2A62B = 1;
  }
  BattleActorControl__sendEventFSM_46896280(this, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, 0, v2);
}


void BattleActorControl__endFinishMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleActionData_o *actiondata; // x1
  const MethodInfo *v5; // x2
  BattleServantData_o *battleSvtData; // x0
  System_Int32_array *AuraIdList; // x0
  const MethodInfo *v8; // x2
  struct BattleActionData_o *v9; // x8
  int32_t type; // w20
  struct BattleActionData_o *v11; // x8
  struct BattleServantData_o *v12; // x8
  _BOOL4 isEnemy; // w9
  struct BattleActionData_o *v14; // x8
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4C2A5D7 & 1) == 0 )
  {
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&StringLiteral_8736/*"MOTION_BACK"*/);
    byte_4C2A5D7 = 1;
  }
  actiondata = this->fields.actiondata;
  if ( actiondata && actiondata->fields._IsUpdateBuffAfterAction_k__BackingField )
  {
    BattleActorControl__UpdateConditionBuffAfterAction(this, actiondata, v2);
    BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v5);
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_36;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0);
  BattleActorControl__updateAura(this, AuraIdList, v8);
  v9 = this->fields.actiondata;
  if ( !v9 )
    goto LABEL_36;
  type = v9->fields.type;
  battleSvtData = (BattleServantData_o *)BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    battleSvtData = (BattleServantData_o *)BattleActionData_TypeInfo;
  }
  if ( type == *(_DWORD *)(*(_QWORD *)&battleSvtData->fields._ExistIndividualityServant_k__BackingField + 4LL) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_36;
    BattleServantData__EndNoblePhantasmPerformance(battleSvtData, 0);
  }
  v11 = this->fields.actiondata;
  if ( !v11 )
    goto LABEL_36;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_36;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsExecOverwriteTreasureDevice(
                                           battleSvtData,
                                           v11->fields.treasureDvcId,
                                           0);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_36;
    BattleServantData__ResetOverwriteTreasureDevice(battleSvtData, 0);
  }
  v12 = this->fields.battleSvtData;
  if ( !v12 )
    goto LABEL_36;
  isEnemy = v12->fields.isEnemy;
  v14 = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !v14 )
      goto LABEL_36;
    if ( v14->fields.treasureDvcId >= 1 )
    {
      BattleActorControl__ActiveRemainReservedBuffEffect(this, (const MethodInfo *)actiondata);
      BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v15);
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_36;
      BattleServantData__updateTDGauge(battleSvtData, 0);
      goto LABEL_27;
    }
  }
  else if ( !v14 )
  {
    goto LABEL_36;
  }
  if ( System_String__op_Equality(v14->fields.motionname, (System_String_o *)StringLiteral_8736/*"MOTION_BACK"*/, 0) )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, (const MethodInfo *)actiondata);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v16);
  }
LABEL_27:
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_36;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, 0) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_36;
    if ( !BattleServantData__isDeadStand(battleSvtData, 0) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_36;
      if ( !BattleServantData__isDeadWait(battleSvtData, 0) )
        BattleActorControl__invisibleSvtModel(this, 1, v17);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_36:
    sub_1C2D6EC(battleSvtData, actiondata);
  BattlePerformance__EndActionDataFromAnyMotion((BattlePerformance_o *)battleSvtData, 0);
}


void BattleActorControl__endMotion(BattleActorControl_o *this, System_String_o *call, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_46896280(this, call, 0, v3);
}


void BattleActorControl__endPigReturnEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  int v6; // w8
  _DWORD *v7; // x19
  unsigned int v8; // w21
  char *v9; // x8
  UnityEngine_Component_o *v10; // x20
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w24
  UnityEngine_ParticleSystem_MainModule_o v14; // x0
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C2A63F & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C2D490(&StringLiteral_18840/*"ef_pig_return01"*/);
    byte_4C2A63F = 1;
  }
  m_ParticleSystem = 0;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0)) == 0
    || (transform = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0 )
  {
LABEL_20:
    sub_1C2D6EC(transform, v4);
  }
  v6 = *((_DWORD *)transform + 6);
  v7 = transform;
  if ( v6 >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
        goto LABEL_21;
      v9 = (char *)&v7[2 * v8];
      v10 = (UnityEngine_Component_o *)*((_QWORD *)v9 + 4);
      if ( !v10 )
        goto LABEL_20;
      transform = UnityEngine_Object__get_name(*((UnityEngine_Object_o **)v9 + 4), 0);
      if ( !transform )
        goto LABEL_20;
      transform = (void *)System_String__Contains(
                            (System_String_o *)transform,
                            (System_String_o *)StringLiteral_18840/*"ef_pig_return01"*/,
                            0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_object__51142088(
                      v10,
                      (const MethodInfo_30C5DC8 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
        if ( !transform )
          goto LABEL_20;
        v11 = *((_DWORD *)transform + 6);
        v12 = transform;
        if ( v11 >= 1 )
          break;
      }
LABEL_18:
      v6 = v7[6];
      if ( (int)++v8 >= v6 )
        return;
    }
    v13 = 0;
    while ( v13 < v11 )
    {
      transform = (void *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !transform )
        goto LABEL_20;
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)transform, 0).fields.m_ParticleSystem;
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v14, 0, 0);
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_18;
    }
LABEL_21:
    sub_1C2D6F4(transform, v4, v5);
  }
}


void BattleActorControl__finishMotion(
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
  if ( !BattleActorControl_ActorMotionActiveCheck__inactiveFSM(v5, finishFsmName, 0) )
  {
    BattleActorControl__finishMotion_46905056(this, v7);
    return;
  }
  v5 = BattleActorControl__get_CheckMotion(this, v7);
  if ( !v5 )
    goto LABEL_11;
  v8 = BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(v5, 0);
  if ( !v8 )
    goto LABEL_7;
  v10 = v8;
  v5 = BattleActorControl__get_CheckMotion(this, v9);
  if ( !v5 )
LABEL_11:
    sub_1C2D6EC(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v12, 0);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void BattleActorControl__finishMotion_46905056(BattleActorControl_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_o **p_beforeWeaponFsm; // x20
  UnityEngine_Object_o *beforeWeaponFsm; // x21
  const MethodInfo *v5; // x1
  UnityEngine_Component_o *v6; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct BattleActionData_o *actiondata; // x8
  Il2CppObject *Instance; // x20
  AssetManager_ResourceUnloadEventHandler_o *v12; // x21

  if ( (byte_4C2A5D5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl__finishMotion_b__247_0__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C2A5D5 = 1;
  }
  p_beforeWeaponFsm = &this->fields.beforeWeaponFsm;
  beforeWeaponFsm = (UnityEngine_Object_o *)this->fields.beforeWeaponFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(beforeWeaponFsm, 0, 0) )
  {
    v6 = (UnityEngine_Component_o *)*p_beforeWeaponFsm;
    if ( !*p_beforeWeaponFsm )
      goto LABEL_15;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v6, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
    *p_beforeWeaponFsm = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.beforeWeaponFsm, 0, v8, v9);
  }
  actiondata = this->fields.actiondata;
  if ( actiondata && actiondata->fields.isReleaseMemoryWhenFinished )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v12 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1C2D6DC(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v12,
      (Il2CppObject *)this,
      Method_BattleActorControl__finishMotion_b__247_0__,
      0);
    if ( Instance )
    {
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, v12, 0);
      return;
    }
LABEL_15:
    sub_1C2D6EC(v6, v5);
  }
  BattleActorControl___finishMotion_g__Finish_247_1(this, v5);
}


UnityEngine_GameObject_o *BattleActorControl__getActorEffect(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  BattleServantData_o *v6; // x8
  int32_t index; // w20
  int32_t DispLimitCount; // w21

  if ( (byte_4C2A5AA & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5AA = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0)) == 0
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0) )
  {
    sub_1C2D6EC(battleSvtData, name);
  }
  index = v6->fields.index;
  DispLimitCount = BattleServantData__getDispLimitCount(battleSvtData, 1, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__LoadNoblePhantasmEffect(index, DispLimitCount, name, 0);
}


UnityEngine_GameObject_o *BattleActorControl__getActorEffectFromActor(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t v6; // w21
  int32_t DispLimitCount; // w22
  const MethodInfo *v8; // x2
  int32_t WeaponGroup; // w20

  if ( (byte_4C2A5AB & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5AB = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0), !this->fields.battleSvtData) )
  {
    sub_1C2D6EC(battleSvtData, name);
  }
  v6 = (int)battleSvtData;
  DispLimitCount = BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0);
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 0, v8);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__loadActorEffectFromActor(v6, DispLimitCount, WeaponGroup, name, 0);
}


int32_t BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getActorSvtId(battleSvtData, 0);
}


UnityEngine_Vector3_o BattleActorControl__getBaseScale(BattleActorControl_o *this, const MethodInfo *method)
{
  float actorScale; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( !byte_4C20DA6 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
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


UnityEngine_Vector3_o BattleActorControl__getCriterialPos(BattleActorControl_o *this, const MethodInfo *method)
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


UnityEngine_Transform_o *BattleActorControl__getDropTransform(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *dropPointComp; // x20
  __int64 v4; // x1
  BattleDropPointComponent_o *gameObject; // x0

  if ( (byte_4C2A5D2 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5D2 = 1;
  }
  dropPointComp = (UnityEngine_Object_o *)this->fields.dropPointComp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(dropPointComp, 0, 0) )
  {
    gameObject = this->fields.dropPointComp;
    if ( gameObject )
      return BattleDropPointComponent__get_Transform(gameObject, 0);
LABEL_10:
    sub_1C2D6EC(gameObject, v4);
  }
  gameObject = (BattleDropPointComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  return UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
}


int32_t BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_WeaponData_o *Weapon; // x8
  int32_t EffectFolder_k__BackingField; // w1
  System_Nullable_int__o v6; // x0
  BattleServantData_o *battleSvtData; // x0
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C2A5A5 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C2A5A5 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    Weapon = myShiftData->fields.Weapon;
    if ( Weapon )
    {
      EffectFolder_k__BackingField = Weapon->fields._EffectFolder_k__BackingField;
      v6 = (System_Nullable_int__o)&v9;
      v9 = 0;
      System_Nullable_int____ctor(
        v6,
        EffectFolder_k__BackingField,
        (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
      if ( (_BYTE)v9 )
        return HIDWORD(v9);
    }
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0);
}


UnityEngine_Transform_o *BattleActorControl__getFieldRoot(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_1C2D6EC(this, method);
  return performance->fields.root_field;
}


UnityEngine_GameObject_o *BattleActorControl__getHeadUpObject(BattleActorControl_o *this, const MethodInfo *method)
{
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
}


UnityEngine_Vector3_o BattleActorControl__getHeadUpY(BattleActorControl_o *this, const MethodInfo *method)
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
    sub_1C2D6EC(0, method);
  x = this->fields.headupVec.fields.x;
  y = this->fields.headupVec.fields.y;
  v6 = (float)(y + 0.5) + BattleServantData__getheadUpY(battleSvtData, 0);
  v7 = 0.0;
  v8 = x;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v8;
  return result;
}


int32_t BattleActorControl__getLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getDispLimitCount(battleSvtData, 1, 0);
}


int32_t BattleActorControl__getNobleChainCount(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  if ( actiondata )
    return actiondata->fields.chainCount;
  else
    return 0;
}


int32_t BattleActorControl__getOriginLimitCount(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getLimitCount(battleSvtData, 0);
}


int32_t BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(this, method);
  return battleSvtData->fields.overwriteSvtVoiceId;
}


int32_t BattleActorControl__getScriptValue(BattleActorControl_o *this, System_String_o *key, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0);
}


int32_t BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getSvtId(battleSvtData, 0);
}


System_String_o *BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getStrParam(battleSvtData, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o BattleActorControl__getTargetObjectVec(
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
  float v12; // s0
  struct BattlePerformance_o *v13; // x8
  float v14; // s3
  float v15; // s4
  float v16; // s5
  bool v17; // nf
  float v18; // s3
  struct BattlePerformance_o *v19; // x8
  float v20; // s3
  float v21; // s1
  float v22; // s0
  float v23; // s1
  float v24; // s2
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C2A5CE & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5CE = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_42;
  distanceofactor = performance->fields.distanceofactor;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  targetObject = (UnityEngine_Object_o *)v4->fields.targetObject;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(targetObject, 0, 0) )
  {
    this = (BattleActorControl_o *)v4->fields.targetObject;
    if ( this )
    {
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( this )
      {
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        x = position.fields.x;
        y = position.fields.y;
        z = position.fields.z;
        goto LABEL_12;
      }
    }
LABEL_42:
    sub_1C2D6EC(this, *(_QWORD *)&pos);
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
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_42;
      v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      x = distanceofactor + v26.fields.x;
      goto LABEL_21;
    case 1:
      this = (BattleActorControl_o *)v4->fields.targetObject;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_42;
      v26 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      x = v12 - distanceofactor;
LABEL_21:
      z = v26.fields.z + 0.0;
      y = v26.fields.y + 0.0;
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
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_42;
      v28 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      x = v28.fields.x;
      y = v28.fields.y;
      z = v28.fields.z;
      break;
    case 6:
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_42;
      v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      v19 = v4->fields.performance;
      if ( !v19 )
        goto LABEL_42;
      v20 = (float)(v19->fields.currentFov + -40.0) / 30.0;
      v15 = 12.0;
      v16 = fminf(v20, 1.0);
      v17 = v20 < 0.0;
      v18 = 2.0;
      goto LABEL_37;
    default:
      if ( pos != 7 )
        break;
      this = (BattleActorControl_o *)v4->fields.myStage;
      if ( !this )
        goto LABEL_42;
      this = (BattleActorControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !this )
        goto LABEL_42;
      v27 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      v13 = v4->fields.performance;
      if ( !v13 )
        goto LABEL_42;
      v14 = (float)(v13->fields.currentFov + -40.0) / 30.0;
      v15 = 5.0;
      v16 = fminf(v14, 1.0);
      v17 = v14 < 0.0;
      v18 = 3.0;
LABEL_37:
      y = v27.fields.y + 0.0;
      v21 = (float)(v16 * v15) + v18;
      if ( v17 )
        v21 = v18;
      x = v27.fields.x + (float)(distanceofactor * v21);
      z = v27.fields.z + 0.0;
      break;
  }
  v22 = x;
  v23 = y;
  v24 = z;
  result.fields.z = v24;
  result.fields.y = v23;
  result.fields.x = v22;
  return result;
}


int32_t BattleActorControl__getWaveCount(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *v6; // x8
  struct BattleData_o *data; // x8

  if ( (byte_4C2A5A9 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5A9 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(performance, 0, 0);
  if ( !v4 )
    return -1;
  v6 = this->fields.performance;
  if ( !v6 || (data = v6->fields.data) == 0 )
    sub_1C2D6EC(v4, v5);
  return data->fields.wavecount;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o BattleActorControl__getWeaponColor(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_WeaponData_o *Weapon; // x8
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2
  float a; // s3
  BattleServantData_o *battleSvtData; // x0
  System_Nullable_Color__o v10; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o Color_k__BackingField; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A5A7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_Color__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_Color___ctor__);
    sub_1C2D490(&Method_System_Nullable_Color__get_HasValue__);
    byte_4C2A5A7 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData
    && (Weapon = myShiftData->fields.Weapon) != 0
    && (Color_k__BackingField = Weapon->fields._Color_k__BackingField,
        memset(&v10, 0, sizeof(v10)),
        System_Nullable_Color____ctor(
          &v10,
          Color_k__BackingField,
          (const MethodInfo_38AC840 *)Method_System_Nullable_Color___ctor__),
        v10.fields.hasValue) )
  {
    r = v10.fields.value.fields.r;
    b = v10.fields.value.fields.b;
    g = v10.fields.value.fields.g;
    a = v10.fields.value.fields.a;
  }
  else
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1C2D6EC(0, method);
    *(UnityEngine_Color_o *)&r = BattleServantData__getWeaponColor(battleSvtData, 0);
  }
  result.fields.a = a;
  result.fields.b = b;
  result.fields.g = g;
  result.fields.r = r;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t BattleActorControl__getWeaponGroup(BattleActorControl_o *this, bool isEffect, const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  BattleActionData_ShiftServant_WeaponData_o *Weapon; // x0
  int32_t WeaponGroup; // w1
  System_Nullable_int__o v8; // x0
  BattleServantData_o *battleSvtData; // x0
  __int64 v11; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C2A5A4 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C2A5A4 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    Weapon = myShiftData->fields.Weapon;
    if ( Weapon )
    {
      WeaponGroup = BattleActionData_ShiftServant_WeaponData__GetWeaponGroup(Weapon, isEffect, 0);
      v8 = (System_Nullable_int__o)&v11;
      v11 = 0;
      System_Nullable_int____ctor(v8, WeaponGroup, (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
      if ( (_BYTE)v11 )
        return HIDWORD(v11);
    }
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0);
}


int32_t BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  struct BattleActionData_ShiftServant_WeaponData_o *Weapon; // x8
  int32_t Scale_k__BackingField; // w1
  System_Nullable_int__o v6; // x0
  BattleServantData_o *battleSvtData; // x0
  __int64 v9; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C2A5A6 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C2D490(&Method_System_Nullable_int___ctor__);
    sub_1C2D490(&Method_System_Nullable_int__get_HasValue__);
    byte_4C2A5A6 = 1;
  }
  myShiftData = this->fields.myShiftData;
  if ( myShiftData )
  {
    Weapon = myShiftData->fields.Weapon;
    if ( Weapon )
    {
      Scale_k__BackingField = Weapon->fields._Scale_k__BackingField;
      v6 = (System_Nullable_int__o)&v9;
      v9 = 0;
      System_Nullable_int____ctor(
        v6,
        Scale_k__BackingField,
        (const MethodInfo_38AF304 *)Method_System_Nullable_int___ctor__);
      if ( (_BYTE)v9 )
        return HIDWORD(v9);
    }
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return BattleServantData__getWeaponScale(battleSvtData, 0);
}


BattleActionData_o *BattleActorControl__get_ActionData(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.actiondata;
}


BattleAdjustPopupPosInScreenComponent_array *BattleActorControl__get_AdjustPopupComponents(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._AdjustPopupComponents_k__BackingField;
}


BattleServantData_o *BattleActorControl__get_BattleSvtData(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.battleSvtData;
}


System_String_o *BattleActorControl__get_BuffEffectNodeName(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._BuffEffectNodeName_k__BackingField;
}


BattleActorControl_ActorMotionActiveCheck_o *BattleActorControl__get_CheckMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *result; // x0
  BattleActorControl_ActorMotionActiveCheck_o *v4; // x21
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C2A5CF & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    byte_4C2A5CF = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_1C2D6DC(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0);
    this->fields._checkMotion = v4;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields._checkMotion, (int32_t)v4, v5, v6);
    return this->fields._checkMotion;
  }
  return result;
}


PlayMakerFSM_o *BattleActorControl__get_CommonFsm(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1C2D6EC(this, method);
  if ( LODWORD(motionFSM->max_length) <= 1 )
    sub_1C2D6F4(this, method, v2);
  return motionFSM->m_Items[1];
}


int32_t BattleActorControl__get_CurrentAuraEffectId(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._CurrentAuraEffectId_k__BackingField;
}


int32_t BattleActorControl__get_CurrentAuraPriority(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._CurrentAuraPriority_k__BackingField;
}


bool BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  return ((__int64 (__fastcall *)(struct BattleServantData_o *, const MethodInfo *))battleSvtData->klass->vtable._15_get_IsAiNpc.methodPtr)(
           battleSvtData,
           battleSvtData->klass->vtable._15_get_IsAiNpc.method);
}


bool BattleActorControl__get_IsEnemy(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.isEnemy;
}


bool BattleActorControl__get_IsStepInBattle(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._IsStepInBattle_k__BackingField;
}


int32_t BattleActorControl__get_Level(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(this, method);
  return battleSvtData->fields.level;
}


int32_t BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w19

  if ( (byte_4C2A5A8 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5A8 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(0, method);
  SvtId = BattleServantData__getSvtId(battleSvtData, 0);
  LimitCount = BattleActorControl__getLimitCount(this, v5);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__GetLimitImageIndex(SvtId, LimitCount, 0, 0);
}


System_Collections_Generic_Dictionary_BattleMotionProcessType__int__o *BattleActorControl__get_MotionProcessDict(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._MotionProcessDict_k__BackingField;
}


BaseMotionSkip_o *BattleActorControl__get_MotionSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C2D6EC(0, method);
  return BattlePerformance__get_MotionSkip(performance, 0);
}


UnityEngine_Transform_o *BattleActorControl__get_NodeDamage(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._NodeDamage_k__BackingField;
}


UnityEngine_Transform_o *BattleActorControl__get_NodeTarget(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._NodeTarget_k__BackingField;
}


UnityEngine_Transform_o *BattleActorControl__get_NodeText(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._NodeText_k__BackingField;
}


System_String_o *BattleActorControl__get_PlayedOriginalAnimName(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields._PlayedOriginalAnimName_k__BackingField;
}


int32_t BattleActorControl__get_PrevSkillVoiceType(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.prevSkillVoiceType;
}


UnityEngine_Transform_o *BattleActorControl__get_ShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  return this->fields.shadowObj;
}


UnityEngine_GameObject_o *BattleActorControl__get_SpecialShadowObj(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.specialShadowObj;
}


System_Collections_Generic_List_int__o *BattleActorControl__get_delayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
}


System_String_array *BattleActorControl__getlog(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_4C2A59F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C2A59F = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v2 )
    sub_1C2D6EC(v3, v4);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v2,
                                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_string__ToArray__);
}


void BattleActorControl__invisibleSvtModel(BattleActorControl_o *this, bool hideFlg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  bool v5; // w20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    sub_1C2D6EC(0, hideFlg);
  v5 = !hideFlg;
  UnityEngine_GameObject__SetActive(actorObject, v5, 0);
  BattleActorControl__SetShadowActive(this, v5, v6);
  BattleActorControl__LoopEffectParticleSwitch(this, v5, 0, v7);
}


bool BattleActorControl__isChocoServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.displayType == 3;
}


bool BattleActorControl__isFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && !actiondata->fields.three && !actiondata->fields.pair;
}


bool BattleActorControl__isMonsterServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C2D6EC(this, method);
  return battleSvtData->fields.svtType == 4;
}


bool BattleActorControl__isNoVoice(BattleActorControl_o *this, const MethodInfo *method)
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
        LOBYTE(battleSvtData) = BattleServantData__IsNoVoice(battleSvtData, 0);
    }
  }
  return (char)battleSvtData;
}


bool BattleActorControl__isPairFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && actiondata->fields.pair;
}


bool BattleActorControl__isShadowServant(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.displayType == 2;
}


bool BattleActorControl__isSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  struct PlayMakerFSM_array *motionFSM; // x20
  il2cpp_array_size_t max_length; // x8
  bool v6; // w21
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x19

  v3 = this;
  if ( (byte_4C2A5BF & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_13170/*"SummonEndFlag"*/);
    byte_4C2A5BF = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1C2D6EC(this, method);
  max_length = motionFSM->max_length;
  v6 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C2D6F4(this, method, v2);
      v8 = (UnityEngine_Object_o *)motionFSM->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v8, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v8 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v8, 0);
        if ( !this )
          goto LABEL_17;
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13170/*"SummonEndFlag"*/,
                                         0);
        if ( this )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmBool__get_Value(
                                           (HutongGames_PlayMaker_FsmBool_o *)this,
                                           0);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v6;
        }
      }
      LODWORD(max_length) = motionFSM->max_length;
      v6 = (__int64)++v7 < (int)max_length;
    }
    while ( (__int64)v7 < (int)max_length );
  }
  return v6;
}


bool BattleActorControl__isThree(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && !actiondata->fields.flash && actiondata->fields.three;
}


bool BattleActorControl__isThreeFlash(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8

  actiondata = this->fields.actiondata;
  return actiondata && actiondata->fields.flash && actiondata->fields.three;
}


void BattleActorControl__loadDressServant(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = BattleActorControl__colloadDressServant(this, flg, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_1C2D6EC(this, method);
}


void BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void BattleActorControl__motion_BackStep(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // [xsp+4h] [xbp-7Ch] BYREF
  float v44; // [xsp+8h] [xbp-78h] BYREF
  float v45; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4C2A5F7 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_moveStep__);
    sub_1C2D490(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_12356/*"STEP_START"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    sub_1C2D490(&StringLiteral_23689/*"step_back"*/);
    byte_4C2A5F7 = 1;
  }
  this->fields.targetObject = target;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v19, v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v21, v22);
  BattleActorControl__playAnimation_46911212(this, (System_String_o *)StringLiteral_23689/*"step_back"*/, 0, v23);
  v24 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0);
  if ( !v24 )
    sub_1C2D6EC(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19965/*"hight"*/,
    v33,
    0);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_24049/*"time"*/,
    v37,
    0);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22718/*"pos"*/,
    v41,
    0);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12356/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
}


void BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4C2A5F9 & 1) == 0 )
  {
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A5F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63205768(gameObject, 0);
}


void BattleActorControl__motion_Jump(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // [xsp+4h] [xbp-7Ch] BYREF
  float v44; // [xsp+8h] [xbp-78h] BYREF
  float v45; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4C2A5F4 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_moveJump__);
    sub_1C2D490(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_8168/*"JUMP_UP"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_21082/*"jump"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    byte_4C2A5F4 = 1;
  }
  this->fields.targetObject = target;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v19, v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v21, v22);
  BattleActorControl__playAnimation_46911212(this, (System_String_o *)StringLiteral_21082/*"jump"*/, 0, v23);
  v24 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0);
  if ( !v24 )
    sub_1C2D6EC(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19965/*"hight"*/,
    v33,
    0);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_24049/*"time"*/,
    v37,
    0);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22718/*"pos"*/,
    v41,
    0);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8168/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
}


void BattleActorControl__motion_Step(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // [xsp+4h] [xbp-7Ch] BYREF
  float v44; // [xsp+8h] [xbp-78h] BYREF
  float v45; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4C2A5F6 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_moveStep__);
    sub_1C2D490(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_12356/*"STEP_START"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    sub_1C2D490(&StringLiteral_23690/*"step_front"*/);
    byte_4C2A5F6 = 1;
  }
  this->fields.targetObject = target;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v19, v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v21, v22);
  BattleActorControl__playAnimation_46911212(this, (System_String_o *)StringLiteral_23690/*"step_front"*/, 0, v23);
  v24 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0);
  if ( !v24 )
    sub_1C2D6EC(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19965/*"hight"*/,
    v33,
    0);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_24049/*"time"*/,
    v37,
    0);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22718/*"pos"*/,
    v41,
    0);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12356/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
}


void BattleActorControl__motion_StepWait(
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  __int64 v23; // x21
  BattleActorControl_EndCallEvent_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  Il2CppObject *v32; // x0
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x3
  __int64 v42; // x20
  BattleActorControl_EndCallEvent_o *v43; // x21
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  int32_t v48; // [xsp+4h] [xbp-7Ch] BYREF
  float v49; // [xsp+8h] [xbp-78h] BYREF
  float v50; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4C2A5F5 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_moveStep__);
    sub_1C2D490(&Method_BattleActorControl_playAnimation__);
    sub_1C2D490(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_12356/*"STEP_START"*/);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    sub_1C2D490(&StringLiteral_22130/*"name"*/);
    sub_1C2D490(&StringLiteral_23690/*"step_front"*/);
    sub_1C2D490(&StringLiteral_12355/*"STEP_END_02"*/);
    byte_4C2A5F5 = 1;
  }
  this->fields.targetObject = target;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v16, v17);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v18, v19);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v20, v21);
  BattleActorControl__playAnimation_46911212(this, (System_String_o *)StringLiteral_23690/*"step_front"*/, 0, v22);
  v23 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v23, 0);
  v24 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v24, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0);
  if ( !v23 )
    goto LABEL_6;
  *(_QWORD *)(v23 + 16) = v24;
  sub_1C2D434((CGThumbnailListItem_o *)(v23 + 16), (int32_t)v24, v27, v28);
  v50 = hight;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v50, v29, v30, v31);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v23,
    (System_String_o *)StringLiteral_19965/*"hight"*/,
    v32,
    0);
  v49 = time;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v49, v33, v34, v35);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v23,
    (System_String_o *)StringLiteral_24049/*"time"*/,
    v36,
    0);
  v48 = pos;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v48, v37, v38, v39);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v23,
    (System_String_o *)StringLiteral_22718/*"pos"*/,
    v40,
    0);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12356/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v23,
    v41);
  v42 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v42, 0);
  v43 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v43, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0);
  if ( !v42 )
LABEL_6:
    sub_1C2D6EC(v25, v26);
  *(_QWORD *)(v42 + 16) = v43;
  sub_1C2D434((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v42,
    (System_String_o *)StringLiteral_22130/*"name"*/,
    (Il2CppObject *)StringLiteral_24695/*"wait"*/,
    0);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12355/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v42,
    v46);
}


void BattleActorControl__motion_TreasureArms(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Il2CppObject *v33; // x0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  const MethodInfo *v42; // x3
  int32_t v43; // [xsp+4h] [xbp-7Ch] BYREF
  float v44; // [xsp+8h] [xbp-78h] BYREF
  float v45; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4C2A5F8 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_moveStep__);
    sub_1C2D490(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24177/*"treasure_arms"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_12356/*"STEP_START"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    byte_4C2A5F8 = 1;
  }
  this->fields.targetObject = target;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.targetObject, (int32_t)target, pos, (const MethodInfo *)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallObject, (int32_t)sendEventCallObject, v19, v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endmotionCallMethod, (int32_t)sendEventCallMethod, v21, v22);
  BattleActorControl__playAnimation_46911212(this, (System_String_o *)StringLiteral_24177/*"treasure_arms"*/, 0, v23);
  v24 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0);
  if ( !v24 )
    sub_1C2D6EC(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1C2D434((CGThumbnailListItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19965/*"hight"*/,
    v33,
    0);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_24049/*"time"*/,
    v37,
    0);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22718/*"pos"*/,
    v41,
    0);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12356/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
}


void BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v5; // x20
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  __int64 v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x0
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x0
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  __int64 v22; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v24; // [xsp+8h] [xbp-68h] BYREF
  int v25; // [xsp+Ch] [xbp-64h] BYREF
  char v26[4]; // [xsp+18h] [xbp-58h] BYREF
  int v27; // [xsp+1Ch] [xbp-54h] BYREF

  if ( (byte_4C2A5FF & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A5FF = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v5, 0);
  v27 = 0;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v27, v6, v7, v8);
  if ( !v5 )
    sub_1C2D6EC(v9, v10);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_24943/*"y"*/,
    v9,
    v5->klass->vtable._22_Add.method);
  v26[0] = 1;
  v14 = j_il2cpp_value_box_0(bool_TypeInfo, v26, v11, v12, v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_20959/*"islocal"*/,
    v14,
    v5->klass->vtable._22_Add.method);
  v25 = 0;
  v18 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v25, v15, v16, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_18742/*"easetype"*/,
    v18,
    v5->klass->vtable._22_Add.method);
  v24 = time;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v24, v19, v20, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v5->klass->vtable._22_Add.methodPtr)(
    v5,
    StringLiteral_24049/*"time"*/,
    v22,
    v5->klass->vtable._22_Add.method);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(actorObject, v5, 0);
}


void BattleActorControl__moveJump(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x2
  __int64 v10; // x3
  int klass; // s8
  __int64 v12; // x2
  __int64 v13; // x3
  float v14; // s9
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  BattleActorControl_o *v17; // x0
  long double v18; // q0
  float v19; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4C2A5FB & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    byte_4C2A5FB = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
               v3,
               StringLiteral_19965/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
               v3,
               StringLiteral_24049/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                                         v3,
                                         StringLiteral_22718/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        !v5) )
  {
LABEL_12:
    sub_1C2D6EC(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1C2D9AC(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v7, v8);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1C2D9AC(v6);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6, float_TypeInfo, v9, v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = sub_1C2D9AC(v3);
    goto LABEL_11;
  }
  v14 = *(float *)&this->klass;
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v12, v13);
  v17 = v4;
  LODWORD(v18) = klass;
  v19 = v14;
LABEL_11:
  BattleActorControl__moveJump_46923904(v17, *(float *)&v18, v19, v15, v16);
}


void BattleActorControl__moveJump_46923904(
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
  BattleActorControl__moveUp_46922776(this, hight, time, v9);
}


void BattleActorControl__movePos(
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
  bool v28; // w0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x19
  float v31; // [xsp+8h] [xbp-78h] BYREF
  int v32; // [xsp+Ch] [xbp-74h] BYREF
  UnityEngine_Vector3_o TargetObjectVec; // [xsp+10h] [xbp-70h] BYREF

  if ( (byte_4C2A5FC & 1) == 0 )
  {
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22411/*"oncompleteparams"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_22719/*"position"*/);
    sub_1C2D490(&StringLiteral_19007/*"endMotion"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A5FC = 1;
  }
  v13 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v13, 0);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v14);
  v18 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec, v15, v16, v17);
  if ( !v13 )
    sub_1C2D6EC(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_22719/*"position"*/,
    v18,
    v13->klass->vtable._22_Add.method);
  v32 = 1;
  v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_18742/*"easetype"*/,
    v23,
    v13->klass->vtable._22_Add.method);
  v31 = time;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
    v13,
    StringLiteral_24049/*"time"*/,
    v27,
    v13->klass->vtable._22_Add.method);
  if ( endcall )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( callbackEvent && v28 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
        v13,
        StringLiteral_22412/*"oncompletetarget"*/,
        callbackObject,
        v13->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
        v13,
        StringLiteral_22410/*"oncomplete"*/,
        callbackEvent,
        v13->klass->vtable._22_Add.method);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
        v13,
        StringLiteral_22412/*"oncompletetarget"*/,
        gameObject,
        v13->klass->vtable._22_Add.method);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
        v13,
        StringLiteral_22410/*"oncomplete"*/,
        StringLiteral_19007/*"endMotion"*/,
        v13->klass->vtable._22_Add.method);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
      v13,
      StringLiteral_22411/*"oncompleteparams"*/,
      endcall,
      v13->klass->vtable._22_Add.method);
  }
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(v30, v13, 0);
}


void BattleActorControl__moveStep(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x21
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x2
  __int64 v10; // x3
  int klass; // s8
  __int64 v12; // x2
  __int64 v13; // x3
  float v14; // s9
  int32_t v15; // w1
  const MethodInfo *v16; // x2
  BattleActorControl_o *v17; // x0
  long double v18; // q0
  float v19; // s1

  v3 = table;
  v4 = this;
  if ( (byte_4C2A5FA & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_POS_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22718/*"pos"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    byte_4C2A5FA = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
               v3,
               StringLiteral_19965/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
               v3,
               StringLiteral_24049/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                                         v3,
                                         StringLiteral_22718/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 768LL)),
        !v5) )
  {
LABEL_12:
    sub_1C2D6EC(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1C2D9AC(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v7, v8);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1C2D9AC(v6);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6, float_TypeInfo, v9, v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = sub_1C2D9AC(v3);
    goto LABEL_11;
  }
  v14 = *(float *)&this->klass;
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v12, v13);
  v17 = v4;
  LODWORD(v18) = klass;
  v19 = v14;
LABEL_11:
  BattleActorControl__moveStep_46921896(v17, *(float *)&v18, v19, v15, v16);
}


void BattleActorControl__moveStep_46921896(
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
  BattleActorControl__moveUp_46922776(this, hight, time, v9);
}


void BattleActorControl__moveUp(
        BattleActorControl_o *this,
        System_Collections_Hashtable_o *table,
        const MethodInfo *method)
{
  void *v3; // x20
  BattleActorControl_o *v4; // x19
  __int64 v5; // x21
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x2
  __int64 v9; // x3
  float v10; // s8
  float v11; // s1
  const MethodInfo *v12; // x1
  BattleActorControl_o *v13; // x0
  const MethodInfo *v14; // x1
  long double v15; // q0

  v3 = table;
  v4 = this;
  if ( (byte_4C2A5FD & 1) == 0 )
  {
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_19965/*"hight"*/);
    byte_4C2A5FD = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
         v3,
         StringLiteral_19965/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 768LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 760LL))(
                                   v3,
                                   StringLiteral_24049/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 768LL));
  if ( !v5 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1C2D9AC(v5);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v6, v7);
  if ( !v3 )
LABEL_9:
    sub_1C2D6EC(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v10 = *(float *)&this->klass;
    v11 = *(float *)j_il2cpp_object_unbox_0(v3, float_TypeInfo, v8, v9);
    BattleActorControl__moveUp_46922776(v4, v10, v11, v12);
    return;
  }
LABEL_11:
  v15 = sub_1C2D9AC(v3);
  BattleActorControl__moveDown(v13, *(float *)&v15, v14);
}


void BattleActorControl__moveUp_46922776(BattleActorControl_o *this, float hight, float time, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v7; // x20
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x0
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x0
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  __int64 v29; // x0
  UnityEngine_GameObject_o *actorObject; // x19
  float v31; // [xsp+Ch] [xbp-84h] BYREF
  float v32; // [xsp+10h] [xbp-80h] BYREF
  int v33; // [xsp+14h] [xbp-7Ch] BYREF
  char v34[4]; // [xsp+18h] [xbp-78h] BYREF
  float v35; // [xsp+1Ch] [xbp-74h] BYREF

  if ( (byte_4C2A5FE & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&iTween_EaseType_TypeInfo);
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&StringLiteral_18742/*"easetype"*/);
    sub_1C2D490(&StringLiteral_24049/*"time"*/);
    sub_1C2D490(&StringLiteral_22411/*"oncompleteparams"*/);
    sub_1C2D490(&StringLiteral_22412/*"oncompletetarget"*/);
    sub_1C2D490(&StringLiteral_24943/*"y"*/);
    sub_1C2D490(&StringLiteral_20959/*"islocal"*/);
    sub_1C2D490(&StringLiteral_22410/*"oncomplete"*/);
    sub_1C2D490(&StringLiteral_21645/*"moveDown"*/);
    sub_1C2D490(&iTween_TypeInfo);
    byte_4C2A5FE = 1;
  }
  v7 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64822836(v7, 0);
  v35 = hight;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v8, v9, v10);
  if ( !v7 )
    sub_1C2D6EC(v11, v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_24943/*"y"*/,
    v11,
    v7->klass->vtable._22_Add.method);
  v34[0] = 1;
  v16 = j_il2cpp_value_box_0(bool_TypeInfo, v34, v13, v14, v15);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_20959/*"islocal"*/,
    v16,
    v7->klass->vtable._22_Add.method);
  v33 = 1;
  v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v33, v17, v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_18742/*"easetype"*/,
    v20,
    v7->klass->vtable._22_Add.method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_22412/*"oncompletetarget"*/,
    gameObject,
    v7->klass->vtable._22_Add.method);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_22410/*"oncomplete"*/,
    StringLiteral_21645/*"moveDown"*/,
    v7->klass->vtable._22_Add.method);
  v32 = time;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v32, v22, v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_22411/*"oncompleteparams"*/,
    v25,
    v7->klass->vtable._22_Add.method);
  v31 = time;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v26, v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, const MethodInfo *))v7->klass->vtable._22_Add.methodPtr)(
    v7,
    StringLiteral_24049/*"time"*/,
    v29,
    v7->klass->vtable._22_Add.method);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_63095428(actorObject, v7, 0);
}


void BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4C2A61C & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_skipVoice__);
    sub_1C2D490(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4C2A61C = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C2D6DC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0),
          !statusPerf) )
    {
      sub_1C2D6EC(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0);
  }
}


void BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattlePerformanceStatus_o *v4; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2A624 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_1C2D490(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4C2A624 = 1;
  }
  monitor = v2[10].monitor;
  if ( !monitor
    || (v4 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 36),
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C2D6DC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0),
        !v4) )
  {
    sub_1C2D6EC(this, method);
  }
  BattlePerformanceStatus__setTouchOff(v4, v5, 0);
}


void BattleActorControl__onTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4C2A61B & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_skipVoice__);
    sub_1C2D490(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4C2A61B = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C2D6DC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0),
          !statusPerf) )
    {
      sub_1C2D6EC(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v7, 0);
  }
}


void BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattlePerformanceStatus_o *v4; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4C2A623 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_1C2D490(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4C2A623 = 1;
  }
  monitor = v2[10].monitor;
  if ( !monitor
    || (v4 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 36),
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C2D6DC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0),
        !v4) )
  {
    sub_1C2D6EC(this, method);
  }
  BattlePerformanceStatus__setTouchOn(v4, v5, 0);
}


void BattleActorControl__playAnimation(
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
  if ( (byte_4C2A5E8 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_22130/*"name"*/);
    byte_4C2A5E8 = 1;
  }
  if ( !table )
    sub_1C2D6EC(this, table);
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, const MethodInfo *))table->klass->vtable._28_get_Item.methodPtr)(
                            table,
                            StringLiteral_22130/*"name"*/,
                            table->klass->vtable._28_get_Item.method);
  if ( v5 && v5->klass != string_TypeInfo )
  {
    sub_1C2D9AC(v5);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v7, v8, v9, v10);
  }
  else
  {
    BattleActorControl__playAnimation_46911212(v4, v5, 0, v6);
  }
}


void BattleActorControl__playAnimationFtag(
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

  if ( (byte_4C2A5EA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1775/*"@playAnim\n =>{0},{1}"*/);
    byte_4C2A5EA = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_63499156((System_String_o *)StringLiteral_1775/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1C2D6EC(0, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0);
}


void BattleActorControl__playAnimation_46911212(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isDontOverwrite,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x3
  System_String_o *v8; // x20
  __int64 v9; // x1
  BattleFBXComponent_o *fbxcomponent; // x0
  Il2CppObject *ComponentInChildren_object; // x21
  UnityEngine_TrackedReference_o *Item; // x0
  struct BattleFBXComponent_o *v13; // x19
  float length; // s0
  float v15; // s0
  Il2CppObject *v16; // x21
  struct BattleFBXComponent_o *v17; // x22
  BattleFBXComponent_c *klass; // x8
  BattleFBXComponent_o *v19; // x19
  __int64 v20; // x9
  SimpleAnimation_State_c **p_offset; // x10
  __int64 v22; // x0
  float v23; // s0
  float v24; // s0

  if ( (byte_4C2A5E9 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&SimpleAnimation_State_TypeInfo);
    sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    sub_1C2D490(&StringLiteral_1774/*"@playAnim\n =>{0}"*/);
    byte_4C2A5E9 = 1;
  }
  v8 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v8 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v8, 1, v7);
  System_String__Format((System_String_o *)StringLiteral_1774/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v8, 0);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_33;
  BattleFBXComponent__playAnimation(fbxcomponent, v8, 0);
  if ( System_String__op_Equality(v8, (System_String_o *)StringLiteral_24695/*"wait"*/, 0) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_33;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)fbxcomponent,
                                   (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
    {
      if ( !ComponentInChildren_object )
        goto LABEL_33;
      Item = (UnityEngine_TrackedReference_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
                                                 v8,
                                                 0);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0, 0) )
      {
        v13 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
                                                 v8,
                                                 0);
        if ( fbxcomponent )
        {
          length = UnityEngine_AnimationState__get_length((UnityEngine_AnimationState_o *)fbxcomponent, 0);
          v15 = UnityEngine_Random__Range(0.0, length, 0);
          if ( v13 )
          {
            v13->fields.currentAnimTime = v15;
            return;
          }
        }
LABEL_33:
        sub_1C2D6EC(fbxcomponent, v9);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_33;
      v16 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)fbxcomponent,
              (const MethodInfo_3126134 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_33;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v16, v8, 0) )
        {
          v17 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v16, v8, 0);
          if ( !fbxcomponent )
            goto LABEL_33;
          klass = fbxcomponent->klass;
          v19 = fbxcomponent;
          v20 = *(unsigned __int16 *)&fbxcomponent->klass->_2.rank;
          if ( *(_WORD *)&fbxcomponent->klass->_2.rank )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v20;
              p_offset += 2;
              if ( !v20 )
                goto LABEL_27;
            }
            v22 = (__int64)(&klass[1]._1.nestedTypes + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_27:
            v22 = sub_1C7DCA8(fbxcomponent, SimpleAnimation_State_TypeInfo, 14);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v22)(
                                                   v19,
                                                   *(_QWORD *)(v22 + 8));
          if ( !fbxcomponent )
            goto LABEL_33;
          v23 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0);
          v24 = UnityEngine_Random__Range(0.0, v23, 0);
          if ( !v17 )
            goto LABEL_33;
          v17->fields.currentAnimTime = v24;
        }
      }
    }
  }
}


void BattleActorControl__playBattleActionData(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  BattleActorControl_ActorMotionActiveCheck_o *v9; // x21
  System_Action_object__o *v10; // x22
  BattleCallBack_T__o *v11; // x20

  if ( (byte_4C2A5D3 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleActionData__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_playBattleActionDataLocal__);
    sub_1C2D490(&Method_BattleCallBack_BattleActionData___ctor__);
    sub_1C2D490(&BattleCallBack_BattleActionData__TypeInfo);
    byte_4C2A5D3 = 1;
  }
  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v5 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v5, 0) )
  {
    v9 = BattleActorControl__get_CheckMotion(this, v7);
    v10 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_playBattleActionDataLocal__, 0);
    v11 = (BattleCallBack_T__o *)sub_1C2D6DC(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v11,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v10,
      (const MethodInfo_32FE2C0 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v9 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v9, (BattleCallBackBase_o *)v11, 0);
      return;
    }
LABEL_8:
    sub_1C2D6EC(v5, v6);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v8);
}


void BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v7; // x2
  System_String_o *motionname; // x1
  __int64 actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t type; // w21
  BattleActionData_c *v16; // x0
  const MethodInfo *v17; // x2
  BattleActionData_o *v18; // x8
  BattleActionData_o *v19; // x8
  int32_t *p_motionId; // x0
  int32_t v21; // w21
  System_String_o *v22; // x0
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v24; // x3
  struct BattlePerformance_o *performance; // x8
  __int64 v26; // x2
  int v27; // w8
  __int64 v28; // x21
  unsigned int v29; // w23
  BattleServantData_o *v30; // x22
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v32; // x8
  const MethodInfo *v33; // x2
  BattleActorControl_o *v34; // x22
  System_ValueTuple_int__string__o v35; // kr10_16
  const MethodInfo *v36; // x3
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v38; // x8
  struct BattlePerformance_o *v39; // x9
  struct BattleServantData_o *v40; // x8
  BattlePerformance_o *v41; // x8
  int32_t v42; // w19
  Il2CppObject *value; // [xsp+8h] [xbp-58h] BYREF
  System_Int32_array *npcIds; // [xsp+10h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C2A5D4 & 1) == 0 )
  {
    sub_1C2D490(&Method_ActionExtensions_Call_BattleActorControl___);
    sub_1C2D490(&BattleActionData_TypeInfo);
    sub_1C2D490(&BattleActorControl_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C2D490(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TryGetValue__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_8753/*"MOTION_FOLLOW_BACK_STEP"*/);
    sub_1C2D490(&StringLiteral_8733/*"MOTION_"*/);
    byte_4C2A5D4 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  npcIds = 0;
  entity = 0;
  value = 0;
  this->fields.actiondata = badata;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actiondata, (int32_t)badata, (int32_t)method, v3);
  BattleActorControl__setActionData(this, this->fields.actiondata, v7);
  actiondata = (__int64)this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_73;
  ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)actiondata, 0);
  this->fields.myShiftData = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.myShiftData, 0, v11, v12);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.myShiftData, (int32_t)ShiftServant, v13, v14);
  }
  if ( !badata )
    goto LABEL_73;
  if ( badata->fields.noOperation )
  {
    actiondata = (__int64)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0);
      return;
    }
    goto LABEL_73;
  }
  if ( !*p_actiondata )
    goto LABEL_73;
  type = (*p_actiondata)->fields.type;
  v16 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v16 = BattleActionData_TypeInfo;
  }
  if ( type == v16->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_73;
  if ( BattleActionData__isCommandAttack((BattleActionData_o *)actiondata, 0) )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_73;
  if ( BattleActionData__isCommonEnemyAttack((BattleActionData_o *)actiondata, 0) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, v14);
  actiondata = (__int64)this->fields.performance;
  if ( !actiondata
    || (actiondata = (__int64)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0)) == 0
    || (actiondata = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)actiondata + 456LL))(
                       actiondata,
                       *(_QWORD *)(*(_QWORD *)actiondata + 464LL)),
        (v18 = *p_actiondata) == 0) )
  {
LABEL_73:
    sub_1C2D6EC(actiondata, motionname);
  }
  motionname = v18->fields.motionname;
  if ( motionname )
  {
    if ( !v18->fields.IsVanishSkill )
      goto LABEL_37;
LABEL_35:
    BattleActorControl__SendMotionEventForVanishSkill(this, motionname, v17);
    goto LABEL_38;
  }
  actiondata = (__int64)this->fields.noPlaymakerMotionActionDict;
  if ( !actiondata )
    goto LABEL_73;
  actiondata = System_Collections_Generic_Dictionary_int__object___TryGetValue(
                 (System_Collections_Generic_Dictionary_int__object__o *)actiondata,
                 v18->fields.motionId,
                 &value,
                 (const MethodInfo_33E2A08 *)Method_System_Collections_Generic_Dictionary_int__Action_BattleActorControl___TryGetValue__);
  if ( (actiondata & 1) == 0 )
  {
    v19 = *p_actiondata;
    if ( !*p_actiondata )
      goto LABEL_73;
    p_motionId = &v19->fields.motionId;
    if ( !v19->fields.IsVanishSkill )
    {
      v22 = System_Int32__ToString((int32_t)p_motionId, 0);
      motionname = System_String__Concat_63457864((System_String_o *)StringLiteral_8733/*"MOTION_"*/, v22, 0);
LABEL_37:
      MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, motionname, v17);
      this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
      BattleActorControl__sendEventFSM_46896280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v24);
      goto LABEL_38;
    }
    v21 = *p_motionId;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    motionname = BattleActorControl__MotionIdStr(v21, (const MethodInfo *)motionname);
    goto LABEL_35;
  }
  ActionExtensions__Call_object_(
    (System_Action_T__o *)value,
    (Il2CppObject *)this,
    (const MethodInfo_301B240 *)Method_ActionExtensions_Call_BattleActorControl___);
LABEL_38:
  actiondata = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !actiondata )
    goto LABEL_73;
  actiondata = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)actiondata,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !*p_actiondata || !actiondata )
    goto LABEL_73;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)actiondata,
         &entity,
         (*p_actiondata)->fields.treasureDvcId,
         (const MethodInfo_3387DE4 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    actiondata = (__int64)entity;
    if ( !entity )
      goto LABEL_73;
    actiondata = TreasureDvcEntity__TryGetWithBackStepNpcIds((TreasureDvcEntity_o *)entity, &npcIds, 0);
    if ( (actiondata & 1) != 0 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_73;
      actiondata = (__int64)performance->fields.data;
      if ( !actiondata )
        goto LABEL_73;
      actiondata = (__int64)BattleData__getFieldServantList((BattleData_o *)actiondata, 0, 0);
      if ( !actiondata )
        goto LABEL_73;
      v27 = *(_DWORD *)(actiondata + 24);
      v28 = actiondata;
      if ( v27 >= 1 )
      {
        v29 = 0;
        do
        {
          if ( v29 >= v27 )
            sub_1C2D6F4(actiondata, motionname, v26);
          v30 = *(BattleServantData_o **)(v28 + 8LL * (int)v29 + 32);
          if ( !v30 )
            goto LABEL_73;
          deckSvt = v30->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_73;
          if ( LODWORD(deckSvt->fields.dropInfos) )
          {
            if ( v30->fields.uniqueId != this->fields.uniqueID )
            {
              actiondata = BattleServantData__isAlive(v30, 0, 0);
              if ( (actiondata & 1) != 0 )
              {
                v32 = v30->fields.deckSvt;
                if ( !v32 )
                  goto LABEL_73;
                actiondata = System_Linq_Enumerable__Contains_int_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)npcIds,
                               (int32_t)v32->fields.dropInfos,
                               (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
                if ( (actiondata & 1) != 0 )
                {
                  actiondata = (__int64)this->fields.performance;
                  if ( !actiondata )
                    goto LABEL_73;
                  actiondata = (__int64)BattlePerformance__getServantActor(
                                          (BattlePerformance_o *)actiondata,
                                          v30->fields.uniqueId,
                                          0);
                  if ( !actiondata )
                    goto LABEL_73;
                  v34 = (BattleActorControl_o *)actiondata;
                  v35 = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                          (BattleActorControl_o *)actiondata,
                          (System_String_o *)StringLiteral_8753/*"MOTION_FOLLOW_BACK_STEP"*/,
                          v33);
                  v34->fields.actindex = v35.fields.Item1;
                  BattleActorControl__sendEventFSM_46896280(v34, v35.fields.Item2, 0, v36);
                }
              }
            }
          }
          v27 = *(_DWORD *)(v28 + 24);
        }
        while ( (int)++v29 < v27 );
      }
    }
  }
  if ( *p_actiondata )
  {
    if ( BattleActionData__isDeadMotion(*p_actiondata, 0) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        actiondata = BattleServantData__playDead(battleSvtData, 0);
        v38 = this->fields.battleSvtData;
        if ( !v38 )
          goto LABEL_73;
        actiondata = (__int64)v38->fields.deckSvt;
        if ( !actiondata )
          goto LABEL_73;
        actiondata = BattleDeckServantData__IsWaitHpGaugeHideUntilDeadMotion((BattleDeckServantData_o *)actiondata, 0);
        if ( (actiondata & 1) != 0 )
        {
          v39 = this->fields.performance;
          if ( v39 )
          {
            v40 = this->fields.battleSvtData;
            if ( v40 )
            {
              actiondata = (__int64)v39->fields.data;
              if ( actiondata )
              {
                actiondata = BattleData__getServantIndex(
                               (BattleData_o *)actiondata,
                               v40->fields.isEnemy,
                               v40->fields.uniqueId,
                               0);
                v41 = this->fields.performance;
                if ( v41 )
                {
                  v42 = actiondata;
                  actiondata = (__int64)BattlePerformance__get_EnemyPerf(v41, 0);
                  if ( actiondata )
                  {
                    BattlePerformanceEnemy__SetActiveParameterView((BattlePerformanceEnemy_o *)actiondata, v42, 0, 0);
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


void BattleActorControl__playCallAnimation(
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4C2A5E7 & 1) == 0 )
  {
    sub_1C2D490(&Method_BattleActorControl_sendEventFSM__);
    sub_1C2D490(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C2D490(&BattleActorControl_EventClass_TypeInfo);
    sub_1C2D490(&StringLiteral_1776/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/);
    sub_1C2D490(&StringLiteral_19112/*"event"*/);
    byte_4C2A5E7 = 1;
  }
  System_String__Format_63499224(
    (System_String_o *)StringLiteral_1776/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0);
  v9 = sub_1C2D6DC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v9, 0);
  v10 = (BattleActorControl_EndCallEvent_o *)sub_1C2D6DC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0);
  if ( !v9 )
    sub_1C2D6EC(v11, v12);
  *(_QWORD *)(v9 + 16) = v10;
  sub_1C2D434((CGThumbnailListItem_o *)(v9 + 16), (int32_t)v10, v13, v14);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v9,
    (System_String_o *)StringLiteral_19112/*"event"*/,
    (Il2CppObject *)endevent,
    0);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v9, v15);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v16);
  else
    BattleActorControl__playAnimation_46911212(this, animname, 0, v16);
}


void BattleActorControl__playMotion(BattleActorControl_o *this, System_String_o *name, const MethodInfo *method)
{
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v5; // x3

  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, name, method);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  BattleActorControl__sendEventFSM_46896280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v5);
}


void BattleActorControl__playNoActionDataMotion(
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
    sub_1C2D6EC(0, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actiondata, 0, v9, v10);
  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, name, v11);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  BattleActorControl__sendEventFSM_46896280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 1, v13);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *BattleActorControl__playSideEffect(
        BattleActorControl_o *this,
        System_String_o *effectname,
        UnityEngine_Vector3_o vec3,
        bool sideflip,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  __int64 v13; // x1
  bool v14; // w8
  UnityEngine_GameObject_o *result; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v17; // x23
  UnityEngine_GameObject_o *v18; // x23
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_4C2A5CC & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
    sub_1C2D490(&StringLiteral_16186/*"_ENEMY"*/);
    byte_4C2A5CC = 1;
  }
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 1, (const MethodInfo *)sideflip);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadEffect(effectname, WeaponGroup, 0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality(Manager__loadEffect, 0, 0);
  result = 0;
  if ( !v14 )
  {
    if ( Manager__loadEffect )
    {
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Manager__loadEffect, 0);
      result = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( result )
      {
        result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(result, 0);
        if ( transform )
        {
          UnityEngine_Transform__set_parent(transform, (UnityEngine_Transform_o *)result, 0);
          result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                 0);
          v17 = result;
          if ( !byte_4C20DA1 )
          {
            result = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
            byte_4C20DA1 = 1;
          }
          if ( v17 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v17,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0);
            result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                   0);
            v18 = result;
            if ( !byte_4C20DA6 )
            {
              result = (UnityEngine_GameObject_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
              byte_4C20DA6 = 1;
            }
            if ( v18 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v18,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0, 0);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0);
                if ( result )
                {
                  v20.fields.x = -x;
                  v20.fields.y = y;
                  v20.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v20, 0);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_29;
                    if ( System_String__Equals_63493168(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16186/*"_ENEMY"*/,
                           0) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0);
                      if ( !result )
                        goto LABEL_29;
                      v21.fields.x = x;
                      v21.fields.y = y;
                      v21.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v21, 0);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0);
                      if ( !result )
                        goto LABEL_29;
                      UnityEngine_Transform__Rotate_71188380((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0);
                    }
                  }
                  result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                         (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                         0);
                  performance = this->fields.performance;
                  if ( performance && result )
                  {
                    UnityEngine_Transform__set_parent(
                      (UnityEngine_Transform_o *)result,
                      performance->fields.root_field,
                      0);
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
    sub_1C2D6EC(result, v13);
  }
  return result;
}


void BattleActorControl__playVoice(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  SePlayer_o *v20; // x19
  BattleActorControl_c *v21; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_4C2A5DD & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_TypeInfo);
    sub_1C2D490(&Voice_TypeInfo);
    byte_4C2A5DD = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( Voice__IsDeadVoice(type, 0) )
  {
    v11 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v11 = BattleActorControl_TypeInfo;
    }
    prevDeadVoice = v11->static_fields->prevDeadVoice;
    if ( !prevDeadVoice )
      goto LABEL_15;
    if ( v11->_2.cctor_finished
      || (j_il2cpp_runtime_class_init_0(v11),
          v11 = BattleActorControl_TypeInfo,
          (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0) )
    {
      if ( prevDeadVoice->fields.isStop )
      {
LABEL_15:
        v14 = 1;
        goto LABEL_17;
      }
      if ( v11->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v11),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0);
        goto LABEL_15;
      }
    }
    sub_1C2D6EC(v11, v13);
  }
  v14 = 0;
LABEL_17:
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0);
  v17 = BattleActorControl__playVoice_46907972(this, FileName, volume, callback, isSaveVoicePlayed, v16);
  if ( v14 )
  {
    v20 = v17;
    v21 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v21 = BattleActorControl_TypeInfo;
    }
    static_fields = v21->static_fields;
    static_fields->prevDeadVoice = v20;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->prevDeadVoice, (int32_t)v20, v18, v19);
  }
}


void BattleActorControl__playVoiceNp(
        BattleActorControl_o *this,
        int32_t type,
        float volume,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *FileName; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4C2A5E0 & 1) == 0 )
  {
    sub_1C2D490(&Voice_TypeInfo);
    byte_4C2A5E0 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0);
  BattleActorControl__playVoiceNp_46908900(this, FileName, volume, callback, v10);
}


void BattleActorControl__playVoiceNp_46908900(
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

  if ( (byte_4C2A5E1 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5E1 = 1;
  }
  if ( BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId) )
  {
    ActionExtensions__Call(callback, 0);
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
        || (svtId = BattleServantData__getSvtId(battleSvtData, 0),
            battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v15),
            (v16 = this->fields.battleSvtData) == 0) )
      {
        sub_1C2D6EC(battleSvtData, v9);
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
      0);
  }
}


SePlayer_o *BattleActorControl__playVoiceSe(
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

  if ( (byte_4C2A5E3 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A5E3 = 1;
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
      || (v15 = BattleServantData__getSvtId(battleSvtData, 0),
          battleSvtData = (BattleServantData_o *)BattleActorControl__getLimitCount(this, v16),
          (v17 = this->fields.battleSvtData) == 0) )
    {
      sub_1C2D6EC(battleSvtData, fileName);
    }
    v18 = (int)battleSvtData;
    v19 = v17->fields.overwriteSvtVoiceId;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    v11 = v15;
    v12 = v18;
    v13 = v19;
  }
  return ServantAssetLoadManager__playBattleVoiceSe(v11, v12, v13, fileName, volume, 0);
}


SePlayer_o *BattleActorControl__playVoice_46907972(
        BattleActorControl_o *this,
        System_String_o *voiceTypeId,
        float volume,
        System_Action_o *callback,
        bool isSaveVoicePlayed,
        const MethodInfo *method)
{
  BattleData_o *isNoVoice; // x0
  __int64 v12; // x1
  struct BattlePerformance_o *performance; // x8
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  System_String_array *v17; // x22
  const MethodInfo *v18; // x2
  struct BattleActionData_ShiftServant_o *myShiftData; // x8
  int32_t limit; // w23
  int32_t v21; // w24
  int32_t v22; // w22
  int32_t uniqueID; // w21
  int32_t v24; // w0
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t SvtId; // w22
  const MethodInfo *v28; // x1
  struct BattleServantData_o *battleSvtData; // x8
  int32_t v30; // w23
  int32_t overwriteSvtVoiceId; // w24

  if ( (byte_4C2A5DE & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    byte_4C2A5DE = 1;
  }
  isNoVoice = (BattleData_o *)BattleActorControl__isNoVoice(this, (const MethodInfo *)voiceTypeId);
  if ( ((unsigned __int8)isNoVoice & 1) != 0 )
  {
    ActionExtensions__Call(callback, 0);
    return 0;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_26;
  isNoVoice = performance->fields.data;
  if ( !isNoVoice )
    goto LABEL_26;
  isNoVoice = (BattleData_o *)BattleData__getServantData(isNoVoice, this->fields.uniqueID, 0);
  if ( !isNoVoice )
    goto LABEL_26;
  if ( BattleServantData__HasAvailablePermanentSleepBuff((BattleServantData_o *)isNoVoice, 0) )
  {
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    return 0;
  }
  if ( isSaveVoicePlayed )
  {
    isNoVoice = (BattleData_o *)sub_1C2D538(string___TypeInfo, 1);
    if ( !isNoVoice )
      goto LABEL_26;
    v17 = (System_String_array *)isNoVoice;
    if ( !LODWORD(isNoVoice->fields.m_CancellationTokenSource) )
      sub_1C2D6F4(isNoVoice, v12, v15);
    isNoVoice->fields.rootfsm = (struct PlayMakerFSM_o *)voiceTypeId;
    sub_1C2D434((CGThumbnailListItem_o *)&isNoVoice->fields.rootfsm, (int32_t)voiceTypeId, v15, v16);
    BattleActorControl__AddServantVoicePlayed(this, v17, v18);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (BattleData_o *)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0);
      isNoVoice = (BattleData_o *)BattleActorControl__getLimitCount(this, v28);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v30 = (int)isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v24 = SvtId;
        v25 = v30;
        v26 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v24, v25, v26, voiceTypeId, volume, callback, uniqueID, 0, 0);
      }
    }
LABEL_26:
    sub_1C2D6EC(isNoVoice, v12);
  }
  v21 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v22 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v24 = v21;
  v25 = limit;
  v26 = v22;
  return ServantAssetLoadManager__playBattleVoice(v24, v25, v26, voiceTypeId, volume, callback, uniqueID, 0, 0);
}


void BattleActorControl__printLog(BattleActorControl_o *this, System_String_o *str, const MethodInfo *method)
{
  ;
}


void BattleActorControl__resetAura(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v5; // x2
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v7; // x20
  unsigned __int64 v8; // x23
  int32_t v9; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v11; // x21

  if ( (byte_4C2A634 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A634 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           auraList,
           (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_19;
  entries = auraList->fields._entries;
  v7 = auraList;
  if ( (int)entries >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)entries )
        sub_1C2D6F4(auraList, method, v5);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v9 = *(&v7->fields._count + v8);
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               auraList,
               v9,
               (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Item,
                                                                           0,
                                                                           0);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
        if ( !auraList )
          break;
        v11 = System_Collections_Generic_Dictionary_int__object___get_Item(
                auraList,
                v9,
                (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v11, 0);
      }
      LODWORD(entries) = v7->fields._entries;
      if ( (__int64)++v8 >= (int)entries )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C2D6EC(auraList, method);
  }
LABEL_17:
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___Clear(
    auraList,
    (const MethodInfo_33E1404 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A636 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4C2A636 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
LABEL_19:
    sub_1C2D6EC(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_3AC041C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v6,
            (const MethodInfo_3538D64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v6.fields._currentValue;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Equality(
                                                                         (UnityEngine_Object_o *)currentValue,
                                                                         0,
                                                                         0);
    if ( ((unsigned __int8)auraList & 1) == 0 )
    {
      if ( !currentValue )
        goto LABEL_19;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)currentValue,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                           (UnityEngine_Object_o *)Component_object,
                                                                           0,
                                                                           0);
      if ( ((unsigned __int8)auraList & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_19;
        BillBoard__ResetFlip((BillBoard_o *)Component_object, 0);
      }
    }
  }
}


void BattleActorControl__resetSummonEndFlag(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BattleActorControl_o *v3; // x19
  struct PlayMakerFSM_array *motionFSM; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v7; // x19

  v3 = this;
  if ( (byte_4C2A5BE & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_13170/*"SummonEndFlag"*/);
    byte_4C2A5BE = 1;
  }
  motionFSM = v3->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1C2D6EC(this, method);
  max_length = motionFSM->max_length;
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C2D6F4(this, method, v2);
      v7 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v7, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v7, 0);
        if ( !this )
          goto LABEL_17;
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13170/*"SummonEndFlag"*/,
                                         0);
        if ( this )
          LOBYTE(this->fields.motionFSM) = 0;
      }
      LODWORD(max_length) = motionFSM->max_length;
    }
  }
}


void BattleActorControl__resumeAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  float resumetimescale; // s0
  struct BattleFBXComponent_o *fbxcomponent; // x8

  resumetimescale = this->fields.resumetimescale;
  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = resumetimescale;
  if ( !fbxcomponent )
    sub_1C2D6EC(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v7; // x3

  if ( (byte_4C2A5D1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_8741/*"MOTION_DAMAGE"*/);
    byte_4C2A5D1 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_1C2D6EC(0, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0) )
  {
    MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                                         this,
                                         (System_String_o *)StringLiteral_8741/*"MOTION_DAMAGE"*/,
                                         v5);
    this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
    BattleActorControl__sendEventFSM_46896280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v7);
  }
}


void BattleActorControl__sendEventFSM(
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
  if ( (byte_4C2A5C2 & 1) == 0 )
  {
    sub_1C2D490(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_19112/*"event"*/);
    byte_4C2A5C2 = 1;
  }
  if ( !table )
    sub_1C2D6EC(this, table);
  v5 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, const MethodInfo *))table->klass->vtable._28_get_Item.methodPtr)(
                             table,
                             StringLiteral_19112/*"event"*/,
                             table->klass->vtable._28_get_Item.method);
  v7 = (System_String_o *)v5;
  if ( v5 && *v5 != string_TypeInfo )
  {
    sub_1C2D9AC(v5);
  }
  else
  {
    v8 = v4;
    v9 = v7;
    v10 = 0;
  }
  BattleActorControl__sendEventFSM_46896280(v8, v9, v10, v6);
}


void BattleActorControl__sendEventFSM_46896280(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  UnityEngine_Object_o *beforeWeaponFsm; // x22
  const MethodInfo *v8; // x1
  __int64 Fsm; // x0
  __int64 v10; // x2
  const MethodInfo *v11; // x3
  __int64 v12; // x22
  int32_t v13; // w1
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v20; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v22; // x8
  __int64 v23; // x9
  int max_length; // w10
  UnityEngine_Object_o *v25; // x22
  struct PlayMakerFSM_array *v26; // x8
  __int64 v27; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v28; // x21
  struct PlayMakerFSM_array *v29; // x8
  __int64 v30; // x9

  if ( (byte_4C2A5CB & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_22682/*"pig"*/);
    sub_1C2D490(&StringLiteral_24768/*"weapon"*/);
    sub_1C2D490(&StringLiteral_1778/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/);
    sub_1C2D490(&StringLiteral_18167/*"common"*/);
    byte_4C2A5CB = 1;
  }
  beforeWeaponFsm = (UnityEngine_Object_o *)this->fields.beforeWeaponFsm;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(beforeWeaponFsm, 0, 0) )
  {
    Fsm = (__int64)this->fields.beforeWeaponFsm;
    if ( Fsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0);
      return;
    }
LABEL_32:
    sub_1C2D6EC(Fsm, v8);
  }
  Fsm = sub_1C2D538(string___TypeInfo, 3);
  if ( !Fsm )
    goto LABEL_32;
  v12 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_34;
  v13 = StringLiteral_24768/*"weapon"*/;
  *(_QWORD *)(Fsm + 32) = StringLiteral_24768/*"weapon"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(Fsm + 32), v13, v10, v11);
  if ( *(_DWORD *)(v12 + 24) <= 1u )
    goto LABEL_34;
  v15 = StringLiteral_18167/*"common"*/;
  *(_QWORD *)(v12 + 40) = StringLiteral_18167/*"common"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 40), v15, v10, v14);
  if ( *(_DWORD *)(v12 + 24) <= 2u )
    goto LABEL_34;
  v17 = StringLiteral_22682/*"pig"*/;
  *(_QWORD *)(v12 + 48) = StringLiteral_22682/*"pig"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v12 + 48), v17, v10, v16);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v12 + 24) )
    goto LABEL_34;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_32;
  if ( (unsigned int)actindex >= LODWORD(motionFSM->max_length) )
    goto LABEL_34;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_32;
  v20 = *(Il2CppObject **)(v12 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0);
  Fsm = (__int64)System_String__Format_63499224(
                   (System_String_o *)StringLiteral_1778/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v20,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0);
  v22 = this->fields.motionFSM;
  if ( v22 )
  {
    v23 = this->fields.actindex;
    max_length = v22->max_length;
    if ( (int)v23 < max_length )
    {
      if ( (unsigned int)v23 >= max_length )
        goto LABEL_34;
      v25 = (UnityEngine_Object_o *)v22->m_Items[v23];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = UnityEngine_Object__op_Inequality(v25, 0, 0);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v8);
          v26 = this->fields.motionFSM;
          if ( !v26 )
            goto LABEL_32;
          v27 = this->fields.actindex;
          if ( (unsigned int)v27 >= LODWORD(v26->max_length) )
            goto LABEL_34;
          v28 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v26->m_Items[v27];
          if ( !Fsm )
            goto LABEL_32;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0);
          if ( !Fsm )
            goto LABEL_32;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0);
          if ( !v28 )
            goto LABEL_32;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v28, (System_String_o *)Fsm, 0);
        }
        v29 = this->fields.motionFSM;
        if ( !v29 )
          goto LABEL_32;
        v30 = this->fields.actindex;
        if ( (unsigned int)v30 < LODWORD(v29->max_length) )
        {
          Fsm = (__int64)v29->m_Items[v30];
          if ( Fsm )
            goto LABEL_7;
          goto LABEL_32;
        }
LABEL_34:
        sub_1C2D6F4(Fsm, v8, v10);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__sendMotionEventFSM(
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
  BattleActorControl__sendEventFSM_46896280(
    this,
    MotionFsmIndexAndFixedMotionName.fields.Item2,
    isCallFinishInterrupt,
    v7);
}


void BattleActorControl__setActionData(
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
  struct PlayMakerFSM_array *v11; // x8
  struct PlayMakerFSM_array *v12; // x8
  struct PlayMakerFSM_array *v13; // x8
  struct PlayMakerFSM_array *v14; // x8
  HutongGames_PlayMaker_FsmInt_o *v15; // x21
  struct PlayMakerFSM_array *v16; // x8
  struct PlayMakerFSM_array *v17; // x8

  v4 = this;
  if ( (byte_4C2A5BB & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4821/*"Count_Action"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_4822/*"Count_Hit"*/);
    byte_4C2A5BB = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_69;
  if ( !LODWORD(motionFSM->max_length) )
    goto LABEL_70;
  this = (BattleActorControl_o *)motionFSM->m_Items[0];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4821/*"Count_Action"*/,
                                   0);
  if ( !actiondata )
    goto LABEL_69;
  v6 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0);
  if ( !v6 )
    goto LABEL_69;
  LODWORD(v6->fields.motionFSM) = (_DWORD)this;
  v7 = v4->fields.motionFSM;
  if ( !v7 )
    goto LABEL_69;
  if ( !LODWORD(v7->max_length) )
    goto LABEL_70;
  this = (BattleActorControl_o *)v7->m_Items[0];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4822/*"Count_Hit"*/,
                                   0);
  if ( !this )
    goto LABEL_69;
  LODWORD(this->fields.motionFSM) = actiondata->fields.attackcount;
  v8 = v4->fields.motionFSM;
  if ( !v8 )
    goto LABEL_69;
  if ( LODWORD(v8->max_length) <= 1 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v8->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0)) == 0
    || (this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId) == 0 )
  {
LABEL_69:
    sub_1C2D6EC(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4821/*"Count_Action"*/,
                                   0);
  if ( this )
  {
    v9 = v4->fields.motionFSM;
    if ( !v9 )
      goto LABEL_69;
    if ( LODWORD(v9->max_length) <= 1 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v9->m_Items[1];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_69;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4821/*"Count_Action"*/,
               0);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0);
    if ( !FsmInt )
      goto LABEL_69;
    FsmInt->fields.value = (int)this;
  }
  v11 = v4->fields.motionFSM;
  if ( !v11 )
    goto LABEL_69;
  if ( LODWORD(v11->max_length) <= 1 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v11->m_Items[1];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4822/*"Count_Hit"*/,
                                   0);
  if ( this )
  {
    v12 = v4->fields.motionFSM;
    if ( !v12 )
      goto LABEL_69;
    if ( LODWORD(v12->max_length) <= 1 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v12->m_Items[1];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_4822/*"Count_Hit"*/,
                                     0);
    if ( !this )
      goto LABEL_69;
    LODWORD(this->fields.motionFSM) = actiondata->fields.attackcount;
  }
  v13 = v4->fields.motionFSM;
  if ( !v13 )
    goto LABEL_69;
  if ( LODWORD(v13->max_length) <= 2 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v13->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4821/*"Count_Action"*/,
                                   0);
  if ( this )
  {
    v14 = v4->fields.motionFSM;
    if ( !v14 )
      goto LABEL_69;
    if ( LODWORD(v14->max_length) <= 2 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v14->m_Items[2];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_69;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_69;
    v15 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
            (HutongGames_PlayMaker_FsmVariables_o *)this,
            (System_String_o *)StringLiteral_4821/*"Count_Action"*/,
            0);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0);
    if ( !v15 )
      goto LABEL_69;
    v15->fields.value = (int)this;
  }
  v16 = v4->fields.motionFSM;
  if ( !v16 )
    goto LABEL_69;
  if ( LODWORD(v16->max_length) <= 2 )
LABEL_70:
    sub_1C2D6F4(this, actiondata, method);
  this = (BattleActorControl_o *)v16->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4822/*"Count_Hit"*/,
                                   0);
  if ( !this )
    return;
  v17 = v4->fields.motionFSM;
  if ( !v17 )
    goto LABEL_69;
  if ( LODWORD(v17->max_length) <= 2 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v17->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_69;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4822/*"Count_Hit"*/,
                                   0);
  if ( !this )
    goto LABEL_69;
  LODWORD(this->fields.motionFSM) = actiondata->fields.attackcount;
}


void BattleActorControl__setAddAura(BattleActorControl_o *this, BattleServantData_o *svtdata, const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v5; // x2

  if ( !svtdata )
    sub_1C2D6EC(this, 0);
  AuraIdList = BattleServantData__getAuraIdList(svtdata, 0);
  BattleActorControl__updateAura(this, AuraIdList, v5);
}


void BattleActorControl__setAnimationComplete(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *CompleteList; // x0

  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *, const MethodInfo *))CompleteList->klass->vtable._26_ContainsKey.methodPtr)(
          CompleteList,
          name,
          CompleteList->klass->vtable._26_ContainsKey.method,
          method)
      & 1) != 0 )
  {
    CompleteList = this->fields.CompleteList;
    if ( !CompleteList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *))CompleteList->klass->vtable._37_Remove.methodPtr)(
      CompleteList,
      name,
      CompleteList->klass->vtable._37_Remove.method);
  }
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
LABEL_7:
    sub_1C2D6EC(CompleteList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, const MethodInfo *))CompleteList->klass->vtable._22_Add.methodPtr)(
    CompleteList,
    name,
    ec,
    CompleteList->klass->vtable._22_Add.method);
}


void BattleActorControl__setAnimationEvent(
        BattleActorControl_o *this,
        System_String_o *name,
        BattleActorControl_EventClass_o *ec,
        const MethodInfo *method)
{
  struct System_Collections_Hashtable_o *EventList; // x0

  EventList = this->fields.EventList;
  if ( !EventList )
    goto LABEL_7;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *, const MethodInfo *))EventList->klass->vtable._25_Contains.methodPtr)(
          EventList,
          name,
          EventList->klass->vtable._25_Contains.method,
          method)
      & 1) != 0 )
  {
    EventList = this->fields.EventList;
    if ( !EventList )
      goto LABEL_7;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, const MethodInfo *))EventList->klass->vtable._37_Remove.methodPtr)(
      EventList,
      name,
      EventList->klass->vtable._37_Remove.method);
  }
  EventList = this->fields.EventList;
  if ( !EventList )
LABEL_7:
    sub_1C2D6EC(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, const MethodInfo *))EventList->klass->vtable._22_Add.methodPtr)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._22_Add.method);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__setAuraFlip(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  bool v6; // w19
  Il2CppObject *currentValue; // x20
  Il2CppObject *Component_object; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2A635 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4C2A635 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_33E108C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0 )
  {
LABEL_20:
    sub_1C2D6EC(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_3AC041C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
         &v9,
         (const MethodInfo_3538D64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v6 = flg;
    do
    {
      currentValue = v9.fields._currentValue;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Equality(
                                                                           (UnityEngine_Object_o *)currentValue,
                                                                           0,
                                                                           0);
      if ( ((unsigned __int8)auraList & 1) == 0 )
      {
        if ( !currentValue )
          goto LABEL_20;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)currentValue,
                             (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        auraList = (System_Collections_Generic_Dictionary_int__object__o *)UnityEngine_Object__op_Inequality(
                                                                             (UnityEngine_Object_o *)Component_object,
                                                                             0,
                                                                             0);
        if ( ((unsigned __int8)auraList & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_20;
          BillBoard__setFlip((BillBoard_o *)Component_object, v6, 0, 0);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v9,
              (const MethodInfo_3538D64 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void BattleActorControl__setCamera(BattleActorControl_o *this, UnityEngine_Camera_o *camera, const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C2A5B6 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_4C2A5B6 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0 )
  {
    sub_1C2D6EC(gameObject, v6);
  }
  *((_QWORD *)gameObject + 4) = camera;
  sub_1C2D434((CGThumbnailListItem_o *)(gameObject + 32), (int32_t)camera, v7, v8);
}


void BattleActorControl__setCriteriaPos(
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

  if ( (byte_4C2A5CD & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A5CD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)tr, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
      if ( gameObject )
      {
        position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( gameObject )
        {
          gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
          if ( gameObject )
          {
            v10 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)gameObject, 0);
            y = v10.fields.y;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( gameObject )
            {
              gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
              if ( gameObject )
              {
                tr = (UnityEngine_Transform_o *)gameObject;
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_1C2D6EC(gameObject, v6);
  }
  if ( !tr )
    goto LABEL_16;
  position = (unsigned int)UnityEngine_Transform__get_position(tr, 0);
  v9 = UnityEngine_Transform__get_position(tr, 0);
  y = v9.fields.y;
LABEL_15:
  v11 = UnityEngine_Transform__get_position(tr, 0);
  LODWORD(this->fields.criteriaPos.fields.x) = position;
  this->fields.criteriaPos.fields.y = y;
  this->fields.criteriaPos.fields.z = v11.fields.z;
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__setDir(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t dir; // w8
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *v5; // x0
  UnityEngine_Transform_o *v6; // x20
  float v7; // s0 OVERLAPPED
  float scale; // s1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x20
  float v11; // s2
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  dir = this->fields.dir;
  if ( !dir )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      transform = UnityEngine_GameObject__get_transform(actorObject, 0);
      v13.fields.y = 4.7124;
      v10 = transform;
      v13.fields.x = 0.0;
      v13.fields.z = 0.0;
      v15 = UnityEngine_Quaternion__Internal_FromEulerRad(v13, 0);
      if ( v10 )
      {
        UnityEngine_Transform__set_localRotation(v10, v15, 0);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0);
          if ( actorObject )
          {
            scale = this->fields.scale;
            v7 = -scale;
            goto LABEL_13;
          }
        }
      }
    }
LABEL_15:
    sub_1C2D6EC(actorObject, method);
  }
  if ( dir == 1 )
  {
    actorObject = this->fields.actorObject;
    if ( actorObject )
    {
      v5 = UnityEngine_GameObject__get_transform(actorObject, 0);
      v12.fields.y = 1.5708;
      v6 = v5;
      v12.fields.x = 0.0;
      v12.fields.z = 0.0;
      v14 = UnityEngine_Quaternion__Internal_FromEulerRad(v12, 0);
      if ( v6 )
      {
        UnityEngine_Transform__set_localRotation(v6, v14, 0);
        actorObject = this->fields.actorObject;
        if ( actorObject )
        {
          actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0);
          if ( actorObject )
          {
            v7 = this->fields.scale;
            scale = v7;
LABEL_13:
            v11 = scale;
            UnityEngine_Transform__set_localScale(
              (UnityEngine_Transform_o *)actorObject,
              *(UnityEngine_Vector3_o *)&v7,
              0);
            return;
          }
        }
      }
    }
    goto LABEL_15;
  }
}


void BattleActorControl__setDirLeft(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(actorObject, 0);
  v6.fields.y = 1.5708;
  v5 = transform;
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  v8 = UnityEngine_Quaternion__Internal_FromEulerRad(v6, 0);
  if ( !v5
    || (UnityEngine_Transform__set_localRotation(v5, v8, 0), (actorObject = this->fields.actorObject) == 0)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0)) == 0 )
  {
LABEL_6:
    sub_1C2D6EC(actorObject, method);
  }
  v7.fields.x = this->fields.scale;
  v7.fields.y = v7.fields.x;
  v7.fields.z = v7.fields.x;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v7, 0);
  this->fields.dir = 1;
}


void BattleActorControl__setDirRight(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *actorObject; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v5; // x20
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v7; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  actorObject = this->fields.actorObject;
  if ( !actorObject )
    goto LABEL_6;
  transform = UnityEngine_GameObject__get_transform(actorObject, 0);
  v6.fields.y = 4.7124;
  v5 = transform;
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  v8 = UnityEngine_Quaternion__Internal_FromEulerRad(v6, 0);
  if ( !v5
    || (UnityEngine_Transform__set_localRotation(v5, v8, 0), (actorObject = this->fields.actorObject) == 0)
    || (actorObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(actorObject, 0)) == 0 )
  {
LABEL_6:
    sub_1C2D6EC(actorObject, method);
  }
  v7.fields.y = this->fields.scale;
  v7.fields.x = -v7.fields.y;
  v7.fields.z = v7.fields.y;
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)actorObject, v7, 0);
  this->fields.dir = 0;
}


void BattleActorControl__setEnemyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.enemyStage = obj;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.enemyStage, (int32_t)obj, (int32_t)method, v3);
}


void BattleActorControl__setID(BattleActorControl_o *this, int32_t id, const MethodInfo *method)
{
  this->fields.uniqueID = id;
}


void BattleActorControl__setInitActionBattle(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  BattleActorControl__setCriteriaPos(this, 0, v2);
}


void BattleActorControl__setLimitedPeriod(BattleActorControl_o *this, const MethodInfo *method)
{
  ConstantMaster_o *Master_object; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  int v7; // w20
  __int64 v8; // x24
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x21
  struct PlayMakerFSM_array *v12; // x8
  struct PlayMakerFSM_array *v13; // x8

  if ( (byte_4C2A5BA & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_8429/*"LimitedPeriod"*/);
    sub_1C2D490(&StringLiteral_8258/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4C2A5BA = 1;
  }
  if ( this->fields.motionFSM )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ConstantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( !Master_object
      || (Master_object = (ConstantMaster_o *)ConstantMaster__GetValue(
                                                Master_object,
                                                (System_String_o *)StringLiteral_8258/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                0),
          (motionFSM = this->fields.motionFSM) == 0) )
    {
LABEL_28:
      sub_1C2D6EC(Master_object, v4);
    }
    v7 = (int)Master_object;
    v8 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(motionFSM->max_length);
      v10 = v8 - 4;
      if ( v8 - 4 >= (int)max_length_low )
        break;
      if ( v10 >= max_length_low )
        goto LABEL_30;
      v11 = (UnityEngine_Object_o *)*((_QWORD *)&motionFSM->obj.klass + v8);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ConstantMaster_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v12 = this->fields.motionFSM;
        if ( !v12 )
          goto LABEL_28;
        if ( v10 >= LODWORD(v12->max_length) )
          goto LABEL_30;
        Master_object = (ConstantMaster_o *)*((_QWORD *)&v12->obj.klass + v8);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (ConstantMaster_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Master_object, 0);
        if ( !Master_object )
          goto LABEL_28;
        Master_object = *(ConstantMaster_o **)&Master_object[1].fields._MasterKind_k__BackingField;
        if ( !Master_object )
          goto LABEL_28;
        Master_object = (ConstantMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                              (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                              (System_String_o *)StringLiteral_8429/*"LimitedPeriod"*/,
                                              0);
        if ( Master_object )
        {
          v13 = this->fields.motionFSM;
          if ( !v13 )
            goto LABEL_28;
          if ( v10 >= LODWORD(v13->max_length) )
LABEL_30:
            sub_1C2D6F4(Master_object, v4, v5);
          Master_object = (ConstantMaster_o *)*((_QWORD *)&v13->obj.klass + v8);
          if ( !Master_object )
            goto LABEL_28;
          Master_object = (ConstantMaster_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Master_object, 0);
          if ( !Master_object )
            goto LABEL_28;
          Master_object = *(ConstantMaster_o **)&Master_object[1].fields._MasterKind_k__BackingField;
          if ( !Master_object )
            goto LABEL_28;
          Master_object = (ConstantMaster_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                (System_String_o *)StringLiteral_8429/*"LimitedPeriod"*/,
                                                0);
          if ( !Master_object )
            goto LABEL_28;
          LODWORD(Master_object->fields.seriazlier) = v7;
        }
      }
      motionFSM = this->fields.motionFSM;
      ++v8;
      if ( !motionFSM )
        goto LABEL_28;
    }
  }
}


void BattleActorControl__setMotionListForDemo(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        UnityEngine_GameObject_o *commonMotionPrefab,
        UnityEngine_GameObject_o *commonPigMotionPrefab,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *v13; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 gameObject; // x0
  __int64 v18; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x25
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x24
  UnityEngine_GameObject_o *v23; // x26
  int32_t SvtId; // w27
  const MethodInfo *v25; // x2
  int32_t WeaponGroup; // w28
  UnityEngine_GameObject_o *v27; // x27
  struct PlayMakerFSM_array *v28; // x26
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x27
  struct PlayMakerFSM_array *v32; // x26
  const MethodInfo *v33; // x3
  __int64 v34; // x25
  struct PlayMakerFSM_array *v35; // x25
  const MethodInfo *v36; // x3
  __int64 v37; // x24
  unsigned __int64 v38; // x28
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v40; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct PlayMakerFSM_array *v45; // x8
  struct PlayMakerFSM_array *v46; // x8
  struct PlayMakerFSM_array *v47; // x8
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct PlayMakerFSM_array *v50; // x8
  struct PlayMakerFSM_array *v51; // x8
  char v52; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v55; // x8
  struct BattlePerformance_o *v56; // x8
  float v57; // s0
  struct PlayMakerFSM_array *v58; // x8
  struct BattlePerformance_o *v59; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x2
  struct PlayMakerFSM_array *v64; // x8
  PlayMakerFSM_o *v65; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v68; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  struct PlayMakerFSM_array *v73; // x8
  PlayMakerFSM_o *v74; // x0
  HutongGames_PlayMaker_Fsm_o *v75; // x0
  __int64 v76; // x1
  HutongGames_PlayMaker_FsmVariables_o *v77; // x0
  HutongGames_PlayMaker_FsmInt_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v84; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C2A5B9 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C2D490(&PlayMakerFSM___TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13649/*"TargetFrontPos"*/);
    sub_1C2D490(&StringLiteral_13648/*"TargetBackPos"*/);
    sub_1C2D490(&StringLiteral_3956/*"Camera"*/);
    sub_1C2D490(&StringLiteral_2132/*"ActorObject"*/);
    sub_1C2D490(&StringLiteral_16186/*"_ENEMY"*/);
    sub_1C2D490(&StringLiteral_3962/*"CameraFsm"*/);
    sub_1C2D490(&StringLiteral_10595/*"Performance"*/);
    sub_1C2D490(&StringLiteral_2133/*"ActorSide"*/);
    byte_4C2A5B9 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  v13 = (struct PlayMakerFSM_array *)sub_1C2D538(PlayMakerFSM___TypeInfo, 3);
  this->fields.motionFSM = v13;
  p_motionFSM = &this->fields.motionFSM;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.motionFSM, (int32_t)v13, v15, v16);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_110;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_110;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  v22 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonPigMotionPrefab, v21, 0, 0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.battleSvtData )
    goto LABEL_110;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  SvtId = BattleServantData__getSvtId(this->fields.battleSvtData, 0);
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 0, v25);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v23, SvtId, WeaponGroup, 0);
  if ( !gameObject )
    goto LABEL_110;
  v27 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v28 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v27,
                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v28 )
    goto LABEL_110;
  v31 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v28->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_125;
  }
  if ( !LODWORD(v28->max_length) )
    goto LABEL_111;
  v28->m_Items[0] = (PlayMakerFSM_o *)v31;
  sub_1C2D434((CGThumbnailListItem_o *)v28->m_Items, v31, v29, v30);
  if ( !Object )
    goto LABEL_110;
  v32 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v32 )
    goto LABEL_110;
  v34 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v32->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_125;
  }
  if ( LODWORD(v32->max_length) <= 1 )
    goto LABEL_111;
  v32->m_Items[1] = (PlayMakerFSM_o *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v32->m_Items[1], v34, v29, v33);
  if ( !v22 )
    goto LABEL_110;
  v35 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v22,
                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v35 )
    goto LABEL_110;
  v37 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_125:
      v82 = sub_1C2D710(gameObject);
      sub_1C2D5B8(v82, 0);
    }
  }
  if ( LODWORD(v35->max_length) <= 2 )
LABEL_111:
    sub_1C2D6F4(gameObject, v18, v29);
  v35->m_Items[2] = (PlayMakerFSM_o *)v37;
  sub_1C2D434((CGThumbnailListItem_o *)&v35->m_Items[2], v37, v29, v36);
  v38 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v40 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v38 >= LODWORD(v40->max_length) )
      goto LABEL_111;
    gameObject = (__int64)v40->m_Items[v38];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2132/*"ActorObject"*/,
                      0);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !FsmGameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0);
    v42 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v38 >= LODWORD(v42->max_length) )
      goto LABEL_111;
    gameObject = (__int64)v42->m_Items[v38];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2133/*"ActorSide"*/,
                            0);
    if ( !gameObject )
      goto LABEL_110;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1C2D434((CGThumbnailListItem_o *)(gameObject + 56), (int32_t)side, v43, v44);
    v45 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v38 >= LODWORD(v45->max_length) )
      goto LABEL_111;
    gameObject = (__int64)v45->m_Items[v38];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3956/*"Camera"*/,
                            0);
    if ( !gameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0);
    v46 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v38 >= LODWORD(v46->max_length) )
      goto LABEL_111;
    gameObject = (__int64)v46->m_Items[v38];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3962/*"CameraFsm"*/,
                            0);
    if ( !gameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0);
    v47 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v38 >= LODWORD(v47->max_length) )
      goto LABEL_111;
    gameObject = (__int64)v47->m_Items[v38];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10595/*"Performance"*/,
                            0);
    if ( !gameObject )
      goto LABEL_110;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0, 0);
    *p_actorside = side;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actorside, (int32_t)side, v48, v49);
    v50 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_110;
    if ( v38 >= LODWORD(v50->max_length) )
      goto LABEL_111;
    gameObject = (__int64)v50->m_Items[v38];
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_110;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13649/*"TargetFrontPos"*/,
                            0);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_110;
      gameObject = System_String__Equals_63493168(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16186/*"_ENEMY"*/,
                     0);
      v51 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_110;
      if ( v38 >= LODWORD(v51->max_length) )
        goto LABEL_111;
      v52 = gameObject;
      gameObject = (__int64)v51->m_Items[v38];
      if ( !gameObject )
        goto LABEL_110;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_110;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_110;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13649/*"TargetFrontPos"*/,
                              0);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_110;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v52 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_110;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v55 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_110;
        if ( v38 >= LODWORD(v55->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v55->m_Items[v38];
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13648/*"TargetBackPos"*/,
                                0);
        v56 = this->fields.performance;
        if ( !v56 || !gameObject )
          goto LABEL_110;
        v57 = v56->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_110;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v58 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_110;
        if ( v38 >= LODWORD(v58->max_length) )
          goto LABEL_111;
        gameObject = (__int64)v58->m_Items[v38];
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_110;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13648/*"TargetBackPos"*/,
                                0);
        v59 = this->fields.performance;
        if ( !v59 || !gameObject )
          goto LABEL_110;
        v57 = -v59->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v57;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    ++v38;
  }
  while ( v38 != 3 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_110;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0);
  if ( !gameObject )
LABEL_110:
    sub_1C2D6EC(gameObject, v18);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v83,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v84 = v83;
  while ( 1 )
  {
    v61 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v84,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v61 )
      break;
    v64 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1C2D6EC(v61, v62);
    if ( !LODWORD(v64->max_length) )
      sub_1C2D6F4(v61, v62, v63);
    v65 = v64->m_Items[0];
    if ( !v65 )
      sub_1C2D6EC(0, v62);
    current = v84.fields._current;
    Fsm = PlayMakerFSM__get_Fsm(v65, 0);
    if ( !Fsm )
      sub_1C2D6EC(0, v68);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1C2D6EC(0, v68);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)current.fields.key, 0);
    if ( FsmInt )
    {
      v73 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1C2D6EC(FsmInt, v71);
      if ( !LODWORD(v73->max_length) )
        sub_1C2D6F4(FsmInt, v71, v72);
      v74 = v73->m_Items[0];
      if ( !v74 )
        sub_1C2D6EC(0, v71);
      v75 = PlayMakerFSM__get_Fsm(v74, 0);
      if ( !v75 )
        sub_1C2D6EC(0, v76);
      v77 = v75->fields.variables;
      if ( !v77 )
        sub_1C2D6EC(0, v76);
      v78 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v77, (System_String_o *)current.fields.key, 0);
      if ( !v78 )
        sub_1C2D6EC(0, v79);
      if ( !current.fields.value )
        goto LABEL_118;
      if ( current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1C2D9AC(current.fields.value);
LABEL_118:
        sub_1C2D6EC(v78, v79);
      }
      v78->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(current.fields.value, long_TypeInfo, v80, v81);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v84,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
}


void BattleActorControl__setMotionlist(
        BattleActorControl_o *this,
        System_String_o *side,
        UnityEngine_GameObject_o *camera,
        UnityEngine_GameObject_o *camerafsm,
        const MethodInfo *method)
{
  struct PlayMakerFSM_array *v9; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 gameObject; // x0
  __int64 v14; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *CommonMotionPrefab_k__BackingField; // x24
  UnityEngine_Transform_o *transform; // x0
  struct BattlePerformance_o *v18; // x8
  UnityEngine_GameObject_o *CommonPigMotionPrefab_k__BackingField; // x24
  UnityEngine_GameObject_o *v20; // x25
  UnityEngine_Transform_o *v21; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v23; // x26
  int32_t SvtId; // w27
  const MethodInfo *v25; // x2
  int32_t WeaponGroup; // w28
  UnityEngine_GameObject_o *v27; // x27
  struct PlayMakerFSM_array *v28; // x26
  __int64 v29; // x2
  const MethodInfo *v30; // x3
  __int64 v31; // x27
  struct PlayMakerFSM_array *v32; // x26
  const MethodInfo *v33; // x3
  __int64 v34; // x25
  struct PlayMakerFSM_array *v35; // x25
  const MethodInfo *v36; // x3
  __int64 v37; // x24
  unsigned __int64 v38; // x28
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v40; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v42; // x8
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct PlayMakerFSM_array *v45; // x8
  struct PlayMakerFSM_array *v46; // x8
  struct PlayMakerFSM_array *v47; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v48; // x25
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct PlayMakerFSM_array *v51; // x8
  struct PlayMakerFSM_array *v52; // x8
  char v53; // w25
  struct BattlePerformance_o *v54; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v56; // x8
  struct BattlePerformance_o *v57; // x8
  float v58; // s0
  struct PlayMakerFSM_array *v59; // x8
  struct BattlePerformance_o *v60; // x8
  System_String_o *StrParam; // x21
  _BOOL8 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  struct PlayMakerFSM_array *v65; // x8
  PlayMakerFSM_o *v66; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v69; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  struct PlayMakerFSM_array *v74; // x8
  PlayMakerFSM_o *v75; // x0
  HutongGames_PlayMaker_Fsm_o *v76; // x0
  __int64 v77; // x1
  HutongGames_PlayMaker_FsmVariables_o *v78; // x0
  HutongGames_PlayMaker_FsmInt_o *v79; // x0
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x3
  const MethodInfo *v83; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x1
  __int64 v88; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v89; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v90; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4C2A5B7 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C2D490(&PlayMakerFSM___TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13649/*"TargetFrontPos"*/);
    sub_1C2D490(&StringLiteral_13648/*"TargetBackPos"*/);
    sub_1C2D490(&StringLiteral_3956/*"Camera"*/);
    sub_1C2D490(&StringLiteral_2132/*"ActorObject"*/);
    sub_1C2D490(&StringLiteral_16186/*"_ENEMY"*/);
    sub_1C2D490(&StringLiteral_3962/*"CameraFsm"*/);
    sub_1C2D490(&StringLiteral_10595/*"Performance"*/);
    sub_1C2D490(&StringLiteral_2133/*"ActorSide"*/);
    byte_4C2A5B7 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  v9 = (struct PlayMakerFSM_array *)sub_1C2D538(PlayMakerFSM___TypeInfo, 3);
  this->fields.motionFSM = v9;
  p_motionFSM = &this->fields.motionFSM;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.motionFSM, (int32_t)v9, v11, v12);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_113;
  CommonMotionPrefab_k__BackingField = performance->fields._CommonMotionPrefab_k__BackingField;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_113;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  gameObject = (__int64)BaseMonoBehaviour__createObject(
                          (BaseMonoBehaviour_o *)this,
                          CommonMotionPrefab_k__BackingField,
                          transform,
                          0,
                          0);
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_113;
  CommonPigMotionPrefab_k__BackingField = v18->fields._CommonPigMotionPrefab_k__BackingField;
  v20 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_113;
  v21 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0);
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             CommonPigMotionPrefab_k__BackingField,
             v21,
             0,
             0);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this->fields.battleSvtData )
    goto LABEL_113;
  v23 = (UnityEngine_GameObject_o *)gameObject;
  SvtId = BattleServantData__getSvtId(this->fields.battleSvtData, 0);
  WeaponGroup = BattleActorControl__getWeaponGroup(this, 0, v25);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v23, SvtId, WeaponGroup, 0);
  if ( !gameObject )
    goto LABEL_113;
  v27 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  v28 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v27,
                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v28 )
    goto LABEL_113;
  v31 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v28->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_128;
  }
  if ( !LODWORD(v28->max_length) )
    goto LABEL_114;
  v28->m_Items[0] = (PlayMakerFSM_o *)v31;
  sub_1C2D434((CGThumbnailListItem_o *)v28->m_Items, v31, v29, v30);
  if ( !v20 )
    goto LABEL_113;
  v32 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v20,
                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v32 )
    goto LABEL_113;
  v34 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v32->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_128;
  }
  if ( LODWORD(v32->max_length) <= 1 )
    goto LABEL_114;
  v32->m_Items[1] = (PlayMakerFSM_o *)v34;
  sub_1C2D434((CGThumbnailListItem_o *)&v32->m_Items[1], v34, v29, v33);
  if ( !Object )
    goto LABEL_113;
  v35 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v35 )
    goto LABEL_113;
  v37 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C2D5CC(gameObject, v35->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_128:
      v88 = sub_1C2D710(gameObject);
      sub_1C2D5B8(v88, 0);
    }
  }
  if ( LODWORD(v35->max_length) <= 2 )
LABEL_114:
    sub_1C2D6F4(gameObject, v14, v29);
  v35->m_Items[2] = (PlayMakerFSM_o *)v37;
  sub_1C2D434((CGThumbnailListItem_o *)&v35->m_Items[2], v37, v29, v36);
  v38 = 0;
  p_actorside = &this->fields.actorside;
  do
  {
    v40 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v38 >= LODWORD(v40->max_length) )
      goto LABEL_114;
    gameObject = (__int64)v40->m_Items[v38];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2132/*"ActorObject"*/,
                      0);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !FsmGameObject )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0);
    v42 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v38 >= LODWORD(v42->max_length) )
      goto LABEL_114;
    gameObject = (__int64)v42->m_Items[v38];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2133/*"ActorSide"*/,
                            0);
    if ( !gameObject )
      goto LABEL_113;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1C2D434((CGThumbnailListItem_o *)(gameObject + 56), (int32_t)side, v43, v44);
    v45 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v38 >= LODWORD(v45->max_length) )
      goto LABEL_114;
    gameObject = (__int64)v45->m_Items[v38];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3956/*"Camera"*/,
                            0);
    if ( !gameObject )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0);
    v46 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v38 >= LODWORD(v46->max_length) )
      goto LABEL_114;
    gameObject = (__int64)v46->m_Items[v38];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3962/*"CameraFsm"*/,
                            0);
    if ( !gameObject )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0);
    v47 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v38 >= LODWORD(v47->max_length) )
      goto LABEL_114;
    gameObject = (__int64)v47->m_Items[v38];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10595/*"Performance"*/,
                            0);
    if ( !this->fields.performance )
      goto LABEL_113;
    v48 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.performance, 0);
    if ( !v48 )
      goto LABEL_113;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v48, (UnityEngine_GameObject_o *)gameObject, 0);
    *p_actorside = side;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actorside, (int32_t)side, v49, v50);
    v51 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_113;
    if ( v38 >= LODWORD(v51->max_length) )
      goto LABEL_114;
    gameObject = (__int64)v51->m_Items[v38];
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_113;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13649/*"TargetFrontPos"*/,
                            0);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_113;
      gameObject = System_String__Equals_63493168(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16186/*"_ENEMY"*/,
                     0);
      v52 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_113;
      if ( v38 >= LODWORD(v52->max_length) )
        goto LABEL_114;
      v53 = gameObject;
      gameObject = (__int64)v52->m_Items[v38];
      if ( !gameObject )
        goto LABEL_113;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_113;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_113;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13649/*"TargetFrontPos"*/,
                              0);
      v54 = this->fields.performance;
      if ( !v54 )
        goto LABEL_113;
      distanceofactor = v54->fields.distanceofactor;
      if ( (v53 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_113;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v56 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_113;
        if ( v38 >= LODWORD(v56->max_length) )
          goto LABEL_114;
        gameObject = (__int64)v56->m_Items[v38];
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13648/*"TargetBackPos"*/,
                                0);
        v57 = this->fields.performance;
        if ( !v57 || !gameObject )
          goto LABEL_113;
        v58 = v57->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_113;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v59 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_113;
        if ( v38 >= LODWORD(v59->max_length) )
          goto LABEL_114;
        gameObject = (__int64)v59->m_Items[v38];
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_113;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13648/*"TargetBackPos"*/,
                                0);
        v60 = this->fields.performance;
        if ( !v60 || !gameObject )
          goto LABEL_113;
        v58 = -v60->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v58;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    ++v38;
  }
  while ( v38 != 3 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_113;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0);
  if ( !gameObject )
LABEL_113:
    sub_1C2D6EC(gameObject, v14);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v89,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v90 = v89;
  while ( 1 )
  {
    v62 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v90,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v62 )
      break;
    v65 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1C2D6EC(v62, v63);
    if ( !LODWORD(v65->max_length) )
      sub_1C2D6F4(v62, v63, v64);
    v66 = v65->m_Items[0];
    if ( !v66 )
      sub_1C2D6EC(0, v63);
    current = v90.fields._current;
    Fsm = PlayMakerFSM__get_Fsm(v66, 0);
    if ( !Fsm )
      sub_1C2D6EC(0, v69);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1C2D6EC(0, v69);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)current.fields.key, 0);
    if ( FsmInt )
    {
      v74 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1C2D6EC(FsmInt, v72);
      if ( !LODWORD(v74->max_length) )
        sub_1C2D6F4(FsmInt, v72, v73);
      v75 = v74->m_Items[0];
      if ( !v75 )
        sub_1C2D6EC(0, v72);
      v76 = PlayMakerFSM__get_Fsm(v75, 0);
      if ( !v76 )
        sub_1C2D6EC(0, v77);
      v78 = v76->fields.variables;
      if ( !v78 )
        sub_1C2D6EC(0, v77);
      v79 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v78, (System_String_o *)current.fields.key, 0);
      if ( !v79 )
        sub_1C2D6EC(0, v80);
      if ( !current.fields.value )
        goto LABEL_121;
      if ( current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1C2D9AC(current.fields.value);
LABEL_121:
        sub_1C2D6EC(v79, v80);
      }
      v79->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(current.fields.value, long_TypeInfo, v81, v82);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v90,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v83);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v85,
    v86);
  BattleActorControl__setLimitedPeriod(this, v87);
}


void BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.myStage = obj;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.myStage, (int32_t)obj, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__setNpDamageVoice(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x21
  bool v8; // w24
  UnityEngine_Object_o *v9; // x19
  HutongGames_PlayMaker_FsmVariables_o *v10; // x19

  v4 = this;
  if ( (byte_4C2A5E4 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_9515/*"Noble_Check"*/);
    byte_4C2A5E4 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_1C2D6EC(this, flg);
  max_length = motionFSM->max_length;
  if ( (int)max_length >= 1 )
  {
    v7 = 0;
    v8 = flg;
    do
    {
      if ( v7 >= (unsigned int)max_length )
        sub_1C2D6F4(this, flg, method);
      v9 = (UnityEngine_Object_o *)motionFSM->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v9, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v9, 0);
        if ( !this )
          goto LABEL_18;
        v10 = *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.currentSpShadowEffectId;
        if ( v10 )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           *(HutongGames_PlayMaker_FsmVariables_o **)&this->fields.currentSpShadowEffectId,
                                           (System_String_o *)StringLiteral_9515/*"Noble_Check"*/,
                                           0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             v10,
                                             (System_String_o *)StringLiteral_9515/*"Noble_Check"*/,
                                             0);
            if ( !this )
              goto LABEL_18;
            LOBYTE(this->fields.motionFSM) = v8;
          }
        }
      }
      LODWORD(max_length) = motionFSM->max_length;
      ++v7;
    }
    while ( (__int64)v7 < (int)max_length );
  }
}


void BattleActorControl__setPerformance(
        BattleActorControl_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.performance = perf;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.performance, (int32_t)perf, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl__setReloadWeaponMotion(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  BattleActorControl_o *v5; // x20
  int32_t SvtId; // w21
  const MethodInfo *v7; // x2
  int32_t WeaponGroup; // w22
  BattleActorControl_o *v9; // x21
  struct PlayMakerFSM_array *v10; // x20
  const MethodInfo *v11; // x3
  BattleActorControl_o *v12; // x21
  struct PlayMakerFSM_array *v13; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v14; // x20
  struct PlayMakerFSM_array *v15; // x8
  struct PlayMakerFSM_array *v16; // x8
  BattleActorControl_o *v17; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct PlayMakerFSM_array *v20; // x8
  struct PlayMakerFSM_array *v21; // x8
  BattleActorControl_o *v22; // x20
  struct PlayMakerFSM_array *v23; // x8
  struct PlayMakerFSM_array *v24; // x8
  BattleActorControl_o *v25; // x20
  struct PlayMakerFSM_array *v26; // x8
  BattleActorControl_o *v27; // x20
  struct PlayMakerFSM_array *v28; // x8
  struct PlayMakerFSM_array *v29; // x8
  char v30; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v33; // x8
  struct BattlePerformance_o *v34; // x8
  float v35; // s0
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v38; // x1
  struct PlayMakerFSM_array *v39; // x8
  struct BattlePerformance_o *v40; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  struct PlayMakerFSM_array *v45; // x8
  PlayMakerFSM_o *v46; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v49; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v52; // x1
  __int64 v53; // x2
  struct PlayMakerFSM_array *v54; // x8
  PlayMakerFSM_o *v55; // x0
  HutongGames_PlayMaker_Fsm_o *v56; // x0
  __int64 v57; // x1
  HutongGames_PlayMaker_FsmVariables_o *v58; // x0
  HutongGames_PlayMaker_FsmInt_o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x3
  const MethodInfo *v63; // x1
  System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  __int64 v67; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v69; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4C2A5B8 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&StringLiteral_13649/*"TargetFrontPos"*/);
    sub_1C2D490(&StringLiteral_13648/*"TargetBackPos"*/);
    sub_1C2D490(&StringLiteral_3956/*"Camera"*/);
    sub_1C2D490(&StringLiteral_2132/*"ActorObject"*/);
    sub_1C2D490(&StringLiteral_16186/*"_ENEMY"*/);
    sub_1C2D490(&StringLiteral_3962/*"CameraFsm"*/);
    sub_1C2D490(&StringLiteral_10595/*"Performance"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_2133/*"ActorSide"*/);
    byte_4C2A5B8 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  if ( !flg )
  {
    motionFSM = v4->fields.motionFSM;
    if ( !motionFSM )
      goto LABEL_124;
    if ( !LODWORD(motionFSM->max_length) )
      goto LABEL_138;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( this )
    {
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( this )
      {
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( this )
        {
          FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)this,
                            (System_String_o *)StringLiteral_2132/*"ActorObject"*/,
                            0);
          this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
          if ( FsmGameObject )
          {
            HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)this, 0);
            goto LABEL_123;
          }
        }
      }
    }
LABEL_124:
    sub_1C2D6EC(this, flg);
  }
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !v4->fields.battleSvtData )
    goto LABEL_124;
  v5 = this;
  SvtId = BattleServantData__getSvtId(v4->fields.battleSvtData, 0);
  WeaponGroup = BattleActorControl__getWeaponGroup(v4, 0, v7);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(
                                   (UnityEngine_GameObject_o *)v5,
                                   SvtId,
                                   WeaponGroup,
                                   0);
  if ( !this )
    goto LABEL_124;
  v9 = this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v10 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v9,
                                   (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v10 )
    goto LABEL_124;
  v12 = this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_1C2D5CC(this, v10->obj.klass->_1.element_class);
    if ( !this )
    {
      v67 = sub_1C2D710(0);
      sub_1C2D5B8(v67, 0);
    }
  }
  if ( !LODWORD(v10->max_length) )
    goto LABEL_138;
  v10->m_Items[0] = (PlayMakerFSM_o *)v12;
  sub_1C2D434((CGThumbnailListItem_o *)v10->m_Items, (int32_t)v12, (int32_t)method, v11);
  v13 = v4->fields.motionFSM;
  if ( !v13 )
    goto LABEL_124;
  if ( !LODWORD(v13->max_length) )
    goto LABEL_138;
  this = (BattleActorControl_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  v14 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_2132/*"ActorObject"*/,
          0);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
  if ( !v14 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v14, (UnityEngine_GameObject_o *)this, 0);
  v15 = v4->fields.motionFSM;
  if ( !v15 )
    goto LABEL_124;
  if ( !LODWORD(v15->max_length) )
    goto LABEL_138;
  this = (BattleActorControl_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2133/*"ActorSide"*/,
                                   0);
  v16 = v4->fields.motionFSM;
  if ( !v16 )
    goto LABEL_124;
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_138;
  v17 = this;
  this = (BattleActorControl_o *)v16->m_Items[1];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2133/*"ActorSide"*/,
                                   0);
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0);
  if ( !v17 )
    goto LABEL_124;
  v17->fields.motionFSM = (struct PlayMakerFSM_array *)this;
  sub_1C2D434((CGThumbnailListItem_o *)&v17->fields.motionFSM, (int32_t)this, v18, v19);
  v20 = v4->fields.motionFSM;
  if ( !v20 )
    goto LABEL_124;
  if ( !LODWORD(v20->max_length) )
    goto LABEL_138;
  this = (BattleActorControl_o *)v20->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3956/*"Camera"*/,
                                   0);
  v21 = v4->fields.motionFSM;
  if ( !v21 )
    goto LABEL_124;
  if ( LODWORD(v21->max_length) <= 1 )
    goto LABEL_138;
  v22 = this;
  this = (BattleActorControl_o *)v21->m_Items[1];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3956/*"Camera"*/,
                                   0);
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0);
  if ( !v22 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v22,
    (UnityEngine_GameObject_o *)this,
    0);
  v23 = v4->fields.motionFSM;
  if ( !v23 )
    goto LABEL_124;
  if ( !LODWORD(v23->max_length) )
    goto LABEL_138;
  this = (BattleActorControl_o *)v23->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3962/*"CameraFsm"*/,
                                   0);
  v24 = v4->fields.motionFSM;
  if ( !v24 )
    goto LABEL_124;
  if ( LODWORD(v24->max_length) <= 1 )
    goto LABEL_138;
  v25 = this;
  this = (BattleActorControl_o *)v24->m_Items[1];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3962/*"CameraFsm"*/,
                                   0);
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0);
  if ( !v25 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v25,
    (UnityEngine_GameObject_o *)this,
    0);
  v26 = v4->fields.motionFSM;
  if ( !v26 )
    goto LABEL_124;
  if ( !LODWORD(v26->max_length) )
    goto LABEL_138;
  this = (BattleActorControl_o *)v26->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_10595/*"Performance"*/,
                                   0);
  if ( !v4->fields.performance )
    goto LABEL_124;
  v27 = this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0);
  if ( !v27 )
    goto LABEL_124;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v27,
    (UnityEngine_GameObject_o *)this,
    0);
  v28 = v4->fields.motionFSM;
  if ( !v28 )
    goto LABEL_124;
  if ( !LODWORD(v28->max_length) )
    goto LABEL_138;
  this = (BattleActorControl_o *)v28->m_Items[0];
  if ( !this )
    goto LABEL_124;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
  if ( !this )
    goto LABEL_124;
  this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
  if ( !this )
    goto LABEL_124;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
         (HutongGames_PlayMaker_FsmVariables_o *)this,
         (System_String_o *)StringLiteral_13649/*"TargetFrontPos"*/,
         0) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( !this )
      goto LABEL_124;
    this = (BattleActorControl_o *)System_String__Equals_63493168(
                                     (System_String_o *)this,
                                     (System_String_o *)StringLiteral_16186/*"_ENEMY"*/,
                                     0);
    v29 = v4->fields.motionFSM;
    if ( !v29 )
      goto LABEL_124;
    if ( LODWORD(v29->max_length) )
    {
      v30 = (char)this;
      this = (BattleActorControl_o *)v29->m_Items[0];
      if ( !this )
        goto LABEL_124;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( !this )
        goto LABEL_124;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_124;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13649/*"TargetFrontPos"*/,
                                       0);
      performance = v4->fields.performance;
      if ( !performance )
        goto LABEL_124;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v30 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_124;
        *(float *)&this->fields.motionFSM = -distanceofactor;
        HIDWORD(this->fields.motionFSM) = 0;
        LODWORD(this->fields.beforeWeaponFsm) = 0;
        v33 = v4->fields.motionFSM;
        if ( !v33 )
          goto LABEL_124;
        if ( LODWORD(v33->max_length) )
        {
          this = (BattleActorControl_o *)v33->m_Items[0];
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
          if ( !this )
            goto LABEL_124;
          this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13648/*"TargetBackPos"*/,
                                           0);
          v34 = v4->fields.performance;
          if ( !v34 || !this )
            goto LABEL_124;
          v35 = v34->fields.distanceofactor;
LABEL_100:
          *(float *)&this->fields.motionFSM = v35;
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
        v39 = v4->fields.motionFSM;
        if ( !v39 )
          goto LABEL_124;
        if ( LODWORD(v39->max_length) )
        {
          this = (BattleActorControl_o *)v39->m_Items[0];
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
          if ( !this )
            goto LABEL_124;
          this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
          if ( !this )
            goto LABEL_124;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13648/*"TargetBackPos"*/,
                                           0);
          v40 = v4->fields.performance;
          if ( !v40 || !this )
            goto LABEL_124;
          v35 = -v40->fields.distanceofactor;
          goto LABEL_100;
        }
      }
    }
LABEL_138:
    sub_1C2D6F4(this, flg, method);
  }
LABEL_101:
  this = (BattleActorControl_o *)v4->fields.battleSvtData;
  if ( !this )
    goto LABEL_124;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)this, 0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BattleActorControl_o *)JsonManager__getDictionary(StrParam, 0);
  if ( !this )
    goto LABEL_124;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v68,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v69 = v68;
  while ( 1 )
  {
    v42 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v69,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v42 )
      break;
    v45 = v4->fields.motionFSM;
    if ( !v45 )
      sub_1C2D6EC(v42, v43);
    if ( !LODWORD(v45->max_length) )
      sub_1C2D6F4(v42, v43, v44);
    v46 = v45->m_Items[0];
    if ( !v46 )
      sub_1C2D6EC(0, v43);
    current = v69.fields._current;
    Fsm = PlayMakerFSM__get_Fsm(v46, 0);
    if ( !Fsm )
      sub_1C2D6EC(0, v49);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1C2D6EC(0, v49);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)current.fields.key, 0);
    if ( FsmInt )
    {
      v54 = v4->fields.motionFSM;
      if ( !v54 )
        sub_1C2D6EC(FsmInt, v52);
      if ( !LODWORD(v54->max_length) )
        sub_1C2D6F4(FsmInt, v52, v53);
      v55 = v54->m_Items[0];
      if ( !v55 )
        sub_1C2D6EC(0, v52);
      v56 = PlayMakerFSM__get_Fsm(v55, 0);
      if ( !v56 )
        sub_1C2D6EC(0, v57);
      v58 = v56->fields.variables;
      if ( !v58 )
        sub_1C2D6EC(0, v57);
      v59 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v58, (System_String_o *)current.fields.key, 0);
      if ( !v59 )
        sub_1C2D6EC(0, v60);
      if ( !current.fields.value )
        goto LABEL_131;
      if ( current.fields.value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1C2D9AC(current.fields.value);
LABEL_131:
        sub_1C2D6EC(v59, v60);
      }
      v59->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(current.fields.value, long_TypeInfo, v61, v62);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v69,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(v4, v63);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v65,
    v66);
LABEL_123:
  BattleActorControl__setLimitedPeriod(v4, v38);
}


void BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 Instance; // x0
  struct UnityEngine_GameObject_o *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleServantData_o **p_battleSvtData; // x28
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  BattleServantData_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x21
  __int64 v15; // x23
  __int64 v16; // x24
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x23
  ServantEntity_o *v19; // x26
  struct UnityEngine_Transform_o *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w27
  _BOOL4 isForceAppearance; // w22
  int32_t v25; // w23
  UnityEngine_GameObject_o *gameObject; // x21
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  struct UnityEngine_GameObject_o **p_actorObject; // x24
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Transform_o *v31; // x25
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  BattlePerformance_o *performance; // x21
  int32_t v35; // w25
  System_String_o *v36; // x29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x27
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_String_o *HideInAnimNodeName; // x26
  bool v43; // w0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  UnityEngine_Transform_o *v46; // x0
  UnityEngine_Transform_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_String_o *v50; // x1
  UnityEngine_GameObject_o *v51; // x26
  int32_t v52; // w29
  UnityEngine_Transform_o *v53; // x21
  UnityEngine_Transform_o *v54; // x25
  UnityEngine_Transform_o *v55; // x25
  UnityEngine_Transform_o *v56; // x25
  UnityEngine_Transform_o *v57; // x25
  BattleFBXComponent_o *fbxcomponent; // x21
  _BOOL4 v59; // w21
  const MethodInfo *v60; // x2
  const MethodInfo *v61; // x1
  const MethodInfo *v62; // x3
  int32_t displayType; // w8
  bool v64; // w1
  bool v65; // w2
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__51538676; // x21
  System_Collections_Generic_List_object__o *v67; // x25
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x2
  UnityEngine_Transform_o *v71; // x25
  float actorScale; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  _BOOL4 v74; // w25
  struct BattlePerformance_o *v75; // x8
  struct BattleData_o *data; // x8
  int32_t v77; // w0
  __int64 v78; // x26
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x27
  System_Predicate_object__o *v80; // x28
  Il2CppObject *v81; // x21
  struct BattleActorControl___c_StaticFields *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 *v87; // x28
  Il2CppObject *Component_object; // x0
  UnityEngine_MeshCollider_o **v89; // x27
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  UnityEngine_Object_o *v92; // x21
  Il2CppObject *v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  UnityEngine_GameObject_o *v96; // x21
  System_Action_o *v97; // x25
  BattleActorControl_o *v98; // x0
  const MethodInfo *v99; // x3
  System_Collections_IEnumerator_o *v100; // x0
  BattlePerformance_o *v101; // x29
  UnityEngine_SkinnedMeshRenderer_o *v102; // x26
  UnityEngine_MeshCollider_o *v103; // x28
  __int64 v104; // t2
  __int64 v105; // x21
  __int64 v106; // x25
  int32_t v107; // w25
  System_Action_o *v108; // x21
  struct BattlePerformance_o *v109; // x8
  EnemyScriptParam_EnemyTargetTouchAreaData_o *v110; // x26
  BattlePerformanceEnemy_o *EnemyPerf; // x21
  System_Object_array *Components_object; // x0
  int32_t v113; // w2
  const MethodInfo *v114; // x3
  VisibleControlInfo_o *v115; // x21
  const MethodInfo *v116; // x3
  const MethodInfo *v117; // x4
  const MethodInfo *v118; // x1
  System_Object_array *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_Collections_Generic_Dictionary_DropInfo_DropEffectType__ScriptableObject__o *Manager__LoadBattleActorDropEffectDict; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  UnityEngine_Object_o *v125; // x20
  struct BattlePerformance_o *v126; // x8
  UnityEngine_Object_o *v127; // x20
  struct BattlePerformance_o *v128; // x9
  int32_t ServantIndex; // w0
  int32_t v130; // w20
  UnityEngine_Object_o *dropPointComp; // x21
  UnityEngine_GameObject_o *v132; // x21
  Il2CppObject *v133; // x0
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Transform_o *v137; // x20
  __int64 v138; // x22
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  struct UnityEngine_GameObject_o *v141; // x1
  int32_t v142; // [xsp+Ch] [xbp-74h]
  Il2CppObject *object; // [xsp+10h] [xbp-70h]
  struct BattleServantData_o **v144; // [xsp+18h] [xbp-68h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C2A5AC & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_System_Array_IndexOf_int___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&BattleDropPointComponent_DropPointData_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_BattleDropPointComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponents_BattleAdjustPopupPosInScreenComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
    sub_1C2D490(&UnityEngine_GameObject_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___77955680);
    sub_1C2D490(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&System_Predicate_SkinnedMeshRenderer__TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleActorControl___c__setServantData_b__165_0__);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass165_0__setServantData_b__2__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass165_0_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass165_1__setServantData_b__1__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass165_1_TypeInfo);
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    sub_1C2D490(&VisibleControlInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_18967/*"en_Head"*/);
    sub_1C2D490(&StringLiteral_12834/*"Shadow"*/);
    sub_1C2D490(&StringLiteral_18971/*"en_buff01"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2A5AC = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl___c__DisplayClass165_0_TypeInfo);
  BattleActorControl___c__DisplayClass165_0___ctor((BattleActorControl___c__DisplayClass165_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_142;
  object = (Il2CppObject *)v5;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleSvtData, (int32_t)svtdata, v11, v12);
  if ( !svtdata )
    goto LABEL_142;
  this->fields.originalModelId = BattleServantData__GetOriginalModelId(svtdata, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_142;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_142;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v145.fields.currentCryptoKey = v16;
  *(_QWORD *)&v145.fields.fakeValue = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v145, 0);
  if ( !v14 )
    goto LABEL_142;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             Instance,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v19 = (ServantEntity_o *)Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
  {
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !Instance )
      goto LABEL_142;
    v20 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12834/*"Shadow"*/, 0);
    this->fields.shadowObj = v20;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.shadowObj, (int32_t)v20, v21, v22);
  }
  Instance = (__int64)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_142;
  Instance = BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0);
  if ( !*p_battleSvtData )
    goto LABEL_142;
  v23 = Instance;
  Instance = BattleServantData__GetLoadActorLimitCount(*p_battleSvtData, 0);
  if ( !*p_battleSvtData )
    goto LABEL_142;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  v25 = Instance;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               gameObject,
                               v23,
                               v25,
                               isForceAppearance,
                               0);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.actorObject, (int32_t)Manager__loadBattleActor, v29, v30);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_142;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  v31 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C20DA1 )
  {
    Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v31 )
    goto LABEL_142;
  UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  BattleActorControl__SetupNodes(this, v32);
  BattleActorControl__ChangeShadowParent(this, v25, v33);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_142;
  performance = this->fields.performance;
  v35 = *(_DWORD *)(Instance + 24);
  Instance = BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0);
  if ( !performance )
    goto LABEL_142;
  v144 = &this->fields.battleSvtData;
  v142 = v23;
  BattlePerformance__registerCameraAction(performance, v35, Instance, 0);
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_142;
  v36 = (System_String_o *)StringLiteral_18967/*"en_Head"*/;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  Instance = (__int64)TransformHelper__getNodeFromLvName(transform, v36, v25, 0, 0);
  if ( !Instance )
    goto LABEL_142;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  this->fields.checkScaleNode = 0;
  v39 = v38;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.checkScaleNode, 0, v40, v41);
  if ( v19 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v19, 0);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = System_String__IsNullOrEmpty(HideInAnimNodeName, 0);
  if ( (Instance & 1) == 0 )
  {
    if ( !v36 )
      goto LABEL_142;
    v43 = System_String__Equals_63493168(v36, HideInAnimNodeName, 0);
    v7 = v39;
    if ( !v43 )
    {
      Instance = (__int64)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_142;
      v46 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
      Instance = (__int64)TransformHelper__getNodeFromLvName(v46, HideInAnimNodeName, v25, 0, 0);
      if ( !Instance )
        goto LABEL_142;
      v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    }
    this->fields.checkScaleNode = v7;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.checkScaleNode, (int32_t)v7, v44, v45);
  }
  v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v50 = TransformHelper__ExistNodeFromLvName(v47, (System_String_o *)StringLiteral_18971/*"en_buff01"*/, -1, 0, 0)
      ? (struct System_String_o *)StringLiteral_18971/*"en_buff01"*/
      : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v50;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._BuffEffectNodeName_k__BackingField, (int32_t)v50, v48, v49);
  v51 = (UnityEngine_GameObject_o *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_71145868(v51, 0);
  if ( !v51 )
    goto LABEL_142;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
  v52 = v142;
  if ( !v39 )
    goto LABEL_142;
  v53 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v39, 0);
  if ( !v53 )
    goto LABEL_142;
  UnityEngine_Transform__set_parent(v53, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
  v54 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C20DA1 )
  {
    Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  if ( !v54 )
    goto LABEL_142;
  UnityEngine_Transform__set_localPosition(v54, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
  v55 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C20DA9 )
  {
    Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA9 = 1;
  }
  if ( !v55 )
    goto LABEL_142;
  UnityEngine_Transform__set_localEulerAngles(v55, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
  v56 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C20DA6 )
  {
    Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v56 )
    goto LABEL_142;
  UnityEngine_Transform__set_localScale(v56, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  v57 = UnityEngine_GameObject__get_transform(v51, 0);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_142;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !v57 )
    goto LABEL_142;
  UnityEngine_Transform__set_parent(v57, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v51, 0);
  if ( !Instance )
    goto LABEL_142;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v51, 0);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_142;
  fbxcomponent = this->fields.fbxcomponent;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !fbxcomponent )
    goto LABEL_142;
  BattleFBXComponent__set_RootTransform(fbxcomponent, (UnityEngine_Transform_o *)Instance, 0);
  Instance = (__int64)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_142;
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v142, v25, 0);
  if ( !*v144 )
    goto LABEL_142;
  v59 = (*v144)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Instance = (__int64)ServantAssetLoadManager__loadAnimEvents(v142, v25, v59, 0);
  if ( !this->fields.fbxcomponent )
    goto LABEL_142;
  BattleFBXComponent__loadAnimationEvents(this->fields.fbxcomponent, (UnityEngine_TextAsset_o *)Instance, v142, v25, 0);
  BattleActorControl__InitAnimationEffect(this, v25, v60);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_142;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0) )
  {
    if ( *v144 )
    {
      displayType = (*v144)->fields.displayType;
      v64 = displayType == 2;
      v65 = displayType == 3;
    }
    else
    {
      v64 = 0;
      v65 = 0;
    }
    BattleActorControl__SetDispServant(this, v64, v65, v62);
  }
  BattleActorControl__UpdateShadow(this, v61);
  this->fields.stepFlg = 0;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !Instance )
    goto LABEL_142;
  ComponentsInChildren_object__51538676 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                                           (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v67 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233976(
    v67,
    ComponentsInChildren_object__51538676,
    (const MethodInfo_3789478 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___77955680);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v67;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.rendererArrayList, (int32_t)v67, v68, v69);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v70);
  this->fields.actorScale = BattleServantData__getActorScale(svtdata, 0);
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v71 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4C20DA6 )
  {
    Instance = sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA6 = 1;
  }
  if ( !v71 )
    goto LABEL_142;
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v147.fields.z = actorScale * static_fields->oneVector.fields.z;
  v147.fields.y = actorScale * static_fields->oneVector.fields.y;
  v147.fields.x = actorScale * static_fields->oneVector.fields.x;
  UnityEngine_Transform__set_localScale(v71, v147, 0);
  v74 = isForceAppearance;
  if ( svtdata->fields.isEnemy )
  {
    v75 = this->fields.performance;
    if ( !v75 )
      goto LABEL_142;
    data = v75->fields.data;
    if ( !data )
      goto LABEL_142;
    v77 = System_Array__IndexOf_int_(
            data->fields.e_entryid,
            svtdata->fields.uniqueId,
            (const MethodInfo_31D59D0 *)Method_System_Array_IndexOf_int___);
    LODWORD(object[1].monitor) = v77;
    if ( v77 != -1 )
    {
      v78 = sub_1C2D6DC(BattleActorControl___c__DisplayClass165_1_TypeInfo);
      BattleActorControl___c__DisplayClass165_1___ctor((BattleActorControl___c__DisplayClass165_1_o *)v78, 0);
      rendererArrayList = this->fields.rendererArrayList;
      Instance = (__int64)BattleActorControl___c_TypeInfo;
      if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
        Instance = (__int64)BattleActorControl___c_TypeInfo;
      }
      v80 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
      if ( !v80 )
      {
        if ( !*(_DWORD *)(Instance + 224) )
        {
          j_il2cpp_runtime_class_init_0(Instance);
          Instance = (__int64)BattleActorControl___c_TypeInfo;
        }
        v81 = **(Il2CppObject ***)(Instance + 184);
        v80 = (System_Predicate_object__o *)sub_1C2D6DC(System_Predicate_SkinnedMeshRenderer__TypeInfo);
        System_Predicate_object____ctor(v80, v81, Method_BattleActorControl___c__setServantData_b__165_0__, 0);
        v82 = BattleActorControl___c_TypeInfo->static_fields;
        v82->__9__165_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)v80;
        sub_1C2D434((CGThumbnailListItem_o *)&v82->__9__165_0, (int32_t)v80, v83, v84);
      }
      if ( rendererArrayList )
      {
        Instance = (__int64)System_Collections_Generic_List_object___Find(
                              (System_Collections_Generic_List_object__o *)rendererArrayList,
                              (System_Predicate_T__o *)v80,
                              (const MethodInfo_378A1EC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
        if ( v78 )
        {
          *(_QWORD *)(v78 + 16) = Instance;
          v87 = (__int64 *)(v78 + 16);
          sub_1C2D434((CGThumbnailListItem_o *)(v78 + 16), Instance, v85, v86);
          Instance = (__int64)*p_actorObject;
          if ( *p_actorObject )
          {
            Component_object = UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)Instance,
                                 (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
            *(_QWORD *)(v78 + 24) = Component_object;
            v89 = (UnityEngine_MeshCollider_o **)(v78 + 24);
            sub_1C2D434((CGThumbnailListItem_o *)(v78 + 24), (int32_t)Component_object, v90, v91);
            v92 = *(UnityEngine_Object_o **)(v78 + 24);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v92, 0, 0) )
            {
              Instance = (__int64)*p_actorObject;
              if ( !*p_actorObject )
                goto LABEL_142;
              v93 = UnityEngine_GameObject__AddComponent_object_(
                      (UnityEngine_GameObject_o *)Instance,
                      (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
              *v89 = (UnityEngine_MeshCollider_o *)v93;
              sub_1C2D434((CGThumbnailListItem_o *)(v78 + 24), (int32_t)v93, v94, v95);
              Instance = (__int64)*v89;
              if ( !*v89 )
                goto LABEL_142;
              UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0);
              Instance = (__int64)*v89;
              if ( !*v89 )
                goto LABEL_142;
              UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Instance, 0, 0);
            }
            Instance = (__int64)svtdata->fields.deckSvt;
            if ( !Instance )
              goto LABEL_142;
            if ( BattleDeckServantData__IsActiveEnemyMeshCollider((BattleDeckServantData_o *)Instance, 0) )
            {
              Instance = *v87;
              if ( !*v87 )
                goto LABEL_142;
              v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
              v97 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v97,
                (Il2CppObject *)v78,
                Method_BattleActorControl___c__DisplayClass165_1__setServantData_b__1__,
                0);
              v100 = BattleActorControl__WaitActiveCoroutine(v98, v96, v97, v99);
              UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v100, 0);
              v101 = this->fields.performance;
              v104 = v78 + 16;
              v102 = *(UnityEngine_SkinnedMeshRenderer_o **)(v78 + 16);
              v103 = *(UnityEngine_MeshCollider_o **)(v104 + 8);
              v106 = *(_QWORD *)&svtdata->fields.svtId.fields.currentCryptoKey;
              v105 = *(_QWORD *)&svtdata->fields.svtId.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v146.fields.currentCryptoKey = v106;
              *(_QWORD *)&v146.fields.fakeValue = v105;
              v107 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v146, 0);
              v108 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
              System_Action___ctor(
                v108,
                object,
                Method_BattleActorControl___c__DisplayClass165_0__setServantData_b__2__,
                0);
              if ( !v101 )
                goto LABEL_142;
              BattlePerformance__AddCollider(v101, v103, v102, v107, v108, 0);
              v74 = isForceAppearance;
              v52 = v142;
            }
            Instance = (__int64)svtdata->fields.deckSvt;
            if ( Instance )
            {
              Instance = (__int64)BattleDeckServantData__GetEnemyTargetTouchAreaData(
                                    (BattleDeckServantData_o *)Instance,
                                    0);
              v109 = this->fields.performance;
              if ( v109 )
              {
                v110 = (EnemyScriptParam_EnemyTargetTouchAreaData_o *)Instance;
                Instance = (__int64)v109->fields.data;
                if ( Instance )
                {
                  if ( BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0)
                    && (!v110 || EnemyScriptParam_EnemyTargetTouchAreaData__get_IsActive(v110, 0)) )
                  {
                    Instance = (__int64)this->fields.performance;
                    if ( !Instance )
                      goto LABEL_142;
                    BattlePerformance__AddUiCollider(
                      (BattlePerformance_o *)Instance,
                      *v89,
                      (int32_t)object[1].monitor,
                      0);
                  }
                  Instance = (__int64)this->fields.performance;
                  if ( Instance )
                  {
                    EnemyPerf = BattlePerformance__get_EnemyPerf((BattlePerformance_o *)Instance, 0);
                    Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    if ( EnemyPerf )
                    {
                      BattlePerformanceEnemy__SetupTargetIcon(
                        EnemyPerf,
                        svtdata,
                        (UnityEngine_GameObject_o *)Instance,
                        (int32_t)object[1].monitor,
                        0);
                      Instance = (__int64)this->fields.performance;
                      if ( Instance )
                      {
                        BattlePerformance__UpdateEnemyTargetButton(
                          (BattlePerformance_o *)Instance,
                          v110,
                          (int32_t)object[1].monitor,
                          0);
                        goto LABEL_114;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_142:
      sub_1C2D6EC(Instance, v7);
    }
  }
LABEL_114:
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_142;
  Components_object = UnityEngine_GameObject__GetComponents_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_312682C *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_object;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (int32_t)Components_object,
    v113,
    v114);
  v115 = (VisibleControlInfo_o *)sub_1C2D6DC(VisibleControlInfo_TypeInfo);
  VisibleControlInfo___ctor(v115, 0);
  if ( !v115 )
    goto LABEL_142;
  v115->fields._Timing_k__BackingField = 0;
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, v115, v116);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v52, v25, svtdata->fields.isEnemy, v117);
  BattleActorControl__LoadSavedPartAnimation(this, v118);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_142;
  v119 = UnityEngine_GameObject__GetComponents_object_(
           (UnityEngine_GameObject_o *)Instance,
           (const MethodInfo_312682C *)Method_UnityEngine_GameObject_GetComponents_BattleAdjustPopupPosInScreenComponent___);
  this->fields._AdjustPopupComponents_k__BackingField = (struct BattleAdjustPopupPosInScreenComponent_array *)v119;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._AdjustPopupComponents_k__BackingField, (int32_t)v119, v120, v121);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__LoadBattleActorDropEffectDict = ServantAssetLoadManager__LoadBattleActorDropEffectDict(v52, v25, v74, 0);
  this->fields.dropEffectOverwriteSettingDictionary = Manager__LoadBattleActorDropEffectDict;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields.dropEffectOverwriteSettingDictionary,
    (int32_t)Manager__LoadBattleActorDropEffectDict,
    v123,
    v124);
  v125 = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(v125, 0, 0);
  if ( (Instance & 1) != 0 )
  {
    v126 = this->fields.performance;
    if ( !v126 )
      goto LABEL_142;
    v127 = (UnityEngine_Object_o *)v126->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(v127, 0, 0);
    if ( (Instance & 1) != 0 )
    {
      v128 = this->fields.performance;
      if ( !v128 )
        goto LABEL_142;
      if ( !*v144 )
        goto LABEL_142;
      Instance = (__int64)v128->fields.data;
      if ( !Instance )
        goto LABEL_142;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)Instance,
                       (*v144)->fields.isEnemy,
                       (*v144)->fields.uniqueId,
                       0);
      if ( ServantIndex != -1 )
      {
        v130 = ServantIndex;
        dropPointComp = (UnityEngine_Object_o *)this->fields.dropPointComp;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = UnityEngine_Object__op_Equality(dropPointComp, 0, 0);
        if ( (Instance & 1) != 0 )
        {
          v132 = (UnityEngine_GameObject_o *)sub_1C2D6DC(UnityEngine_GameObject_TypeInfo);
          UnityEngine_GameObject___ctor_71145868(v132, 0);
          if ( !v132 )
            goto LABEL_142;
          v133 = UnityEngine_GameObject__AddComponent_object_(
                   v132,
                   (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_BattleDropPointComponent___);
          this->fields.dropPointComp = (struct BattleDropPointComponent_o *)v133;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.dropPointComp, (int32_t)v133, v134, v135);
        }
        battleSvtData = this->fields.battleSvtData;
        if ( battleSvtData )
        {
          Instance = (__int64)this->fields.performance;
          if ( Instance )
          {
            Instance = (__int64)BattlePerformance__getDefaultTargetPosObject(
                                  (BattlePerformance_o *)Instance,
                                  v130,
                                  battleSvtData->fields.isEnemy,
                                  0);
            if ( Instance )
            {
              v137 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
              v138 = sub_1C2D6DC(BattleDropPointComponent_DropPointData_TypeInfo);
              BattleDropPointComponent_DropPointData___ctor((BattleDropPointComponent_DropPointData_o *)v138, 0);
              if ( v138 )
              {
                v141 = *p_actorObject;
                *(_QWORD *)(v138 + 16) = *p_actorObject;
                sub_1C2D434((CGThumbnailListItem_o *)(v138 + 16), (int32_t)v141, v139, v140);
                *(_DWORD *)(v138 + 24) = this->fields.uniqueID;
                Instance = (__int64)this->fields.dropPointComp;
                if ( Instance )
                {
                  BattleDropPointComponent__Initialize(
                    (BattleDropPointComponent_o *)Instance,
                    (BattleDropPointComponent_DropPointData_o *)v138,
                    v137,
                    v52,
                    v25,
                    v74,
                    0);
                  return;
                }
              }
            }
          }
        }
        goto LABEL_142;
      }
    }
  }
}


void BattleActorControl__setStepFlg(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  this->fields.stepFlg = flg;
}


void BattleActorControl__setSummonMasterObject(
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
  if ( (byte_4C2A5BD & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_13171/*"SummonMasterObject"*/);
    byte_4C2A5BD = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( !LODWORD(motionFSM->max_length) )
      goto LABEL_44;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_43;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13171/*"SummonMasterObject"*/,
                                     0);
    if ( this )
    {
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_43;
      if ( !LODWORD(v6->max_length) )
        goto LABEL_44;
      this = (BattleActorControl_o *)v6->m_Items[0];
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( !this )
        goto LABEL_43;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13171/*"SummonMasterObject"*/,
                                       0);
      if ( !this )
        goto LABEL_43;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0);
    }
    v7 = v4->fields.motionFSM;
    if ( !v7 )
      goto LABEL_43;
    if ( LODWORD(v7->max_length) <= 1 )
      goto LABEL_44;
    this = (BattleActorControl_o *)v7->m_Items[1];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_43;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13171/*"SummonMasterObject"*/,
                                     0);
    if ( this )
    {
      v8 = v4->fields.motionFSM;
      if ( !v8 )
        goto LABEL_43;
      if ( LODWORD(v8->max_length) <= 1 )
        goto LABEL_44;
      this = (BattleActorControl_o *)v8->m_Items[1];
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( !this )
        goto LABEL_43;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13171/*"SummonMasterObject"*/,
                                       0);
      if ( !this )
        goto LABEL_43;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0);
    }
    v9 = v4->fields.motionFSM;
    if ( !v9 )
      goto LABEL_43;
    if ( LODWORD(v9->max_length) <= 2 )
LABEL_44:
      sub_1C2D6F4(this, obj, method);
    this = (BattleActorControl_o *)v9->m_Items[2];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
    if ( !this )
      goto LABEL_43;
    this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13171/*"SummonMasterObject"*/,
                                     0);
    if ( this )
    {
      v10 = v4->fields.motionFSM;
      if ( !v10 )
        goto LABEL_43;
      if ( LODWORD(v10->max_length) > 2 )
      {
        this = (BattleActorControl_o *)v10->m_Items[2];
        if ( this )
        {
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
          if ( this )
          {
            this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13171/*"SummonMasterObject"*/,
                                               0);
              if ( this )
              {
                HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0);
                return;
              }
            }
          }
        }
LABEL_43:
        sub_1C2D6EC(this, obj);
      }
      goto LABEL_44;
    }
  }
}


void BattleActorControl__setTargetObject(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_array *v6; // x8
  struct PlayMakerFSM_array *v7; // x8

  v4 = this;
  if ( (byte_4C2A5BC & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_13655/*"TargetObject"*/);
    byte_4C2A5BC = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( motionFSM )
  {
    if ( LODWORD(motionFSM->max_length) )
    {
      this = (BattleActorControl_o *)motionFSM->m_Items[0];
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
      if ( !this )
        goto LABEL_23;
      this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13655/*"TargetObject"*/,
                                       0);
      if ( !this )
        goto LABEL_23;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0);
      v6 = v4->fields.motionFSM;
      if ( !v6 )
        goto LABEL_23;
      if ( LODWORD(v6->max_length) > 1 )
      {
        this = (BattleActorControl_o *)v6->m_Items[1];
        if ( !this )
          goto LABEL_23;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
        if ( !this )
          goto LABEL_23;
        this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
        if ( !this )
          goto LABEL_23;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13655/*"TargetObject"*/,
                                         0);
        if ( !this )
          goto LABEL_23;
        HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0);
        v7 = v4->fields.motionFSM;
        if ( !v7 )
          goto LABEL_23;
        if ( LODWORD(v7->max_length) > 2 )
        {
          this = (BattleActorControl_o *)v7->m_Items[2];
          if ( this )
          {
            this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0);
            if ( this )
            {
              this = *(BattleActorControl_o **)&this->fields.currentSpShadowEffectId;
              if ( this )
              {
                this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                 (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                 (System_String_o *)StringLiteral_13655/*"TargetObject"*/,
                                                 0);
                if ( this )
                {
                  HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0);
                  return;
                }
              }
            }
          }
LABEL_23:
          sub_1C2D6EC(this, obj);
        }
      }
    }
    sub_1C2D6F4(this, obj, method);
  }
}


void BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_1C2D6EC(this, method);
  fbxcomponent->fields.timescale = time;
}


void BattleActorControl__setTypeEnemy(BattleActorControl_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 1;
}


void BattleActorControl__setTypePlayer(BattleActorControl_o *this, const MethodInfo *method)
{
  this->fields.isEnemy = 0;
}


void BattleActorControl__set_AdjustPopupComponents(
        BattleActorControl_o *this,
        BattleAdjustPopupPosInScreenComponent_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AdjustPopupComponents_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._AdjustPopupComponents_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActorControl__set_BuffEffectNodeName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._BuffEffectNodeName_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActorControl__set_CurrentAuraEffectId(BattleActorControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentAuraEffectId_k__BackingField = value;
}


void BattleActorControl__set_CurrentAuraPriority(BattleActorControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentAuraPriority_k__BackingField = value;
}


void BattleActorControl__set_IsStepInBattle(BattleActorControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsStepInBattle_k__BackingField = value;
}


void BattleActorControl__set_NodeDamage(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NodeDamage_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NodeDamage_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActorControl__set_NodeTarget(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NodeTarget_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NodeTarget_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActorControl__set_NodeText(
        BattleActorControl_o *this,
        UnityEngine_Transform_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._NodeText_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._NodeText_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void BattleActorControl__set_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PlayedOriginalAnimName_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActorControl__set_PrevSkillVoiceType(BattleActorControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.prevSkillVoiceType = value;
}


void BattleActorControl__set_delayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        System_Collections_Generic_List_int__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = value;
  sub_1C2D434(
    (CGThumbnailListItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void BattleActorControl__skipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0

  if ( !BattleActorControl__IsNoTouchSkip(this, method) )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1C2D6EC(0, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0);
  }
}


void BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattlePerformance_o *performance; // x8
  bool IsHighSpeedOption; // w0
  int32_t uniqueID; // w20
  bool v6; // w21
  float v7; // s0
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4C2A61F & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&StringLiteral_12236/*"SKIP_VOICE"*/);
    byte_4C2A61F = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0 )
    sub_1C2D6EC(this, method);
  IsHighSpeedOption = BattleData__IsHighSpeedOption((BattleData_o *)this, 0);
  uniqueID = v2->fields.uniqueID;
  v6 = IsHighSpeedOption;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v7 = 1.0;
  if ( v6 )
    v7 = 0.5;
  ServantAssetLoadManager__StopVoice(uniqueID, v7, 0);
  BattleActorControl__sendEventFSM_46896280(v2, (System_String_o *)StringLiteral_12236/*"SKIP_VOICE"*/, 0, v8);
}


void BattleActorControl__startBattleUIFade(
        BattleActorControl_o *this,
        float time,
        float targetAlpha,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1C2D6EC(0, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0);
}


void BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_4C2A629 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_endChangeAppearance__);
    byte_4C2A629 = 1;
  }
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0);
  v5 = BattleActorControl__waitChangeApp(this, v3, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x19
  struct System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v9; // w9
  bool v10; // w25
  System_Delegate_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x0
  intptr_t klass; // x2
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v20; // x8
  const MethodInfo *v21; // x2
  struct BattlePerformance_o *v22; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x20
  BattleFBXComponent_c *v24; // x0
  struct BattlePerformance_o *v25; // x8
  Il2CppObject *Instance; // x0
  BattlePerformance_o *v27; // x20
  BattleSequenceManager_o *v28; // x21
  struct BattlePerformance_o *v29; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v31; // x8
  BattleActorControl_o *v32; // x8
  int32_t m_CachedPtr; // w20
  int32_t v34; // w21
  struct BattleActionData_o *actiondata; // x8
  ExecutingTdInfo_o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  Il2CppObject *v39; // x20
  AssetManager_ResourceUnloadEventHandler_o *v40; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v42; // x20
  __int64 v43; // x21
  __int64 v44; // x22
  int32_t v45; // w21
  BattleActorControl_o *v46; // x8
  int32_t v47; // w22
  struct BattleServantData_o *v48; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v51; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v53; // x27
  UnityEngine_Object_o *v54; // x20
  struct BattlePerformance_o *v55; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v57; // x8
  struct BattleData_o *v58; // x8
  const MethodInfo *v59; // x2
  struct BattleServantData_o *v60; // x8
  CrashReporter_o *v61; // x19
  System_String_o *v62; // x0
  void *v63; // x0
  int v64; // w1
  __int64 v65; // x24
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+18h] [xbp-A8h] BYREF
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o svtId; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF
  int32_t patternId[2]; // [xsp+58h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v70; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16

  v6 = this;
  if ( (byte_4C2A602 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_1C2D490(&Method_BattleActorControl__startNoblePhantasm_b__310_0__);
    sub_1C2D490(&Method_BattleActorControl__startNoblePhantasm_b__310_1__);
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_1C2D490(&Method_FieldMotionManager_SetVariables_GameObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ValueTuple_VisibleControlInfo__BattleActorControl___Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&StringLiteral_9333/*"NPACTOR"*/);
    sub_1C2D490(&StringLiteral_12306/*"START_BATTLE_NOBLE_"*/);
    this = (BattleActorControl_o *)sub_1C2D490(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4C2A602 = 1;
  }
  *(_QWORD *)patternId = 0;
  memset(&i, 0, sizeof(i));
  svtId = (struct CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)0LL;
  noblePhantasmObjectVisibleCtrList = v6->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_73;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v9 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0);
  this = (BattleActorControl_o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                   v6,
                                   (const MethodInfo *)callback);
  if ( !this )
    goto LABEL_73;
  v10 = flg;
  v11 = (System_Delegate_o *)&Method_BattleActorControl__startNoblePhantasm_b__310_0__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v66,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  for ( i = v66;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
        BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 1, (BattleActorControl_o *)i.fields._current, v12) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 2, v6, v13);
    v14 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    klass = (intptr_t)v11->klass;
    v11 = (System_Delegate_o *)v14;
    System_Action___ctor(v14, (Il2CppObject *)v6, klass, 0);
    v16 = System_Delegate__Combine((System_Delegate_o *)callback, v11, 0);
    if ( !v16 || (System_Action_c *)v16->klass == System_Action_TypeInfo )
      break;
    sub_1C2D9AC(v16);
    if ( v64 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
      sub_1D165C4();
    }
    v65 = *(_QWORD *)__cxa_begin_catch(v63);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v65 )
      sub_1C2D6E4(v65);
  }
  v6->fields.noblePhantasmCallback = (struct System_Action_o *)v16;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->fields.noblePhantasmCallback, (int32_t)v16, v17, v18);
  this = (BattleActorControl_o *)v6->fields.fbxcomponent;
  if ( !this )
    goto LABEL_73;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)this, 0, 0);
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_73;
  this = (BattleActorControl_o *)performance->fields.bgPerf;
  if ( !this )
    goto LABEL_73;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 0, 0);
  v20 = v6->fields.performance;
  v6->fields.isPlayingNoblePhantasm = 1;
  if ( !v20 )
    goto LABEL_73;
  this = (BattleActorControl_o *)v20->fields.logic;
  if ( !this )
    goto LABEL_73;
  BattleLogic__ChangePhase((BattleLogic_o *)this, 4, 0);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(v6, 0, v21);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)this, 0, 0);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__AllServantGrandEffectStartStop((BattlePerformance_o *)this, 0, 0);
  v22 = v6->fields.performance;
  if ( !v22 )
    goto LABEL_73;
  fmManager_k__BackingField = v22->fields._fmManager_k__BackingField;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !fmManager_k__BackingField )
    goto LABEL_73;
  FieldMotionManager__SetVariables_object_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9333/*"NPACTOR"*/,
    (Il2CppObject *)this,
    (const MethodInfo_3123A18 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v24 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v24 = BattleFBXComponent_TypeInfo;
  }
  v24->static_fields->EnableEvent = 0;
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__changeShadowType((BattlePerformance_o *)this, 1, 0);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)this, 0);
  v25 = v6->fields.performance;
  if ( !v25 )
    goto LABEL_73;
  this = (BattleActorControl_o *)v25->fields.commandPerf;
  if ( !this )
    goto LABEL_73;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)this, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v27 = v6->fields.performance;
  v28 = (BattleSequenceManager_o *)Instance;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  v29 = v6->fields.performance;
  if ( !v29 )
    goto LABEL_73;
  bgPerf = v29->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_73;
  if ( !v28 )
    goto LABEL_73;
  BattleSequenceManager__init(
    v28,
    v27,
    (UnityEngine_GameObject_o *)this,
    v29->fields.p_actorlist,
    v29->fields.e_actorlist,
    v29->fields.actorcamera,
    bgPerf->fields.bgobject,
    0);
  v31 = v6->fields.performance;
  if ( !v31 )
    goto LABEL_73;
  this = (BattleActorControl_o *)v31->fields.data;
  v31->fields.isNoblePhantasmWhiteInFlg = v10;
  if ( !this )
    goto LABEL_73;
  BattleData__GetSequenceSelectType(
    (BattleData_o *)this,
    v6->fields.battleSvtData,
    v6->fields.isEnemy,
    &patternId[1],
    patternId,
    0);
  this = (BattleActorControl_o *)v6->fields.battleSvtData;
  if ( !this )
    goto LABEL_73;
  this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)this, 0);
  if ( !this )
    goto LABEL_73;
  v32 = this;
  this = (BattleActorControl_o *)v6->fields.battleSvtData;
  if ( !this )
    goto LABEL_73;
  m_CachedPtr = v32->fields.m_CachedPtr;
  this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0);
  if ( !v6->fields.battleSvtData )
    goto LABEL_73;
  v34 = (int)this;
  this = (BattleActorControl_o *)BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0);
  actiondata = v6->fields.actiondata;
  if ( !actiondata )
    goto LABEL_73;
  v36 = ExecutingTdInfo__Create(
          m_CachedPtr,
          v34,
          (int32_t)this,
          actiondata->fields.ActSetId,
          patternId[1],
          patternId[0],
          0);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  this->fields._PlayedOriginalAnimName_k__BackingField = (struct System_String_o *)v36;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField, (int32_t)v36, v37, v38);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)this, v6->fields.actiondata, 0);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_73;
  BattleSequenceManager__CacheRendererBaseAddColor((BattleSequenceManager_o *)this, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v40 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1C2D6DC(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v40,
      (Il2CppObject *)v6,
      Method_BattleActorControl__startNoblePhantasm_b__310_1__,
      0);
    if ( !v39 )
      goto LABEL_73;
    AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)v39, v40, 0);
  }
  else
  {
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = v6->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_73;
    v42 = (BattleSequenceManager_o *)this;
    v44 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v43 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v70.fields.currentCryptoKey = v44;
    *(_QWORD *)&v70.fields.fakeValue = v43;
    this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v70, 0);
    if ( !v6->fields.battleSvtData )
      goto LABEL_73;
    v45 = (int)this;
    this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice(v6->fields.battleSvtData, 0);
    if ( !this )
      goto LABEL_73;
    v46 = this;
    this = (BattleActorControl_o *)v6->fields.battleSvtData;
    if ( !this )
      goto LABEL_73;
    v47 = v46->fields.m_CachedPtr;
    this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0);
    v48 = v6->fields.battleSvtData;
    if ( !v48 )
      goto LABEL_73;
    overwriteSvtVoiceId = v48->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v48->fields.treasuredvcLevel;
    v51 = (int)this;
    NpChargeStage = BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0);
    v53 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1C2D6DC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v53,
      (Il2CppObject *)v6,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0);
    if ( !v42 )
      goto LABEL_73;
    BattleSequenceManager__loadSequence(
      v42,
      v45,
      v47,
      v51,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v53,
      0);
  }
  v54 = (UnityEngine_Object_o *)v6->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v54, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v55 = v6->fields.performance;
    if ( !v55 )
      goto LABEL_73;
    data = (UnityEngine_Object_o *)v55->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 && !v6->fields.isEnemy )
    {
      v57 = v6->fields.performance;
      if ( !v57 )
        goto LABEL_73;
      v58 = v57->fields.data;
      if ( !v58 )
        goto LABEL_73;
      ++v58->fields.playerNpCount;
    }
  }
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_73;
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)this, 1, 1, 0);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CrashReporter__get_Instance__);
  v60 = v6->fields.battleSvtData;
  if ( !v60 )
    goto LABEL_73;
  v61 = (CrashReporter_o *)this;
  svtId = v60->fields.svtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v71.fields.currentCryptoKey = &svtId;
  *(_QWORD *)&v71.fields.fakeValue = 0;
  v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__ToString(v71, v59);
  this = (BattleActorControl_o *)System_String__Concat_63457864((System_String_o *)StringLiteral_12306/*"START_BATTLE_NOBLE_"*/, v62, 0);
  if ( !v61 )
LABEL_73:
    sub_1C2D6EC(this, callback);
  CrashReporter__SetNowState(v61, (System_String_o *)this, 0);
}


void BattleActorControl__startWaitDeadEffect(BattleActorControl_o *this, const MethodInfo *method)
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
    || (BattleBuffData__clearActiveBuff((BattleBuffData_o *)this, 0), (v4 = v3->fields.battleSvtData) == 0)
    || (this = (BattleActorControl_o *)v4->fields.buffData) == 0
    || (BattleBuffData__clearAuraBuff((BattleBuffData_o *)this, 0),
        BattleActorControl__updateBuffLoopEffect(v3, v5),
        (this = (BattleActorControl_o *)v3->fields.battleSvtData) == 0) )
  {
LABEL_7:
    sub_1C2D6EC(this, method);
  }
  AuraIdList = BattleServantData__getAuraIdList((BattleServantData_o *)this, 0);
  BattleActorControl__updateAura(v3, AuraIdList, v7);
}


void BattleActorControl__stopAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.resumetimescale = this->fields.animetimescale;
  if ( !fbxcomponent )
    sub_1C2D6EC(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4C2A620 & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A620 = 1;
  }
  if ( !BattleActorControl__isNoVoice(this, method) )
  {
    uniqueID = this->fields.uniqueID;
    if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
    ServantAssetLoadManager__StopVoice(uniqueID, 0.0, 0);
  }
}


void BattleActorControl__updateAura(
        BattleActorControl_o *this,
        System_Int32_array *auraEffectList,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x20
  BattleActorControl_o *v4; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v6; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v10; // x0
  System_Func_T__TResult__o *_9__385_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 m_CancellationTokenSource_low; // x2
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v19; // x21
  unsigned __int64 v20; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v28; // x22
  unsigned __int64 v29; // x25
  int32_t v30; // w23
  Il2CppObject *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v33; // x2
  System_Collections_IEnumerator_o *v34; // x0
  il2cpp_array_size_t v35; // x8
  unsigned __int64 v36; // x22
  const MethodInfo *v37; // x3
  System_Collections_IEnumerator_o *v38; // x0

  v3 = auraEffectList;
  v4 = this;
  if ( (byte_4C2A638 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Remove_int__GameObject___);
    sub_1C2D490(&Method_DataManager_GetMasterData_AuraEffectMaster___);
    sub_1C2D490(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Except_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_BattleActorControl___c__updateAura_b__385_0__);
    this = (BattleActorControl_o *)sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A638 = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_63;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_63;
  this = (BattleActorControl_o *)BattleBuffData__GetIgnoreAuraBuffIds((BattleBuffData_o *)this, 0);
  if ( !this )
    goto LABEL_16;
  v6 = v4->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_63;
  buffData = v6->fields.buffData;
  if ( !buffData )
    goto LABEL_63;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v6->fields.buffData, 0);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0) )
  {
LABEL_16:
    v16 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( v3 )
      {
        max_length = v3->max_length;
        v19 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( (int)max_length >= 1 )
        {
          v20 = 0;
          while ( v20 < (unsigned int)max_length )
          {
            if ( !v19 )
              goto LABEL_63;
            this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v19,
                                             v3->m_Items[v20],
                                             (const MethodInfo_3387D98 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v16 )
                goto LABEL_63;
              auraEffectList = (System_Int32_array *)HIDWORD(this->fields.m_CachedPtr);
              items = v16->fields._items;
              v22 = Method_System_Collections_Generic_List_int__Add__;
              ++v16->fields._version;
              if ( !items )
                goto LABEL_63;
              size = v16->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v16,
                  (int32_t)auraEffectList,
                  *(const MethodInfo_376CB60 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
              }
              else
              {
                v16->fields._size = size + 1;
                items->m_Items[size] = (int)auraEffectList;
              }
            }
            LODWORD(max_length) = v3->max_length;
            if ( (__int64)++v20 >= (int)max_length )
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
                   (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          v26 = System_Linq_Enumerable__Except_int_(
                  v25,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                  (const MethodInfo_30F4194 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v26,
                                           (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
            v28 = this;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v29 = 0;
              while ( v29 < (unsigned int)m_CancellationTokenSource )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                v30 = *((_DWORD *)&v28->fields.noPlaymakerMotionActionDict + v29);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                         v30,
                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Item, 0, 0) )
                {
                  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
                  if ( !this )
                    goto LABEL_63;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                                   (UnityEngine_GameObject_o *)this,
                                                   0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                    goto LABEL_67;
                  if ( !Item )
                    goto LABEL_63;
                  this = (BattleActorControl_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)Item,
                                                   0);
                  if ( !this )
                    goto LABEL_63;
                  activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)this, 0);
                  if ( activeInHierarchy )
                  {
                    v34 = BattleActorControl__DestroyAuraEffect(
                            (BattleActorControl_o *)activeInHierarchy,
                            (UnityEngine_GameObject_o *)Item,
                            v33);
                    UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v4, v34, 0);
                  }
                  else
                  {
LABEL_67:
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)Item, 0);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                System_Collections_Generic_Dictionary_int__object___Remove(
                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                  v30,
                  (const MethodInfo_33E2704 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                 (const MethodInfo_33E0F2C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  *(_QWORD *)&v4->fields._CurrentAuraEffectId_k__BackingField = 0;
                LODWORD(m_CancellationTokenSource) = v28->fields.m_CancellationTokenSource;
                if ( (__int64)++v29 >= (int)m_CancellationTokenSource )
                  goto LABEL_52;
              }
              goto LABEL_64;
            }
LABEL_52:
            this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0);
            if ( this )
            {
              this = (BattleActorControl_o *)UnityEngine_GameObject__get_activeInHierarchy(
                                               (UnityEngine_GameObject_o *)this,
                                               0);
              if ( ((unsigned __int8)this & 1) == 0 )
                return;
              v35 = v3->max_length;
              if ( (int)v35 < 1 )
                return;
              v36 = 0;
              while ( v36 < (unsigned int)v35 )
              {
                if ( !v19 )
                  goto LABEL_63;
                this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v19,
                                                 v3->m_Items[v36],
                                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  m_CancellationTokenSource_low = LODWORD(this->fields.m_CancellationTokenSource);
                  if ( v4->fields._CurrentAuraPriority_k__BackingField <= (int)m_CancellationTokenSource_low )
                  {
                    v38 = BattleActorControl__coAddAura(
                            v4,
                            HIDWORD(this->fields.m_CachedPtr),
                            m_CancellationTokenSource_low,
                            v37);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v38,
                                                     0);
                  }
                }
                LODWORD(v35) = v3->max_length;
                if ( (__int64)++v36 >= (int)v35 )
                  return;
              }
LABEL_64:
              sub_1C2D6F4(this, auraEffectList, m_CancellationTokenSource_low);
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C2D6EC(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v10 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v10 = BattleActorControl___c_TypeInfo;
  }
  _9__385_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__385_0;
  if ( !_9__385_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleActorControl___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__385_0 = (System_Func_T__TResult__o *)sub_1C2D6DC(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__385_0,
      v12,
      Method_BattleActorControl___c__updateAura_b__385_0__,
      0);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__385_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__385_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__385_0, (int32_t)_9__385_0, v14, v15);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__385_0,
    (const MethodInfo_30BD544 *)Method_BasicHelper_Remove_int__GameObject___);
}


void BattleActorControl__updateBuffIcon(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  __int64 v5; // x2
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v7; // x20
  unsigned __int64 v8; // x25
  struct BattlePerformance_o *performance; // x8
  BattleServantData_o *v10; // x21
  struct BattlePerformance_o *v11; // x8
  BattleActorControl___c_c *v12; // x0
  BattleData_o *data; // x22
  System_Action_object__o *_9__252_0; // x23
  Il2CppObject *v15; // x24
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v4 = this;
  if ( (byte_4C2A5D9 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_BattleServantData__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__updateBuffIcon_b__252_0__);
    this = (BattleActorControl_o *)sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A5D9 = 1;
  }
  if ( !actionData )
    goto LABEL_21;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0);
  if ( !this )
    goto LABEL_21;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2D6F4(this, actionData, v5);
      performance = v4->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v7->fields.noPlaymakerMotionActionDict + v8),
                                       0);
      if ( this )
      {
        v10 = (BattleServantData_o *)this;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0);
        v11 = v4->fields.performance;
        if ( !v11 )
          break;
        v12 = BattleActorControl___c_TypeInfo;
        data = v11->fields.data;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v12 = BattleActorControl___c_TypeInfo;
        }
        _9__252_0 = (System_Action_object__o *)v12->static_fields->__9__252_0;
        if ( !_9__252_0 )
        {
          if ( !v12->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v12);
            v12 = BattleActorControl___c_TypeInfo;
          }
          v15 = (Il2CppObject *)v12->static_fields->__9;
          _9__252_0 = (System_Action_object__o *)sub_1C2D6DC(System_Action_BattleServantData__TypeInfo);
          System_Action_object____ctor(_9__252_0, v15, Method_BattleActorControl___c__updateBuffIcon_b__252_0__, 0);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__252_0 = (struct System_Action_BattleServantData__o *)_9__252_0;
          sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__252_0, (int32_t)_9__252_0, v17, v18);
        }
        BattleServantData__UpdateBuffExistSyncUsedBuffDataSvt(
          v10,
          data,
          (System_Action_BattleServantData__o *)_9__252_0,
          0);
      }
      LODWORD(m_CancellationTokenSource) = v7->fields.m_CancellationTokenSource;
      if ( (__int64)++v8 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_21:
    sub_1C2D6EC(this, actionData);
  }
}


void BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleServantData_o *battleSvtData; // x8
  System_Collections_Generic_List_object__o *EffectBuffList; // x21
  Il2CppObject *MasterData_object; // x22
  System_Collections_Generic_List_int__o *v6; // x20
  int32_t v7; // w23
  BuffEntity_o *Entity; // x24
  const MethodInfo *v9; // x2
  struct System_Int32_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  __int64 v13; // x2
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v15; // x24
  unsigned int v16; // w28
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t current; // w21
  const MethodInfo *v21; // x2
  System_Collections_IEnumerator_o *v22; // x1
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v24; // [xsp+20h] [xbp-A0h] BYREF

  v2 = this;
  if ( (byte_4C2A64C & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C2D490(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____78065216);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    this = (BattleActorControl_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C2A64C = 1;
  }
  memset(&v24, 0, sizeof(v24));
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_37;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_37;
  EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_BuffMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !EffectBuffList )
    goto LABEL_37;
  if ( EffectBuffList->fields._size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___get_Item(
                                       EffectBuffList,
                                       v7,
                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !this )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 this->fields.m_CachedPtr,
                                 (const MethodInfo_3387D98 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v9);
      if ( !Entity || !v6 )
        goto LABEL_37;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v6,
                                       Entity->fields.effectId,
                                       (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        method = (const MethodInfo *)(unsigned int)Entity->fields.effectId;
        items = v6->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v6->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            (int32_t)method,
            *(const MethodInfo_376CB60 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size] = (int)method;
        }
        this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_37;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               Entity->fields.effectId,
               (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____78065216);
          if ( !this )
            goto LABEL_37;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v15 = this;
          if ( m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_28:
      if ( ++v7 >= EffectBuffList->fields._size )
        goto LABEL_29;
    }
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= m_CancellationTokenSource )
        sub_1C2D6F4(this, method, v13);
      this = (BattleActorControl_o *)*((_QWORD *)&v15->fields.noPlaymakerMotionActionDict + (int)v16);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v7 * 0.01) + -1.0,
        0);
      m_CancellationTokenSource = (int)v15->fields.m_CancellationTokenSource;
      if ( (int)++v16 >= m_CancellationTokenSource )
        goto LABEL_28;
    }
LABEL_37:
    sub_1C2D6EC(this, method);
  }
LABEL_29:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_37;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           (const MethodInfo_33E0F3C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_3112A1C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v24,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v18 )
      break;
    if ( !v6 )
      sub_1C2D6EC(v18, v19);
    current = v24.fields._current;
    if ( !System_Collections_Generic_List_int___Contains(
            v6,
            v24.fields._current,
            (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v22 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v21);
      UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)v2, v22, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v24,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  void *ComponentsInChildren_object__51538676; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  int v9; // w8
  _DWORD *v10; // x20
  unsigned int v11; // w22
  char *v12; // x8
  UnityEngine_Renderer_o *v13; // x21
  BattleActorControl_c *v14; // x0
  float defaultHeight; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  int v19; // w8
  _DWORD *v20; // x19
  unsigned int v21; // w23
  char *v22; // x8
  UnityEngine_Component_o *v23; // x20
  __int64 v24; // x8
  _QWORD *v25; // x21
  unsigned __int64 v26; // x28
  UnityEngine_Material_o *v27; // x22
  System_String_o *v28; // x1
  UnityEngine_Material_o *v29; // x0
  float v30; // s0
  float y; // s10
  float v32; // s11
  float v33; // s12
  UnityEngine_Bounds_o v34; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A5F0 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_16165/*"_ClipSharpnessY"*/);
    sub_1C2D490(&StringLiteral_16169/*"_Color"*/);
    sub_1C2D490(&StringLiteral_24768/*"weapon"*/);
    sub_1C2D490(&StringLiteral_17319/*"body"*/);
    byte_4C2A5F0 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__51538676 = (void *)UnityEngine_Object__op_Inequality(gameObject, 0, 0);
  if ( ((unsigned __int8)ComponentsInChildren_object__51538676 & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_44;
    ComponentsInChildren_object__51538676 = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !ComponentsInChildren_object__51538676 )
      goto LABEL_44;
    v9 = *((_DWORD *)ComponentsInChildren_object__51538676 + 6);
    v10 = ComponentsInChildren_object__51538676;
    if ( v9 >= 1 )
    {
      v11 = 0;
      while ( v11 < v9 )
      {
        v12 = (char *)&v10[2 * v11];
        v13 = (UnityEngine_Renderer_o *)*((_QWORD *)v12 + 4);
        if ( !v13 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = UnityEngine_Renderer__get_material(
                                                  *((UnityEngine_Renderer_o **)v12 + 4),
                                                  0);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = (void *)UnityEngine_Material__HasProperty_71029840(
                                                          (UnityEngine_Material_o *)ComponentsInChildren_object__51538676,
                                                          (System_String_o *)StringLiteral_16169/*"_Color"*/,
                                                          0);
        if ( ((unsigned __int8)ComponentsInChildren_object__51538676 & 1) != 0 )
        {
          v14 = BattleActorControl_TypeInfo;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v14 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v14->static_fields->defaultHeight;
          ComponentsInChildren_object__51538676 = UnityEngine_Renderer__get_material(v13, 0);
          if ( !ComponentsInChildren_object__51538676 )
            goto LABEL_44;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)ComponentsInChildren_object__51538676, 0);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          ComponentsInChildren_object__51538676 = UnityEngine_Renderer__get_material(v13, 0);
          if ( !ComponentsInChildren_object__51538676 )
            goto LABEL_44;
          v36.fields.a = 1.0 - (float)(val / defaultHeight);
          v36.fields.r = r;
          v36.fields.g = g;
          v36.fields.b = b;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)ComponentsInChildren_object__51538676, v36, 0);
        }
        v9 = v10[6];
        if ( (int)++v11 >= v9 )
          goto LABEL_20;
      }
LABEL_45:
      sub_1C2D6F4(ComponentsInChildren_object__51538676, v7, v8);
    }
LABEL_20:
    ComponentsInChildren_object__51538676 = UnityEngine_GameObject__GetComponentsInChildren_object__51538676(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3126AF4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !ComponentsInChildren_object__51538676 )
LABEL_44:
      sub_1C2D6EC(ComponentsInChildren_object__51538676, v7);
    v19 = *((_DWORD *)ComponentsInChildren_object__51538676 + 6);
    v20 = ComponentsInChildren_object__51538676;
    if ( v19 >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= v19 )
          goto LABEL_45;
        v22 = (char *)&v20[2 * v21];
        v23 = (UnityEngine_Component_o *)*((_QWORD *)v22 + 4);
        if ( !v23 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = UnityEngine_Renderer__get_materials(
                                                  *((UnityEngine_Renderer_o **)v22 + 4),
                                                  0);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_44;
        v24 = *((_QWORD *)ComponentsInChildren_object__51538676 + 3);
        v25 = ComponentsInChildren_object__51538676;
        if ( (int)v24 >= 1 )
          break;
LABEL_42:
        v19 = v20[6];
        if ( (int)++v21 >= v19 )
          return;
      }
      v26 = 0;
      while ( v26 < (unsigned int)v24 )
      {
        v27 = (UnityEngine_Material_o *)v25[v26 + 4];
        ComponentsInChildren_object__51538676 = UnityEngine_Component__get_gameObject(v23, 0);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__51538676,
                                                  0);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__51538676,
                                                          (System_String_o *)StringLiteral_17319/*"body"*/,
                                                          0);
        if ( ((unsigned __int8)ComponentsInChildren_object__51538676 & 1) != 0 )
          goto LABEL_35;
        ComponentsInChildren_object__51538676 = UnityEngine_Component__get_gameObject(v23, 0);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__51538676,
                                                  0);
        if ( !ComponentsInChildren_object__51538676 )
          goto LABEL_44;
        ComponentsInChildren_object__51538676 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__51538676,
                                                          (System_String_o *)StringLiteral_24768/*"weapon"*/,
                                                          0);
        if ( ((unsigned __int8)ComponentsInChildren_object__51538676 & 1) != 0 )
        {
LABEL_35:
          if ( !v27 )
            goto LABEL_44;
          v28 = (System_String_o *)StringLiteral_16165/*"_ClipSharpnessY"*/;
          v29 = v27;
          v30 = val;
        }
        else
        {
          UnityEngine_Renderer__get_localBounds(&v34, (UnityEngine_Renderer_o *)v23, 0);
          y = v34.fields.m_Center.fields.y;
          UnityEngine_Renderer__get_localBounds(&v34, (UnityEngine_Renderer_o *)v23, 0);
          v32 = v34.fields.m_Extents.fields.y;
          UnityEngine_Renderer__get_localBounds(&v34, (UnityEngine_Renderer_o *)v23, 0);
          ComponentsInChildren_object__51538676 = BattleActorControl_TypeInfo;
          v33 = v34.fields.m_Extents.fields.y;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          if ( !v27 )
            goto LABEL_44;
          v28 = (System_String_o *)StringLiteral_16165/*"_ClipSharpnessY"*/;
          v29 = v27;
          v30 = (float)(y - v32)
              + (float)((float)((float)((float)(v33 + v33) + 0.2)
                              / BattleActorControl_TypeInfo->static_fields->defaultHeight)
                      * val);
        }
        UnityEngine_Material__SetFloat(v29, v28, v30, 0);
        LODWORD(v24) = *((_DWORD *)v25 + 6);
        if ( (__int64)++v26 >= (int)v24 )
          goto LABEL_42;
      }
      goto LABEL_45;
    }
  }
}


System_Collections_IEnumerator_o *BattleActorControl__waitChangeApp(
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

  if ( (byte_4C2A62A & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl__waitChangeApp_d__368_TypeInfo);
    byte_4C2A62A = 1;
  }
  v5 = sub_1C2D6DC(BattleActorControl__waitChangeApp_d__368_TypeInfo);
  BattleActorControl__waitChangeApp_d__368___ctor((BattleActorControl__waitChangeApp_d__368_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C2D6EC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_Collections_Generic_Queue_T__o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C2A67D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
    sub_1C2D490(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
    byte_4C2A67D = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1;
  this->fields.afterWaitTime = 0.1;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._activeFsmNameList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1C2D6DC(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_39307A0 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._callBackQueue, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.battleActor = actor;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.battleActor, (int32_t)actor, v11, v12);
}


void BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *activeFsmNameList; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4C2A67F & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4C2A67F = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_object__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    goto LABEL_9;
  v5 = System_Collections_Generic_List_object___Contains(
         activeFsmNameList,
         (Il2CppObject *)fsmName,
         (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( v5 )
    return;
  items = activeFsmNameList->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++activeFsmNameList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C2D6EC(v5, v6);
  size = activeFsmNameList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      activeFsmNameList,
      (Il2CppObject *)fsmName,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    activeFsmNameList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)fsmName;
    sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), (int32_t)fsmName, v8, v9);
  }
}


void BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4C2A681 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
    byte_4C2A681 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1C2D6EC(0, v5);
  System_Collections_Generic_Queue_object___Enqueue(
    callBackQueue,
    (Il2CppObject *)callBack,
    (const MethodInfo_3930D68 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4C2A682 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__);
    byte_4C2A682 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0;
  BattleActorControl_ActorMotionActiveCheck__init(this, v3);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1C2D6EC(0, v4);
  if ( callBackQueue->fields._size < 1 )
    return 0;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_object___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_3930EF8 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
}


System_Collections_Generic_List_string__o *BattleActorControl_ActorMotionActiveCheck__get_ActiveFsmNameList(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  return this->fields._activeFsmNameList;
}


System_Collections_Generic_Queue_BattleCallBackBase__o *BattleActorControl_ActorMotionActiveCheck__get_CallBackQueue(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  return this->fields._callBackQueue;
}


bool BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8

  if ( (byte_4C2A67C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C2A67C = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1C2D6EC(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x0

  if ( (byte_4C2A680 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4C2A680 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1C2D6EC(0, v5);
  return System_Collections_Generic_List_object___Remove(
           (System_Collections_Generic_List_object__o *)activeFsmNameList,
           (Il2CppObject *)fsmName,
           (const MethodInfo_378B0AC *)Method_System_Collections_Generic_List_string__Remove__);
}


void BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4C2A67E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
    byte_4C2A67E = 1;
  }
  battleActor = this->fields.battleActor;
  if ( !battleActor )
    goto LABEL_12;
  if ( this->fields.uniqueId == battleActor->fields.uniqueID )
  {
    wave = this->fields.wave;
    if ( wave == BattleActorControl__getWaveCount(battleActor, 0) )
      return;
    battleActor = this->fields.battleActor;
    if ( !battleActor )
      goto LABEL_12;
  }
  this->fields.uniqueId = battleActor->fields.uniqueID;
  battleActor = (BattleActorControl_o *)BattleActorControl__getWaveCount(battleActor, 0);
  activeFsmNameList = this->fields._activeFsmNameList;
  this->fields.wave = (int)battleActor;
  if ( !activeFsmNameList )
    goto LABEL_12;
  size = activeFsmNameList->fields._size;
  v7 = activeFsmNameList->fields._version + 1;
  activeFsmNameList->fields._size = 0;
  activeFsmNameList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)activeFsmNameList->fields._items, 0, size, 0);
  battleActor = (BattleActorControl_o *)this->fields._callBackQueue;
  if ( !battleActor )
LABEL_12:
    sub_1C2D6EC(battleActor, method);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)battleActor,
    (const MethodInfo_3930A28 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
}


void BattleActorControl_EndCallEvent___ctor(
        BattleActorControl_EndCallEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A754F0;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C2D548(method);
        v12 = sub_1C2DA04(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A755EC;
          else
            v9 = sub_1A755B0;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A7552C;
        }
        else
        {
          v9 = sub_1A75500;
        }
      }
      else
      {
        v9 = sub_1A754D0;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A75488;
}


System_IAsyncResult_o *BattleActorControl_EndCallEvent__BeginInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  System_Collections_Hashtable_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = hash;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v6, callback, object);
}


void BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void BattleActorControl_EndCallEvent__Invoke(
        BattleActorControl_EndCallEvent_o *this,
        System_Collections_Hashtable_o *hash,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, System_Collections_Hashtable_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    hash,
    this->fields.method);
}


void BattleActorControl_EventClass___ctor(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl_EventClass__Add(
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

  if ( (byte_4C2A67B & 1) == 0 )
  {
    sub_1C2D490(&System_Collections_Hashtable_TypeInfo);
    byte_4C2A67B = 1;
  }
  table = this->fields.table;
  p_table = (CGThumbnailListItem_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_1C2D6DC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_64822836(v10, 0);
    p_table->klass = (CGThumbnailListItem_c *)v10;
    sub_1C2D434(p_table, (int32_t)v10, v11, v12);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_1C2D6EC(0, v13);
  }
  (*(void (__fastcall **)(void *, System_String_o *, Il2CppObject *, _QWORD))(*(_QWORD *)klass + 664LL))(
    klass,
    key,
    obj,
    *(_QWORD *)(*(_QWORD *)klass + 672LL));
}


void BattleActorControl_EventClass__Proc(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  struct BattleActorControl_EndCallEvent_o *eventcall; // x8

  eventcall = this->fields.eventcall;
  if ( !eventcall )
    sub_1C2D6EC(this, method);
  ((void (__fastcall *)(intptr_t, struct System_Collections_Hashtable_o *, intptr_t))eventcall->fields.invoke_impl)(
    eventcall->fields.method_code,
    this->fields.table,
    eventcall->fields.method);
}


void BattleActorControl_ExtraLoadedVoiceArgs___ctor(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        BattleServantData_o *svtData,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C2A67A & 1) == 0 )
  {
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C2A67A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !svtData )
    sub_1C2D6EC(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v9, 0);
  this->fields._dispLimitCount_k__BackingField = BattleServantData__getDispLimitCount(svtData, 1, 0);
  this->fields._overwriteSvtVoiceId_k__BackingField = svtData->fields.overwriteSvtVoiceId;
}


int32_t BattleActorControl_ExtraLoadedVoiceArgs__get_dispLimitCount(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._dispLimitCount_k__BackingField;
}


int32_t BattleActorControl_ExtraLoadedVoiceArgs__get_overwriteSvtVoiceId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._overwriteSvtVoiceId_k__BackingField;
}


int32_t BattleActorControl_ExtraLoadedVoiceArgs__get_svtId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._svtId_k__BackingField;
}


void BattleActorControl_ExtraLoadedVoiceArgs__set_dispLimitCount(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._dispLimitCount_k__BackingField = value;
}


void BattleActorControl_ExtraLoadedVoiceArgs__set_overwriteSvtVoiceId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._overwriteSvtVoiceId_k__BackingField = value;
}


void BattleActorControl_ExtraLoadedVoiceArgs__set_svtId(
        BattleActorControl_ExtraLoadedVoiceArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._svtId_k__BackingField = value;
}


void BattleActorControl__ColShiftServantPartChangeOnly_d__393___ctor(
        BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__ColShiftServantPartChangeOnly_d__393__MoveNext(
        BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *this,
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
    ActionExtensions__Call(finishCallback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  _4__this = this->fields.__4__this;
  this->fields.__1__state = -1;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  v5 = (Il2CppObject *)BattleActorControl__colShiftServantChange(
                         _4__this,
                         this->fields.shiftSvt,
                         this->fields.isShift,
                         0);
  this->fields.__2__current = v5;
  p__2__current = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v7, v8);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *BattleActorControl__ColShiftServantPartChangeOnly_d__393__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__ColShiftServantPartChangeOnly_d__393__System_Collections_IEnumerator_Reset(
        BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__ColShiftServantPartChangeOnly_d__393_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__ColShiftServantPartChangeOnly_d__393__System_Collections_IEnumerator_get_Current(
        BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__ColShiftServantPartChangeOnly_d__393__System_IDisposable_Dispose(
        BattleActorControl__ColShiftServantPartChangeOnly_d__393_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__CoroutineChangeBattleModel_d__376___ctor(
        BattleActorControl__CoroutineChangeBattleModel_d__376_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__CoroutineChangeBattleModel_d__376__MoveNext(
        BattleActorControl__CoroutineChangeBattleModel_d__376_o *this,
        const MethodInfo *method)
{
  BattleActorControl__CoroutineChangeBattleModel_d__376_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool v7; // w21
  System_Collections_Generic_List_int__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  BattleServantData_o *battleSvtData; // x21
  ServantAssetArgs_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleActionData_ChangeModelActionData_o *changeModelActData; // x8
  ServantAssetLoadManager_o *v19; // x21
  struct BattleServantData_o *v20; // x8
  struct BattleServantData_o *v21; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x21
  _BOOL4 isForceAppearance; // w22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  CGThumbnailListItem_o *v26; // x19
  int v27; // w8
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v2 = this;
  if ( (byte_4C2A68E & 1) == 0 )
  {
    sub_1C2D490(&ServantAssetArgs_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4C2A68E = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_35;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0);
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_35;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0);
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, 0, v5, v6);
      v7 = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return v7;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      BattleActorControl__RemoveColliderFromPerformance(_4__this, 0);
      v8 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0);
      v2->fields._moveEffect_5__2 = v8;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v8, v9, v10);
      battleSvtData = _4__this->fields.battleSvtData;
      v12 = (ServantAssetArgs_o *)sub_1C2D6DC(ServantAssetArgs_TypeInfo);
      ServantAssetArgs___ctor(v12, battleSvtData, 0);
      v2->fields._beforeServantAssetArgs_5__3 = v12;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._beforeServantAssetArgs_5__3, (int32_t)v12, v13, v14);
      v7 = 1;
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0);
      v2->fields.__2__current = 0;
      v15 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v15, 0, v16, v17);
      LODWORD(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
      return v7;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      changeModelActData = v2->fields.changeModelActData;
      if ( !changeModelActData )
        goto LABEL_35;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_35;
      BattleServantData__SetChangeModelData(
        (BattleServantData_o *)this,
        changeModelActData->fields._ChangeData_k__BackingField,
        0);
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
      if ( !_4__this->fields.battleSvtData )
        goto LABEL_35;
      v19 = (ServantAssetLoadManager_o *)this;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                          _4__this->fields.battleSvtData,
                                                                          0);
      v20 = _4__this->fields.battleSvtData;
      if ( !v20 || !v19 )
        goto LABEL_35;
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)ServantAssetLoadManager__IsPreloadedBattleActor(
                                                                          v19,
                                                                          (ServantAssetArgs_o *)this,
                                                                          v20->fields.isForceAppearance,
                                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_29;
      v21 = _4__this->fields.battleSvtData;
      if ( !v21 )
        goto LABEL_35;
      LoadedAssetArgs_k__BackingField = v21->fields._LoadedAssetArgs_k__BackingField;
      isForceAppearance = v21->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadBattleActor(LoadedAssetArgs_k__BackingField, isForceAppearance, 0);
LABEL_22:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__CoroutineChangeBattleModel_d__376_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        v26 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v26, 0, v24, v25);
        v27 = 3;
LABEL_31:
        LODWORD(v26[-1].fields._ThumbnailSpritePath_k__BackingField) = v27;
        return 1;
      }
      if ( !_4__this )
LABEL_35:
        sub_1C2D6EC(this, method);
LABEL_29:
      BattleActorControl__DestroyBeforeModelChangeActorObject(_4__this, v2->fields._beforeServantAssetArgs_5__3, 0);
      BattleActorControl__AfterProcLoadedChangeModel(_4__this, 0, 0);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0;
        v26 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v26, 0, v28, v29);
        v27 = 4;
        goto LABEL_31;
      }
LABEL_32:
      ActionExtensions__Call(v2->fields.finishCallback, 0);
      return 0;
    case 3:
      v2->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_35;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0);
      goto LABEL_32;
    default:
      return 0;
  }
}


Il2CppObject *BattleActorControl__CoroutineChangeBattleModel_d__376__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__CoroutineChangeBattleModel_d__376_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__CoroutineChangeBattleModel_d__376__System_Collections_IEnumerator_Reset(
        BattleActorControl__CoroutineChangeBattleModel_d__376_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__CoroutineChangeBattleModel_d__376_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__CoroutineChangeBattleModel_d__376__System_Collections_IEnumerator_get_Current(
        BattleActorControl__CoroutineChangeBattleModel_d__376_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__CoroutineChangeBattleModel_d__376__System_IDisposable_Dispose(
        BattleActorControl__CoroutineChangeBattleModel_d__376_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__DestroyAuraEffect_d__386___ctor(
        BattleActorControl__DestroyAuraEffect_d__386_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__DestroyAuraEffect_d__386__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__386_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattleActorControl__DestroyAuraEffect_d__386_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *Component_object; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleActorControl__DestroyAuraEffect_d__386_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__386_o *v11; // x20
  __int64 v12; // x9
  int32_t *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x20
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  UnityEngine_ParticleSystem_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_ParticleSystem_MainModule_o v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v34; // x22
  UnityEngine_Object_o *v35; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *effectObject; // x20
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__386_o *v40; // x20
  unsigned __int64 v41; // x24
  UnityEngine_Object_o *v42; // x21
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v44; // x8
  BattleActorControl__DestroyAuraEffect_d__386_o *v45; // x21
  unsigned __int64 v46; // x25
  UnityEngine_Object_o *v47; // x22
  UnityEngine_Object_o *v48; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C2A68F & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_ExcludeNull_ParticleSystem___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A68F = 1;
  }
  m_ParticleSystem = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)v4->fields.effectObject;
    v4->fields.__1__state = -1;
    if ( !this )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_Object__op_Inequality(
                                                               (UnityEngine_Object_o *)Component_object,
                                                               0,
                                                               0);
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
        if ( !UnityEngine_Object__op_Equality(effectObject, 0, 0) )
        {
          this = (BattleActorControl__DestroyAuraEffect_d__386_o *)v4->fields.effectObject;
          if ( this )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____78065224);
            if ( this )
            {
              _2__current = this->fields.__2__current;
              v40 = this;
              if ( (int)_2__current >= 1 )
              {
                v41 = 0;
                while ( 1 )
                {
                  if ( v41 >= (unsigned int)_2__current )
                    goto LABEL_89;
                  v42 = (UnityEngine_Object_o *)*((_QWORD *)&v40->fields.effectObject + v41);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_Object__op_Equality(v42, 0, 0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v42 )
                      goto LABEL_90;
                    materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                      (UnityEngine_Renderer_o *)v42,
                                                                      0);
                    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)BasicHelper__IsNullOrEmpty(materials, 0);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_Renderer__get_materials(
                                                                                 (UnityEngine_Renderer_o *)v42,
                                                                                 0);
                      if ( !this )
                        goto LABEL_90;
                      v44 = this->fields.__2__current;
                      v45 = this;
                      if ( (int)v44 >= 1 )
                        break;
                    }
                  }
LABEL_84:
                  LODWORD(_2__current) = v40->fields.__2__current;
                  if ( (__int64)++v41 >= (int)_2__current )
                    goto LABEL_85;
                }
                v46 = 0;
                while ( v46 < (unsigned int)v44 )
                {
                  v47 = (UnityEngine_Object_o *)*((_QWORD *)&v45->fields.effectObject + v46);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_Object__op_Equality(v47, 0, 0);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_71163704(v47, 0);
                  }
                  LODWORD(v44) = v45->fields.__2__current;
                  if ( (__int64)++v46 >= (int)v44 )
                    goto LABEL_84;
                }
LABEL_89:
                sub_1C2D6F4(this, method, v2);
              }
LABEL_85:
              v48 = (UnityEngine_Object_o *)v4->fields.effectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_71163704(v48, 0);
              return 0;
            }
          }
LABEL_90:
          sub_1C2D6EC(this, method);
        }
        return 0;
      }
    }
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)v4->fields.effectObject;
    if ( !this )
      goto LABEL_90;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._particleArray_5__2, (int32_t)ComponentsInChildren_object, v8, v9);
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)v4->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_90;
    v4->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)BasicHelper__ExcludeNull_object_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_30B8644 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    if ( !this )
      goto LABEL_90;
    klass = this->klass;
    v11 = this;
    v12 = *(unsigned __int16 *)&this->klass->_2.rank;
    if ( *(_WORD *)&this->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_18:
      v14 = sub_1C7DCA8(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0);
    }
    v16 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__386_o *, _QWORD))v14)(
            v11,
            *(_QWORD *)(v14 + 8));
    if ( !v16 )
      sub_1C2D6EC(0, v15);
    while ( 1 )
    {
      v17 = *(_QWORD *)v16;
      v18 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v18;
          v19 += 4;
          if ( !v18 )
            goto LABEL_26;
        }
        v20 = v17 + 16LL * *v19 + 312;
      }
      else
      {
LABEL_26:
        v20 = sub_1C7DCA8(v16, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v16, *(_QWORD *)(v20 + 8)) & 1) == 0 )
        break;
      v21 = *(_QWORD *)v16;
      v22 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_ParticleSystem__c **)v23 - 1) != System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_33;
        }
        v24 = v21 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_33:
        v24 = sub_1C7DCA8(v16, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0);
      }
      v25 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
      if ( !v25 )
        sub_1C2D6EC(0, v26);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v25, 0).fields.m_ParticleSystem;
      v27.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v27, 0, 0);
    }
    v28 = *(_QWORD *)v16;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_41;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_41:
      v31 = sub_1C7DCA8(v16, System_IDisposable_TypeInfo, 0);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__386_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(
                                                               v16,
                                                               *(_QWORD *)(v31 + 8));
  }
  if ( v4->fields._aliveCount_5__3 <= 0 )
  {
    v4->fields._particleArray_5__2 = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._particleArray_5__2, 0, v2, v3);
    goto LABEL_60;
  }
  particleArray_5__2 = v4->fields._particleArray_5__2;
  v4->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_90;
  max_length = particleArray_5__2->max_length;
  if ( (int)max_length >= 1 )
  {
    v34 = 0;
    while ( v34 < (unsigned int)max_length )
    {
      v35 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v34];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_Object__op_Equality(v35, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v35 )
          goto LABEL_90;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v35, 0) )
          UnityEngine_ParticleSystem__Stop_71447464((UnityEngine_ParticleSystem_o *)v35, 0);
        this = (BattleActorControl__DestroyAuraEffect_d__386_o *)UnityEngine_ParticleSystem__IsAlive_71447732(
                                                                   (UnityEngine_ParticleSystem_o *)v35,
                                                                   0);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v4->fields._aliveCount_5__3;
      }
      LODWORD(max_length) = particleArray_5__2->max_length;
      if ( (__int64)++v34 >= (int)max_length )
        goto LABEL_58;
    }
    goto LABEL_89;
  }
LABEL_58:
  v4->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattleActorControl__DestroyAuraEffect_d__386__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__386_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__DestroyAuraEffect_d__386__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__386_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__DestroyAuraEffect_d__386_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__DestroyAuraEffect_d__386__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__386_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__DestroyAuraEffect_d__386__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__386_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__DestroyEffectOnParticleStop_d__415___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__415_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__DestroyEffectOnParticleStop_d__415__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__415_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  BattleActorControl__DestroyEffectOnParticleStop_d__415_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int aliveCount_5__3; // w8
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x22
  UnityEngine_Object_o *v15; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4C2A690 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A690 = 1;
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
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_3126B70 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____78065208);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    p_particleArray_5__2 = &v4->fields._particleArray_5__2;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._particleArray_5__2, (int32_t)ComponentsInChildren_object, v9, v10);
    if ( !v4->fields._particleArray_5__2 )
      goto LABEL_32;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !this )
      goto LABEL_35;
    if ( BYTE2(this->fields.key) )
    {
LABEL_32:
      BattleActorControl__DestroyLoopEffect(_4__this, v4->fields.key, 0);
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
    sub_1C2D6EC(this, method);
  }
  particleArray_5__2 = v4->fields._particleArray_5__2;
  v4->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_35;
  max_length = particleArray_5__2->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    do
    {
      if ( v14 >= (unsigned int)max_length )
        sub_1C2D6F4(this, method, v2);
      v15 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v14];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)UnityEngine_Object__op_Equality(v15, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v15 )
          goto LABEL_35;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v15, 0) )
          UnityEngine_ParticleSystem__Stop_71447464((UnityEngine_ParticleSystem_o *)v15, 0);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__415_o *)UnityEngine_ParticleSystem__IsAlive_71447732(
                                                                             (UnityEngine_ParticleSystem_o *)v15,
                                                                             0);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v4->fields._aliveCount_5__3;
      }
      LODWORD(max_length) = particleArray_5__2->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)max_length );
  }
  v4->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C2D434(p__2__current, 0, v2, v3);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *BattleActorControl__DestroyEffectOnParticleStop_d__415__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__415_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__415__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__415_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__415_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__DestroyEffectOnParticleStop_d__415__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__415_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__DestroyEffectOnParticleStop_d__415__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__415_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__WaitActiveCoroutine_d__166___ctor(
        BattleActorControl__WaitActiveCoroutine_d__166_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__WaitActiveCoroutine_d__166__MoveNext(
        BattleActorControl__WaitActiveCoroutine_d__166_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_Object_o *v4; // x20
  System_Action_o *action; // x0
  UnityEngine_GameObject_o *waitTarget; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int v13; // w8
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v15; // x20
  Il2CppObject **v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  if ( (byte_4C2A691 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C2A691 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    waitTarget = this->fields.waitTarget;
    this->fields.__1__state = -1;
    if ( !waitTarget )
      sub_1C2D6EC(0, method);
    if ( UnityEngine_GameObject__get_activeInHierarchy(waitTarget, 0) )
    {
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      this->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v9, v11, v12);
      v13 = 3;
    }
    else
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, 0, v7, v8);
      v13 = 2;
    }
    *((_DWORD *)p__2__current - 2) = v13;
    return 1;
  }
  else
  {
    if ( _1__state == 3 )
    {
      action = this->fields.action;
      this->fields.__1__state = -1;
      goto LABEL_14;
    }
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    v4 = (UnityEngine_Object_o *)this->fields.waitTarget;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
    {
      action = this->fields.action;
LABEL_14:
      ActionExtensions__Call(action, 0);
      return 0;
    }
    v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v15, 0);
    this->fields.__2__current = (Il2CppObject *)v15;
    v16 = &this->fields.__2__current;
    sub_1C2D434((CGThumbnailListItem_o *)v16, (int32_t)v15, v17, v18);
    result = 1;
    *((_DWORD *)v16 - 2) = 1;
  }
  return result;
}


Il2CppObject *BattleActorControl__WaitActiveCoroutine_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitActiveCoroutine_d__166_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__WaitActiveCoroutine_d__166__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitActiveCoroutine_d__166_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__WaitActiveCoroutine_d__166_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__WaitActiveCoroutine_d__166__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitActiveCoroutine_d__166_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__WaitActiveCoroutine_d__166__System_IDisposable_Dispose(
        BattleActorControl__WaitActiveCoroutine_d__166_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__WaitToNoblePhantasmPlay_d__313___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__WaitToNoblePhantasmPlay_d__313__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *v4; // x20
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v10; // x0
  struct BattlePerformance_o *v11; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  BattleServantData_o *v15; // x20
  int v16; // w21
  __int64 v17; // x2
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *v19; // x20
  unsigned __int64 v20; // x26
  BattleActorControl_o *ServantActor; // x21
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  Il2CppObject *Instance; // x20
  System_Action_object__o *v25; // x21
  struct BattlePerformance_o *v26; // x8
  int i_5__2; // w8
  CGThumbnailListItem_o *v28; // x20
  UnityEngine_WaitForEndOfFrame_o *v29; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int v33; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4C2A692 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_USSequencer__TypeInfo);
    sub_1C2D490(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__);
    sub_1C2D490(&BattlePerformance_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C2D490(&StringLiteral_13358/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)sub_1C2D490(&StringLiteral_24695/*"wait"*/);
    byte_4C2A692 = 1;
  }
  v33 = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)BattleServantData__IsTDAppearance(
                                                                         (BattleServantData_o *)this,
                                                                         0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          battleSvtData = _4__this->fields.battleSvtData;
          if ( !battleSvtData )
            goto LABEL_55;
          battleSvtData->fields.dressDispId = -1;
          battleSvtData->fields.isForceAppearance = 0;
        }
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v10 = BattlePerformance_TypeInfo;
              if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v10 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v10->static_fields->DefaultFov, 0);
              v11 = _4__this->fields.performance;
              if ( v11 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)v11->fields.actorcamera;
                if ( this )
                {
                  this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0);
                  v12 = this;
                  if ( !byte_4C20DA1 )
                  {
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                    byte_4C20DA1 = 1;
                  }
                  if ( v12 )
                  {
                    UnityEngine_Transform__set_localEulerAngles(
                      (UnityEngine_Transform_o *)v12,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0);
                    v33 = 1;
                    v13 = System_Int32__ToString((int32_t)&v33, 0);
                    v14 = System_String__Concat_63457864((System_String_o *)StringLiteral_13358/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v13, 0);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)ConstantMaster__getValue(v14, 0);
                    v15 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_43:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v15 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *, struct BattleActorControl_o *, const MethodInfo *))v15->klass->vtable._23_PrevActorNoblePhantasm.methodPtr)(
                          v15,
                          this,
                          _4__this,
                          v15->klass->vtable._23_PrevActorNoblePhantasm.method);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v25 = (System_Action_object__o *)sub_1C2D6DC(System_Action_USSequencer__TypeInfo);
                        System_Action_object____ctor(
                          v25,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          0);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v25,
                            0);
                          v26 = _4__this->fields.performance;
                          if ( v26 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)v26->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)BattleData__getStageEntity(
                                                                                               (BattleData_o *)this,
                                                                                               0);
                              if ( this )
                              {
                                if ( StageEntity__Is3_6BossBattle((StageEntity_o *)this, 0) )
                                {
                                  BattleActorControl__ChangeRotationEnemy(_4__this, 0, 0);
                                  BattleActorControl__ChangeAnimationCurveEnemy(_4__this, 0, 0);
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
                      v16 = (int)this;
                      while ( 1 )
                      {
                        if ( !v15 )
                          goto LABEL_55;
                        if ( v16 == BattleServantData__getSvtId(v15, 0) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_55;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0);
                          if ( !this )
                            goto LABEL_55;
                          _2__current = this->fields.__2__current;
                          v19 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_42:
                        ++v33;
                        v22 = System_Int32__ToString((int32_t)&v33, 0);
                        v23 = System_String__Concat_63457864((System_String_o *)StringLiteral_13358/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v22, 0);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)ConstantMaster__getValue(v23, 0);
                        v15 = _4__this->fields.battleSvtData;
                        v16 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_43;
                      }
                      v20 = 0;
                      while ( 1 )
                      {
                        if ( v20 >= (unsigned int)_2__current )
                          sub_1C2D6F4(this, method, v17);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v19->fields.__4__this + v20),
                                         0);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0,
                                                                                         0);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[18].fields.__1__state) )
                          {
                            LOWORD(this[18].fields.__1__state) = 256;
                            BattleActorControl__playAnimation_46911212(
                              ServantActor,
                              (System_String_o *)StringLiteral_24695/*"wait"*/,
                              0,
                              0);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_46911212(
                              ServantActor,
                              (System_String_o *)StringLiteral_24695/*"wait"*/,
                              0,
                              0);
                        }
                        LODWORD(_2__current) = v19->fields.__2__current;
                        if ( (__int64)++v20 >= (int)_2__current )
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
    sub_1C2D6EC(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    v4->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 < 3 )
      goto LABEL_52;
    v29 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v29, 0);
    v4->fields.__2__current = (Il2CppObject *)v29;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(p__2__current, (int32_t)v29, v31, v32);
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
      v4->fields.__2__current = 0;
      v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v28, 0, v2, v3);
      result = 1;
      LODWORD(v28[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    }
  }
  return result;
}


Il2CppObject *BattleActorControl__WaitToNoblePhantasmPlay_d__313__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__313__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__313_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__WaitToNoblePhantasmPlay_d__313__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__WaitToNoblePhantasmPlay_d__313__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__313_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2A683 & 1) == 0 )
  {
    sub_1C2D490(&BattleActorControl___c_TypeInfo);
    byte_4C2A683 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleActorControl___c_TypeInfo->static_fields->__9 = (struct BattleActorControl___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleActorControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_Material__o *BattleActorControl___c___EnumerateMaterials_b__338_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0);
}


System_String_o *BattleActorControl___c___InitAnimationEffect_b__167_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattleActorAnimationEffect__get_TriggerKey(x, (const MethodInfo *)x);
}


System_String_o *BattleActorControl___c___InitAnimationEffect_b__167_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C2A685 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1C2D490(&System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo);
    byte_4C2A685 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  klass = x->klass;
  v5 = *(unsigned __int16 *)&x->klass->_2.rank;
  if ( *(_WORD *)&x->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Linq_IGrouping_string__BattleActorAnimationEffect__c **)p_offset - 1) != System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo )
    {
      --v5;
      p_offset += 4;
      if ( !v5 )
        goto LABEL_8;
    }
    v7 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v7 = sub_1C7DCA8(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))v7)(
                              x,
                              *(_QWORD *)(v7 + 8));
}


BattleActorAnimationEffect_array *BattleActorControl___c___InitAnimationEffect_b__167_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4C2A686 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    byte_4C2A686 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_object_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_310DFEC *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool BattleActorControl___c___IsAllSucceededMovingToSubMember_b__235_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields._isSucceeded_k__BackingField;
}


bool BattleActorControl___c___LoadSavedPartAnimation_b__428_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.isSaveAnimation;
}


void BattleActorControl___c___ResetAddColorOfMaterials_b__339_0(
        BattleActorControl___c_o *this,
        UnityEngine_Material_o *x,
        const MethodInfo *method)
{
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C2A687 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1C2D490(&StringLiteral_16117/*"_AddColor"*/);
    byte_4C2A687 = 1;
  }
  if ( !x )
    sub_1C2D6EC(this, x);
  v4.fields.r = 0.0;
  v4.fields.g = 0.0;
  v4.fields.b = 0.0;
  v4.fields.a = 0.0;
  UnityEngine_Material__SetColor(x, (System_String_o *)StringLiteral_16117/*"_AddColor"*/, v4, 0);
}


bool BattleActorControl___c___SetPartAnimationSaveData_b__429_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *BattleActorControl___c___SetPartAnimationSaveData_b__429_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattlePlayAnimationComponent__GetSaveData(x, 0);
}


bool BattleActorControl___c___setServantData_b__165_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  BattleActorControl___c_o *v4; // x20

  if ( (byte_4C2A684 & 1) == 0 )
  {
    sub_1C2D490(&BattleFBXComponent_TypeInfo);
    this = (BattleActorControl___c_o *)sub_1C2D490(&StringLiteral_17319/*"body"*/);
    byte_4C2A684 = 1;
  }
  if ( !x )
    goto LABEL_14;
  this = (BattleActorControl___c_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
  if ( !this )
    goto LABEL_14;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0)
    && UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)x, 0) )
  {
    this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
    v4 = this;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !v4 )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17319/*"body"*/, 0);
LABEL_14:
      sub_1C2D6EC(this, x);
    }
  }
  return 0;
}


bool BattleActorControl___c___updateAura_b__385_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4C2A688 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A688 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(value, 0, 0);
}


void BattleActorControl___c___updateBuffIcon_b__252_0(
        BattleActorControl___c_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1C2D6EC(this, 0);
  BattleServantData__updateBuff(svt, 1, 1, 0);
}


void BattleActorControl___c__334_object____cctor(const MethodInfo_329C580 *method)
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
    klass = sub_1C7DBA4();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C7DBA4();
  v4 = (Il2CppObject *)sub_1C2D6DC(v3);
  if ( (*(&method->klass->_2.bitflags2 + 2) & 1) == 0 )
    sub_1C7DBA4();
  System_Object___ctor(v4, 0);
  v7 = (__int64)method->klass;
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C7DBA4();
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C7DBA4();
  **(_QWORD **)(v8 + 184) = v4;
  v9 = (__int64)method->klass;
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C7DBA4();
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C7DBA4();
  sub_1C2D434(*(CGThumbnailListItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void BattleActorControl___c__334_object____ctor(
        BattleActorControl___c__334_T__o *this,
        const MethodInfo_329C63C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__334_object____UpdateMaterialsOnRenderders_b__334_0(
        BattleActorControl___c__334_T__o *this,
        Il2CppObject *x,
        const MethodInfo_329C644 *method)
{
  if ( (byte_4C2C98D & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2C98D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
}


bool BattleActorControl___c__334_object____UpdateMaterialsOnRenderders_b__334_1(
        BattleActorControl___c__334_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_329C6A0 *method)
{
  if ( (byte_4C2C98E & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2C98E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
}


void BattleActorControl___c__DisplayClass165_0___ctor(
        BattleActorControl___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass165_0___setServantData_b__2(
        BattleActorControl___c__DisplayClass165_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0 )
    sub_1C2D6EC(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0);
}


void BattleActorControl___c__DisplayClass165_1___ctor(
        BattleActorControl___c__DisplayClass165_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass165_1___setServantData_b__1(
        BattleActorControl___c__DisplayClass165_1_o *this,
        const MethodInfo *method)
{
  UnityEngine_Mesh_o *v3; // x20
  __int64 v4; // x1
  UnityEngine_SkinnedMeshRenderer_o *targetMesh; // x0

  if ( (byte_4C2A689 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Mesh_TypeInfo);
    byte_4C2A689 = 1;
  }
  v3 = (UnityEngine_Mesh_o *)sub_1C2D6DC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v3, 0);
  targetMesh = this->fields.targetMesh;
  if ( !targetMesh
    || (UnityEngine_SkinnedMeshRenderer__BakeMesh(targetMesh, v3, 0),
        (targetMesh = (UnityEngine_SkinnedMeshRenderer_o *)this->fields.collider) == 0) )
  {
    sub_1C2D6EC(targetMesh, v4);
  }
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)targetMesh, v3, 0);
}


void BattleActorControl___c__DisplayClass167_0___ctor(
        BattleActorControl___c__DisplayClass167_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__DisplayClass167_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass167_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0 )
    sub_1C2D6EC(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, method);
}


void BattleActorControl___c__DisplayClass204_0___ctor(
        BattleActorControl___c__DisplayClass204_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__DisplayClass204_0___HasGlobalTransitionInFsm_b__0(
        BattleActorControl___c__DisplayClass204_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1C2D6EC(this, 0);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0);
  return System_String__op_Equality(EventName, this->fields.globalTransitionName, 0);
}


void BattleActorControl___c__DisplayClass205_0___ctor(
        BattleActorControl___c__DisplayClass205_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__DisplayClass205_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass205_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  System_Object_array *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C2A68A & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Any_FsmTransition___);
    sub_1C2D490(&System_Func_FsmTransition__bool__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass205_0__ExistMotionEvent_b__1__);
    byte_4C2A68A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0, 0);
  if ( !v5 )
    return 0;
  if ( !fsm )
    sub_1C2D6EC(v5, v6);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0);
  _9__1 = this->fields.__9__1;
  v9 = (System_Object_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_1C2D6DC(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass205_0__ExistMotionEvent_b__1__,
      0);
    this->fields.__9__1 = _9__1;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  return BasicHelper__Any_object__51084700(
           v9,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_30B7D9C *)Method_BasicHelper_Any_FsmTransition___);
}


bool BattleActorControl___c__DisplayClass205_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass205_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1C2D6EC(this, 0);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0);
  return System_String__op_Equality(EventName, this->fields.eventName, 0);
}


void BattleActorControl___c__DisplayClass308_0___ctor(
        BattleActorControl___c__DisplayClass308_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleActorControl___c__DisplayClass308_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass308_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass308_0_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *targets; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  BattleActorControl___c__DisplayClass308_0_o *v12; // x1
  Il2CppClass **v13; // x0

  v4 = this;
  if ( (byte_4C2A68B & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass308_0_o *)sub_1C2D490(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4C2A68B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass308_0_o *)_4__this->fields.performance) == 0
    || (targets = (System_Collections_Generic_List_object__o *)v4->fields.targets,
        this = (BattleActorControl___c__DisplayClass308_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0),
        !targets)
    || (items = targets->fields._items,
        v10 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++targets->fields._version,
        !items) )
  {
    sub_1C2D6EC(this, *(_QWORD *)&x);
  }
  size = targets->fields._size;
  v12 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      targets,
      (Il2CppObject *)this,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    targets->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1C2D434((CGThumbnailListItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
  }
}


void BattleActorControl___c__DisplayClass321_0___ctor(
        BattleActorControl___c__DisplayClass321_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass321_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass321_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass321_0_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v6; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v8; // x20
  int32_t shadowEffectId; // w22
  BattleActorControl___c__DisplayClass321_0_o *v10; // x21
  BattleActorControl___c__DisplayClass321_0_o *v11; // x23
  int32_t v12; // w24
  int32_t LimitCount; // w25
  UnityEngine_GameObject_o *EffectToNode_45761828; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct BattleActorControl_o *v17; // x8
  UnityEngine_Object_o *v18; // x20
  struct BattleActorControl_o *v19; // x8
  BattleActorControl___c__DisplayClass321_0_o *v20; // x20
  struct BattleActorControl_o *v21; // x8
  BattleActorControl___c__DisplayClass321_0_o *v22; // x20
  struct BattleActorControl_o *v23; // x8
  BattleActorControl___c__DisplayClass321_0_o *v24; // x20
  struct BattleActorControl_o *v25; // x8

  v2 = this;
  if ( (byte_4C2A68C & 1) == 0 )
  {
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl___c__DisplayClass321_0_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2A68C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0, 0) )
  {
    this = (BattleActorControl___c__DisplayClass321_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_Object__op_Equality(gameObject, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v6 = v2->fields.__4__this;
      if ( !v6 )
        goto LABEL_46;
      if ( v6->fields.currentSpShadowEffectId == v2->fields.shadowEffectId )
      {
        specialShadowObj = (UnityEngine_Object_o *)v6->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_Object__op_Inequality(specialShadowObj, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v8 = v2->fields.__4__this;
          if ( !v8 )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass321_0_o *)v8->fields.shadowObj;
          if ( !this )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          shadowEffectId = v2->fields.shadowEffectId;
          v10 = this;
          this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v11 = this;
          this = (BattleActorControl___c__DisplayClass321_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v12 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectToNode_45761828 = BattleEffectUtility__loadEffectToNode_45761828(
                                    (UnityEngine_GameObject_o *)v10,
                                    shadowEffectId,
                                    (UnityEngine_GameObject_o *)v11,
                                    v12,
                                    LimitCount,
                                    0);
          v8->fields.specialShadowObj = EffectToNode_45761828;
          sub_1C2D434((CGThumbnailListItem_o *)&v8->fields.specialShadowObj, (int32_t)EffectToNode_45761828, v15, v16);
          v17 = v2->fields.__4__this;
          if ( !v17 )
            goto LABEL_46;
          v18 = (UnityEngine_Object_o *)v17->fields.specialShadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_Object__op_Inequality(v18, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v19 = v2->fields.__4__this;
            if ( v19 )
            {
              this = (BattleActorControl___c__DisplayClass321_0_o *)v19->fields.specialShadowObj;
              if ( this )
              {
                this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0);
                v20 = this;
                if ( !byte_4C20DA1 )
                {
                  this = (BattleActorControl___c__DisplayClass321_0_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                  byte_4C20DA1 = 1;
                }
                if ( v20 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v20,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0);
                  v21 = v2->fields.__4__this;
                  if ( v21 )
                  {
                    this = (BattleActorControl___c__DisplayClass321_0_o *)v21->fields.specialShadowObj;
                    if ( this )
                    {
                      this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0);
                      v22 = this;
                      if ( !byte_4C20DA7 )
                      {
                        this = (BattleActorControl___c__DisplayClass321_0_o *)sub_1C2D490(&UnityEngine_Quaternion_TypeInfo);
                        byte_4C20DA7 = 1;
                      }
                      if ( v22 )
                      {
                        UnityEngine_Transform__set_localRotation(
                          (UnityEngine_Transform_o *)v22,
                          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                          0);
                        v23 = v2->fields.__4__this;
                        if ( v23 )
                        {
                          this = (BattleActorControl___c__DisplayClass321_0_o *)v23->fields.specialShadowObj;
                          if ( this )
                          {
                            this = (BattleActorControl___c__DisplayClass321_0_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0);
                            v24 = this;
                            if ( !byte_4C20DA6 )
                            {
                              this = (BattleActorControl___c__DisplayClass321_0_o *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
                              byte_4C20DA6 = 1;
                            }
                            if ( v24 )
                            {
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)v24,
                                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                                0);
                              v25 = v2->fields.__4__this;
                              if ( v25 )
                              {
                                this = (BattleActorControl___c__DisplayClass321_0_o *)v25->fields.specialShadowObj;
                                if ( this )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
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
            sub_1C2D6EC(this, method);
          }
        }
      }
    }
  }
}


void BattleActorControl___c__DisplayClass32_0___ctor(
        BattleActorControl___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__DisplayClass32_0___GetMatchAdjustPosInScreenComponent_b__0(
        BattleActorControl___c__DisplayClass32_0_o *this,
        BattleAdjustPopupPosInScreenComponent_o *comp,
        const MethodInfo *method)
{
  if ( !comp )
    sub_1C2D6EC(this, 0);
  return BattleAdjustPopupPosInScreenComponent__IsMatchCond(comp, this->fields.data, method);
}


void BattleActorControl___c__DisplayClass333_0___ctor(
        BattleActorControl___c__DisplayClass333_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass333_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass333_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass333_0_o *v4; // x20

  v4 = this;
  if ( (byte_4C2A68D & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass333_0_o *)sub_1C2D490(&StringLiteral_16547/*"_fade"*/);
    byte_4C2A68D = 1;
  }
  if ( !material )
    sub_1C2D6EC(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16547/*"_fade"*/, v4->fields.alpha, 0);
}


void BattleActorControl___c__DisplayClass373_0___ctor(
        BattleActorControl___c__DisplayClass373_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass373_0___ChangeBattleModelArray_b__0(
        BattleActorControl___c__DisplayClass373_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  BattleActorControl__sendEventFSM_46896280(_4__this, this->fields.eventName, 0, 0);
}


void BattleActorControl___c__DisplayClass375_0___ctor(
        BattleActorControl___c__DisplayClass375_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass375_0___ChangeBattleModel_b__0(
        BattleActorControl___c__DisplayClass375_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C2D6EC(0, method);
  BattleActorControl__sendEventFSM_46896280(_4__this, this->fields.eventName, 0, 0);
}


void BattleActorControl___c__DisplayClass384_0___ctor(
        BattleActorControl___c__DisplayClass384_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleActorControl___c__DisplayClass384_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass384_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void BattleActorControl___c__DisplayClass428_0___ctor(
        BattleActorControl___c__DisplayClass428_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__DisplayClass428_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass428_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass428_0_o *)this->fields.component) == 0 )
    sub_1C2D6EC(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0);
}


void BattleActorControl___c__DisplayClass431_0___ctor(
        BattleActorControl___c__DisplayClass431_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleActorControl___c__DisplayClass431_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass431_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0);
}


void BattleActorControl___c__DisplayClass431_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass431_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0);
}


void BattleActorControl__coAddAura_d__384___ctor(
        BattleActorControl__coAddAura_d__384_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__coAddAura_d__384__MoveNext(
        BattleActorControl__coAddAura_d__384_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__coAddAura_d__384_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  Il2CppObject *Item; // x21
  Il2CppObject *Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleActorControl___c__DisplayClass384_0_o *_8__1; // x22
  int32_t id; // w21
  System_Action_o *v17; // x23
  BattlePerformance_o *v18; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  CGThumbnailListItem_o *v21; // x19
  bool result; // w0
  struct BattleActorControl___c__DisplayClass384_0_o *v23; // x8
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *v30; // x8
  struct System_String_o *Empty; // x1
  int32_t EffectFolder; // w22
  int32_t WeaponGroup; // w0
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x22
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  Il2CppObject *v41; // x0
  System_String_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  BattleEffectUtility_BuffEffectLoadArgument_o *v45; // x21
  UnityEngine_GameObject_o *actorObject; // x22
  int32_t auraEffectId; // w23
  UnityEngine_GameObject_o *gameObject; // x24
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  int32_t ActorSvtId; // w25
  int32_t LimitCount; // w26
  UnityEngine_Object_o *EffectToNode; // x21
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  UnityEngine_Object_o *Component_object; // x22
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct BattlePerformance_o *performance; // x8
  struct BattleActorControl_o *actorcamera; // x1
  Il2CppObject *v63; // x0
  int32_t v64; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t v65; // [xsp+8h] [xbp-68h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C2A693 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_TypeInfo);
    sub_1C2D490(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C2D490(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C2D490(&Method_UnityEngine_GameObject_AddComponent_BillBoard___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C2D490(&string_TypeInfo);
    sub_1C2D490(&Method_BattleActorControl___c__DisplayClass384_0__coAddAura_b__0__);
    sub_1C2D490(&BattleActorControl___c__DisplayClass384_0_TypeInfo);
    sub_1C2D490(&StringLiteral_5900/*"Effect/weapon/{0}"*/);
    this = (BattleActorControl__coAddAura_d__384_o *)sub_1C2D490(&StringLiteral_5903/*"Effect/weapon/{0}/{1}"*/);
    byte_4C2A693 = 1;
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
    this = (BattleActorControl__coAddAura_d__384_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_62;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v4->fields.auraEffectId,
           (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__384_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_62;
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_33E11DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0, 0) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__384_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_62;
    this = (BattleActorControl__coAddAura_d__384_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_62;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_3387D98 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    v4->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    p_effectEntity_5__2 = &v4->fields._effectEntity_5__2;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._effectEntity_5__2, (int32_t)Entity, v10, v11);
    if ( !v4->fields._effectEntity_5__2 )
    {
LABEL_38:
      v45 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1C2D6DC(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v45, _4__this, 0);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v4->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
        if ( !byte_4C20DA1 )
        {
          sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
          byte_4C20DA1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->zeroVector.fields.x;
        y = static_fields->zeroVector.fields.y;
        z = static_fields->zeroVector.fields.z;
        ActorSvtId = BattleActorControl__getActorSvtId(_4__this, 0);
        LimitCount = BattleActorControl__getLimitCount(_4__this, 0);
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v67.fields.x = x;
        v67.fields.y = y;
        v67.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v67,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v45,
                                                 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleActorControl__coAddAura_d__384_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0, 0);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_58;
        if ( v4->fields.priority > _4__this->fields._CurrentAuraPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0);
          _4__this->fields._CurrentAuraEffectId_k__BackingField = v4->fields.auraEffectId;
          _4__this->fields._CurrentAuraPriority_k__BackingField = v4->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)EffectToNode,
                                                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl__coAddAura_d__384_o *)UnityEngine_Object__op_Equality(Component_object, 0, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__384_o *)UnityEngine_GameObject__AddComponent_object_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_3125DE8 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_62;
            Component_object = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_62;
            actorcamera = (struct BattleActorControl_o *)performance->fields.actorcamera;
            this->fields.__4__this = actorcamera;
            sub_1C2D434((CGThumbnailListItem_o *)&this->fields.__4__this, (int32_t)actorcamera, v59, v60);
          }
          else if ( !Component_object )
          {
            goto LABEL_62;
          }
          BillBoard__setFlip((BillBoard_o *)Component_object, 1, 1, 0);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0);
          this = (BattleActorControl__coAddAura_d__384_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v4->fields.auraEffectId,
              (Il2CppObject *)EffectToNode,
              (const MethodInfo_33E1268 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_58:
            v4->fields._effectEntity_5__2 = 0;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._effectEntity_5__2, 0, v56, v57);
            return 0;
          }
        }
      }
LABEL_62:
      sub_1C2D6EC(this, method);
    }
    v12 = (Il2CppObject *)sub_1C2D6DC(BattleActorControl___c__DisplayClass384_0_TypeInfo);
    System_Object___ctor(v12, 0);
    v4->fields.__8__1 = (struct BattleActorControl___c__DisplayClass384_0_o *)v12;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v12, v13, v14);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_62;
    _8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_62;
    id = (*p_effectEntity_5__2)->fields.id;
    v17 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)_8__1,
      Method_BattleActorControl___c__DisplayClass384_0__coAddAura_b__0__,
      0);
    v18 = _4__this->fields.performance;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v17, v18, 0);
  }
  this = (BattleActorControl__coAddAura_d__384_o *)&v4->fields.__8__1;
  v23 = v4->fields.__8__1;
  if ( !v23 )
    goto LABEL_62;
  if ( v23->fields.isLoading )
  {
    v4->fields.__2__current = 0;
    p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(p__2__current, 0, v2, v3);
    result = 1;
    LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
    return result;
  }
  v4->fields.__8__1 = 0;
  sub_1C2D434((CGThumbnailListItem_o *)this, 0, v2, v3);
  effectEntity_5__2 = v4->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_38;
  v30 = string_TypeInfo->static_fields;
  Empty = v30->Empty;
  v4->fields._effectPath_5__3 = v30->Empty;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._effectPath_5__3, (int32_t)Empty, v27, v28);
  if ( !_4__this )
    goto LABEL_62;
  EffectFolder = BattleActorControl__getEffectFolder(_4__this, 0);
  WeaponGroup = BattleActorControl__getWeaponGroup(_4__this, 0, 0);
  if ( EffectFolder )
  {
    v66 = WeaponGroup;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v34, v35, v36);
    v65 = BattleActorControl__getEffectFolder(_4__this, 0);
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v65, v38, v39, v40);
    v42 = System_String__Format_63499156((System_String_o *)StringLiteral_5903/*"Effect/weapon/{0}/{1}"*/, v37, v41, 0);
  }
  else
  {
    v64 = WeaponGroup;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v34, v35, v36);
    v42 = System_String__Format((System_String_o *)StringLiteral_5900/*"Effect/weapon/{0}"*/, v63, 0);
  }
  v4->fields._effectPath_5__3 = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._effectPath_5__3, (int32_t)v42, v43, v44);
LABEL_22:
  this = (BattleActorControl__coAddAura_d__384_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_62;
  this = (BattleActorControl__coAddAura_d__384_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     v4->fields._effectPath_5__3,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4->fields.__2__current = 0;
    v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C2D434(v21, 0, v19, v20);
    LODWORD(v21[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_62;
  this = (BattleActorControl__coAddAura_d__384_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_62;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.auraEffectId,
          (const MethodInfo_33E1470 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v4->fields._effectPath_5__3 = 0;
    sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._effectPath_5__3, 0, v25, v26);
    goto LABEL_38;
  }
  return 0;
}


Il2CppObject *BattleActorControl__coAddAura_d__384__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__384_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__coAddAura_d__384__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__384_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__coAddAura_d__384_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__coAddAura_d__384__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__384_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__coAddAura_d__384__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__384_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__colShiftServantChange_d__394___ctor(
        BattleActorControl__colShiftServantChange_d__394_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__colShiftServantChange_d__394__MoveNext(
        BattleActorControl__colShiftServantChange_d__394_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__colShiftServantChange_d__394_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x20
  struct BattlePerformance_o *performance; // x8
  struct BattleActionData_o *nowAction; // x1
  struct BattleActionData_o **p_actionData_5__2; // x21
  BattleActionData_ShiftServant_o *myShiftData; // x0
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *v11; // x8
  Il2CppObject *Component_object; // x0
  BattleActorControl__colShiftServantChange_d__394_o **p_fadeComp_5__3; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  DefCoroutine_c *v18; // x0
  Il2CppObject *milliSecTwo; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  CGThumbnailListItem_o *v22; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int v25; // w8
  struct BattleActionData_ShiftServant_o *v26; // x8
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  _BOOL4 isShift; // w8
  struct BattleActionData_o *actionData_5__2; // x8
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct BattleActionData_o *v35; // x8
  struct BattlePerformance_o *v36; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v38; // x8
  struct BattleData_o *data; // x8
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  UnityEngine_AsyncOperation_o *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *v50; // x21
  System_Collections_Generic_List_int__o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  __int64 v54; // x2
  const MethodInfo *v55; // x3
  struct BattleActionData_o *v56; // x8
  struct PlayMakerFSM_array *motionFSM; // x8
  struct PlayMakerFSM_o *v58; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct PlayMakerFSM_array *v61; // x8
  UnityEngine_Object_o *gameObject; // x20
  UnityEngine_Color_o v63; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = this;
  if ( (byte_4C2A694 & 1) == 0 )
  {
    sub_1C2D490(&DefCoroutine_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__colShiftServantChange_d__394_o *)sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A694 = 1;
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
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._actionData_5__2, (int32_t)nowAction, v2, v3);
      myShiftData = _4__this->fields.myShiftData;
      if ( myShiftData )
        BattleActionData_ShiftServant__ResetBeforeWeapon(myShiftData, 0);
      this = (BattleActorControl__colShiftServantChange_d__394_o *)v4->fields.shiftSvt;
      if ( !this )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__394_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__394_o *, struct BattleServantData_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._6_MoveNext.method);
      shiftSvt = v4->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_104;
      if ( !shiftSvt->fields.isChange )
        goto LABEL_62;
      v11 = _4__this->fields.performance;
      if ( !v11 )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__394_o *)v11->fields.fadeObject;
      if ( !this )
        goto LABEL_104;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v4->fields._fadeComp_5__3 = (struct NGUIFader_o *)Component_object;
      p_fadeComp_5__3 = (BattleActorControl__colShiftServantChange_d__394_o **)&v4->fields._fadeComp_5__3;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._fadeComp_5__3, (int32_t)Component_object, v14, v15);
      if ( !v4->fields.isShift )
        goto LABEL_18;
      if ( !*p_actionData_5__2 )
        goto LABEL_104;
      if ( (*p_actionData_5__2)->fields.isIgnoreShiftWhiteFade )
        goto LABEL_18;
      this = *p_fadeComp_5__3;
      if ( !*p_fadeComp_5__3 )
        goto LABEL_104;
      v63.fields.r = 1.0;
      v63.fields.g = 1.0;
      v63.fields.b = 1.0;
      v63.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v63, 0.2, 0, 0, 0, 0);
LABEL_18:
      v18 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v18 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (Il2CppObject *)v18->static_fields->milliSecTwo;
      v4->fields.__2__current = milliSecTwo;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, (int32_t)milliSecTwo, v16, v17);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_104;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0);
      this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_104;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0);
      v4->fields.__2__current = 0;
      v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v22, 0, v23, v24);
      v25 = 2;
      goto LABEL_103;
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      v26 = v4->fields.shiftSvt;
      if ( !v26 )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_104;
      BattlePerformance__unloadServantSet_44925788((BattlePerformance_o *)this, v26->fields.loadedAssetArgs, 0, 0);
      v4->fields.__2__current = 0;
      v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v22, 0, v27, v28);
      v25 = 3;
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
        v42 = UnityEngine_Resources__UnloadUnusedAssets(0);
        v4->fields._asyncUnload_5__5 = v42;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._asyncUnload_5__5, (int32_t)v42, v43, v44);
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0);
LABEL_69:
        this = (BattleActorControl__colShiftServantChange_d__394_o *)v4->fields._asyncUnload_5__5;
        if ( !this )
          goto LABEL_104;
        if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)this, 0) )
        {
          v4->fields.__2__current = 0;
          v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1C2D434(v22, 0, v45, v46);
          v25 = 4;
          goto LABEL_103;
        }
        v4->fields._asyncUnload_5__5 = 0;
        sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._asyncUnload_5__5, 0, v45, v46);
      }
      if ( _4__this )
      {
        BattleActorControl__ResetChangeModelByOriginalChange(_4__this, _4__this->fields.battleSvtData, 0);
        this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0);
LABEL_75:
          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
          this = (BattleActorControl__colShiftServantChange_d__394_o *)ServantAssetLoadManager__checkLoad(0);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v4->fields.__2__current = 0;
            v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1C2D434(v22, 0, v47, v48);
            v25 = 5;
            goto LABEL_103;
          }
          if ( _4__this )
          {
            actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(actorObject, 0, 0) )
            {
              this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.actorObject;
              if ( !this )
                goto LABEL_104;
              v50 = UnityEngine_GameObject__GetComponent_object_(
                      (UnityEngine_GameObject_o *)this,
                      (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v50, 0, 0) )
              {
                this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.performance;
                if ( !this )
                  goto LABEL_104;
                BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v50, 0);
              }
            }
            v51 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0);
            v4->fields._moveEffect_5__4 = v51;
            sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._moveEffect_5__4, (int32_t)v51, v52, v53);
            BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0);
            BattleActorControl__DestroyImmediateActorObject(_4__this, 0);
            this = (BattleActorControl__colShiftServantChange_d__394_o *)BattleActorControl__IsCurrentMotionFsmType(
                                                                           _4__this,
                                                                           0,
                                                                           0);
            if ( ((unsigned __int8)this & 1) == 0 )
              goto LABEL_96;
            v56 = v4->fields._actionData_5__2;
            if ( !v56 )
              goto LABEL_104;
            if ( v56->fields.isOverwriteShift )
            {
              motionFSM = _4__this->fields.motionFSM;
              if ( motionFSM )
              {
                if ( LODWORD(motionFSM->max_length) )
                {
                  v58 = motionFSM->m_Items[0];
                  _4__this->fields.beforeWeaponFsm = v58;
                  sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.beforeWeaponFsm, (int32_t)v58, v54, v55);
LABEL_102:
                  v4->fields.__2__current = 0;
                  v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1C2D434(v22, 0, v59, v60);
                  v25 = 6;
                  goto LABEL_103;
                }
LABEL_105:
                sub_1C2D6F4(this, method, v54);
              }
            }
            else
            {
LABEL_96:
              v61 = _4__this->fields.motionFSM;
              if ( v61 )
              {
                if ( !LODWORD(v61->max_length) )
                  goto LABEL_105;
                this = (BattleActorControl__colShiftServantChange_d__394_o *)v61->m_Items[0];
                if ( this )
                {
                  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  UnityEngine_Object__DestroyImmediate_71163892(gameObject, 0);
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
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0);
LABEL_38:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colShiftServantChange_d__394_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0;
        v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v22, 0, v31, v32);
        v25 = 7;
LABEL_103:
        LODWORD(v22[-1].fields._ThumbnailSpritePath_k__BackingField) = v25;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_104;
      BattleActorControl__setDir(_4__this, 0);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0);
      if ( v4->fields.isShift )
      {
        v35 = v4->fields._actionData_5__2;
        if ( !v35 )
          goto LABEL_104;
        if ( !v35->fields.isIgnoreShiftWhiteFade )
        {
          this = (BattleActorControl__colShiftServantChange_d__394_o *)v4->fields._fadeComp_5__3;
          if ( !this )
            goto LABEL_104;
          v64.fields.r = 1.0;
          v64.fields.g = 1.0;
          v64.fields.b = 1.0;
          v64.fields.a = 1.0;
          NGUIFader__FadeStart((NGUIFader_o *)this, v64, 0.2, 1, 0, 0, 0);
        }
      }
      this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_104;
      this = (BattleActorControl__colShiftServantChange_d__394_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v36 = _4__this->fields.performance;
        if ( !v36 )
          goto LABEL_104;
        battleSvtData = _4__this->fields.battleSvtData;
        if ( !battleSvtData )
          goto LABEL_104;
        this = (BattleActorControl__colShiftServantChange_d__394_o *)v36->fields.data;
        if ( !this )
          goto LABEL_104;
        BattleData__replaceCommandCard(
          (BattleData_o *)this,
          battleSvtData->fields.uniqueId,
          battleSvtData->fields.uniqueId,
          0);
        v38 = _4__this->fields.performance;
        if ( !v38 )
          goto LABEL_104;
        data = v38->fields.data;
        if ( !data )
          goto LABEL_104;
        this = (BattleActorControl__colShiftServantChange_d__394_o *)data->fields.logic;
        if ( !this )
          goto LABEL_104;
        BattleLogic__setDrawCard((BattleLogic_o *)this, 0);
      }
      if ( v4->fields._moveEffect_5__4 )
      {
        v4->fields.__2__current = 0;
        v22 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v22, 0, v33, v34);
        v25 = 8;
        goto LABEL_103;
      }
LABEL_61:
      v4->fields._fadeComp_5__3 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._fadeComp_5__3, 0, v33, v34);
      v4->fields._moveEffect_5__4 = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._moveEffect_5__4, 0, v40, v41);
LABEL_62:
      this = (BattleActorControl__colShiftServantChange_d__394_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__394_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0)) == 0 )
      {
LABEL_104:
        sub_1C2D6EC(this, method);
      }
      BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)this, 0);
      return 0;
    case 7:
      v4->fields.__1__state = -1;
      goto LABEL_38;
    case 8:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__4, 0);
      goto LABEL_61;
    default:
      return 0;
  }
}


Il2CppObject *BattleActorControl__colShiftServantChange_d__394__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__394_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__colShiftServantChange_d__394__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__394_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__colShiftServantChange_d__394_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__colShiftServantChange_d__394__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__394_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__colShiftServantChange_d__394__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__394_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__colShiftServant_d__392___ctor(
        BattleActorControl__colShiftServant_d__392_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__colShiftServant_d__392__MoveNext(
        BattleActorControl__colShiftServant_d__392_o *this,
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
    ActionExtensions__Call(finishCallback, 0);
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
                               0);
        this->fields.__2__current = v5;
        p__2__current = &this->fields.__2__current;
        sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_10:
      sub_1C2D6EC(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0);
  this->fields.__2__current = 0;
  v10 = &this->fields.__2__current;
  sub_1C2D434((CGThumbnailListItem_o *)v10, 0, v11, v12);
  *((_DWORD *)v10 - 2) = 2;
  return 1;
}


Il2CppObject *BattleActorControl__colShiftServant_d__392__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__392_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__colShiftServant_d__392__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__392_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__colShiftServant_d__392_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__colShiftServant_d__392__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__392_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__colShiftServant_d__392__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__392_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__collChangeAppearance_d__370___ctor(
        BattleActorControl__collChangeAppearance_d__370_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__collChangeAppearance_d__370__MoveNext(
        BattleActorControl__collChangeAppearance_d__370_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__370_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  CGThumbnailListItem_o *v13; // x19
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int v16; // w8
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct BattleServantData_o *v21; // x8
  ServantAssetArgs_o *v22; // x21
  _BOOL4 isForceAppearance; // w22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  v2 = this;
  if ( (byte_4C2A695 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__collChangeAppearance_d__370_o *)sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    byte_4C2A695 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__370_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0);
      this = (BattleActorControl__collChangeAppearance_d__370_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0);
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, 0, v5, v6);
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
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0, 0) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__370_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_43;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__370_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_43;
      BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)Component_object, 0);
LABEL_18:
      v10 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0);
      v2->fields._moveEffect_5__2 = v10;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v10, v11, v12);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0);
      BattleActorControl__DestroyActorObject(_4__this, 0);
      v2->fields.__2__current = 0;
      v13 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v13, 0, v14, v15);
      v16 = 2;
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
      ServantAssetLoadManager__unloadBattleActor(LoadedAssetArgs_k__BackingField, 0);
      v2->fields.__2__current = 0;
      v13 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v13, 0, v19, v20);
      v16 = 3;
      goto LABEL_41;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__370_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0);
      this = (BattleActorControl__collChangeAppearance_d__370_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__370_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0);
      v21 = _4__this->fields.battleSvtData;
      if ( !v21 )
        goto LABEL_43;
      v22 = (ServantAssetArgs_o *)this;
      isForceAppearance = v21->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadBattleActor(v22, isForceAppearance, 0);
LABEL_32:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__collChangeAppearance_d__370_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        v13 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v13, 0, v24, v25);
        v16 = 4;
LABEL_41:
        LODWORD(v13[-1].fields._ThumbnailSpritePath_k__BackingField) = v16;
        return 1;
      }
      if ( !_4__this )
LABEL_43:
        sub_1C2D6EC(this, method);
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0);
      BattleActorControl__setDir(_4__this, 0);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0);
      BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0;
        v13 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v13, 0, v26, v27);
        v16 = 5;
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
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *BattleActorControl__collChangeAppearance_d__370__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__370_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__collChangeAppearance_d__370__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__370_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__collChangeAppearance_d__370_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__collChangeAppearance_d__370__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__370_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__collChangeAppearance_d__370__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__370_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__colloadDressServant_d__365___ctor(
        BattleActorControl__colloadDressServant_d__365_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__colloadDressServant_d__365__MoveNext(
        BattleActorControl__colloadDressServant_d__365_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__365_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  CGThumbnailListItem_o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int v19; // w8
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 flg; // w21
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int v25; // w8
  ServantAssetArgs_o *updated; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  ServantAssetArgs_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v2 = this;
  if ( (byte_4C2A696 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl__colloadDressServant_d__365_o *)sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2A696 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_53;
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0);
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0);
      v2->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(p__2__current, 0, v8, v9);
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
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0, 0) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_61;
      BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)Component_object, 0);
LABEL_20:
      v13 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0);
      v2->fields._moveEffect_5__3 = v13;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__3, (int32_t)v13, v14, v15);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0);
      BattleActorControl__DestroyActorObject(_4__this, 0);
      v2->fields.__2__current = 0;
      v16 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v16, 0, v17, v18);
      v19 = 2;
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
      ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0);
      v2->fields.__2__current = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&v2->fields.__2__current, 0, v23, v24);
      if ( flg )
        v25 = 3;
      else
        v25 = 5;
      v2->fields.__1__state = v25;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = v2->fields._dressId_5__2;
      updated = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(updated, 0, 0);
LABEL_33:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__365_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v2->fields.__2__current = 0;
      v16 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
      sub_1C2D434(v16, 0, v27, v28);
      v19 = 4;
      break;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__365_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = -1;
      v29 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(v29, 0, 0);
LABEL_43:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__365_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0;
        v16 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C2D434(v16, 0, v30, v31);
        v19 = 6;
      }
      else
      {
LABEL_47:
        if ( !_4__this )
LABEL_61:
          sub_1C2D6EC(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0);
        BattleActorControl__setDir(_4__this, 0);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0);
        if ( v2->fields._moveEffect_5__3 )
        {
          v2->fields.__2__current = 0;
          v16 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(v16, 0, v32, v33);
          v19 = 7;
        }
        else
        {
LABEL_52:
          v2->fields._moveEffect_5__3 = 0;
          sub_1C2D434((CGThumbnailListItem_o *)&v2->fields._moveEffect_5__3, 0, v32, v33);
LABEL_53:
          v2->fields.__2__current = 0;
          v16 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
          sub_1C2D434(v16, 0, v5, v6);
          v19 = 8;
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
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0);
      goto LABEL_52;
    case 8:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      BattleActorControl__sendEventFSM_46896280(_4__this, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, 0, 0);
      return 0;
    default:
      return 0;
  }
  LODWORD(v16[-1].fields._ThumbnailSpritePath_k__BackingField) = v19;
  return 1;
}


Il2CppObject *BattleActorControl__colloadDressServant_d__365__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__365_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__colloadDressServant_d__365__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__365_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__colloadDressServant_d__365_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__colloadDressServant_d__365__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__365_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__colloadDressServant_d__365__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__365_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__colloadTransformServant_d__362___ctor(
        BattleActorControl__colloadTransformServant_d__362_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__colloadTransformServant_d__362__MoveNext(
        BattleActorControl__colloadTransformServant_d__362_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleActorControl__colloadTransformServant_d__362_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x2
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v13; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v19; // x21
  const MethodInfo *v20; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_object__o *v26; // x23
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 _2__current_low; // x10
  __int64 v32; // x8
  System_Collections_IEnumerator_o *v33; // x0
  CGThumbnailListItem_o *v34; // x19
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int v37; // w8
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  BattleActionData_ShiftServant_o *ShiftServant; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  UnityEngine_WaitForEndOfFrame_o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct BattleActionData_ShiftServant_o *v47; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 naturalAligment; // x11
  BattleServantSnapShotShiftServant_o *v50; // x1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v54; // x8
  struct BattlePerformance_o *v55; // x8
  BattlePerformance_o *v56; // x20

  v4 = this;
  if ( (byte_4C2A697 & 1) == 0 )
  {
    sub_1C2D490(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1C2D490(&BuffAggregationArgs_TypeInfo);
    sub_1C2D490(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
    sub_1C2D490(&System_GC_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&OptionManager_TypeInfo);
    sub_1C2D490(&ServantAssetLoadManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (BattleActorControl__colloadTransformServant_d__362_o *)sub_1C2D490(&StringLiteral_5434/*"END_LOAD"*/);
    byte_4C2A697 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_81;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0);
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_81;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0, 0) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_81;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_81;
      BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)Component_object, 0);
LABEL_16:
      v8 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0);
      v4->fields._moveEffect_5__2 = v8;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._moveEffect_5__2, (int32_t)v8, v9, v10);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0);
      BattleActorControl__DestroyActorObject(_4__this, 0);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_81;
      if ( !LODWORD(motionFSM->max_length) )
        sub_1C2D6F4(this, method, v11);
      v13 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71163704(v13, 0);
      v4->fields.__2__current = 0;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(p__2__current, 0, v15, v16);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      battleSvtData = _4__this->fields.battleSvtData;
      v19 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_1C2D6DC(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v19, battleSvtData, v20);
      if ( !v19 )
        goto LABEL_81;
      svtId_k__BackingField = v19->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v19->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v19->fields._overwriteSvtVoiceId_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0);
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v26 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v26,
          (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v26;
        sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.extraLoadedVoiceArgsList, (int32_t)v26, v27, v28);
        this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_81;
      }
      v29 = *(_QWORD *)&this->fields.__1__state;
      v30 = Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v29 )
        goto LABEL_81;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v19,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v32 + 32) = v19;
        sub_1C2D434((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v19, v24, v25);
      }
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_81;
      ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)this, 0);
      v4->fields._shiftSvtData_5__3 = ShiftServant;
      sub_1C2D434((CGThumbnailListItem_o *)&v4->fields._shiftSvtData_5__3, (int32_t)ShiftServant, v41, v42);
      shiftSvtData_5__3 = v4->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_81;
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_81;
      BattlePerformance__unloadServantSet_44925788(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__362_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0);
        v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v44, 0);
        v4->fields.__2__current = (Il2CppObject *)v44;
        v34 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C2D434(v34, (int32_t)v44, v45, v46);
        v37 = 2;
        goto LABEL_80;
      }
LABEL_51:
      v47 = v4->fields._shiftSvtData_5__3;
      if ( !v47 )
        goto LABEL_81;
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_81;
      AfterSvtCache_k__BackingField = v47->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (naturalAligment = BattleServantSnapShotShiftServant_TypeInfo->_2.naturalAligment,
            AfterSvtCache_k__BackingField->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
      {
        v50 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[naturalAligment - 1] == BattleServantSnapShotShiftServant_TypeInfo
            ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
            : 0LL;
      }
      else
      {
        v50 = 0;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v50, 0);
      BattleActorControl__ResetChangeModelByOriginalChange(_4__this, _4__this->fields.battleSvtData, 0);
      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_81;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0);
LABEL_61:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__362_o *)ServantAssetLoadManager__checkLoad(0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0);
          BattleActorControl__setDir(_4__this, 0);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0);
          this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v54 = _4__this->fields.battleSvtData;
              if ( v54 )
              {
                this = (BattleActorControl__colloadTransformServant_d__362_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard((BattleData_o *)this, v54->fields.uniqueId, v54->fields.uniqueId, 0);
                  v55 = _4__this->fields.performance;
                  if ( v55 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__362_o *)v55->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v55->fields.data,
                        _4__this->fields.battleSvtData,
                        0);
                      this = (BattleActorControl__colloadTransformServant_d__362_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__362_o *)BattlePerformance__get_FieldEnvData(
                                                                                         (BattlePerformance_o *)this,
                                                                                         0);
                        if ( this )
                        {
                          BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
                            (BattleFieldEnvironmentData_o *)this,
                            0);
                          v56 = _4__this->fields.performance;
                          this = (BattleActorControl__colloadTransformServant_d__362_o *)BuffAggregationArgs_TypeInfo;
                          if ( !BuffAggregationArgs_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(BuffAggregationArgs_TypeInfo);
                          if ( v56 )
                          {
                            BattlePerformance__UpdateFieldServantCondition(
                              v56,
                              BuffAggregationArgs_TypeInfo->static_fields->DisplaySet,
                              0);
                            if ( v4->fields._moveEffect_5__2 )
                            {
                              v4->fields.__2__current = 0;
                              v34 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                              sub_1C2D434(v34, 0, v38, v39);
                              v37 = 5;
                            }
                            else
                            {
LABEL_79:
                              v4->fields.__2__current = 0;
                              v34 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                              sub_1C2D434(v34, 0, v38, v39);
                              v37 = 6;
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
        }
LABEL_81:
        sub_1C2D6EC(this, method);
      }
      v4->fields.__2__current = 0;
      v34 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v34, 0, v51, v52);
      v37 = 4;
LABEL_80:
      LODWORD(v34[-1].fields._ThumbnailSpritePath_k__BackingField) = v37;
      return 1;
    case 2:
      v4->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__362_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_81;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleActorControl__colloadTransformServant_d__362_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_81;
      v33 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v4->fields.__2__current = (Il2CppObject *)v33;
      v34 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C2D434(v34, (int32_t)v33, v35, v36);
      v37 = 3;
      goto LABEL_80;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      goto LABEL_51;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_61;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v4->fields._moveEffect_5__2, 0);
      goto LABEL_79;
    case 6:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_81;
      _4__this->fields.myShiftData = 0;
      sub_1C2D434((CGThumbnailListItem_o *)&_4__this->fields.myShiftData, 0, v2, v3);
      BattleActorControl__sendEventFSM_46896280(_4__this, (System_String_o *)StringLiteral_5434/*"END_LOAD"*/, 0, 0);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *BattleActorControl__colloadTransformServant_d__362__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__362_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__colloadTransformServant_d__362__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__362_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__colloadTransformServant_d__362_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__colloadTransformServant_d__362__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__362_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__colloadTransformServant_d__362__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__362_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__coroutinePostCallBack_d__248___ctor(
        BattleActorControl__coroutinePostCallBack_d__248_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__coroutinePostCallBack_d__248__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__248_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct BattleCallBackBase_o *callBack; // x0
  float waitTime; // s8
  DefCoroutine_c *v8; // x0
  Il2CppObject **static_fields; // x8
  Il2CppObject *v10; // x1
  Il2CppObject **v11; // x19
  bool result; // w0
  UnityEngine_WaitForSeconds_o *v13; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4C2A698 & 1) == 0 )
  {
    sub_1C2D490(&DefCoroutine_TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C2A698 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1C2D6EC(0, method);
    ((void (__fastcall *)(struct BattleCallBackBase_o *, void *))callBack->klass[1]._1.image)(
      callBack,
      callBack->klass[1]._1.gc_desc);
    return 0;
  }
  if ( _1__state )
    return 0;
  waitTime = this->fields.waitTime;
  this->fields.__1__state = -1;
  if ( waitTime >= 0.0 )
  {
    v13 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v13, waitTime, 0);
    this->fields.__2__current = (Il2CppObject *)v13;
    p__2__current = &this->fields.__2__current;
    sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)v13, v15, v16);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v8 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v8 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v8->static_fields;
    v10 = *static_fields;
    this->fields.__2__current = *static_fields;
    v11 = &this->fields.__2__current;
    sub_1C2D434((CGThumbnailListItem_o *)v11, (int32_t)v10, v2, v3);
    *((_DWORD *)v11 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *BattleActorControl__coroutinePostCallBack_d__248__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__248_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__coroutinePostCallBack_d__248__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__248_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__coroutinePostCallBack_d__248_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__coroutinePostCallBack_d__248__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__248_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__coroutinePostCallBack_d__248__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__248_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleActorControl__waitChangeApp_d__368___ctor(
        BattleActorControl__waitChangeApp_d__368_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleActorControl__waitChangeApp_d__368__MoveNext(
        BattleActorControl__waitChangeApp_d__368_o *this,
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
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  }
  else if ( !_1__state )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      v5 = BattleActorControl__collChangeAppearance(_4__this, 0);
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_71149276(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_1C2D434((CGThumbnailListItem_o *)p__2__current, (int32_t)started, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_1C2D6EC(this, method);
  }
  return 0;
}


Il2CppObject *BattleActorControl__waitChangeApp_d__368__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__368_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleActorControl__waitChangeApp_d__368__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__368_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_BattleActorControl__waitChangeApp_d__368_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *BattleActorControl__waitChangeApp_d__368__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__368_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleActorControl__waitChangeApp_d__368__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__368_o *this,
        const MethodInfo *method)
{
  ;
}