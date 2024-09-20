void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  if ( (byte_4A5DF25 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_TypeInfo);
    byte_4A5DF25 = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  BattleLogData_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_Dictionary_int__object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_T__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Hashtable_o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Hashtable_o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_Dictionary_object__object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A5DF24 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___TypeInfo);
    sub_1B885B0(&TranslucentActorVisualInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_16642/*"act"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DF24 = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.auraList, (int32_t)v3, v4, v5);
  this->fields.actorScale = 1.0;
  v6 = (BattleLogData_o *)sub_1B887FC(BattleLogData_TypeInfo);
  BattleLogData___ctor_42785440(v6, (System_String_o *)StringLiteral_16642/*"act"*/, 90, 0LL);
  this->fields.battleLog = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleLog, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v9,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffLoopEffectDict, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.reservedEffectBuffEffectIdList, (int32_t)v12, v13, v14);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v15 = (Il2CppObject *)sub_1B887FC(TranslucentActorVisualInfo_TypeInfo);
  System_Object___ctor(v15, 0LL);
  this->fields.translucentActorVisualInfo = (struct TranslucentActorVisualInfo_o *)v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.translucentActorVisualInfo, (int32_t)v15, v16, v17);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.prevAnimEffectTriggerKey, v18, v19, v20);
  v21 = (int)StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveKey, v21, v22, v23);
  v24 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__object_____ctor(
    v24,
    (const MethodInfo_34A4794 *)Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl____ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *)v24;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.noblePhantasmObjectVisibleCtrList,
    (int32_t)v24,
    v25,
    v26);
  v27 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v27, 0LL);
  this->fields.EventList = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.EventList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v30, 0LL);
  this->fields.CompleteList = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.CompleteList, (int32_t)v30, v31, v32);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v38,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventClassAddedEventDict, (int32_t)v38, v39, v40);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_4A5DF10 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_int___);
    sub_1B885B0(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__352_0__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4A5DF10 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_1B8880C(0LL, method);
  v4 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  v5 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__352_0__,
    0LL);
  BasicHelper__ForEach_int_(v4, (System_Action_T__o *)v5, (const MethodInfo_2E6C3A8 *)Method_BasicHelper_ForEach_int___);
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

  if ( (byte_4A5DF0F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4A5DF0F = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                             (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
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
            sub_1B88814(buffLoopEffectDict, *(_QWORD *)&effectId);
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
        sub_1B8880C(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_34E1D0C *)Method_System_Collections_Generic_List_int__Remove__);
  }
}


void __fastcall BattleActorControl__AddChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v6; // x20
  unsigned __int64 v7; // x22
  struct UnityEngine_GameObject_o **p_actorObject; // x25
  Il2CppObject *v9; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v15; // x8

  v4 = this;
  if ( (byte_4A5DEEA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    this = (BattleActorControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    byte_4A5DEEA = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                   obj,
                                   (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_17;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    p_actorObject = &this->fields.actorObject;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v9 = (Il2CppObject *)p_actorObject[v7];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v9,
                                       (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        v12 = *(_QWORD *)&this->fields.m_CachedPtr;
        v13 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v12 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v12 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v9,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v15 = v12 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v15 + 32) = v9;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v9, v10, v11);
        }
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_17:
    sub_1B8880C(this, obj);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddNoblePhantasmChangedVisibleActor(
        BattleActorControl_o *this,
        int32_t timing,
        BattleActorControl_o *targetActor,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x2
  BattleActorControl_o *v5; // x20
  unsigned int v6; // w21
  BattleActorControl_o *v7; // x19
  const MethodInfo_3849ACC *v8; // x4
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x19
  int32_t v10; // w3
  __int64 v11; // x2
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  ServantStatusBattleListViewItem_o *v15; // x0
  int64_t v16; // x2
  __int64 v17; // [xsp+0h] [xbp-40h] BYREF
  __int64 v18; // [xsp+8h] [xbp-38h]
  System_ValueTuple_Int32Enum__object__o v19; // 0:x0.16

  v5 = v4;
  v6 = timing;
  v7 = this;
  if ( (byte_4A5DED4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Add__);
    this = (BattleActorControl_o *)sub_1B885B0(&Method_System_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___ctor__);
    byte_4A5DED4 = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( !BattleActorControl__ProcServantObjectVisibleCtr(v5, v6, 0, method) )
    return;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)v7->fields.noblePhantasmObjectVisibleCtrList;
  *(_QWORD *)&v19.fields.Item1 = &v17;
  v19.fields.Item2 = (Il2CppObject *)v6;
  v17 = 0LL;
  v18 = 0LL;
  System_ValueTuple_Int32Enum__object____ctor(
    v19,
    (int32_t)v5,
    (Il2CppObject *)Method_System_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___ctor__,
    v8);
  if ( !noblePhantasmObjectVisibleCtrList
    || (*(_QWORD *)&timing = v17,
        v11 = v18,
        items = noblePhantasmObjectVisibleCtrList->fields._items,
        v13 = Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Add__,
        ++noblePhantasmObjectVisibleCtrList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1B8880C(this, *(_QWORD *)&timing);
  }
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_Int32Enum__object____AddWithResize(
      noblePhantasmObjectVisibleCtrList,
      *(System_ValueTuple_Int32Enum__object__o *)&timing,
      *(const MethodInfo_34A5014 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = (ServantStatusBattleListViewItem_o *)(&items->obj + size);
    noblePhantasmObjectVisibleCtrList->fields._size = size + 1;
    v15->fields.sortValue0B = v16;
    v15 = (ServantStatusBattleListViewItem_o *)((char *)v15 + 40);
    *(_QWORD *)&v15[-1].fields.isMine = *(_QWORD *)&timing;
    sub_1B88554(v15, 0, v16, v10);
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
  const MethodInfo *v14; // x4
  int32_t v15; // w2
  int32_t v16; // w3
  const MethodInfo *v17; // x2

  if ( (byte_4A5DF0A & 1) == 0 )
  {
    sub_1B885B0(&ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    byte_4A5DF0A = 1;
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
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1B887FC(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, v14);
    this->fields.overwriteAnim = v13;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.overwriteAnim, (int32_t)v13, v15, v16);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, v17);
      return;
    }
LABEL_9:
    sub_1B8880C(Master, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__AddReservedEffectBuffEffectId(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4A5DF0E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4A5DF0E = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1B8880C(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  }
  size = reservedEffectBuffEffectIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      reservedEffectBuffEffectIdList,
      effectId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_Object_o *performance; // x21
  System_Action_object__o *v7; // x21

  v4 = this;
  if ( (byte_4A5DEB3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_string__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_string___);
    sub_1B885B0(&Method_BattleActorControl__AddServantVoicePlayed_b__216_0__);
    this = (BattleActorControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEB3 = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1B8880C(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v7 = (System_Action_object__o *)sub_1B887FC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v7,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__216_0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v7,
          (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_string___);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v9; // x20
  unsigned __int64 v10; // x25
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  System_String_o *v14; // x0
  System_String_o *v15; // x0
  int v16; // [xsp+Ch] [xbp-44h] BYREF

  v2 = (BattleActorControl_o **)this;
  if ( (byte_4A5DF0D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_13275/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5DF0D = 1;
  }
  v3 = v2[57];
  if ( !v3 )
    goto LABEL_26;
  LOBYTE(v3[1].fields.battleLog) = BYTE1(v3[1].fields.battleLog);
  v16 = 1;
  v4 = System_Int32__ToString((int32_t)&v16, 0LL);
  v5 = System_String__Concat_61707032((System_String_o *)StringLiteral_13275/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v4, 0LL);
  Value = ConstantMaster__getValue(v5, 0LL);
  if ( Value != -1 )
  {
    v7 = Value;
    while ( 1 )
    {
      this = v2[57];
      if ( !this )
        goto LABEL_26;
      if ( v7 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v2[53];
        if ( !this )
          goto LABEL_26;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, 0LL);
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v9 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_24:
      ++v16;
      v14 = System_Int32__ToString((int32_t)&v16, 0LL);
      v15 = System_String__Concat_61707032((System_String_o *)StringLiteral_13275/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v14, 0LL);
      v7 = ConstantMaster__getValue(v15, 0LL);
      if ( v7 == -1 )
        return;
    }
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(this, method);
      this = v2[17];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v9->fields.actorObject + v10),
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
        if ( BYTE1(this[1].fields.battleLog) )
        {
          LOBYTE(this[1].fields.battleLog) = BYTE1(this[1].fields.battleLog);
          BattleActorControl__playAnimation_43649396(ServantActor, (System_String_o *)StringLiteral_24600/*"wait"*/, 0, v12);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_43649396(ServantActor, (System_String_o *)StringLiteral_24600/*"wait"*/, 1, v13);
      }
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        goto LABEL_24;
    }
LABEL_26:
    sub_1B8880C(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_MaterialPropertyBlock_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DE87 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    byte_4A5DE87 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_1B887FC(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0LL);
  this->fields.mpb = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mpb, (int32_t)v3, v4, v5);
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
  __int64 v7; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x20
  struct BattlePerformance_o *v12; // x8
  struct UnityEngine_GameObject_array *v13; // x8
  Il2CppObject *ComponentInChildren_object; // x20

  v4 = this;
  if ( (byte_4A5DEDA & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
    this = (BattleActorControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEDA = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_21:
    sub_1B8880C(this, enable);
  v6 = enable;
  v7 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_21;
    max_length = e_actorlist->max_length;
    v10 = v7 - 4;
    if ( v7 - 4 >= (int)max_length )
      break;
    if ( v10 >= max_length )
      goto LABEL_23;
    v11 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v7);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v12 = v4->fields.performance;
      if ( !v12 )
        goto LABEL_21;
      v13 = v12->fields.e_actorlist;
      if ( !v13 )
        goto LABEL_21;
      if ( v10 >= v13->max_length )
LABEL_23:
        sub_1B88814(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_21;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
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
        LOBYTE(ComponentInChildren_object[2].klass) = v6;
      }
    }
    performance = v4->fields.performance;
    ++v7;
    if ( !performance )
      goto LABEL_21;
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
  __int64 v6; // x24
  struct UnityEngine_GameObject_array *e_actorlist; // x8
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x25
  UnityEngine_Object_o *v10; // x21
  struct BattlePerformance_o *v11; // x8
  struct UnityEngine_GameObject_array *v12; // x8
  Il2CppObject *ComponentInChildren_object; // x21

  v4 = this;
  if ( (byte_4A5DED9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
    this = (BattleActorControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DED9 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_1B8880C(this, enable);
  v6 = 4LL;
  while ( 1 )
  {
    e_actorlist = performance->fields.e_actorlist;
    if ( !e_actorlist )
      goto LABEL_23;
    max_length = e_actorlist->max_length;
    v9 = v6 - 4;
    if ( v6 - 4 >= (int)max_length )
      break;
    if ( v9 >= max_length )
      goto LABEL_25;
    v10 = (UnityEngine_Object_o *)*((_QWORD *)&e_actorlist->obj.klass + v6);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v11 = v4->fields.performance;
      if ( !v11 )
        goto LABEL_23;
      v12 = v11->fields.e_actorlist;
      if ( !v12 )
        goto LABEL_23;
      if ( v9 >= v12->max_length )
LABEL_25:
        sub_1B88814(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v12->obj.klass + v6);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
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
    ++v6;
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
  BattleData_o *IsHideShadow; // x0
  __int64 v10; // x1
  struct BattlePerformance_o *performance; // x8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *specialShadowObj; // x20
  unsigned __int64 m_CancellationTokenSource; // x8
  BattleData_o *v18; // x19
  unsigned __int64 v19; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  Il2CppObject *Component_object; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4A5DEDD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A5DEDD = 1;
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
    GroundShadowColor = BattleData__getGroundShadowColor(IsHideShadow, 0LL);
    v12 = GroundShadowColor.fields.r;
    v13 = GroundShadowColor.fields.g;
    v14 = GroundShadowColor.fields.b;
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
    UnityEngine_MaterialPropertyBlock__Clear_69316636((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    v23.fields.r = v12;
    v23.fields.g = v13;
    v23.fields.b = v14;
    v23.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16179/*"_Color"*/,
      v23,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
      (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.shadowObj;
    this->fields.currentShadowColor.fields.r = v12;
    this->fields.currentShadowColor.fields.g = v13;
    this->fields.currentShadowColor.fields.b = v14;
    this->fields.currentShadowColor.fields.a = a;
    if ( !IsHideShadow )
      goto LABEL_44;
    IsHideShadow = (BattleData_o *)UnityEngine_Component__GetComponent_object_(
                                     (UnityEngine_Component_o *)IsHideShadow,
                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
                                         (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712)) == 0LL )
  {
LABEL_44:
    sub_1B8880C(IsHideShadow, v10);
  }
  m_CancellationTokenSource = (unsigned __int64)IsHideShadow->fields.m_CancellationTokenSource;
  v18 = IsHideShadow;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v19 = 0LL;
    p_rootfsm = &IsHideShadow->fields.rootfsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_35;
      if ( v19 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_45;
      IsHideShadow = (BattleData_o *)p_rootfsm[v19];
      if ( !IsHideShadow )
        goto LABEL_44;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)IsHideShadow,
                           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (BattleData_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
      m_CancellationTokenSource = LODWORD(v18->fields.m_CancellationTokenSource);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        if ( v19 >= m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v19];
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
        if ( v19 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v19];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsHideShadow,
                                         0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
        if ( v19 >= LODWORD(v18->fields.m_CancellationTokenSource) )
LABEL_45:
          sub_1B88814(IsHideShadow, v10);
        IsHideShadow = (BattleData_o *)p_rootfsm[v19];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)IsHideShadow, 0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        v24.fields.r = v12;
        v24.fields.g = v13;
        v24.fields.b = v14;
        v24.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)IsHideShadow, v24, 0LL);
      }
      LODWORD(m_CancellationTokenSource) = v18->fields.m_CancellationTokenSource;
      ++v19;
    }
    while ( (__int64)v19 < (int)m_CancellationTokenSource );
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

  if ( (byte_4A5DE8F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11397/*"RootShadow"*/);
    byte_4A5DE8F = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11397/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v8;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v8,
                         (System_String_o *)StringLiteral_11397/*"RootShadow"*/,
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // [xsp+Ch] [xbp-24h] BYREF

  v16 = shadowId;
  if ( (byte_4A5DEDC & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Texture2D_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    sub_1B885B0(&StringLiteral_3220/*"Battle/Textures/shadow_"*/);
    sub_1B885B0(&StringLiteral_3221/*"Battle/Textures/shadow_1"*/);
    byte_4A5DEDC = 1;
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
      v10 = System_Int32__ToString((int32_t)&v16, 0LL);
      v11 = System_String__Concat_61707032((System_String_o *)StringLiteral_3220/*"Battle/Textures/shadow_"*/, v10, 0LL);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(ShadowTexture, 0LL, 0LL) )
    {
      v13 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_3221/*"Battle/Textures/shadow_1"*/, 0LL);
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
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(ShadowTexture, 0LL, 0LL) )
    {
      bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
      if ( bgPerf )
      {
        UnityEngine_MaterialPropertyBlock__Clear_69316636((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16179/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.currentShadowTexure,
              (int32_t)ShadowTexture,
              v14,
              v15);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_1B8880C(bgPerf, v7);
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
  int32_t v9; // w2
  int32_t v10; // w3
  BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *v12; // x20
  System_Enum_o v14; // [xsp+8h] [xbp-48h] BYREF
  int v15; // [xsp+18h] [xbp-38h]

  if ( (byte_4A5DF08 & 1) == 0 )
  {
    sub_1B885B0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5DF08 = 1;
  }
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( LOBYTE(Instance->fields.svtId.fields.currentCryptoKey) )
    return animname;
  if ( isSaveAnim && this->fields.isFirstSaveBeforePlayAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = animname;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)animname,
      v9,
      v10);
  }
  if ( !animname )
    goto LABEL_15;
  if ( !System_String__StartsWith(animname, (System_String_o *)StringLiteral_24600/*"wait"*/, 0LL) )
    return animname;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_15;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return animname;
  v15 = 49;
  v14.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v14.monitor = (void *)-1LL;
  Instance = (BattleServantData_o *)System_Enum__ToString(&v14, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_15:
    sub_1B8880C(Instance, v8);
  v12 = (System_String_o *)Instance;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)Instance, 0LL) )
    return v12;
  return animname;
}


System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(
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
  if ( (byte_4A5DF07 & 1) == 0 )
  {
    sub_1B885B0(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5DF07 = 1;
  }
  if ( isSaveAnim && v6->fields.isFirstSaveBeforePlayAnim )
  {
    v6->fields.isFirstSaveBeforePlayAnim = 0;
    v6->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v6->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)v5,
      isSaveAnim,
      (int32_t)method);
  }
  if ( !v5 )
    goto LABEL_13;
  this = (BattleActorControl_o *)System_String__StartsWith(v5, (System_String_o *)StringLiteral_24600/*"wait"*/, 0LL);
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
  this = (BattleActorControl_o *)System_Enum__ToString(&v11, 0LL);
  fbxcomponent = v6->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_13:
    sub_1B8880C(this, animname);
  v9 = this;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)this, 0LL) )
    return (System_String_o *)v9;
  return v5;
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
  __int64 methodPtr_low; // x9
  BattleActorControl_o *v11; // x0
  System_String_o *v12; // x1
  BattleActorControl_EventClass_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4A5DEBA & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&StringLiteral_1888/*"@OnComplete Fired!\n => <{0}>:"*/);
    byte_4A5DEBA = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1888/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_43701988(this, name, 0, v7);
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
    sub_1B8880C(CompleteList, v5);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v9->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)v9->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v9, 0LL);
    goto LABEL_11;
  }
  sub_1B88ACC(v9);
  BattleActorControl__setAnimationEvent(v11, v12, v13, v14);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4A5DEC4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4A5DEC4 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1B8880C(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (Il2CppObject *)motionName,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4A5DEC5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Remove__);
    byte_4A5DEC5 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1B8880C(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___Remove(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (const MethodInfo_31C86C4 *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4A5DE90 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE90 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_int__o v6; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5DF16 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4A5DF16 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToList_int_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                 (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v6;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields._current, v5) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_1B8880C(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    buffLoopEffectDict,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
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
  int32_t v8; // w3

  if ( (byte_4A5DF02 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__DestroyAuraEffect_d__330_TypeInfo);
    byte_4A5DF02 = 1;
  }
  v4 = sub_1B887FC(BattleActorControl__DestroyAuraEffect_d__330_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__330___ctor((BattleActorControl__DestroyAuraEffect_d__330_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B8880C(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)effectObject, v7, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5DF14 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__DestroyEffectOnParticleStop_d__356_TypeInfo);
    byte_4A5DF14 = 1;
  }
  v5 = sub_1B887FC(BattleActorControl__DestroyEffectOnParticleStop_d__356_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__356___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4A5DE91 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE91 = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69459568(actorObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__DestroyLoopEffect(
        BattleActorControl_o *this,
        int32_t effectId,
        const MethodInfo *method)
{
  void *buffLoopEffectDict; // x0
  Il2CppObject *Item; // x21
  struct System_Collections_Generic_Dictionary_int__GameObject__o *v7; // x8
  UnityEngine_GameObject_o *v8; // x19
  int v9; // w8
  void *v10; // x20
  unsigned int v11; // w24
  __int64 v12; // x8
  _QWORD *v13; // x21
  unsigned __int64 v14; // x25
  UnityEngine_Object_o *v15; // x22

  if ( (byte_4A5DF15 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF15 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
           effectId,
           (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                               (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v7 = this->fields.buffLoopEffectDict) == 0LL)
    || (v8 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__object___Remove(
                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                       effectId,
                                       (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v8)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                               v8,
                               1,
                               (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712)) == 0LL )
  {
LABEL_30:
    sub_1B8880C(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v9 = *((_DWORD *)buffLoopEffectDict + 6);
  v10 = buffLoopEffectDict;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        goto LABEL_29;
      buffLoopEffectDict = (void *)*((_QWORD *)v10 + (int)v11 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      v12 = *((_QWORD *)buffLoopEffectDict + 3);
      v13 = buffLoopEffectDict;
      if ( (int)v12 >= 1 )
        break;
LABEL_25:
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_26;
    }
    v14 = 0LL;
    while ( v14 < (unsigned int)v12 )
    {
      v15 = (UnityEngine_Object_o *)v13[v14 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v15, 0LL);
      LODWORD(v12) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_25;
    }
LABEL_29:
    sub_1B88814(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v8, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  BattleActorControl_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4A5DE94 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE94 = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.specialShadowObj, 0, v5, v6);
    BattleActorControl__EnableRenderer(v7, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v8);
  }
}


void __fastcall BattleActorControl__DisplayAnimationEffect(
        BattleActorControl_o *this,
        System_String_o *animName,
        System_String_o *eventTag,
        const MethodInfo *method)
{
  Il2CppObject *TriggerKey; // x20
  Il2CppObject *Value_object__object; // x21
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *prevAnimEffectTriggerKey; // x0
  System_Action_object__o *v13; // x22

  if ( (byte_4A5DE8E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActorAnimationEffect__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    sub_1B885B0(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
    sub_1B885B0(&Method_BattleActorControl__DisplayAnimationEffect_b__139_0__);
    byte_4A5DE8E = 1;
  }
  TriggerKey = (Il2CppObject *)BattleActorAnimationEffect__MakeTriggerKey(
                                 animName,
                                 eventTag,
                                 (const MethodInfo *)eventTag);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                           TriggerKey,
                           0LL,
                           (const MethodInfo_2E6E2D4 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0LL) )
  {
    prevAnimEffectTriggerKey = this->fields.prevAnimEffectTriggerKey;
    if ( !prevAnimEffectTriggerKey )
      sub_1B8880C(0LL, v9);
    if ( !System_String__Equals_61715348(prevAnimEffectTriggerKey, (System_String_o *)TriggerKey, 0LL) )
    {
      v13 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_object____ctor(
        v13,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__139_0__,
        0LL);
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)Value_object__object,
        (System_Action_T__o *)v13,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)TriggerKey;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.prevAnimEffectTriggerKey,
    (int32_t)TriggerKey,
    v10,
    v11);
}


void __fastcall BattleActorControl__EnableRenderer(
        BattleActorControl_o *this,
        UnityEngine_Component_o *target,
        bool isEnable,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x0
  __int64 v7; // x1
  Il2CppObject *component; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5DE93 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_TryGetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE93 = 1;
  }
  component = 0LL;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = (Il2CppObject *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)target, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !target )
      goto LABEL_11;
    if ( !UnityEngine_Component__TryGetComponent_object_(
            target,
            &component,
            (const MethodInfo_2E77270 *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v6 = component;
    if ( !component )
LABEL_11:
      sub_1B8880C(v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4A5DEA0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
    sub_1B885B0(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__0__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass166_0_TypeInfo);
    byte_4A5DEA0 = 1;
  }
  v5 = sub_1B887FC(BattleActorControl___c__DisplayClass166_0_TypeInfo);
  BattleActorControl___c__DisplayClass166_0___ctor((BattleActorControl___c__DisplayClass166_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = eventName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)eventName, v8, v9);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v11 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__0__,
    0LL);
  v12 = System_Linq_Enumerable__Where_object_(
          motionFSM,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_object_(
           v12,
           (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4A5DEF2 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DEF2 = 1;
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
UnityEngine_Color_o __fastcall BattleActorControl__GetAddColor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DEE5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    byte_4A5DEE5 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1B8880C(Item, v5);
  if ( !UnityEngine_Material__HasProperty_69325648(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16135/*"_AddColor"*/,
          0LL) )
  {
LABEL_12:
    v6 = 0.0;
    v7 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    goto LABEL_14;
  }
  Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Item,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16135/*"_AddColor"*/,
                                  0LL);
LABEL_14:
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5DF09 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF09 = 1;
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
      sub_1B8880C(0LL, v4);
    }
  }
  return result;
}


System_Collections_Generic_List_int__o *__fastcall BattleActorControl__GetDelayEndSequenceIdListFromMotion(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  PlayMakerFSM_o *Fsm; // x0
  __int64 v5; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v9; // x20
  unsigned __int64 v10; // x21
  System_String_o *v11; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5DF1C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&StringLiteral_5262/*"DelayEnd"*/);
    byte_4A5DF1C = 1;
  }
  result = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
                            (System_String_o *)StringLiteral_5262/*"DelayEnd"*/,
                            0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  Fsm = (PlayMakerFSM_o *)System_String__IsNullOrEmpty(Value, 0LL);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return v3;
  if ( !Value || (Fsm = (PlayMakerFSM_o *)System_String__Split(Value, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_23:
    sub_1B8880C(Fsm, v5);
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v9 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v10 = 0LL;
    while ( v10 < (unsigned int)m_CancellationTokenSource )
    {
      v11 = (System_String_o *)*((_QWORD *)&v9->fields.fsm + v10);
      result = 0;
      Fsm = (PlayMakerFSM_o *)System_Int32__TryParse(v11, &result, 0LL);
      if ( ((unsigned __int8)Fsm & 1) != 0 )
      {
        if ( !v3 )
          goto LABEL_23;
        v5 = (unsigned int)result;
        items = v3->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v3->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            v5,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size + 1] = v5;
        }
      }
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        return v3;
    }
LABEL_24:
    sub_1B88814(Fsm, v5);
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
  if ( (byte_4A5DEC1 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B885B0(&BattleActorControl_TypeInfo);
    byte_4A5DEC1 = 1;
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
    sub_1B8880C(this, method);
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
  System_Collections_Generic_List_object__o *rendererArrayList; // x0
  UnityEngine_Renderer_o *Item; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DEE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5DEE4 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1B8880C(Item, v5);
  if ( !UnityEngine_Material__HasProperty_69325648(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16179/*"_Color"*/,
          0LL) )
  {
LABEL_12:
    v6 = 1.0;
    v7 = 1.0;
    v8 = 1.0;
    v9 = 1.0;
    goto LABEL_14;
  }
  Item = (UnityEngine_Renderer_o *)this->fields.rendererArrayList;
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)Item,
                                     0,
                                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16179/*"_Color"*/,
                                  0LL);
LABEL_14:
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

  if ( (byte_4A5DF23 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
    byte_4A5DF23 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
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

  if ( (byte_4A5DEB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4A5DEB6 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1B8880C(Instance, v7);
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
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_List_object__o *v8; // x19
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v13; // x22
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppClass *klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5DED3 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass264_0__GetServantObjectVisibleControlActor_b__0__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass264_0_TypeInfo);
    byte_4A5DED3 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = sub_1B887FC(BattleActorControl___c__DisplayClass264_0_TypeInfo);
  BattleActorControl___c__DisplayClass264_0___ctor((BattleActorControl___c__DisplayClass264_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v3 + 16) = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)v9, v10, v11);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, 0LL),
        v13 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v13,
          (Il2CppObject *)v3,
          Method_BattleActorControl___c__DisplayClass264_0__GetServantObjectVisibleControlActor_b__0__,
          0LL),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v13,
          (const MethodInfo_2E6C3A8 *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v3 + 16)) == 0LL) )
  {
LABEL_29:
    sub_1B8880C(actiondata, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)actiondata,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !current )
        sub_1B8880C(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( !v18 )
      {
        if ( !Component_object )
          sub_1B8880C(v18, v19);
        klass = Component_object[25].klass;
        if ( !klass )
          sub_1B8880C(v18, v19);
        if ( LODWORD(klass->_1.namespaze) )
        {
          if ( !v8 )
            sub_1B8880C(v18, v19);
          items = v8->fields._items;
          v24 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v8->fields._version;
          if ( !items )
            sub_1B8880C(v18, v19);
          size = v8->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              Component_object,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v26[4] = (Il2CppClass *)Component_object;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)Component_object, v20, v21);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v8;
}


UnityEngine_GameObject_array *__fastcall BattleActorControl__GetShadowSvtEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return this->fields.shadowEffectObject;
}


UnityEngine_Transform_o *__fastcall BattleActorControl__GetTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  return UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
}


PlayMakerFSM_o *__fastcall BattleActorControl__GetUniqueMotion(BattleActorControl_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1B8880C(this, method);
  if ( !motionFSM->max_length )
    sub_1B88814(this, method);
  return motionFSM->m_Items[0];
}


void __fastcall BattleActorControl__InitAnimationEffect(
        BattleActorControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass138_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p_dicTriggerAnimEffects; // x19
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  System_Func_object__bool__o *v16; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  BattleActorControl___c_c *v19; // x0
  System_Func_object__object__o *_9__138_1; // x21
  Il2CppObject *v21; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v25; // x0
  BattleActorControl___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Func_object__object__o *_9__138_2; // x21
  Il2CppObject *v29; // x22
  struct BattleActorControl___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Func_object__object__o *_9__138_3; // x22
  Il2CppObject *v34; // x23
  struct BattleActorControl___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A5DE8D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
    sub_1B885B0(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
    sub_1B885B0(&System_Func_BattleActorAnimationEffect__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleActorAnimationEffect__string__TypeInfo);
    sub_1B885B0(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__InitAnimationEffect_b__138_1__);
    sub_1B885B0(&Method_BattleActorControl___c__InitAnimationEffect_b__138_2__);
    sub_1B885B0(&Method_BattleActorControl___c__InitAnimationEffect_b__138_3__);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass138_0__InitAnimationEffect_b__0__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass138_0_TypeInfo);
    sub_1B885B0(&BattleActorControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DE8D = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass138_0_o *)sub_1B887FC(BattleActorControl___c__DisplayClass138_0_TypeInfo);
  BattleActorControl___c__DisplayClass138_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  v5->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (ServantStatusBattleListViewItem_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicTriggerAnimEffects, 0, v8, v9);
  v11 = (int)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.prevAnimEffectTriggerKey, v11, v12, v13);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(actorObject, 0LL, 0LL) )
  {
    v6 = this->fields.actorObject;
    if ( v6 )
    {
      Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                                 v6,
                                                                                 (const MethodInfo_2ECF814 *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v16 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v16,
        (Il2CppObject *)v5,
        Method_BattleActorControl___c__DisplayClass138_0__InitAnimationEffect_b__0__,
        0LL);
      v17 = System_Linq_Enumerable__Where_object_(
              Components_object,
              (System_Func_TSource__bool__o *)v16,
              (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v17,
                                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v18, 0LL) )
      {
        v19 = BattleActorControl___c_TypeInfo;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v19 = BattleActorControl___c_TypeInfo;
        }
        _9__138_1 = (System_Func_object__object__o *)v19->static_fields->__9__138_1;
        if ( !_9__138_1 )
        {
          if ( !v19->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v19);
            v19 = BattleActorControl___c_TypeInfo;
          }
          v21 = (Il2CppObject *)v19->static_fields->__9;
          _9__138_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__138_1,
            v21,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_1__,
            0LL);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__138_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__138_1;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__138_1, (int32_t)_9__138_1, v23, v24);
        }
        v25 = System_Linq_Enumerable__GroupBy_object__object_(
                v18,
                (System_Func_TSource__TKey__o *)_9__138_1,
                (const MethodInfo_2EA5010 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v26 = BattleActorControl___c_TypeInfo;
        v27 = (System_Collections_Generic_IEnumerable_TSource__o *)v25;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v26 = BattleActorControl___c_TypeInfo;
        }
        _9__138_2 = (System_Func_object__object__o *)v26->static_fields->__9__138_2;
        if ( !_9__138_2 )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = BattleActorControl___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v26->static_fields->__9;
          _9__138_2 = (System_Func_object__object__o *)sub_1B887FC(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_object__object____ctor(
            _9__138_2,
            v29,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_2__,
            0LL);
          v30 = BattleActorControl___c_TypeInfo->static_fields;
          v30->__9__138_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__138_2;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v30->__9__138_2, (int32_t)_9__138_2, v31, v32);
          v26 = BattleActorControl___c_TypeInfo;
        }
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleActorControl___c_TypeInfo;
        }
        _9__138_3 = (System_Func_object__object__o *)v26->static_fields->__9__138_3;
        if ( !_9__138_3 )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = BattleActorControl___c_TypeInfo;
          }
          v34 = (Il2CppObject *)v26->static_fields->__9;
          _9__138_3 = (System_Func_object__object__o *)sub_1B887FC(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_object__object____ctor(
            _9__138_3,
            v34,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_3__,
            0LL);
          v35 = BattleActorControl___c_TypeInfo->static_fields;
          v35->__9__138_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__138_3;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v35->__9__138_3, (int32_t)_9__138_3, v36, v37);
        }
        v38 = System_Linq_Enumerable__ToDictionary_object__object__object_(
                v27,
                (System_Func_TSource__TKey__o *)_9__138_2,
                (System_Func_TSource__TElement__o *)_9__138_3,
                (const MethodInfo_2EB8E64 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (ServantStatusBattleListViewItem_c *)v38;
        sub_1B88554(p_dicTriggerAnimEffects, (int32_t)v38, v39, v40);
      }
      return;
    }
LABEL_29:
    sub_1B8880C(v6, v7);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v5; // x0
  System_Func_object__bool__o *_9__194_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5DEA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
    sub_1B885B0(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__194_0__);
    sub_1B885B0(&BattleActorControl___c_TypeInfo);
    byte_4A5DEA7 = 1;
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
  _9__194_0 = (System_Func_object__bool__o *)v5->static_fields->__9__194_0;
  if ( !_9__194_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__194_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__194_0,
      v7,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__194_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__194_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__194_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__194_0, (int32_t)_9__194_0, v9, v10);
  }
  return System_Linq_Enumerable__All_object_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__194_0,
           (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
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
  if ( (byte_4A5DF1D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    this = (BattleActorControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4A5DF1D = 1;
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
         (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1B8880C(this, entity);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(this, method);
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
  unsigned int v23; // w8
  struct BattleActionData_o *v24; // x8
  int32_t actionIndex; // w8
  int32_t v26; // w10
  int32_t v27; // w21
  int32_t i; // w20
  struct BattlePerformance_o *v29; // x8

  if ( (byte_4A5DF1F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF1F = 1;
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
      if ( !byte_4A5638F )
      {
        sub_1B885B0(&System_Math_TypeInfo);
        byte_4A5638F = 1;
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
      sub_1B8880C(v14, v15);
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
    sub_1B8880C(battleSvtData, v3);
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

  if ( (byte_4A5DEAE & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEAE = 1;
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

  if ( (byte_4A5DF1E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF1E = 1;
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
    sub_1B8880C(battleSvtData, v5);
  }
  return BattleData__IsVoiceOffSvt(v10, (int32_t)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v6; // x8
  System_Func_object__bool__o *_9__369_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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
  int32_t v32; // w3
  BattlePlayAnimationComponent_o *v33; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x22
  System_Func_object__bool__o *v35; // x23
  Il2CppObject *v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5DF20 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1B885B0(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__369_0__);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass369_0__LoadSavedPartAnimation_b__1__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass369_0_TypeInfo);
    sub_1B885B0(&BattleActorControl___c_TypeInfo);
    byte_4A5DF20 = 1;
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
    if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
      v6 = BattleActorControl___c_TypeInfo;
    }
    _9__369_0 = (System_Func_object__bool__o *)v6->static_fields->__9__369_0;
    if ( !_9__369_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActorControl___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__369_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__369_0,
        v8,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__369_0__,
        0LL);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
      static_fields->__9__369_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__369_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__369_0, (int32_t)_9__369_0, v10, v11);
    }
    v12 = System_Linq_Enumerable__Where_object_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__369_0,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v12 )
      sub_1B8880C(0LL, v13);
    klass = v12->klass;
    v15 = v12;
    v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        --v16;
        p_offset += 4;
        if ( !v16 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1BDA590(v12, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0LL);
    }
    v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v15,
            *(_QWORD *)(p_method + 8));
    if ( !v20 )
      sub_1B8880C(0LL, v19);
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
        v24 = sub_1BDA590(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
        break;
      v25 = sub_1B887FC(BattleActorControl___c__DisplayClass369_0_TypeInfo);
      BattleActorControl___c__DisplayClass369_0___ctor((BattleActorControl___c__DisplayClass369_0_o *)v25, 0LL);
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
        v29 = sub_1BDA590(v20, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL);
      }
      v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
      if ( !v25 )
        sub_1B8880C(v30, v30);
      *(_QWORD *)(v25 + 16) = v30;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 16), v30, v31, v32);
      v33 = *(BattlePlayAnimationComponent_o **)(v25 + 16);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v35 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v35,
        (Il2CppObject *)v25,
        Method_BattleActorControl___c__DisplayClass369_0__LoadSavedPartAnimation_b__1__,
        0LL);
      v36 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
              v34,
              (System_Func_TSource__bool__o *)v35,
              (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v33 )
        sub_1B8880C(v36, v36);
      BattlePlayAnimationComponent__SetSaveData(v33, (BattlePlayAnimationComponent_SaveData_o *)v36, 0LL);
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
      v40 = sub_1BDA590(v20, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v40)(v20, *(_QWORD *)(v40 + 8));
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__LoopEffectParticleSwitch(
        BattleActorControl_o *this,
        bool isPlay,
        bool isNoblePhantasm,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  __int64 v8; // x1
  _DWORD *ComponentsInChildren_object; // x0
  __int64 v10; // x1
  _DWORD *v11; // x23
  int v12; // w8
  unsigned int v13; // w28
  _DWORD *v14; // x8
  UnityEngine_ParticleSystem_o *v15; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UnityEngine_GameObject_o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-80h] BYREF
  _DWORD *v23; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v24; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v25; // 0:x0.8

  if ( (byte_4A5DF13 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4A5DF13 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v23 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                                       buffLoopEffectDict,
                                                                                       (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1B8880C(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v22 = v21;
LABEL_6:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v22,
            (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v22.fields._currentValue )
      sub_1B8880C(0LL, v8);
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)v22.fields._currentValue,
                                    1,
                                    (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    v11 = ComponentsInChildren_object;
    if ( !ComponentsInChildren_object )
      sub_1B8880C(0LL, v10);
    v12 = ComponentsInChildren_object[6];
    if ( v12 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v12 )
          sub_1B88814(ComponentsInChildren_object, v10);
        v14 = &v11[2 * v13];
        v15 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v14 + 4);
        if ( !v15 )
          sub_1B8880C(ComponentsInChildren_object, v10);
        ComponentsInChildren_object = UnityEngine_ParticleSystem__get_main(
                                        *((UnityEngine_ParticleSystem_o **)v14 + 4),
                                        0LL).fields.m_ParticleSystem;
        v23 = ComponentsInChildren_object;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_1B8880C(ComponentsInChildren_object, v10);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_24;
          UnityEngine_ParticleSystem__Play_69739516(v15, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
          if ( !gameObject )
            sub_1B8880C(0LL, v18);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v24.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v23;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v24, 0, 0LL);
            v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
            if ( !v19 )
              sub_1B8880C(0LL, v20);
            UnityEngine_GameObject__SetActive(v19, 0, 0LL);
            goto LABEL_24;
          }
          UnityEngine_ParticleSystem__Stop_69739868(v15, 0LL);
        }
        v25.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v23;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v25, !isPlay, 0LL);
LABEL_24:
        v12 = v11[6];
        if ( (int)++v13 >= v12 )
          goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v22,
    (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_4A5DF17 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_13436/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/);
    byte_4A5DF17 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13436/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1B8880C(0LL, v5);
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
  _BOOL8 v17; // x0
  __int64 v18; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v22; // x21
  UnityEngine_Transform_o *v23; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A5DF18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF18 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
    (const MethodInfo_316DD90 *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v4 = 0LL;
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_32B7418 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v26.fields._current.fields.key;
    value = v26.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !value )
        sub_1B8880C(v7, v8);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_1B8880C(0LL, v10);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_1B8880C(0LL, v12);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v14 )
        sub_1B8880C(0LL, v15);
      v16 = UnityEngine_Object__get_name(v14, 0LL);
      if ( !name )
        sub_1B8880C(v16, v16);
      v17 = System_String__Equals_61715348(name, v16, 0LL);
      if ( !v17 )
      {
        if ( !v4 )
        {
          v4 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v4,
            (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v4 )
            sub_1B8880C(v17, v18);
        }
        items = v4->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1B8880C(v17, v18);
        size = v4->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            key,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size + 1] = key;
        }
        v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v22 )
          sub_1B8880C(v23, v23);
        UnityEngine_Transform__set_parent(v22, v23, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_32B753C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
  return v4;
}


void __fastcall BattleActorControl__MoveLoopEffectToActorObject(
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

  if ( (byte_4A5DF19 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DF19 = 1;
  }
  memset(&v57, 0, sizeof(v57));
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
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffData,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_1B8880C(buffData, v7);
      }
      v11 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        EffectBuffList,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v57 = v55;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v57,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v12 )
          break;
        if ( !v57.fields._current )
          sub_1B8880C(v12, v13);
        if ( !MasterData_object )
          sub_1B8880C(v12, v13);
        v14 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)v57.fields._current[1].klass,
                (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v15 = v14;
        if ( v14 )
        {
          monitor = (int32_t)v14[6].monitor;
          if ( monitor >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 monitor,
                 (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v18 = this->fields.battleSvtData;
            if ( !v18 )
              sub_1B8880C(0LL, v17);
            v19 = (int32_t)v15[6].monitor;
            ActorSvtId = BattleServantData__getActorSvtId(v18, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v21);
            if ( !v11 )
              sub_1B8880C(LimitCount, v23);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v11, &entity, v19, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_1B8880C(0LL, v24);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                       (int32_t)v15[6].monitor,
                       (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_1B8880C(0LL, v27);
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Item, 0LL);
              v30 = transform;
              if ( !transform )
                sub_1B8880C(0LL, v29);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_1B8880C(0LL, v32);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_1B8880C(name, v34);
              if ( !name )
                sub_1B8880C(0LL, v34);
              if ( !System_String__Equals_61715348(name, entity->fields.nodeName, 0LL) )
              {
                if ( !byte_4A55CE1 )
                {
                  sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A55CE1 = 1;
                }
                UnityEngine_Transform__set_localPosition(
                  v30,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                if ( !byte_4A55CE7 )
                {
                  sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
                  byte_4A55CE7 = 1;
                }
                UnityEngine_Transform__set_localRotation(
                  v30,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
                v36 = this->fields.actorObject;
                if ( !v36 )
                  sub_1B8880C(0LL, v35);
                v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !entity )
                  sub_1B8880C(v37, v38);
                nodeName = entity->fields.nodeName;
                v40 = v37;
                v41 = BattleActorControl__getLimitCount(this, v38);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v40, nodeName, v41, 1, 0LL);
                v44 = NodeFromLvName;
                if ( !byte_4A55CE1 )
                {
                  NodeFromLvName = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A55CE1 = 1;
                }
                v45 = this->fields.battleSvtData;
                if ( !v45 )
                  sub_1B8880C(NodeFromLvName, v43);
                if ( !entity )
                  sub_1B8880C(0LL, v43);
                static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                x = static_fields->zeroVector.fields.x;
                y = static_fields->zeroVector.fields.y;
                z = static_fields->zeroVector.fields.z;
                Offset = StatusEffectPosOverwriteEntity__GetOffset(entity, v45->fields.isEnemy, 0LL);
                Offset.fields.x = x + Offset.fields.x;
                Offset.fields.y = y + Offset.fields.y;
                Offset.fields.z = z + Offset.fields.z;
                UnityEngine_Transform__set_localPosition(v30, Offset, 0LL);
                if ( !entity )
                  sub_1B8880C(0LL, v50);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                Rotation.fields.x = Rotation.fields.x * 0.017453;
                Rotation.fields.y = Rotation.fields.y * 0.017453;
                Rotation.fields.z = Rotation.fields.z * 0.017453;
                v62 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v30, v62, 0LL);
                if ( !entity )
                  sub_1B8880C(0LL, v51);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v30, Scale, 0LL);
                UnityEngine_Transform__set_parent(v30, v44, 0LL);
                v54 = this->fields.battleSvtData;
                if ( !v54 )
                  sub_1B8880C(v52, v53);
                if ( v54->fields.isEnemy )
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
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v57,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4A5DEEE & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_SkipDead__);
    sub_1B885B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4A5DEEE = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B887FC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1B8880C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3
  UnityEngine_GameObject_o *performance; // x0
  const MethodInfo *v8; // x1
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v11; // w9
  UnityEngine_Object_o *actorObject; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_object__o *extraLoadedVoiceArgsList; // x0
  ServantStatusBattleListViewItem_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5DE86 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DE86 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  this->fields.rendererArrayList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rendererArrayList, 0, v2, v3);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.BattleModelObjectVisibleControlComponents, 0, v5, v6);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_25;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v11 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v11;
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
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
      sub_1B8880C(performance, v8);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v8);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v14);
  extraLoadedVoiceArgsList = (System_Collections_Generic_List_object__o *)this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (ServantStatusBattleListViewItem_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      extraLoadedVoiceArgsList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v17 )
        break;
      if ( !v24.fields._current )
        sub_1B8880C(v17, v18);
      klass = (int32_t)v24.fields._current[1].klass;
      klass_high = HIDWORD(v24.fields._current[1].klass);
      monitor = (int32_t)v24.fields._current[1].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_1B88554(p_extraLoadedVoiceArgsList, 0, v22, v23);
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
  if ( (byte_4A5DEB9 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    byte_4A5DEB9 = 1;
  }
  fbxcomponent = v5->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_13;
  BattleActorControl__DisplayAnimationEffect(v5, fbxcomponent->fields.currentCommonAnimName, name, v3);
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this )
    goto LABEL_13;
  if ( (((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
          this,
          name,
          this->klass[1].vtable._3_ToString.methodPtr) & 1) == 0 )
  {
LABEL_12:
    BattleActorControl__sendEventFSM_43701988(v5, name, 0, v7);
    return;
  }
  this = (BattleActorControl_o *)v5->fields.EventList;
  if ( !this
    || (this = (BattleActorControl_o *)((__int64 (__fastcall *)(BattleActorControl_o *, System_String_o *, Il2CppMethodPointer))this->klass[1].vtable._4_GetTransform.method)(
                                         this,
                                         name,
                                         this->klass[1].vtable._5_getCriterialPos.methodPtr)) == 0LL )
  {
LABEL_13:
    sub_1B8880C(this, name);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)this->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc((BattleActorControl_EventClass_o *)this, 0LL);
    this = (BattleActorControl_o *)v5->fields.EventList;
    if ( this )
    {
      ((void (__fastcall *)(BattleActorControl_o *, System_String_o *, void *))this->klass[2]._1.events)(
        this,
        name,
        this->klass[2]._1.properties);
      goto LABEL_12;
    }
    goto LABEL_13;
  }
  sub_1B88ACC(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void __fastcall BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  UnityEngine_Object_o *klass; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DEC2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEC2 = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (ServantStatusBattleListViewItem_o *)&this->fields.particleDisconnectorObj;
  v4 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69459380(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_1B88554(p_particleDisconnectorObj, 0, v7, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3
  TreasureDvcEntity_o *v10; // x20
  int v11; // w8
  struct BattleServantData_o *v12; // x9
  int32_t v13; // w10
  System_Action_o *v14; // x20
  const MethodInfo *v15; // x2
  System_Collections_IEnumerator_o *v16; // x0

  if ( (byte_4A5DED6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__268_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5DED6 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_23;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( !performance )
    goto LABEL_23;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v6 = (BattleSequenceManager_o *)performance;
  performance = BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_23;
  performance = TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v6 )
    goto LABEL_23;
  BattleSequenceManager__SetIntactBgms(v6, (System_Int32_array *)performance, 0LL);
  performance = this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_23;
  if ( *((_BYTE *)performance + 471) )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_23;
    v7 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v7 )
      goto LABEL_23;
    *((_QWORD *)v7 + 33) = performance;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 264), (int32_t)performance, v8, v9);
    performance = this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_23;
  }
  performance = BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v10 = (TreasureDvcEntity_o *)performance;
  performance = (void *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v10 )
    goto LABEL_23;
  performance = TreasureDvcEntity__getFixAppearanceInfoArray(v10, (int32_t)performance, 0LL);
  if ( !performance )
    goto LABEL_21;
  if ( *((_DWORD *)performance + 6) < 2u )
    sub_1B88814(performance, obj);
  v11 = *((_DWORD *)performance + 8);
  if ( v11 < 1 )
  {
LABEL_21:
    v16 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_22;
  }
  v12 = this->fields.battleSvtData;
  if ( !v12 )
LABEL_23:
    sub_1B8880C(performance, obj);
  v13 = *((_DWORD *)performance + 9);
  v12->fields.tmpAppearanceId = v11;
  v12->fields.isForceAppearance = 1;
  v12->fields.dressDispId = v13;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__268_0__,
    0LL);
  v16 = BattleActorControl__waitChangeApp(this, v14, v15);
LABEL_22:
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v16, 0LL);
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
  struct System_Action_o *noblePhantasmCallback; // x8
  struct BattlePerformance_o *v18; // x8
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x2

  if ( (byte_4A5DED8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__270_0__);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_6381/*"FINISHED"*/);
    byte_4A5DED8 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_47;
  BattleServantData__updateTDGauge(Instance, 0LL);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_47;
  BattlePerformance__setupCameraFov((BattlePerformance_o *)Instance, this->fields.backupFov, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  LOBYTE(Instance->fields.equiphp) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_47;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62753100(0LL);
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
  if ( BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__270_0__,
      0LL);
    v15 = BattleActorControl__waitChangeApp(this, v13, v14);
    Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                        (UnityEngine_MonoBehaviour_o *)this,
                                        v15,
                                        0LL);
  }
  else
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_47;
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
          goto LABEL_47;
      }
      Instance = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
                                          noblePhantasmCallback->fields.original_method_info,
                                          *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
    }
    else
    {
      BattleActorControl__sendEventFSM_43701988(this, (System_String_o *)StringLiteral_6381/*"FINISHED"*/, 0, v16);
    }
  }
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
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
LABEL_47:
    sub_1B8880C(Instance, v6);
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)Instance, 0, 1, 0LL);
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4A5DEED & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_SkipDead__);
    sub_1B885B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4A5DEED = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B887FC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1B8880C(IsNoTouchSkip, v4);
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
  const MethodInfo *v9; // x3
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x8

  v4 = isSaveAnim;
  v6 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, isSaveAnim, method);
  result = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v6, v4, v7);
  overwriteAnim = this->fields.overwriteAnim;
  if ( overwriteAnim )
    return ChangeBattlePhaseOverwriteAnimation__Overwrite(overwriteAnim, this, result, v9);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_T__o *v19; // x19
  System_Action_object__o *v20; // x20

  if ( (byte_4A5DF22 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattlePlayAnimationComponent__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1B885B0(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass372_0__PlayMatchPartAnimation_b__0__);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass372_0__PlayMatchPartAnimation_b__1__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass372_0_TypeInfo);
    byte_4A5DF22 = 1;
  }
  v9 = sub_1B887FC(BattleActorControl___c__DisplayClass372_0_TypeInfo);
  BattleActorControl___c__DisplayClass372_0___ctor((BattleActorControl___c__DisplayClass372_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 16) = key;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)key, v12, v13);
  *(_QWORD *)(v9 + 24) = animName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 24), (int32_t)animName, v14, v15);
  *(float *)(v9 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v16);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass372_0__PlayMatchPartAnimation_b__0__,
    0LL);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v20 = (System_Action_object__o *)sub_1B887FC(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass372_0__PlayMatchPartAnimation_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v19,
    (System_Action_T__o *)v20,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
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
      sub_1B88814(this, *(_QWORD *)&timing);
    v14 = &BattleModelObjectVisibleControlComponents->obj.klass + v9;
    v15 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( !v15 )
      goto LABEL_21;
    v16 = (BattleModelObjectVisibleControlComponent_o *)v14[4];
    if ( isEnd )
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__EndProc(v16, timing, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
    }
    else
    {
      this = (BattleActorControl_o *)BattleModelObjectVisibleControlComponent__ExecuteProc(v16, timing, 0LL);
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
    sub_1B8880C(this, *(_QWORD *)&timing);
  }
  return v12;
}


void __fastcall BattleActorControl__RemoveChildNodesRenderer(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v6; // x20
  unsigned __int64 v7; // x22
  struct UnityEngine_GameObject_o **p_actorObject; // x25
  Il2CppObject *v9; // x21

  v4 = this;
  if ( (byte_4A5DEE9 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    this = (BattleActorControl_o *)sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    byte_4A5DEE9 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                   obj,
                                   (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v6 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v7 = 0LL;
    p_actorObject = &this->fields.actorObject;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v9 = (Il2CppObject *)p_actorObject[v7];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v9,
                                       (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_object___Remove(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v9,
                                         (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_1B8880C(this, obj);
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
    sub_1B8880C(0LL, eventName);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))EventList->klass->vtable._39_Remove.method)(
    EventList,
    eventName,
    EventList->klass->vtable._40_get_SyncRoot.methodPtr);
}


void __fastcall BattleActorControl__RemoveOverwriteEachPhaseAnimation(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t v3; // w3
  BattleObserver_o *overwriteAnim; // x1
  ServantStatusBattleListViewItem_o *p_overwriteAnim; // x19

  overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
  if ( overwriteAnim )
  {
    p_overwriteAnim = (ServantStatusBattleListViewItem_o *)&this->fields.overwriteAnim;
    if ( overwriteAnim->fields.battleSubject )
      BattleSubject__Remove(overwriteAnim->fields.battleSubject, overwriteAnim, v2);
    p_overwriteAnim->klass = 0LL;
    sub_1B88554(p_overwriteAnim, 0, (int32_t)v2, v3);
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

  if ( (byte_4A5DF0C & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF0C = 1;
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
        sub_1B8880C(0LL, v4);
      BattleFBXComponent__RevertDefaultAnimation(v5, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass289_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_object__o *v9; // x22

  if ( (byte_4A5DEE8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_Material__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass289_0__SetActorAlpha_b__0__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass289_0_TypeInfo);
    byte_4A5DEE8 = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass289_0_o *)sub_1B887FC(BattleActorControl___c__DisplayClass289_0_TypeInfo);
  BattleActorControl___c__DisplayClass289_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v9 = (System_Action_object__o *)sub_1B887FC(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass289_0__SetActorAlpha_b__0__,
    0LL);
  BattleActorControl__UpdateMaterialsOnRenderders_object_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v9,
    (const MethodInfo_2E70250 *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
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
  unsigned __int64 v16; // x25
  UnityEngine_Object_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4A5DEE7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    byte_4A5DEE7 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_1B8880C(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_1B8880C(0LL, v13);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
              sub_1B88814(materials, v13);
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v17 )
                sub_1B8880C(materials, v13);
              v20.fields.r = r;
              v20.fields.g = g;
              v20.fields.b = b;
              v20.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v17,
                (System_String_o *)StringLiteral_16135/*"_AddColor"*/,
                v20,
                0LL);
            }
            LODWORD(v15) = v14->max_length;
            ++v16;
          }
          while ( (__int64)v16 < (int)v15 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  Il2CppObject *Component_object; // x0
  __int64 v6; // x1

  if ( (byte_4A5DF06 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
    byte_4A5DF06 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_object )
    sub_1B8880C(0LL, v6);
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
  _QWORD *p_klass; // x8
  ServantStatusBattleListViewItem_o *p_shadowEffectObject; // x21
  unsigned __int64 v9; // x24
  __int64 v10; // x26
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x23
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_c *klass; // x8
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *actorObject; // x23
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  UnityEngine_GameObject_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  v6 = this;
  if ( (byte_4A5DEDB & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEDB = 1;
  }
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  p_shadowEffectObject = (ServantStatusBattleListViewItem_o *)&v6->fields.shadowEffectObject;
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
        goto LABEL_17;
      v12 = (UnityEngine_Object_o *)p_klass[v9 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v12, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v9 >= LODWORD(klass->_1.namespaze) )
LABEL_17:
          sub_1B88814(this, isShadow);
        *(void **)((char *)&klass->_1.image + v10) = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)klass + v10), 0, v13, v14);
        p_klass = &p_shadowEffectObject->klass->_1.image;
        ++v9;
        v10 += 8LL;
        if ( p_shadowEffectObject->klass )
          continue;
      }
      goto LABEL_18;
    }
  }
  battleSvtData = v6->fields.battleSvtData;
  if ( !battleSvtData )
LABEL_18:
    sub_1B8880C(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v19 = BattleEffectUtility__ChangeServantView(actorObject, isShadow, isChoco, svtlimitaddent, 0LL);
  p_shadowEffectObject->klass = (ServantStatusBattleListViewItem_c *)v19;
  sub_1B88554(p_shadowEffectObject, (int32_t)v19, v20, v21);
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
  unsigned __int64 v16; // x25
  UnityEngine_Object_o *v17; // x20
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4A5DEE6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5DEE6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_1B8880C(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_1B8880C(0LL, v13);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
              sub_1B88814(materials, v13);
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v17 )
                sub_1B8880C(materials, v13);
              v20.fields.r = r;
              v20.fields.g = g;
              v20.fields.b = b;
              v20.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v17,
                (System_String_o *)StringLiteral_16179/*"_Color"*/,
                v20,
                0LL);
            }
            LODWORD(v15) = v14->max_length;
            ++v16;
          }
          while ( (__int64)v16 < (int)v15 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__SetMaterialColor(
        BattleActorControl_o *this,
        UnityEngine_Color_o fadeColour,
        float alpha,
        const MethodInfo *method)
{
  float b; // s11
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
  float v21; // s14
  float v22; // s10
  BattleServantData_c **v23; // x8
  UnityEngine_Renderer_o *v24; // x20
  float v25; // s13
  float v26; // s12
  float v27; // s11
  __int64 v28; // x8
  BattleServantData_o *v29; // x20
  unsigned __int64 v30; // x26
  float v31; // s11
  float v32; // s12
  float v33; // s13
  UnityEngine_Object_o *v34; // x21
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_4A5DEE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    byte_4A5DEE3 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
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
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_30:
    sub_1B8880C(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v17 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v18 = 0;
    v19 = r * alpha;
    v20 = g * alpha;
    v21 = 1.0 - alpha;
    v22 = b * alpha;
    while ( 1 )
    {
      if ( v18 >= uniqueId )
        goto LABEL_29;
      v23 = &v17->klass + (int)v18;
      v24 = (UnityEngine_Renderer_o *)v23[4];
      if ( !v24 )
        goto LABEL_30;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v23[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      v25 = color.fields.r;
      v26 = color.fields.g;
      v27 = color.fields.b;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v24, 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      v28 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v29 = battleSvtData;
      if ( (int)v28 >= 1 )
        break;
LABEL_27:
      uniqueId = v17->fields.uniqueId;
      if ( (int)++v18 >= uniqueId )
        return;
    }
    v30 = 0LL;
    v31 = v21 * v27;
    v32 = v21 * v26;
    v33 = v21 * v25;
    while ( v30 < (unsigned int)v28 )
    {
      v34 = (UnityEngine_Object_o *)*(&v29->fields.userSvtId.fields.currentCryptoKey + v30);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v34 )
          goto LABEL_30;
        v36.fields.a = 1.0;
        v36.fields.r = v33;
        v36.fields.g = v32;
        v36.fields.b = v31;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v34, (System_String_o *)StringLiteral_16179/*"_Color"*/, v36, 0LL);
        v37.fields.a = 0.0;
        v37.fields.r = v19;
        v37.fields.g = v20;
        v37.fields.b = v22;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v34, (System_String_o *)StringLiteral_16135/*"_AddColor"*/, v37, 0LL);
      }
      LODWORD(v28) = v29->fields.uniqueId;
      if ( (__int64)++v30 >= (int)v28 )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B88814(battleSvtData, method);
  }
}


void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v4; // x1
  int v5; // w8
  _DWORD *v6; // x19
  unsigned int v7; // w22
  char *v8; // x8
  UnityEngine_Renderer_o *v9; // x20
  unsigned __int64 v10; // x25
  UnityEngine_Object_o *v11; // x21
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DEE2 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5DEE2 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_23;
  v5 = *((_DWORD *)gameObject + 6);
  v6 = gameObject;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= v5 )
LABEL_24:
        sub_1B88814(gameObject, v4);
      v8 = (char *)&v6[2 * v7];
      v9 = (UnityEngine_Renderer_o *)*((_QWORD *)v8 + 4);
      if ( !v9 )
        break;
      gameObject = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v8 + 4), 0LL);
      if ( !gameObject )
        break;
      v10 = 0LL;
      while ( (__int64)v10 < *((int *)gameObject + 6) )
      {
        gameObject = UnityEngine_Renderer__get_materials(v9, 0LL);
        if ( !gameObject )
          goto LABEL_23;
        if ( v10 >= *((unsigned int *)gameObject + 6) )
          goto LABEL_24;
        v11 = (UnityEngine_Object_o *)*((_QWORD *)gameObject + v10 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_23;
          v12.fields.r = 1.0;
          v12.fields.g = 1.0;
          v12.fields.b = 1.0;
          v12.fields.a = 1.0;
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)v11,
            (System_String_o *)StringLiteral_16179/*"_Color"*/,
            v12,
            0LL);
        }
        ++v10;
        gameObject = UnityEngine_Renderer__get_materials(v9, 0LL);
        if ( !gameObject )
          goto LABEL_23;
      }
      v5 = v6[6];
      if ( (int)++v7 >= v5 )
        return;
    }
LABEL_23:
    sub_1B8880C(gameObject, v4);
  }
}


void __fastcall BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePlayAnimationComponent_array *PlayAnimationComponents; // x0
  BattleActorControl___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__bool__o *_9__370_0; // x21
  Il2CppObject *v8; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  BattleActorControl___c_c *v13; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_object__object__o *_9__370_1; // x21
  Il2CppObject *v16; // x22
  struct BattleActorControl___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Object_array *v22; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_4A5DF21 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1B885B0(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__370_0__);
    sub_1B885B0(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__370_1__);
    sub_1B885B0(&BattleActorControl___c_TypeInfo);
    byte_4A5DF21 = 1;
  }
  PlayAnimationComponents = BattleActorControl__GetPlayAnimationComponents(this, 0, v2);
  v5 = BattleActorControl___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayAnimationComponents;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  _9__370_0 = (System_Func_object__bool__o *)v5->static_fields->__9__370_0;
  if ( !_9__370_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__370_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__370_0,
      v8,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__370_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__370_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__370_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__370_0, (int32_t)_9__370_0, v10, v11);
  }
  v12 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__370_0,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v13 = BattleActorControl___c_TypeInfo;
  v14 = v12;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v13 = BattleActorControl___c_TypeInfo;
  }
  _9__370_1 = (System_Func_object__object__o *)v13->static_fields->__9__370_1;
  if ( !_9__370_1 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleActorControl___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__370_1 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_object__object____ctor(
      _9__370_1,
      v16,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__370_1__,
      0LL);
    v17 = BattleActorControl___c_TypeInfo->static_fields;
    v17->__9__370_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__370_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->__9__370_1, (int32_t)_9__370_1, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v14,
                                                         (System_Func_TSource__TResult__o *)_9__370_1,
                                                         (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v21 = BasicHelper__ExcludeNull_object_(
          v20,
          (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v22 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v21,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(
      battleSvtData,
      this->fields.partAnimationSaveKey,
      (BattlePlayAnimationComponent_SaveData_array *)v22,
      0LL);
}


void __fastcall BattleActorControl__SetShadowActive(BattleActorControl_o *this, bool active, const MethodInfo *method)
{
  UnityEngine_Object_o *shadowObj; // x21
  const MethodInfo *v6; // x1
  UnityEngine_GameObject_o *IsHideShadow; // x0
  __int64 v8; // x1
  UnityEngine_Component_o *v9; // x8
  char v10; // w20

  if ( (byte_4A5DF1B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF1B = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
      sub_1B8880C(IsHideShadow, v8);
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
  if ( (byte_4A5DEE0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16262/*"_MainTex"*/);
    byte_4A5DEE0 = 1;
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
        UnityEngine_MaterialPropertyBlock__Clear_69316636((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
        IsHideShadow = (BattleData_o *)this->fields.mpb;
        if ( IsHideShadow )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
            (System_String_o *)StringLiteral_16262/*"_MainTex"*/,
            (UnityEngine_Texture_o *)this->fields.currentShadowTexure,
            0LL);
          IsHideShadow = (BattleData_o *)this->fields.mpb;
          if ( IsHideShadow )
          {
            v13.fields.r = r;
            v13.fields.g = g;
            v13.fields.b = b;
            v13.fields.a = a;
            UnityEngine_MaterialPropertyBlock__SetColor(
              (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
              (System_String_o *)StringLiteral_16179/*"_Color"*/,
              v13,
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
                                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_1B8880C(IsHideShadow, v9);
    }
  }
}


void __fastcall BattleActorControl__SetShadowSize(
        BattleActorControl_o *this,
        int32_t btlSize,
        const MethodInfo *method)
{
  BattleActorControl_c *v5; // x0
  System_Collections_Generic_Dictionary_int__object__o *v6; // x21
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
  int32_t v22; // w2
  int32_t v23; // w3
  BattleActorControl_c *v24; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v26; // x0
  System_Collections_Generic_Dictionary_int__object__o *v27; // x21
  int v28; // w8
  int v29; // w8
  int v30; // w8
  int v31; // w8
  int v37; // w8
  int v38; // w8
  int v40; // w8
  int v42; // w8
  int v44; // w8
  int v45; // w8
  int v47; // w8
  int v48; // w8
  int v49; // w8
  int32_t v50; // w2
  int32_t v51; // w3
  BattleActorControl_c *v52; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0
  BattleActorControl_c *v54; // x0
  BattleActorControl_c *v55; // x0
  Il2CppObject *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  Il2CppObject *v59; // x22
  UnityEngine_Transform_o *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  BattleActorControl_c *v63; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v65; // x23
  BattleActorControl_c *v66; // x0
  UnityEngine_Object_o *v67; // x19

  if ( (byte_4A5DEE1 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3___TypeInfo);
    sub_1B885B0(&StringLiteral_12736/*"Shadow"*/);
    byte_4A5DEE1 = 1;
  }
  v5 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v5 = BattleActorControl_TypeInfo;
  }
  if ( !v5->static_fields->ShadowTransform )
  {
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v6,
      (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v9 = *((_DWORD *)ShadowTransform + 6);
    if ( !v9 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0LL;
    *((_DWORD *)ShadowTransform + 10) = 0;
    if ( v9 == 1 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 6) = 0LL;
    *((_DWORD *)ShadowTransform + 11) = 0;
    if ( !v6 )
      goto LABEL_138;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      0,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v10 = *((_DWORD *)ShadowTransform + 6);
    if ( !v10 )
      goto LABEL_137;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v10 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      1,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v11 = *((_DWORD *)ShadowTransform + 6);
    if ( !v11 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v11 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      2,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v12 = *((_DWORD *)ShadowTransform + 6);
    if ( !v12 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v12 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      3,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v13 = *((_DWORD *)ShadowTransform + 6);
    if ( !v13 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v13 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      4,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v14 = *((_DWORD *)ShadowTransform + 6);
    if ( !v14 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v14 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      5,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v15 = *((_DWORD *)ShadowTransform + 6);
    if ( !v15 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v15 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      6,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v16 = *((_DWORD *)ShadowTransform + 6);
    if ( !v16 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v16 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      7,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v17 = *((_DWORD *)ShadowTransform + 6);
    if ( !v17 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v17 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      8,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v18 = *((_DWORD *)ShadowTransform + 6);
    if ( !v18 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v18 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      9,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v19 = *((_DWORD *)ShadowTransform + 6);
    if ( !v19 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v19 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      10,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v20 = *((_DWORD *)ShadowTransform + 6);
    if ( !v20 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v20 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      11,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v21 = *((_DWORD *)ShadowTransform + 6);
    if ( !v21 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v21 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v6,
      12,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v24 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v24 = BattleActorControl_TypeInfo;
    }
    v24->static_fields->ShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)BattleActorControl_TypeInfo->static_fields, (int32_t)v6, v22, v23);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v26 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v26 = BattleActorControl_TypeInfo;
    }
    if ( !v26->static_fields->specialShadowTransform )
    {
      v27 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v27,
        (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v28 = *((_DWORD *)ShadowTransform + 6);
      if ( !v28 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v28 == 1 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      *((_DWORD *)ShadowTransform + 11) = 0;
      if ( !v27 )
        goto LABEL_138;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        0,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v29 = *((_DWORD *)ShadowTransform + 6);
      if ( !v29 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v29 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        1,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v30 = *((_DWORD *)ShadowTransform + 6);
      if ( !v30 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v30 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        2,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v31 = *((_DWORD *)ShadowTransform + 6);
      if ( !v31 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v31 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        3,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v37 = *((_DWORD *)ShadowTransform + 6);
      if ( !v37 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v37 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        4,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v38 = *((_DWORD *)ShadowTransform + 6);
      if ( !v38 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v38 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        5,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v40 = *((_DWORD *)ShadowTransform + 6);
      if ( !v40 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v40 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        6,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v42 = *((_DWORD *)ShadowTransform + 6);
      if ( !v42 )
        goto LABEL_137;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v42 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        7,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v44 = *((_DWORD *)ShadowTransform + 6);
      if ( !v44 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v44 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        8,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v45 = *((_DWORD *)ShadowTransform + 6);
      if ( !v45 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v45 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        9,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v47 = *((_DWORD *)ShadowTransform + 6);
      if ( !v47 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v47 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        10,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v48 = *((_DWORD *)ShadowTransform + 6);
      if ( !v48 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v48 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        11,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B88658(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v49 = *((_DWORD *)ShadowTransform + 6);
      if ( !v49 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v49 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v27,
        12,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v52 = BattleActorControl_TypeInfo;
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v52 = BattleActorControl_TypeInfo;
      }
      static_fields = v52->static_fields;
      static_fields->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v27;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->specialShadowTransform, (int32_t)v27, v50, v51);
    }
  }
  v54 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v54 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v54->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_138;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v55 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v55 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v55->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_138;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v59 = Item;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
    {
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v60 = UnityEngine_Transform__Find(
              (UnityEngine_Transform_o *)ShadowTransform,
              (System_String_o *)StringLiteral_12736/*"Shadow"*/,
              0LL);
      *p_shadowObj = v60;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shadowObj, (int32_t)v60, v61, v62);
    }
    v63 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v63 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v63->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( !v63->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v63);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_138;
      }
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             (System_Collections_Generic_Dictionary_int__object__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v65 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v65, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_138;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v66 = BattleActorControl_TypeInfo;
            if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v66 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v66->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_138;
            v59 = System_Collections_Generic_Dictionary_int__object___get_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v67 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_138;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v59 )
        goto LABEL_138;
      if ( LODWORD(v59[1].monitor) )
      {
        if ( !ShadowTransform )
          goto LABEL_138;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v59[2].klass,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_138;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v59[1].monitor) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)((char *)&v59[2].monitor + 4),
              0LL);
            return;
          }
LABEL_138:
          sub_1B8880C(ShadowTransform, v8);
        }
      }
LABEL_137:
      sub_1B88814(ShadowTransform, v8);
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
    sub_1B8880C(battleSvtData, v4);
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
  const MethodInfo *v5; // x2
  ChangeBattlePhaseOverwriteAnimation_o *overwriteAnim; // x0
  BattleFBXComponent_o *v7; // x20

  if ( (byte_4A5DF0B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF0B = 1;
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
        || (v7 = this->fields.fbxcomponent,
            overwriteAnim = (ChangeBattlePhaseOverwriteAnimation_o *)ChangeBattlePhaseOverwriteAnimation__GetCurrentNormalOverwriteName(
                                                                       overwriteAnim,
                                                                       this->fields._PlayedOriginalAnimName_k__BackingField,
                                                                       v5),
            !v7) )
      {
        sub_1B8880C(overwriteAnim, v4);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v7, (System_String_o *)overwriteAnim, 0LL);
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
  int32_t v3; // w3
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_myShiftData, 0, (int32_t)method, v3);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v10);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, v11);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5DEF1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_12155/*"SKIP_DEAD"*/);
    byte_4A5DEF1 = 1;
  }
  BattleActorControl__sendEventFSM_43701988(this, (System_String_o *)StringLiteral_12155/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleFBXComponent_o *fbxcomponent; // x20
  ServantStatusBattleListViewItem_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v6; // x22
  System_Delegate_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Delegate_o *v10; // x8
  BattleFBXComponent_onEventDelegate_c *v11; // x1
  struct BattleFBXComponent_o *v12; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v14; // x22
  System_Delegate_o *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  BattleFBXComponent_onEventDelegate_c *v18; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  UnityEngine_Transform_o *v23; // x0
  UnityEngine_Transform_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  v2 = this;
  if ( (byte_4A5DE85 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_Complete__);
    sub_1B885B0(&Method_BattleActorControl_OnEvent__);
    sub_1B885B0(&StringLiteral_18976/*"en_damage01"*/);
    sub_1B885B0(&StringLiteral_18979/*"en_text01"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&BattleFBXComponent_onEventDelegate_TypeInfo);
    byte_4A5DE85 = 1;
  }
  fbxcomponent = v2->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_16;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (ServantStatusBattleListViewItem_o *)&fbxcomponent->fields.OnEvent;
  v6 = (BattleFBXComponent_onEventDelegate_o *)sub_1B887FC(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v6, (Il2CppObject *)v2, Method_BattleActorControl_OnEvent__, 0LL);
  v7 = System_Delegate__Combine(OnEvent, (System_Delegate_o *)v6, 0LL);
  v10 = v7;
  if ( v7 )
  {
    v11 = BattleFBXComponent_onEventDelegate_TypeInfo;
    if ( (BattleFBXComponent_onEventDelegate_c *)v7->klass != BattleFBXComponent_onEventDelegate_TypeInfo )
      goto LABEL_13;
    p_OnEvent->klass = (ServantStatusBattleListViewItem_c *)v7;
    if ( (BattleFBXComponent_onEventDelegate_c *)v7->klass != v11 )
      goto LABEL_13;
  }
  else
  {
    p_OnEvent->klass = 0LL;
  }
  sub_1B88554(p_OnEvent, (int32_t)v7, v8, v9);
  v12 = v2->fields.fbxcomponent;
  if ( !v12 )
LABEL_16:
    sub_1B8880C(this, method);
  Complete = (System_Delegate_o *)v12->fields.Complete;
  p_OnEvent = (ServantStatusBattleListViewItem_o *)&v12->fields.Complete;
  v14 = (BattleFBXComponent_onEventDelegate_o *)sub_1B887FC(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v14, (Il2CppObject *)v2, Method_BattleActorControl_Complete__, 0LL);
  v15 = System_Delegate__Combine(Complete, (System_Delegate_o *)v14, 0LL);
  v10 = v15;
  if ( !v15 )
  {
LABEL_14:
    p_OnEvent->klass = (ServantStatusBattleListViewItem_c *)v10;
    goto LABEL_15;
  }
  v18 = BattleFBXComponent_onEventDelegate_TypeInfo;
  if ( (BattleFBXComponent_onEventDelegate_c *)v15->klass != BattleFBXComponent_onEventDelegate_TypeInfo
    || (p_OnEvent->klass = (ServantStatusBattleListViewItem_c *)v15,
        (BattleFBXComponent_onEventDelegate_c *)v15->klass != v18) )
  {
LABEL_13:
    sub_1B88ACC(v10);
    goto LABEL_14;
  }
LABEL_15:
  sub_1B88554(p_OnEvent, (int32_t)v10, v16, v17);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_18979/*"en_text01"*/, -1, 0, 0LL);
  v2->fields.nodeText = NodeFromLvName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.nodeText, (int32_t)NodeFromLvName, v21, v22);
  v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  v24 = TransformHelper__getNodeFromLvName(v23, (System_String_o *)StringLiteral_18976/*"en_damage01"*/, -1, 0, 0LL);
  v2->fields.nodeDamage = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.nodeDamage, (int32_t)v24, v25, v26);
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
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleServantData_o *v18; // x8
  float v19; // s9
  System_String_o *Value; // x0
  int v21; // w8
  __int64 v22; // x19
  unsigned int v23; // w20
  int v24; // w22
  UnityEngine_GameObject_o *v25; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  System_Object_array *v28; // x20
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *v34; // x22
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  int32_t v41; // w2
  int32_t v42; // w3
  Il2CppObject *v43; // x21
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  int32_t v65; // w2
  int32_t v66; // w3
  Il2CppObject *v67; // x21
  System_Collections_Hashtable_o *v68; // x0
  __int64 v69; // x0
  float v70; // [xsp+8h] [xbp-58h] BYREF
  int v71; // [xsp+Ch] [xbp-54h] BYREF
  float Height; // [xsp+28h] [xbp-38h] BYREF
  int v73; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4A5DEC0 & 1) == 0 )
  {
    sub_1B885B0(&iTween_EaseType_TypeInfo);
    sub_1B885B0(&object___TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_24307/*"updateDeadEffect"*/);
    sub_1B885B0(&StringLiteral_19656/*"from"*/);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_9901/*"OnFinishDead"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_12104/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/);
    sub_1B885B0(&StringLiteral_22281/*"onupdate"*/);
    sub_1B885B0(&StringLiteral_23969/*"to"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DEC0 = 1;
  }
  if ( enableDropItem )
    BattleActorControl__StartDropItem(this, 0, method);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    v8 = battleSvtData->fields.displayType == 3;
  else
    v8 = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  if ( v8 )
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
  v15 = ParticleDisconnector__DisconnectParticles(root_field, transform, 0LL);
  this->fields.particleDisconnectorObj = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.particleDisconnectorObj, (int32_t)v15, v16, v17);
  v18 = this->fields.battleSvtData;
  v19 = 1.3;
  if ( v18 )
  {
    if ( v18->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12104/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_87;
        v21 = *(_DWORD *)(ActorSvtId + 24);
        v22 = ActorSvtId;
        if ( v21 >= 1 )
        {
          v23 = 0;
          while ( 1 )
          {
            if ( v23 >= v21 )
              goto LABEL_85;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_87;
            v24 = *(_DWORD *)(v22 + 4LL * (int)v23 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v24 == (_DWORD)ActorSvtId )
              break;
            v21 = *(_DWORD *)(v22 + 24);
            if ( (int)++v23 >= v21 )
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
  v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_1B88658(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_87:
    sub_1B8880C(ActorSvtId, v11);
  v28 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19656/*"from"*/;
  if ( StringLiteral_19656/*"from"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_19656/*"from"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_19656/*"from"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v28->max_length )
    goto LABEL_85;
  v28->m_Items[0] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v28->m_Items, v11, v26, v27);
  v73 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v73, v29, v30, v31);
  v34 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B886EC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v28->max_length <= 1 )
    goto LABEL_85;
  v28->m_Items[1] = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[1], (int32_t)v34, v32, v33);
  ActorSvtId = StringLiteral_23969/*"to"*/;
  if ( StringLiteral_23969/*"to"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_23969/*"to"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_23969/*"to"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 2 )
    goto LABEL_85;
  v28->m_Items[2] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[2], v11, v35, v36);
  Height = BattleActorControl__GetHeight(this, v37);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height, v38, v39, v40);
  v43 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B886EC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v28->max_length <= 3 )
    goto LABEL_85;
  v28->m_Items[3] = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[3], (int32_t)v43, v41, v42);
  ActorSvtId = StringLiteral_18755/*"easetype"*/;
  if ( StringLiteral_18755/*"easetype"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_18755/*"easetype"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_18755/*"easetype"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 4 )
    goto LABEL_85;
  v28->m_Items[4] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[4], v11, v44, v45);
  v71 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v71, v46, v47, v48);
  v51 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B886EC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v28->max_length <= 5 )
    goto LABEL_85;
  v28->m_Items[5] = v51;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[5], (int32_t)v51, v49, v50);
  ActorSvtId = StringLiteral_22281/*"onupdate"*/;
  if ( StringLiteral_22281/*"onupdate"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_22281/*"onupdate"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_22281/*"onupdate"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 6 )
    goto LABEL_85;
  v28->m_Items[6] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[6], v11, v52, v53);
  ActorSvtId = StringLiteral_24307/*"updateDeadEffect"*/;
  if ( StringLiteral_24307/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_24307/*"updateDeadEffect"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24307/*"updateDeadEffect"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 7 )
    goto LABEL_85;
  v28->m_Items[7] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[7], v11, v54, v55);
  ActorSvtId = StringLiteral_22273/*"oncomplete"*/;
  if ( StringLiteral_22273/*"oncomplete"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_22273/*"oncomplete"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_22273/*"oncomplete"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 8 )
    goto LABEL_85;
  v28->m_Items[8] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[8], v11, v56, v57);
  ActorSvtId = StringLiteral_9901/*"OnFinishDead"*/;
  if ( StringLiteral_9901/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_9901/*"OnFinishDead"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_9901/*"OnFinishDead"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 9 )
    goto LABEL_85;
  v28->m_Items[9] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[9], v11, v58, v59);
  ActorSvtId = StringLiteral_23929/*"time"*/;
  if ( StringLiteral_23929/*"time"*/ )
  {
    ActorSvtId = sub_1B886EC(StringLiteral_23929/*"time"*/, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_23929/*"time"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v28->max_length <= 0xA )
    goto LABEL_85;
  v28->m_Items[10] = (Il2CppObject *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[10], v11, v60, v61);
  v70 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v70, v62, v63, v64);
  v67 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B886EC(ActorSvtId, v28->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_86:
      v69 = sub_1B88830(ActorSvtId);
      sub_1B886D8(v69, 0LL);
    }
  }
  if ( v28->max_length <= 0xB )
LABEL_85:
    sub_1B88814(ActorSvtId, v11);
  v28->m_Items[11] = v67;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v28->m_Items[11], (int32_t)v67, v65, v66);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v68 = iTween__Hash(v28, 0LL);
  iTween__ValueTo(v25, v68, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v6; // x8
  struct BattlePerformance_o *performance; // x8
  struct BattleServantData_o *v8; // x8
  struct DropInfo_array *droplist; // x27
  struct BattlePerformance_o *v10; // x9
  int32_t ServantIndex; // w21
  const MethodInfo *v12; // x1
  UnityEngine_Transform_o *DropTransform; // x0
  __int64 v14; // x3
  UnityEngine_Transform_o *v15; // x22
  unsigned __int64 v16; // x23
  DropInfo_o *v17; // x24
  UnityEngine_Object_o *Item_41873632; // x25
  BattlePerformance_o *v19; // x26
  int v20; // s0
  struct BattlePerformance_o *v23; // x8
  BattlePerformance_o *v24; // x20

  if ( (byte_4A5DEBF & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DEBF = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_32;
  if ( battleSvtData->fields.isWithdraw )
    goto LABEL_9;
  battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    goto LABEL_9;
  v6 = this->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_32;
  battleSvtData = (BattleServantData_o *)v6->fields.deckSvt;
  if ( !battleSvtData )
    goto LABEL_32;
  battleSvtData = (BattleServantData_o *)BattleDeckServantData__getIsForceDropItem(
                                           (BattleDeckServantData_o *)battleSvtData,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
LABEL_9:
    performance = this->fields.performance;
    if ( !performance )
      goto LABEL_32;
    battleSvtData = (BattleServantData_o *)performance->fields.data;
    if ( !battleSvtData )
      goto LABEL_32;
    BattleData__RegisterItemDroppedSkillShiftInfo((BattleData_o *)battleSvtData, this->fields.battleSvtData, 0LL);
    v8 = this->fields.battleSvtData;
    if ( !v8 )
      goto LABEL_32;
    droplist = v8->fields.droplist;
    v8->fields.IsAlreadyDrop = 1;
    if ( droplist )
    {
      v10 = this->fields.performance;
      if ( !v10 )
        goto LABEL_32;
      battleSvtData = (BattleServantData_o *)v10->fields.data;
      if ( !battleSvtData )
        goto LABEL_32;
      ServantIndex = BattleData__getServantIndex(
                       (BattleData_o *)battleSvtData,
                       v8->fields.isEnemy,
                       v8->fields.uniqueId,
                       0LL);
      DropTransform = BattleActorControl__getDropTransform(this, v12);
      LODWORD(v14) = droplist->max_length;
      if ( (int)v14 >= 1 )
      {
        v15 = DropTransform;
        v16 = 0LL;
        while ( 1 )
        {
          if ( v16 >= (unsigned int)v14 )
            sub_1B88814(DropTransform, isSilent);
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v17 = droplist->m_Items[v16];
          Item_41873632 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_41873632(
                                                    (BattlePerformance_o *)battleSvtData,
                                                    v15,
                                                    v17,
                                                    v14,
                                                    v16,
                                                    ServantIndex,
                                                    this->fields.headupVec,
                                                    0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item_41873632, 0LL, 0LL);
          if ( ((unsigned __int8)battleSvtData & 1) != 0 )
          {
            if ( !v15 )
              break;
            v19 = this->fields.performance;
            *(UnityEngine_Vector3_o *)&v20 = UnityEngine_Transform__get_position(v15, 0LL);
            if ( !v19 )
              break;
            BattlePerformance__saveOriginalPos(
              v19,
              (UnityEngine_GameObject_o *)Item_41873632,
              *(UnityEngine_Vector3_o *)&v20,
              this->fields.criteriaPos,
              0LL);
          }
          v23 = this->fields.performance;
          if ( !v23 )
            break;
          battleSvtData = (BattleServantData_o *)v23->fields.data;
          if ( !battleSvtData )
            break;
          BattleData__addDropItems((BattleData_o *)battleSvtData, v17, 0LL);
          v14 = *(_QWORD *)&droplist->max_length;
          if ( (__int64)++v16 >= (int)v14 )
            goto LABEL_28;
        }
LABEL_32:
        sub_1B8880C(battleSvtData, isSilent);
      }
    }
LABEL_28:
    if ( !isSilent )
    {
      v24 = this->fields.performance;
      battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v24 )
        goto LABEL_32;
      BattlePerformance__ShowAll(
        v24,
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
    if ( !byte_4A55CE1 )
    {
      actorObject = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    if ( !v13 )
LABEL_11:
      sub_1B8880C(actorObject, v5);
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
  struct BattleServantData_o *battleSvtData; // x8
  BattleServantData_o *v6; // x23
  BattleBuffData_o *buffData; // x21
  BattleBuffData_CheckIndividualitiesData_o *v8; // x22
  const MethodInfo *v9; // x2
  struct BattleServantData_o *v10; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v12; // x1

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_4A5DF1A & 1) == 0 )
  {
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&BuffList_TYPE___TypeInfo);
    byte_4A5DF1A = 1;
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
      v6 = v4->fields.battleSvtData;
      if ( !v6 )
        goto LABEL_23;
      buffData = v6->fields.buffData;
      v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v8, v6, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_42437664(buffData, 100, v8, 1, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_1B88658(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_23;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1B88814(this, this);
      LODWORD(this->fields.actorObject) = 163;
      v10 = v4->fields.battleSvtData;
      if ( !v10 )
        goto LABEL_23;
      this = (BattleActorControl_o *)v10->fields.buffData;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_42415388(
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
        v9);
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
      sub_1B8880C(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateEachServantStatusUiByTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleActionData_o *actiondata; // x0
  BattleActionData_o *v4; // x20
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  int endcameraname; // w8
  unsigned int v9; // w23
  struct BattlePerformance_o *performance; // x8
  __int64 v11; // x22
  struct BattlePerformance_o *v12; // x8
  BattleServantData_o *v13; // x21
  __int64 v14; // x8
  int32_t Value; // w0
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v17; // 0:x0.8

  if ( (byte_4A5DEF6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleActionData_BuffData___);
    sub_1B885B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_int__get_Value__);
    byte_4A5DEF6 = 1;
  }
  v16 = 0LL;
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_30;
  actiondata = (BattleActionData_o *)BattleActionData__getShiftServant(actiondata, 0LL);
  if ( !actiondata )
    goto LABEL_30;
  if ( !BYTE2(actiondata->fields.type) )
  {
    BYTE2(actiondata->fields.type) = 1;
    if ( !this->fields.actiondata )
      goto LABEL_30;
    actiondata = (BattleActionData_o *)BattleActionData__getBuffList(
                                         this->fields.actiondata,
                                         actiondata->fields.state,
                                         0LL);
    v4 = actiondata;
    if ( !actiondata )
    {
      v5 = Method_System_Array_Empty_BattleActionData_BuffData___;
      v6 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData___ + 7);
      if ( !v6 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_BattleActionData_BuffData___);
        v6 = v5[7];
      }
      v7 = *(_QWORD *)(v6 + 16);
      if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
        v7 = sub_1BDA48C(v7);
      if ( !*(_DWORD *)(v7 + 224) )
        j_il2cpp_runtime_class_init_0(v7);
      actiondata = *(BattleActionData_o **)(v5[7] + 16LL);
      if ( !*(&actiondata->fields.IsDontUpdateMessage + 1) )
        actiondata = (BattleActionData_o *)sub_1BDA48C(actiondata);
      v4 = **(BattleActionData_o ***)&actiondata->fields.commandAssistId;
      if ( !v4 )
        goto LABEL_30;
    }
    endcameraname = (int)v4->fields.endcameraname;
    if ( endcameraname >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= endcameraname )
          sub_1B88814(actiondata, method);
        performance = this->fields.performance;
        if ( !performance )
          break;
        v11 = *((_QWORD *)&v4->fields.actorId + (int)v9);
        if ( !v11 )
          break;
        actiondata = (BattleActionData_o *)performance->fields.data;
        if ( !actiondata )
          break;
        actiondata = (BattleActionData_o *)BattleData__getServantData(
                                             (BattleData_o *)actiondata,
                                             *(_DWORD *)(v11 + 40),
                                             0LL);
        if ( actiondata )
        {
          v12 = this->fields.performance;
          if ( !v12 )
            break;
          v13 = (BattleServantData_o *)actiondata;
          BattleActionData_BuffData__ExecAfterEffectProc((BattleActionData_BuffData_o *)v11, v12->fields.data, 0LL);
          BattleServantData__UpdateNpImmediately(v13, *(_DWORD *)(v11 + 84), 0LL);
          v14 = *(_QWORD *)(v11 + 92);
          v16 = v14;
          if ( (_BYTE)v14 )
          {
            v17 = (System_Nullable_int__o)&v16;
            v16 = v14;
            Value = System_Nullable_int___get_Value(
                      v17,
                      (const MethodInfo_361A2D8 *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v13, Value, v13->fields.maxtpturn, 0LL);
          }
          BattleServantData__updateHp(v13, 0LL);
          BattleServantData__updateBuff(v13, 1, 1, 0LL);
        }
        endcameraname = (int)v4->fields.endcameraname;
        if ( (int)++v9 >= endcameraname )
          return;
      }
LABEL_30:
      sub_1B8880C(actiondata, method);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_object_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_2E70250 *method)
{
  Il2CppClass *_3_BattleActorControl___c__290_T; // x0
  Il2CppClass *v8; // x0
  System_Func_object__bool__o *v9; // x22
  Il2CppClass *v10; // x0
  const MethodInfo_2E70250_RGCTXs *rgctx_data; // x8
  __int64 v12; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v14; // x23
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppClass *v17; // x0
  Il2CppClass *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v24; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  Il2CppClass *_8_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  UnityEngine_Renderer_o *v39; // x0
  __int64 v40; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  Il2CppClass *v42; // x0
  Il2CppClass *v43; // x0
  System_Func_object__bool__o *v44; // x23
  Il2CppClass *v45; // x0
  Il2CppClass *v46; // x0
  Il2CppObject *v47; // x24
  int32_t v48; // w2
  int32_t v49; // w3
  Il2CppClass *v50; // x0
  Il2CppClass *v51; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  __int64 v53; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v55; // x8
  __int64 v56; // x9
  int32_t *v57; // x10
  __int64 v58; // x0
  __int64 v59; // x1
  __int64 v60; // x22
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0

  if ( method->rgctx_data
    || (sub_1B885B0(&Method_System_Linq_Enumerable_Where_Material___),
        sub_1B885B0(&System_Func_Material__bool__TypeInfo),
        sub_1B885B0(&System_IDisposable_TypeInfo),
        sub_1B885B0(&System_Collections_Generic_IEnumerable_Material__TypeInfo),
        sub_1B885B0(&System_Collections_Generic_IEnumerator_Material__TypeInfo),
        sub_1B885B0(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !rendererEnumerable )
      return;
  }
  else
  {
    sub_1BDA4E8(method);
    if ( !rendererEnumerable )
      return;
  }
  _3_BattleActorControl___c__290_T = method->rgctx_data->_3_BattleActorControl___c__290_T_;
  if ( (BYTE5(_3_BattleActorControl___c__290_T->vtable[0].methodPtr) & 1) == 0 )
    _3_BattleActorControl___c__290_T = (Il2CppClass *)sub_1BDA48C(_3_BattleActorControl___c__290_T);
  if ( !_3_BattleActorControl___c__290_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_3_BattleActorControl___c__290_T);
  v8 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
  if ( (BYTE5(v8->vtable[0].methodPtr) & 1) == 0 )
    v8 = (Il2CppClass *)sub_1BDA48C(v8);
  v9 = (System_Func_object__bool__o *)*((_QWORD *)v8->static_fields + 1);
  if ( !v9 )
  {
    v10 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
      v10 = (Il2CppClass *)sub_1BDA48C(v10);
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    rgctx_data = method->rgctx_data;
    v12 = (__int64)rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    {
      v12 = sub_1BDA48C(v12);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)rgctx_data->_2_System_Func_T__bool_;
    v14 = **(Il2CppObject ***)(v12 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1BDA48C(_2_System_Func_T__bool);
    v9 = (System_Func_object__bool__o *)sub_1B887FC(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v9,
      v14,
      (intptr_t)method->rgctx_data->_4_BattleActorControl___c__290_T___UpdateMaterialsOnRenderders_b__290_0,
      (const MethodInfo_3371EB4 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v17 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1BDA48C(v17);
    *((_QWORD *)v17->static_fields + 1) = v9;
    v18 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v18->vtable[0].methodPtr) & 1) == 0 )
      v18 = (Il2CppClass *)sub_1BDA48C(v18);
    sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v18->static_fields + 8), (int32_t)v9, v15, v16);
  }
  v19 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)rendererEnumerable,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EBE07C *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
  if ( !v19 )
    sub_1B8880C(0LL, v20);
  v21 = v19;
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = v21->klass;
  v24 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v24;
      p_offset += 4;
      if ( !v24 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1BDA590(v21, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v21,
          *(_QWORD *)(p_method + 8));
  v29 = v27;
  while ( 1 )
  {
    if ( !v29 )
      sub_1B8880C(v27, v28);
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_39;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_39:
      v33 = sub_1BDA590(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    _8_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_8_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _8_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BDA48C(method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_);
    v35 = *(_QWORD *)v29;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((Il2CppClass **)v37 - 1) != _8_System_Collections_Generic_IEnumerator_T )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_48;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_48:
      v38 = sub_1BDA590(v29, _8_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v39 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
    if ( !v39 )
      sub_1B8880C(0LL, v40);
    materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v39, 0LL);
    v42 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v42->vtable[0].methodPtr) & 1) == 0 )
      v42 = (Il2CppClass *)sub_1BDA48C(v42);
    if ( !v42->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v42);
    v43 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
    if ( (BYTE5(v43->vtable[0].methodPtr) & 1) == 0 )
      v43 = (Il2CppClass *)sub_1BDA48C(v43);
    v44 = (System_Func_object__bool__o *)*((_QWORD *)v43->static_fields + 2);
    if ( !v44 )
    {
      v45 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v45->vtable[0].methodPtr) & 1) == 0 )
        v45 = (Il2CppClass *)sub_1BDA48C(v45);
      if ( !v45->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v45);
      v46 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v46->vtable[0].methodPtr) & 1) == 0 )
        v46 = (Il2CppClass *)sub_1BDA48C(v46);
      v47 = *(Il2CppObject **)v46->static_fields;
      v44 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_Material__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v44,
        v47,
        (intptr_t)method->rgctx_data->_11_BattleActorControl___c__290_T___UpdateMaterialsOnRenderders_b__290_1,
        0LL);
      v50 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v50->vtable[0].methodPtr) & 1) == 0 )
        v50 = (Il2CppClass *)sub_1BDA48C(v50);
      *((_QWORD *)v50->static_fields + 2) = v44;
      v51 = method->rgctx_data->_3_BattleActorControl___c__290_T_;
      if ( (BYTE5(v51->vtable[0].methodPtr) & 1) == 0 )
        v51 = (Il2CppClass *)sub_1BDA48C(v51);
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)v51->static_fields + 16), (int32_t)v44, v48, v49);
    }
    v52 = System_Linq_Enumerable__Where_object_(
            materials,
            (System_Func_TSource__bool__o *)v44,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_Material___);
    v54 = v52;
    if ( !v52 )
      sub_1B8880C(0LL, v53);
    v55 = v52->klass;
    v56 = *(unsigned __int16 *)(&v52->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v52->klass->_2.bitflags2 + 3) )
    {
      v57 = &v55->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_Material__c **)v57 - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
      {
        --v56;
        v57 += 4;
        if ( !v56 )
          goto LABEL_74;
      }
      v58 = (__int64)&v55->vtable[*v57].method;
    }
    else
    {
LABEL_74:
      v58 = sub_1BDA590(v52, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
    }
    v60 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v58)(
            v54,
            *(_QWORD *)(v58 + 8));
    if ( !v60 )
      sub_1B8880C(0LL, v59);
    while ( 1 )
    {
      v61 = *(_QWORD *)v60;
      v62 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
      {
        v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v63 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v62;
          v63 += 4;
          if ( !v62 )
            goto LABEL_81;
        }
        v64 = v61 + 16LL * *v63 + 312;
      }
      else
      {
LABEL_81:
        v64 = sub_1BDA590(v60, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8)) & 1) == 0 )
        break;
      v65 = *(_QWORD *)v60;
      v66 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
      {
        v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_Material__c **)v67 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
        {
          --v66;
          v67 += 4;
          if ( !v66 )
            goto LABEL_88;
        }
        v68 = v65 + 16LL * *v67 + 312;
      }
      else
      {
LABEL_88:
        v68 = sub_1BDA590(v60, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
      }
      v69 = (*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v60, *(_QWORD *)(v68 + 8));
      if ( !updateFunc )
        sub_1B8880C(v69, v69);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))updateFunc->fields.m_target)(
        updateFunc->fields.original_method_info,
        v69,
        *(_QWORD *)&updateFunc->fields.extra_arg);
    }
    v70 = *(_QWORD *)v60;
    v71 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
    {
      v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v72 - 1) != System_IDisposable_TypeInfo )
      {
        --v71;
        v72 += 4;
        if ( !v71 )
          goto LABEL_96;
      }
      v73 = v70 + 16LL * *v72 + 312;
    }
    else
    {
LABEL_96:
      v73 = sub_1BDA590(v60, System_IDisposable_TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v60, *(_QWORD *)(v73 + 8));
  }
  v74 = *(_QWORD *)v29;
  v75 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_105;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_105:
    v77 = sub_1BDA590(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v29, *(_QWORD *)(v77 + 8));
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
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DE92 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BattleBgMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DE92 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (BattleServantData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_70;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v6 = this->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_70;
  if ( !v6->fields.isHideShadow )
  {
    translucentActorVisualInfo = this->fields.translucentActorVisualInfo;
    if ( !translucentActorVisualInfo )
      goto LABEL_70;
    if ( !translucentActorVisualInfo->fields._IsActive_k__BackingField
      || translucentActorVisualInfo->fields._IsDrawShadow_k__BackingField )
    {
      shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL) )
      {
        IsHideShadow = this->fields.battleSvtData;
        if ( !IsHideShadow )
          goto LABEL_70;
        IsHideShadow = (BattleServantData_o *)BattleServantData__isAlive(IsHideShadow, 0, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v11 = this->fields.battleSvtData;
          if ( !v11 )
            goto LABEL_70;
          if ( v11->fields.isEntry )
          {
            IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
            if ( !IsHideShadow )
              goto LABEL_70;
            IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)IsHideShadow,
                                                    0LL);
            if ( !IsHideShadow )
              goto LABEL_70;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
          }
        }
      }
      IsHideShadow = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IsHideShadow )
        goto LABEL_70;
      IsHideShadow = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)IsHideShadow,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_70;
      v12 = (BattleBgMaster_o *)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_70;
      v13 = (int)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v12 )
        goto LABEL_70;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v12, v13, (int32_t)IsHideShadow, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v15);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v17 = this->fields.performance;
        if ( !v17 )
          goto LABEL_70;
        data = (UnityEngine_Object_o *)v17->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v19 = this->fields.performance;
          if ( !v19 )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)v19->fields.data;
          if ( !IsHideShadow )
            goto LABEL_70;
          GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v20);
          v21 = this->fields.performance;
          if ( !v21 )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)v21->fields.data;
          if ( !IsHideShadow )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)BattleData__GetShadowOffSvtIds((BattleData_o *)IsHideShadow, 0LL);
          if ( !this->fields.performance )
            goto LABEL_70;
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v26, 0LL, 0LL);
          if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_70;
            uniqueId = v22->fields.uniqueId;
            if ( uniqueId >= 1 )
            {
              v28 = 0;
              while ( 1 )
              {
                if ( v28 >= uniqueId )
                  sub_1B88814(IsHideShadow, v5);
                IsHideShadow = this->fields.battleSvtData;
                if ( !IsHideShadow )
                  goto LABEL_70;
                v29 = *((_DWORD *)&v22->fields.userSvtId.fields.currentCryptoKey + (int)v28);
                IsHideShadow = (BattleServantData_o *)BattleServantData__getActorSvtId(IsHideShadow, 0LL);
                if ( v29 == (_DWORD)IsHideShadow )
                  break;
                uniqueId = v22->fields.uniqueId;
                if ( (int)++v28 >= uniqueId )
                  goto LABEL_68;
              }
              IsHideShadow = (BattleServantData_o *)this->fields.shadowObj;
              if ( !IsHideShadow )
                goto LABEL_70;
              IsHideShadow = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)IsHideShadow,
                                                      0LL);
              if ( !IsHideShadow )
                goto LABEL_70;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
            }
          }
        }
      }
LABEL_68:
      IsHideShadow = this->fields.battleSvtData;
      if ( !IsHideShadow )
        goto LABEL_70;
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
LABEL_64:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        return;
      }
    }
LABEL_70:
    sub_1B8880C(IsHideShadow, v5);
  }
  v7 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        goto LABEL_12;
      }
    }
    goto LABEL_70;
  }
LABEL_12:
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (BattleServantData_o *)this->fields.specialShadowObj;
    if ( !IsHideShadow )
      goto LABEL_70;
    goto LABEL_64;
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

  if ( (byte_4A5DEC6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    byte_4A5DEC6 = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1B8880C(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
         (Il2CppObject *)eventName,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
  int32_t v7; // w3

  if ( (byte_4A5DED7 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__WaitToNoblePhantasmPlay_d__269_TypeInfo);
    byte_4A5DED7 = 1;
  }
  v3 = sub_1B887FC(BattleActorControl__WaitToNoblePhantasmPlay_d__269_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__269___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__216_0(
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
  if ( (byte_4A5DF26 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5DF26 = 1;
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
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v10, 0LL);
  if ( !data )
LABEL_9:
    sub_1B8880C(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__139_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__268_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__270_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  const MethodInfo *v4; // x3
  struct System_Action_o *noblePhantasmCallback; // x8

  if ( (byte_4A5DF29 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_6381/*"FINISHED"*/);
    byte_4A5DF29 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  noblePhantasmCallback = this->fields.noblePhantasmCallback;
  if ( !noblePhantasmCallback )
  {
    BattleActorControl__sendEventFSM_43701988(this, (System_String_o *)StringLiteral_6381/*"FINISHED"*/, 0, v4);
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
    sub_1B8880C(performance, method);
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
LABEL_9:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
    noblePhantasmCallback->fields.original_method_info,
    *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__266_0(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattleActorControl_o *v7; // x20
  int32_t v8; // w21
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  __int128 v13; // [xsp+0h] [xbp-60h] BYREF
  __int128 v14; // [xsp+10h] [xbp-50h]

  if ( (byte_4A5DF27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___GetEnumerator__);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5DF27 = 1;
  }
  v13 = 0u;
  v14 = 0u;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_13;
  System_Collections_Generic_List_ValueTuple_Int32Enum__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_34A5B6C *)Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__object____MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)&v13,
           (const MethodInfo_326E82C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___MoveNext__);
    if ( !v4 )
      break;
    v7 = (BattleActorControl_o *)*((_QWORD *)&v14 + 1);
    if ( !*((_QWORD *)&v14 + 1) )
      sub_1B8880C(v4, v5);
    v8 = v14;
    BattleActorControl__playAnimation_43649396(
      *((BattleActorControl_o **)&v14 + 1),
      (System_String_o *)StringLiteral_24600/*"wait"*/,
      0,
      v6);
    BattleActorControl__ProcServantObjectVisibleCtr(v7, v8, 1, v9);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (const MethodInfo_326E828 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Dispose__);
  v10 = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !v10 )
LABEL_13:
    sub_1B8880C(noblePhantasmObjectVisibleCtrList, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__266_1(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A5DF28 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4A5DF28 = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v18, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_12;
  v9 = (int)Instance;
  Instance = (BattleSequenceManager_o *)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !Instance )
    goto LABEL_12;
  v10 = Instance;
  Instance = (BattleSequenceManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_12;
  m_CachedPtr = v10->fields.m_CachedPtr;
  Instance = (BattleSequenceManager_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)Instance, 1, 0LL);
  v12 = this->fields.battleSvtData;
  if ( !v12
    || (overwriteSvtVoiceId = v12->fields.overwriteSvtVoiceId,
        treasuredvcLevel = v12->fields.treasuredvcLevel,
        v15 = (int)Instance,
        NpChargeStage = BattleServantData__getNpChargeStage(this->fields.battleSvtData, 0LL),
        v17 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1B887FC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v6) )
  {
LABEL_12:
    sub_1B8880C(Instance, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__addBuffLoopEffect(
        BattleActorControl_o *this,
        BuffEntity_o *buffEntity,
        const MethodInfo *method)
{
  const MethodInfo *effectId; // x1
  __int64 buffLoopEffectDict; // x0
  System_Int32_array *ValueArray; // x0
  __int64 v8; // x8
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
  float v41; // s0
  float v42; // s1
  float v43; // s2
  struct BattleServantData_o *v44; // x8
  float v45; // s10
  float v46; // s8
  float v47; // s9
  bool v48; // w0
  StatusEffectPosOverwriteEntity_o *entity; // [xsp+8h] [xbp-78h] BYREF
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Rotation; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Scale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v56; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DF11 & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_7152/*"HIDE_STATUS_EFFECT_IDS"*/);
    byte_4A5DF11 = 1;
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
         (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffLoopEffectDict,
                                  (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7152/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v8 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v8 < 1 )
  {
LABEL_15:
    v10 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1B887FC(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v10, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12 = buffEntity->fields.effectId;
    v13 = gameObject;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
    }
    buffLoopEffectDict = (__int64)this->fields.battleSvtData;
    if ( buffLoopEffectDict )
    {
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      x = static_fields->zeroVector.fields.x;
      y = static_fields->zeroVector.fields.y;
      z = static_fields->zeroVector.fields.z;
      ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
      LimitCount = BattleActorControl__getLimitCount(this, v20);
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      v50.fields.x = x;
      v50.fields.y = y;
      v50.fields.z = z;
      EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                               v13,
                                               v12,
                                               v14,
                                               v50,
                                               ActorSvtId,
                                               LimitCount,
                                               (BattleEffectUtility_EffectLoadArgument_o *)v10,
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
        v23 = (UnityEngine_Transform_o *)buffLoopEffectDict;
        if ( !byte_4A55CE1 )
        {
          buffLoopEffectDict = sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( v23 )
        {
          UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)EffectToNode,
                                          0LL);
          v24 = (UnityEngine_Transform_o *)buffLoopEffectDict;
          if ( !byte_4A55CE7 )
          {
            buffLoopEffectDict = sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
            byte_4A55CE7 = 1;
          }
          if ( v24 )
          {
            UnityEngine_Transform__set_localRotation(
              v24,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)buffLoopEffectDict,
                                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
              entity = 0LL;
              if ( buffLoopEffectDict )
              {
                v25 = (StatusEffectPosOverwriteMaster_o *)buffLoopEffectDict;
                buffLoopEffectDict = (__int64)this->fields.battleSvtData;
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v26 = buffEntity->fields.effectId;
                v27 = BattleServantData__getActorSvtId((BattleServantData_o *)buffLoopEffectDict, 0LL);
                v29 = BattleActorControl__getLimitCount(this, v28);
                buffLoopEffectDict = StatusEffectPosOverwriteMaster__TryGetEntity(v25, &entity, v26, v27, v29, 0LL);
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
                  v32 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(this->fields.actorObject, 0LL);
                  if ( !entity )
                    goto LABEL_53;
                  nodeName = entity->fields.nodeName;
                  v34 = (UnityEngine_Transform_o *)buffLoopEffectDict;
                  v35 = BattleActorControl__getLimitCount(this, effectId);
                  NodeFromLvName = TransformHelper__getNodeFromLvName(v34, nodeName, v35, 1, 0LL);
                  if ( !byte_4A55CE1 )
                  {
                    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE1 = 1;
                  }
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  v37 = UnityEngine_Vector3_TypeInfo->static_fields;
                  v39 = v37->zeroVector.fields.y;
                  v38 = v37->zeroVector.fields.z;
                  v40 = v37->zeroVector.fields.x;
                  *(UnityEngine_Vector3_o *)&v41 = StatusEffectPosOverwriteEntity__GetOffset(entity, isEnemy, 0LL);
                  if ( !v32 )
                    goto LABEL_53;
                  v51.fields.z = v38 + v43;
                  v51.fields.y = v39 + v42;
                  v51.fields.x = v40 + v41;
                  UnityEngine_Transform__set_localPosition(v32, v51, 0LL);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                  Rotation.fields.x = Rotation.fields.x * 0.017453;
                  Rotation.fields.y = Rotation.fields.y * 0.017453;
                  Rotation.fields.z = Rotation.fields.z * 0.017453;
                  v56 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                  UnityEngine_Transform__set_localRotation(v32, v56, 0LL);
                  buffLoopEffectDict = (__int64)entity;
                  if ( !entity )
                    goto LABEL_53;
                  Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                  UnityEngine_Transform__set_localScale(v32, Scale, 0LL);
                  UnityEngine_Transform__set_parent(v32, NodeFromLvName, 0LL);
                }
              }
              v44 = this->fields.battleSvtData;
              if ( !v44 )
                goto LABEL_53;
              if ( v44->fields.isEnemy )
              {
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, 0LL);
                v45 = localScale.fields.x;
                v46 = localScale.fields.y;
                v47 = localScale.fields.z;
                buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)EffectToNode,
                                                0LL);
                if ( !buffLoopEffectDict )
                  goto LABEL_53;
                v55.fields.x = -v45;
                v55.fields.y = v46;
                v55.fields.z = v47;
                UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)buffLoopEffectDict, v55, 0LL);
              }
              buffLoopEffectDict = (__int64)this->fields.reservedEffectBuffEffectIdList;
              if ( buffLoopEffectDict )
              {
                v48 = System_Collections_Generic_List_int___Contains(
                        (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
                        buffEntity->fields.effectId,
                        (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v48, 0LL);
                buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (Il2CppObject *)EffectToNode,
                    (const MethodInfo_316D958 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B8880C(buffLoopEffectDict, effectId);
  }
  v9 = 0;
  while ( ValueArray->m_Items[v9 + 1] != buffEntity->fields.effectId )
  {
    if ( (_DWORD)v8 == ++v9 )
      goto LABEL_15;
  }
}


void __fastcall BattleActorControl__callServant(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B8880C(0LL, method);
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
  UnityEngine_Component_o *Component_object; // x0

  if ( (byte_4A5DEDF & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEDF = 1;
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
                                                            (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, isNormal, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_1B8880C(Component_object, v7);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Component_object, !isNormal, 0LL);
    }
  }
}


void __fastcall BattleActorControl__changeSpecialShadow(
        BattleActorControl_o *this,
        int32_t shadowEffectId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  UnityEngine_Component_o *Component_object; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v12; // w21
  System_Action_o *v13; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_4A5DEDE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass277_0__changeSpecialShadow_b__0__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass277_0_TypeInfo);
    byte_4A5DEDE = 1;
  }
  v5 = sub_1B887FC(BattleActorControl___c__DisplayClass277_0_TypeInfo);
  BattleActorControl___c__DisplayClass277_0___ctor((BattleActorControl___c__DisplayClass277_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 24) = shadowEffectId;
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
                                                        (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_object )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, 0, 0LL);
          v12 = *(_DWORD *)(v5 + 24);
          v13 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v13,
            (Il2CppObject *)v5,
            Method_BattleActorControl___c__DisplayClass277_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__LoadEffectAssetIfNotYet(v12, v13, performance, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1B8880C(Component_object, v7);
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
    sub_1B8880C(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A5DEF8 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl_endChangeAppearance__);
    byte_4A5DEF8 = 1;
  }
  performance = this->fields.performance;
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_1B8880C(v5, v6);
  BattlePerformance__checkChangeAppearance(performance, v4, 0LL);
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
    sub_1B8880C(this, name);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  v8 = m_CancellationTokenSource > 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    while ( v9 < (unsigned int)m_CancellationTokenSource )
    {
      this = (BattleActorControl_o *)*((_QWORD *)&v7->fields.actorObject + v9);
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
    sub_1B88814(this, name);
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
    sub_1B8880C(this, name);
  }
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = this;
  v7 = m_CancellationTokenSource > 0;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    while ( v8 < (unsigned int)m_CancellationTokenSource )
    {
      this = (BattleActorControl_o *)*((_QWORD *)&v6->fields.actorObject + v8);
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
    sub_1B88814(this, name);
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
    sub_1B8880C(0LL, key);
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

  if ( (byte_4A5DEA1 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23669/*"summon"*/);
    byte_4A5DEA1 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_23669/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_1B8880C(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_69419120(0, 1000, 0LL) < StepRate;
}


bool __fastcall BattleActorControl__checkVoice(
        BattleActorControl_o *this,
        int32_t type,
        bool isNp,
        const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4A5DEAF & 1) == 0 )
  {
    sub_1B885B0(&Voice_TypeInfo);
    byte_4A5DEAF = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_43710312(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_43710312(
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

  if ( (byte_4A5DEB0 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DEB0 = 1;
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
      sub_1B8880C(battleSvtData, voiceTypeId);
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
  int32_t v11; // w3

  if ( (byte_4A5DF00 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__coAddAura_d__328_TypeInfo);
    byte_4A5DF00 = 1;
  }
  v7 = sub_1B887FC(BattleActorControl__coAddAura_d__328_TypeInfo);
  BattleActorControl__coAddAura_d__328___ctor((BattleActorControl__coAddAura_d__328_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
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
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3

  if ( (byte_4A5DF03 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__colShiftServant_d__334_TypeInfo);
    byte_4A5DF03 = 1;
  }
  v9 = sub_1B887FC(BattleActorControl__colShiftServant_d__334_TypeInfo);
  BattleActorControl__colShiftServant_d__334___ctor((BattleActorControl__colShiftServant_d__334_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)shiftSvt, v14, v15);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)finishCallback, v16, v17);
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
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A5DF04 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__colShiftServantChange_d__335_TypeInfo);
    byte_4A5DF04 = 1;
  }
  v7 = sub_1B887FC(BattleActorControl__colShiftServantChange_d__335_TypeInfo);
  BattleActorControl__colShiftServantChange_d__335___ctor(
    (BattleActorControl__colShiftServantChange_d__335_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)shiftSvt, v12, v13);
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
  int32_t v7; // w3

  if ( (byte_4A5DEFC & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__collChangeAppearance_d__323_TypeInfo);
    byte_4A5DEFC = 1;
  }
  v3 = sub_1B887FC(BattleActorControl__collChangeAppearance_d__323_TypeInfo);
  BattleActorControl__collChangeAppearance_d__323___ctor(
    (BattleActorControl__collChangeAppearance_d__323_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5DEF7 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__colloadDressServant_d__318_TypeInfo);
    byte_4A5DEF7 = 1;
  }
  v5 = sub_1B887FC(BattleActorControl__colloadDressServant_d__318_TypeInfo);
  BattleActorControl__colloadDressServant_d__318___ctor((BattleActorControl__colloadDressServant_d__318_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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
  int32_t v7; // w3

  if ( (byte_4A5DEF5 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__colloadTransformServant_d__315_TypeInfo);
    byte_4A5DEF5 = 1;
  }
  v3 = sub_1B887FC(BattleActorControl__colloadTransformServant_d__315_TypeInfo);
  BattleActorControl__colloadTransformServant_d__315___ctor(
    (BattleActorControl__colloadTransformServant_d__315_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v10; // w3

  if ( (byte_4A5DEAC & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__coroutinePostCallBack_d__207_TypeInfo);
    byte_4A5DEAC = 1;
  }
  v6 = sub_1B887FC(BattleActorControl__coroutinePostCallBack_d__207_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__207___ctor(
    (BattleActorControl__coroutinePostCallBack_d__207_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callBack, v9, v10);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A5DEFB & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_5476/*"END_LOAD"*/);
    byte_4A5DEFB = 1;
  }
  BattleActorControl__sendEventFSM_43701988(this, (System_String_o *)StringLiteral_5476/*"END_LOAD"*/, 0, v2);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4A5DEAD & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8710/*"MOTION_BACK"*/);
    byte_4A5DEAD = 1;
  }
  BattleActorControl__updateBuffIcon(this, this->fields.actiondata, v2);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_27;
  AuraIdList = BattleServantData__getAuraIdList(battleSvtData, 0LL);
  BattleActorControl__updateAura(this, AuraIdList, v7);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_27;
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_27;
  battleSvtData = (BattleServantData_o *)BattleServantData__IsExecOverwriteTreasureDevice(
                                           battleSvtData,
                                           actiondata->fields.treasureDvcId,
                                           0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_27;
    BattleServantData__ResetOverwriteTreasureDevice(battleSvtData, 0LL);
  }
  v9 = this->fields.battleSvtData;
  if ( !v9 )
    goto LABEL_27;
  isEnemy = v9->fields.isEnemy;
  v11 = this->fields.actiondata;
  if ( isEnemy )
  {
    if ( !v11 )
      goto LABEL_27;
    if ( v11->fields.treasureDvcId >= 1 )
    {
      BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
      BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v12);
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_27;
      BattleServantData__updateTDGauge(battleSvtData, 0LL);
      goto LABEL_18;
    }
  }
  else if ( !v11 )
  {
    goto LABEL_27;
  }
  if ( System_String__op_Equality(v11->fields.motionname, (System_String_o *)StringLiteral_8710/*"MOTION_BACK"*/, 0LL) )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
LABEL_18:
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_27;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, 0LL) )
  {
    battleSvtData = this->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_27;
    if ( !BattleServantData__isDeadStand(battleSvtData, 0LL) )
    {
      battleSvtData = this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_27;
      if ( !BattleServantData__isDeadWait(battleSvtData, 0LL) )
        BattleActorControl__invisibleSvtModel(this, 1, v14);
    }
  }
  battleSvtData = (BattleServantData_o *)this->fields.performance;
  if ( !battleSvtData )
LABEL_27:
    sub_1B8880C(battleSvtData, v4);
  BattlePerformance__endActionData((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_43701988(this, call, 0, v3);
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
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v14; // 0:x0.8

  if ( (byte_4A5DF05 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1B885B0(&StringLiteral_18846/*"ef_pig_return01"*/);
    byte_4A5DF05 = 1;
  }
  m_ParticleSystem = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_object__48721436(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(transform, v4);
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
                            (System_String_o *)StringLiteral_18846/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_object__48721436(
                      v9,
                      (const MethodInfo_2E76E1C *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
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
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)transform, 0LL).fields.m_ParticleSystem;
      v14.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v14, 0, 0LL);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_18;
    }
LABEL_21:
    sub_1B88814(transform, v4);
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
    BattleActorControl__finishMotion_43709016(this, v7);
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
    sub_1B8880C(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_43709016(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4A5DEAB & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEAB = 1;
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
      sub_1B8880C(MotionSkip, v4);
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

  if ( (byte_4A5DE8A & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DE8A = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL)
    || (index = v6->fields.index,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1B8880C(battleSvtData, name);
  }
  v9 = (int)battleSvtData;
  seqIdFromMstTDSeqWeight = v8->fields.seqIdFromMstTDSeqWeight;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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

  if ( (byte_4A5DE8B & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DE8B = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v6 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1B8880C(battleSvtData, name);
  }
  v8 = (int)battleSvtData;
  WeaponGroup = BattleServantData__getWeaponGroup(v7, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__loadActorEffectFromActor(v6, v8, WeaponGroup, name, 0LL);
}


int32_t __fastcall BattleActorControl__getActorSvtId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
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

  if ( !byte_4A55CE6 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(this, method);
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
    sub_1B8880C(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
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
  if ( (byte_4A5DEA5 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEA5 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_42;
  distanceofactor = performance->fields.distanceofactor;
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
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
    sub_1B8880C(this, *(_QWORD *)&pos);
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

  if ( (byte_4A5DE89 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DE89 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.performance;
  if ( !v6 || (data = v6->fields.data) == 0LL )
    sub_1B8880C(v4, v5);
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
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
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
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A5DEA6 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    byte_4A5DEA6 = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_1B887FC(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0LL);
    this->fields._checkMotion = v4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._checkMotion, (int32_t)v4, v5, v6);
    return this->fields._checkMotion;
  }
  return result;
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w19

  if ( (byte_4A5DE88 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DE88 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B8880C(0LL, method);
  SvtId = BattleServantData__getSvtId(battleSvtData, 0LL);
  LimitCount = BattleActorControl__getLimitCount(this, v5);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  return ServantAssetLoadManager__GetLimitImageIndex(SvtId, LimitCount, 0, 0LL);
}


BaseMotionSkip_o *__fastcall BattleActorControl__get_MotionSkip(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0

  performance = this->fields.performance;
  if ( !performance )
    sub_1B8880C(0LL, method);
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
  System_Collections_Generic_List_object__o *v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_4A5DE84 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4A5DE84 = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v2 )
    sub_1B8880C(v3, v4);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v2,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_1B8880C(0LL, hideFlg);
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
    sub_1B8880C(this, method);
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
  bool v5; // w21
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_4A5DE9E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_13079/*"SummonEndFlag"*/);
    byte_4A5DE9E = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1B8880C(this, method);
  v4 = *(_QWORD *)&motionFSM->max_length;
  v5 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1B88814(this, method);
      v7 = (UnityEngine_Object_o *)motionFSM->m_Items[v6];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v7 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v7, 0LL);
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13079/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmBool__get_Value(
                                           (HutongGames_PlayMaker_FsmBool_o *)this,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v5;
        }
      }
      LODWORD(v4) = motionFSM->max_length;
      v5 = (__int64)++v6 < (int)v4;
    }
    while ( (__int64)v6 < (int)v4 );
  }
  return v5;
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
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_1B8880C(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_4A5DECA & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_moveStep__);
    sub_1B885B0(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_12268/*"STEP_START"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    sub_1B885B0(&StringLiteral_23548/*"step_back"*/);
    byte_4A5DECA = 1;
  }
  this->fields.targetObject = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v19,
    v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v21,
    v22);
  BattleActorControl__playAnimation_43649396(this, (System_String_o *)StringLiteral_23548/*"step_back"*/, 0, v23);
  v24 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0LL);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v24 )
    sub_1B8880C(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19930/*"hight"*/,
    v33,
    0LL);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_23929/*"time"*/,
    v37,
    0LL);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22572/*"pos"*/,
    v41,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12268/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4A5DECC & 1) == 0 )
  {
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DECC = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60355704(gameObject, 0LL);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_4A5DEC7 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_moveJump__);
    sub_1B885B0(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_8149/*"JUMP_UP"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_20962/*"jump"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    byte_4A5DEC7 = 1;
  }
  this->fields.targetObject = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v19,
    v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v21,
    v22);
  BattleActorControl__playAnimation_43649396(this, (System_String_o *)StringLiteral_20962/*"jump"*/, 0, v23);
  v24 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0LL);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v24 )
    sub_1B8880C(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19930/*"hight"*/,
    v33,
    0LL);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_23929/*"time"*/,
    v37,
    0LL);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22572/*"pos"*/,
    v41,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8149/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_4A5DEC9 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_moveStep__);
    sub_1B885B0(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_12268/*"STEP_START"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    sub_1B885B0(&StringLiteral_23549/*"step_front"*/);
    byte_4A5DEC9 = 1;
  }
  this->fields.targetObject = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v19,
    v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v21,
    v22);
  BattleActorControl__playAnimation_43649396(this, (System_String_o *)StringLiteral_23549/*"step_front"*/, 0, v23);
  v24 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0LL);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v24 )
    sub_1B8880C(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19930/*"hight"*/,
    v33,
    0LL);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_23929/*"time"*/,
    v37,
    0LL);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22572/*"pos"*/,
    v41,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12268/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x3
  __int64 v23; // x21
  BattleActorControl_EndCallEvent_o *v24; // x22
  __int64 v25; // x0
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
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
  int32_t v45; // w3
  const MethodInfo *v46; // x3
  int32_t v48; // [xsp+4h] [xbp-7Ch] BYREF
  float v49; // [xsp+8h] [xbp-78h] BYREF
  float v50; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4A5DEC8 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_moveStep__);
    sub_1B885B0(&Method_BattleActorControl_playAnimation__);
    sub_1B885B0(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_12268/*"STEP_START"*/);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    sub_1B885B0(&StringLiteral_21982/*"name"*/);
    sub_1B885B0(&StringLiteral_23549/*"step_front"*/);
    sub_1B885B0(&StringLiteral_12267/*"STEP_END_02"*/);
    byte_4A5DEC8 = 1;
  }
  this->fields.targetObject = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v16, v17);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v18,
    v19);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v20,
    v21);
  BattleActorControl__playAnimation_43649396(this, (System_String_o *)StringLiteral_23549/*"step_front"*/, 0, v22);
  v23 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v23, 0LL);
  v24 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v24, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v23 )
    goto LABEL_6;
  *(_QWORD *)(v23 + 16) = v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 16), (int32_t)v24, v27, v28);
  v50 = hight;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v50, v29, v30, v31);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v23,
    (System_String_o *)StringLiteral_19930/*"hight"*/,
    v32,
    0LL);
  v49 = time;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v49, v33, v34, v35);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v23,
    (System_String_o *)StringLiteral_23929/*"time"*/,
    v36,
    0LL);
  v48 = pos;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v48, v37, v38, v39);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v23,
    (System_String_o *)StringLiteral_22572/*"pos"*/,
    v40,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12268/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v23,
    v41);
  v42 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v42, 0LL);
  v43 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v43, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v42 )
LABEL_6:
    sub_1B8880C(v25, v26);
  *(_QWORD *)(v42 + 16) = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v42 + 16), (int32_t)v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v42,
    (System_String_o *)StringLiteral_21982/*"name"*/,
    (Il2CppObject *)StringLiteral_24600/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12267/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v42,
    v46);
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
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  const MethodInfo *v23; // x3
  __int64 v24; // x21
  BattleActorControl_EndCallEvent_o *v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
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

  if ( (byte_4A5DECB & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_moveStep__);
    sub_1B885B0(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_24062/*"treasure_arms"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_12268/*"STEP_START"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    byte_4A5DECB = 1;
  }
  this->fields.targetObject = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v17, v18);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v19,
    v20);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v21,
    v22);
  BattleActorControl__playAnimation_43649396(this, (System_String_o *)StringLiteral_24062/*"treasure_arms"*/, 0, v23);
  v24 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v24, 0LL);
  v25 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v25, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v24 )
    sub_1B8880C(v26, v27);
  *(_QWORD *)(v24 + 16) = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)v25, v28, v29);
  v45 = hight;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v30, v31, v32);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_19930/*"hight"*/,
    v33,
    0LL);
  v44 = time;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_23929/*"time"*/,
    v37,
    0LL);
  v43 = pos;
  v41 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v43, v38, v39, v40);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v24,
    (System_String_o *)StringLiteral_22572/*"pos"*/,
    v41,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12268/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v24,
    v42);
}


void __fastcall BattleActorControl__moveDown(BattleActorControl_o *this, float time, const MethodInfo *method)
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

  if ( (byte_4A5DED2 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&iTween_EaseType_TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_24847/*"y"*/);
    sub_1B885B0(&StringLiteral_20832/*"islocal"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DED2 = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v5, 0LL);
  v27 = 0;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v27, v6, v7, v8);
  if ( !v5 )
    sub_1B8880C(v9, v10);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_24847/*"y"*/,
    v9,
    v5->klass->vtable._24_Clear.methodPtr);
  v26[0] = 1;
  v14 = j_il2cpp_value_box_0(bool_TypeInfo, v26, v11, v12, v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_20832/*"islocal"*/,
    v14,
    v5->klass->vtable._24_Clear.methodPtr);
  v25 = 0;
  v18 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v25, v15, v16, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_18755/*"easetype"*/,
    v18,
    v5->klass->vtable._24_Clear.methodPtr);
  v24 = time;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v24, v19, v20, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_23929/*"time"*/,
    v22,
    v5->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60245364(actorObject, v5, 0LL);
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
  if ( (byte_4A5DECE & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    byte_4A5DECE = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19930/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_23929/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22572/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v5) )
  {
LABEL_12:
    sub_1B8880C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1B88ACC(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v7, v8);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1B88ACC(v6);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6, float_TypeInfo, v9, v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = sub_1B88ACC(v3);
    goto LABEL_11;
  }
  v14 = *(float *)&this->klass;
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v12, v13);
  v17 = v4;
  LODWORD(v18) = klass;
  v19 = v14;
LABEL_11:
  BattleActorControl__moveJump_43725788(v17, *(float *)&v18, v19, v15, v16);
}


void __fastcall BattleActorControl__moveJump_43725788(
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
  BattleActorControl__moveUp_43724660(this, hight, time, v9);
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

  if ( (byte_4A5DECF & 1) == 0 )
  {
    sub_1B885B0(&iTween_EaseType_TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22274/*"oncompleteparams"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_19011/*"endMotion"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DECF = 1;
  }
  v13 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v13, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v14);
  v18 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec, v15, v16, v17);
  if ( !v13 )
    sub_1B8880C(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_22573/*"position"*/,
    v18,
    v13->klass->vtable._24_Clear.methodPtr);
  v32 = 1;
  v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_18755/*"easetype"*/,
    v23,
    v13->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_23929/*"time"*/,
    v27,
    v13->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v28 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v28 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22275/*"oncompletetarget"*/,
        callbackObject,
        v13->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22273/*"oncomplete"*/,
        callbackEvent,
        v13->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22275/*"oncompletetarget"*/,
        gameObject,
        v13->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22273/*"oncomplete"*/,
        StringLiteral_19011/*"endMotion"*/,
        v13->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
      v13,
      StringLiteral_22274/*"oncompleteparams"*/,
      endcall,
      v13->klass->vtable._24_Clear.methodPtr);
  }
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60245364(v30, v13, 0LL);
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
  if ( (byte_4A5DECD & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_POS_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22572/*"pos"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    byte_4A5DECD = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19930/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_23929/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22572/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v5) )
  {
LABEL_12:
    sub_1B8880C(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1B88ACC(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v7, v8);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1B88ACC(v6);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6, float_TypeInfo, v9, v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = sub_1B88ACC(v3);
    goto LABEL_11;
  }
  v14 = *(float *)&this->klass;
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v12, v13);
  v17 = v4;
  LODWORD(v18) = klass;
  v19 = v14;
LABEL_11:
  BattleActorControl__moveStep_43723780(v17, *(float *)&v18, v19, v15, v16);
}


void __fastcall BattleActorControl__moveStep_43723780(
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
  BattleActorControl__moveUp_43724660(this, hight, time, v9);
}


void __fastcall BattleActorControl__moveUp(
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
  if ( (byte_4A5DED0 & 1) == 0 )
  {
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_19930/*"hight"*/);
    byte_4A5DED0 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
         v3,
         StringLiteral_19930/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                   v3,
                                   StringLiteral_23929/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  if ( !v5 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1B88ACC(v5);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v6, v7);
  if ( !v3 )
LABEL_9:
    sub_1B8880C(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v10 = *(float *)&this->klass;
    v11 = *(float *)j_il2cpp_object_unbox_0(v3, float_TypeInfo, v8, v9);
    BattleActorControl__moveUp_43724660(v4, v10, v11, v12);
    return;
  }
LABEL_11:
  v15 = sub_1B88ACC(v3);
  BattleActorControl__moveDown(v13, *(float *)&v15, v14);
}


void __fastcall BattleActorControl__moveUp_43724660(
        BattleActorControl_o *this,
        float hight,
        float time,
        const MethodInfo *method)
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

  if ( (byte_4A5DED1 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&iTween_EaseType_TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22274/*"oncompleteparams"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_24847/*"y"*/);
    sub_1B885B0(&StringLiteral_20832/*"islocal"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_21519/*"moveDown"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5DED1 = 1;
  }
  v7 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v7, 0LL);
  v35 = hight;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v8, v9, v10);
  if ( !v7 )
    sub_1B8880C(v11, v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_24847/*"y"*/,
    v11,
    v7->klass->vtable._24_Clear.methodPtr);
  v34[0] = 1;
  v16 = j_il2cpp_value_box_0(bool_TypeInfo, v34, v13, v14, v15);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_20832/*"islocal"*/,
    v16,
    v7->klass->vtable._24_Clear.methodPtr);
  v33 = 1;
  v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v33, v17, v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_18755/*"easetype"*/,
    v20,
    v7->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22275/*"oncompletetarget"*/,
    gameObject,
    v7->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22273/*"oncomplete"*/,
    StringLiteral_21519/*"moveDown"*/,
    v7->klass->vtable._24_Clear.methodPtr);
  v32 = time;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v32, v22, v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22274/*"oncompleteparams"*/,
    v25,
    v7->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v26, v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_23929/*"time"*/,
    v29,
    v7->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60245364(actorObject, v7, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4A5DEEC & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_skipVoice__);
    sub_1B885B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4A5DEEC = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B887FC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1B8880C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__offTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattlePerformanceStatus_o *v4; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4A5DEF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_1B885B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4A5DEF4 = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v4 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 33),
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B887FC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v4) )
  {
    sub_1B8880C(this, method);
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

  if ( (byte_4A5DEEB & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_skipVoice__);
    sub_1B885B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4A5DEEB = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B887FC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1B8880C(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOn(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__onTouchSkipDeadEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  Il2CppObject *v2; // x19
  void *monitor; // x8
  BattlePerformanceStatus_o *v4; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v5; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4A5DEF3 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_1B885B0(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4A5DEF3 = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v4 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 33),
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B887FC(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v4) )
  {
    sub_1B8880C(this, method);
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
  if ( (byte_4A5DEBC & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_21982/*"name"*/);
    byte_4A5DEBC = 1;
  }
  if ( !table )
    sub_1B8880C(this, table);
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_21982/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v5 && v5->klass != string_TypeInfo )
  {
    sub_1B88ACC(v5);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v7, v8, v9, v10);
  }
  else
  {
    BattleActorControl__playAnimation_43649396(v4, v5, 0, v6);
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

  if ( (byte_4A5DEBE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1893/*"@playAnim\n =>{0},{1}"*/);
    byte_4A5DEBE = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_61721404((System_String_o *)StringLiteral_1893/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1B8880C(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_43649396(
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

  if ( (byte_4A5DEBD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&SimpleAnimation_State_TypeInfo);
    sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    sub_1B885B0(&StringLiteral_1892/*"@playAnim\n =>{0}"*/);
    byte_4A5DEBD = 1;
  }
  v8 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v8 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v8, 1, v7);
  System_String__Format((System_String_o *)StringLiteral_1892/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v8, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_33;
  BattleFBXComponent__playAnimation(fbxcomponent, v8, 0LL);
  if ( System_String__op_Equality(v8, (System_String_o *)StringLiteral_24600/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_33;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)fbxcomponent,
                                   (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
                                                 v8,
                                                 0LL);
      if ( UnityEngine_TrackedReference__op_Inequality(Item, 0LL, 0LL) )
      {
        v13 = this->fields.fbxcomponent;
        fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Animation__get_Item(
                                                 (UnityEngine_Animation_o *)ComponentInChildren_object,
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
LABEL_33:
        sub_1B8880C(fbxcomponent, v9);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_33;
      v16 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)fbxcomponent,
              (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      fbxcomponent = (BattleFBXComponent_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL);
      if ( ((unsigned __int8)fbxcomponent & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_33;
        if ( SimpleAnimation__get_Item((SimpleAnimation_o *)v16, v8, 0LL) )
        {
          v17 = this->fields.fbxcomponent;
          fbxcomponent = (BattleFBXComponent_o *)SimpleAnimation__get_Item((SimpleAnimation_o *)v16, v8, 0LL);
          if ( !fbxcomponent )
            goto LABEL_33;
          klass = fbxcomponent->klass;
          v19 = fbxcomponent;
          v20 = *(unsigned __int16 *)(&fbxcomponent->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&fbxcomponent->klass->_2.bitflags2 + 3) )
          {
            p_offset = (SimpleAnimation_State_c **)&klass->_1.interfaceOffsets->offset;
            while ( *(p_offset - 1) != SimpleAnimation_State_TypeInfo )
            {
              --v20;
              p_offset += 2;
              if ( !v20 )
                goto LABEL_27;
            }
            v22 = (__int64)(&klass[1]._1.implementedInterfaces + 2 * *(_DWORD *)p_offset);
          }
          else
          {
LABEL_27:
            v22 = sub_1BDA590(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL);
          }
          fbxcomponent = (BattleFBXComponent_o *)(*(__int64 (__fastcall **)(BattleFBXComponent_o *, _QWORD))v22)(
                                                   v19,
                                                   *(_QWORD *)(v22 + 8));
          if ( !fbxcomponent )
            goto LABEL_33;
          v23 = UnityEngine_AnimationClip__get_length((UnityEngine_AnimationClip_o *)fbxcomponent, 0LL);
          v24 = UnityEngine_Random__Range(0.0, v23, 0LL);
          if ( !v17 )
            goto LABEL_33;
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
  System_Action_object__o *v10; // x22
  BattleCallBack_T__o *v11; // x20

  if ( (byte_4A5DEA9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl_playBattleActionDataLocal__);
    sub_1B885B0(&Method_BattleCallBack_BattleActionData___ctor__);
    sub_1B885B0(&BattleCallBack_BattleActionData__TypeInfo);
    byte_4A5DEA9 = 1;
  }
  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v5 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v5, 0LL) )
  {
    v9 = BattleActorControl__get_CheckMotion(this, v7);
    v10 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_playBattleActionDataLocal__, 0LL);
    v11 = (BattleCallBack_T__o *)sub_1B887FC(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v11,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v10,
      (const MethodInfo_3095F08 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v9 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v9, (BattleCallBackBase_o *)v11, 0LL);
      return;
    }
LABEL_8:
    sub_1B8880C(v5, v6);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v8);
}


void __fastcall BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  __int64 actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t type; // w21
  BattleActionData_c *v16; // x0
  const MethodInfo *v17; // x3
  BattleActionData_o *v18; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  System_String_o *v21; // x0
  struct BattlePerformance_o *performance; // x8
  int v23; // w8
  __int64 v24; // x21
  unsigned int v25; // w23
  BattleServantData_o *v26; // x22
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v28; // x8
  const MethodInfo *v29; // x3
  BattleServantData_o *battleSvtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DEAA & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_8724/*"MOTION_FOLLOW_BACK_STEP"*/);
    sub_1B885B0(&StringLiteral_8708/*"MOTION_"*/);
    byte_4A5DEAA = 1;
  }
  p_actiondata = &this->fields.actiondata;
  source = 0LL;
  entity = 0LL;
  this->fields.actiondata = badata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actiondata, (int32_t)badata, (int32_t)method, v3);
  BattleActorControl__setActionData(this, this->fields.actiondata, v7);
  actiondata = (__int64)this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_56;
  ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)actiondata, 0LL);
  this->fields.myShiftData = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.myShiftData, 0, v11, v12);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.myShiftData,
      (int32_t)ShiftServant,
      v13,
      (int32_t)v14);
  }
  if ( !badata )
    goto LABEL_56;
  if ( badata->fields.noOperation )
  {
    actiondata = (__int64)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0LL);
      return;
    }
    goto LABEL_56;
  }
  if ( !*p_actiondata )
    goto LABEL_56;
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
    goto LABEL_56;
  if ( BattleActionData__isCommandAttack((BattleActionData_o *)actiondata, 0LL) )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_56;
  if ( BattleActionData__isCommonEnemyAttack((BattleActionData_o *)actiondata, 0LL) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, v14);
  actiondata = (__int64)this->fields.performance;
  if ( !actiondata
    || (actiondata = (__int64)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0
    || (actiondata = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)actiondata + 456LL))(
                       actiondata,
                       *(_QWORD *)(*(_QWORD *)actiondata + 464LL)),
        (v18 = *p_actiondata) == 0LL) )
  {
LABEL_56:
    sub_1B8880C(actiondata, v8);
  }
  motionname = v18->fields.motionname;
  IsVanishSkill = v18->fields.IsVanishSkill;
  if ( !motionname )
  {
    v21 = System_Int32__ToString((int)v18 + 48, 0LL);
    motionname = System_String__Concat_61707032((System_String_o *)StringLiteral_8708/*"MOTION_"*/, v21, 0LL);
    if ( IsVanishSkill )
      goto LABEL_26;
LABEL_28:
    BattleActorControl__sendMotionEventFSM(this, motionname, 0, v17);
    goto LABEL_29;
  }
  if ( !v18->fields.IsVanishSkill )
    goto LABEL_28;
LABEL_26:
  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_43701988(this, motionname, 0, v17);
LABEL_29:
  actiondata = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !actiondata )
    goto LABEL_56;
  actiondata = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)actiondata,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !*p_actiondata || !actiondata )
    goto LABEL_56;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)actiondata,
         &entity,
         (*p_actiondata)->fields.treasureDvcId,
         (const MethodInfo_311D988 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    actiondata = (__int64)entity;
    if ( !entity )
      goto LABEL_56;
    actiondata = TreasureDvcEntity__TryGetWithBackStepNpcIds(
                   (TreasureDvcEntity_o *)entity,
                   (System_Int32_array **)&source,
                   0LL);
    if ( (actiondata & 1) != 0 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_56;
      actiondata = (__int64)performance->fields.data;
      if ( !actiondata )
        goto LABEL_56;
      actiondata = (__int64)BattleData__getFieldServantList((BattleData_o *)actiondata, 0, 0LL);
      if ( !actiondata )
        goto LABEL_56;
      v23 = *(_DWORD *)(actiondata + 24);
      v24 = actiondata;
      if ( v23 >= 1 )
      {
        v25 = 0;
        do
        {
          if ( v25 >= v23 )
            sub_1B88814(actiondata, v8);
          v26 = *(BattleServantData_o **)(v24 + 8LL * (int)v25 + 32);
          if ( !v26 )
            goto LABEL_56;
          deckSvt = v26->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_56;
          if ( deckSvt->fields.npcId )
          {
            if ( v26->fields.uniqueId != this->fields.uniqueID )
            {
              actiondata = BattleServantData__isAlive(v26, 0, 0LL);
              if ( (actiondata & 1) != 0 )
              {
                v28 = v26->fields.deckSvt;
                if ( !v28 )
                  goto LABEL_56;
                actiondata = System_Linq_Enumerable__Contains_int_(
                               source,
                               v28->fields.npcId,
                               (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
                if ( (actiondata & 1) != 0 )
                {
                  actiondata = (__int64)this->fields.performance;
                  if ( !actiondata )
                    goto LABEL_56;
                  actiondata = (__int64)BattlePerformance__getServantActor(
                                          (BattlePerformance_o *)actiondata,
                                          v26->fields.uniqueId,
                                          0LL);
                  if ( !actiondata )
                    goto LABEL_56;
                  BattleActorControl__sendMotionEventFSM(
                    (BattleActorControl_o *)actiondata,
                    (System_String_o *)StringLiteral_8724/*"MOTION_FOLLOW_BACK_STEP"*/,
                    0,
                    v29);
                }
              }
            }
          }
          v23 = *(_DWORD *)(v24 + 24);
        }
        while ( (int)++v25 < v23 );
      }
    }
  }
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
  __int64 v9; // x23
  BattleActorControl_EndCallEvent_o *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_4A5DEBB & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleActorControl_sendEventFSM__);
    sub_1B885B0(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1B885B0(&BattleActorControl_EventClass_TypeInfo);
    sub_1B885B0(&StringLiteral_1894/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/);
    sub_1B885B0(&StringLiteral_19111/*"event"*/);
    byte_4A5DEBB = 1;
  }
  System_String__Format_61721472(
    (System_String_o *)StringLiteral_1894/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v9 = sub_1B887FC(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v9, 0LL);
  v10 = (BattleActorControl_EndCallEvent_o *)sub_1B887FC(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v9 )
    sub_1B8880C(v11, v12);
  *(_QWORD *)(v9 + 16) = v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v10, v13, v14);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v9,
    (System_String_o *)StringLiteral_19111/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v9, v15);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v16);
  else
    BattleActorControl__playAnimation_43649396(this, animname, 0, v16);
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
  int32_t v9; // w2
  int32_t v10; // w3
  const MethodInfo *v11; // x3

  v7 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)name);
  if ( !v7 )
    sub_1B8880C(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actiondata, 0, v9, v10);
  BattleActorControl__sendMotionEventFSM(this, name, 1, v11);
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
  UnityEngine_GameObject_o *v16; // x23
  UnityEngine_GameObject_o *v17; // x23
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_4A5DEA3 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16195/*"_ENEMY"*/);
    byte_4A5DEA3 = 1;
  }
  result = (UnityEngine_GameObject_o *)this->fields.battleSvtData;
  if ( !result )
    goto LABEL_30;
  WeaponGroup = BattleServantData__getWeaponGroup((BattleServantData_o *)result, 1, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadEffect = (UnityEngine_Object_o *)ServantAssetLoadManager__loadEffect(effectname, WeaponGroup, 0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
          result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                 (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                 0LL);
          v16 = result;
          if ( !byte_4A55CE1 )
          {
            result = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( v16 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v16,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0LL);
            result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                   0LL);
            v17 = result;
            if ( !byte_4A55CE6 )
            {
              result = (UnityEngine_GameObject_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE6 = 1;
            }
            if ( v17 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v17,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v19.fields.x = -x;
                  v19.fields.y = y;
                  v19.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v19, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_30;
                    if ( System_String__Equals_61715348(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16195/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_30;
                      v20.fields.x = x;
                      v20.fields.y = y;
                      v20.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v20, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_30;
                      UnityEngine_Transform__Rotate_69482044((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
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
LABEL_30:
    sub_1B8880C(result, effectname);
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
  int32_t v18; // w2
  int32_t v19; // w3
  SePlayer_o *v20; // x19
  BattleActorControl_c *v21; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_4A5DEB1 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_TypeInfo);
    sub_1B885B0(&Voice_TypeInfo);
    byte_4A5DEB1 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  if ( Voice__IsDeadVoice(type, 0LL) )
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
          (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
    {
      if ( prevDeadVoice->fields.isStop )
      {
LABEL_15:
        v14 = 1;
        goto LABEL_17;
      }
      if ( v11->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v11),
            (prevDeadVoice = BattleActorControl_TypeInfo->static_fields->prevDeadVoice) != 0LL) )
      {
        SePlayer__StopSe(prevDeadVoice, 0.0, 0LL);
        goto LABEL_15;
      }
    }
    sub_1B8880C(v11, v13);
  }
  v14 = 0;
LABEL_17:
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v17 = BattleActorControl__playVoice_43710940(this, FileName, volume, callback, isSaveVoicePlayed, v16);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->prevDeadVoice, (int32_t)v20, v18, v19);
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

  if ( (byte_4A5DEB4 & 1) == 0 )
  {
    sub_1B885B0(&Voice_TypeInfo);
    byte_4A5DEB4 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_43711868(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_43711868(
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

  if ( (byte_4A5DEB5 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DEB5 = 1;
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
        sub_1B8880C(battleSvtData, v9);
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

  if ( (byte_4A5DEB7 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DEB7 = 1;
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
      sub_1B8880C(battleSvtData, fileName);
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


SePlayer_o *__fastcall BattleActorControl__playVoice_43710940(
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
  int32_t v15; // w2
  int32_t v16; // w3
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

  if ( (byte_4A5DEB2 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    byte_4A5DEB2 = 1;
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
    isNoVoice = (BattleData_o *)sub_1B88658(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_26;
    v17 = (System_String_array *)isNoVoice;
    if ( !LODWORD(isNoVoice->fields.m_CancellationTokenSource) )
      sub_1B88814(isNoVoice, v12);
    isNoVoice->fields.rootfsm = (struct PlayMakerFSM_o *)voiceTypeId;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&isNoVoice->fields.rootfsm, (int32_t)voiceTypeId, v15, v16);
    BattleActorControl__AddServantVoicePlayed(this, v17, v18);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (BattleData_o *)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
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
        return ServantAssetLoadManager__playBattleVoice(v24, v25, v26, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_26:
    sub_1B8880C(isNoVoice, v12);
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
  return ServantAssetLoadManager__playBattleVoice(v24, v25, v26, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
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
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  unsigned __int64 v7; // x23
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x21

  if ( (byte_4A5DEFD & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEFD = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           auraList,
           (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_19;
  entries = auraList->fields._entries;
  v6 = auraList;
  if ( (int)entries >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      if ( v7 >= (unsigned int)entries )
        sub_1B88814(auraList, method);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v8 = *(&v6->fields._count + v7);
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               auraList,
               v8,
               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
        v10 = System_Collections_Generic_Dictionary_int__object___get_Item(
                auraList,
                v8,
                (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v10, 0LL);
      }
      LODWORD(entries) = v6->fields._entries;
      if ( (__int64)++v7 >= (int)entries )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B8880C(auraList, method);
  }
LABEL_17:
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___Clear(
    auraList,
    (const MethodInfo_316DAE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DEFF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4A5DEFF = 1;
  }
  memset(&v6, 0, sizeof(v6));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_19:
    sub_1B8880C(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v6,
            (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    currentValue = v6.fields._currentValue;
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
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
  BattleActorControl_o *v2; // x19
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v4; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v6; // x19

  v2 = this;
  if ( (byte_4A5DE9D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_13079/*"SummonEndFlag"*/);
    byte_4A5DE9D = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1B8880C(this, method);
  v4 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v4 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v4; ++i )
    {
      if ( i >= (unsigned int)v4 )
        sub_1B88814(this, method);
      v6 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v6 )
          goto LABEL_17;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v6, 0LL);
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13079/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.shadowObj) = 0;
      }
      LODWORD(v4) = motionFSM->max_length;
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
    sub_1B8880C(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4A5DEA8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8714/*"MOTION_DAMAGE"*/);
    byte_4A5DEA8 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_1B8880C(0LL, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8714/*"MOTION_DAMAGE"*/, 0, v5);
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
  if ( (byte_4A5DE9F & 1) == 0 )
  {
    sub_1B885B0(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_19111/*"event"*/);
    byte_4A5DE9F = 1;
  }
  if ( !table )
    sub_1B8880C(this, table);
  v5 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_19111/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v7 = (System_String_o *)v5;
  if ( v5 && *v5 != string_TypeInfo )
  {
    sub_1B88ACC(v5);
  }
  else
  {
    v8 = v4;
    v9 = v7;
    v10 = 0;
  }
  BattleActorControl__sendEventFSM_43701988(v8, v9, v10, v6);
}


void __fastcall BattleActorControl__sendEventFSM_43701988(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 Fsm; // x0
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x22
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v18; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v20; // x8
  __int64 v21; // x9
  int max_length; // w10
  UnityEngine_Object_o *v23; // x22
  struct PlayMakerFSM_array *v24; // x8
  __int64 v25; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v26; // x21
  struct PlayMakerFSM_array *v27; // x8
  __int64 v28; // x9

  if ( (byte_4A5DEA2 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_24669/*"weapon"*/);
    sub_1B885B0(&StringLiteral_1896/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/);
    sub_1B885B0(&StringLiteral_18169/*"common"*/);
    byte_4A5DEA2 = 1;
  }
  Fsm = sub_1B88658(string___TypeInfo, 2LL);
  if ( !Fsm )
    goto LABEL_29;
  v11 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_28;
  v12 = StringLiteral_24669/*"weapon"*/;
  *(_QWORD *)(Fsm + 32) = StringLiteral_24669/*"weapon"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Fsm + 32), v12, v9, v10);
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_28;
  v15 = StringLiteral_18169/*"common"*/;
  *(_QWORD *)(v11 + 40) = StringLiteral_18169/*"common"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 40), v15, v13, v14);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v11 + 24) )
    goto LABEL_28;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_29;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_28;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_29;
  v18 = *(Il2CppObject **)(v11 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_61721472(
                   (System_String_o *)StringLiteral_1896/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v18,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v20 = this->fields.motionFSM;
  if ( v20 )
  {
    v21 = this->fields.actindex;
    max_length = v20->max_length;
    if ( (int)v21 < max_length )
    {
      if ( (unsigned int)v21 >= max_length )
        goto LABEL_28;
      v23 = (UnityEngine_Object_o *)v20->m_Items[v21];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v8);
          v24 = this->fields.motionFSM;
          if ( !v24 )
            goto LABEL_29;
          v25 = this->fields.actindex;
          if ( (unsigned int)v25 >= v24->max_length )
            goto LABEL_28;
          v26 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v24->m_Items[v25];
          if ( !Fsm )
            goto LABEL_29;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_29;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v26 )
            goto LABEL_29;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v26, (System_String_o *)Fsm, 0LL);
        }
        v27 = this->fields.motionFSM;
        if ( !v27 )
          goto LABEL_29;
        v28 = this->fields.actindex;
        if ( (unsigned int)v28 < v27->max_length )
        {
          Fsm = (__int64)v27->m_Items[v28];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_29:
          sub_1B8880C(Fsm, v8);
        }
LABEL_28:
        sub_1B88814(Fsm, v8);
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
    sub_1B8880C(v7, v8);
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_43701988(this, name, isCallFinishInterrupt, v9);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_43701988(this, name, 0, v3);
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
  struct PlayMakerFSM_array *v11; // x8
  struct PlayMakerFSM_array *v12; // x8

  v4 = this;
  if ( (byte_4A5DE9A & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_4871/*"Count_Action"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_4872/*"Count_Hit"*/);
    byte_4A5DE9A = 1;
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
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4871/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_43;
  v6 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v6 )
    goto LABEL_43;
  LODWORD(v6->fields.shadowObj) = (_DWORD)this;
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
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4872/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
  v8 = v4->fields.motionFSM;
  if ( !v8 )
    goto LABEL_43;
  if ( v8->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v8->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields.nodeText) == 0LL )
  {
LABEL_43:
    sub_1B8880C(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4871/*"Count_Action"*/,
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_43;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4871/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !FsmInt )
      goto LABEL_43;
    FsmInt->fields.value = (int)this;
  }
  v11 = v4->fields.motionFSM;
  if ( !v11 )
    goto LABEL_43;
  if ( v11->max_length <= 1 )
LABEL_44:
    sub_1B88814(this, actiondata);
  this = (BattleActorControl_o *)v11->m_Items[1];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4872/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v12 = v4->fields.motionFSM;
  if ( !v12 )
    goto LABEL_43;
  if ( v12->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v12->m_Items[1];
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4872/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
}


void __fastcall BattleActorControl__setAddAura(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  System_Int32_array *AuraIdList; // x1
  const MethodInfo *v5; // x2

  if ( !svtdata )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(CompleteList, name);
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
    sub_1B8880C(EventList, name);
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, BattleActorControl_EventClass_o *, Il2CppMethodPointer))EventList->klass->vtable._23_Add.method)(
    EventList,
    name,
    ec,
    EventList->klass->vtable._24_Clear.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setAuraFlip(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  bool v6; // w19
  Il2CppObject *currentValue; // x20
  Il2CppObject *Component_object; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v9; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5DEFE & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4A5DEFE = 1;
  }
  memset(&v9, 0, sizeof(v9));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_20:
    sub_1B8880C(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
         &v9,
         (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    v6 = flg;
    do
    {
      currentValue = v9.fields._currentValue;
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
                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
          BillBoard__setFlip((BillBoard_o *)Component_object, v6, 0, 0LL);
        }
      }
    }
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              &v9,
              (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
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
  int32_t v8; // w3

  if ( (byte_4A5DE95 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_4A5DE95 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_1B8880C(gameObject, v6);
  }
  *((_QWORD *)gameObject + 4) = camera;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(gameObject + 32), (int32_t)camera, v7, v8);
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

  if ( (byte_4A5DEA4 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DEA4 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
                goto LABEL_15;
              }
            }
          }
        }
      }
    }
LABEL_16:
    sub_1B8880C(gameObject, v6);
  }
  if ( !tr )
    goto LABEL_16;
  position = (unsigned int)UnityEngine_Transform__get_position(tr, 0LL);
  v9 = UnityEngine_Transform__get_position(tr, 0LL);
  y = v9.fields.y;
LABEL_15:
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
    sub_1B8880C(actorObject, method);
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
    sub_1B8880C(actorObject, method);
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
    sub_1B8880C(actorObject, method);
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
  int32_t v3; // w3

  this->fields.enemyStage = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyStage, (int32_t)obj, (int32_t)method, v3);
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
  PlayMakerFSM_o *Master_object; // x0
  __int64 v5; // x1
  int v6; // w20
  unsigned __int64 v7; // x25
  char i; // w8
  struct PlayMakerFSM_array *v9; // x9
  char v10; // w24
  UnityEngine_Object_o *v11; // x21
  struct PlayMakerFSM_array *v12; // x8
  struct PlayMakerFSM_array *v13; // x8

  if ( (byte_4A5DE99 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8409/*"LimitedPeriod"*/);
    sub_1B885B0(&StringLiteral_8238/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4A5DE99 = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (PlayMakerFSM_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_object )
    {
      Master_object = (PlayMakerFSM_o *)ConstantMaster__GetValue(
                                          (ConstantMaster_o *)Master_object,
                                          (System_String_o *)StringLiteral_8238/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                          0LL);
      v6 = (int)Master_object;
      v7 = 0LL;
      for ( i = 1; ; i = 0 )
      {
        v9 = this->fields.motionFSM;
        if ( !v9 )
          break;
        v10 = i;
        if ( v7 >= v9->max_length )
          goto LABEL_30;
        v11 = (UnityEngine_Object_o *)v9->m_Items[v7];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v12 = this->fields.motionFSM;
          if ( !v12 )
            break;
          if ( v7 >= v12->max_length )
            goto LABEL_30;
          Master_object = v12->m_Items[v7];
          if ( !Master_object )
            break;
          Master_object = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Master_object, 0LL);
          if ( !Master_object )
            break;
          Master_object = (PlayMakerFSM_o *)Master_object[1].fields.m_CancellationTokenSource;
          if ( !Master_object )
            break;
          Master_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                              (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                              (System_String_o *)StringLiteral_8409/*"LimitedPeriod"*/,
                                              0LL);
          if ( Master_object )
          {
            v13 = this->fields.motionFSM;
            if ( !v13 )
              break;
            if ( v7 >= v13->max_length )
LABEL_30:
              sub_1B88814(Master_object, v5);
            Master_object = v13->m_Items[v7];
            if ( !Master_object )
              break;
            Master_object = (PlayMakerFSM_o *)PlayMakerFSM__get_Fsm(Master_object, 0LL);
            if ( !Master_object )
              break;
            Master_object = (PlayMakerFSM_o *)Master_object[1].fields.m_CancellationTokenSource;
            if ( !Master_object )
              break;
            Master_object = (PlayMakerFSM_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                                (HutongGames_PlayMaker_FsmVariables_o *)Master_object,
                                                (System_String_o *)StringLiteral_8409/*"LimitedPeriod"*/,
                                                0LL);
            if ( !Master_object )
              break;
            LODWORD(Master_object->fields.addEventHandlers) = v6;
          }
        }
        v7 = 1LL;
        if ( (v10 & 1) == 0 )
          return;
      }
    }
    sub_1B8880C(Master_object, v5);
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 gameObject; // x0
  __int64 v16; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v19; // x25
  int32_t v20; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v22; // x26
  struct PlayMakerFSM_array *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x26
  struct PlayMakerFSM_array *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x24
  unsigned __int64 v31; // x27
  struct System_String_o **p_actorside; // x24
  char v33; // w8
  struct PlayMakerFSM_array *v34; // x9
  char v35; // w28
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  struct PlayMakerFSM_array *v40; // x8
  struct PlayMakerFSM_array *v41; // x8
  struct PlayMakerFSM_array *v42; // x8
  int32_t v43; // w2
  int32_t v44; // w3
  struct PlayMakerFSM_array *v45; // x8
  struct PlayMakerFSM_array *v46; // x8
  char v47; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v50; // x8
  struct BattlePerformance_o *v51; // x8
  float v52; // s0
  struct PlayMakerFSM_array *v53; // x8
  struct BattlePerformance_o *v54; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v56; // x0
  __int64 v57; // x1
  struct PlayMakerFSM_array *v58; // x8
  PlayMakerFSM_o *v59; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v63; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v66; // x1
  struct PlayMakerFSM_array *v67; // x8
  PlayMakerFSM_o *v68; // x0
  HutongGames_PlayMaker_Fsm_o *v69; // x0
  __int64 v70; // x1
  HutongGames_PlayMaker_FsmVariables_o *v71; // x0
  HutongGames_PlayMaker_FsmInt_o *v72; // x0
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x3
  __int64 v76; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v77; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v78; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A5DE98 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&PlayMakerFSM___TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13561/*"TargetFrontPos"*/);
    sub_1B885B0(&StringLiteral_13560/*"TargetBackPos"*/);
    sub_1B885B0(&StringLiteral_3978/*"Camera"*/);
    sub_1B885B0(&StringLiteral_2235/*"ActorObject"*/);
    sub_1B885B0(&StringLiteral_16195/*"_ENEMY"*/);
    sub_1B885B0(&StringLiteral_3984/*"CameraFsm"*/);
    sub_1B885B0(&StringLiteral_10601/*"Performance"*/);
    sub_1B885B0(&StringLiteral_2236/*"ActorSide"*/);
    byte_4A5DE98 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  v11 = (struct PlayMakerFSM_array *)sub_1B88658(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v11;
  p_motionFSM = &this->fields.motionFSM;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.motionFSM, (int32_t)v11, v13, v14);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_105;
  v19 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_105;
  v20 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v19, v20, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  v22 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v23 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v22,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v23 )
    goto LABEL_105;
  v26 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B886EC(gameObject, v23->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_120;
  }
  if ( !v23->max_length )
    goto LABEL_106;
  v23->m_Items[0] = (PlayMakerFSM_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v23->m_Items, v26, v24, v25);
  if ( !Object )
    goto LABEL_105;
  v27 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v27 )
    goto LABEL_105;
  v30 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B886EC(gameObject, v27->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_120:
      v76 = sub_1B88830(gameObject);
      sub_1B886D8(v76, 0LL);
    }
  }
  if ( v27->max_length <= 1 )
LABEL_106:
    sub_1B88814(gameObject, v16);
  v27->m_Items[1] = (PlayMakerFSM_o *)v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->m_Items[1], v30, v28, v29);
  v31 = 0LL;
  p_actorside = &this->fields.actorside;
  v33 = 1;
  do
  {
    v34 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    v35 = v33;
    if ( v31 >= v34->max_length )
      goto LABEL_106;
    gameObject = (__int64)v34->m_Items[v31];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2235/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v37 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v31 >= v37->max_length )
      goto LABEL_106;
    gameObject = (__int64)v37->m_Items[v31];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2236/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(gameObject + 56), (int32_t)side, v38, v39);
    v40 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v31 >= v40->max_length )
      goto LABEL_106;
    gameObject = (__int64)v40->m_Items[v31];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3978/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v41 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v31 >= v41->max_length )
      goto LABEL_106;
    gameObject = (__int64)v41->m_Items[v31];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_3984/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v42 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v31 >= v42->max_length )
      goto LABEL_106;
    gameObject = (__int64)v42->m_Items[v31];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10601/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actorside, (int32_t)side, v43, v44);
    v45 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v31 >= v45->max_length )
      goto LABEL_106;
    gameObject = (__int64)v45->m_Items[v31];
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_105;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13561/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_105;
      gameObject = System_String__Equals_61715348(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16195/*"_ENEMY"*/,
                     0LL);
      v46 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_105;
      if ( v31 >= v46->max_length )
        goto LABEL_106;
      v47 = gameObject;
      gameObject = (__int64)v46->m_Items[v31];
      if ( !gameObject )
        goto LABEL_105;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_105;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_105;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13561/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_105;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v47 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_105;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v50 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_105;
        if ( v31 >= v50->max_length )
          goto LABEL_106;
        gameObject = (__int64)v50->m_Items[v31];
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13560/*"TargetBackPos"*/,
                                0LL);
        v51 = this->fields.performance;
        if ( !v51 || !gameObject )
          goto LABEL_105;
        v52 = v51->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_105;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v53 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_105;
        if ( v31 >= v53->max_length )
          goto LABEL_106;
        gameObject = (__int64)v53->m_Items[v31];
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_105;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13560/*"TargetBackPos"*/,
                                0LL);
        v54 = this->fields.performance;
        if ( !v54 || !gameObject )
          goto LABEL_105;
        v52 = -v54->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v52;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v33 = 0;
    v31 = 1LL;
  }
  while ( (v35 & 1) != 0 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_105;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_105:
    sub_1B8880C(gameObject, v16);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v77,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v78 = v77;
  while ( 1 )
  {
    v56 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v78,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v56 )
      break;
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1B8880C(v56, v57);
    if ( !v58->max_length )
      sub_1B88814(v56, v57);
    v59 = v58->m_Items[0];
    if ( !v59 )
      sub_1B8880C(0LL, v57);
    key = v78.fields._current.fields.key;
    value = v78.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v59, 0LL);
    if ( !Fsm )
      sub_1B8880C(0LL, v63);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1B8880C(0LL, v63);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v67 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1B8880C(FsmInt, v66);
      if ( !v67->max_length )
        sub_1B88814(FsmInt, v66);
      v68 = v67->m_Items[0];
      if ( !v68 )
        sub_1B8880C(0LL, v66);
      v69 = PlayMakerFSM__get_Fsm(v68, 0LL);
      if ( !v69 )
        sub_1B8880C(0LL, v70);
      v71 = v69->fields.variables;
      if ( !v71 )
        sub_1B8880C(0LL, v70);
      v72 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v71, (System_String_o *)key, 0LL);
      if ( !v72 )
        sub_1B8880C(0LL, v73);
      if ( !value )
        goto LABEL_113;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1B88ACC(value);
LABEL_113:
        sub_1B8880C(v72, v73);
      }
      v72->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v74, v75);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v78,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 gameObject; // x0
  __int64 v14; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v19; // x25
  int32_t v20; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v22; // x26
  struct PlayMakerFSM_array *v23; // x25
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x26
  struct PlayMakerFSM_array *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x24
  unsigned __int64 v31; // x27
  struct System_String_o **p_actorside; // x24
  char v33; // w8
  struct PlayMakerFSM_array *v34; // x9
  char v35; // w28
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  struct PlayMakerFSM_array *v40; // x8
  struct PlayMakerFSM_array *v41; // x8
  struct PlayMakerFSM_array *v42; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v43; // x25
  int32_t v44; // w2
  int32_t v45; // w3
  struct PlayMakerFSM_array *v46; // x8
  struct PlayMakerFSM_array *v47; // x8
  char v48; // w25
  struct BattlePerformance_o *v49; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v51; // x8
  struct BattlePerformance_o *v52; // x8
  float v53; // s0
  struct PlayMakerFSM_array *v54; // x8
  struct BattlePerformance_o *v55; // x8
  System_String_o *StrParam; // x21
  _BOOL8 v57; // x0
  __int64 v58; // x1
  struct PlayMakerFSM_array *v59; // x8
  PlayMakerFSM_o *v60; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v64; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v67; // x1
  struct PlayMakerFSM_array *v68; // x8
  PlayMakerFSM_o *v69; // x0
  HutongGames_PlayMaker_Fsm_o *v70; // x0
  __int64 v71; // x1
  HutongGames_PlayMaker_FsmVariables_o *v72; // x0
  HutongGames_PlayMaker_FsmInt_o *v73; // x0
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x3
  const MethodInfo *v77; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  const MethodInfo *v81; // x1
  __int64 v82; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v83; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v84; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A5DE96 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&PlayMakerFSM___TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13561/*"TargetFrontPos"*/);
    sub_1B885B0(&StringLiteral_13560/*"TargetBackPos"*/);
    sub_1B885B0(&StringLiteral_3978/*"Camera"*/);
    sub_1B885B0(&StringLiteral_2235/*"ActorObject"*/);
    sub_1B885B0(&StringLiteral_16195/*"_ENEMY"*/);
    sub_1B885B0(&StringLiteral_3984/*"CameraFsm"*/);
    sub_1B885B0(&StringLiteral_10601/*"Performance"*/);
    sub_1B885B0(&StringLiteral_2236/*"ActorSide"*/);
    byte_4A5DE96 = 1;
  }
  memset(&v84, 0, sizeof(v84));
  v9 = (struct PlayMakerFSM_array *)sub_1B88658(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v9;
  p_motionFSM = &this->fields.motionFSM;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.motionFSM, (int32_t)v9, v11, v12);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_107;
  commonMotionPrefab = performance->fields.commonMotionPrefab;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v19 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v20 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v19, v20, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  v22 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v23 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v22,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v23 )
    goto LABEL_107;
  v26 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B886EC(gameObject, v23->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_122;
  }
  if ( !v23->max_length )
    goto LABEL_108;
  v23->m_Items[0] = (PlayMakerFSM_o *)v26;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v23->m_Items, v26, v24, v25);
  if ( !Object )
    goto LABEL_107;
  v27 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v27 )
    goto LABEL_107;
  v30 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B886EC(gameObject, v27->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_122:
      v82 = sub_1B88830(gameObject);
      sub_1B886D8(v82, 0LL);
    }
  }
  if ( v27->max_length <= 1 )
LABEL_108:
    sub_1B88814(gameObject, v14);
  v27->m_Items[1] = (PlayMakerFSM_o *)v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->m_Items[1], v30, v28, v29);
  v31 = 0LL;
  p_actorside = &this->fields.actorside;
  v33 = 1;
  do
  {
    v34 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v35 = v33;
    if ( v31 >= v34->max_length )
      goto LABEL_108;
    gameObject = (__int64)v34->m_Items[v31];
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
                      (System_String_o *)StringLiteral_2235/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v37 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v31 >= v37->max_length )
      goto LABEL_108;
    gameObject = (__int64)v37->m_Items[v31];
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
                            (System_String_o *)StringLiteral_2236/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(gameObject + 56), (int32_t)side, v38, v39);
    v40 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v31 >= v40->max_length )
      goto LABEL_108;
    gameObject = (__int64)v40->m_Items[v31];
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
                            (System_String_o *)StringLiteral_3978/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v41 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v31 >= v41->max_length )
      goto LABEL_108;
    gameObject = (__int64)v41->m_Items[v31];
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
                            (System_String_o *)StringLiteral_3984/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v42 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v31 >= v42->max_length )
      goto LABEL_108;
    gameObject = (__int64)v42->m_Items[v31];
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
                            (System_String_o *)StringLiteral_10601/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_107;
    v43 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v43 )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v43, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.actorside, (int32_t)side, v44, v45);
    v46 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v31 >= v46->max_length )
      goto LABEL_108;
    gameObject = (__int64)v46->m_Items[v31];
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
                            (System_String_o *)StringLiteral_13561/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_107;
      gameObject = System_String__Equals_61715348(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16195/*"_ENEMY"*/,
                     0LL);
      v47 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v31 >= v47->max_length )
        goto LABEL_108;
      v48 = gameObject;
      gameObject = (__int64)v47->m_Items[v31];
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
                              (System_String_o *)StringLiteral_13561/*"TargetFrontPos"*/,
                              0LL);
      v49 = this->fields.performance;
      if ( !v49 )
        goto LABEL_107;
      distanceofactor = v49->fields.distanceofactor;
      if ( (v48 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v51 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v31 >= v51->max_length )
          goto LABEL_108;
        gameObject = (__int64)v51->m_Items[v31];
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
                                (System_String_o *)StringLiteral_13560/*"TargetBackPos"*/,
                                0LL);
        v52 = this->fields.performance;
        if ( !v52 || !gameObject )
          goto LABEL_107;
        v53 = v52->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v54 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v31 >= v54->max_length )
          goto LABEL_108;
        gameObject = (__int64)v54->m_Items[v31];
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
                                (System_String_o *)StringLiteral_13560/*"TargetBackPos"*/,
                                0LL);
        v55 = this->fields.performance;
        if ( !v55 || !gameObject )
          goto LABEL_107;
        v53 = -v55->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v53;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v33 = 0;
    v31 = 1LL;
  }
  while ( (v35 & 1) != 0 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_107:
    sub_1B8880C(gameObject, v14);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v83,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v84 = v83;
  while ( 1 )
  {
    v57 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v84,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v57 )
      break;
    v59 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1B8880C(v57, v58);
    if ( !v59->max_length )
      sub_1B88814(v57, v58);
    v60 = v59->m_Items[0];
    if ( !v60 )
      sub_1B8880C(0LL, v58);
    key = v84.fields._current.fields.key;
    value = v84.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v60, 0LL);
    if ( !Fsm )
      sub_1B8880C(0LL, v64);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1B8880C(0LL, v64);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v68 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1B8880C(FsmInt, v67);
      if ( !v68->max_length )
        sub_1B88814(FsmInt, v67);
      v69 = v68->m_Items[0];
      if ( !v69 )
        sub_1B8880C(0LL, v67);
      v70 = PlayMakerFSM__get_Fsm(v69, 0LL);
      if ( !v70 )
        sub_1B8880C(0LL, v71);
      v72 = v70->fields.variables;
      if ( !v72 )
        sub_1B8880C(0LL, v71);
      v73 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v72, (System_String_o *)key, 0LL);
      if ( !v73 )
        sub_1B8880C(0LL, v74);
      if ( !value )
        goto LABEL_115;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1B88ACC(value);
LABEL_115:
        sub_1B8880C(v73, v74);
      }
      v73->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v75, v76);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v84,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v77);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v79,
    v80);
  BattleActorControl__setLimitedPeriod(this, v81);
}


void __fastcall BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.myStage = obj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.myStage, (int32_t)obj, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setNpDamageVoice(BattleActorControl_o *this, bool flg, const MethodInfo *method)
{
  BattleActorControl_o *v4; // x20
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21
  bool v8; // w24
  UnityEngine_Object_o *v9; // x19
  struct UnityEngine_Transform_o *nodeText; // x19

  v4 = this;
  if ( (byte_4A5DEB8 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_9508/*"Noble_Check"*/);
    byte_4A5DEB8 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_1B8880C(this, flg);
  v6 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = flg;
    do
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1B88814(this, flg);
      v9 = (UnityEngine_Object_o *)motionFSM->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_18;
        this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)v9, 0LL);
        if ( !this )
          goto LABEL_18;
        nodeText = this->fields.nodeText;
        if ( nodeText )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this->fields.nodeText,
                                           (System_String_o *)StringLiteral_9508/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)nodeText,
                                             (System_String_o *)StringLiteral_9508/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_18;
            LOBYTE(this->fields.shadowObj) = v8;
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
  int32_t v3; // w3

  this->fields.performance = perf;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.performance, (int32_t)perf, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setReloadWeaponMotion(
        BattleActorControl_o *this,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v4; // x19
  BattleActorControl_o *v5; // x20
  int32_t v6; // w21
  int32_t WeaponGroup; // w22
  BattleActorControl_o *v8; // x21
  struct PlayMakerFSM_array *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  BattleActorControl_o *v12; // x21
  struct PlayMakerFSM_array *v13; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v14; // x20
  struct PlayMakerFSM_array *v15; // x8
  struct PlayMakerFSM_array *v16; // x8
  BattleActorControl_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
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
  struct PlayMakerFSM_array *v44; // x8
  PlayMakerFSM_o *v45; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v49; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v52; // x1
  struct PlayMakerFSM_array *v53; // x8
  PlayMakerFSM_o *v54; // x0
  HutongGames_PlayMaker_Fsm_o *v55; // x0
  __int64 v56; // x1
  HutongGames_PlayMaker_FsmVariables_o *v57; // x0
  HutongGames_PlayMaker_FsmInt_o *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  const MethodInfo *v62; // x1
  System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  __int64 v66; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4A5DE97 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&StringLiteral_13561/*"TargetFrontPos"*/);
    sub_1B885B0(&StringLiteral_13560/*"TargetBackPos"*/);
    sub_1B885B0(&StringLiteral_3978/*"Camera"*/);
    sub_1B885B0(&StringLiteral_2235/*"ActorObject"*/);
    sub_1B885B0(&StringLiteral_16195/*"_ENEMY"*/);
    sub_1B885B0(&StringLiteral_3984/*"CameraFsm"*/);
    sub_1B885B0(&StringLiteral_10601/*"Performance"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_2236/*"ActorSide"*/);
    byte_4A5DE97 = 1;
  }
  memset(&v68, 0, sizeof(v68));
  if ( !flg )
  {
    motionFSM = v4->fields.motionFSM;
    if ( !motionFSM )
      goto LABEL_125;
    if ( !motionFSM->max_length )
      goto LABEL_139;
    this = (BattleActorControl_o *)motionFSM->m_Items[0];
    if ( this )
    {
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( this )
      {
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( this )
        {
          FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)this,
                            (System_String_o *)StringLiteral_2235/*"ActorObject"*/,
                            0LL);
          this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
          if ( FsmGameObject )
          {
            HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)this, 0LL);
            goto LABEL_124;
          }
        }
      }
    }
LABEL_125:
    sub_1B8880C(this, flg);
  }
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_125;
  v5 = this;
  this = (BattleActorControl_o *)BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_125;
  v6 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(v4->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(
                                   (UnityEngine_GameObject_o *)v5,
                                   v6,
                                   WeaponGroup,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  v8 = this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v9 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v8,
                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v9 )
    goto LABEL_125;
  v12 = this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_1B886EC(this, v9->obj.klass->_1.element_class);
    if ( !this )
    {
      v66 = sub_1B88830(0LL);
      sub_1B886D8(v66, 0LL);
    }
  }
  if ( !v9->max_length )
    goto LABEL_139;
  v9->m_Items[0] = (PlayMakerFSM_o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v9->m_Items, (int32_t)v12, v10, v11);
  v13 = v4->fields.motionFSM;
  if ( !v13 )
    goto LABEL_125;
  if ( !v13->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v13->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  v14 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_2235/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v14 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v14, (UnityEngine_GameObject_o *)this, 0LL);
  v15 = v4->fields.motionFSM;
  if ( !v15 )
    goto LABEL_125;
  if ( !v15->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v15->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2236/*"ActorSide"*/,
                                   0LL);
  v16 = v4->fields.motionFSM;
  if ( !v16 )
    goto LABEL_125;
  if ( v16->max_length <= 1 )
    goto LABEL_139;
  v17 = this;
  this = (BattleActorControl_o *)v16->m_Items[1];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_2236/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v17 )
    goto LABEL_125;
  v17->fields.shadowObj = (struct UnityEngine_Transform_o *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v17->fields.shadowObj, (int32_t)this, v18, v19);
  v20 = v4->fields.motionFSM;
  if ( !v20 )
    goto LABEL_125;
  if ( !v20->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v20->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3978/*"Camera"*/,
                                   0LL);
  v21 = v4->fields.motionFSM;
  if ( !v21 )
    goto LABEL_125;
  if ( v21->max_length <= 1 )
    goto LABEL_139;
  v22 = this;
  this = (BattleActorControl_o *)v21->m_Items[1];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3978/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v22 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v22,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v23 = v4->fields.motionFSM;
  if ( !v23 )
    goto LABEL_125;
  if ( !v23->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v23->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3984/*"CameraFsm"*/,
                                   0LL);
  v24 = v4->fields.motionFSM;
  if ( !v24 )
    goto LABEL_125;
  if ( v24->max_length <= 1 )
    goto LABEL_139;
  v25 = this;
  this = (BattleActorControl_o *)v24->m_Items[1];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_3984/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v25 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v25,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v26 = v4->fields.motionFSM;
  if ( !v26 )
    goto LABEL_125;
  if ( !v26->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v26->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_10601/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_125;
  v27 = this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v27 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v27,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v28 = v4->fields.motionFSM;
  if ( !v28 )
    goto LABEL_125;
  if ( !v28->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v28->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  if ( HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
         (HutongGames_PlayMaker_FsmVariables_o *)this,
         (System_String_o *)StringLiteral_13561/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( !this )
      goto LABEL_125;
    this = (BattleActorControl_o *)System_String__Equals_61715348(
                                     (System_String_o *)this,
                                     (System_String_o *)StringLiteral_16195/*"_ENEMY"*/,
                                     0LL);
    v29 = v4->fields.motionFSM;
    if ( !v29 )
      goto LABEL_125;
    if ( v29->max_length )
    {
      v30 = (char)this;
      this = (BattleActorControl_o *)v29->m_Items[0];
      if ( !this )
        goto LABEL_125;
      this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
      if ( !this )
        goto LABEL_125;
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_125;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13561/*"TargetFrontPos"*/,
                                       0LL);
      performance = v4->fields.performance;
      if ( !performance )
        goto LABEL_125;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v30 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_125;
        *(float *)&this->fields.shadowObj = -distanceofactor;
        HIDWORD(this->fields.shadowObj) = 0;
        LODWORD(this->fields.specialShadowObj) = 0;
        v33 = v4->fields.motionFSM;
        if ( !v33 )
          goto LABEL_125;
        if ( v33->max_length )
        {
          this = (BattleActorControl_o *)v33->m_Items[0];
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)this->fields.nodeText;
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13560/*"TargetBackPos"*/,
                                           0LL);
          v34 = v4->fields.performance;
          if ( !v34 || !this )
            goto LABEL_125;
          v35 = v34->fields.distanceofactor;
LABEL_101:
          *(float *)&this->fields.shadowObj = v35;
          HIDWORD(this->fields.shadowObj) = 0;
          LODWORD(this->fields.specialShadowObj) = 0;
          goto LABEL_102;
        }
      }
      else
      {
        if ( !this )
          goto LABEL_125;
        *(float *)&this->fields.shadowObj = distanceofactor;
        HIDWORD(this->fields.shadowObj) = 0;
        LODWORD(this->fields.specialShadowObj) = 0;
        v39 = v4->fields.motionFSM;
        if ( !v39 )
          goto LABEL_125;
        if ( v39->max_length )
        {
          this = (BattleActorControl_o *)v39->m_Items[0];
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)this->fields.nodeText;
          if ( !this )
            goto LABEL_125;
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this,
                                           (System_String_o *)StringLiteral_13560/*"TargetBackPos"*/,
                                           0LL);
          v40 = v4->fields.performance;
          if ( !v40 || !this )
            goto LABEL_125;
          v35 = -v40->fields.distanceofactor;
          goto LABEL_101;
        }
      }
    }
LABEL_139:
    sub_1B88814(this, flg);
  }
LABEL_102:
  this = (BattleActorControl_o *)v4->fields.battleSvtData;
  if ( !this )
    goto LABEL_125;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)this, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  this = (BattleActorControl_o *)JsonManager__getDictionary(StrParam, 0LL);
  if ( !this )
    goto LABEL_125;
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v67,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v68 = v67;
  while ( 1 )
  {
    v42 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v68,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v42 )
      break;
    v44 = v4->fields.motionFSM;
    if ( !v44 )
      sub_1B8880C(v42, v43);
    if ( !v44->max_length )
      sub_1B88814(v42, v43);
    v45 = v44->m_Items[0];
    if ( !v45 )
      sub_1B8880C(0LL, v43);
    key = v68.fields._current.fields.key;
    value = v68.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v45, 0LL);
    if ( !Fsm )
      sub_1B8880C(0LL, v49);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1B8880C(0LL, v49);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v53 = v4->fields.motionFSM;
      if ( !v53 )
        sub_1B8880C(FsmInt, v52);
      if ( !v53->max_length )
        sub_1B88814(FsmInt, v52);
      v54 = v53->m_Items[0];
      if ( !v54 )
        sub_1B8880C(0LL, v52);
      v55 = PlayMakerFSM__get_Fsm(v54, 0LL);
      if ( !v55 )
        sub_1B8880C(0LL, v56);
      v57 = v55->fields.variables;
      if ( !v57 )
        sub_1B8880C(0LL, v56);
      v58 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v57, (System_String_o *)key, 0LL);
      if ( !v58 )
        sub_1B8880C(0LL, v59);
      if ( !value )
        goto LABEL_132;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1B88ACC(value);
LABEL_132:
        sub_1B8880C(v58, v59);
      }
      v58->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v60, v61);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v68,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(v4, v62);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v64,
    v65);
LABEL_124:
  BattleActorControl__setLimitedPeriod(v4, v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__setServantData(
        BattleActorControl_o *this,
        BattleServantData_o *svtdata,
        const MethodInfo *method)
{
  __int64 v5; // x28
  DataManager_o *Instance; // x0
  struct UnityEngine_GameObject_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  BattleServantData_o **p_battleSvtData; // x25
  int32_t v11; // w2
  int32_t v12; // w3
  BattleServantData_o *v13; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x22
  __int64 v15; // x21
  __int64 v16; // x23
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x21
  ServantEntity_o *v19; // x26
  struct UnityEngine_Transform_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w29
  int v24; // w21
  int32_t v25; // w23
  UnityEngine_GameObject_o *v26; // x24
  int32_t v27; // w27
  _BOOL4 isForceAppearance; // w20
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  int32_t v31; // w2
  int32_t v32; // w3
  UnityEngine_Transform_o *v33; // x21
  const MethodInfo *v34; // x2
  BattlePerformance_o *performance; // x21
  int32_t m_CancellationTokenSource; // w22
  System_String_o *v37; // x29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *HideInAnimNodeName; // x26
  bool v44; // w0
  int32_t v45; // w2
  int32_t v46; // w3
  UnityEngine_Transform_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_String_o *v51; // x1
  UnityEngine_GameObject_o *v52; // x26
  int32_t v53; // w29
  UnityEngine_Transform_o *v54; // x21
  UnityEngine_Transform_o *v55; // x21
  UnityEngine_Transform_o *v56; // x21
  UnityEngine_Transform_o *v57; // x21
  UnityEngine_Transform_o *v58; // x21
  BattleFBXComponent_o *fbxcomponent; // x21
  _BOOL4 v60; // w20
  const MethodInfo *v61; // x2
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x3
  int32_t displayType; // w8
  bool v65; // w1
  bool v66; // w2
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__49085148; // x21
  System_Collections_Generic_List_object__o *v68; // x22
  int32_t v69; // w2
  int32_t v70; // w3
  const MethodInfo *v71; // x2
  BattleServantData_o *v72; // x22
  UnityEngine_Transform_o *v73; // x21
  float actorScale; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct BattlePerformance_o *v76; // x8
  struct BattleData_o *data; // x8
  int32_t v78; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  System_Predicate_object__o *v80; // x26
  Il2CppObject *v81; // x21
  struct BattleActorControl___c_StaticFields *v82; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  UnityEngine_SkinnedMeshRenderer_o *v85; // x25
  Il2CppObject *Component_object; // x26
  struct BattlePerformance_o *v87; // x8
  bool IsEnemyPosCountNormal; // w27
  UnityEngine_Mesh_o *v89; // x21
  BattlePerformance_o *v90; // x29
  int32_t v91; // w28
  __int64 v92; // x22
  __int64 v93; // x21
  int32_t v94; // w21
  System_Action_o *v95; // x22
  struct BattlePerformance_o *v96; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v100; // x9
  Il2CppObject *v101; // x21
  struct BattlePerformance_o *v102; // x8
  UnityEngine_Camera_o *actorcamera; // x25
  UnityEngine_Camera_o *uicamera; // x26
  UnityEngine_GameObject_o *v105; // x27
  const MethodInfo *v106; // x1
  int v107; // s0
  System_Object_array *Components_object; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  const MethodInfo *v113; // x3
  const MethodInfo *v114; // x4
  const MethodInfo *v115; // x1
  BattleServantData_o *v116; // [xsp+8h] [xbp-78h]
  __int64 v117; // [xsp+10h] [xbp-70h]
  int32_t v118; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v119; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v120; // 0:x0.16
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5DE8C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___76046760);
    sub_1B885B0(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    sub_1B885B0(&UnityEngine_Mesh_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&System_Predicate_SkinnedMeshRenderer__TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleActorControl___c__setServantData_b__137_0__);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass137_0__setServantData_b__1__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass137_0_TypeInfo);
    sub_1B885B0(&BattleActorControl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_18971/*"en_Head"*/);
    sub_1B885B0(&StringLiteral_12736/*"Shadow"*/);
    sub_1B885B0(&StringLiteral_18975/*"en_buff01"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DE8C = 1;
  }
  v5 = sub_1B887FC(BattleActorControl___c__DisplayClass137_0_TypeInfo);
  BattleActorControl___c__DisplayClass137_0___ctor((BattleActorControl___c__DisplayClass137_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_119;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  v116 = svtdata;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleSvtData, (int32_t)svtdata, v11, v12);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  v13 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v16 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
  v15 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v119.fields.currentCryptoKey = v16;
  *(_QWORD *)&v119.fields.fakeValue = v15;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v119, 0LL);
  if ( !v14 )
    goto LABEL_119;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v14,
             (int32_t)Instance,
             (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v19 = (ServantEntity_o *)Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_119;
    v20 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12736/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v20;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shadowObj, (int32_t)v20, v21, v22);
  }
  Instance = (DataManager_o *)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v23 = (int)Instance;
  Instance = (DataManager_o *)BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v24 = (int)Instance;
  v25 = v23 == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v24 : 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_119;
  v26 = (UnityEngine_GameObject_o *)Instance;
  Instance = (DataManager_o *)BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v27 = (int)Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v26,
                               v27,
                               v25,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.actorObject,
    (int32_t)Manager__loadBattleActor,
    v31,
    v32);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  v33 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v33 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v33, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleActorControl__ChangeShadowParent(this, v25, v34);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  performance = this->fields.performance;
  m_CancellationTokenSource = (int32_t)Instance->fields.m_CancellationTokenSource;
  Instance = (DataManager_o *)BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_119;
  v118 = v23;
  BattlePerformance__registerCameraAction(performance, m_CancellationTokenSource, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  v117 = v5;
  v37 = (System_String_o *)StringLiteral_18971/*"en_Head"*/;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(transform, v37, v25, 0, 0LL);
  if ( !Instance )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v40 = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.checkScaleNode, 0, v41, v42);
  if ( v19 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v19, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v37 )
      goto LABEL_119;
    v44 = System_String__Equals_61715348(v37, HideInAnimNodeName, 0LL);
    v7 = v40;
    if ( !v44 )
    {
      Instance = (DataManager_o *)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_119;
      v47 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v47, HideInAnimNodeName, v25, 0, 0LL);
      if ( !Instance )
        goto LABEL_119;
      v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.checkScaleNode, (int32_t)v7, v45, v46);
  }
  v48 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v51 = TransformHelper__ExistNodeFromLvName(v48, (System_String_o *)StringLiteral_18975/*"en_buff01"*/, -1, 0, 0LL)
      ? (struct System_String_o *)StringLiteral_18975/*"en_buff01"*/
      : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v51;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int32_t)v51,
    v49,
    v50);
  v52 = (UnityEngine_GameObject_o *)sub_1B887FC(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_69441128(v52, 0LL);
  if ( !v52 )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v52, 0LL);
  v53 = v118;
  if ( !v40 )
    goto LABEL_119;
  v54 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v40, 0LL);
  if ( !v54 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v54, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v52, 0LL);
  v55 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE1 )
  {
    Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  if ( !v55 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v55, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v52, 0LL);
  v56 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE9 )
  {
    Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE9 = 1;
  }
  if ( !v56 )
    goto LABEL_119;
  UnityEngine_Transform__set_localEulerAngles(v56, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v52, 0LL);
  v57 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE6 )
  {
    Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v57 )
    goto LABEL_119;
  UnityEngine_Transform__set_localScale(v57, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v58 = UnityEngine_GameObject__get_transform(v52, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v58 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v58, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v52, 0LL);
  if ( !Instance )
    goto LABEL_119;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v52, 0LL);
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
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v118, v25, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v60 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Instance = (DataManager_o *)ServantAssetLoadManager__loadAnimEvents(v118, v25, v60, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__loadAnimationEvents(
    this->fields.fbxcomponent,
    (UnityEngine_TextAsset_o *)Instance,
    v118,
    v25,
    0LL);
  BattleActorControl__InitAnimationEffect(this, v25, v61);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v65 = displayType == 2;
      v66 = displayType == 3;
    }
    else
    {
      v65 = 0;
      v66 = 0;
    }
    BattleActorControl__SetDispServant(this, v65, v66, v63);
  }
  BattleActorControl__UpdateShadow(this, v62);
  this->fields.stepFlg = 0;
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  ComponentsInChildren_object__49085148 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                                           (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v68 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor_55562536(
    v68,
    ComponentsInChildren_object__49085148,
    (const MethodInfo_34FD128 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___76046760);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v68;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.rendererArrayList, (int32_t)v68, v69, v70);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v71);
  v72 = v116;
  if ( !v116 )
    goto LABEL_119;
  this->fields.actorScale = BattleServantData__getActorScale(v116, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v73 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A55CE6 )
  {
    Instance = (DataManager_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE6 = 1;
  }
  if ( !v73 )
    goto LABEL_119;
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v121.fields.z = actorScale * static_fields->oneVector.fields.z;
  v121.fields.y = actorScale * static_fields->oneVector.fields.y;
  v121.fields.x = actorScale * static_fields->oneVector.fields.x;
  UnityEngine_Transform__set_localScale(v73, v121, 0LL);
  if ( !v116->fields.isEnemy )
    goto LABEL_117;
  v76 = this->fields.performance;
  if ( !v76 )
    goto LABEL_119;
  data = v76->fields.data;
  if ( !data )
    goto LABEL_119;
  v78 = System_Array__IndexOf_int_(
          data->fields.e_entryid,
          v116->fields.uniqueId,
          (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___);
  *(_DWORD *)(v5 + 24) = v78;
  if ( v78 == -1 )
    goto LABEL_117;
  rendererArrayList = this->fields.rendererArrayList;
  Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
  }
  v80 = *(System_Predicate_object__o **)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL);
  if ( !v80 )
  {
    if ( !LODWORD(Instance[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
    }
    v81 = **(Il2CppObject ***)&Instance[1].fields._DispLog;
    v80 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SkinnedMeshRenderer__TypeInfo);
    System_Predicate_object____ctor(v80, v81, Method_BattleActorControl___c__setServantData_b__137_0__, 0LL);
    v82 = BattleActorControl___c_TypeInfo->static_fields;
    v82->__9__137_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)v80;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v82->__9__137_0, (int32_t)v80, v83, v84);
  }
  if ( !rendererArrayList )
    goto LABEL_119;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                (System_Collections_Generic_List_object__o *)rendererArrayList,
                                (System_Predicate_T__o *)v80,
                                (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_119;
  v85 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       *p_actorObject,
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = (DataManager_o *)*p_actorObject;
    if ( !*p_actorObject )
      goto LABEL_119;
    Instance = (DataManager_o *)UnityEngine_GameObject__AddComponent_object_(
                                  (UnityEngine_GameObject_o *)Instance,
                                  (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_119;
    Component_object = (Il2CppObject *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v87 = this->fields.performance;
  if ( !v87 )
    goto LABEL_119;
  Instance = (DataManager_o *)v87->fields.data;
  if ( !Instance )
    goto LABEL_119;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v89 = (UnityEngine_Mesh_o *)sub_1B887FC(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v89, 0LL);
  if ( !v85 )
    goto LABEL_119;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v85, v89, 0LL);
  if ( !Component_object )
    goto LABEL_119;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_object, v89, 0LL);
  v90 = this->fields.performance;
  v91 = *(_DWORD *)(v5 + 24);
  v92 = *(_QWORD *)&v116->fields.svtId.fields.currentCryptoKey;
  v93 = *(_QWORD *)&v116->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v120.fields.currentCryptoKey = v92;
  *(_QWORD *)&v120.fields.fakeValue = v93;
  v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v120, 0LL);
  v95 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v95,
    (Il2CppObject *)v117,
    Method_BattleActorControl___c__DisplayClass137_0__setServantData_b__1__,
    0LL);
  if ( !v90 )
    goto LABEL_119;
  BattlePerformance__AddCollider(
    v90,
    (UnityEngine_MeshCollider_o *)Component_object,
    v85,
    v91,
    v94,
    v95,
    IsEnemyPosCountNormal,
    0LL);
  v96 = this->fields.performance;
  if ( !v96 )
    goto LABEL_119;
  statusPerf = v96->fields.statusPerf;
  v72 = v116;
  v53 = v118;
  if ( !statusPerf )
    goto LABEL_119;
  enemyPref = statusPerf->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_119;
  svtHeadUpList = enemyPref->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_119;
  v100 = *(int *)(v117 + 24);
  if ( (unsigned int)v100 >= svtHeadUpList->max_length )
    sub_1B88814(Instance, v7);
  Instance = (DataManager_o *)svtHeadUpList->m_Items[v100];
  if ( !Instance )
LABEL_119:
    sub_1B8880C(Instance, v7);
  v101 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)Instance,
           (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v101, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v102 = this->fields.performance;
    if ( v102 )
    {
      actorcamera = v102->fields.actorcamera;
      uicamera = v102->fields.uicamera;
      v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v107 = BattleActorControl__getHeadUpY(this, v106);
      if ( v101 )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)v101,
          actorcamera,
          uicamera,
          v105,
          *(UnityEngine_Vector3_o *)&v107,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)v101, 0LL);
        goto LABEL_117;
      }
    }
    goto LABEL_119;
  }
LABEL_117:
  Instance = (DataManager_o *)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  Components_object = UnityEngine_GameObject__GetComponents_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2ECF814 *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_object;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (int32_t)Components_object,
    v111,
    v112);
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, 0, v113);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v53, v25, v72->fields.isEnemy, v114);
  BattleActorControl__LoadSavedPartAnimation(this, v115);
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

  v4 = this;
  if ( (byte_4A5DE9C & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_13080/*"SummonMasterObject"*/);
    byte_4A5DE9C = 1;
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13080/*"SummonMasterObject"*/,
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
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_30;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13080/*"SummonMasterObject"*/,
                                       0LL);
      if ( !this )
        goto LABEL_30;
      HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)this, obj, 0LL);
    }
    v7 = v4->fields.motionFSM;
    if ( !v7 )
      goto LABEL_30;
    if ( v7->max_length <= 1 )
LABEL_31:
      sub_1B88814(this, obj);
    this = (BattleActorControl_o *)v7->m_Items[1];
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_30;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13080/*"SummonMasterObject"*/,
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
            this = (BattleActorControl_o *)this->fields.nodeText;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13080/*"SummonMasterObject"*/,
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
        sub_1B8880C(this, obj);
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

  v4 = this;
  if ( (byte_4A5DE9B & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_13564/*"TargetObject"*/);
    byte_4A5DE9B = 1;
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
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_17;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13564/*"TargetObject"*/,
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
            this = (BattleActorControl_o *)this->fields.nodeText;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13564/*"TargetObject"*/,
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
        sub_1B8880C(this, obj);
      }
    }
    sub_1B88814(this, obj);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_1B8880C(this, method);
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
  int32_t v3; // w3

  this->fields._BuffEffectNodeName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._BuffEffectNodeName_k__BackingField,
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


void __fastcall BattleActorControl__set_PlayedOriginalAnimName(
        BattleActorControl_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._PlayedOriginalAnimName_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
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
  int32_t v3; // w3

  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
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
      sub_1B8880C(0LL, v3);
    BattlePerformance__startSkipDeadTemp(performance, 0LL);
  }
}


void __fastcall BattleActorControl__skipVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattlePerformance_o *performance; // x8
  bool IsHighSpeedOption; // w0
  int32_t uniqueID; // w20
  bool v6; // w21
  float v7; // s0
  const MethodInfo *v8; // x3

  v2 = this;
  if ( (byte_4A5DEEF & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&StringLiteral_12159/*"SKIP_VOICE"*/);
    byte_4A5DEEF = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_1B8880C(this, method);
  IsHighSpeedOption = BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v2->fields.uniqueID;
  v6 = IsHighSpeedOption;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v7 = 1.0;
  if ( v6 )
    v7 = 0.5;
  ServantAssetLoadManager__StopVoice(uniqueID, v7, 0LL);
  BattleActorControl__sendEventFSM_43701988(v2, (System_String_o *)StringLiteral_12159/*"SKIP_VOICE"*/, 0, v8);
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
    sub_1B8880C(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_4A5DEF9 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl_endChangeAppearance__);
    byte_4A5DEF9 = 1;
  }
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v5 = BattleActorControl__waitChangeApp(this, v3, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall BattleActorControl__startNoblePhantasm(
        BattleActorControl_o *this,
        System_Action_o *callback,
        bool flg,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x19
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v9; // w9
  bool v10; // w27
  System_Delegate_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x0
  System_Delegate_c *klass; // x2
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
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
  struct BattleActionData_o *actiondata; // x8
  Il2CppObject *Entity; // x0
  TreasureDvcEntity_o *v34; // x20
  struct BattleActionData_o *v35; // x8
  Il2CppObject *v36; // x20
  AssetManager_ResourceUnloadEventHandler_o *v37; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v39; // x20
  __int64 v40; // x21
  __int64 v41; // x22
  int32_t v42; // w21
  BattleActorControl_o *v43; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v45; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v48; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v50; // x27
  UnityEngine_Object_o *v51; // x20
  struct BattlePerformance_o *v52; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v54; // x8
  struct BattleData_o *v55; // x8
  void *v56; // x0
  int v57; // w1
  __int64 v58; // x24
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16

  v6 = this;
  if ( (byte_4A5DED5 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_1B885B0(&Method_BattleActorControl__startNoblePhantasm_b__266_0__);
    sub_1B885B0(&Method_BattleActorControl__startNoblePhantasm_b__266_1__);
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_TreasureDvcMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_1B885B0(&Method_FieldMotionManager_SetVariables_GameObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&StringLiteral_9308/*"NPACTOR"*/);
    this = (BattleActorControl_o *)sub_1B885B0(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4A5DED5 = 1;
  }
  memset(&i, 0, sizeof(i));
  noblePhantasmObjectVisibleCtrList = v6->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_70;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v9 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v9;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0LL);
  this = (BattleActorControl_o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                   v6,
                                   (const MethodInfo *)callback);
  if ( !this )
    goto LABEL_70;
  v10 = flg;
  v11 = (System_Delegate_o *)&Method_BattleActorControl__startNoblePhantasm_b__266_0__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  for ( i = v59;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
        BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 1, (BattleActorControl_o *)i.fields._current, v12) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 2, v6, v13);
    v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    klass = v11->klass;
    v11 = (System_Delegate_o *)v14;
    System_Action___ctor(v14, (Il2CppObject *)v6, (intptr_t)klass, 0LL);
    v16 = System_Delegate__Combine((System_Delegate_o *)callback, v11, 0LL);
    if ( !v16 || (System_Action_c *)v16->klass == System_Action_TypeInfo )
      break;
    sub_1B88ACC(v16);
    if ( v57 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
      sub_1C73040();
    }
    v58 = *(_QWORD *)__cxa_begin_catch(v56);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v58 )
      sub_1B88804(v58);
  }
  v6->fields.noblePhantasmCallback = (struct System_Action_o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.noblePhantasmCallback, (int32_t)v16, v17, v18);
  this = (BattleActorControl_o *)v6->fields.fbxcomponent;
  if ( !this )
    goto LABEL_70;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)this, 0, 0LL);
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_70;
  this = (BattleActorControl_o *)performance->fields.bgPerf;
  if ( !this )
    goto LABEL_70;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 0, 0LL);
  v20 = v6->fields.performance;
  v6->fields.isPlayingNoblePhantasm = 1;
  if ( !v20 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v20->fields.logic;
  if ( !this )
    goto LABEL_70;
  BattleLogic__ChangePhase((BattleLogic_o *)this, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(v6, 0, v21);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)this, 0, 0LL);
  v22 = v6->fields.performance;
  if ( !v22 )
    goto LABEL_70;
  fmManager_k__BackingField = v22->fields._fmManager_k__BackingField;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_70;
  FieldMotionManager__SetVariables_object_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9308/*"NPACTOR"*/,
    (Il2CppObject *)this,
    (const MethodInfo_2ECCA00 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v24 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v24 = BattleFBXComponent_TypeInfo;
  }
  v24->static_fields->EnableEvent = 0;
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__changeShadowType((BattlePerformance_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)this, 0LL);
  v25 = v6->fields.performance;
  if ( !v25 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v25->fields.commandPerf;
  if ( !this )
    goto LABEL_70;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v27 = v6->fields.performance;
  v28 = (BattleSequenceManager_o *)Instance;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v29 = v6->fields.performance;
  if ( !v29 )
    goto LABEL_70;
  bgPerf = v29->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_70;
  if ( !v28 )
    goto LABEL_70;
  BattleSequenceManager__init(
    v28,
    v27,
    (UnityEngine_GameObject_o *)this,
    v29->fields.p_actorlist,
    v29->fields.e_actorlist,
    v29->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v31 = v6->fields.performance;
  if ( !v31 )
    goto LABEL_70;
  v31->fields.isNoblePhantasmWhiteInFlg = v10;
  if ( v6->fields.actiondata )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleActorControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = v6->fields.actiondata;
    if ( !actiondata || !this )
      goto LABEL_70;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               actiondata->fields.treasureDvcId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v34 = (TreasureDvcEntity_o *)Entity;
      if ( TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)Entity, 0LL) )
      {
        this = (BattleActorControl_o *)v6->fields.battleSvtData;
        if ( !this )
          goto LABEL_70;
        this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
        v35 = v6->fields.actiondata;
        if ( !v35 )
          goto LABEL_70;
        TreasureDvcEntity__getRandomSeqIdEachLimit(v34, (int32_t)this, v35->fields.ActSetId, 0LL);
      }
    }
  }
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_70;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)this, v6->fields.actiondata, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v36 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v37 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1B887FC(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v37,
      (Il2CppObject *)v6,
      Method_BattleActorControl__startNoblePhantasm_b__266_1__,
      0LL);
    if ( !v36 )
      goto LABEL_70;
    AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)v36, v37, 0LL);
  }
  else
  {
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = v6->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_70;
    v39 = (BattleSequenceManager_o *)this;
    v41 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v40 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v61.fields.currentCryptoKey = v41;
    *(_QWORD *)&v61.fields.fakeValue = v40;
    this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v61, 0LL);
    if ( !v6->fields.battleSvtData )
      goto LABEL_70;
    v42 = (int)this;
    this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice(v6->fields.battleSvtData, 0LL);
    if ( !this )
      goto LABEL_70;
    v43 = this;
    this = (BattleActorControl_o *)v6->fields.battleSvtData;
    if ( !this )
      goto LABEL_70;
    m_CachedPtr = v43->fields.m_CachedPtr;
    this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
    v45 = v6->fields.battleSvtData;
    if ( !v45 )
      goto LABEL_70;
    overwriteSvtVoiceId = v45->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v45->fields.treasuredvcLevel;
    v48 = (int)this;
    NpChargeStage = BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
    v50 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1B887FC(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v50,
      (Il2CppObject *)v6,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v39 )
      goto LABEL_70;
    BattleSequenceManager__loadSequence(
      v39,
      v42,
      m_CachedPtr,
      v48,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v50,
      0LL);
  }
  v51 = (UnityEngine_Object_o *)v6->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v51, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v52 = v6->fields.performance;
    if ( !v52 )
      goto LABEL_70;
    data = (UnityEngine_Object_o *)v52->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && !v6->fields.isEnemy )
    {
      v54 = v6->fields.performance;
      if ( v54 )
      {
        v55 = v54->fields.data;
        if ( v55 )
        {
          ++v55->fields.playerNpCount;
          goto LABEL_68;
        }
      }
LABEL_70:
      sub_1B8880C(this, callback);
    }
  }
LABEL_68:
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_70;
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)this, 1, 1, 0LL);
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
    sub_1B8880C(this, method);
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
    sub_1B8880C(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4A5DEF0 & 1) == 0 )
  {
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DEF0 = 1;
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
  struct BattleServantData_o *battleSvtData; // x8
  struct BattleServantData_o *v6; // x8
  BattleBuffData_o *buffData; // x21
  System_Int32_array *IgnoreAuraBuffIds; // x0
  System_Collections_Generic_Dictionary_K__V__o *auraList; // x19
  BattleActorControl___c_c *v10; // x0
  System_Func_T__TResult__o *_9__329_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_int__o *v16; // x22
  __int64 v17; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x21
  unsigned __int64 v19; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v27; // x22
  unsigned __int64 v28; // x25
  int32_t v29; // w23
  Il2CppObject *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v32; // x2
  System_Collections_IEnumerator_o *v33; // x0
  __int64 v34; // x8
  unsigned __int64 v35; // x22
  const MethodInfo *v36; // x3
  int32_t v37; // w2
  System_Collections_IEnumerator_o *v38; // x0

  v3 = auraEffectList;
  v4 = this;
  if ( (byte_4A5DF01 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Remove_int__GameObject___);
    sub_1B885B0(&Method_DataManager_GetMasterData_AuraEffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Except_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleActorControl___c__updateAura_b__329_0__);
    this = (BattleActorControl_o *)sub_1B885B0(&BattleActorControl___c_TypeInfo);
    byte_4A5DF01 = 1;
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
  v6 = v4->fields.battleSvtData;
  if ( !v6 )
    goto LABEL_63;
  buffData = v6->fields.buffData;
  if ( !buffData )
    goto LABEL_63;
  IgnoreAuraBuffIds = BattleBuffData__GetIgnoreAuraBuffIds(v6->fields.buffData, 0LL);
  if ( !BattleBuffData__checkBuffId(buffData, IgnoreAuraBuffIds, 0LL) )
  {
LABEL_16:
    v16 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v16,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( v3 )
      {
        v17 = *(_QWORD *)&v3->max_length;
        v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( (int)v17 >= 1 )
        {
          v19 = 0LL;
          while ( v19 < (unsigned int)v17 )
          {
            if ( !v18 )
              goto LABEL_63;
            this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v18,
                                             v3->m_Items[v19 + 1],
                                             (const MethodInfo_311D934 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v16 )
                goto LABEL_63;
              auraEffectList = (System_Int32_array *)*((unsigned int *)&this->fields.UnityEngine_Behaviour_Fields + 1);
              items = v16->fields._items;
              v21 = Method_System_Collections_Generic_List_int__Add__;
              ++v16->fields._version;
              if ( !items )
                goto LABEL_63;
              size = v16->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v16,
                  (int32_t)auraEffectList,
                  *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
              }
              else
              {
                v16->fields._size = size + 1;
                items->m_Items[size + 1] = (int)auraEffectList;
              }
            }
            LODWORD(v17) = v3->max_length;
            if ( (__int64)++v19 >= (int)v17 )
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
                   (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
          v25 = System_Linq_Enumerable__Except_int_(
                  v24,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v16,
                  (const MethodInfo_2EA0740 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v25,
                                           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
            v27 = this;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v28 = 0LL;
              while ( v28 < (unsigned int)m_CancellationTokenSource )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                v29 = *((_DWORD *)&v27->fields.actorObject + v28);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                         v29,
                         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                    v33 = BattleActorControl__DestroyAuraEffect(
                            (BattleActorControl_o *)activeInHierarchy,
                            (UnityEngine_GameObject_o *)Item,
                            v32);
                    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v4, v33, 0LL);
                  }
                  else
                  {
LABEL_67:
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                System_Collections_Generic_Dictionary_int__object___Remove(
                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                  v29,
                  (const MethodInfo_316EDE0 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                 (const MethodInfo_316D608 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(m_CancellationTokenSource) = v27->fields.m_CancellationTokenSource;
                if ( (__int64)++v28 >= (int)m_CancellationTokenSource )
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
              v34 = *(_QWORD *)&v3->max_length;
              if ( (int)v34 < 1 )
                return;
              v35 = 0LL;
              while ( v35 < (unsigned int)v34 )
              {
                if ( !v18 )
                  goto LABEL_63;
                this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v18,
                                                 v3->m_Items[v35 + 1],
                                                 (const MethodInfo_311D934 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v37 = (int32_t)this->fields.m_CancellationTokenSource;
                  if ( v4->fields._currentPriority_k__BackingField <= v37 )
                  {
                    v38 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
                            v37,
                            v36);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v38,
                                                     0LL);
                  }
                }
                LODWORD(v34) = v3->max_length;
                if ( (__int64)++v35 >= (int)v34 )
                  return;
              }
LABEL_64:
              sub_1B88814(this, auraEffectList);
            }
          }
        }
      }
    }
LABEL_63:
    sub_1B8880C(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v10 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v10 = BattleActorControl___c_TypeInfo;
  }
  _9__329_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__329_0;
  if ( !_9__329_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleActorControl___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__329_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__329_0,
      v12,
      Method_BattleActorControl___c__updateAura_b__329_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__329_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__329_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__329_0, (int32_t)_9__329_0, v14, v15);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__329_0,
    (const MethodInfo_2E6EDA8 *)Method_BasicHelper_Remove_int__GameObject___);
}


void __fastcall BattleActorControl__updateBuffIcon(
        BattleActorControl_o *this,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BattleActorControl_o *v3; // x19
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v5; // x20
  unsigned __int64 v6; // x21
  struct BattlePerformance_o *performance; // x8

  if ( !actionData )
    goto LABEL_12;
  v3 = this;
  this = (BattleActorControl_o *)BattleActionData__getInfluenceIds(actionData, 0LL);
  if ( !this )
    goto LABEL_12;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v5 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)m_CancellationTokenSource )
        sub_1B88814(this, actionData);
      performance = v3->fields.performance;
      if ( !performance )
        break;
      this = (BattleActorControl_o *)performance->fields.data;
      if ( !this )
        break;
      this = (BattleActorControl_o *)BattleData__getServantData(
                                       (BattleData_o *)this,
                                       *((_DWORD *)&v5->fields.actorObject + v6),
                                       0LL);
      if ( this )
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
      LODWORD(m_CancellationTokenSource) = v5->fields.m_CancellationTokenSource;
      if ( (__int64)++v6 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_12:
    sub_1B8880C(this, actionData);
  }
}


void __fastcall BattleActorControl__updateBuffLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
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
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v14; // x24
  unsigned int v15; // w28
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  int32_t current; // w21
  const MethodInfo *v20; // x2
  System_Collections_IEnumerator_o *v21; // x1
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v23; // [xsp+20h] [xbp-A0h] BYREF

  v2 = this;
  if ( (byte_4A5DF12 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76153704);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    this = (BattleActorControl_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DF12 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_37;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_37;
  EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
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
                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !this )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 this->fields.m_CachedPtr,
                                 (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v9);
      if ( !Entity || !v6 )
        goto LABEL_37;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v6,
                                       Entity->fields.effectId,
                                       (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        method = (const MethodInfo *)(unsigned int)Entity->fields.effectId;
        items = v6->fields._items;
        v11 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_37;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            (int32_t)method,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = (int)method;
        }
        this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
        if ( !this )
          goto LABEL_37;
        if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               Entity->fields.effectId,
               (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76153704);
          if ( !this )
            goto LABEL_37;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v14 = this;
          if ( m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_28:
      if ( ++v7 >= EffectBuffList->fields._size )
        goto LABEL_29;
    }
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= m_CancellationTokenSource )
        sub_1B88814(this, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v14->fields.actorObject + (int)v15);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v7 * 0.01) + -1.0,
        0LL);
      m_CancellationTokenSource = (int)v14->fields.m_CancellationTokenSource;
      if ( (int)++v15 >= m_CancellationTokenSource )
        goto LABEL_28;
    }
LABEL_37:
    sub_1B8880C(this, method);
  }
LABEL_29:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_37;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           (const MethodInfo_316D618 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_2EBBD90 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v6 )
      sub_1B8880C(v17, v18);
    current = v23.fields._current;
    if ( !System_Collections_Generic_List_int___Contains(
            v6,
            v23.fields._current,
            (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v21 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v20);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)v2, v21, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  void *ComponentsInChildren_object__49085148; // x0
  __int64 v7; // x1
  int v8; // w8
  _DWORD *v9; // x20
  unsigned int v10; // w22
  char *v11; // x8
  UnityEngine_Renderer_o *v12; // x21
  BattleActorControl_c *v13; // x0
  float defaultHeight; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  int v18; // w8
  _DWORD *v19; // x19
  unsigned int v20; // w23
  char *v21; // x8
  UnityEngine_Component_o *v22; // x20
  __int64 v23; // x8
  _QWORD *v24; // x21
  unsigned __int64 v25; // x28
  UnityEngine_Material_o *v26; // x22
  System_String_o *v27; // x1
  UnityEngine_Material_o *v28; // x0
  float v29; // s0
  float y; // s10
  float v31; // s11
  float v32; // s12
  UnityEngine_Bounds_o v33; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DEC3 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16175/*"_ClipSharpnessY"*/);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_24669/*"weapon"*/);
    sub_1B885B0(&StringLiteral_17357/*"body"*/);
    byte_4A5DEC3 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__49085148 = (void *)UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_44;
    ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !ComponentsInChildren_object__49085148 )
      goto LABEL_44;
    v8 = *((_DWORD *)ComponentsInChildren_object__49085148 + 6);
    v9 = ComponentsInChildren_object__49085148;
    if ( v8 >= 1 )
    {
      v10 = 0;
      while ( v10 < v8 )
      {
        v11 = (char *)&v9[2 * v10];
        v12 = (UnityEngine_Renderer_o *)*((_QWORD *)v11 + 4);
        if ( !v12 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = UnityEngine_Renderer__get_material(
                                                  *((UnityEngine_Renderer_o **)v11 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__49085148 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = (void *)UnityEngine_Material__HasProperty_69325648(
                                                          (UnityEngine_Material_o *)ComponentsInChildren_object__49085148,
                                                          (System_String_o *)StringLiteral_16179/*"_Color"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
        {
          v13 = BattleActorControl_TypeInfo;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v13 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v13->static_fields->defaultHeight;
          ComponentsInChildren_object__49085148 = UnityEngine_Renderer__get_material(v12, 0LL);
          if ( !ComponentsInChildren_object__49085148 )
            goto LABEL_44;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)ComponentsInChildren_object__49085148, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          ComponentsInChildren_object__49085148 = UnityEngine_Renderer__get_material(v12, 0LL);
          if ( !ComponentsInChildren_object__49085148 )
            goto LABEL_44;
          v35.fields.a = 1.0 - (float)(val / defaultHeight);
          v35.fields.r = r;
          v35.fields.g = g;
          v35.fields.b = b;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)ComponentsInChildren_object__49085148, v35, 0LL);
        }
        v8 = v9[6];
        if ( (int)++v10 >= v8 )
          goto LABEL_20;
      }
LABEL_45:
      sub_1B88814(ComponentsInChildren_object__49085148, v7);
    }
LABEL_20:
    ComponentsInChildren_object__49085148 = UnityEngine_GameObject__GetComponentsInChildren_object__49085148(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2ECFADC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !ComponentsInChildren_object__49085148 )
LABEL_44:
      sub_1B8880C(ComponentsInChildren_object__49085148, v7);
    v18 = *((_DWORD *)ComponentsInChildren_object__49085148 + 6);
    v19 = ComponentsInChildren_object__49085148;
    if ( v18 >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        if ( v20 >= v18 )
          goto LABEL_45;
        v21 = (char *)&v19[2 * v20];
        v22 = (UnityEngine_Component_o *)*((_QWORD *)v21 + 4);
        if ( !v22 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = UnityEngine_Renderer__get_materials(
                                                  *((UnityEngine_Renderer_o **)v21 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__49085148 )
          goto LABEL_44;
        v23 = *((_QWORD *)ComponentsInChildren_object__49085148 + 3);
        v24 = ComponentsInChildren_object__49085148;
        if ( (int)v23 >= 1 )
          break;
LABEL_42:
        v18 = v19[6];
        if ( (int)++v20 >= v18 )
          return;
      }
      v25 = 0LL;
      while ( v25 < (unsigned int)v23 )
      {
        v26 = (UnityEngine_Material_o *)v24[v25 + 4];
        ComponentsInChildren_object__49085148 = UnityEngine_Component__get_gameObject(v22, 0LL);
        if ( !ComponentsInChildren_object__49085148 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49085148,
                                                  0LL);
        if ( !ComponentsInChildren_object__49085148 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__49085148,
                                                          (System_String_o *)StringLiteral_17357/*"body"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
          goto LABEL_35;
        ComponentsInChildren_object__49085148 = UnityEngine_Component__get_gameObject(v22, 0LL);
        if ( !ComponentsInChildren_object__49085148 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__49085148,
                                                  0LL);
        if ( !ComponentsInChildren_object__49085148 )
          goto LABEL_44;
        ComponentsInChildren_object__49085148 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__49085148,
                                                          (System_String_o *)StringLiteral_24669/*"weapon"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__49085148 & 1) != 0 )
        {
LABEL_35:
          if ( !v26 )
            goto LABEL_44;
          v27 = (System_String_o *)StringLiteral_16175/*"_ClipSharpnessY"*/;
          v28 = v26;
          v29 = val;
        }
        else
        {
          UnityEngine_Renderer__get_localBounds(&v33, (UnityEngine_Renderer_o *)v22, 0LL);
          y = v33.fields.m_Center.fields.y;
          UnityEngine_Renderer__get_localBounds(&v33, (UnityEngine_Renderer_o *)v22, 0LL);
          v31 = v33.fields.m_Extents.fields.y;
          UnityEngine_Renderer__get_localBounds(&v33, (UnityEngine_Renderer_o *)v22, 0LL);
          ComponentsInChildren_object__49085148 = BattleActorControl_TypeInfo;
          v32 = v33.fields.m_Extents.fields.y;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          if ( !v26 )
            goto LABEL_44;
          v27 = (System_String_o *)StringLiteral_16175/*"_ClipSharpnessY"*/;
          v28 = v26;
          v29 = (float)(y - v31)
              + (float)((float)((float)((float)(v32 + v32) + 0.2)
                              / BattleActorControl_TypeInfo->static_fields->defaultHeight)
                      * val);
        }
        UnityEngine_Material__SetFloat(v28, v27, v29, 0LL);
        LODWORD(v23) = *((_DWORD *)v24 + 6);
        if ( (__int64)++v25 >= (int)v23 )
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
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5DEFA & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl__waitChangeApp_d__321_TypeInfo);
    byte_4A5DEFA = 1;
  }
  v5 = sub_1B887FC(BattleActorControl__waitChangeApp_d__321_TypeInfo);
  BattleActorControl__waitChangeApp_d__321___ctor((BattleActorControl__waitChangeApp_d__321_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_Queue_T__o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5DF2D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
    byte_4A5DF2D = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._activeFsmNameList, (int32_t)v5, v6, v7);
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1B887FC(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_366F2A4 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._callBackQueue, (int32_t)v8, v9, v10);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.battleActor, (int32_t)actor, v11, v12);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *activeFsmNameList; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0

  if ( (byte_4A5DF2F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4A5DF2F = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_object__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    goto LABEL_9;
  v5 = System_Collections_Generic_List_object___Contains(
         activeFsmNameList,
         (Il2CppObject *)fsmName,
         (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( v5 )
    return;
  items = activeFsmNameList->fields._items;
  v11 = Method_System_Collections_Generic_List_string__Add__;
  ++activeFsmNameList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B8880C(v5, v6);
  size = activeFsmNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      activeFsmNameList,
      (Il2CppObject *)fsmName,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    activeFsmNameList->fields._size = size + 1;
    v13[4] = (Il2CppClass *)fsmName;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)fsmName, v8, v9);
  }
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4A5DF31 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
    byte_4A5DF31 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1B8880C(0LL, v5);
  System_Collections_Generic_Queue_object___Enqueue(
    callBackQueue,
    (Il2CppObject *)callBack,
    (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4A5DF32 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__);
    byte_4A5DF32 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v3);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1B8880C(0LL, v4);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_object___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_366F9FC *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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

  if ( (byte_4A5DF2C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4A5DF2C = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1B8880C(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x0

  if ( (byte_4A5DF30 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4A5DF30 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1B8880C(0LL, v5);
  return System_Collections_Generic_List_object___Remove(
           (System_Collections_Generic_List_object__o *)activeFsmNameList,
           (Il2CppObject *)fsmName,
           (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_string__Remove__);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__init(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  BattleActorControl_o *battleActor; // x0
  int32_t wave; // w20
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x8
  int32_t size; // w2
  int v7; // w9

  if ( (byte_4A5DF2E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
    byte_4A5DF2E = 1;
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
  v7 = activeFsmNameList->fields._version + 1;
  activeFsmNameList->fields._size = 0;
  activeFsmNameList->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)activeFsmNameList->fields._items, 0, size, 0LL);
  battleActor = (BattleActorControl_o *)this->fields._callBackQueue;
  if ( !battleActor )
LABEL_12:
    sub_1B8880C(battleActor, method);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)battleActor,
    (const MethodInfo_366F52C *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19D1C88;
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
        v11 = sub_1B88668(v6);
        v12 = sub_1B88B24(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19D1D84;
          else
            v9 = (Il2CppObject *)sub_19D1D48;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19D1CC4;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19D1C98;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19D1C68;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D1C20;
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
  return (System_IAsyncResult_o *)sub_1B88564(this, &v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  ServantStatusBattleListViewItem_o *p_table; // x21
  struct System_Collections_Hashtable_o *table; // t1
  System_Collections_Hashtable_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1

  if ( (byte_4A5DF2B & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    byte_4A5DF2B = 1;
  }
  table = this->fields.table;
  p_table = (ServantStatusBattleListViewItem_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_62286464(v10, 0LL);
    p_table->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B88554(p_table, (int32_t)v10, v11, v12);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_1B8880C(0LL, v13);
  }
  (*(void (__fastcall **)(void *, System_String_o *, Il2CppObject *, _QWORD))(*(_QWORD *)klass + 680LL))(
    klass,
    key,
    obj,
    *(_QWORD *)(*(_QWORD *)klass + 688LL));
}


void __fastcall BattleActorControl_EventClass__Proc(BattleActorControl_EventClass_o *this, const MethodInfo *method)
{
  struct BattleActorControl_EndCallEvent_o *eventcall; // x8

  eventcall = this->fields.eventcall;
  if ( !eventcall )
    sub_1B8880C(this, method);
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

  if ( (byte_4A5DF2A & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A5DF2A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1B8880C(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v9, 0LL);
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


void __fastcall BattleActorControl__DestroyAuraEffect_d__330___ctor(
        BattleActorControl__DestroyAuraEffect_d__330_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__330__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__330_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__DestroyAuraEffect_d__330_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *Component_object; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  BattleActorControl__DestroyAuraEffect_d__330_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__330_o *v11; // x20
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
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v32; // x8
  unsigned __int64 v33; // x22
  UnityEngine_Object_o *v34; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *effectObject; // x20
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__330_o *v39; // x20
  unsigned __int64 v40; // x24
  UnityEngine_Object_o *v41; // x21
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v43; // x8
  BattleActorControl__DestroyAuraEffect_d__330_o *v44; // x21
  unsigned __int64 v45; // x25
  UnityEngine_Object_o *v46; // x22
  UnityEngine_Object_o *v47; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v49; // 0:x0.8

  v4 = this;
  if ( (byte_4A5DF3C & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_ParticleSystem___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF3C = 1;
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
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)v4->fields.effectObject;
    v4->fields.__1__state = -1;
    if ( !this )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_Object__op_Inequality(
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
          this = (BattleActorControl__DestroyAuraEffect_d__330_o *)v4->fields.effectObject;
          if ( this )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712);
            if ( this )
            {
              _2__current = this->fields.__2__current;
              v39 = this;
              if ( (int)_2__current >= 1 )
              {
                v40 = 0LL;
                while ( 1 )
                {
                  if ( v40 >= (unsigned int)_2__current )
                    goto LABEL_89;
                  v41 = (UnityEngine_Object_o *)*((_QWORD *)&v39->fields.effectObject + v40);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_Object__op_Equality(
                                                                             v41,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !v41 )
                      goto LABEL_90;
                    materials = (System_Collections_ICollection_o *)UnityEngine_Renderer__get_materials(
                                                                      (UnityEngine_Renderer_o *)v41,
                                                                      0LL);
                    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_Renderer__get_materials(
                                                                                 (UnityEngine_Renderer_o *)v41,
                                                                                 0LL);
                      if ( !this )
                        goto LABEL_90;
                      v43 = this->fields.__2__current;
                      v44 = this;
                      if ( (int)v43 >= 1 )
                        break;
                    }
                  }
LABEL_84:
                  LODWORD(_2__current) = v39->fields.__2__current;
                  if ( (__int64)++v40 >= (int)_2__current )
                    goto LABEL_85;
                }
                v45 = 0LL;
                while ( v45 < (unsigned int)v43 )
                {
                  v46 = (UnityEngine_Object_o *)*((_QWORD *)&v44->fields.effectObject + v45);
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_Object__op_Equality(
                                                                             v46,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_69459380(v46, 0LL);
                  }
                  LODWORD(v43) = v44->fields.__2__current;
                  if ( (__int64)++v45 >= (int)v43 )
                    goto LABEL_84;
                }
LABEL_89:
                sub_1B88814(this, method);
              }
LABEL_85:
              v47 = (UnityEngine_Object_o *)v4->fields.effectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_69459380(v47, 0LL);
              return 0;
            }
          }
LABEL_90:
          sub_1B8880C(this, method);
        }
        return 0;
      }
    }
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)v4->fields.effectObject;
    if ( !this )
      goto LABEL_90;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v4->fields._particleArray_5__2,
      (int32_t)ComponentsInChildren_object,
      v8,
      v9);
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)v4->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_90;
    v4->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)BasicHelper__ExcludeNull_object_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
    if ( !this )
      goto LABEL_90;
    klass = this->klass;
    v11 = this;
    v12 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_ParticleSystem__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_18;
      }
      v14 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_18:
      v14 = sub_1BDA590(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
    }
    v16 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__330_o *, _QWORD))v14)(
            v11,
            *(_QWORD *)(v14 + 8));
    if ( !v16 )
      sub_1B8880C(0LL, v15);
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
        v20 = sub_1BDA590(v16, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v24 = sub_1BDA590(v16, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
      }
      v25 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v16, *(_QWORD *)(v24 + 8));
      if ( !v25 )
        sub_1B8880C(0LL, v26);
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main(v25, 0LL).fields.m_ParticleSystem;
      v49.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v49, 0, 0LL);
    }
    v27 = *(_QWORD *)v16;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v16 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v16 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_41;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_41:
      v30 = sub_1BDA590(v16, System_IDisposable_TypeInfo, 0LL);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__330_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(
                                                               v16,
                                                               *(_QWORD *)(v30 + 8));
  }
  if ( v4->fields._aliveCount_5__3 <= 0 )
  {
    v4->fields._particleArray_5__2 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._particleArray_5__2, 0, v2, v3);
    goto LABEL_60;
  }
  particleArray_5__2 = v4->fields._particleArray_5__2;
  v4->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_90;
  v32 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    while ( v33 < (unsigned int)v32 )
    {
      v34 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v33];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v34 )
          goto LABEL_90;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v34, 0LL) )
          UnityEngine_ParticleSystem__Stop_69739868((UnityEngine_ParticleSystem_o *)v34, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__330_o *)UnityEngine_ParticleSystem__IsAlive_69740136(
                                                                   (UnityEngine_ParticleSystem_o *)v34,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v4->fields._aliveCount_5__3;
      }
      LODWORD(v32) = particleArray_5__2->max_length;
      if ( (__int64)++v33 >= (int)v32 )
        goto LABEL_58;
    }
    goto LABEL_89;
  }
LABEL_58:
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(p__2__current, 0, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__330__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__330_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__330__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__330_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__DestroyAuraEffect_d__330_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__330__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__330_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__330__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__330_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__356___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__356_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__356__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__356_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__DestroyEffectOnParticleStop_d__356_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int aliveCount_5__3; // w8
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v13; // x8
  unsigned __int64 v14; // x22
  UnityEngine_Object_o *v15; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A5DF3D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF3D = 1;
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
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_2ECFB58 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____76153696);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    p_particleArray_5__2 = &v4->fields._particleArray_5__2;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&v4->fields._particleArray_5__2,
      (int32_t)ComponentsInChildren_object,
      v9,
      v10);
    if ( !v4->fields._particleArray_5__2 )
      goto LABEL_32;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    sub_1B8880C(this, method);
  }
  particleArray_5__2 = v4->fields._particleArray_5__2;
  v4->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_35;
  v13 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v13 >= 1 )
  {
    v14 = 0LL;
    do
    {
      if ( v14 >= (unsigned int)v13 )
        sub_1B88814(this, method);
      v15 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v14];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)UnityEngine_Object__op_Equality(v15, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v15 )
          goto LABEL_35;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v15, 0LL) )
          UnityEngine_ParticleSystem__Stop_69739868((UnityEngine_ParticleSystem_o *)v15, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__356_o *)UnityEngine_ParticleSystem__IsAlive_69740136(
                                                                             (UnityEngine_ParticleSystem_o *)v15,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v4->fields._aliveCount_5__3;
      }
      LODWORD(v13) = particleArray_5__2->max_length;
      ++v14;
    }
    while ( (__int64)v14 < (int)v13 );
  }
  v4->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(p__2__current, 0, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__356__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__356_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__356__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__356_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__356_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__356__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__356_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__356__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__356_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *v4; // x20
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v10; // x0
  struct BattlePerformance_o *v11; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *v12; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  BattleServantData_o *v15; // x20
  int v16; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *v18; // x20
  unsigned __int64 v19; // x26
  BattleActorControl_o *ServantActor; // x21
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  Il2CppObject *Instance; // x20
  System_Action_object__o *v24; // x21
  struct BattlePerformance_o *v25; // x8
  int i_5__2; // w8
  ServantStatusBattleListViewItem_o *v27; // x20
  UnityEngine_WaitForEndOfFrame_o *v28; // x19
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v30; // w2
  int32_t v31; // w3
  int v32; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4A5DF3E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_USSequencer__TypeInfo);
    sub_1B885B0(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__);
    sub_1B885B0(&BattlePerformance_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1B885B0(&StringLiteral_13275/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)sub_1B885B0(&StringLiteral_24600/*"wait"*/);
    byte_4A5DF3E = 1;
  }
  v32 = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleServantData__IsTDAppearance(
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
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
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
              BattlePerformance__setupCameraFov(performance, v10->static_fields->DefaultFov, 0LL);
              v11 = _4__this->fields.performance;
              if ( v11 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)v11->fields.actorcamera;
                if ( this )
                {
                  this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                  v12 = this;
                  if ( !byte_4A55CE1 )
                  {
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                    byte_4A55CE1 = 1;
                  }
                  if ( v12 )
                  {
                    UnityEngine_Transform__set_localEulerAngles(
                      (UnityEngine_Transform_o *)v12,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0LL);
                    v32 = 1;
                    v13 = System_Int32__ToString((int32_t)&v32, 0LL);
                    v14 = System_String__Concat_61707032((System_String_o *)StringLiteral_13275/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v13, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ConstantMaster__getValue(v14, 0LL);
                    v15 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_43:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v15 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v15->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v15,
                          this,
                          _4__this,
                          v15->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v24 = (System_Action_object__o *)sub_1B887FC(System_Action_USSequencer__TypeInfo);
                        System_Action_object____ctor(
                          v24,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          0LL);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v24,
                            0LL);
                          v25 = _4__this->fields.performance;
                          if ( v25 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)v25->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleData__getStageEntity(
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
                      v16 = (int)this;
                      while ( 1 )
                      {
                        if ( !v15 )
                          goto LABEL_55;
                        if ( v16 == BattleServantData__getSvtId(v15, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_55;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_55;
                          _2__current = this->fields.__2__current;
                          v18 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_42:
                        ++v32;
                        v21 = System_Int32__ToString((int32_t)&v32, 0LL);
                        v22 = System_String__Concat_61707032((System_String_o *)StringLiteral_13275/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v21, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ConstantMaster__getValue(
                                                                                         v22,
                                                                                         0LL);
                        v15 = _4__this->fields.battleSvtData;
                        v16 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_43;
                      }
                      v19 = 0LL;
                      while ( 1 )
                      {
                        if ( v19 >= (unsigned int)_2__current )
                          sub_1B88814(this, method);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v18->fields.__4__this + v19),
                                         0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].fields.__4__this) )
                          {
                            LOWORD(this[17].fields.__4__this) = 256;
                            BattleActorControl__playAnimation_43649396(
                              ServantActor,
                              (System_String_o *)StringLiteral_24600/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_43649396(
                              ServantActor,
                              (System_String_o *)StringLiteral_24600/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v18->fields.__2__current;
                        if ( (__int64)++v19 >= (int)_2__current )
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
    sub_1B8880C(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    v4->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 < 3 )
      goto LABEL_52;
    v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v28, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v28;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(p__2__current, (int32_t)v28, v30, v31);
    *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
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
      v27 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(v27, 0, v2, v3);
      result = 1;
      *(_DWORD *)&v27[-1].fields.isMine = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__269_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__269__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__269_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DF33 & 1) == 0 )
  {
    sub_1B885B0(&BattleActorControl___c_TypeInfo);
    byte_4A5DF33 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleActorControl___c_TypeInfo->static_fields->__9 = (struct BattleActorControl___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleActorControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__138_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__138_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4A5DF35 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1B885B0(&System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo);
    byte_4A5DF35 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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
    p_method = sub_1BDA590(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__138_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4A5DF36 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    byte_4A5DF36 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_object_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__194_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__369_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.isSaveAnimation;
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__370_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__370_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__137_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  BattleActorControl___c_o *v4; // x20

  if ( (byte_4A5DF34 & 1) == 0 )
  {
    sub_1B885B0(&BattleFBXComponent_TypeInfo);
    this = (BattleActorControl___c_o *)sub_1B885B0(&StringLiteral_17357/*"body"*/);
    byte_4A5DF34 = 1;
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
    v4 = this;
    if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    if ( !v4 )
      goto LABEL_14;
    if ( System_String__Contains((System_String_o *)v4, BattleFBXComponent_TypeInfo->static_fields->levelMarker, 0LL) )
    {
      this = (BattleActorControl___c_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)x, 0LL);
      if ( this )
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17357/*"body"*/, 0LL);
LABEL_14:
      sub_1B8880C(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__329_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4A5DF37 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF37 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__290_object____cctor(const MethodInfo_304149C *method)
{
  BattleActorControl___c__290_T__c *klass; // x0
  __int64 _0_BattleActorControl___c__290_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BattleActorControl___c__290_T__c *v7; // x0
  __int64 _2_BattleActorControl___c__290_T; // x0
  BattleActorControl___c__290_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BattleActorControl___c__290_T__c *)sub_1BDA48C(klass);
  _0_BattleActorControl___c__290_T = (__int64)klass->rgctx_data->_0_BattleActorControl___c__290_T_;
  if ( (*(_BYTE *)(_0_BattleActorControl___c__290_T + 309) & 1) == 0 )
    _0_BattleActorControl___c__290_T = sub_1BDA48C(_0_BattleActorControl___c__290_T);
  v4 = (Il2CppObject *)sub_1B887FC(_0_BattleActorControl___c__290_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BDA48C(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BattleActorControl___c__290_T__c *)sub_1BDA48C(v7);
  _2_BattleActorControl___c__290_T = (__int64)v7->rgctx_data->_2_BattleActorControl___c__290_T_;
  if ( (*(_BYTE *)(_2_BattleActorControl___c__290_T + 309) & 1) == 0 )
    _2_BattleActorControl___c__290_T = sub_1BDA48C(_2_BattleActorControl___c__290_T);
  **(_QWORD **)(_2_BattleActorControl___c__290_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleActorControl___c__290_T__c *)sub_1BDA48C(v9);
  v10 = (__int64)v9->rgctx_data->_2_BattleActorControl___c__290_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BDA48C(v10);
  sub_1B88554(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BattleActorControl___c__290_object____ctor(
        BattleActorControl___c__290_T__o *this,
        const MethodInfo_3041558 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__290_object____UpdateMaterialsOnRenderders_b__290_0(
        BattleActorControl___c__290_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3041560 *method)
{
  if ( (byte_4A60C21 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60C21 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__290_object____UpdateMaterialsOnRenderders_b__290_1(
        BattleActorControl___c__290_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_30415BC *method)
{
  if ( (byte_4A60C22 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A60C22 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass137_0___ctor(
        BattleActorControl___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass137_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_1B8880C(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass138_0___ctor(
        BattleActorControl___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass138_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass138_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_1B8880C(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass166_0___ctor(
        BattleActorControl___c__DisplayClass166_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass166_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass166_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  System_Object_array *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5DF38 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_FsmTransition___);
    sub_1B885B0(&System_Func_FsmTransition__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__1__);
    byte_4A5DF38 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !fsm )
    sub_1B8880C(v5, v6);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = (System_Object_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_1B887FC(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v10, v11);
  }
  return BasicHelper__Any_object__48672124(
           v9,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass166_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass166_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1B8880C(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass264_0___ctor(
        BattleActorControl___c__DisplayClass264_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass264_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass264_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass264_0_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *targets; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  BattleActorControl___c__DisplayClass264_0_o *v12; // x1
  Il2CppClass **v13; // x0

  v4 = this;
  if ( (byte_4A5DF39 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass264_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4A5DF39 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass264_0_o *)_4__this->fields.performance) == 0LL
    || (targets = (System_Collections_Generic_List_object__o *)v4->fields.targets,
        this = (BattleActorControl___c__DisplayClass264_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0LL),
        !targets)
    || (items = targets->fields._items,
        v10 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++targets->fields._version,
        !items) )
  {
    sub_1B8880C(this, *(_QWORD *)&x);
  }
  size = targets->fields._size;
  v12 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      targets,
      (Il2CppObject *)this,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    targets->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
  }
}


void __fastcall BattleActorControl___c__DisplayClass277_0___ctor(
        BattleActorControl___c__DisplayClass277_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass277_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass277_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass277_0_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v6; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v8; // x20
  int32_t shadowEffectId; // w22
  BattleActorControl___c__DisplayClass277_0_o *v10; // x21
  BattleActorControl___c__DisplayClass277_0_o *v11; // x23
  int32_t v12; // w24
  int32_t LimitCount; // w25
  UnityEngine_GameObject_o *EffectToNode_42694176; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleActorControl_o *v17; // x8
  UnityEngine_Object_o *v18; // x20
  struct BattleActorControl_o *v19; // x8
  BattleActorControl___c__DisplayClass277_0_o *v20; // x20
  struct BattleActorControl_o *v21; // x8
  BattleActorControl___c__DisplayClass277_0_o *v22; // x20
  struct BattleActorControl_o *v23; // x8
  BattleActorControl___c__DisplayClass277_0_o *v24; // x20
  struct BattleActorControl_o *v25; // x8

  v2 = this;
  if ( (byte_4A5DF3A & 1) == 0 )
  {
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF3A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    this = (BattleActorControl___c__DisplayClass277_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
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
        this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v8 = v2->fields.__4__this;
          if ( !v8 )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass277_0_o *)v8->fields.shadowObj;
          if ( !this )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          shadowEffectId = v2->fields.shadowEffectId;
          v10 = this;
          this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v11 = this;
          this = (BattleActorControl___c__DisplayClass277_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v12 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectToNode_42694176 = BattleEffectUtility__loadEffectToNode_42694176(
                                    (UnityEngine_GameObject_o *)v10,
                                    shadowEffectId,
                                    (UnityEngine_GameObject_o *)v11,
                                    v12,
                                    LimitCount,
                                    0LL);
          v8->fields.specialShadowObj = EffectToNode_42694176;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&v8->fields.specialShadowObj,
            (int32_t)EffectToNode_42694176,
            v15,
            v16);
          v17 = v2->fields.__4__this;
          if ( !v17 )
            goto LABEL_46;
          v18 = (UnityEngine_Object_o *)v17->fields.specialShadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v19 = v2->fields.__4__this;
            if ( v19 )
            {
              this = (BattleActorControl___c__DisplayClass277_0_o *)v19->fields.specialShadowObj;
              if ( this )
              {
                this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                v20 = this;
                if ( !byte_4A55CE1 )
                {
                  this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                  byte_4A55CE1 = 1;
                }
                if ( v20 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v20,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  v21 = v2->fields.__4__this;
                  if ( v21 )
                  {
                    this = (BattleActorControl___c__DisplayClass277_0_o *)v21->fields.specialShadowObj;
                    if ( this )
                    {
                      this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                      v22 = this;
                      if ( !byte_4A55CE7 )
                      {
                        this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
                        byte_4A55CE7 = 1;
                      }
                      if ( v22 )
                      {
                        UnityEngine_Transform__set_localRotation(
                          (UnityEngine_Transform_o *)v22,
                          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                          0LL);
                        v23 = v2->fields.__4__this;
                        if ( v23 )
                        {
                          this = (BattleActorControl___c__DisplayClass277_0_o *)v23->fields.specialShadowObj;
                          if ( this )
                          {
                            this = (BattleActorControl___c__DisplayClass277_0_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                            v24 = this;
                            if ( !byte_4A55CE6 )
                            {
                              this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
                              byte_4A55CE6 = 1;
                            }
                            if ( v24 )
                            {
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)v24,
                                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                                0LL);
                              v25 = v2->fields.__4__this;
                              if ( v25 )
                              {
                                this = (BattleActorControl___c__DisplayClass277_0_o *)v25->fields.specialShadowObj;
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
            sub_1B8880C(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass289_0___ctor(
        BattleActorControl___c__DisplayClass289_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass289_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass289_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass289_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A5DF3B & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass289_0_o *)sub_1B885B0(&StringLiteral_16540/*"_fade"*/);
    byte_4A5DF3B = 1;
  }
  if ( !material )
    sub_1B8880C(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16540/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass328_0___ctor(
        BattleActorControl___c__DisplayClass328_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass328_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass328_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass369_0___ctor(
        BattleActorControl___c__DisplayClass369_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass369_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass369_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass369_0_o *)this->fields.component) == 0LL )
    sub_1B8880C(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass372_0___ctor(
        BattleActorControl___c__DisplayClass372_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass372_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass372_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass372_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass372_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__328___ctor(
        BattleActorControl__coAddAura_d__328_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__328__MoveNext(
        BattleActorControl__coAddAura_d__328_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__coAddAura_d__328_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  Il2CppObject *Item; // x21
  Il2CppObject *Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x21
  int32_t v10; // w2
  int32_t v11; // w3
  Il2CppObject *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleActorControl___c__DisplayClass328_0_o *_8__1; // x22
  int32_t id; // w21
  System_Action_o *v17; // x23
  BattlePerformance_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  ServantStatusBattleListViewItem_o *v21; // x19
  bool result; // w0
  struct BattleActorControl___c__DisplayClass328_0_o *v23; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *v30; // x8
  struct System_String_o *Empty; // x1
  int v32; // w22
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
  int32_t v44; // w3
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
  int32_t v57; // w3
  UnityEngine_Object_o *Component_object; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  struct BattlePerformance_o *performance; // x8
  struct BattleActorControl_o *actorcamera; // x1
  Il2CppObject *v63; // x0
  int32_t v64; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t EffectFolder; // [xsp+8h] [xbp-68h] BYREF
  int32_t v66; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5DF3F & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_TypeInfo);
    sub_1B885B0(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1B885B0(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1B885B0(&Method_UnityEngine_GameObject_AddComponent_BillBoard___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&Method_BattleActorControl___c__DisplayClass328_0__coAddAura_b__0__);
    sub_1B885B0(&BattleActorControl___c__DisplayClass328_0_TypeInfo);
    sub_1B885B0(&StringLiteral_5866/*"Effect/weapon/{0}"*/);
    this = (BattleActorControl__coAddAura_d__328_o *)sub_1B885B0(&StringLiteral_5869/*"Effect/weapon/{0}/{1}"*/);
    byte_4A5DF3F = 1;
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
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__328_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v4->fields.auraEffectId,
           (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__328_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_65;
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__328_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__328_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_65;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    v4->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    p_effectEntity_5__2 = &v4->fields._effectEntity_5__2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._effectEntity_5__2, (int32_t)Entity, v10, v11);
    if ( !v4->fields._effectEntity_5__2 )
    {
LABEL_41:
      v45 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1B887FC(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v45, _4__this, 0LL);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v4->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !byte_4A55CE1 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->zeroVector.fields.x;
        y = static_fields->zeroVector.fields.y;
        z = static_fields->zeroVector.fields.z;
        ActorSvtId = BattleActorControl__getActorSvtId(_4__this, 0LL);
        LimitCount = BattleActorControl__getLimitCount(_4__this, 0LL);
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
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleActorControl__coAddAura_d__328_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_61;
        if ( v4->fields.priority > _4__this->fields._currentPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0LL);
          _4__this->fields._currentPriority_k__BackingField = v4->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)EffectToNode,
                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl__coAddAura_d__328_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__328_o *)UnityEngine_GameObject__AddComponent_object_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_2ECEDD0 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_65;
            Component_object = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_65;
            actorcamera = (struct BattleActorControl_o *)performance->fields.actorcamera;
            this->fields.__4__this = actorcamera;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, (int32_t)actorcamera, v59, v60);
          }
          else if ( !Component_object )
          {
            goto LABEL_65;
          }
          BillBoard__setFlip((BillBoard_o *)Component_object, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__328_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v4->fields.auraEffectId,
              (Il2CppObject *)EffectToNode,
              (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_61:
            v4->fields._effectEntity_5__2 = 0LL;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._effectEntity_5__2, 0, v56, v57);
            return 0;
          }
        }
      }
LABEL_65:
      sub_1B8880C(this, method);
    }
    v12 = (Il2CppObject *)sub_1B887FC(BattleActorControl___c__DisplayClass328_0_TypeInfo);
    System_Object___ctor(v12, 0LL);
    v4->fields.__8__1 = (struct BattleActorControl___c__DisplayClass328_0_o *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v12, v13, v14);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_65;
    _8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_65;
    id = (*p_effectEntity_5__2)->fields.id;
    v17 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      v17,
      (Il2CppObject *)_8__1,
      Method_BattleActorControl___c__DisplayClass328_0__coAddAura_b__0__,
      0LL);
    v18 = _4__this->fields.performance;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v17, v18, 0LL);
  }
  this = (BattleActorControl__coAddAura_d__328_o *)&v4->fields.__8__1;
  v23 = v4->fields.__8__1;
  if ( !v23 )
    goto LABEL_65;
  if ( v23->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  v4->fields.__8__1 = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
  effectEntity_5__2 = v4->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_41;
  v30 = string_TypeInfo->static_fields;
  Empty = v30->Empty;
  v4->fields._effectPath_5__3 = v30->Empty;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._effectPath_5__3, (int32_t)Empty, v27, v28);
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__328_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__328_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_65;
  v32 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v32 )
  {
    v66 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__328_o *)j_il2cpp_value_box_0(int_TypeInfo, &v66, v34, v35, v36);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_65;
    v37 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder, v38, v39, v40);
    v42 = System_String__Format_61721404((System_String_o *)StringLiteral_5869/*"Effect/weapon/{0}/{1}"*/, v37, v41, 0LL);
  }
  else
  {
    v64 = WeaponGroup;
    v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v64, v34, v35, v36);
    v42 = System_String__Format((System_String_o *)StringLiteral_5866/*"Effect/weapon/{0}"*/, v63, 0LL);
  }
  v4->fields._effectPath_5__3 = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._effectPath_5__3, (int32_t)v42, v43, v44);
LABEL_22:
  this = (BattleActorControl__coAddAura_d__328_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__328_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     v4->fields._effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4->fields.__2__current = 0LL;
    v21 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B88554(v21, 0, v19, v20);
    *(_DWORD *)&v21[-1].fields.isMine = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__328_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.auraEffectId,
          (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v4->fields._effectPath_5__3 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._effectPath_5__3, 0, v25, v26);
    goto LABEL_41;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__328__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__328_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__328__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__328_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__coAddAura_d__328_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__328__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__328_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__328__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__328_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__335___ctor(
        BattleActorControl__colShiftServantChange_d__335_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServantChange_d__335__MoveNext(
        BattleActorControl__colShiftServantChange_d__335_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colShiftServantChange_d__335_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x0
  BattleActorControl__colShiftServantChange_d__335_o **p_fadeComp_5__2; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  DefCoroutine_c *v12; // x0
  Il2CppObject *milliSecTwo; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  ServantStatusBattleListViewItem_o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  int v19; // w8
  struct BattleActionData_ShiftServant_o *v20; // x8
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  struct BattlePerformance_o *v29; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v31; // x8
  struct BattleData_o *data; // x8
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *v36; // x21
  System_Collections_Generic_List_int__o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *gameObject; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  UnityEngine_Color_o v44; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v45; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A5DF40 & 1) == 0 )
  {
    sub_1B885B0(&DefCoroutine_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__colShiftServantChange_d__335_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DF40 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)v2->fields.shiftSvt;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__335_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                     this,
                                                                     _4__this->fields.battleSvtData,
                                                                     this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      shiftSvt = v2->fields.shiftSvt;
      if ( !shiftSvt )
        goto LABEL_78;
      if ( !shiftSvt->fields.isChange )
        goto LABEL_57;
      performance = _4__this->fields.performance;
      if ( !performance )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v2->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_object;
      p_fadeComp_5__2 = (BattleActorControl__colShiftServantChange_d__335_o **)&v2->fields._fadeComp_5__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._fadeComp_5__2, (int32_t)Component_object, v8, v9);
      if ( !v2->fields.isShift )
        goto LABEL_13;
      this = *p_fadeComp_5__2;
      if ( !*p_fadeComp_5__2 )
        goto LABEL_78;
      v44.fields.r = 1.0;
      v44.fields.g = 1.0;
      v44.fields.b = 1.0;
      v44.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v44, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v12 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v12 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (Il2CppObject *)v12->static_fields->milliSecTwo;
      v2->fields.__2__current = milliSecTwo;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, (int32_t)milliSecTwo, v10, v11);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v16, 0, v17, v18);
      v19 = 2;
      goto LABEL_77;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      v20 = v2->fields.shiftSvt;
      if ( !v20 )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_41911748((BattlePerformance_o *)this, v20->fields.loadedAssetArgs, 0, 0LL);
      v2->fields.__2__current = 0LL;
      v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v16, 0, v21, v22);
      v19 = 3;
      goto LABEL_77;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_28:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colShiftServantChange_d__335_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v16, 0, v23, v24);
        v19 = 4;
LABEL_77:
        *(_DWORD *)&v16[-1].fields.isMine = v19;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_78;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      v36 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v36, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v36, 0LL);
LABEL_71:
        v37 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v2->fields._moveEffect_5__3 = v37;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, (int32_t)v37, v38, v39);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
            sub_1B88814(this, method);
          this = (BattleActorControl__colShiftServantChange_d__335_o *)motionFSM->m_Items[0];
          if ( this )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_69459568(gameObject, 0LL);
            v2->fields.__2__current = 0LL;
            v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
            sub_1B88554(v16, 0, v42, v43);
            v19 = 5;
            goto LABEL_77;
          }
        }
      }
      goto LABEL_78;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_28;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
LABEL_35:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colShiftServantChange_d__335_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v16, 0, v25, v26);
        v19 = 6;
        goto LABEL_77;
      }
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v2->fields.isShift )
        goto LABEL_45;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)v2->fields._fadeComp_5__2;
      if ( !this )
        goto LABEL_78;
      v45.fields.r = 1.0;
      v45.fields.g = 1.0;
      v45.fields.b = 1.0;
      v45.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v45, 0.2, 1, 0LL, 0, 0LL);
LABEL_45:
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_54;
      v29 = _4__this->fields.performance;
      if ( !v29 )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)v29->fields.data;
      if ( !this )
        goto LABEL_78;
      BattleData__replaceCommandCard(
        (BattleData_o *)this,
        battleSvtData->fields.uniqueId,
        battleSvtData->fields.uniqueId,
        0LL);
      v31 = _4__this->fields.performance;
      if ( !v31 )
        goto LABEL_78;
      data = v31->fields.data;
      if ( !data )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__335_o *)data->fields.logic;
      if ( !this )
        goto LABEL_78;
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_54:
      if ( v2->fields._moveEffect_5__3 )
      {
        v2->fields.__2__current = 0LL;
        v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v16, 0, v27, v28);
        v19 = 7;
        goto LABEL_77;
      }
LABEL_56:
      v2->fields._fadeComp_5__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._fadeComp_5__2, 0, v27, v28);
      v2->fields._moveEffect_5__3 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, 0, v33, v34);
LABEL_57:
      this = (BattleActorControl__colShiftServantChange_d__335_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__335_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0LL)) == 0LL )
      {
LABEL_78:
        sub_1B8880C(this, method);
      }
      BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm((BattleFieldEnvironmentData_o *)this, 0LL);
      return 0;
    case 6:
      v2->fields.__1__state = -1;
      goto LABEL_35;
    case 7:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_56;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__335__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__335_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__335__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__335_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__colShiftServantChange_d__335_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__335__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__335_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__335__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__335_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__334___ctor(
        BattleActorControl__colShiftServant_d__334_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__334__MoveNext(
        BattleActorControl__colShiftServant_d__334_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v5; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  Il2CppObject **v10; // x19
  int32_t v11; // w2
  int32_t v12; // w3
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_10:
      sub_1B8880C(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  this->fields.__2__current = 0LL;
  v10 = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10, 0, v11, v12);
  *((_DWORD *)v10 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__334__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__334_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__334__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__334_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__colShiftServant_d__334_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__334__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__334_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__334__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__334_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__323___ctor(
        BattleActorControl__collChangeAppearance_d__323_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__323__MoveNext(
        BattleActorControl__collChangeAppearance_d__323_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__323_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *v13; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  int v16; // w8
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  struct BattleServantData_o *v21; // x8
  ServantAssetArgs_o *v22; // x21
  _BOOL4 isForceAppearance; // w22
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3

  v2 = this;
  if ( (byte_4A5DF41 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__collChangeAppearance_d__323_o *)sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    byte_4A5DF41 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__323_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__323_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, 0, v5, v6);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
      this = (BattleActorControl__collChangeAppearance_d__323_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_43;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__323_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_43;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_18:
      v10 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v10;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v10, v11, v12);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v13 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v13, 0, v14, v15);
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
      ServantAssetLoadManager__unloadBattleActor(LoadedAssetArgs_k__BackingField, 0LL);
      v2->fields.__2__current = 0LL;
      v13 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v13, 0, v19, v20);
      v16 = 3;
      goto LABEL_41;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__323_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__323_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__323_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0LL);
      v21 = _4__this->fields.battleSvtData;
      if ( !v21 )
        goto LABEL_43;
      v22 = (ServantAssetArgs_o *)this;
      isForceAppearance = v21->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadBattleActor(v22, isForceAppearance, 0LL);
LABEL_32:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__collChangeAppearance_d__323_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v13 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v13, 0, v24, v25);
        v16 = 4;
LABEL_41:
        *(_DWORD *)&v13[-1].fields.isMine = v16;
        return 1;
      }
      if ( !_4__this )
LABEL_43:
        sub_1B8880C(this, method);
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0LL;
        v13 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v13, 0, v26, v27);
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
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__323__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__323_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__323__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__323_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__collChangeAppearance_d__323_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__323__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__323_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__323__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__323_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__318___ctor(
        BattleActorControl__colloadDressServant_d__318_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__318__MoveNext(
        BattleActorControl__colloadDressServant_d__318_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__318_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  int32_t v5; // w2
  int32_t v6; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  ServantStatusBattleListViewItem_o *v16; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  int v19; // w8
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 flg; // w21
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  int v25; // w8
  ServantAssetArgs_o *updated; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  ServantAssetArgs_o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w2
  int32_t v33; // w3

  v2 = this;
  if ( (byte_4A5DF42 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl__colloadDressServant_d__318_o *)sub_1B885B0(&StringLiteral_5476/*"END_LOAD"*/);
    byte_4A5DF42 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_53;
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, 0, v8, v9);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_61;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_20:
      v13 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__3 = v13;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, (int32_t)v13, v14, v15);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v16, 0, v17, v18);
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
      ServantAssetLoadManager__unloadServant(LoadedAssetArgs_k__BackingField, 0LL);
      v2->fields.__2__current = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v23, v24);
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
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[3].fields._moveEffect_5__3) = v2->fields._dressId_5__2;
      updated = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(updated, 0, 0LL);
LABEL_33:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__318_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v2->fields.__2__current = 0LL;
      v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v16, 0, v27, v28);
      v19 = 4;
      break;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__318_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[3].fields._moveEffect_5__3) = -1;
      v29 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(v29, 0, 0LL);
LABEL_43:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__318_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v16, 0, v30, v31);
        v19 = 6;
      }
      else
      {
LABEL_47:
        if ( !_4__this )
LABEL_61:
          sub_1B8880C(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( v2->fields._moveEffect_5__3 )
        {
          v2->fields.__2__current = 0LL;
          v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(v16, 0, v32, v33);
          v19 = 7;
        }
        else
        {
LABEL_52:
          v2->fields._moveEffect_5__3 = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, 0, v32, v33);
LABEL_53:
          v2->fields.__2__current = 0LL;
          v16 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B88554(v16, 0, v5, v6);
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
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__3, 0LL);
      goto LABEL_52;
    case 8:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      BattleActorControl__sendEventFSM_43701988(_4__this, (System_String_o *)StringLiteral_5476/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  *(_DWORD *)&v16[-1].fields.isMine = v19;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__318__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__318_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__318__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__318_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__colloadDressServant_d__318_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__318__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__318_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__318__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__318_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__315___ctor(
        BattleActorControl__colloadTransformServant_d__315_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__315__MoveNext(
        BattleActorControl__colloadTransformServant_d__315_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadTransformServant_d__315_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v10; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v16; // x21
  const MethodInfo *v17; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x23
  int32_t v24; // w2
  int32_t v25; // w3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 _2__current_low; // x10
  __int64 v29; // x8
  System_Collections_IEnumerator_o *v30; // x0
  ServantStatusBattleListViewItem_o *v31; // x19
  int32_t v32; // w2
  int32_t v33; // w3
  int v34; // w8
  int32_t v35; // w2
  int32_t v36; // w3
  BattleActionData_ShiftServant_o *ShiftServant; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  UnityEngine_WaitForEndOfFrame_o *v41; // x20
  int32_t v42; // w2
  int32_t v43; // w3
  struct BattleActionData_ShiftServant_o *v44; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v47; // x1
  int32_t v48; // w2
  int32_t v49; // w3
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v51; // x8
  struct BattlePerformance_o *v52; // x8

  v2 = this;
  if ( (byte_4A5DF43 & 1) == 0 )
  {
    sub_1B885B0(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1B885B0(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
    sub_1B885B0(&System_GC_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&OptionManager_TypeInfo);
    sub_1B885B0(&ServantAssetLoadManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1B885B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (BattleActorControl__colloadTransformServant_d__315_o *)sub_1B885B0(&StringLiteral_5476/*"END_LOAD"*/);
    byte_4A5DF43 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_16:
      v6 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v6;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v6, v7, v8);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_78;
      if ( !motionFSM->max_length )
        sub_1B88814(this, method);
      v10 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v10, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(p__2__current, 0, v12, v13);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      v16 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_1B887FC(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v16, battleSvtData, v17);
      if ( !v16 )
        goto LABEL_78;
      svtId_k__BackingField = v16->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v16->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v16->fields._overwriteSvtVoiceId_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0LL);
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v23 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v23,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v23;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (int32_t)v23,
          v24,
          v25);
        this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_78;
      }
      v26 = *(_QWORD *)&this->fields.__1__state;
      v27 = Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v26 )
        goto LABEL_78;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v16,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v29 + 32) = v16;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v16, v21, v22);
      }
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_78;
      ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)this, 0LL);
      v2->fields._shiftSvtData_5__3 = ShiftServant;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._shiftSvtData_5__3, (int32_t)ShiftServant, v38, v39);
      shiftSvtData_5__3 = v2->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_41911748(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__315_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62753100(0LL);
        v41 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B887FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v41, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v41;
        v31 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(v31, (int32_t)v41, v42, v43);
        v34 = 2;
        goto LABEL_77;
      }
LABEL_51:
      v44 = v2->fields._shiftSvtData_5__3;
      if ( !v44 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      AfterSvtCache_k__BackingField = v44->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(AfterSvtCache_k__BackingField->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v47 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
            ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
            : 0LL;
      }
      else
      {
        v47 = 0LL;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v47, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_61:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__315_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
          BattleActorControl__setDir(_4__this, 0LL);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0LL);
          this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v51 = _4__this->fields.battleSvtData;
              if ( v51 )
              {
                this = (BattleActorControl__colloadTransformServant_d__315_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard((BattleData_o *)this, v51->fields.uniqueId, v51->fields.uniqueId, 0LL);
                  v52 = _4__this->fields.performance;
                  if ( v52 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__315_o *)v52->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v52->fields.data,
                        _4__this->fields.battleSvtData,
                        0LL);
                      this = (BattleActorControl__colloadTransformServant_d__315_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__315_o *)BattlePerformance__get_FieldEnvData(
                                                                                         (BattlePerformance_o *)this,
                                                                                         0LL);
                        if ( this )
                        {
                          BattleFieldEnvironmentData__RemoveBgmThenPlayCurrentBgm(
                            (BattleFieldEnvironmentData_o *)this,
                            0LL);
                          if ( v2->fields._moveEffect_5__2 )
                          {
                            v2->fields.__2__current = 0LL;
                            v31 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                            sub_1B88554(v31, 0, v35, v36);
                            v34 = 5;
                          }
                          else
                          {
LABEL_76:
                            v2->fields.__2__current = 0LL;
                            v31 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                            sub_1B88554(v31, 0, v35, v36);
                            v34 = 6;
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
        sub_1B8880C(this, method);
      }
      v2->fields.__2__current = 0LL;
      v31 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v31, 0, v48, v49);
      v34 = 4;
LABEL_77:
      *(_DWORD *)&v31[-1].fields.isMine = v34;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__315_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__315_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      v30 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v30;
      v31 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B88554(v31, (int32_t)v30, v32, v33);
      v34 = 3;
      goto LABEL_77;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      goto LABEL_51;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_61;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__MoveLoopEffectToActorObject(_4__this, v2->fields._moveEffect_5__2, 0LL);
      goto LABEL_76;
    case 6:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__sendEventFSM_43701988(_4__this, (System_String_o *)StringLiteral_5476/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__315__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__315_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__315__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__315_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__colloadTransformServant_d__315_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__315__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__315_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__315__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__315_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__207___ctor(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__207__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v16; // w3

  if ( (byte_4A5DF44 & 1) == 0 )
  {
    sub_1B885B0(&DefCoroutine_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4A5DF44 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1B8880C(0LL, method);
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
    v13 = (UnityEngine_WaitForSeconds_o *)sub_1B887FC(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v13, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v13;
    p__2__current = &this->fields.__2__current;
    sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v13, v15, v16);
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
    sub_1B88554((ServantStatusBattleListViewItem_o *)v11, (int32_t)v10, v2, v3);
    *((_DWORD *)v11 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__207__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__207__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__coroutinePostCallBack_d__207_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__207__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__207__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__207_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__321___ctor(
        BattleActorControl__waitChangeApp_d__321_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__321__MoveNext(
        BattleActorControl__waitChangeApp_d__321_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x0
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
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
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0LL);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)started, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_1B8880C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__321__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__321_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__321__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__321_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleActorControl__waitChangeApp_d__321_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__321__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__321_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__321__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__321_o *this,
        const MethodInfo *method)
{
  ;
}