void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A22860 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_TypeInfo, v1);
    byte_4A22860 = 1;
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
  System_Collections_Generic_Dictionary_int__object__o *v15; // x20
  int32_t v16; // w2
  int32_t v17; // w3
  BattleLogData_o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_Dictionary_int__object__o *v21; // x20
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_int__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  Il2CppObject *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w1
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_object__o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Hashtable_o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Hashtable_o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  System_Collections_Generic_Dictionary_object__object__o *v50; // x20
  int32_t v51; // w2
  int32_t v52; // w3

  if ( (byte_4A2285F & 1) == 0 )
  {
    sub_1B715CC(&BattleLogData_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__, v4);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo, v5);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v6);
    sub_1B715CC(&System_Collections_Hashtable_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v9);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B715CC(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v11);
    sub_1B715CC(&TranslucentActorVisualInfo_TypeInfo, v12);
    sub_1B715CC(&StringLiteral_16592/*"act"*/, v13);
    sub_1B715CC(&StringLiteral_1/*""*/, v14);
    byte_4A2285F = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v15 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v15,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v15;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.auraList, (int32_t)v15, v16, v17);
  this->fields.actorScale = 1.0;
  v18 = (BattleLogData_o *)sub_1B71818(BattleLogData_TypeInfo);
  BattleLogData___ctor_42571600(v18, (System_String_o *)StringLiteral_16592/*"act"*/, 90, 0LL);
  this->fields.battleLog = v18;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.battleLog, (int32_t)v18, v19, v20);
  v21 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v21,
    (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v21;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.buffLoopEffectDict, (int32_t)v21, v22, v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.reservedEffectBuffEffectIdList, (int32_t)v24, v25, v26);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v27 = (Il2CppObject *)sub_1B71818(TranslucentActorVisualInfo_TypeInfo);
  System_Object___ctor(v27, 0LL);
  this->fields.translucentActorVisualInfo = (struct TranslucentActorVisualInfo_o *)v27;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.translucentActorVisualInfo, (int32_t)v27, v28, v29);
  v30 = (int)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.prevAnimEffectTriggerKey, v30, v31, v32);
  v33 = (int)StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.partAnimationSaveKey, v33, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_BattleActorControl__o *)v36;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.noblePhantasmObjectVisibleCtrList,
    (int32_t)v36,
    v37,
    v38);
  v39 = (System_Collections_Hashtable_o *)sub_1B71818(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62084936(v39, 0LL);
  this->fields.EventList = v39;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.EventList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Hashtable_o *)sub_1B71818(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62084936(v42, 0LL);
  this->fields.CompleteList = v42;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.CompleteList, (int32_t)v42, v43, v44);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v50 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v50,
    (const MethodInfo_319E360 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v50;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.eventClassAddedEventDict, (int32_t)v50, v51, v52);
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

  if ( (byte_4A2284B & 1) == 0 )
  {
    sub_1B715CC(&System_Action_int__TypeInfo, method);
    sub_1B715CC(&Method_BasicHelper_ForEach_int___, v3);
    sub_1B715CC(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__351_0__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    byte_4A2284B = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_1B71828(0LL, method);
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
  v8 = (System_Action_int__o *)sub_1B71818(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v8,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__351_0__,
    0LL);
  BasicHelper__ForEach_int_(v7, (System_Action_T__o *)v8, (const MethodInfo_2E47E88 *)Method_BasicHelper_ForEach_int___);
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

  if ( (byte_4A2284A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Remove__, v8);
    byte_4A2284A = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                             (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024);
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
            sub_1B71830(buffLoopEffectDict, *(_QWORD *)&effectId);
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
        sub_1B71828(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_34B4738 *)Method_System_Collections_Generic_List_int__Remove__);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v8; // x20
  unsigned __int64 v9; // x22
  struct UnityEngine_GameObject_o **p_actorObject; // x25
  Il2CppObject *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v17; // x8

  v4 = this;
  if ( (byte_4A22825 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__, v5);
    this = (BattleActorControl_o *)sub_1B715CC(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__,
                                     v6);
    byte_4A22825 = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                   obj,
                                   (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_17;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v8 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0LL;
    p_actorObject = &this->fields.actorObject;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        sub_1B71830(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v11 = (Il2CppObject *)p_actorObject[v9];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v11,
                                       (const MethodInfo_34D05F0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
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
            v11,
            *(const MethodInfo_34D0260 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = v14 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v17 + 32) = v11;
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)v11, v12, v13);
        }
      }
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_17:
    sub_1B71828(this, obj);
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

  if ( (byte_4A22845 & 1) == 0 )
  {
    sub_1B715CC(&ChangeBattlePhaseOverwriteAnimation_TypeInfo, *(_QWORD *)&svtId);
    byte_4A22845 = 1;
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
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1B71818(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, v14);
    this->fields.overwriteAnim = v13;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.overwriteAnim, (int32_t)v13, v15, v16);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, v17);
      return;
    }
LABEL_9:
    sub_1B71828(Master, v10);
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

  if ( (byte_4A22849 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&effectId);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v5);
    byte_4A22849 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1B71828(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  }
  size = reservedEffectBuffEffectIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      reservedEffectBuffEffectIdList,
      effectId,
      *(const MethodInfo_34B323C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
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
  if ( (byte_4A227EF & 1) == 0 )
  {
    sub_1B715CC(&System_Action_string__TypeInfo, playedSoundArray);
    sub_1B715CC(&Method_BasicHelper_ForEach_string___, v5);
    sub_1B715CC(&Method_BattleActorControl__AddServantVoicePlayed_b__216_0__, v6);
    this = (BattleActorControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    byte_4A227EF = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1B71828(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v10 = (System_Action_object__o *)sub_1B71818(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v10,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__216_0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v10,
          (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_string___);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v11; // x20
  unsigned __int64 v12; // x25
  BattleActorControl_o *ServantActor; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  System_String_o *v16; // x0
  System_String_o *v17; // x0
  int v18; // [xsp+Ch] [xbp-44h] BYREF

  v2 = (BattleActorControl_o **)this;
  if ( (byte_4A22848 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&StringLiteral_13227/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v3);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_24541/*"wait"*/, v4);
    byte_4A22848 = 1;
  }
  v5 = v2[57];
  if ( !v5 )
    goto LABEL_26;
  LOBYTE(v5[1].fields.actorScale) = BYTE1(v5[1].fields.actorScale);
  v18 = 1;
  v6 = System_Int32__ToString((int32_t)&v18, 0LL);
  v7 = System_String__Concat_61505504((System_String_o *)StringLiteral_13227/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v6, 0LL);
  Value = ConstantMaster__getValue(v7, 0LL);
  if ( Value != -1 )
  {
    v9 = Value;
    while ( 1 )
    {
      this = v2[57];
      if ( !this )
        goto LABEL_26;
      if ( v9 == BattleServantData__getActorSvtId((BattleServantData_o *)this, 0LL) )
      {
        this = v2[53];
        if ( !this )
          goto LABEL_26;
        this = (BattleActorControl_o *)BattleActionData__getTargetIds((BattleActionData_o *)this, 0LL);
        if ( !this )
          goto LABEL_26;
        m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
        v11 = this;
        if ( (int)m_CancellationTokenSource >= 1 )
          break;
      }
LABEL_24:
      ++v18;
      v16 = System_Int32__ToString((int32_t)&v18, 0LL);
      v17 = System_String__Concat_61505504((System_String_o *)StringLiteral_13227/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v16, 0LL);
      v9 = ConstantMaster__getValue(v17, 0LL);
      if ( v9 == -1 )
        return;
    }
    v12 = 0LL;
    while ( 1 )
    {
      if ( v12 >= (unsigned int)m_CancellationTokenSource )
        sub_1B71830(this, method);
      this = v2[17];
      if ( !this )
        break;
      ServantActor = BattlePerformance__getServantActor(
                       (BattlePerformance_o *)this,
                       *((_DWORD *)&v11->fields.actorObject + v12),
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
        if ( BYTE1(this[1].fields.actorScale) )
        {
          LOBYTE(this[1].fields.actorScale) = BYTE1(this[1].fields.actorScale);
          BattleActorControl__playAnimation_43425612(ServantActor, (System_String_o *)StringLiteral_24541/*"wait"*/, 0, v14);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_43425612(ServantActor, (System_String_o *)StringLiteral_24541/*"wait"*/, 1, v15);
      }
      LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
      if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
        goto LABEL_24;
    }
LABEL_26:
    sub_1B71828(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_MaterialPropertyBlock_o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A227C3 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_MaterialPropertyBlock_TypeInfo, method);
    byte_4A227C3 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_1B71818(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0LL);
  this->fields.mpb = v3;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.mpb, (int32_t)v3, v4, v5);
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
  if ( (byte_4A22815 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___, enable);
    this = (BattleActorControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    byte_4A22815 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_21:
    sub_1B71828(this, enable);
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
        sub_1B71830(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v14->obj.klass + v8);
      if ( !this )
        goto LABEL_21;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_2EAABFC *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
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
  if ( (byte_4A22814 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___, enable);
    this = (BattleActorControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    byte_4A22814 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_1B71828(this, enable);
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
        sub_1B71830(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_2EAABFC *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
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
  unsigned __int64 m_CancellationTokenSource; // x8
  BattleData_o *v23; // x19
  unsigned __int64 v24; // x22
  struct PlayMakerFSM_o **p_rootfsm; // x23
  Il2CppObject *Component_object; // x20
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4A22818 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_ParticleSystem___, method);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Renderer___, v9);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75915040, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v12);
    sub_1B715CC(&StringLiteral_16212/*"_MainTex"*/, v13);
    byte_4A22818 = 1;
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
    UnityEngine_MaterialPropertyBlock__Clear_69115108((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    v28.fields.r = v17;
    v28.fields.g = v18;
    v28.fields.b = v19;
    v28.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16129/*"_Color"*/,
      v28,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16212/*"_MainTex"*/,
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
                                     (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
                                         (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75915040)) == 0LL )
  {
LABEL_44:
    sub_1B71828(IsHideShadow, v15);
  }
  m_CancellationTokenSource = (unsigned __int64)IsHideShadow->fields.m_CancellationTokenSource;
  v23 = IsHideShadow;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v24 = 0LL;
    p_rootfsm = &IsHideShadow->fields.rootfsm;
    do
    {
      if ( a > 0.0 )
        goto LABEL_35;
      if ( v24 >= (unsigned int)m_CancellationTokenSource )
        goto LABEL_45;
      IsHideShadow = (BattleData_o *)p_rootfsm[v24];
      if ( !IsHideShadow )
        goto LABEL_44;
      Component_object = UnityEngine_Component__GetComponent_object_(
                           (UnityEngine_Component_o *)IsHideShadow,
                           (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (BattleData_o *)UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
      m_CancellationTokenSource = LODWORD(v23->fields.m_CancellationTokenSource);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        if ( v24 >= m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v24];
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
        if ( v24 >= (unsigned int)m_CancellationTokenSource )
          goto LABEL_45;
        IsHideShadow = (BattleData_o *)p_rootfsm[v24];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Component__get_gameObject(
                                         (UnityEngine_Component_o *)IsHideShadow,
                                         0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 1, 0LL);
        if ( v24 >= LODWORD(v23->fields.m_CancellationTokenSource) )
LABEL_45:
          sub_1B71830(IsHideShadow, v15);
        IsHideShadow = (BattleData_o *)p_rootfsm[v24];
        if ( !IsHideShadow )
          goto LABEL_44;
        IsHideShadow = (BattleData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)IsHideShadow, 0LL);
        if ( !IsHideShadow )
          goto LABEL_44;
        v29.fields.r = v17;
        v29.fields.g = v18;
        v29.fields.b = v19;
        v29.fields.a = a;
        UnityEngine_Material__set_color((UnityEngine_Material_o *)IsHideShadow, v29, 0LL);
      }
      LODWORD(m_CancellationTokenSource) = v23->fields.m_CancellationTokenSource;
      ++v24;
    }
    while ( (__int64)v24 < (int)m_CancellationTokenSource );
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

  if ( (byte_4A227CB & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&loadActorLimitCount);
    sub_1B715CC(&StringLiteral_11356/*"RootShadow"*/, v5);
    byte_4A227CB = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11356/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v9 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v9;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v9,
                         (System_String_o *)StringLiteral_11356/*"RootShadow"*/,
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
  int32_t v21; // w3
  int32_t v22; // [xsp+Ch] [xbp-24h] BYREF

  v22 = shadowId;
  if ( (byte_4A22817 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Renderer___, *(_QWORD *)&shadowId);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B715CC(&UnityEngine_Texture2D_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v7);
    sub_1B715CC(&StringLiteral_16212/*"_MainTex"*/, v8);
    sub_1B715CC(&StringLiteral_3204/*"Battle/Textures/shadow_"*/, v9);
    sub_1B715CC(&StringLiteral_3205/*"Battle/Textures/shadow_1"*/, v10);
    byte_4A22817 = 1;
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
      v17 = System_String__Concat_61505504((System_String_o *)StringLiteral_3204/*"Battle/Textures/shadow_"*/, v16, 0LL);
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
      v19 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_3205/*"Battle/Textures/shadow_1"*/, 0LL);
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
        UnityEngine_MaterialPropertyBlock__Clear_69115108((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16129/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16212/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_1B71570(
              (ServantStatusBattleListViewItem_o *)&this->fields.currentShadowTexure,
              (int32_t)ShadowTexture,
              v20,
              v21);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_1B71828(bgPerf, v13);
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
  int32_t v12; // w3
  BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *v14; // x20
  System_Enum_o v16; // [xsp+8h] [xbp-48h] BYREF
  int v17; // [xsp+18h] [xbp-38h]

  v5 = animname;
  if ( (byte_4A22843 & 1) == 0 )
  {
    sub_1B715CC(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v7);
    sub_1B715CC(&StringLiteral_24541/*"wait"*/, v8);
    byte_4A22843 = 1;
  }
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( LOBYTE(Instance->fields.svtId.fields.currentCryptoKey) )
    return v5;
  if ( isSaveAnim && this->fields.isFirstSaveBeforePlayAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)v5,
      v11,
      v12);
  }
  if ( !v5 )
    goto LABEL_15;
  if ( !System_String__StartsWith(v5, (System_String_o *)StringLiteral_24541/*"wait"*/, 0LL) )
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
    sub_1B71828(Instance, v10);
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
  if ( (byte_4A22842 & 1) == 0 )
  {
    sub_1B715CC(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo, animname);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_24541/*"wait"*/, v7);
    byte_4A22842 = 1;
  }
  if ( isSaveAnim && v6->fields.isFirstSaveBeforePlayAnim )
  {
    v6->fields.isFirstSaveBeforePlayAnim = 0;
    v6->fields._PlayedOriginalAnimName_k__BackingField = v5;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&v6->fields._PlayedOriginalAnimName_k__BackingField,
      (int32_t)v5,
      isSaveAnim,
      (int32_t)method);
  }
  if ( !v5 )
    goto LABEL_13;
  this = (BattleActorControl_o *)System_String__StartsWith(v5, (System_String_o *)StringLiteral_24541/*"wait"*/, 0LL);
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
    sub_1B71828(this, animname);
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

  if ( (byte_4A227F6 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, name);
    sub_1B715CC(&StringLiteral_1889/*"@OnComplete Fired!\n => <{0}>:"*/, v5);
    byte_4A227F6 = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1889/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_43478204(this, name, 0, v8);
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
    sub_1B71828(CompleteList, v6);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v10->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)v10->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v10, 0LL);
    goto LABEL_11;
  }
  sub_1B71AE8(v10);
  BattleActorControl__setAnimationEvent(v12, v13, v14, v15);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4A22800 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__, eventName);
    byte_4A22800 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1B71828(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (Il2CppObject *)motionName,
    (const MethodInfo_319ECFC *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4A22801 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__string__Remove__, eventName);
    byte_4A22801 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1B71828(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___Remove(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (const MethodInfo_31A020C *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4A227CC & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227CC = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69257852(actorObject, 0LL);
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

  if ( (byte_4A22851 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v3);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_int___, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v8);
    byte_4A22851 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_3148514 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToList_int_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                 (const MethodInfo_2E97870 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_34B3D10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v12;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_324B7EC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields._current, v11) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_324B7E8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_1B71828(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    buffLoopEffectDict,
    (const MethodInfo_31489DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
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

  if ( (byte_4A2283D & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__DestroyAuraEffect_d__329_TypeInfo, effectObject);
    byte_4A2283D = 1;
  }
  v4 = sub_1B71818(BattleActorControl__DestroyAuraEffect_d__329_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__329___ctor((BattleActorControl__DestroyAuraEffect_d__329_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B71828(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)effectObject, v7, v8);
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
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A2284F & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__DestroyEffectOnParticleStop_d__355_TypeInfo, *(_QWORD *)&key);
    byte_4A2284F = 1;
  }
  v5 = sub_1B71818(BattleActorControl__DestroyEffectOnParticleStop_d__355_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__355___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B71828(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4A227CD & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227CD = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_69258040(actorObject, 0LL);
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
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w24
  __int64 v16; // x8
  _QWORD *v17; // x21
  unsigned __int64 v18; // x25
  UnityEngine_Object_o *v19; // x22

  if ( (byte_4A22850 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, *(_QWORD *)&effectId);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v6);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75915040, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    byte_4A22850 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
           effectId,
           (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                               (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v11 = this->fields.buffLoopEffectDict) == 0LL)
    || (v12 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__object___Remove(
                                       (System_Collections_Generic_Dictionary_int__object__o *)v11,
                                       effectId,
                                       (const MethodInfo_3149CDC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v12)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                               v12,
                               1,
                               (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75915040)) == 0LL )
  {
LABEL_30:
    sub_1B71828(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
  v13 = *((_DWORD *)buffLoopEffectDict + 6);
  v14 = buffLoopEffectDict;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        goto LABEL_29;
      buffLoopEffectDict = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      buffLoopEffectDict = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)buffLoopEffectDict, 0LL);
      if ( !buffLoopEffectDict )
        goto LABEL_30;
      v16 = *((_QWORD *)buffLoopEffectDict + 3);
      v17 = buffLoopEffectDict;
      if ( (int)v16 >= 1 )
        break;
LABEL_25:
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_26;
    }
    v18 = 0LL;
    while ( v18 < (unsigned int)v16 )
    {
      v19 = (UnityEngine_Object_o *)v17[v18 + 4];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69257852(v19, 0LL);
      LODWORD(v16) = *((_DWORD *)v17 + 6);
      if ( (__int64)++v18 >= (int)v16 )
        goto LABEL_25;
    }
LABEL_29:
    sub_1B71830(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69257852((UnityEngine_Object_o *)v12, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v4; // x21
  int32_t v5; // w2
  int32_t v6; // w3
  BattleActorControl_o *v7; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4A227D0 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227D0 = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69257852(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.specialShadowObj, 0, v5, v6);
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
  int32_t v14; // w3
  System_String_o *prevAnimEffectTriggerKey; // x0
  System_Action_object__o *v16; // x22

  if ( (byte_4A227CA & 1) == 0 )
  {
    sub_1B715CC(&System_Action_BattleActorAnimationEffect__TypeInfo, animName);
    sub_1B715CC(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___, v7);
    sub_1B715CC(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____, v8);
    sub_1B715CC(&Method_BattleActorControl__DisplayAnimationEffect_b__139_0__, v9);
    byte_4A227CA = 1;
  }
  TriggerKey = (Il2CppObject *)BattleActorAnimationEffect__MakeTriggerKey(
                                 animName,
                                 eventTag,
                                 (const MethodInfo *)eventTag);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                           TriggerKey,
                           0LL,
                           (const MethodInfo_2E49DB4 *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0LL) )
  {
    prevAnimEffectTriggerKey = this->fields.prevAnimEffectTriggerKey;
    if ( !prevAnimEffectTriggerKey )
      sub_1B71828(0LL, v12);
    if ( !System_String__Equals_61513820(prevAnimEffectTriggerKey, (System_String_o *)TriggerKey, 0LL) )
    {
      v16 = (System_Action_object__o *)sub_1B71818(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_object____ctor(
        v16,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__139_0__,
        0LL);
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)Value_object__object,
        (System_Action_T__o *)v16,
        (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)TriggerKey;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.prevAnimEffectTriggerKey,
    (int32_t)TriggerKey,
    v13,
    v14);
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

  if ( (byte_4A227CF & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_TryGetComponent_Renderer___, target);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    byte_4A227CF = 1;
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
            (const MethodInfo_2E52D50 *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v7 = component;
    if ( !component )
LABEL_11:
      sub_1B71828(v7, v8);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4A227DC & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___, eventName);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___, v5);
    sub_1B715CC(&System_Func_PlayMakerFSM__bool__TypeInfo, v6);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__0__, v7);
    sub_1B715CC(&BattleActorControl___c__DisplayClass166_0_TypeInfo, v8);
    byte_4A227DC = 1;
  }
  v9 = sub_1B71818(BattleActorControl___c__DisplayClass166_0_TypeInfo);
  BattleActorControl___c__DisplayClass166_0___ctor((BattleActorControl___c__DisplayClass166_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B71828(v10, v11);
  *(_QWORD *)(v9 + 16) = eventName;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)eventName, v12, v13);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v15 = (System_Func_object__bool__o *)sub_1B71818(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          motionFSM,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_object_(
           v16,
           (const MethodInfo_2E78500 *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4A2282D & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A2282D = 1;
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

  if ( (byte_4A22820 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_1B715CC(&StringLiteral_16085/*"_AddColor"*/, v4);
    byte_4A22820 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1B71828(Item, v7);
  if ( !UnityEngine_Material__HasProperty_69124120(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16085/*"_AddColor"*/,
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
                                     (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16085/*"_AddColor"*/,
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
    sub_1B71828(this, method);
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

  if ( (byte_4A22844 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22844 = 1;
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
      sub_1B71828(0LL, v4);
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
  struct PlayMakerFSM_array *motionFSM; // x8
  System_String_o *Value; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  PlayMakerFSM_o *v12; // x20
  unsigned __int64 v13; // x21
  System_String_o *v14; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int32_t result; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A22857 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B715CC(&StringLiteral_5243/*"DelayEnd"*/, v5);
    byte_4A22857 = 1;
  }
  result = 0;
  v6 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
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
                            (System_String_o *)StringLiteral_5243/*"DelayEnd"*/,
                            0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  Fsm = (PlayMakerFSM_o *)System_String__IsNullOrEmpty(Value, 0LL);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return v6;
  if ( !Value || (Fsm = (PlayMakerFSM_o *)System_String__Split(Value, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_23:
    sub_1B71828(Fsm, v8);
  m_CancellationTokenSource = Fsm->fields.m_CancellationTokenSource;
  v12 = Fsm;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)m_CancellationTokenSource )
    {
      v14 = (System_String_o *)*((_QWORD *)&v12->fields.fsm + v13);
      result = 0;
      Fsm = (PlayMakerFSM_o *)System_Int32__TryParse(v14, &result, 0LL);
      if ( ((unsigned __int8)Fsm & 1) != 0 )
      {
        if ( !v6 )
          goto LABEL_23;
        v8 = (unsigned int)result;
        items = v6->fields._items;
        v16 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !items )
          goto LABEL_23;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            v8,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = size + 1;
          items->m_Items[size + 1] = v8;
        }
      }
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      if ( (__int64)++v13 >= (int)m_CancellationTokenSource )
        return v6;
    }
LABEL_24:
    sub_1B71830(Fsm, v8);
  }
  return v6;
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
  if ( (byte_4A227FD & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B715CC(&BattleActorControl_TypeInfo, method);
    byte_4A227FD = 1;
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
    sub_1B71828(this, method);
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

  if ( (byte_4A2281F & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__, v3);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v4);
    byte_4A2281F = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1B71828(Item, v7);
  if ( !UnityEngine_Material__HasProperty_69124120(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16129/*"_Color"*/,
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
                                     (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v8 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16129/*"_Color"*/,
                                  0LL);
LABEL_14:
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

  if ( (byte_4A2285E & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___, includeInactive);
    byte_4A2285E = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B71828(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
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

  if ( (byte_4A227F2 & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, voiceId);
    byte_4A227F2 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1B71828(Instance, v7);
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
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x19
  System_Collections_Generic_List_object__o *v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v27; // x22
  Il2CppObject *current; // x20
  _BOOL8 v29; // x0
  __int64 v30; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  Il2CppClass *klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  Il2CppClass **v40; // x0
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A2280F & 1) == 0 )
  {
    sub_1B715CC(&System_Action_int__TypeInfo, method);
    sub_1B715CC(&Method_BasicHelper_ForEach_int___, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_GameObject___ctor__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl___ctor__, v11);
    sub_1B715CC(&System_Collections_Generic_List_BattleActorControl__TypeInfo, v12);
    sub_1B715CC(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v14);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass264_0__GetServantObjectVisibleControlActor_b__0__, v15);
    sub_1B715CC(&BattleActorControl___c__DisplayClass264_0_TypeInfo, v16);
    byte_4A2280F = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v17 = sub_1B71818(BattleActorControl___c__DisplayClass264_0_TypeInfo);
  BattleActorControl___c__DisplayClass264_0___ctor((BattleActorControl___c__DisplayClass264_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_29;
  *(_QWORD *)(v17 + 24) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 24), (int32_t)this, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v17 + 16) = v23;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v17 + 16), (int32_t)v23, v24, v25);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, 0LL),
        v27 = (System_Action_int__o *)sub_1B71818(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v27,
          (Il2CppObject *)v17,
          Method_BattleActorControl___c__DisplayClass264_0__GetServantObjectVisibleControlActor_b__0__,
          0LL),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v27,
          (const MethodInfo_2E47E88 *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v17 + 16)) == 0LL) )
  {
LABEL_29:
    sub_1B71828(actiondata, v19);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)actiondata,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v43.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v29 )
    {
      if ( !current )
        sub_1B71828(v29, v30);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v32 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( !v32 )
      {
        if ( !Component_object )
          sub_1B71828(v32, v33);
        klass = Component_object[25].klass;
        if ( !klass )
          sub_1B71828(v32, v33);
        if ( LODWORD(klass->_1.namespaze) )
        {
          if ( !v22 )
            sub_1B71828(v32, v33);
          items = v22->fields._items;
          v38 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v22->fields._version;
          if ( !items )
            sub_1B71828(v32, v33);
          size = v22->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v22,
              Component_object,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v40 = &items->obj.klass + size;
            v22->fields._size = size + 1;
            v40[4] = (Il2CppClass *)Component_object;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)Component_object, v34, v35);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v22;
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
    sub_1B71828(this, method);
  if ( !motionFSM->max_length )
    sub_1B71830(this, method);
  return motionFSM->m_Items[0];
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
  BattleActorControl___c__DisplayClass138_0_o *v21; // x21
  UnityEngine_GameObject_o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  ServantStatusBattleListViewItem_o *p_dicTriggerAnimEffects; // x19
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  System_Func_object__bool__o *v32; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  BattleActorControl___c_c *v35; // x0
  System_Func_object__object__o *_9__138_1; // x21
  Il2CppObject *v37; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v41; // x0
  BattleActorControl___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  System_Func_object__object__o *_9__138_2; // x21
  Il2CppObject *v45; // x22
  struct BattleActorControl___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Func_object__object__o *_9__138_3; // x22
  Il2CppObject *v50; // x23
  struct BattleActorControl___c_StaticFields *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_Collections_Generic_Dictionary_TKey__TElement__o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3

  if ( (byte_4A227C9 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___, *(_QWORD *)&limitCount);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, v5);
    sub_1B715CC(
      &Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____,
      v6);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___, v7);
    sub_1B715CC(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo, v8);
    sub_1B715CC(&System_Func_BattleActorAnimationEffect__bool__TypeInfo, v9);
    sub_1B715CC(&System_Func_BattleActorAnimationEffect__string__TypeInfo, v10);
    sub_1B715CC(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo, v11);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___, v12);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v13);
    sub_1B715CC(&Method_BattleActorControl___c__InitAnimationEffect_b__138_1__, v14);
    sub_1B715CC(&Method_BattleActorControl___c__InitAnimationEffect_b__138_2__, v15);
    sub_1B715CC(&Method_BattleActorControl___c__InitAnimationEffect_b__138_3__, v16);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass138_0__InitAnimationEffect_b__0__, v17);
    sub_1B715CC(&BattleActorControl___c__DisplayClass138_0_TypeInfo, v18);
    sub_1B715CC(&BattleActorControl___c_TypeInfo, v19);
    sub_1B715CC(&StringLiteral_1/*""*/, v20);
    byte_4A227C9 = 1;
  }
  v21 = (BattleActorControl___c__DisplayClass138_0_o *)sub_1B71818(BattleActorControl___c__DisplayClass138_0_TypeInfo);
  BattleActorControl___c__DisplayClass138_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_29;
  v21->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (ServantStatusBattleListViewItem_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.dicTriggerAnimEffects, 0, v24, v25);
  v27 = (int)StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.prevAnimEffectTriggerKey, v27, v28, v29);
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
                                                                                 (const MethodInfo_2EAB2F4 *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v32 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v32,
        (Il2CppObject *)v21,
        Method_BattleActorControl___c__DisplayClass138_0__InitAnimationEffect_b__0__,
        0LL);
      v33 = System_Linq_Enumerable__Where_object_(
              Components_object,
              (System_Func_TSource__bool__o *)v32,
              (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v33,
                                                                   (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v34, 0LL) )
      {
        v35 = BattleActorControl___c_TypeInfo;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v35 = BattleActorControl___c_TypeInfo;
        }
        _9__138_1 = (System_Func_object__object__o *)v35->static_fields->__9__138_1;
        if ( !_9__138_1 )
        {
          if ( !v35->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v35);
            v35 = BattleActorControl___c_TypeInfo;
          }
          v37 = (Il2CppObject *)v35->static_fields->__9;
          _9__138_1 = (System_Func_object__object__o *)sub_1B71818(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__138_1,
            v37,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_1__,
            0LL);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__138_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__138_1;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__138_1, (int32_t)_9__138_1, v39, v40);
        }
        v41 = System_Linq_Enumerable__GroupBy_object__object_(
                v34,
                (System_Func_TSource__TKey__o *)_9__138_1,
                (const MethodInfo_2E80AF0 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v42 = BattleActorControl___c_TypeInfo;
        v43 = (System_Collections_Generic_IEnumerable_TSource__o *)v41;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v42 = BattleActorControl___c_TypeInfo;
        }
        _9__138_2 = (System_Func_object__object__o *)v42->static_fields->__9__138_2;
        if ( !_9__138_2 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = BattleActorControl___c_TypeInfo;
          }
          v45 = (Il2CppObject *)v42->static_fields->__9;
          _9__138_2 = (System_Func_object__object__o *)sub_1B71818(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_object__object____ctor(
            _9__138_2,
            v45,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_2__,
            0LL);
          v46 = BattleActorControl___c_TypeInfo->static_fields;
          v46->__9__138_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__138_2;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v46->__9__138_2, (int32_t)_9__138_2, v47, v48);
          v42 = BattleActorControl___c_TypeInfo;
        }
        if ( !v42->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v42);
          v42 = BattleActorControl___c_TypeInfo;
        }
        _9__138_3 = (System_Func_object__object__o *)v42->static_fields->__9__138_3;
        if ( !_9__138_3 )
        {
          if ( !v42->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v42);
            v42 = BattleActorControl___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v42->static_fields->__9;
          _9__138_3 = (System_Func_object__object__o *)sub_1B71818(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_object__object____ctor(
            _9__138_3,
            v50,
            Method_BattleActorControl___c__InitAnimationEffect_b__138_3__,
            0LL);
          v51 = BattleActorControl___c_TypeInfo->static_fields;
          v51->__9__138_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__138_3;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v51->__9__138_3, (int32_t)_9__138_3, v52, v53);
        }
        v54 = System_Linq_Enumerable__ToDictionary_object__object__object_(
                v43,
                (System_Func_TSource__TKey__o *)_9__138_2,
                (System_Func_TSource__TElement__o *)_9__138_3,
                (const MethodInfo_2E94944 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (ServantStatusBattleListViewItem_c *)v54;
        sub_1B71570(p_dicTriggerAnimEffects, (int32_t)v54, v55, v56);
      }
      return;
    }
LABEL_29:
    sub_1B71828(v22, v23);
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
  System_Func_object__bool__o *_9__194_0; // x20
  Il2CppObject *v10; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A227E3 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___, method);
    sub_1B715CC(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo, v3);
    sub_1B715CC(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__194_0__, v4);
    sub_1B715CC(&BattleActorControl___c_TypeInfo, v5);
    byte_4A227E3 = 1;
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
  _9__194_0 = (System_Func_object__bool__o *)v8->static_fields->__9__194_0;
  if ( !_9__194_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleActorControl___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__194_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__194_0,
      v10,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__194_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__194_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__194_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__194_0, (int32_t)_9__194_0, v12, v13);
  }
  return System_Linq_Enumerable__All_object_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__194_0,
           (const MethodInfo_2E6798C *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
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
  if ( (byte_4A22858 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, entity);
    this = (BattleActorControl_o *)sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    byte_4A22858 = 1;
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
         (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    return 1;
  }
  this = (BattleActorControl_o *)v4->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( !this )
LABEL_18:
    sub_1B71828(this, entity);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           seqIdFromMstTDSeqWeight,
           (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
}


bool __fastcall BattleActorControl__IsHideShadow(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8
  BattleDeckServantData_o *deckSvt; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(this, method);
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
  unsigned int v23; // w8
  struct BattleActionData_o *v24; // x8
  int32_t actionIndex; // w8
  int32_t v26; // w10
  int32_t v27; // w21
  int32_t i; // w20
  struct BattlePerformance_o *v29; // x8

  if ( (byte_4A2285A & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&expectedType);
    byte_4A2285A = 1;
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
      if ( !byte_4A1ADDE )
      {
        sub_1B715CC(&System_Math_TypeInfo, v15);
        byte_4A1ADDE = 1;
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
      sub_1B71828(v14, v15);
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
    sub_1B71828(battleSvtData, v3);
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

  if ( (byte_4A227EA & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227EA = 1;
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

  if ( (byte_4A22859 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22859 = 1;
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
    sub_1B71828(battleSvtData, v5);
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
  System_Func_object__bool__o *_9__368_0; // x20
  Il2CppObject *v19; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
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
  int32_t v43; // w3
  BattlePlayAnimationComponent_o *v44; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x22
  System_Func_object__bool__o *v46; // x23
  Il2CppObject *v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A2285B & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___, method);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v3);
    sub_1B715CC(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo, v4);
    sub_1B715CC(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v5);
    sub_1B715CC(&System_IDisposable_TypeInfo, v6);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, v7);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, v8);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B715CC(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__368_0__, v10);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass368_0__LoadSavedPartAnimation_b__1__, v11);
    sub_1B715CC(&BattleActorControl___c__DisplayClass368_0_TypeInfo, v12);
    sub_1B715CC(&BattleActorControl___c_TypeInfo, v13);
    byte_4A2285B = 1;
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
    _9__368_0 = (System_Func_object__bool__o *)v17->static_fields->__9__368_0;
    if ( !_9__368_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleActorControl___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__368_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__368_0,
        v19,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__368_0__,
        0LL);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
      static_fields->__9__368_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__368_0;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__368_0, (int32_t)_9__368_0, v21, v22);
    }
    v23 = System_Linq_Enumerable__Where_object_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__368_0,
            (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v23 )
      sub_1B71828(0LL, v24);
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
      p_method = sub_1BC35AC(v23, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0LL);
    }
    v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v26,
            *(_QWORD *)(p_method + 8));
    if ( !v31 )
      sub_1B71828(0LL, v30);
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
        v35 = sub_1BC35AC(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
        break;
      v36 = sub_1B71818(BattleActorControl___c__DisplayClass368_0_TypeInfo);
      BattleActorControl___c__DisplayClass368_0___ctor((BattleActorControl___c__DisplayClass368_0_o *)v36, 0LL);
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
        v40 = sub_1BC35AC(v31, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL);
      }
      v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v31, *(_QWORD *)(v40 + 8));
      if ( !v36 )
        sub_1B71828(v41, v41);
      *(_QWORD *)(v36 + 16) = v41;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v36 + 16), v41, v42, v43);
      v44 = *(BattlePlayAnimationComponent_o **)(v36 + 16);
      v45 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v46 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v46,
        (Il2CppObject *)v36,
        Method_BattleActorControl___c__DisplayClass368_0__LoadSavedPartAnimation_b__1__,
        0LL);
      v47 = System_Linq_Enumerable__FirstOrDefault_object__48759088(
              v45,
              (System_Func_TSource__bool__o *)v46,
              (const MethodInfo_2E80130 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v44 )
        sub_1B71828(v47, v47);
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
      v51 = sub_1BC35AC(v31, System_IDisposable_TypeInfo, 0LL);
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
  _DWORD *v16; // x23
  int v17; // w8
  unsigned int v18; // w28
  _DWORD *v19; // x8
  UnityEngine_ParticleSystem_o *v20; // x24
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-80h] BYREF
  _DWORD *v28; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v29; // 0:x0.8
  UnityEngine_ParticleSystem_MainModule_o v30; // 0:x0.8

  if ( (byte_4A2284E & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, isPlay);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__, v7);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v8);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v9);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v11);
    byte_4A2284E = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v28 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                                       buffLoopEffectDict,
                                                                                       (const MethodInfo_3148664 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1B71828(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_37D52EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v27 = v26;
LABEL_6:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v27,
            (const MethodInfo_328F640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v27.fields._currentValue )
      sub_1B71828(0LL, v13);
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)v27.fields._currentValue,
                                    1,
                                    (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024);
    v16 = ComponentsInChildren_object;
    if ( !ComponentsInChildren_object )
      sub_1B71828(0LL, v15);
    v17 = ComponentsInChildren_object[6];
    if ( v17 >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= v17 )
          sub_1B71830(ComponentsInChildren_object, v15);
        v19 = &v16[2 * v18];
        v20 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v19 + 4);
        if ( !v20 )
          sub_1B71828(ComponentsInChildren_object, v15);
        ComponentsInChildren_object = UnityEngine_ParticleSystem__get_main(
                                        *((UnityEngine_ParticleSystem_o **)v19 + 4),
                                        0LL).fields.m_ParticleSystem;
        v28 = ComponentsInChildren_object;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_1B71828(ComponentsInChildren_object, v15);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_24;
          UnityEngine_ParticleSystem__Play_69537988(v20, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
          if ( !gameObject )
            sub_1B71828(0LL, v23);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        }
        else
        {
          if ( isNoblePhantasm )
          {
            v29.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v28;
            UnityEngine_ParticleSystem_MainModule__set_stopAction(v29, 0, 0LL);
            v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
            if ( !v24 )
              sub_1B71828(0LL, v25);
            UnityEngine_GameObject__SetActive(v24, 0, 0LL);
            goto LABEL_24;
          }
          UnityEngine_ParticleSystem__Stop_69538340(v20, 0LL);
        }
        v30.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&v28;
        UnityEngine_ParticleSystem_MainModule__set_stopAction(v30, !isPlay, 0LL);
LABEL_24:
        v17 = v16[6];
        if ( (int)++v18 >= v17 )
          goto LABEL_6;
      }
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v27,
    (const MethodInfo_328F63C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4A22852 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_13388/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, isPlay);
    byte_4A22852 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13388/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1B71828(0LL, v5);
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
  _BOOL8 v26; // x0
  __int64 v27; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v31; // x21
  UnityEngine_Transform_o *v32; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v35; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A22853 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    byte_4A22853 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_1B71828(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
    (const MethodInfo_3148C8C *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v13 = 0LL;
  v35 = v34;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v35,
            (const MethodInfo_328E9CC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v35.fields._current.fields.key;
    value = v35.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v16 )
    {
      if ( !value )
        sub_1B71828(v16, v17);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_1B71828(0LL, v19);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_1B71828(0LL, v21);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v23 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v23 )
        sub_1B71828(0LL, v24);
      v25 = UnityEngine_Object__get_name(v23, 0LL);
      if ( !name )
        sub_1B71828(v25, v25);
      v26 = System_String__Equals_61513820(name, v25, 0LL);
      if ( !v26 )
      {
        if ( !v13 )
        {
          v13 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v13,
            (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v13 )
            sub_1B71828(v26, v27);
        }
        items = v13->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !items )
          sub_1B71828(v26, v27);
        size = v13->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v13,
            key,
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v13->fields._size = size + 1;
          items->m_Items[size + 1] = key;
        }
        v31 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v31 )
          sub_1B71828(v32, v32);
        UnityEngine_Transform__set_parent(v31, v32, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v35,
    (const MethodInfo_328EAF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4A22854 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_BuffMaster___, movedEffect);
    sub_1B715CC(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v5);
    sub_1B715CC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v14);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A22854 = 1;
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
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffData,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_1B71828(buffData, v18);
      }
      v22 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v68,
        EffectBuffList,
        (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v70 = v68;
      while ( 1 )
      {
        v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v70,
                (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v23 )
          break;
        if ( !v70.fields._current )
          sub_1B71828(v23, v24);
        if ( !MasterData_object )
          sub_1B71828(v23, v24);
        v25 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)v70.fields._current[1].klass,
                (const MethodInfo_30F8760 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v26 = v25;
        if ( v25 )
        {
          monitor = (int32_t)v25[6].monitor;
          if ( monitor >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 monitor,
                 (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v29 = this->fields.battleSvtData;
            if ( !v29 )
              sub_1B71828(0LL, v28);
            v30 = (int32_t)v26[6].monitor;
            ActorSvtId = BattleServantData__getActorSvtId(v29, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v32);
            if ( !v22 )
              sub_1B71828(LimitCount, v34);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v22, &entity, v30, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_1B71828(0LL, v35);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                       (int32_t)v26[6].monitor,
                       (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_1B71828(0LL, v38);
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Item, 0LL);
              v41 = transform;
              if ( !transform )
                sub_1B71828(0LL, v40);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_1B71828(0LL, v43);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_1B71828(name, v45);
              if ( !name )
                sub_1B71828(0LL, v45);
              if ( !System_String__Equals_61513820(name, entity->fields.nodeName, 0LL) )
              {
                if ( !byte_4A1A751 )
                {
                  sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v46);
                  byte_4A1A751 = 1;
                }
                UnityEngine_Transform__set_localPosition(
                  v41,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                if ( !byte_4A1A757 )
                {
                  sub_1B715CC(&UnityEngine_Quaternion_TypeInfo, v47);
                  byte_4A1A757 = 1;
                }
                UnityEngine_Transform__set_localRotation(
                  v41,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
                v49 = this->fields.actorObject;
                if ( !v49 )
                  sub_1B71828(0LL, v48);
                v50 = UnityEngine_GameObject__get_transform(v49, 0LL);
                if ( !entity )
                  sub_1B71828(v50, v51);
                nodeName = entity->fields.nodeName;
                v53 = v50;
                v54 = BattleActorControl__getLimitCount(this, v51);
                NodeFromLvName = (__int64)TransformHelper__getNodeFromLvName(v53, nodeName, v54, 1, 0LL);
                v57 = (UnityEngine_Transform_o *)NodeFromLvName;
                if ( !byte_4A1A751 )
                {
                  NodeFromLvName = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v56);
                  byte_4A1A751 = 1;
                }
                v58 = this->fields.battleSvtData;
                if ( !v58 )
                  sub_1B71828(NodeFromLvName, v56);
                if ( !entity )
                  sub_1B71828(0LL, v56);
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
                  sub_1B71828(0LL, v63);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                Rotation.fields.x = Rotation.fields.x * 0.017453;
                Rotation.fields.y = Rotation.fields.y * 0.017453;
                Rotation.fields.z = Rotation.fields.z * 0.017453;
                v75 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v41, v75, 0LL);
                if ( !entity )
                  sub_1B71828(0LL, v64);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v41, Scale, 0LL);
                UnityEngine_Transform__set_parent(v41, v57, 0LL);
                v67 = this->fields.battleSvtData;
                if ( !v67 )
                  sub_1B71828(v65, v66);
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
        (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4A22829 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_SkipDead__, method);
    sub_1B715CC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4A22829 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B71818(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1B71828(IsNoTouchSkip, v5);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v8, 0LL);
  }
}


void __fastcall BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *performance; // x0
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_BattleActorControl__o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v18; // w9
  UnityEngine_Object_o *actorObject; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_object__o *extraLoadedVoiceArgsList; // x0
  ServantStatusBattleListViewItem_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A227C2 & 1) == 0 )
  {
    sub_1B715CC(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__,
      method);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__,
      v5);
    sub_1B715CC(
      &Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__,
      v6);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__Clear__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v11);
    byte_4A227C2 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  this->fields.rendererArrayList = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.rendererArrayList, 0, v2, v3);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.BattleModelObjectVisibleControlComponents, 0, v12, v13);
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
                         (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
      sub_1B71828(performance, v15);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v15);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v21);
  extraLoadedVoiceArgsList = (System_Collections_Generic_List_object__o *)this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (ServantStatusBattleListViewItem_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      extraLoadedVoiceArgsList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v24 )
        break;
      if ( !v31.fields._current )
        sub_1B71828(v24, v25);
      klass = (int32_t)v31.fields._current[1].klass;
      klass_high = HIDWORD(v31.fields._current[1].klass);
      monitor = (int32_t)v31.fields._current[1].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_1B71570(p_extraLoadedVoiceArgsList, 0, v29, v30);
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
  if ( (byte_4A227F5 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, name);
    byte_4A227F5 = 1;
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
    BattleActorControl__sendEventFSM_43478204(v5, name, 0, v7);
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
    sub_1B71828(this, name);
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
  sub_1B71AE8(this);
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

  if ( (byte_4A227FE & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227FE = 1;
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
    UnityEngine_Object__Destroy_69257852(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_1B71570(p_particleDisconnectorObj, 0, v7, v8);
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
  int32_t v11; // w3
  TreasureDvcEntity_o *v12; // x20
  int v13; // w8
  struct BattleServantData_o *v14; // x9
  int32_t v15; // w10
  System_Action_o *v16; // x20
  const MethodInfo *v17; // x2
  System_Collections_IEnumerator_o *v18; // x0

  if ( (byte_4A22811 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, obj);
    sub_1B715CC(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__267_0__, v4);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v5);
    byte_4A22811 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_23;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( !performance )
    goto LABEL_23;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  if ( *((_BYTE *)performance + 471) )
  {
    performance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_23;
    v9 = (char *)performance;
    performance = BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v9 )
      goto LABEL_23;
    *((_QWORD *)v9 + 33) = performance;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 264), (int32_t)performance, v10, v11);
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
    sub_1B71830(performance, obj);
  v13 = *((_DWORD *)performance + 8);
  if ( v13 < 1 )
  {
LABEL_21:
    v18 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_22;
  }
  v14 = this->fields.battleSvtData;
  if ( !v14 )
LABEL_23:
    sub_1B71828(performance, obj);
  v15 = *((_DWORD *)performance + 9);
  v14->fields.tmpAppearanceId = v13;
  v14->fields.isForceAppearance = 1;
  v14->fields.dressDispId = v15;
  v16 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__267_0__,
    0LL);
  v18 = BattleActorControl__waitChangeApp(this, v16, v17);
LABEL_22:
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v18, 0LL);
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
  struct System_Action_o *noblePhantasmCallback; // x8
  struct BattlePerformance_o *v25; // x8
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2

  if ( (byte_4A22813 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, seq);
    sub_1B715CC(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__269_0__, v4);
    sub_1B715CC(&BattleFBXComponent_TypeInfo, v5);
    sub_1B715CC(&System_GC_TypeInfo, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v9);
    sub_1B715CC(&StringLiteral_6360/*"FINISHED"*/, v10);
    byte_4A22813 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  LOBYTE(Instance->fields.equiphp) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_62551572(0LL);
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
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_46;
  BattlePerformance__ResetOverwriteNobleDamageAnimationFlg((BattlePerformance_o *)Instance, 0LL);
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
  if ( BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    v20 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v20,
      (Il2CppObject *)this,
      Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__269_0__,
      0LL);
    v22 = BattleActorControl__waitChangeApp(this, v20, v21);
    Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_69243124(
                                        (UnityEngine_MonoBehaviour_o *)this,
                                        v22,
                                        0LL);
  }
  else
  {
    Instance = (BattleServantData_o *)this->fields.performance;
    if ( !Instance )
      goto LABEL_46;
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
          goto LABEL_46;
      }
      Instance = (BattleServantData_o *)((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
                                          noblePhantasmCallback->fields.original_method_info,
                                          *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
    }
    else
    {
      BattleActorControl__sendEventFSM_43478204(this, (System_String_o *)StringLiteral_6360/*"FINISHED"*/, 0, v23);
    }
  }
  v25 = this->fields.performance;
  if ( !v25 )
    goto LABEL_46;
  Instance = (BattleServantData_o *)v25->fields.data;
  if ( !Instance )
    goto LABEL_46;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_46;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v26);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v27);
  }
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
LABEL_46:
    sub_1B71828(Instance, v13);
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)Instance, 0, 1, 0LL);
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_4A22828 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_SkipDead__, method);
    sub_1B715CC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4A22828 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B71818(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1B71828(IsNoTouchSkip, v5);
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
  int32_t v19; // w3
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_object__bool__o *v24; // x20
  System_Collections_Generic_IEnumerable_T__o *v25; // x19
  System_Action_object__o *v26; // x20

  if ( (byte_4A2285D & 1) == 0 )
  {
    sub_1B715CC(&System_Action_BattlePlayAnimationComponent__TypeInfo, key);
    sub_1B715CC(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___, v9);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v10);
    sub_1B715CC(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v11);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass371_0__PlayMatchPartAnimation_b__0__, v12);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass371_0__PlayMatchPartAnimation_b__1__, v13);
    sub_1B715CC(&BattleActorControl___c__DisplayClass371_0_TypeInfo, v14);
    byte_4A2285D = 1;
  }
  v15 = sub_1B71818(BattleActorControl___c__DisplayClass371_0_TypeInfo);
  BattleActorControl___c__DisplayClass371_0___ctor((BattleActorControl___c__DisplayClass371_0_o *)v15, 0LL);
  if ( !v15 )
    sub_1B71828(v16, v17);
  *(_QWORD *)(v15 + 16) = key;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v15 + 16), (int32_t)key, v18, v19);
  *(_QWORD *)(v15 + 24) = animName;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v15 + 24), (int32_t)animName, v20, v21);
  *(float *)(v15 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v22);
  v24 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v15,
    Method_BattleActorControl___c__DisplayClass371_0__PlayMatchPartAnimation_b__0__,
    0LL);
  v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v24,
                                                         (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v26 = (System_Action_object__o *)sub_1B71818(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_BattleActorControl___c__DisplayClass371_0__PlayMatchPartAnimation_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v25,
    (System_Action_T__o *)v26,
    (const MethodInfo_2E487A0 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
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
      sub_1B71830(this, *(_QWORD *)&timing);
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
    sub_1B71828(this, *(_QWORD *)&timing);
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
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v8; // x20
  unsigned __int64 v9; // x22
  struct UnityEngine_GameObject_o **p_actorObject; // x25
  Il2CppObject *v11; // x21

  v4 = this;
  if ( (byte_4A22824 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, obj);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__, v5);
    this = (BattleActorControl_o *)sub_1B715CC(
                                     &Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__,
                                     v6);
    byte_4A22824 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                   obj,
                                   (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !this )
    goto LABEL_14;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v8 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v9 = 0LL;
    p_actorObject = &this->fields.actorObject;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)m_CancellationTokenSource )
        sub_1B71830(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v11 = (Il2CppObject *)p_actorObject[v9];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v11,
                                       (const MethodInfo_34D05F0 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_object___Remove(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v11,
                                         (const MethodInfo_34D1788 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(m_CancellationTokenSource) = v8->fields.m_CancellationTokenSource;
      if ( (__int64)++v9 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_1B71828(this, obj);
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
    sub_1B71828(0LL, eventName);
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
    sub_1B71570(p_overwriteAnim, 0, (int32_t)v2, v3);
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

  if ( (byte_4A22847 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22847 = 1;
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
        sub_1B71828(0LL, v4);
      BattleFBXComponent__RevertDefaultAnimation(v5, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BattleActorControl___c__DisplayClass288_0_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_object__o *v12; // x22

  if ( (byte_4A22823 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_Material__TypeInfo, method);
    sub_1B715CC(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___, v5);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass288_0__SetActorAlpha_b__0__, v6);
    sub_1B715CC(&BattleActorControl___c__DisplayClass288_0_TypeInfo, v7);
    byte_4A22823 = 1;
  }
  v8 = (BattleActorControl___c__DisplayClass288_0_o *)sub_1B71818(BattleActorControl___c__DisplayClass288_0_TypeInfo);
  BattleActorControl___c__DisplayClass288_0___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B71828(v9, v10);
  v8->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v12 = (System_Action_object__o *)sub_1B71818(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v12,
    (Il2CppObject *)v8,
    Method_BattleActorControl___c__DisplayClass288_0__SetActorAlpha_b__0__,
    0LL);
  BattleActorControl__UpdateMaterialsOnRenderders_object_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v12,
    (const MethodInfo_2E4BD30 *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
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
  unsigned __int64 v21; // x25
  UnityEngine_Object_o *v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4A22822 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_16085/*"_AddColor"*/, v12);
    byte_4A22822 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v24.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_1B71828(v15, v16);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v19 = materials;
        if ( !materials )
          sub_1B71828(0LL, v18);
        v20 = *(_QWORD *)&materials->max_length;
        if ( (int)v20 >= 1 )
        {
          v21 = 0LL;
          do
          {
            if ( v21 >= (unsigned int)v20 )
              sub_1B71830(materials, v18);
            v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v22 )
                sub_1B71828(materials, v18);
              v25.fields.r = r;
              v25.fields.g = g;
              v25.fields.b = b;
              v25.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v22,
                (System_String_o *)StringLiteral_16085/*"_AddColor"*/,
                v25,
                0LL);
            }
            LODWORD(v20) = v19->max_length;
            ++v21;
          }
          while ( (__int64)v21 < (int)v20 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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

  if ( (byte_4A22841 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___, *(_QWORD *)&gId);
    byte_4A22841 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_object )
    sub_1B71828(0LL, v6);
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
  ServantStatusBattleListViewItem_o *p_shadowEffectObject; // x21
  unsigned __int64 v10; // x24
  __int64 v11; // x26
  unsigned __int64 v12; // x9
  UnityEngine_Object_o *v13; // x23
  int32_t v14; // w2
  int32_t v15; // w3
  ServantStatusBattleListViewItem_c *klass; // x8
  struct BattleServantData_o *battleSvtData; // x8
  UnityEngine_GameObject_o *actorObject; // x23
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  UnityEngine_GameObject_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  v6 = this;
  if ( (byte_4A22816 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, isShadow);
    this = (BattleActorControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    byte_4A22816 = 1;
  }
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  p_shadowEffectObject = (ServantStatusBattleListViewItem_o *)&v6->fields.shadowEffectObject;
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
      UnityEngine_Object__Destroy_69257852(v13, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v10 >= LODWORD(klass->_1.namespaze) )
LABEL_17:
          sub_1B71830(this, isShadow);
        *(void **)((char *)&klass->_1.image + v11) = 0LL;
        sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)klass + v11), 0, v14, v15);
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
    sub_1B71828(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v20 = BattleEffectUtility__ChangeServantView(actorObject, isShadow, isChoco, svtlimitaddent, 0LL);
  p_shadowEffectObject->klass = (ServantStatusBattleListViewItem_c *)v20;
  sub_1B71570(p_shadowEffectObject, (int32_t)v20, v21, v22);
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
  unsigned __int64 v21; // x25
  UnityEngine_Object_o *v22; // x20
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-90h] BYREF
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_4A22821 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v12);
    byte_4A22821 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v24 = v23;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v24,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v24.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v15 )
      {
        if ( !current )
          sub_1B71828(v15, v16);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v19 = materials;
        if ( !materials )
          sub_1B71828(0LL, v18);
        v20 = *(_QWORD *)&materials->max_length;
        if ( (int)v20 >= 1 )
        {
          v21 = 0LL;
          do
          {
            if ( v21 >= (unsigned int)v20 )
              sub_1B71830(materials, v18);
            v22 = (UnityEngine_Object_o *)v19->m_Items[v21];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v22 )
                sub_1B71828(materials, v18);
              v25.fields.r = r;
              v25.fields.g = g;
              v25.fields.b = b;
              v25.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v22,
                (System_String_o *)StringLiteral_16129/*"_Color"*/,
                v25,
                0LL);
            }
            LODWORD(v20) = v19->max_length;
            ++v21;
          }
          while ( (__int64)v21 < (int)v20 );
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  float v24; // s14
  float v25; // s10
  BattleServantData_c **v26; // x8
  UnityEngine_Renderer_o *v27; // x20
  float v28; // s13
  float v29; // s12
  float v30; // s11
  __int64 v31; // x8
  BattleServantData_o *v32; // x20
  unsigned __int64 v33; // x26
  float v34; // s11
  float v35; // s12
  float v36; // s13
  UnityEngine_Object_o *v37; // x21
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v39; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_4A2281E & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v10);
    sub_1B715CC(&StringLiteral_16085/*"_AddColor"*/, v11);
    byte_4A2281E = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
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
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_30:
    sub_1B71828(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v20 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v21 = 0;
    v22 = r * alpha;
    v23 = g * alpha;
    v24 = 1.0 - alpha;
    v25 = b * alpha;
    while ( 1 )
    {
      if ( v21 >= uniqueId )
        goto LABEL_29;
      v26 = &v20->klass + (int)v21;
      v27 = (UnityEngine_Renderer_o *)v26[4];
      if ( !v27 )
        goto LABEL_30;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v26[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      v28 = color.fields.r;
      v29 = color.fields.g;
      v30 = color.fields.b;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v27, 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      v31 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v32 = battleSvtData;
      if ( (int)v31 >= 1 )
        break;
LABEL_27:
      uniqueId = v20->fields.uniqueId;
      if ( (int)++v21 >= uniqueId )
        return;
    }
    v33 = 0LL;
    v34 = v24 * v30;
    v35 = v24 * v29;
    v36 = v24 * v28;
    while ( v33 < (unsigned int)v31 )
    {
      v37 = (UnityEngine_Object_o *)*(&v32->fields.userSvtId.fields.currentCryptoKey + v33);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v37, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v37 )
          goto LABEL_30;
        v39.fields.a = 1.0;
        v39.fields.r = v36;
        v39.fields.g = v35;
        v39.fields.b = v34;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v37, (System_String_o *)StringLiteral_16129/*"_Color"*/, v39, 0LL);
        v40.fields.a = 0.0;
        v40.fields.r = v22;
        v40.fields.g = v23;
        v40.fields.b = v25;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v37, (System_String_o *)StringLiteral_16085/*"_AddColor"*/, v40, 0LL);
      }
      LODWORD(v31) = v32->fields.uniqueId;
      if ( (__int64)++v33 >= (int)v31 )
        goto LABEL_27;
    }
LABEL_29:
    sub_1B71830(battleSvtData, method);
  }
}


void __fastcall BattleActorControl__SetMaterialWhite(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *gameObject; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x19
  unsigned int v9; // w22
  char *v10; // x8
  UnityEngine_Renderer_o *v11; // x20
  unsigned __int64 v12; // x25
  UnityEngine_Object_o *v13; // x21
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A2281D & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v4);
    byte_4A2281D = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  if ( !gameObject )
    goto LABEL_23;
  v7 = *((_DWORD *)gameObject + 6);
  v8 = gameObject;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
LABEL_24:
        sub_1B71830(gameObject, v6);
      v10 = (char *)&v8[2 * v9];
      v11 = (UnityEngine_Renderer_o *)*((_QWORD *)v10 + 4);
      if ( !v11 )
        break;
      gameObject = UnityEngine_Renderer__get_materials(*((UnityEngine_Renderer_o **)v10 + 4), 0LL);
      if ( !gameObject )
        break;
      v12 = 0LL;
      while ( (__int64)v12 < *((int *)gameObject + 6) )
      {
        gameObject = UnityEngine_Renderer__get_materials(v11, 0LL);
        if ( !gameObject )
          goto LABEL_23;
        if ( v12 >= *((unsigned int *)gameObject + 6) )
          goto LABEL_24;
        v13 = (UnityEngine_Object_o *)*((_QWORD *)gameObject + v12 + 4);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (void *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
        if ( ((unsigned __int8)gameObject & 1) != 0 )
        {
          if ( !v13 )
            goto LABEL_23;
          v14.fields.r = 1.0;
          v14.fields.g = 1.0;
          v14.fields.b = 1.0;
          v14.fields.a = 1.0;
          UnityEngine_Material__SetColor(
            (UnityEngine_Material_o *)v13,
            (System_String_o *)StringLiteral_16129/*"_Color"*/,
            v14,
            0LL);
        }
        ++v12;
        gameObject = UnityEngine_Renderer__get_materials(v11, 0LL);
        if ( !gameObject )
          goto LABEL_23;
      }
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_23:
    sub_1B71828(gameObject, v6);
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
  System_Func_object__bool__o *_9__369_0; // x21
  Il2CppObject *v16; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  BattleActorControl___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__object__o *_9__369_1; // x21
  Il2CppObject *v24; // x22
  struct BattleActorControl___c_StaticFields *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Object_array *v30; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_4A2285C & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___, method);
    sub_1B715CC(
      &Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___,
      v4);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___, v5);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___, v6);
    sub_1B715CC(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo, v7);
    sub_1B715CC(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo, v8);
    sub_1B715CC(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__369_0__, v9);
    sub_1B715CC(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__369_1__, v10);
    sub_1B715CC(&BattleActorControl___c_TypeInfo, v11);
    byte_4A2285C = 1;
  }
  PlayAnimationComponents = BattleActorControl__GetPlayAnimationComponents(this, 0, v2);
  v13 = BattleActorControl___c_TypeInfo;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayAnimationComponents;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v13 = BattleActorControl___c_TypeInfo;
  }
  _9__369_0 = (System_Func_object__bool__o *)v13->static_fields->__9__369_0;
  if ( !_9__369_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleActorControl___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__369_0 = (System_Func_object__bool__o *)sub_1B71818(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__369_0,
      v16,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__369_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__369_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__369_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__369_0, (int32_t)_9__369_0, v18, v19);
  }
  v20 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)_9__369_0,
          (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v21 = BattleActorControl___c_TypeInfo;
  v22 = v20;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v21 = BattleActorControl___c_TypeInfo;
  }
  _9__369_1 = (System_Func_object__object__o *)v21->static_fields->__9__369_1;
  if ( !_9__369_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleActorControl___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__369_1 = (System_Func_object__object__o *)sub_1B71818(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_object__object____ctor(
      _9__369_1,
      v24,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__369_1__,
      0LL);
    v25 = BattleActorControl___c_TypeInfo->static_fields;
    v25->__9__369_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__369_1;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v25->__9__369_1, (int32_t)_9__369_1, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v22,
                                                         (System_Func_TSource__TResult__o *)_9__369_1,
                                                         (const MethodInfo_2E8BEEC *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v29 = BasicHelper__ExcludeNull_object_(
          v28,
          (const MethodInfo_2E47104 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
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

  if ( (byte_4A22856 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, active);
    byte_4A22856 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
      sub_1B71828(IsHideShadow, v8);
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
  if ( (byte_4A2281B & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Renderer___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v9);
    sub_1B715CC(&StringLiteral_16212/*"_MainTex"*/, v10);
    byte_4A2281B = 1;
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
        UnityEngine_MaterialPropertyBlock__Clear_69115108((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
        IsHideShadow = (BattleData_o *)this->fields.mpb;
        if ( IsHideShadow )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
            (System_String_o *)StringLiteral_16212/*"_MainTex"*/,
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
              (System_String_o *)StringLiteral_16129/*"_Color"*/,
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
                                               (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_1B71828(IsHideShadow, v12);
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
  int32_t v30; // w2
  int32_t v31; // w3
  BattleActorControl_c *v32; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v34; // x0
  System_Collections_Generic_Dictionary_int__object__o *v35; // x21
  int v36; // w8
  int v37; // w8
  int v38; // w8
  int v39; // w8
  int v45; // w8
  int v46; // w8
  int v48; // w8
  int v50; // w8
  int v52; // w8
  int v53; // w8
  int v55; // w8
  int v56; // w8
  int v57; // w8
  int32_t v58; // w2
  int32_t v59; // w3
  BattleActorControl_c *v60; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0
  BattleActorControl_c *v62; // x0
  BattleActorControl_c *v63; // x0
  Il2CppObject *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  Il2CppObject *v67; // x22
  UnityEngine_Transform_o *v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  BattleActorControl_c *v71; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v73; // x23
  BattleActorControl_c *v74; // x0
  UnityEngine_Object_o *v75; // x19

  if ( (byte_4A2281C & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_TypeInfo, *(_QWORD *)&btlSize);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__, v8);
    sub_1B715CC(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo, v9);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v10);
    sub_1B715CC(&UnityEngine_Vector3___TypeInfo, v11);
    sub_1B715CC(&StringLiteral_12689/*"Shadow"*/, v12);
    byte_4A2281C = 1;
  }
  v13 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v13 = BattleActorControl_TypeInfo;
  }
  if ( !v13->static_fields->ShadowTransform )
  {
    v14 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v14,
      (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v17 = *((_DWORD *)ShadowTransform + 6);
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
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v18 = *((_DWORD *)ShadowTransform + 6);
    if ( !v18 )
      goto LABEL_137;
    *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v18 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      1,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v19 = *((_DWORD *)ShadowTransform + 6);
    if ( !v19 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4040000040000000LL;
    if ( v19 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      2,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v20 = *((_DWORD *)ShadowTransform + 6);
    if ( !v20 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x40533333400CCCCDLL;
    if ( v20 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      3,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v21 = *((_DWORD *)ShadowTransform + 6);
    if ( !v21 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x405CCCCD40133333LL;
    if ( v21 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      4,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v22 = *((_DWORD *)ShadowTransform + 6);
    if ( !v22 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040200000LL;
    if ( v22 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      5,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v23 = *((_DWORD *)ShadowTransform + 6);
    if ( !v23 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4170000041C80000LL;
    if ( v23 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1071728558;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      6,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v24 = *((_DWORD *)ShadowTransform + 6);
    if ( !v24 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4080000040A00000LL;
    if ( v24 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1107967345;
    *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      7,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v25 = *((_DWORD *)ShadowTransform + 6);
    if ( !v25 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    if ( v25 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      8,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v26 = *((_DWORD *)ShadowTransform + 6);
    if ( !v26 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040F00000LL;
    if ( v26 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      9,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v27 = *((_DWORD *)ShadowTransform + 6);
    if ( !v27 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
    if ( v27 == 1 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      10,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v28 = *((_DWORD *)ShadowTransform + 6);
    if ( !v28 )
      goto LABEL_137;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
    if ( v28 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1082130432;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      11,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
    if ( !ShadowTransform )
      goto LABEL_138;
    v29 = *((_DWORD *)ShadowTransform + 6);
    if ( !v29 )
      goto LABEL_137;
    *((_QWORD *)ShadowTransform + 4) = 0x4070000040A00000LL;
    *((_DWORD *)ShadowTransform + 10) = 1065353216;
    if ( v29 == 1 )
      goto LABEL_137;
    *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
    *((_DWORD *)ShadowTransform + 13) = -1102263091;
    System_Collections_Generic_Dictionary_int__object___Add(
      v14,
      12,
      (Il2CppObject *)ShadowTransform,
      (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v32 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v32 = BattleActorControl_TypeInfo;
    }
    v32->static_fields->ShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v14;
    sub_1B71570((ServantStatusBattleListViewItem_o *)BattleActorControl_TypeInfo->static_fields, (int32_t)v14, v30, v31);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v34 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v34 = BattleActorControl_TypeInfo;
    }
    if ( !v34->static_fields->specialShadowTransform )
    {
      v35 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v35,
        (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v36 = *((_DWORD *)ShadowTransform + 6);
      if ( !v36 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v36 == 1 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      *((_DWORD *)ShadowTransform + 11) = 0;
      if ( !v35 )
        goto LABEL_138;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        0,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v37 = *((_DWORD *)ShadowTransform + 6);
      if ( !v37 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v37 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        1,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v38 = *((_DWORD *)ShadowTransform + 6);
      if ( !v38 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v38 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        2,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v39 = *((_DWORD *)ShadowTransform + 6);
      if ( !v39 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v39 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        3,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v45 = *((_DWORD *)ShadowTransform + 6);
      if ( !v45 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v45 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        4,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v46 = *((_DWORD *)ShadowTransform + 6);
      if ( !v46 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v46 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        5,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v48 = *((_DWORD *)ShadowTransform + 6);
      if ( !v48 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v48 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        6,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v50 = *((_DWORD *)ShadowTransform + 6);
      if ( !v50 )
        goto LABEL_137;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v50 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        7,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v52 = *((_DWORD *)ShadowTransform + 6);
      if ( !v52 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v52 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        8,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v53 = *((_DWORD *)ShadowTransform + 6);
      if ( !v53 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v53 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        9,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v55 = *((_DWORD *)ShadowTransform + 6);
      if ( !v55 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v55 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        10,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v56 = *((_DWORD *)ShadowTransform + 6);
      if ( !v56 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v56 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        11,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1B71674(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v57 = *((_DWORD *)ShadowTransform + 6);
      if ( !v57 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v57 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v35,
        12,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v60 = BattleActorControl_TypeInfo;
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v60 = BattleActorControl_TypeInfo;
      }
      static_fields = v60->static_fields;
      static_fields->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v35;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->specialShadowTransform, (int32_t)v35, v58, v59);
    }
  }
  v62 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v62 = BattleActorControl_TypeInfo;
  }
  ShadowTransform = (char *)v62->static_fields->ShadowTransform;
  if ( !ShadowTransform )
    goto LABEL_138;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
         btlSize,
         (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
  {
    v63 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v63 = BattleActorControl_TypeInfo;
    }
    ShadowTransform = (char *)v63->static_fields->ShadowTransform;
    if ( !ShadowTransform )
      goto LABEL_138;
    Item = System_Collections_Generic_Dictionary_int__object___get_Item(
             (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
             btlSize,
             (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    p_shadowObj = &this->fields.shadowObj;
    shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
    v67 = Item;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
    {
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v68 = UnityEngine_Transform__Find(
              (UnityEngine_Transform_o *)ShadowTransform,
              (System_String_o *)StringLiteral_12689/*"Shadow"*/,
              0LL);
      *p_shadowObj = v68;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.shadowObj, (int32_t)v68, v69, v70);
    }
    v71 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v71 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v71->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( !v71->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v71);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_138;
      }
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             (System_Collections_Generic_Dictionary_int__object__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v73 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v73, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_138;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v74 = BattleActorControl_TypeInfo;
            if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v74 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v74->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_138;
            v67 = System_Collections_Generic_Dictionary_int__object___get_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v75 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v75, 0LL, 0LL) )
    {
      ShadowTransform = (char *)*p_shadowObj;
      if ( !*p_shadowObj )
        goto LABEL_138;
      ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
      if ( !v67 )
        goto LABEL_138;
      if ( LODWORD(v67[1].monitor) )
      {
        if ( !ShadowTransform )
          goto LABEL_138;
        UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)ShadowTransform,
          *(UnityEngine_Vector3_o *)&v67[2].klass,
          0LL);
        ShadowTransform = (char *)*p_shadowObj;
        if ( !*p_shadowObj )
          goto LABEL_138;
        ShadowTransform = (char *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)ShadowTransform, 0LL);
        if ( LODWORD(v67[1].monitor) > 1 )
        {
          if ( ShadowTransform )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)ShadowTransform,
              *(UnityEngine_Vector3_o *)((char *)&v67[2].monitor + 4),
              0LL);
            return;
          }
LABEL_138:
          sub_1B71828(ShadowTransform, v16);
        }
      }
LABEL_137:
      sub_1B71830(ShadowTransform, v16);
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
    sub_1B71828(battleSvtData, v4);
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

  if ( (byte_4A22846 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22846 = 1;
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
        sub_1B71828(overwriteAnim, v4);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_myShiftData, 0, (int32_t)method, v3);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v10);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, v11);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A2282C & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_12114/*"SKIP_DEAD"*/, method);
    byte_4A2282C = 1;
  }
  BattleActorControl__sendEventFSM_43478204(this, (System_String_o *)StringLiteral_12114/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleFBXComponent_o *fbxcomponent; // x20
  ServantStatusBattleListViewItem_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v10; // x22
  System_Delegate_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Delegate_o *v14; // x8
  BattleFBXComponent_onEventDelegate_c *v15; // x1
  struct BattleFBXComponent_o *v16; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v18; // x22
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  BattleFBXComponent_onEventDelegate_c *v22; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  UnityEngine_Transform_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3

  v2 = this;
  if ( (byte_4A227C1 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_Complete__, method);
    sub_1B715CC(&Method_BattleActorControl_OnEvent__, v3);
    sub_1B715CC(&StringLiteral_18925/*"en_damage01"*/, v4);
    sub_1B715CC(&StringLiteral_18928/*"en_text01"*/, v5);
    this = (BattleActorControl_o *)sub_1B715CC(&BattleFBXComponent_onEventDelegate_TypeInfo, v6);
    byte_4A227C1 = 1;
  }
  fbxcomponent = v2->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_16;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (ServantStatusBattleListViewItem_o *)&fbxcomponent->fields.OnEvent;
  v10 = (BattleFBXComponent_onEventDelegate_o *)sub_1B71818(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v10, (Il2CppObject *)v2, Method_BattleActorControl_OnEvent__, 0LL);
  v11 = System_Delegate__Combine(OnEvent, (System_Delegate_o *)v10, 0LL);
  v14 = v11;
  if ( v11 )
  {
    v15 = BattleFBXComponent_onEventDelegate_TypeInfo;
    if ( (BattleFBXComponent_onEventDelegate_c *)v11->klass != BattleFBXComponent_onEventDelegate_TypeInfo )
      goto LABEL_13;
    p_OnEvent->klass = (ServantStatusBattleListViewItem_c *)v11;
    if ( (BattleFBXComponent_onEventDelegate_c *)v11->klass != v15 )
      goto LABEL_13;
  }
  else
  {
    p_OnEvent->klass = 0LL;
  }
  sub_1B71570(p_OnEvent, (int32_t)v11, v12, v13);
  v16 = v2->fields.fbxcomponent;
  if ( !v16 )
LABEL_16:
    sub_1B71828(this, method);
  Complete = (System_Delegate_o *)v16->fields.Complete;
  p_OnEvent = (ServantStatusBattleListViewItem_o *)&v16->fields.Complete;
  v18 = (BattleFBXComponent_onEventDelegate_o *)sub_1B71818(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v18, (Il2CppObject *)v2, Method_BattleActorControl_Complete__, 0LL);
  v19 = System_Delegate__Combine(Complete, (System_Delegate_o *)v18, 0LL);
  v14 = v19;
  if ( !v19 )
  {
LABEL_14:
    p_OnEvent->klass = (ServantStatusBattleListViewItem_c *)v14;
    goto LABEL_15;
  }
  v22 = BattleFBXComponent_onEventDelegate_TypeInfo;
  if ( (BattleFBXComponent_onEventDelegate_c *)v19->klass != BattleFBXComponent_onEventDelegate_TypeInfo
    || (p_OnEvent->klass = (ServantStatusBattleListViewItem_c *)v19,
        (BattleFBXComponent_onEventDelegate_c *)v19->klass != v22) )
  {
LABEL_13:
    sub_1B71AE8(v14);
    goto LABEL_14;
  }
LABEL_15:
  sub_1B71570(p_OnEvent, (int32_t)v14, v20, v21);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_18928/*"en_text01"*/, -1, 0, 0LL);
  v2->fields.nodeText = NodeFromLvName;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields.nodeText, (int32_t)NodeFromLvName, v25, v26);
  v27 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  v28 = TransformHelper__getNodeFromLvName(v27, (System_String_o *)StringLiteral_18925/*"en_damage01"*/, -1, 0, 0LL);
  v2->fields.nodeDamage = v28;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields.nodeDamage, (int32_t)v28, v29, v30);
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
  int32_t v30; // w3
  struct BattleServantData_o *v31; // x8
  float v32; // s9
  System_String_o *Value; // x0
  int v34; // w8
  __int64 v35; // x19
  unsigned int v36; // w20
  int v37; // w22
  UnityEngine_GameObject_o *v38; // x19
  int32_t v39; // w2
  int32_t v40; // w3
  System_Object_array *v41; // x20
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  int32_t v45; // w2
  int32_t v46; // w3
  Il2CppObject *v47; // x22
  int32_t v48; // w2
  int32_t v49; // w3
  const MethodInfo *v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  int32_t v54; // w2
  int32_t v55; // w3
  Il2CppObject *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  int32_t v62; // w2
  int32_t v63; // w3
  Il2CppObject *v64; // x21
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  int32_t v78; // w2
  int32_t v79; // w3
  Il2CppObject *v80; // x21
  System_Collections_Hashtable_o *v81; // x0
  __int64 v82; // x0
  float v83; // [xsp+8h] [xbp-58h] BYREF
  int v84; // [xsp+Ch] [xbp-54h] BYREF
  float Height; // [xsp+28h] [xbp-38h] BYREF
  int v86; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4A227FC & 1) == 0 )
  {
    sub_1B715CC(&iTween_EaseType_TypeInfo, enableDropItem);
    sub_1B715CC(&object___TypeInfo, v7);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_1B715CC(&float_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_24248/*"updateDeadEffect"*/, v10);
    sub_1B715CC(&StringLiteral_19605/*"from"*/, v11);
    sub_1B715CC(&StringLiteral_18704/*"easetype"*/, v12);
    sub_1B715CC(&StringLiteral_9867/*"OnFinishDead"*/, v13);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v14);
    sub_1B715CC(&StringLiteral_12063/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, v15);
    sub_1B715CC(&StringLiteral_22226/*"onupdate"*/, v16);
    sub_1B715CC(&StringLiteral_23910/*"to"*/, v17);
    sub_1B715CC(&StringLiteral_22218/*"oncomplete"*/, v18);
    sub_1B715CC(&iTween_TypeInfo, v19);
    byte_4A227FC = 1;
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.particleDisconnectorObj, (int32_t)v28, v29, v30);
  v31 = this->fields.battleSvtData;
  v32 = 1.3;
  if ( v31 )
  {
    if ( v31->fields.displayType == 2 )
    {
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12063/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_87;
        v34 = *(_DWORD *)(ActorSvtId + 24);
        v35 = ActorSvtId;
        if ( v34 >= 1 )
        {
          v36 = 0;
          while ( 1 )
          {
            if ( v36 >= v34 )
              goto LABEL_85;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_87;
            v37 = *(_DWORD *)(v35 + 4LL * (int)v36 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v37 == (_DWORD)ActorSvtId )
              break;
            v34 = *(_DWORD *)(v35 + 24);
            if ( (int)++v36 >= v34 )
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
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_1B71674(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_87:
    sub_1B71828(ActorSvtId, v24);
  v41 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19605/*"from"*/;
  if ( StringLiteral_19605/*"from"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_19605/*"from"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_19605/*"from"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v41->max_length )
    goto LABEL_85;
  v41->m_Items[0] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v41->m_Items, v24, v39, v40);
  v86 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v86, v42, v43, v44);
  v47 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B71708(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v41->max_length <= 1 )
    goto LABEL_85;
  v41->m_Items[1] = v47;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[1], (int32_t)v47, v45, v46);
  ActorSvtId = StringLiteral_23910/*"to"*/;
  if ( StringLiteral_23910/*"to"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_23910/*"to"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_23910/*"to"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 2 )
    goto LABEL_85;
  v41->m_Items[2] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[2], v24, v48, v49);
  Height = BattleActorControl__GetHeight(this, v50);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height, v51, v52, v53);
  v56 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B71708(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v41->max_length <= 3 )
    goto LABEL_85;
  v41->m_Items[3] = v56;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[3], (int32_t)v56, v54, v55);
  ActorSvtId = StringLiteral_18704/*"easetype"*/;
  if ( StringLiteral_18704/*"easetype"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_18704/*"easetype"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_18704/*"easetype"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 4 )
    goto LABEL_85;
  v41->m_Items[4] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[4], v24, v57, v58);
  v84 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v84, v59, v60, v61);
  v64 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B71708(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v41->max_length <= 5 )
    goto LABEL_85;
  v41->m_Items[5] = v64;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[5], (int32_t)v64, v62, v63);
  ActorSvtId = StringLiteral_22226/*"onupdate"*/;
  if ( StringLiteral_22226/*"onupdate"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_22226/*"onupdate"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_22226/*"onupdate"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 6 )
    goto LABEL_85;
  v41->m_Items[6] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[6], v24, v65, v66);
  ActorSvtId = StringLiteral_24248/*"updateDeadEffect"*/;
  if ( StringLiteral_24248/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_24248/*"updateDeadEffect"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_24248/*"updateDeadEffect"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 7 )
    goto LABEL_85;
  v41->m_Items[7] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[7], v24, v67, v68);
  ActorSvtId = StringLiteral_22218/*"oncomplete"*/;
  if ( StringLiteral_22218/*"oncomplete"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_22218/*"oncomplete"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_22218/*"oncomplete"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 8 )
    goto LABEL_85;
  v41->m_Items[8] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[8], v24, v69, v70);
  ActorSvtId = StringLiteral_9867/*"OnFinishDead"*/;
  if ( StringLiteral_9867/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_9867/*"OnFinishDead"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_9867/*"OnFinishDead"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 9 )
    goto LABEL_85;
  v41->m_Items[9] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[9], v24, v71, v72);
  ActorSvtId = StringLiteral_23870/*"time"*/;
  if ( StringLiteral_23870/*"time"*/ )
  {
    ActorSvtId = sub_1B71708(StringLiteral_23870/*"time"*/, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v24 = StringLiteral_23870/*"time"*/;
  }
  else
  {
    v24 = 0LL;
  }
  if ( v41->max_length <= 0xA )
    goto LABEL_85;
  v41->m_Items[10] = (Il2CppObject *)v24;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[10], v24, v73, v74);
  v83 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v83, v75, v76, v77);
  v80 = (Il2CppObject *)ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1B71708(ActorSvtId, v41->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_86:
      v82 = sub_1B7184C(ActorSvtId);
      sub_1B716F4(v82, 0LL);
    }
  }
  if ( v41->max_length <= 0xB )
LABEL_85:
    sub_1B71830(ActorSvtId, v24);
  v41->m_Items[11] = v80;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v41->m_Items[11], (int32_t)v80, v78, v79);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v81 = iTween__Hash(v41, 0LL);
  iTween__ValueTo(v38, v81, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl__StartDropItem(BattleActorControl_o *this, bool isSilent, const MethodInfo *method)
{
  __int64 v5; // x1
  BattleServantData_o *battleSvtData; // x0
  struct BattleServantData_o *v7; // x8
  struct BattlePerformance_o *performance; // x8
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
  UnityEngine_Object_o *Item_41662796; // x25
  BattlePerformance_o *v20; // x26
  int v21; // s0
  struct BattlePerformance_o *v24; // x8
  BattlePerformance_o *v25; // x20

  if ( (byte_4A227FB & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, isSilent);
    sub_1B715CC(&StringLiteral_1/*""*/, v5);
    byte_4A227FB = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_32;
  if ( battleSvtData->fields.isWithdraw )
    goto LABEL_9;
  battleSvtData = (BattleServantData_o *)BattleServantData__isDead(battleSvtData, 0LL);
  if ( ((unsigned __int8)battleSvtData & 1) != 0 )
    goto LABEL_9;
  v7 = this->fields.battleSvtData;
  if ( !v7 )
    goto LABEL_32;
  battleSvtData = (BattleServantData_o *)v7->fields.deckSvt;
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
    v9 = this->fields.battleSvtData;
    if ( !v9 )
      goto LABEL_32;
    droplist = v9->fields.droplist;
    v9->fields.IsAlreadyDrop = 1;
    if ( droplist )
    {
      v11 = this->fields.performance;
      if ( !v11 )
        goto LABEL_32;
      battleSvtData = (BattleServantData_o *)v11->fields.data;
      if ( !battleSvtData )
        goto LABEL_32;
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
            sub_1B71830(DropTransform, isSilent);
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v18 = droplist->m_Items[v17];
          Item_41662796 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_41662796(
                                                    (BattlePerformance_o *)battleSvtData,
                                                    v16,
                                                    v18,
                                                    v15,
                                                    v17,
                                                    ServantIndex,
                                                    this->fields.headupVec,
                                                    0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item_41662796, 0LL, 0LL);
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
              (UnityEngine_GameObject_o *)Item_41662796,
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
            goto LABEL_28;
        }
LABEL_32:
        sub_1B71828(battleSvtData, isSilent);
      }
    }
LABEL_28:
    if ( !isSilent )
    {
      v25 = this->fields.performance;
      battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !v25 )
        goto LABEL_32;
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
    if ( !byte_4A1A751 )
    {
      actorObject = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v5);
      byte_4A1A751 = 1;
    }
    if ( !v13 )
LABEL_11:
      sub_1B71828(actorObject, v5);
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
  const MethodInfo *v11; // x2
  struct BattleServantData_o *v12; // x8
  struct TranslucentActorVisualInfo_o *translucentActorVisualInfo; // x8
  const MethodInfo *v14; // x1

  v3 = forceUpdate;
  v4 = this;
  if ( (byte_4A22855 & 1) == 0 )
  {
    sub_1B715CC(&BuffList_TypeInfo, forceUpdate);
    sub_1B715CC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    this = (BattleActorControl_o *)sub_1B715CC(&BuffList_TYPE___TypeInfo, v6);
    byte_4A22855 = 1;
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
      v10 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B71818(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor(v10, v8, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_42225300(buffData, 100, v10, 1, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_1B71674(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_23;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1B71830(this, this);
      LODWORD(this->fields.actorObject) = 163;
      v12 = v4->fields.battleSvtData;
      if ( !v12 )
        goto LABEL_23;
      this = (BattleActorControl_o *)v12->fields.buffData;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_42203024(
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
        v11);
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
      sub_1B71828(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateEachServantStatusUiByTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleActionData_o *actiondata; // x0
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
  int32_t Value; // w0
  __int64 v18; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v19; // 0:x0.8

  if ( (byte_4A22831 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Empty_BattleActionData_BuffData___, method);
    sub_1B715CC(&Method_System_Nullable_int__get_HasValue__, v3);
    sub_1B715CC(&Method_System_Nullable_int__get_Value__, v4);
    byte_4A22831 = 1;
  }
  v18 = 0LL;
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
    v6 = actiondata;
    if ( !actiondata )
    {
      v7 = Method_System_Array_Empty_BattleActionData_BuffData___;
      v8 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData___ + 7);
      if ( !v8 )
      {
        sub_1BC3504(Method_System_Array_Empty_BattleActionData_BuffData___);
        v8 = v7[7];
      }
      v9 = *(_QWORD *)(v8 + 16);
      if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
        v9 = sub_1BC34A8(v9);
      if ( !*(_DWORD *)(v9 + 224) )
        j_il2cpp_runtime_class_init_0(v9);
      actiondata = *(BattleActionData_o **)(v7[7] + 16LL);
      if ( !*(&actiondata->fields.IsDontUpdateMessage + 1) )
        actiondata = (BattleActionData_o *)sub_1BC34A8(actiondata);
      v6 = **(BattleActionData_o ***)&actiondata->fields.commandAssistId;
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
          sub_1B71830(actiondata, method);
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
                                             0LL);
        if ( actiondata )
        {
          v14 = this->fields.performance;
          if ( !v14 )
            break;
          v15 = (BattleServantData_o *)actiondata;
          BattleActionData_BuffData__ExecAfterEffectProc((BattleActionData_BuffData_o *)v13, v14->fields.data, 0LL);
          BattleServantData__UpdateNpImmediately(v15, *(_DWORD *)(v13 + 84), 0LL);
          v16 = *(_QWORD *)(v13 + 92);
          v18 = v16;
          if ( (_BYTE)v16 )
          {
            v19 = (System_Nullable_int__o)&v18;
            v18 = v16;
            Value = System_Nullable_int___get_Value(
                      v19,
                      (const MethodInfo_35ECF94 *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v15, Value, v15->fields.maxtpturn, 0LL);
          }
          BattleServantData__updateHp(v15, 0LL);
          BattleServantData__updateBuff(v15, 1, 1, 0LL);
        }
        endcameraname = (int)v6->fields.endcameraname;
        if ( (int)++v11 >= endcameraname )
          return;
      }
LABEL_30:
      sub_1B71828(actiondata, method);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_object_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_2E4BD30 *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppClass *_3_BattleActorControl___c__289_T; // x0
  Il2CppClass *v13; // x0
  System_Func_object__bool__o *v14; // x22
  Il2CppClass *v15; // x0
  const MethodInfo_2E4BD30_RGCTXs *rgctx_data; // x8
  __int64 v17; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v19; // x23
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppClass *v22; // x0
  Il2CppClass *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v29; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x19
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  Il2CppClass *_8_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  UnityEngine_Renderer_o *v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  Il2CppClass *v47; // x0
  Il2CppClass *v48; // x0
  System_Func_object__bool__o *v49; // x23
  Il2CppClass *v50; // x0
  Il2CppClass *v51; // x0
  Il2CppObject *v52; // x24
  int32_t v53; // w2
  int32_t v54; // w3
  Il2CppClass *v55; // x0
  Il2CppClass *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v60; // x8
  __int64 v61; // x9
  int32_t *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x22
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0

  if ( method->rgctx_data
    || (sub_1B715CC(&Method_System_Linq_Enumerable_Where_Material___, rendererEnumerable),
        sub_1B715CC(&System_Func_Material__bool__TypeInfo, v7),
        sub_1B715CC(&System_IDisposable_TypeInfo, v8),
        sub_1B715CC(&System_Collections_Generic_IEnumerable_Material__TypeInfo, v9),
        sub_1B715CC(&System_Collections_Generic_IEnumerator_Material__TypeInfo, v10),
        sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v11),
        method->rgctx_data) )
  {
    if ( !rendererEnumerable )
      return;
  }
  else
  {
    sub_1BC3504(method);
    if ( !rendererEnumerable )
      return;
  }
  _3_BattleActorControl___c__289_T = method->rgctx_data->_3_BattleActorControl___c__289_T_;
  if ( (BYTE5(_3_BattleActorControl___c__289_T->vtable[0].methodPtr) & 1) == 0 )
    _3_BattleActorControl___c__289_T = (Il2CppClass *)sub_1BC34A8(_3_BattleActorControl___c__289_T);
  if ( !_3_BattleActorControl___c__289_T->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(_3_BattleActorControl___c__289_T);
  v13 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
  if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
    v13 = (Il2CppClass *)sub_1BC34A8(v13);
  v14 = (System_Func_object__bool__o *)*((_QWORD *)v13->static_fields + 1);
  if ( !v14 )
  {
    v15 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
    if ( (BYTE5(v15->vtable[0].methodPtr) & 1) == 0 )
      v15 = (Il2CppClass *)sub_1BC34A8(v15);
    if ( !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15);
    rgctx_data = method->rgctx_data;
    v17 = (__int64)rgctx_data->_3_BattleActorControl___c__289_T_;
    if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    {
      v17 = sub_1BC34A8(v17);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)rgctx_data->_2_System_Func_T__bool_;
    v19 = **(Il2CppObject ***)(v17 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1BC34A8(_2_System_Func_T__bool);
    v14 = (System_Func_object__bool__o *)sub_1B71818(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v14,
      v19,
      (intptr_t)method->rgctx_data->_4_BattleActorControl___c__289_T___UpdateMaterialsOnRenderders_b__289_0,
      (const MethodInfo_3347FD0 *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v22 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
    if ( (BYTE5(v22->vtable[0].methodPtr) & 1) == 0 )
      v22 = (Il2CppClass *)sub_1BC34A8(v22);
    *((_QWORD *)v22->static_fields + 1) = v14;
    v23 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1BC34A8(v23);
    sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v23->static_fields + 8), (int32_t)v14, v20, v21);
  }
  v24 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)rendererEnumerable,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2E99B5C *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
  if ( !v24 )
    sub_1B71828(0LL, v25);
  v26 = v24;
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1BC34A8(method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_);
  klass = v26->klass;
  v29 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1BC35AC(v26, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v26,
          *(_QWORD *)(p_method + 8));
  v34 = v32;
  while ( 1 )
  {
    if ( !v34 )
      sub_1B71828(v32, v33);
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_39;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_39:
      v38 = sub_1BC35AC(v34, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    _8_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_8_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _8_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1BC34A8(method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_);
    v40 = *(_QWORD *)v34;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((Il2CppClass **)v42 - 1) != _8_System_Collections_Generic_IEnumerator_T )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_48;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_48:
      v43 = sub_1BC35AC(v34, _8_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v44 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v34, *(_QWORD *)(v43 + 8));
    if ( !v44 )
      sub_1B71828(0LL, v45);
    materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v44, 0LL);
    v47 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
    if ( (BYTE5(v47->vtable[0].methodPtr) & 1) == 0 )
      v47 = (Il2CppClass *)sub_1BC34A8(v47);
    if ( !v47->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v47);
    v48 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
    if ( (BYTE5(v48->vtable[0].methodPtr) & 1) == 0 )
      v48 = (Il2CppClass *)sub_1BC34A8(v48);
    v49 = (System_Func_object__bool__o *)*((_QWORD *)v48->static_fields + 2);
    if ( !v49 )
    {
      v50 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
      if ( (BYTE5(v50->vtable[0].methodPtr) & 1) == 0 )
        v50 = (Il2CppClass *)sub_1BC34A8(v50);
      if ( !v50->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v50);
      v51 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
      if ( (BYTE5(v51->vtable[0].methodPtr) & 1) == 0 )
        v51 = (Il2CppClass *)sub_1BC34A8(v51);
      v52 = *(Il2CppObject **)v51->static_fields;
      v49 = (System_Func_object__bool__o *)sub_1B71818(System_Func_Material__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v49,
        v52,
        (intptr_t)method->rgctx_data->_11_BattleActorControl___c__289_T___UpdateMaterialsOnRenderders_b__289_1,
        0LL);
      v55 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
      if ( (BYTE5(v55->vtable[0].methodPtr) & 1) == 0 )
        v55 = (Il2CppClass *)sub_1BC34A8(v55);
      *((_QWORD *)v55->static_fields + 2) = v49;
      v56 = method->rgctx_data->_3_BattleActorControl___c__289_T_;
      if ( (BYTE5(v56->vtable[0].methodPtr) & 1) == 0 )
        v56 = (Il2CppClass *)sub_1BC34A8(v56);
      sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v56->static_fields + 16), (int32_t)v49, v53, v54);
    }
    v57 = System_Linq_Enumerable__Where_object_(
            materials,
            (System_Func_TSource__bool__o *)v49,
            (const MethodInfo_2E99B5C *)Method_System_Linq_Enumerable_Where_Material___);
    v59 = v57;
    if ( !v57 )
      sub_1B71828(0LL, v58);
    v60 = v57->klass;
    v61 = *(unsigned __int16 *)(&v57->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v57->klass->_2.bitflags2 + 3) )
    {
      v62 = &v60->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_Material__c **)v62 - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_74;
      }
      v63 = (__int64)&v60->vtable[*v62].method;
    }
    else
    {
LABEL_74:
      v63 = sub_1BC35AC(v57, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
    }
    v65 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v63)(
            v59,
            *(_QWORD *)(v63 + 8));
    if ( !v65 )
      sub_1B71828(0LL, v64);
    while ( 1 )
    {
      v66 = *(_QWORD *)v65;
      v67 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
      {
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v68 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v67;
          v68 += 4;
          if ( !v67 )
            goto LABEL_81;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_81:
        v69 = sub_1BC35AC(v65, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8)) & 1) == 0 )
        break;
      v70 = *(_QWORD *)v65;
      v71 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
      {
        v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_Material__c **)v72 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_88;
        }
        v73 = v70 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_88:
        v73 = sub_1BC35AC(v65, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
      }
      v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v65, *(_QWORD *)(v73 + 8));
      if ( !updateFunc )
        sub_1B71828(v74, v74);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))updateFunc->fields.m_target)(
        updateFunc->fields.original_method_info,
        v74,
        *(_QWORD *)&updateFunc->fields.extra_arg);
    }
    v75 = *(_QWORD *)v65;
    v76 = *(unsigned __int16 *)(*(_QWORD *)v65 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v65 + 302LL) )
    {
      v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
      {
        --v76;
        v77 += 4;
        if ( !v76 )
          goto LABEL_96;
      }
      v78 = v75 + 16LL * *v77 + 312;
    }
    else
    {
LABEL_96:
      v78 = sub_1BC35AC(v65, System_IDisposable_TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v65, *(_QWORD *)(v78 + 8));
  }
  v79 = *(_QWORD *)v34;
  v80 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_105;
    }
    v82 = v79 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_105:
    v82 = sub_1BC35AC(v34, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v82)(v34, *(_QWORD *)(v82 + 8));
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
  UnityEngine_Color_o GroundShadowColor; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A227CE & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_BattleBgMaster___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A227CE = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  IsHideShadow = (BattleServantData_o *)BattleActorControl__IsHideShadow(this, method);
  if ( !battleSvtData )
    goto LABEL_70;
  battleSvtData->fields.isHideShadow = (unsigned __int8)IsHideShadow & 1;
  v8 = this->fields.battleSvtData;
  if ( !v8 )
    goto LABEL_70;
  if ( !v8->fields.isHideShadow )
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
          v13 = this->fields.battleSvtData;
          if ( !v13 )
            goto LABEL_70;
          if ( v13->fields.isEntry )
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
      IsHideShadow = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !IsHideShadow )
        goto LABEL_70;
      IsHideShadow = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)IsHideShadow,
                                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_BattleBgMaster___);
      if ( !this->fields.performance )
        goto LABEL_70;
      v14 = (BattleBgMaster_o *)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundNo(this->fields.performance, 0LL);
      if ( !this->fields.performance )
        goto LABEL_70;
      v15 = (int)IsHideShadow;
      IsHideShadow = (BattleServantData_o *)BattlePerformance__get_CurrentGroundType(this->fields.performance, 0LL);
      if ( !v14 )
        goto LABEL_70;
      BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v14, v15, (int32_t)IsHideShadow, 0LL);
      BattleActorControl__ChangeShadowTexture(this, BgShadowImageId, v17);
      performance = (UnityEngine_Object_o *)this->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
      if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
      {
        v19 = this->fields.performance;
        if ( !v19 )
          goto LABEL_70;
        data = (UnityEngine_Object_o *)v19->fields.data;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
        if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
        {
          v21 = this->fields.performance;
          if ( !v21 )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)v21->fields.data;
          if ( !IsHideShadow )
            goto LABEL_70;
          GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
          BattleActorControl__SetShadowColor(this, GroundShadowColor, v22);
          v23 = this->fields.performance;
          if ( !v23 )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)v23->fields.data;
          if ( !IsHideShadow )
            goto LABEL_70;
          IsHideShadow = (BattleServantData_o *)BattleData__GetShadowOffSvtIds((BattleData_o *)IsHideShadow, 0LL);
          if ( !this->fields.performance )
            goto LABEL_70;
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
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          IsHideShadow = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
          if ( ((unsigned __int8)IsHideShadow & 1) != 0 )
          {
            if ( !v24 )
              goto LABEL_70;
            uniqueId = v24->fields.uniqueId;
            if ( uniqueId >= 1 )
            {
              v30 = 0;
              while ( 1 )
              {
                if ( v30 >= uniqueId )
                  sub_1B71830(IsHideShadow, v7);
                IsHideShadow = this->fields.battleSvtData;
                if ( !IsHideShadow )
                  goto LABEL_70;
                v31 = *((_DWORD *)&v24->fields.userSvtId.fields.currentCryptoKey + (int)v30);
                IsHideShadow = (BattleServantData_o *)BattleServantData__getActorSvtId(IsHideShadow, 0LL);
                if ( v31 == (_DWORD)IsHideShadow )
                  break;
                uniqueId = v24->fields.uniqueId;
                if ( (int)++v30 >= uniqueId )
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
LABEL_64:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsHideShadow, 0, 0LL);
        return;
      }
    }
LABEL_70:
    sub_1B71828(IsHideShadow, v7);
  }
  v9 = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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

  if ( (byte_4A22802 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, eventName);
    byte_4A22802 = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1B71828(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
         (Il2CppObject *)eventName,
         &value,
         (const MethodInfo_31A051C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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

  if ( (byte_4A22812 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__WaitToNoblePhantasmPlay_d__268_TypeInfo, method);
    byte_4A22812 = 1;
  }
  v3 = sub_1B71818(BattleActorControl__WaitToNoblePhantasmPlay_d__268_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__268___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  if ( (byte_4A22861 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, playedSoundId);
    byte_4A22861 = 1;
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
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v10, 0LL);
  if ( !data )
LABEL_9:
    sub_1B71828(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__139_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__267_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__269_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x0
  const MethodInfo *v5; // x3
  struct System_Action_o *noblePhantasmCallback; // x8

  if ( (byte_4A22864 & 1) == 0 )
  {
    sub_1B715CC(&BattleFBXComponent_TypeInfo, method);
    sub_1B715CC(&StringLiteral_6360/*"FINISHED"*/, v3);
    byte_4A22864 = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  noblePhantasmCallback = this->fields.noblePhantasmCallback;
  if ( !noblePhantasmCallback )
  {
    BattleActorControl__sendEventFSM_43478204(this, (System_String_o *)StringLiteral_6360/*"FINISHED"*/, 0, v5);
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
    sub_1B71828(performance, method);
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
LABEL_9:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
    noblePhantasmCallback->fields.original_method_info,
    *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__265_0(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *noblePhantasmObjectVisibleCtrList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x20
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_BattleActorControl__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A22862 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__Clear__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v6);
    sub_1B715CC(&StringLiteral_24541/*"wait"*/, v7);
    byte_4A22862 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_object__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_13;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v17,
           (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    if ( !v9 )
      break;
    current = v17.fields._current;
    if ( !v17.fields._current )
      sub_1B71828(v9, v10);
    BattleActorControl__playAnimation_43425612(
      (BattleActorControl_o *)v17.fields._current,
      (System_String_o *)StringLiteral_24541/*"wait"*/,
      0,
      v11);
    BattleActorControl__ProcServantObjectVisibleCtr((BattleActorControl_o *)current, 1, 1, v13);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v17,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  v14 = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !v14 )
LABEL_13:
    sub_1B71828(noblePhantasmObjectVisibleCtrList, method);
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__265_1(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A22863 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, method);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v4);
    sub_1B715CC(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v5);
    byte_4A22863 = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v21, 0LL);
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
        v20 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1B71818(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v20,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v9) )
  {
LABEL_12:
    sub_1B71828(Instance, v7);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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

  if ( (byte_4A2284C & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, buffEntity);
    sub_1B715CC(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B715CC(&StringLiteral_7129/*"HIDE_STATUS_EFFECT_IDS"*/, v13);
    byte_4A2284C = 1;
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
         (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffLoopEffectDict,
                                  (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7129/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v17 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v17 < 1 )
  {
LABEL_15:
    v19 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1B71818(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v19, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v21 = buffEntity->fields.effectId;
    v22 = gameObject;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4A1A751 )
    {
      sub_1B715CC(&UnityEngine_Vector3_TypeInfo, effectId);
      byte_4A1A751 = 1;
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
        if ( !byte_4A1A751 )
        {
          buffLoopEffectDict = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, effectId);
          byte_4A1A751 = 1;
        }
        if ( v32 )
        {
          UnityEngine_Transform__set_localPosition(v32, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)EffectToNode,
                                          0LL);
          v33 = (UnityEngine_Transform_o *)buffLoopEffectDict;
          if ( !byte_4A1A757 )
          {
            buffLoopEffectDict = sub_1B715CC(&UnityEngine_Quaternion_TypeInfo, effectId);
            byte_4A1A757 = 1;
          }
          if ( v33 )
          {
            UnityEngine_Transform__set_localRotation(
              v33,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)buffLoopEffectDict,
                                              (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
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
                  if ( !byte_4A1A751 )
                  {
                    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, effectId);
                    byte_4A1A751 = 1;
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
                        (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v57, 0LL);
                buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (Il2CppObject *)EffectToNode,
                    (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1B71828(buffLoopEffectDict, effectId);
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
    sub_1B71828(0LL, method);
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

  if ( (byte_4A2281A & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Renderer___, isNormal);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    byte_4A2281A = 1;
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
                                                            (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, isNormal, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_1B71828(Component_object, v8);
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
  int32_t v14; // w3
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v17; // w21
  System_Action_o *v18; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_4A22819 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, *(_QWORD *)&shadowEffectId);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v5);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Renderer___, v6);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass276_0__changeSpecialShadow_b__0__, v8);
    sub_1B715CC(&BattleActorControl___c__DisplayClass276_0_TypeInfo, v9);
    byte_4A22819 = 1;
  }
  v10 = sub_1B71818(BattleActorControl___c__DisplayClass276_0_TypeInfo);
  BattleActorControl___c__DisplayClass276_0___ctor((BattleActorControl___c__DisplayClass276_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_16;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)this, v13, v14);
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
                                                        (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_object )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, 0, 0LL);
          v17 = *(_DWORD *)(v10 + 24);
          v18 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
          System_Action___ctor(
            v18,
            (Il2CppObject *)v10,
            Method_BattleActorControl___c__DisplayClass276_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__LoadEffectAssetIfNotYet(v17, v18, performance, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1B71828(Component_object, v12);
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
    sub_1B71828(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BattlePerformance_o *performance; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A22833 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_BattleActorControl_endChangeAppearance__, v3);
    byte_4A22833 = 1;
  }
  performance = this->fields.performance;
  v5 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_1B71828(v6, v7);
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
    sub_1B71828(this, name);
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
    sub_1B71830(this, name);
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
    sub_1B71828(this, name);
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
    sub_1B71830(this, name);
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
    sub_1B71828(0LL, key);
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

  if ( (byte_4A227DD & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_23611/*"summon"*/, method);
    byte_4A227DD = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_23611/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_1B71828(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_69217592(0, 1000, 0LL) < StepRate;
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

  if ( (byte_4A227EB & 1) == 0 )
  {
    sub_1B715CC(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_4A227EB = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_43486104(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_43486104(
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

  if ( (byte_4A227EC & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_4A227EC = 1;
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
      sub_1B71828(battleSvtData, voiceTypeId);
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
  int32_t v11; // w3

  if ( (byte_4A2283B & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__coAddAura_d__327_TypeInfo, *(_QWORD *)&auraEffectId);
    byte_4A2283B = 1;
  }
  v7 = sub_1B71818(BattleActorControl__coAddAura_d__327_TypeInfo);
  BattleActorControl__coAddAura_d__327___ctor((BattleActorControl__coAddAura_d__327_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B71828(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
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

  if ( (byte_4A2283E & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__colShiftServant_d__333_TypeInfo, shiftSvt);
    byte_4A2283E = 1;
  }
  v9 = sub_1B71818(BattleActorControl__colShiftServant_d__333_TypeInfo);
  BattleActorControl__colShiftServant_d__333___ctor((BattleActorControl__colShiftServant_d__333_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B71828(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)shiftSvt, v14, v15);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v9 + 56), (int32_t)finishCallback, v16, v17);
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

  if ( (byte_4A2283F & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__colShiftServantChange_d__334_TypeInfo, shiftSvt);
    byte_4A2283F = 1;
  }
  v7 = sub_1B71818(BattleActorControl__colShiftServantChange_d__334_TypeInfo);
  BattleActorControl__colShiftServantChange_d__334___ctor(
    (BattleActorControl__colShiftServantChange_d__334_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1B71828(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)shiftSvt, v12, v13);
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

  if ( (byte_4A22837 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__collChangeAppearance_d__322_TypeInfo, method);
    byte_4A22837 = 1;
  }
  v3 = sub_1B71818(BattleActorControl__collChangeAppearance_d__322_TypeInfo);
  BattleActorControl__collChangeAppearance_d__322___ctor(
    (BattleActorControl__collChangeAppearance_d__322_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v9; // w3

  if ( (byte_4A22832 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__colloadDressServant_d__317_TypeInfo, flg);
    byte_4A22832 = 1;
  }
  v5 = sub_1B71818(BattleActorControl__colloadDressServant_d__317_TypeInfo);
  BattleActorControl__colloadDressServant_d__317___ctor((BattleActorControl__colloadDressServant_d__317_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B71828(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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

  if ( (byte_4A22830 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__colloadTransformServant_d__314_TypeInfo, method);
    byte_4A22830 = 1;
  }
  v3 = sub_1B71818(BattleActorControl__colloadTransformServant_d__314_TypeInfo);
  BattleActorControl__colloadTransformServant_d__314___ctor(
    (BattleActorControl__colloadTransformServant_d__314_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4A227E8 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__coroutinePostCallBack_d__207_TypeInfo, callBack);
    byte_4A227E8 = 1;
  }
  v6 = sub_1B71818(BattleActorControl__coroutinePostCallBack_d__207_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__207___ctor(
    (BattleActorControl__coroutinePostCallBack_d__207_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1B71828(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v6 + 40), (int32_t)callBack, v9, v10);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4A22836 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_5456/*"END_LOAD"*/, method);
    byte_4A22836 = 1;
  }
  BattleActorControl__sendEventFSM_43478204(this, (System_String_o *)StringLiteral_5456/*"END_LOAD"*/, 0, v2);
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

  if ( (byte_4A227E9 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_8680/*"MOTION_BACK"*/, method);
    byte_4A227E9 = 1;
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
    if ( v11->fields.treasureDvcId > 0 )
      goto LABEL_16;
  }
  else if ( !v11 )
  {
    goto LABEL_26;
  }
  if ( System_String__op_Equality(v11->fields.motionname, (System_String_o *)StringLiteral_8680/*"MOTION_BACK"*/, 0LL) )
  {
LABEL_16:
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v4);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v12);
  }
  battleSvtData = (BattleServantData_o *)this->fields.actiondata;
  if ( !battleSvtData )
    goto LABEL_26;
  if ( BattleActionData__isDeadMotion((BattleActionData_o *)battleSvtData, 0LL) )
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
    sub_1B71828(battleSvtData, v4);
  BattlePerformance__endActionData((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_43478204(this, call, 0, v3);
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
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v16; // 0:x0.8

  if ( (byte_4A22840 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___, method);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___, v3);
    sub_1B715CC(&StringLiteral_18795/*"ef_pig_return01"*/, v4);
    byte_4A22840 = 1;
  }
  m_ParticleSystem = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_object__48572668(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_2E528FC *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_1B71828(transform, v6);
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
                            (System_String_o *)StringLiteral_18795/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_object__48572668(
                      v11,
                      (const MethodInfo_2E528FC *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
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
      m_ParticleSystem = UnityEngine_ParticleSystem__get_main((UnityEngine_ParticleSystem_o *)transform, 0LL).fields.m_ParticleSystem;
      v16.fields.m_ParticleSystem = (struct UnityEngine_ParticleSystem_o *)&m_ParticleSystem;
      UnityEngine_ParticleSystem_MainModule__set_loop(v16, 0, 0LL);
      v12 = *((_DWORD *)v13 + 6);
      if ( (int)++v14 >= v12 )
        goto LABEL_18;
    }
LABEL_21:
    sub_1B71830(transform, v6);
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
    BattleActorControl__finishMotion_43484848(this, v7);
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
    sub_1B71828(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_43484848(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4A227E7 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227E7 = 1;
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
      sub_1B71828(MotionSkip, v4);
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

  if ( (byte_4A227C6 & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, name);
    byte_4A227C6 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL)
    || (index = v6->fields.index,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(battleSvtData, 1, 0LL),
        (v8 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1B71828(battleSvtData, name);
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

  if ( (byte_4A227C7 & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, name);
    byte_4A227C7 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v6 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1B71828(battleSvtData, name);
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
    sub_1B71828(0LL, method);
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

  if ( !byte_4A1A756 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, method);
    byte_4A1A756 = 1;
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
    sub_1B71828(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_1B71828(this, method);
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
    sub_1B71828(0LL, method);
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
    sub_1B71828(0LL, method);
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
    sub_1B71828(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(this, method);
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
    sub_1B71828(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, method);
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
  if ( (byte_4A227E1 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&pos);
    byte_4A227E1 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_42;
  distanceofactor = performance->fields.distanceofactor;
  if ( !byte_4A1A751 )
  {
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&pos);
    byte_4A1A751 = 1;
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
    sub_1B71828(this, *(_QWORD *)&pos);
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

  if ( (byte_4A227C5 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A227C5 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.performance;
  if ( !v6 || (data = v6->fields.data) == 0LL )
    sub_1B71828(v4, v5);
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
    sub_1B71828(0LL, method);
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
    sub_1B71828(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, method);
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

  if ( (byte_4A227E2 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_ActorMotionActiveCheck_TypeInfo, method);
    byte_4A227E2 = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_1B71818(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0LL);
    this->fields._checkMotion = v4;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._checkMotion, (int32_t)v4, v5, v6);
    return this->fields._checkMotion;
  }
  return result;
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, method);
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
    sub_1B71828(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w19

  if ( (byte_4A227C4 & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A227C4 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1B71828(0LL, method);
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
    sub_1B71828(0LL, method);
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
  System_Collections_Generic_List_object__o *v4; // x19
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4A227C0 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__ToArray__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v2);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v3);
    byte_4A227C0 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v4 )
    sub_1B71828(v5, v6);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v4,
                                  (const MethodInfo_34D1DB8 *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_1B71828(0LL, hideFlg);
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
    sub_1B71828(this, method);
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
  bool v6; // w21
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x19

  v2 = this;
  if ( (byte_4A227DA & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_13031/*"SummonEndFlag"*/, v3);
    byte_4A227DA = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1B71828(this, method);
  v5 = *(_QWORD *)&motionFSM->max_length;
  v6 = (int)v5 > 0;
  if ( (int)v5 >= 1 )
  {
    v7 = 0LL;
    do
    {
      if ( v7 >= (unsigned int)v5 )
        sub_1B71830(this, method);
      v8 = (UnityEngine_Object_o *)motionFSM->m_Items[v7];
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
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( !this )
          goto LABEL_17;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13031/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmBool__get_Value(
                                           (HutongGames_PlayMaker_FsmBool_o *)this,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return v6;
        }
      }
      LODWORD(v5) = motionFSM->max_length;
      v6 = (__int64)++v7 < (int)v5;
    }
    while ( (__int64)v7 < (int)v5 );
  }
  return v6;
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
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_1B71828(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
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

  if ( (byte_4A22806 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_moveStep__, target);
    sub_1B715CC(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, v19);
    sub_1B715CC(&float_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v21);
    sub_1B715CC(&StringLiteral_12227/*"STEP_START"*/, v22);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v23);
    sub_1B715CC(&StringLiteral_19879/*"hight"*/, v24);
    sub_1B715CC(&StringLiteral_23490/*"step_back"*/, v25);
    byte_4A22806 = 1;
  }
  this->fields.targetObject = target;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v30,
    v31);
  BattleActorControl__playAnimation_43425612(this, (System_String_o *)StringLiteral_23490/*"step_back"*/, 0, v32);
  v33 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v33 )
    sub_1B71828(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19879/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23870/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22516/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12227/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v33,
    v51);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4A22808 & 1) == 0 )
  {
    sub_1B715CC(&iTween_TypeInfo, method);
    byte_4A22808 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60154176(gameObject, 0LL);
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
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
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

  if ( (byte_4A22803 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_moveJump__, target);
    sub_1B715CC(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, v19);
    sub_1B715CC(&float_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_8120/*"JUMP_UP"*/, v21);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v22);
    sub_1B715CC(&StringLiteral_20910/*"jump"*/, v23);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v24);
    sub_1B715CC(&StringLiteral_19879/*"hight"*/, v25);
    byte_4A22803 = 1;
  }
  this->fields.targetObject = target;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v30,
    v31);
  BattleActorControl__playAnimation_43425612(this, (System_String_o *)StringLiteral_20910/*"jump"*/, 0, v32);
  v33 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v33 )
    sub_1B71828(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19879/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23870/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22516/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8120/*"JUMP_UP"*/,
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
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
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

  if ( (byte_4A22805 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_moveStep__, target);
    sub_1B715CC(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, v19);
    sub_1B715CC(&float_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v21);
    sub_1B715CC(&StringLiteral_12227/*"STEP_START"*/, v22);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v23);
    sub_1B715CC(&StringLiteral_19879/*"hight"*/, v24);
    sub_1B715CC(&StringLiteral_23491/*"step_front"*/, v25);
    byte_4A22805 = 1;
  }
  this->fields.targetObject = target;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v30,
    v31);
  BattleActorControl__playAnimation_43425612(this, (System_String_o *)StringLiteral_23491/*"step_front"*/, 0, v32);
  v33 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v33 )
    sub_1B71828(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19879/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23870/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22516/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12227/*"STEP_START"*/,
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
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  const MethodInfo *v35; // x3
  __int64 v36; // x21
  BattleActorControl_EndCallEvent_o *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w2
  int32_t v41; // w3
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
  int32_t v58; // w3
  const MethodInfo *v59; // x3
  int32_t v61; // [xsp+4h] [xbp-7Ch] BYREF
  float v62; // [xsp+8h] [xbp-78h] BYREF
  float v63; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4A22804 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_moveStep__, target);
    sub_1B715CC(&Method_BattleActorControl_playAnimation__, v16);
    sub_1B715CC(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, v19);
    sub_1B715CC(&float_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v21);
    sub_1B715CC(&StringLiteral_12227/*"STEP_START"*/, v22);
    sub_1B715CC(&StringLiteral_24541/*"wait"*/, v23);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v24);
    sub_1B715CC(&StringLiteral_19879/*"hight"*/, v25);
    sub_1B715CC(&StringLiteral_21927/*"name"*/, v26);
    sub_1B715CC(&StringLiteral_23491/*"step_front"*/, v27);
    sub_1B715CC(&StringLiteral_12226/*"STEP_END_02"*/, v28);
    byte_4A22804 = 1;
  }
  this->fields.targetObject = target;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v29, v30);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v31,
    v32);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v33,
    v34);
  BattleActorControl__playAnimation_43425612(this, (System_String_o *)StringLiteral_23491/*"step_front"*/, 0, v35);
  v36 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v36, 0LL);
  v37 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v37, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v36 )
    goto LABEL_6;
  *(_QWORD *)(v36 + 16) = v37;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v36 + 16), (int32_t)v37, v40, v41);
  v63 = hight;
  v45 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v63, v42, v43, v44);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_19879/*"hight"*/,
    v45,
    0LL);
  v62 = time;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v46, v47, v48);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_23870/*"time"*/,
    v49,
    0LL);
  v61 = pos;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v61, v50, v51, v52);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_22516/*"pos"*/,
    v53,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12227/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v36,
    v54);
  v55 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v55, 0LL);
  v56 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v56, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v55 )
LABEL_6:
    sub_1B71828(v38, v39);
  *(_QWORD *)(v55 + 16) = v56;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v55 + 16), (int32_t)v56, v57, v58);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v55,
    (System_String_o *)StringLiteral_21927/*"name"*/,
    (Il2CppObject *)StringLiteral_24541/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12226/*"STEP_END_02"*/,
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
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x3
  __int64 v33; // x21
  BattleActorControl_EndCallEvent_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
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

  if ( (byte_4A22807 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_moveStep__, target);
    sub_1B715CC(&BattleActorControl_EndCallEvent_TypeInfo, v17);
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, v18);
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, v19);
    sub_1B715CC(&float_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_24003/*"treasure_arms"*/, v21);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v22);
    sub_1B715CC(&StringLiteral_12227/*"STEP_START"*/, v23);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v24);
    sub_1B715CC(&StringLiteral_19879/*"hight"*/, v25);
    byte_4A22807 = 1;
  }
  this->fields.targetObject = target;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.targetObject, (int32_t)target, pos, (int32_t)pmevent);
  this->fields.endmotionevent = pmevent;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.endmotionevent, (int32_t)pmevent, v26, v27);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallObject,
    (int32_t)sendEventCallObject,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.endmotionCallMethod,
    (int32_t)sendEventCallMethod,
    v30,
    v31);
  BattleActorControl__playAnimation_43425612(this, (System_String_o *)StringLiteral_24003/*"treasure_arms"*/, 0, v32);
  v33 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v33, 0LL);
  v34 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v34, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v33 )
    sub_1B71828(v35, v36);
  *(_QWORD *)(v33 + 16) = v34;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v34, v37, v38);
  v54 = hight;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v54, v39, v40, v41);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_19879/*"hight"*/,
    v42,
    0LL);
  v53 = time;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v53, v43, v44, v45);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_23870/*"time"*/,
    v46,
    0LL);
  v52 = pos;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v52, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v33,
    (System_String_o *)StringLiteral_22516/*"pos"*/,
    v50,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12227/*"STEP_START"*/,
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

  if ( (byte_4A2280E & 1) == 0 )
  {
    sub_1B715CC(&bool_TypeInfo, method);
    sub_1B715CC(&iTween_EaseType_TypeInfo, v5);
    sub_1B715CC(&System_Collections_Hashtable_TypeInfo, v6);
    sub_1B715CC(&int_TypeInfo, v7);
    sub_1B715CC(&float_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_18704/*"easetype"*/, v9);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v10);
    sub_1B715CC(&StringLiteral_24788/*"y"*/, v11);
    sub_1B715CC(&StringLiteral_20780/*"islocal"*/, v12);
    sub_1B715CC(&iTween_TypeInfo, v13);
    byte_4A2280E = 1;
  }
  v14 = (System_Collections_Hashtable_o *)sub_1B71818(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62084936(v14, 0LL);
  v36 = 0;
  v18 = j_il2cpp_value_box_0(int_TypeInfo, &v36, v15, v16, v17);
  if ( !v14 )
    sub_1B71828(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_24788/*"y"*/,
    v18,
    v14->klass->vtable._24_Clear.methodPtr);
  v35[0] = 1;
  v23 = j_il2cpp_value_box_0(bool_TypeInfo, v35, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_20780/*"islocal"*/,
    v23,
    v14->klass->vtable._24_Clear.methodPtr);
  v34 = 0;
  v27 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v34, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_18704/*"easetype"*/,
    v27,
    v14->klass->vtable._24_Clear.methodPtr);
  v33 = time;
  v31 = j_il2cpp_value_box_0(float_TypeInfo, &v33, v28, v29, v30);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v14->klass->vtable._23_Add.method)(
    v14,
    StringLiteral_23870/*"time"*/,
    v31,
    v14->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60043836(actorObject, v14, 0LL);
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
  if ( (byte_4A2280A & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, table);
    sub_1B715CC(&float_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v6);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v7);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_19879/*"hight"*/, v8);
    byte_4A2280A = 1;
  }
  if ( !v3
    || (v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19879/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_23870/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22516/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v9) )
  {
LABEL_12:
    sub_1B71828(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1B71AE8(v9);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9, float_TypeInfo, v11, v12);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1B71AE8(v10);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v10, float_TypeInfo, v13, v14);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v22 = sub_1B71AE8(v3);
    goto LABEL_11;
  }
  v18 = *(float *)&this->klass;
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v16, v17);
  v21 = v4;
  LODWORD(v22) = klass;
  v23 = v18;
LABEL_11:
  BattleActorControl__moveJump_43501580(v21, *(float *)&v22, v23, v19, v20);
}


void __fastcall BattleActorControl__moveJump_43501580(
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
  BattleActorControl__moveUp_43500452(this, hight, time, v9);
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

  if ( (byte_4A2280B & 1) == 0 )
  {
    sub_1B715CC(&iTween_EaseType_TypeInfo, *(_QWORD *)&pos);
    sub_1B715CC(&System_Collections_Hashtable_TypeInfo, v13);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v14);
    sub_1B715CC(&float_TypeInfo, v15);
    sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v16);
    sub_1B715CC(&StringLiteral_18704/*"easetype"*/, v17);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v18);
    sub_1B715CC(&StringLiteral_22219/*"oncompleteparams"*/, v19);
    sub_1B715CC(&StringLiteral_22220/*"oncompletetarget"*/, v20);
    sub_1B715CC(&StringLiteral_22517/*"position"*/, v21);
    sub_1B715CC(&StringLiteral_18960/*"endMotion"*/, v22);
    sub_1B715CC(&StringLiteral_22218/*"oncomplete"*/, v23);
    sub_1B715CC(&iTween_TypeInfo, v24);
    byte_4A2280B = 1;
  }
  v25 = (System_Collections_Hashtable_o *)sub_1B71818(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62084936(v25, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v26);
  v30 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec, v27, v28, v29);
  if ( !v25 )
    sub_1B71828(v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_22517/*"position"*/,
    v30,
    v25->klass->vtable._24_Clear.methodPtr);
  v44 = 1;
  v35 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v44, v32, v33, v34);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_18704/*"easetype"*/,
    v35,
    v25->klass->vtable._24_Clear.methodPtr);
  v43 = time;
  v39 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v36, v37, v38);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_23870/*"time"*/,
    v39,
    v25->klass->vtable._24_Clear.methodPtr);
  if ( endcall )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v40 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0LL, 0LL);
    if ( callbackEvent && v40 )
    {
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22220/*"oncompletetarget"*/,
        callbackObject,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22218/*"oncomplete"*/,
        callbackEvent,
        v25->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22220/*"oncompletetarget"*/,
        gameObject,
        v25->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
        v25,
        StringLiteral_22218/*"oncomplete"*/,
        StringLiteral_18960/*"endMotion"*/,
        v25->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
      v25,
      StringLiteral_22219/*"oncompleteparams"*/,
      endcall,
      v25->klass->vtable._24_Clear.methodPtr);
  }
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60043836(v42, v25, 0LL);
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
  if ( (byte_4A22809 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_POS_TypeInfo, table);
    sub_1B715CC(&float_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v6);
    sub_1B715CC(&StringLiteral_22516/*"pos"*/, v7);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_19879/*"hight"*/, v8);
    byte_4A22809 = 1;
  }
  if ( !v3
    || (v9 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_19879/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v10 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                v3,
                StringLiteral_23870/*"time"*/,
                *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22516/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v9) )
  {
LABEL_12:
    sub_1B71828(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v9 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1B71AE8(v9);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v9, float_TypeInfo, v11, v12);
  if ( !v10 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v10 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1B71AE8(v10);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v10, float_TypeInfo, v13, v14);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v22 = sub_1B71AE8(v3);
    goto LABEL_11;
  }
  v18 = *(float *)&this->klass;
  v19 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v16, v17);
  v21 = v4;
  LODWORD(v22) = klass;
  v23 = v18;
LABEL_11:
  BattleActorControl__moveStep_43499572(v21, *(float *)&v22, v23, v19, v20);
}


void __fastcall BattleActorControl__moveStep_43499572(
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
  BattleActorControl__moveUp_43500452(this, hight, time, v9);
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
  if ( (byte_4A2280C & 1) == 0 )
  {
    sub_1B715CC(&float_TypeInfo, table);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v5);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_19879/*"hight"*/, v6);
    byte_4A2280C = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v7 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
         v3,
         StringLiteral_19879/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                   v3,
                                   StringLiteral_23870/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  if ( !v7 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v7 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1B71AE8(v7);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v7, float_TypeInfo, v8, v9);
  if ( !v3 )
LABEL_9:
    sub_1B71828(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v12 = *(float *)&this->klass;
    v13 = *(float *)j_il2cpp_object_unbox_0(v3, float_TypeInfo, v10, v11);
    BattleActorControl__moveUp_43500452(v4, v12, v13, v14);
    return;
  }
LABEL_11:
  v17 = sub_1B71AE8(v3);
  BattleActorControl__moveDown(v15, *(float *)&v17, v16);
}


void __fastcall BattleActorControl__moveUp_43500452(
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

  if ( (byte_4A2280D & 1) == 0 )
  {
    sub_1B715CC(&bool_TypeInfo, method);
    sub_1B715CC(&iTween_EaseType_TypeInfo, v7);
    sub_1B715CC(&System_Collections_Hashtable_TypeInfo, v8);
    sub_1B715CC(&float_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_18704/*"easetype"*/, v10);
    sub_1B715CC(&StringLiteral_23870/*"time"*/, v11);
    sub_1B715CC(&StringLiteral_22219/*"oncompleteparams"*/, v12);
    sub_1B715CC(&StringLiteral_22220/*"oncompletetarget"*/, v13);
    sub_1B715CC(&StringLiteral_24788/*"y"*/, v14);
    sub_1B715CC(&StringLiteral_20780/*"islocal"*/, v15);
    sub_1B715CC(&StringLiteral_22218/*"oncomplete"*/, v16);
    sub_1B715CC(&StringLiteral_21467/*"moveDown"*/, v17);
    sub_1B715CC(&iTween_TypeInfo, v18);
    byte_4A2280D = 1;
  }
  v19 = (System_Collections_Hashtable_o *)sub_1B71818(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62084936(v19, 0LL);
  v47 = hight;
  v23 = j_il2cpp_value_box_0(float_TypeInfo, &v47, v20, v21, v22);
  if ( !v19 )
    sub_1B71828(v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_24788/*"y"*/,
    v23,
    v19->klass->vtable._24_Clear.methodPtr);
  v46[0] = 1;
  v28 = j_il2cpp_value_box_0(bool_TypeInfo, v46, v25, v26, v27);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_20780/*"islocal"*/,
    v28,
    v19->klass->vtable._24_Clear.methodPtr);
  v45 = 1;
  v32 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v45, v29, v30, v31);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_18704/*"easetype"*/,
    v32,
    v19->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_22220/*"oncompletetarget"*/,
    gameObject,
    v19->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_22218/*"oncomplete"*/,
    StringLiteral_21467/*"moveDown"*/,
    v19->klass->vtable._24_Clear.methodPtr);
  v44 = time;
  v37 = j_il2cpp_value_box_0(float_TypeInfo, &v44, v34, v35, v36);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_22219/*"oncompleteparams"*/,
    v37,
    v19->klass->vtable._24_Clear.methodPtr);
  v43 = time;
  v41 = j_il2cpp_value_box_0(float_TypeInfo, &v43, v38, v39, v40);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v19->klass->vtable._23_Add.method)(
    v19,
    StringLiteral_23870/*"time"*/,
    v41,
    v19->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_60043836(actorObject, v19, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v5; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v8; // x21

  if ( (byte_4A22827 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_skipVoice__, method);
    sub_1B715CC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4A22827 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B71818(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1B71828(IsNoTouchSkip, v5);
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
  if ( (byte_4A2282F & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_skipDead__, method);
    this = (BattleActorControl_o *)sub_1B715CC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4A2282F = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v5 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 33),
        v6 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B71818(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v6, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v5) )
  {
    sub_1B71828(this, method);
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

  if ( (byte_4A22826 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_skipVoice__, method);
    sub_1B715CC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4A22826 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v8 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B71818(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v8,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1B71828(IsNoTouchSkip, v5);
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
  if ( (byte_4A2282E & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_skipDead__, method);
    this = (BattleActorControl_o *)sub_1B715CC(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo, v3);
    byte_4A2282E = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v5 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 33),
        v6 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1B71818(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v6, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v5) )
  {
    sub_1B71828(this, method);
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
  if ( (byte_4A227F8 & 1) == 0 )
  {
    sub_1B715CC(&string_TypeInfo, table);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_21927/*"name"*/, v5);
    byte_4A227F8 = 1;
  }
  if ( !table )
    sub_1B71828(this, table);
  v6 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_21927/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v6 && v6->klass != string_TypeInfo )
  {
    sub_1B71AE8(v6);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v8, v9, v10, v11);
  }
  else
  {
    BattleActorControl__playAnimation_43425612(v4, v6, 0, v7);
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

  if ( (byte_4A227FA & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_1894/*"@playAnim\n =>{0},{1}"*/, animname);
    byte_4A227FA = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_61519876((System_String_o *)StringLiteral_1894/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1B71828(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_43425612(
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

  if ( (byte_4A227F9 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___, animname);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B715CC(&SimpleAnimation_State_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_24541/*"wait"*/, v10);
    sub_1B715CC(&StringLiteral_1893/*"@playAnim\n =>{0}"*/, v11);
    byte_4A227F9 = 1;
  }
  v13 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v13 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v13, 1, v12);
  System_String__Format((System_String_o *)StringLiteral_1893/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v13, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_33;
  BattleFBXComponent__playAnimation(fbxcomponent, v13, 0LL);
  if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_24541/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_33;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)fbxcomponent,
                                   (const MethodInfo_2EAABFC *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
        sub_1B71828(fbxcomponent, v14);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_33;
      v21 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)fbxcomponent,
              (const MethodInfo_2EAABFC *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
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
            v27 = sub_1BC35AC(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL);
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

  if ( (byte_4A227E5 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_BattleActionData__TypeInfo, badata);
    sub_1B715CC(&Method_BattleActorControl_playBattleActionDataLocal__, v5);
    sub_1B715CC(&Method_BattleCallBack_BattleActionData___ctor__, v6);
    sub_1B715CC(&BattleCallBack_BattleActionData__TypeInfo, v7);
    byte_4A227E5 = 1;
  }
  v8 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v8 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v8, 0LL) )
  {
    v12 = BattleActorControl__get_CheckMotion(this, v10);
    v13 = (System_Action_object__o *)sub_1B71818(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(v13, (Il2CppObject *)this, Method_BattleActorControl_playBattleActionDataLocal__, 0LL);
    v14 = (BattleCallBack_T__o *)sub_1B71818(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v14,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v13,
      (const MethodInfo_3071430 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v12 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v12, (BattleCallBackBase_o *)v14, 0LL);
      return;
    }
LABEL_8:
    sub_1B71828(v8, v9);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v11);
}


void __fastcall BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v8; // x2
  __int64 v9; // x1
  BattleActionData_o *actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t type; // w21
  BattleActionData_c *v17; // x0
  const MethodInfo *v18; // x3
  BattleActionData_o *v19; // x8
  System_String_o *motionname; // x1
  _BOOL4 IsVanishSkill; // w21
  System_String_o *v22; // x0
  BattleServantData_o *battleSvtData; // x0

  if ( (byte_4A227E6 & 1) == 0 )
  {
    sub_1B715CC(&BattleActionData_TypeInfo, badata);
    sub_1B715CC(&StringLiteral_8678/*"MOTION_"*/, v6);
    byte_4A227E6 = 1;
  }
  p_actiondata = &this->fields.actiondata;
  this->fields.actiondata = badata;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.actiondata, (int32_t)badata, (int32_t)method, v3);
  BattleActorControl__setActionData(this, this->fields.actiondata, v8);
  actiondata = this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_33;
  ShiftServant = BattleActionData__getShiftServant(actiondata, 0LL);
  this->fields.myShiftData = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.myShiftData, 0, v12, v13);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&this->fields.myShiftData,
      (int32_t)ShiftServant,
      v14,
      (int32_t)v15);
  }
  if ( !badata )
    goto LABEL_33;
  if ( badata->fields.noOperation )
  {
    actiondata = (BattleActionData_o *)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0LL);
      return;
    }
    goto LABEL_33;
  }
  if ( !*p_actiondata )
    goto LABEL_33;
  type = (*p_actiondata)->fields.type;
  v17 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v17 = BattleActionData_TypeInfo;
  }
  if ( type == v17->static_fields->TYPE_TW )
    goto LABEL_19;
  actiondata = *p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_33;
  if ( BattleActionData__isCommandAttack(actiondata, 0LL) )
    goto LABEL_19;
  actiondata = *p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_33;
  if ( BattleActionData__isCommonEnemyAttack(actiondata, 0LL) )
LABEL_19:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, v15);
  actiondata = (BattleActionData_o *)this->fields.performance;
  if ( !actiondata
    || (actiondata = (BattleActionData_o *)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0LL
    || (actiondata = (BattleActionData_o *)((__int64 (__fastcall *)(BattleActionData_o *, void *))actiondata->klass->vtable._9_ExecAction.method)(
                                             actiondata,
                                             actiondata->klass[1]._1.image),
        (v19 = *p_actiondata) == 0LL) )
  {
LABEL_33:
    sub_1B71828(actiondata, v9);
  }
  motionname = v19->fields.motionname;
  IsVanishSkill = v19->fields.IsVanishSkill;
  if ( !motionname )
  {
    v22 = System_Int32__ToString((int)v19 + 48, 0LL);
    motionname = System_String__Concat_61505504((System_String_o *)StringLiteral_8678/*"MOTION_"*/, v22, 0LL);
    if ( IsVanishSkill )
      goto LABEL_25;
LABEL_27:
    BattleActorControl__sendMotionEventFSM(this, motionname, 0, v18);
    goto LABEL_28;
  }
  if ( !v19->fields.IsVanishSkill )
    goto LABEL_27;
LABEL_25:
  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_43478204(this, motionname, 0, v18);
LABEL_28:
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
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4A227F7 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleActorControl_sendEventFSM__, animname);
    sub_1B715CC(&BattleActorControl_EndCallEvent_TypeInfo, v9);
    sub_1B715CC(&BattleActorControl_EventClass_TypeInfo, v10);
    sub_1B715CC(&StringLiteral_1895/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/, v11);
    sub_1B715CC(&StringLiteral_19060/*"event"*/, v12);
    byte_4A227F7 = 1;
  }
  System_String__Format_61519944(
    (System_String_o *)StringLiteral_1895/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v13 = sub_1B71818(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v13, 0LL);
  v14 = (BattleActorControl_EndCallEvent_o *)sub_1B71818(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v14, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v13 )
    sub_1B71828(v15, v16);
  *(_QWORD *)(v13 + 16) = v14;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)v14, v17, v18);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v13,
    (System_String_o *)StringLiteral_19060/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v13, v19);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v20);
  else
    BattleActorControl__playAnimation_43425612(this, animname, 0, v20);
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
    sub_1B71828(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.actiondata, 0, v9, v10);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_GameObject_o *result; // x0
  int32_t WeaponGroup; // w20
  UnityEngine_Object_o *Manager__loadEffect; // x20
  bool v17; // w8
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_GameObject_o *v19; // x23
  UnityEngine_GameObject_o *v20; // x23
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  z = vec3.fields.z;
  y = vec3.fields.y;
  x = vec3.fields.x;
  if ( (byte_4A227DF & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, effectname);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v11);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__, v12);
    sub_1B715CC(&StringLiteral_16145/*"_ENEMY"*/, v13);
    byte_4A227DF = 1;
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
          v19 = result;
          if ( !byte_4A1A751 )
          {
            result = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, effectname);
            byte_4A1A751 = 1;
          }
          if ( v19 )
          {
            UnityEngine_Transform__set_localPosition(
              (UnityEngine_Transform_o *)v19,
              UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
              0LL);
            result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                   (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                   0LL);
            v20 = result;
            if ( !byte_4A1A756 )
            {
              result = (UnityEngine_GameObject_o *)sub_1B715CC(&UnityEngine_Vector3_TypeInfo, effectname);
              byte_4A1A756 = 1;
            }
            if ( v20 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v20,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
              if ( result )
              {
                BattleSeManager__PlaySeByEffect((BattleSeManager_o *)result, effectname, 0LL, 0LL);
                result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                       0LL);
                if ( result )
                {
                  v22.fields.x = -x;
                  v22.fields.y = y;
                  v22.fields.z = z;
                  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v22, 0LL);
                  if ( sideflip )
                  {
                    result = (UnityEngine_GameObject_o *)this->fields.actorside;
                    if ( !result )
                      goto LABEL_30;
                    if ( System_String__Equals_61513820(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16145/*"_ENEMY"*/,
                           0LL) )
                    {
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_30;
                      v23.fields.x = x;
                      v23.fields.y = y;
                      v23.fields.z = z;
                      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)result, v23, 0LL);
                      result = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                             (UnityEngine_GameObject_o *)Manager__loadEffect,
                                                             0LL);
                      if ( !result )
                        goto LABEL_30;
                      UnityEngine_Transform__Rotate_69280516((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
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
    sub_1B71828(result, effectname);
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
  int32_t v20; // w3
  SePlayer_o *v21; // x19
  BattleActorControl_c *v22; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_4A227ED & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_TypeInfo, *(_QWORD *)&type);
    sub_1B715CC(&Voice_TypeInfo, v11);
    byte_4A227ED = 1;
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
    sub_1B71828(v12, v14);
  }
  v15 = 0;
LABEL_17:
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v18 = BattleActorControl__playVoice_43486732(this, FileName, volume, callback, isSaveVoicePlayed, v17);
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->prevDeadVoice, (int32_t)v21, v19, v20);
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

  if ( (byte_4A227F0 & 1) == 0 )
  {
    sub_1B715CC(&Voice_TypeInfo, *(_QWORD *)&type);
    byte_4A227F0 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_43487660(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_43487660(
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

  if ( (byte_4A227F1 & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    byte_4A227F1 = 1;
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
        sub_1B71828(battleSvtData, v9);
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

  if ( (byte_4A227F3 & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, fileName);
    byte_4A227F3 = 1;
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
      sub_1B71828(battleSvtData, fileName);
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


SePlayer_o *__fastcall BattleActorControl__playVoice_43486732(
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
  int32_t v16; // w2
  int32_t v17; // w3
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

  if ( (byte_4A227EE & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, voiceTypeId);
    sub_1B715CC(&string___TypeInfo, v11);
    byte_4A227EE = 1;
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
    isNoVoice = (BattleData_o *)sub_1B71674(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_26;
    v18 = (System_String_array *)isNoVoice;
    if ( !LODWORD(isNoVoice->fields.m_CancellationTokenSource) )
      sub_1B71830(isNoVoice, v13);
    isNoVoice->fields.rootfsm = (struct PlayMakerFSM_o *)voiceTypeId;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&isNoVoice->fields.rootfsm, (int32_t)voiceTypeId, v16, v17);
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
    sub_1B71828(isNoVoice, v13);
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
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v10; // x20
  unsigned __int64 v11; // x23
  int32_t v12; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v14; // x21

  if ( (byte_4A22838 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v4);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v5);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    byte_4A22838 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           auraList,
           (const MethodInfo_3148514 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !auraList )
    goto LABEL_19;
  entries = auraList->fields._entries;
  v10 = auraList;
  if ( (int)entries >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)entries )
        sub_1B71830(auraList, method);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v12 = *(&v10->fields._count + v11);
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               auraList,
               v12,
               (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
        v14 = System_Collections_Generic_Dictionary_int__object___get_Item(
                auraList,
                v12,
                (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69257852((UnityEngine_Object_o *)v14, 0LL);
      }
      LODWORD(entries) = v10->fields._entries;
      if ( (__int64)++v11 >= (int)entries )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B71828(auraList, method);
  }
LABEL_17:
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___Clear(
    auraList,
    (const MethodInfo_31489DC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
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

  if ( (byte_4A2283A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v3);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v4);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v6);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v8);
    byte_4A2283A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_3148504 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_3148664 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_19:
    sub_1B71828(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v12,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_37D52EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v12,
            (const MethodInfo_328F640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
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
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
  __int64 v3; // x1
  struct PlayMakerFSM_array *motionFSM; // x20
  __int64 v5; // x8
  unsigned __int64 i; // x21
  UnityEngine_Object_o *v7; // x19

  v2 = this;
  if ( (byte_4A227D9 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_13031/*"SummonEndFlag"*/, v3);
    byte_4A227D9 = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1B71828(this, method);
  v5 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v5 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v5; ++i )
    {
      if ( i >= (unsigned int)v5 )
        sub_1B71830(this, method);
      v7 = (UnityEngine_Object_o *)motionFSM->m_Items[i];
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
                                         (System_String_o *)StringLiteral_13031/*"SummonEndFlag"*/,
                                         0LL);
        if ( this )
          LOBYTE(this->fields.shadowObj) = 0;
      }
      LODWORD(v5) = motionFSM->max_length;
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
    sub_1B71828(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x3

  if ( (byte_4A227E4 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_8684/*"MOTION_DAMAGE"*/, method);
    byte_4A227E4 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_1B71828(0LL, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
    BattleActorControl__sendMotionEventFSM(this, (System_String_o *)StringLiteral_8684/*"MOTION_DAMAGE"*/, 0, v5);
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
  if ( (byte_4A227DB & 1) == 0 )
  {
    sub_1B715CC(&string_TypeInfo, table);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_19060/*"event"*/, v5);
    byte_4A227DB = 1;
  }
  if ( !table )
    sub_1B71828(this, table);
  v6 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_19060/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v8 = (System_String_o *)v6;
  if ( v6 && *v6 != string_TypeInfo )
  {
    sub_1B71AE8(v6);
  }
  else
  {
    v9 = v4;
    v10 = v8;
    v11 = 0;
  }
  BattleActorControl__sendEventFSM_43478204(v9, v10, v11, v7);
}


void __fastcall BattleActorControl__sendEventFSM_43478204(
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
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v22; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v24; // x8
  __int64 v25; // x9
  int max_length; // w10
  UnityEngine_Object_o *v27; // x22
  struct PlayMakerFSM_array *v28; // x8
  __int64 v29; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v30; // x21
  struct PlayMakerFSM_array *v31; // x8
  __int64 v32; // x9

  if ( (byte_4A227DE & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, name);
    sub_1B715CC(&string___TypeInfo, v7);
    sub_1B715CC(&StringLiteral_24610/*"weapon"*/, v8);
    sub_1B715CC(&StringLiteral_1897/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/, v9);
    sub_1B715CC(&StringLiteral_18119/*"common"*/, v10);
    byte_4A227DE = 1;
  }
  Fsm = sub_1B71674(string___TypeInfo, 2LL);
  if ( !Fsm )
    goto LABEL_29;
  v15 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_28;
  v16 = StringLiteral_24610/*"weapon"*/;
  *(_QWORD *)(Fsm + 32) = StringLiteral_24610/*"weapon"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(Fsm + 32), v16, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_28;
  v19 = StringLiteral_18119/*"common"*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_18119/*"common"*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v15 + 40), v19, v17, v18);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v15 + 24) )
    goto LABEL_28;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_29;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_28;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_29;
  v22 = *(Il2CppObject **)(v15 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_61519944(
                   (System_String_o *)StringLiteral_1897/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v22,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v24 = this->fields.motionFSM;
  if ( v24 )
  {
    v25 = this->fields.actindex;
    max_length = v24->max_length;
    if ( (int)v25 < max_length )
    {
      if ( (unsigned int)v25 >= max_length )
        goto LABEL_28;
      v27 = (UnityEngine_Object_o *)v24->m_Items[v25];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v12);
          v28 = this->fields.motionFSM;
          if ( !v28 )
            goto LABEL_29;
          v29 = this->fields.actindex;
          if ( (unsigned int)v29 >= v28->max_length )
            goto LABEL_28;
          v30 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v28->m_Items[v29];
          if ( !Fsm )
            goto LABEL_29;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_29;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v30 )
            goto LABEL_29;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v30, (System_String_o *)Fsm, 0LL);
        }
        v31 = this->fields.motionFSM;
        if ( !v31 )
          goto LABEL_29;
        v32 = this->fields.actindex;
        if ( (unsigned int)v32 < v31->max_length )
        {
          Fsm = (__int64)v31->m_Items[v32];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_29:
          sub_1B71828(Fsm, v12);
        }
LABEL_28:
        sub_1B71830(Fsm, v12);
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
    sub_1B71828(v7, v8);
  this->fields.actindex = !v7;
  BattleActorControl__sendEventFSM_43478204(this, name, isCallFinishInterrupt, v9);
}


void __fastcall BattleActorControl__sendMotionEventFSMCommon(
        BattleActorControl_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_43478204(this, name, 0, v3);
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

  v4 = this;
  if ( (byte_4A227D6 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_4852/*"Count_Action"*/, actiondata);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_4853/*"Count_Hit"*/, v5);
    byte_4A227D6 = 1;
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
                                   (System_String_o *)StringLiteral_4852/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_43;
  v7 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v7 )
    goto LABEL_43;
  LODWORD(v7->fields.shadowObj) = (_DWORD)this;
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
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4853/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_43;
  LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
  v9 = v4->fields.motionFSM;
  if ( !v9 )
    goto LABEL_43;
  if ( v9->max_length <= 1 )
    goto LABEL_44;
  this = (BattleActorControl_o *)v9->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields.nodeText) == 0LL )
  {
LABEL_43:
    sub_1B71828(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4852/*"Count_Action"*/,
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_43;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4852/*"Count_Action"*/,
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
LABEL_44:
    sub_1B71830(this, actiondata);
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
                                   (System_String_o *)StringLiteral_4853/*"Count_Hit"*/,
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
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_43;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4853/*"Count_Hit"*/,
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
    sub_1B71828(this, 0LL);
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
    sub_1B71828(CompleteList, name);
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
    sub_1B71828(EventList, name);
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
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  bool v12; // w19
  Il2CppObject *currentValue; // x20
  Il2CppObject *Component_object; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A22839 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, flg);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__, v5);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__,
      v6);
    sub_1B715CC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__,
      v7);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__, v10);
    byte_4A22839 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_3148504 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_3148664 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_20:
    sub_1B71828(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_37D52EC *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
         &v15,
         (const MethodInfo_328F640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
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
                             (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
              (const MethodInfo_328F640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
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

  if ( (byte_4A227D1 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, camera);
    byte_4A227D1 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_1B71828(gameObject, v6);
  }
  *((_QWORD *)gameObject + 4) = camera;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(gameObject + 32), (int32_t)camera, v7, v8);
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
  if ( (byte_4A227E0 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, tr);
    byte_4A227E0 = 1;
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
    sub_1B71828(gameObject, v6);
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
    sub_1B71828(actorObject, method);
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
    sub_1B71828(actorObject, method);
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
    sub_1B71828(actorObject, method);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.enemyStage, (int32_t)obj, (int32_t)method, v3);
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
  PlayMakerFSM_o *Master_object; // x0
  __int64 v9; // x1
  int v10; // w20
  unsigned __int64 v11; // x25
  char i; // w8
  struct PlayMakerFSM_array *v13; // x9
  char v14; // w24
  UnityEngine_Object_o *v15; // x21
  struct PlayMakerFSM_array *v16; // x8
  struct PlayMakerFSM_array *v17; // x8

  if ( (byte_4A227D5 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B715CC(&StringLiteral_8379/*"LimitedPeriod"*/, v5);
    sub_1B715CC(&StringLiteral_8209/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/, v6);
    byte_4A227D5 = 1;
  }
  motionFSM = this->fields.motionFSM;
  if ( motionFSM && (int)motionFSM->max_length >= 2 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (PlayMakerFSM_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( Master_object )
    {
      Master_object = (PlayMakerFSM_o *)ConstantMaster__GetValue(
                                          (ConstantMaster_o *)Master_object,
                                          (System_String_o *)StringLiteral_8209/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                          0LL);
      v10 = (int)Master_object;
      v11 = 0LL;
      for ( i = 1; ; i = 0 )
      {
        v13 = this->fields.motionFSM;
        if ( !v13 )
          break;
        v14 = i;
        if ( v11 >= v13->max_length )
          goto LABEL_30;
        v15 = (UnityEngine_Object_o *)v13->m_Items[v11];
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (PlayMakerFSM_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          v16 = this->fields.motionFSM;
          if ( !v16 )
            break;
          if ( v11 >= v16->max_length )
            goto LABEL_30;
          Master_object = v16->m_Items[v11];
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
                                              (System_String_o *)StringLiteral_8379/*"LimitedPeriod"*/,
                                              0LL);
          if ( Master_object )
          {
            v17 = this->fields.motionFSM;
            if ( !v17 )
              break;
            if ( v11 >= v17->max_length )
LABEL_30:
              sub_1B71830(Master_object, v9);
            Master_object = v17->m_Items[v11];
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
                                                (System_String_o *)StringLiteral_8379/*"LimitedPeriod"*/,
                                                0LL);
            if ( !Master_object )
              break;
            LODWORD(Master_object->fields.addEventHandlers) = v10;
          }
        }
        v11 = 1LL;
        if ( (v14 & 1) == 0 )
          return;
      }
    }
    sub_1B71828(Master_object, v9);
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
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 gameObject; // x0
  __int64 v34; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v37; // x25
  int32_t v38; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v40; // x26
  struct PlayMakerFSM_array *v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x26
  struct PlayMakerFSM_array *v45; // x25
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x24
  unsigned __int64 v49; // x27
  struct System_String_o **p_actorside; // x24
  char v51; // w8
  struct PlayMakerFSM_array *v52; // x9
  char v53; // w28
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v55; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  struct PlayMakerFSM_array *v58; // x8
  struct PlayMakerFSM_array *v59; // x8
  struct PlayMakerFSM_array *v60; // x8
  int32_t v61; // w2
  int32_t v62; // w3
  struct PlayMakerFSM_array *v63; // x8
  struct PlayMakerFSM_array *v64; // x8
  char v65; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v68; // x8
  struct BattlePerformance_o *v69; // x8
  float v70; // s0
  struct PlayMakerFSM_array *v71; // x8
  struct BattlePerformance_o *v72; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v74; // x0
  __int64 v75; // x1
  struct PlayMakerFSM_array *v76; // x8
  PlayMakerFSM_o *v77; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
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
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v95; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v96; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A227D4 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v13);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v14);
    sub_1B715CC(&long_TypeInfo, v15);
    sub_1B715CC(&JsonManager_TypeInfo, v16);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v17);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v18);
    sub_1B715CC(&PlayMakerFSM___TypeInfo, v19);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_13513/*"TargetFrontPos"*/, v21);
    sub_1B715CC(&StringLiteral_13512/*"TargetBackPos"*/, v22);
    sub_1B715CC(&StringLiteral_3960/*"Camera"*/, v23);
    sub_1B715CC(&StringLiteral_2236/*"ActorObject"*/, v24);
    sub_1B715CC(&StringLiteral_16145/*"_ENEMY"*/, v25);
    sub_1B715CC(&StringLiteral_3966/*"CameraFsm"*/, v26);
    sub_1B715CC(&StringLiteral_10563/*"Performance"*/, v27);
    sub_1B715CC(&StringLiteral_2237/*"ActorSide"*/, v28);
    byte_4A227D4 = 1;
  }
  memset(&v96, 0, sizeof(v96));
  v29 = (struct PlayMakerFSM_array *)sub_1B71674(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v29;
  p_motionFSM = &this->fields.motionFSM;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.motionFSM, (int32_t)v29, v31, v32);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_105;
  v37 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_105;
  v38 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v37, v38, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_105;
  v40 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v41 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v40,
                          (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v41 )
    goto LABEL_105;
  v44 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B71708(gameObject, v41->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_120;
  }
  if ( !v41->max_length )
    goto LABEL_106;
  v41->m_Items[0] = (PlayMakerFSM_o *)v44;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v41->m_Items, v44, v42, v43);
  if ( !Object )
    goto LABEL_105;
  v45 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v45 )
    goto LABEL_105;
  v48 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B71708(gameObject, v45->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_120:
      v94 = sub_1B7184C(gameObject);
      sub_1B716F4(v94, 0LL);
    }
  }
  if ( v45->max_length <= 1 )
LABEL_106:
    sub_1B71830(gameObject, v34);
  v45->m_Items[1] = (PlayMakerFSM_o *)v48;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v45->m_Items[1], v48, v46, v47);
  v49 = 0LL;
  p_actorside = &this->fields.actorside;
  v51 = 1;
  do
  {
    v52 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    v53 = v51;
    if ( v49 >= v52->max_length )
      goto LABEL_106;
    gameObject = (__int64)v52->m_Items[v49];
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
                      (System_String_o *)StringLiteral_2236/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v55 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v49 >= v55->max_length )
      goto LABEL_106;
    gameObject = (__int64)v55->m_Items[v49];
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
                            (System_String_o *)StringLiteral_2237/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(gameObject + 56), (int32_t)side, v56, v57);
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v49 >= v58->max_length )
      goto LABEL_106;
    gameObject = (__int64)v58->m_Items[v49];
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
                            (System_String_o *)StringLiteral_3960/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v59 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v49 >= v59->max_length )
      goto LABEL_106;
    gameObject = (__int64)v59->m_Items[v49];
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
                            (System_String_o *)StringLiteral_3966/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v60 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v49 >= v60->max_length )
      goto LABEL_106;
    gameObject = (__int64)v60->m_Items[v49];
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
                            (System_String_o *)StringLiteral_10563/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_105;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.actorside, (int32_t)side, v61, v62);
    v63 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_105;
    if ( v49 >= v63->max_length )
      goto LABEL_106;
    gameObject = (__int64)v63->m_Items[v49];
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
                            (System_String_o *)StringLiteral_13513/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_105;
      gameObject = System_String__Equals_61513820(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16145/*"_ENEMY"*/,
                     0LL);
      v64 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_105;
      if ( v49 >= v64->max_length )
        goto LABEL_106;
      v65 = gameObject;
      gameObject = (__int64)v64->m_Items[v49];
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
                              (System_String_o *)StringLiteral_13513/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_105;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v65 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_105;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v68 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_105;
        if ( v49 >= v68->max_length )
          goto LABEL_106;
        gameObject = (__int64)v68->m_Items[v49];
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
                                (System_String_o *)StringLiteral_13512/*"TargetBackPos"*/,
                                0LL);
        v69 = this->fields.performance;
        if ( !v69 || !gameObject )
          goto LABEL_105;
        v70 = v69->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_105;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v71 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_105;
        if ( v49 >= v71->max_length )
          goto LABEL_106;
        gameObject = (__int64)v71->m_Items[v49];
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
                                (System_String_o *)StringLiteral_13512/*"TargetBackPos"*/,
                                0LL);
        v72 = this->fields.performance;
        if ( !v72 || !gameObject )
          goto LABEL_105;
        v70 = -v72->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v70;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v51 = 0;
    v49 = 1LL;
  }
  while ( (v53 & 1) != 0 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_105;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_105:
    sub_1B71828(gameObject, v34);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v95,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_319F140 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v96 = v95;
  while ( 1 )
  {
    v74 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v96,
            (const MethodInfo_329AD08 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v74 )
      break;
    v76 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1B71828(v74, v75);
    if ( !v76->max_length )
      sub_1B71830(v74, v75);
    v77 = v76->m_Items[0];
    if ( !v77 )
      sub_1B71828(0LL, v75);
    key = v96.fields._current.fields.key;
    value = v96.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v77, 0LL);
    if ( !Fsm )
      sub_1B71828(0LL, v81);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1B71828(0LL, v81);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v85 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1B71828(FsmInt, v84);
      if ( !v85->max_length )
        sub_1B71830(FsmInt, v84);
      v86 = v85->m_Items[0];
      if ( !v86 )
        sub_1B71828(0LL, v84);
      v87 = PlayMakerFSM__get_Fsm(v86, 0LL);
      if ( !v87 )
        sub_1B71828(0LL, v88);
      v89 = v87->fields.variables;
      if ( !v89 )
        sub_1B71828(0LL, v88);
      v90 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v89, (System_String_o *)key, 0LL);
      if ( !v90 )
        sub_1B71828(0LL, v91);
      if ( !value )
        goto LABEL_113;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1B71AE8(value);
LABEL_113:
        sub_1B71828(v90, v91);
      }
      v90->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v92, v93);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v96,
    (const MethodInfo_329AE28 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  int32_t v30; // w3
  __int64 gameObject; // x0
  __int64 v32; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *commonMotionPrefab; // x24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v37; // x25
  int32_t v38; // w26
  int32_t WeaponGroup; // w27
  UnityEngine_GameObject_o *v40; // x26
  struct PlayMakerFSM_array *v41; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  __int64 v44; // x26
  struct PlayMakerFSM_array *v45; // x25
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x24
  unsigned __int64 v49; // x27
  struct System_String_o **p_actorside; // x24
  char v51; // w8
  struct PlayMakerFSM_array *v52; // x9
  char v53; // w28
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v55; // x8
  int32_t v56; // w2
  int32_t v57; // w3
  struct PlayMakerFSM_array *v58; // x8
  struct PlayMakerFSM_array *v59; // x8
  struct PlayMakerFSM_array *v60; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v61; // x25
  int32_t v62; // w2
  int32_t v63; // w3
  struct PlayMakerFSM_array *v64; // x8
  struct PlayMakerFSM_array *v65; // x8
  char v66; // w25
  struct BattlePerformance_o *v67; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v69; // x8
  struct BattlePerformance_o *v70; // x8
  float v71; // s0
  struct PlayMakerFSM_array *v72; // x8
  struct BattlePerformance_o *v73; // x8
  System_String_o *StrParam; // x21
  _BOOL8 v75; // x0
  __int64 v76; // x1
  struct PlayMakerFSM_array *v77; // x8
  PlayMakerFSM_o *v78; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v82; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v85; // x1
  struct PlayMakerFSM_array *v86; // x8
  PlayMakerFSM_o *v87; // x0
  HutongGames_PlayMaker_Fsm_o *v88; // x0
  __int64 v89; // x1
  HutongGames_PlayMaker_FsmVariables_o *v90; // x0
  HutongGames_PlayMaker_FsmInt_o *v91; // x0
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x3
  const MethodInfo *v95; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  const MethodInfo *v99; // x1
  __int64 v100; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v101; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v102; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4A227D2 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, side);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v11);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v12);
    sub_1B715CC(&long_TypeInfo, v13);
    sub_1B715CC(&JsonManager_TypeInfo, v14);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v16);
    sub_1B715CC(&PlayMakerFSM___TypeInfo, v17);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v18);
    sub_1B715CC(&StringLiteral_13513/*"TargetFrontPos"*/, v19);
    sub_1B715CC(&StringLiteral_13512/*"TargetBackPos"*/, v20);
    sub_1B715CC(&StringLiteral_3960/*"Camera"*/, v21);
    sub_1B715CC(&StringLiteral_2236/*"ActorObject"*/, v22);
    sub_1B715CC(&StringLiteral_16145/*"_ENEMY"*/, v23);
    sub_1B715CC(&StringLiteral_3966/*"CameraFsm"*/, v24);
    sub_1B715CC(&StringLiteral_10563/*"Performance"*/, v25);
    sub_1B715CC(&StringLiteral_2237/*"ActorSide"*/, v26);
    byte_4A227D2 = 1;
  }
  memset(&v102, 0, sizeof(v102));
  v27 = (struct PlayMakerFSM_array *)sub_1B71674(PlayMakerFSM___TypeInfo, 2LL);
  this->fields.motionFSM = v27;
  p_motionFSM = &this->fields.motionFSM;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.motionFSM, (int32_t)v27, v29, v30);
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
  v37 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_107;
  v38 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v37, v38, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_107;
  v40 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v41 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v40,
                          (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v41 )
    goto LABEL_107;
  v44 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B71708(gameObject, v41->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_122;
  }
  if ( !v41->max_length )
    goto LABEL_108;
  v41->m_Items[0] = (PlayMakerFSM_o *)v44;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v41->m_Items, v44, v42, v43);
  if ( !Object )
    goto LABEL_107;
  v45 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v45 )
    goto LABEL_107;
  v48 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1B71708(gameObject, v45->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_122:
      v100 = sub_1B7184C(gameObject);
      sub_1B716F4(v100, 0LL);
    }
  }
  if ( v45->max_length <= 1 )
LABEL_108:
    sub_1B71830(gameObject, v32);
  v45->m_Items[1] = (PlayMakerFSM_o *)v48;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v45->m_Items[1], v48, v46, v47);
  v49 = 0LL;
  p_actorside = &this->fields.actorside;
  v51 = 1;
  do
  {
    v52 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    v53 = v51;
    if ( v49 >= v52->max_length )
      goto LABEL_108;
    gameObject = (__int64)v52->m_Items[v49];
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
                      (System_String_o *)StringLiteral_2236/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v55 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v49 >= v55->max_length )
      goto LABEL_108;
    gameObject = (__int64)v55->m_Items[v49];
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
                            (System_String_o *)StringLiteral_2237/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(gameObject + 56), (int32_t)side, v56, v57);
    v58 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v49 >= v58->max_length )
      goto LABEL_108;
    gameObject = (__int64)v58->m_Items[v49];
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
                            (System_String_o *)StringLiteral_3960/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v59 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v49 >= v59->max_length )
      goto LABEL_108;
    gameObject = (__int64)v59->m_Items[v49];
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
                            (System_String_o *)StringLiteral_3966/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v60 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v49 >= v60->max_length )
      goto LABEL_108;
    gameObject = (__int64)v60->m_Items[v49];
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
                            (System_String_o *)StringLiteral_10563/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_107;
    v61 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v61 )
      goto LABEL_107;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v61, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.actorside, (int32_t)side, v62, v63);
    v64 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_107;
    if ( v49 >= v64->max_length )
      goto LABEL_108;
    gameObject = (__int64)v64->m_Items[v49];
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
                            (System_String_o *)StringLiteral_13513/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_107;
      gameObject = System_String__Equals_61513820(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16145/*"_ENEMY"*/,
                     0LL);
      v65 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_107;
      if ( v49 >= v65->max_length )
        goto LABEL_108;
      v66 = gameObject;
      gameObject = (__int64)v65->m_Items[v49];
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
                              (System_String_o *)StringLiteral_13513/*"TargetFrontPos"*/,
                              0LL);
      v67 = this->fields.performance;
      if ( !v67 )
        goto LABEL_107;
      distanceofactor = v67->fields.distanceofactor;
      if ( (v66 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_107;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v69 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_107;
        if ( v49 >= v69->max_length )
          goto LABEL_108;
        gameObject = (__int64)v69->m_Items[v49];
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
                                (System_String_o *)StringLiteral_13512/*"TargetBackPos"*/,
                                0LL);
        v70 = this->fields.performance;
        if ( !v70 || !gameObject )
          goto LABEL_107;
        v71 = v70->fields.distanceofactor;
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
        if ( v49 >= v72->max_length )
          goto LABEL_108;
        gameObject = (__int64)v72->m_Items[v49];
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
                                (System_String_o *)StringLiteral_13512/*"TargetBackPos"*/,
                                0LL);
        v73 = this->fields.performance;
        if ( !v73 || !gameObject )
          goto LABEL_107;
        v71 = -v73->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v71;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    v51 = 0;
    v49 = 1LL;
  }
  while ( (v53 & 1) != 0 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_107;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_107:
    sub_1B71828(gameObject, v32);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v101,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_319F140 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v102 = v101;
  while ( 1 )
  {
    v75 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v102,
            (const MethodInfo_329AD08 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v75 )
      break;
    v77 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1B71828(v75, v76);
    if ( !v77->max_length )
      sub_1B71830(v75, v76);
    v78 = v77->m_Items[0];
    if ( !v78 )
      sub_1B71828(0LL, v76);
    key = v102.fields._current.fields.key;
    value = v102.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v78, 0LL);
    if ( !Fsm )
      sub_1B71828(0LL, v82);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1B71828(0LL, v82);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v86 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1B71828(FsmInt, v85);
      if ( !v86->max_length )
        sub_1B71830(FsmInt, v85);
      v87 = v86->m_Items[0];
      if ( !v87 )
        sub_1B71828(0LL, v85);
      v88 = PlayMakerFSM__get_Fsm(v87, 0LL);
      if ( !v88 )
        sub_1B71828(0LL, v89);
      v90 = v88->fields.variables;
      if ( !v90 )
        sub_1B71828(0LL, v89);
      v91 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v90, (System_String_o *)key, 0LL);
      if ( !v91 )
        sub_1B71828(0LL, v92);
      if ( !value )
        goto LABEL_115;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1B71AE8(value);
LABEL_115:
        sub_1B71828(v91, v92);
      }
      v91->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v93, v94);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v102,
    (const MethodInfo_329AE28 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v95);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v97,
    v98);
  BattleActorControl__setLimitedPeriod(this, v99);
}


void __fastcall BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.myStage = obj;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.myStage, (int32_t)obj, (int32_t)method, v3);
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
  struct UnityEngine_Transform_o *nodeText; // x19

  v4 = this;
  if ( (byte_4A227F4 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, flg);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_9475/*"Noble_Check"*/, v5);
    byte_4A227F4 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_1B71828(this, flg);
  v7 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v7 >= 1 )
  {
    v8 = 0LL;
    v9 = flg;
    do
    {
      if ( v8 >= (unsigned int)v7 )
        sub_1B71830(this, flg);
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
        nodeText = this->fields.nodeText;
        if ( nodeText )
        {
          this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__Contains(
                                           (HutongGames_PlayMaker_FsmVariables_o *)this->fields.nodeText,
                                           (System_String_o *)StringLiteral_9475/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)nodeText,
                                             (System_String_o *)StringLiteral_9475/*"Noble_Check"*/,
                                             0LL);
            if ( !this )
              goto LABEL_18;
            LOBYTE(this->fields.shadowObj) = v9;
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
  int32_t v3; // w3

  this->fields.performance = perf;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.performance, (int32_t)perf, (int32_t)method, v3);
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
  int32_t v23; // w21
  int32_t WeaponGroup; // w22
  BattleActorControl_o *v25; // x21
  struct PlayMakerFSM_array *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  BattleActorControl_o *v29; // x21
  struct PlayMakerFSM_array *v30; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v31; // x20
  struct PlayMakerFSM_array *v32; // x8
  struct PlayMakerFSM_array *v33; // x8
  BattleActorControl_o *v34; // x20
  int32_t v35; // w2
  int32_t v36; // w3
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
  struct PlayMakerFSM_array *v61; // x8
  PlayMakerFSM_o *v62; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v66; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v69; // x1
  struct PlayMakerFSM_array *v70; // x8
  PlayMakerFSM_o *v71; // x0
  HutongGames_PlayMaker_Fsm_o *v72; // x0
  __int64 v73; // x1
  HutongGames_PlayMaker_FsmVariables_o *v74; // x0
  HutongGames_PlayMaker_FsmInt_o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  const MethodInfo *v79; // x1
  System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  __int64 v83; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v84; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v85; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4A227D3 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__, flg);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__, v7);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___, v8);
    sub_1B715CC(&long_TypeInfo, v9);
    sub_1B715CC(&JsonManager_TypeInfo, v10);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__, v12);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v13);
    sub_1B715CC(&StringLiteral_13513/*"TargetFrontPos"*/, v14);
    sub_1B715CC(&StringLiteral_13512/*"TargetBackPos"*/, v15);
    sub_1B715CC(&StringLiteral_3960/*"Camera"*/, v16);
    sub_1B715CC(&StringLiteral_2236/*"ActorObject"*/, v17);
    sub_1B715CC(&StringLiteral_16145/*"_ENEMY"*/, v18);
    sub_1B715CC(&StringLiteral_3966/*"CameraFsm"*/, v19);
    sub_1B715CC(&StringLiteral_10563/*"Performance"*/, v20);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_2237/*"ActorSide"*/, v21);
    byte_4A227D3 = 1;
  }
  memset(&v85, 0, sizeof(v85));
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
                            (System_String_o *)StringLiteral_2236/*"ActorObject"*/,
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
    sub_1B71828(this, flg);
  }
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_125;
  v22 = this;
  this = (BattleActorControl_o *)BattleServantData__getSvtId(v4->fields.battleSvtData, 0LL);
  if ( !v4->fields.battleSvtData )
    goto LABEL_125;
  v23 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(v4->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  this = (BattleActorControl_o *)ServantAssetLoadManager__loadActorMotion(
                                   (UnityEngine_GameObject_o *)v22,
                                   v23,
                                   WeaponGroup,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  v25 = this;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v26 = v4->fields.motionFSM;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                   (UnityEngine_GameObject_o *)v25,
                                   (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v26 )
    goto LABEL_125;
  v29 = this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_1B71708(this, v26->obj.klass->_1.element_class);
    if ( !this )
    {
      v83 = sub_1B7184C(0LL);
      sub_1B716F4(v83, 0LL);
    }
  }
  if ( !v26->max_length )
    goto LABEL_139;
  v26->m_Items[0] = (PlayMakerFSM_o *)v29;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v26->m_Items, (int32_t)v29, v27, v28);
  v30 = v4->fields.motionFSM;
  if ( !v30 )
    goto LABEL_125;
  if ( !v30->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v30->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  v31 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_2236/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v31 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v31, (UnityEngine_GameObject_o *)this, 0LL);
  v32 = v4->fields.motionFSM;
  if ( !v32 )
    goto LABEL_125;
  if ( !v32->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v32->m_Items[0];
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
                                   (System_String_o *)StringLiteral_2237/*"ActorSide"*/,
                                   0LL);
  v33 = v4->fields.motionFSM;
  if ( !v33 )
    goto LABEL_125;
  if ( v33->max_length <= 1 )
    goto LABEL_139;
  v34 = this;
  this = (BattleActorControl_o *)v33->m_Items[1];
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
                                   (System_String_o *)StringLiteral_2237/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v34 )
    goto LABEL_125;
  v34->fields.shadowObj = (struct UnityEngine_Transform_o *)this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v34->fields.shadowObj, (int32_t)this, v35, v36);
  v37 = v4->fields.motionFSM;
  if ( !v37 )
    goto LABEL_125;
  if ( !v37->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v37->m_Items[0];
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
                                   (System_String_o *)StringLiteral_3960/*"Camera"*/,
                                   0LL);
  v38 = v4->fields.motionFSM;
  if ( !v38 )
    goto LABEL_125;
  if ( v38->max_length <= 1 )
    goto LABEL_139;
  v39 = this;
  this = (BattleActorControl_o *)v38->m_Items[1];
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
                                   (System_String_o *)StringLiteral_3960/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v39 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v39,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v40 = v4->fields.motionFSM;
  if ( !v40 )
    goto LABEL_125;
  if ( !v40->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v40->m_Items[0];
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
                                   (System_String_o *)StringLiteral_3966/*"CameraFsm"*/,
                                   0LL);
  v41 = v4->fields.motionFSM;
  if ( !v41 )
    goto LABEL_125;
  if ( v41->max_length <= 1 )
    goto LABEL_139;
  v42 = this;
  this = (BattleActorControl_o *)v41->m_Items[1];
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
                                   (System_String_o *)StringLiteral_3966/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v42 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v42,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v43 = v4->fields.motionFSM;
  if ( !v43 )
    goto LABEL_125;
  if ( !v43->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v43->m_Items[0];
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
                                   (System_String_o *)StringLiteral_10563/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_125;
  v44 = this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v44 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v44,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v45 = v4->fields.motionFSM;
  if ( !v45 )
    goto LABEL_125;
  if ( !v45->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v45->m_Items[0];
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
         (System_String_o *)StringLiteral_13513/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( !this )
      goto LABEL_125;
    this = (BattleActorControl_o *)System_String__Equals_61513820(
                                     (System_String_o *)this,
                                     (System_String_o *)StringLiteral_16145/*"_ENEMY"*/,
                                     0LL);
    v46 = v4->fields.motionFSM;
    if ( !v46 )
      goto LABEL_125;
    if ( v46->max_length )
    {
      v47 = (char)this;
      this = (BattleActorControl_o *)v46->m_Items[0];
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
                                       (System_String_o *)StringLiteral_13513/*"TargetFrontPos"*/,
                                       0LL);
      performance = v4->fields.performance;
      if ( !performance )
        goto LABEL_125;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v47 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_125;
        *(float *)&this->fields.shadowObj = -distanceofactor;
        HIDWORD(this->fields.shadowObj) = 0;
        LODWORD(this->fields.specialShadowObj) = 0;
        v50 = v4->fields.motionFSM;
        if ( !v50 )
          goto LABEL_125;
        if ( v50->max_length )
        {
          this = (BattleActorControl_o *)v50->m_Items[0];
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
                                           (System_String_o *)StringLiteral_13512/*"TargetBackPos"*/,
                                           0LL);
          v51 = v4->fields.performance;
          if ( !v51 || !this )
            goto LABEL_125;
          v52 = v51->fields.distanceofactor;
LABEL_101:
          *(float *)&this->fields.shadowObj = v52;
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
        v56 = v4->fields.motionFSM;
        if ( !v56 )
          goto LABEL_125;
        if ( v56->max_length )
        {
          this = (BattleActorControl_o *)v56->m_Items[0];
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
                                           (System_String_o *)StringLiteral_13512/*"TargetBackPos"*/,
                                           0LL);
          v57 = v4->fields.performance;
          if ( !v57 || !this )
            goto LABEL_125;
          v52 = -v57->fields.distanceofactor;
          goto LABEL_101;
        }
      }
    }
LABEL_139:
    sub_1B71830(this, flg);
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
    &v84,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_319F140 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v85 = v84;
  while ( 1 )
  {
    v59 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v85,
            (const MethodInfo_329AD08 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v59 )
      break;
    v61 = v4->fields.motionFSM;
    if ( !v61 )
      sub_1B71828(v59, v60);
    if ( !v61->max_length )
      sub_1B71830(v59, v60);
    v62 = v61->m_Items[0];
    if ( !v62 )
      sub_1B71828(0LL, v60);
    key = v85.fields._current.fields.key;
    value = v85.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v62, 0LL);
    if ( !Fsm )
      sub_1B71828(0LL, v66);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1B71828(0LL, v66);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v70 = v4->fields.motionFSM;
      if ( !v70 )
        sub_1B71828(FsmInt, v69);
      if ( !v70->max_length )
        sub_1B71830(FsmInt, v69);
      v71 = v70->m_Items[0];
      if ( !v71 )
        sub_1B71828(0LL, v69);
      v72 = PlayMakerFSM__get_Fsm(v71, 0LL);
      if ( !v72 )
        sub_1B71828(0LL, v73);
      v74 = v72->fields.variables;
      if ( !v74 )
        sub_1B71828(0LL, v73);
      v75 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v74, (System_String_o *)key, 0LL);
      if ( !v75 )
        sub_1B71828(0LL, v76);
      if ( !value )
        goto LABEL_132;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1B71AE8(value);
LABEL_132:
        sub_1B71828(v75, v76);
      }
      v75->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v77, v78);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v85,
    (const MethodInfo_329AE28 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(v4, v79);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int32_t)DelayEndSequenceIdListFromMotion,
    v81,
    v82);
LABEL_124:
  BattleActorControl__setLimitedPeriod(v4, v55);
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
  __int64 Instance; // x0
  struct UnityEngine_GameObject_o *v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  BattleServantData_o **p_battleSvtData; // x25
  int32_t v37; // w2
  int32_t v38; // w3
  BattleServantData_o *v39; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v40; // x22
  __int64 v41; // x21
  __int64 v42; // x23
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x21
  ServantEntity_o *v45; // x26
  struct UnityEngine_Transform_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w29
  int v50; // w21
  int32_t v51; // w23
  UnityEngine_GameObject_o *v52; // x24
  int32_t v53; // w27
  _BOOL4 isForceAppearance; // w20
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  int32_t v57; // w2
  int32_t v58; // w3
  UnityEngine_Transform_o *v59; // x21
  const MethodInfo *v60; // x2
  BattlePerformance_o *performance; // x21
  int32_t v62; // w22
  System_String_o *v63; // x29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v66; // x27
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *HideInAnimNodeName; // x26
  bool v70; // w0
  int32_t v71; // w2
  int32_t v72; // w3
  UnityEngine_Transform_o *v73; // x0
  UnityEngine_Transform_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_String_o *v77; // x1
  UnityEngine_GameObject_o *v78; // x26
  int32_t v79; // w29
  UnityEngine_Transform_o *v80; // x21
  UnityEngine_Transform_o *v81; // x21
  UnityEngine_Transform_o *v82; // x21
  UnityEngine_Transform_o *v83; // x21
  UnityEngine_Transform_o *v84; // x21
  BattleFBXComponent_o *fbxcomponent; // x21
  _BOOL4 v86; // w20
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x3
  int32_t displayType; // w8
  bool v91; // w1
  bool v92; // w2
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__48936380; // x21
  System_Collections_Generic_List_object__o *v94; // x22
  int32_t v95; // w2
  int32_t v96; // w3
  const MethodInfo *v97; // x2
  BattleServantData_o *v98; // x22
  UnityEngine_Transform_o *v99; // x21
  float actorScale; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct BattlePerformance_o *v102; // x8
  struct BattleData_o *data; // x8
  int32_t v104; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  System_Predicate_object__o *v106; // x26
  Il2CppObject *v107; // x21
  struct BattleActorControl___c_StaticFields *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  UnityEngine_SkinnedMeshRenderer_o *v111; // x25
  Il2CppObject *Component_object; // x26
  struct BattlePerformance_o *v113; // x8
  bool IsEnemyPosCountNormal; // w27
  UnityEngine_Mesh_o *v115; // x21
  BattlePerformance_o *v116; // x29
  int32_t v117; // w28
  __int64 v118; // x22
  __int64 v119; // x21
  int32_t v120; // w21
  System_Action_o *v121; // x22
  struct BattlePerformance_o *v122; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v126; // x9
  Il2CppObject *v127; // x21
  struct BattlePerformance_o *v128; // x8
  UnityEngine_Camera_o *actorcamera; // x25
  UnityEngine_Camera_o *uicamera; // x26
  UnityEngine_GameObject_o *v131; // x27
  const MethodInfo *v132; // x1
  int v133; // s0
  System_Object_array *Components_object; // x0
  int32_t v137; // w2
  int32_t v138; // w3
  const MethodInfo *v139; // x3
  const MethodInfo *v140; // x4
  const MethodInfo *v141; // x1
  BattleServantData_o *v142; // [xsp+8h] [xbp-78h]
  __int64 v143; // [xsp+10h] [xbp-70h]
  int32_t v144; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A227C8 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, svtdata);
    sub_1B715CC(&Method_System_Array_IndexOf_int___, v5);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_1B715CC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    sub_1B715CC(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___, v9);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v10);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v11);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___, v12);
    sub_1B715CC(&UnityEngine_GameObject_TypeInfo, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___75808376, v15);
    sub_1B715CC(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo, v16);
    sub_1B715CC(&UnityEngine_Mesh_TypeInfo, v17);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v18);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v19);
    sub_1B715CC(&System_Predicate_SkinnedMeshRenderer__TypeInfo, v20);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v21);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B715CC(&Method_BattleActorControl___c__setServantData_b__137_0__, v23);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass137_0__setServantData_b__1__, v24);
    sub_1B715CC(&BattleActorControl___c__DisplayClass137_0_TypeInfo, v25);
    sub_1B715CC(&BattleActorControl___c_TypeInfo, v26);
    sub_1B715CC(&StringLiteral_18920/*"en_Head"*/, v27);
    sub_1B715CC(&StringLiteral_12689/*"Shadow"*/, v28);
    sub_1B715CC(&StringLiteral_18924/*"en_buff01"*/, v29);
    sub_1B715CC(&StringLiteral_1/*""*/, v30);
    byte_4A227C8 = 1;
  }
  v31 = sub_1B71818(BattleActorControl___c__DisplayClass137_0_TypeInfo);
  BattleActorControl___c__DisplayClass137_0___ctor((BattleActorControl___c__DisplayClass137_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_119;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)this, v34, v35);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  v142 = svtdata;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.battleSvtData, (int32_t)svtdata, v37, v38);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantMaster___);
  v39 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v40 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v42 = *(_QWORD *)&v39->fields.svtId.fields.currentCryptoKey;
  v41 = *(_QWORD *)&v39->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v145.fields.currentCryptoKey = v42;
  *(_QWORD *)&v145.fields.fakeValue = v41;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v145, 0LL);
  if ( !v40 )
    goto LABEL_119;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v40,
             Instance,
             (const MethodInfo_30F8760 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v45 = (ServantEntity_o *)Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_119;
    v46 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12689/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v46;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.shadowObj, (int32_t)v46, v47, v48);
  }
  Instance = (__int64)*p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  Instance = BattleServantData__getAppearanceId((BattleServantData_o *)Instance, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v49 = Instance;
  Instance = BattleServantData__getDispLimitCount(*p_battleSvtData, 1, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v50 = Instance;
  v51 = v49 == BattleServantData__getSvtId(*p_battleSvtData, 0LL) ? v50 : 0;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_119;
  v52 = (UnityEngine_GameObject_o *)Instance;
  Instance = BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v53 = Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v52,
                               v53,
                               v51,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.actorObject,
    (int32_t)Manager__loadBattleActor,
    v57,
    v58);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  v59 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A1A751 )
  {
    Instance = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4A1A751 = 1;
  }
  if ( !v59 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v59, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleActorControl__ChangeShadowParent(this, v51, v60);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  performance = this->fields.performance;
  v62 = *(_DWORD *)(Instance + 24);
  Instance = BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_119;
  v144 = v49;
  BattlePerformance__registerCameraAction(performance, v62, Instance, 0LL);
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  v143 = v31;
  v63 = (System_String_o *)StringLiteral_18920/*"en_Head"*/;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (__int64)TransformHelper__getNodeFromLvName(transform, v63, v51, 0, 0LL);
  if ( !Instance )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v66 = gameObject;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.checkScaleNode, 0, v67, v68);
  if ( v45 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v45, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( (Instance & 1) == 0 )
  {
    if ( !v63 )
      goto LABEL_119;
    v70 = System_String__Equals_61513820(v63, HideInAnimNodeName, 0LL);
    v33 = v66;
    if ( !v70 )
    {
      Instance = (__int64)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_119;
      v73 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (__int64)TransformHelper__getNodeFromLvName(v73, HideInAnimNodeName, v51, 0, 0LL);
      if ( !Instance )
        goto LABEL_119;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v33;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.checkScaleNode, (int32_t)v33, v71, v72);
  }
  v74 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v77 = TransformHelper__ExistNodeFromLvName(v74, (System_String_o *)StringLiteral_18924/*"en_buff01"*/, -1, 0, 0LL)
      ? (struct System_String_o *)StringLiteral_18924/*"en_buff01"*/
      : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v77;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int32_t)v77,
    v75,
    v76);
  v78 = (UnityEngine_GameObject_o *)sub_1B71818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_69239600(v78, 0LL);
  if ( !v78 )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v78, 0LL);
  v79 = v144;
  if ( !v66 )
    goto LABEL_119;
  v80 = (UnityEngine_Transform_o *)Instance;
  Instance = (__int64)UnityEngine_GameObject__get_transform(v66, 0LL);
  if ( !v80 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v80, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v78, 0LL);
  v81 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A1A751 )
  {
    Instance = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4A1A751 = 1;
  }
  if ( !v81 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v81, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v78, 0LL);
  v82 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A1A759 )
  {
    Instance = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4A1A759 = 1;
  }
  if ( !v82 )
    goto LABEL_119;
  UnityEngine_Transform__set_localEulerAngles(v82, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v78, 0LL);
  v83 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A1A756 )
  {
    Instance = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4A1A756 = 1;
  }
  if ( !v83 )
    goto LABEL_119;
  UnityEngine_Transform__set_localScale(v83, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v84 = UnityEngine_GameObject__get_transform(v78, 0LL);
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v84 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v84, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)UnityEngine_GameObject__get_transform(v78, 0LL);
  if ( !Instance )
    goto LABEL_119;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69257852((UnityEngine_Object_o *)v78, 0LL);
  Instance = (__int64)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  fbxcomponent = this->fields.fbxcomponent;
  Instance = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__set_RootTransform(fbxcomponent, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (__int64)this->fields.fbxcomponent;
  if ( !Instance )
    goto LABEL_119;
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v144, v51, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v86 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Instance = (__int64)ServantAssetLoadManager__loadAnimEvents(v144, v51, v86, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__loadAnimationEvents(
    this->fields.fbxcomponent,
    (UnityEngine_TextAsset_o *)Instance,
    v144,
    v51,
    0LL);
  BattleActorControl__InitAnimationEffect(this, v51, v87);
  Instance = (__int64)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  if ( !BattleServantData__isAppearanceId((BattleServantData_o *)Instance, 0LL) )
  {
    if ( *p_battleSvtData )
    {
      displayType = (*p_battleSvtData)->fields.displayType;
      v91 = displayType == 2;
      v92 = displayType == 3;
    }
    else
    {
      v91 = 0;
      v92 = 0;
    }
    BattleActorControl__SetDispServant(this, v91, v92, v89);
  }
  BattleActorControl__UpdateShadow(this, v88);
  this->fields.stepFlg = 0;
  Instance = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  ComponentsInChildren_object__48936380 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                                           (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v94 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor_55376724(
    v94,
    ComponentsInChildren_object__48936380,
    (const MethodInfo_34CFB54 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___75808376);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v94;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.rendererArrayList, (int32_t)v94, v95, v96);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v97);
  v98 = v142;
  if ( !v142 )
    goto LABEL_119;
  this->fields.actorScale = BattleServantData__getActorScale(v142, 0LL);
  Instance = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v99 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4A1A756 )
  {
    Instance = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4A1A756 = 1;
  }
  if ( !v99 )
    goto LABEL_119;
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v147.fields.z = actorScale * static_fields->oneVector.fields.z;
  v147.fields.y = actorScale * static_fields->oneVector.fields.y;
  v147.fields.x = actorScale * static_fields->oneVector.fields.x;
  UnityEngine_Transform__set_localScale(v99, v147, 0LL);
  if ( !v142->fields.isEnemy )
    goto LABEL_117;
  v102 = this->fields.performance;
  if ( !v102 )
    goto LABEL_119;
  data = v102->fields.data;
  if ( !data )
    goto LABEL_119;
  v104 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           v142->fields.uniqueId,
           (const MethodInfo_2F55B10 *)Method_System_Array_IndexOf_int___);
  *(_DWORD *)(v31 + 24) = v104;
  if ( v104 == -1 )
    goto LABEL_117;
  rendererArrayList = this->fields.rendererArrayList;
  Instance = (__int64)BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    Instance = (__int64)BattleActorControl___c_TypeInfo;
  }
  v106 = *(System_Predicate_object__o **)(*(_QWORD *)(Instance + 184) + 8LL);
  if ( !v106 )
  {
    if ( !*(_DWORD *)(Instance + 224) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (__int64)BattleActorControl___c_TypeInfo;
    }
    v107 = **(Il2CppObject ***)(Instance + 184);
    v106 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_SkinnedMeshRenderer__TypeInfo);
    System_Predicate_object____ctor(v106, v107, Method_BattleActorControl___c__setServantData_b__137_0__, 0LL);
    v108 = BattleActorControl___c_TypeInfo->static_fields;
    v108->__9__137_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)v106;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v108->__9__137_0, (int32_t)v106, v109, v110);
  }
  if ( !rendererArrayList )
    goto LABEL_119;
  Instance = (__int64)System_Collections_Generic_List_object___Find(
                        (System_Collections_Generic_List_object__o *)rendererArrayList,
                        (System_Predicate_T__o *)v106,
                        (const MethodInfo_34D08C8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_119;
  v111 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       *p_actorObject,
                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    Instance = (__int64)*p_actorObject;
    if ( !*p_actorObject )
      goto LABEL_119;
    Instance = (__int64)UnityEngine_GameObject__AddComponent_object_(
                          (UnityEngine_GameObject_o *)Instance,
                          (const MethodInfo_2EAA8B0 *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_119;
    Component_object = (Il2CppObject *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v113 = this->fields.performance;
  if ( !v113 )
    goto LABEL_119;
  Instance = (__int64)v113->fields.data;
  if ( !Instance )
    goto LABEL_119;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v115 = (UnityEngine_Mesh_o *)sub_1B71818(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v115, 0LL);
  if ( !v111 )
    goto LABEL_119;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v111, v115, 0LL);
  if ( !Component_object )
    goto LABEL_119;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_object, v115, 0LL);
  v116 = this->fields.performance;
  v117 = *(_DWORD *)(v31 + 24);
  v118 = *(_QWORD *)&v142->fields.svtId.fields.currentCryptoKey;
  v119 = *(_QWORD *)&v142->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v146.fields.currentCryptoKey = v118;
  *(_QWORD *)&v146.fields.fakeValue = v119;
  v120 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v146, 0LL);
  v121 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(
    v121,
    (Il2CppObject *)v143,
    Method_BattleActorControl___c__DisplayClass137_0__setServantData_b__1__,
    0LL);
  if ( !v116 )
    goto LABEL_119;
  BattlePerformance__AddCollider(
    v116,
    (UnityEngine_MeshCollider_o *)Component_object,
    v111,
    v117,
    v120,
    v121,
    IsEnemyPosCountNormal,
    0LL);
  v122 = this->fields.performance;
  if ( !v122 )
    goto LABEL_119;
  statusPerf = v122->fields.statusPerf;
  v98 = v142;
  v79 = v144;
  if ( !statusPerf )
    goto LABEL_119;
  enemyPref = statusPerf->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_119;
  svtHeadUpList = enemyPref->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_119;
  v126 = *(int *)(v143 + 24);
  if ( (unsigned int)v126 >= svtHeadUpList->max_length )
    sub_1B71830(Instance, v33);
  Instance = (__int64)svtHeadUpList->m_Items[v126];
  if ( !Instance )
LABEL_119:
    sub_1B71828(Instance, v33);
  v127 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)Instance,
           (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v127, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    v128 = this->fields.performance;
    if ( v128 )
    {
      actorcamera = v128->fields.actorcamera;
      uicamera = v128->fields.uicamera;
      v131 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v133 = BattleActorControl__getHeadUpY(this, v132);
      if ( v127 )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)v127,
          actorcamera,
          uicamera,
          v131,
          *(UnityEngine_Vector3_o *)&v133,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)v127, 0LL);
        goto LABEL_117;
      }
    }
    goto LABEL_119;
  }
LABEL_117:
  Instance = (__int64)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  Components_object = UnityEngine_GameObject__GetComponents_object_(
                        (UnityEngine_GameObject_o *)Instance,
                        (const MethodInfo_2EAB2F4 *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_object;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (int32_t)Components_object,
    v137,
    v138);
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, 0, v139);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v79, v51, v98->fields.isEnemy, v140);
  BattleActorControl__LoadSavedPartAnimation(this, v141);
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
  if ( (byte_4A227D8 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_13032/*"SummonMasterObject"*/, obj);
    byte_4A227D8 = 1;
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
                                     (System_String_o *)StringLiteral_13032/*"SummonMasterObject"*/,
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
                                       (System_String_o *)StringLiteral_13032/*"SummonMasterObject"*/,
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
      sub_1B71830(this, obj);
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
                                     (System_String_o *)StringLiteral_13032/*"SummonMasterObject"*/,
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
                                               (System_String_o *)StringLiteral_13032/*"SummonMasterObject"*/,
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
        sub_1B71828(this, obj);
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
  if ( (byte_4A227D7 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_13516/*"TargetObject"*/, obj);
    byte_4A227D7 = 1;
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
                                       (System_String_o *)StringLiteral_13516/*"TargetObject"*/,
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
                                               (System_String_o *)StringLiteral_13516/*"TargetObject"*/,
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
        sub_1B71828(this, obj);
      }
    }
    sub_1B71830(this, obj);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_1B71828(this, method);
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
  sub_1B71570(
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
  sub_1B71570(
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
  sub_1B71570(
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
      sub_1B71828(0LL, v3);
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
  if ( (byte_4A2282A & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, method);
    this = (BattleActorControl_o *)sub_1B715CC(&StringLiteral_12118/*"SKIP_VOICE"*/, v3);
    byte_4A2282A = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_1B71828(this, method);
  IsHighSpeedOption = BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v2->fields.uniqueID;
  v7 = IsHighSpeedOption;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v8 = 1.0;
  if ( v7 )
    v8 = 0.5;
  ServantAssetLoadManager__StopVoice(uniqueID, v8, 0LL);
  BattleActorControl__sendEventFSM_43478204(v2, (System_String_o *)StringLiteral_12118/*"SKIP_VOICE"*/, 0, v9);
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
    sub_1B71828(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  if ( (byte_4A22834 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_BattleActorControl_endChangeAppearance__, v3);
    byte_4A22834 = 1;
  }
  v4 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v6 = BattleActorControl__waitChangeApp(this, v4, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, v6, 0LL);
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
  __int64 v27; // x1
  __int64 v28; // x1
  struct System_Collections_Generic_List_BattleActorControl__o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v31; // w9
  bool v32; // w27
  _BOOL8 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x3
  Il2CppObject *current; // x21
  __int64 v37; // x1
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x8
  System_Action_o *v45; // x21
  System_Delegate_o *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v50; // x8
  const MethodInfo *v51; // x2
  struct BattlePerformance_o *v52; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x20
  BattleFBXComponent_c *v54; // x0
  struct BattlePerformance_o *v55; // x8
  Il2CppObject *Instance; // x0
  BattlePerformance_o *v57; // x20
  BattleSequenceManager_o *v58; // x21
  struct BattlePerformance_o *v59; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v61; // x8
  struct BattleActionData_o *actiondata; // x8
  Il2CppObject *Entity; // x0
  TreasureDvcEntity_o *v64; // x20
  struct BattleActionData_o *v65; // x8
  Il2CppObject *v66; // x20
  AssetManager_ResourceUnloadEventHandler_o *v67; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v69; // x20
  __int64 v70; // x21
  __int64 v71; // x22
  int32_t v72; // w21
  BattleActorControl_o *v73; // x8
  int32_t m_CachedPtr; // w22
  struct BattleServantData_o *v75; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v78; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v80; // x27
  UnityEngine_Object_o *v81; // x20
  struct BattlePerformance_o *v82; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v84; // x8
  struct BattleData_o *v85; // x8
  void *v86; // x0
  int v87; // w1
  __int64 v88; // x21
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+20h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  v6 = this;
  if ( (byte_4A22810 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, callback);
    sub_1B715CC(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__, v7);
    sub_1B715CC(&Method_BattleActorControl__startNoblePhantasm_b__265_0__, v8);
    sub_1B715CC(&Method_BattleActorControl__startNoblePhantasm_b__265_1__, v9);
    sub_1B715CC(&BattleFBXComponent_TypeInfo, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_TreasureDvcMaster___, v11);
    sub_1B715CC(&DataManager_TypeInfo, v12);
    sub_1B715CC(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__, v16);
    sub_1B715CC(&Method_FieldMotionManager_SetVariables_GameObject___, v17);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__Add__, v18);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__Clear__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__, v20);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v21);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_1B715CC(&OptionManager_TypeInfo, v23);
    sub_1B715CC(&AssetManager_ResourceUnloadEventHandler_TypeInfo, v24);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v25);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v26);
    sub_1B715CC(&StringLiteral_9276/*"NPACTOR"*/, v27);
    this = (BattleActorControl_o *)sub_1B715CC(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo, v28);
    byte_4A22810 = 1;
  }
  memset(&v90, 0, sizeof(v90));
  noblePhantasmObjectVisibleCtrList = v6->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_77;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v31 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v31;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)noblePhantasmObjectVisibleCtrList->fields._items, 0, size, 0LL);
  this = (BattleActorControl_o *)BattleActorControl__GetServantObjectVisibleControlActor(
                                   v6,
                                   (const MethodInfo *)callback);
  if ( !this )
    goto LABEL_77;
  v32 = flg;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  v90 = v89;
  while ( 1 )
  {
    v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    if ( !v33 )
      break;
    current = v90.fields._current;
    if ( !v90.fields._current )
      sub_1B71828(v33, v34);
    if ( BattleActorControl__ProcServantObjectVisibleCtr((BattleActorControl_o *)v90.fields._current, 1, 0, v35) )
    {
      v40 = (System_Collections_Generic_List_object__o *)v6->fields.noblePhantasmObjectVisibleCtrList;
      if ( !v40 )
        sub_1B71828(0LL, v37);
      items = v40->fields._items;
      v42 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
      ++v40->fields._version;
      if ( !items )
        sub_1B71828(v40, v37);
      v43 = v40->fields._size;
      if ( (unsigned int)v43 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          current,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + v43;
        v40->fields._size = v43 + 1;
        v44[4] = (Il2CppClass *)current;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)current, v38, v39);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    v45 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v45, (Il2CppObject *)v6, Method_BattleActorControl__startNoblePhantasm_b__265_0__, 0LL);
    v46 = System_Delegate__Combine((System_Delegate_o *)callback, (System_Delegate_o *)v45, 0LL);
    if ( !v46 || (System_Action_c *)v46->klass == System_Action_TypeInfo )
      break;
    sub_1B71AE8(v46);
    if ( v87 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v90,
        (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
      sub_1C5C05C();
    }
    v88 = *(_QWORD *)__cxa_begin_catch(v86);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v90,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v88 )
      sub_1B71820(v88);
  }
  v6->fields.noblePhantasmCallback = (struct System_Action_o *)v46;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->fields.noblePhantasmCallback, (int32_t)v46, v47, v48);
  this = (BattleActorControl_o *)v6->fields.fbxcomponent;
  if ( !this )
    goto LABEL_77;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)this, 0, 0LL);
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_77;
  this = (BattleActorControl_o *)performance->fields.bgPerf;
  if ( !this )
    goto LABEL_77;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_77;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 0, 0LL);
  v50 = v6->fields.performance;
  v6->fields.isPlayingNoblePhantasm = 1;
  if ( !v50 )
    goto LABEL_77;
  this = (BattleActorControl_o *)v50->fields.logic;
  if ( !this )
    goto LABEL_77;
  BattleLogic__ChangePhase((BattleLogic_o *)this, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(v6, 0, v51);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_77;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)this, 0, 0LL);
  v52 = v6->fields.performance;
  if ( !v52 )
    goto LABEL_77;
  fmManager_k__BackingField = v52->fields._fmManager_k__BackingField;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_77;
  FieldMotionManager__SetVariables_object_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9276/*"NPACTOR"*/,
    (Il2CppObject *)this,
    (const MethodInfo_2EA84E0 *)Method_FieldMotionManager_SetVariables_GameObject___);
  v54 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v54 = BattleFBXComponent_TypeInfo;
  }
  v54->static_fields->EnableEvent = 0;
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_77;
  BattlePerformance__changeShadowType((BattlePerformance_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_77;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)this, 0LL);
  v55 = v6->fields.performance;
  if ( !v55 )
    goto LABEL_77;
  this = (BattleActorControl_o *)v55->fields.commandPerf;
  if ( !this )
    goto LABEL_77;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v57 = v6->fields.performance;
  v58 = (BattleSequenceManager_o *)Instance;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v59 = v6->fields.performance;
  if ( !v59 )
    goto LABEL_77;
  bgPerf = v59->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_77;
  if ( !v58 )
    goto LABEL_77;
  BattleSequenceManager__init(
    v58,
    v57,
    (UnityEngine_GameObject_o *)this,
    v59->fields.p_actorlist,
    v59->fields.e_actorlist,
    v59->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v61 = v6->fields.performance;
  if ( !v61 )
    goto LABEL_77;
  v61->fields.isNoblePhantasmWhiteInFlg = v32;
  if ( v6->fields.actiondata )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleActorControl_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_TreasureDvcMaster___);
    actiondata = v6->fields.actiondata;
    if ( !actiondata || !this )
      goto LABEL_77;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               actiondata->fields.treasureDvcId,
               (const MethodInfo_30F8760 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__GetEntity__);
    if ( Entity )
    {
      v64 = (TreasureDvcEntity_o *)Entity;
      if ( TreasureDvcEntity__IsRandomTD((TreasureDvcEntity_o *)Entity, 0LL) )
      {
        this = (BattleActorControl_o *)v6->fields.battleSvtData;
        if ( !this )
          goto LABEL_77;
        this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
        v65 = v6->fields.actiondata;
        if ( !v65 )
          goto LABEL_77;
        TreasureDvcEntity__getRandomSeqIdEachLimit(v64, (int32_t)this, v65->fields.ActSetId, 0LL);
      }
    }
  }
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_77;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)this, v6->fields.actiondata, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v66 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v67 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1B71818(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v67,
      (Il2CppObject *)v6,
      Method_BattleActorControl__startNoblePhantasm_b__265_1__,
      0LL);
    if ( !v66 )
      goto LABEL_77;
    AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)v66, v67, 0LL);
  }
  else
  {
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = v6->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_77;
    v69 = (BattleSequenceManager_o *)this;
    v71 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v70 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v91.fields.currentCryptoKey = v71;
    *(_QWORD *)&v91.fields.fakeValue = v70;
    this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v91, 0LL);
    if ( !v6->fields.battleSvtData )
      goto LABEL_77;
    v72 = (int)this;
    this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice(v6->fields.battleSvtData, 0LL);
    if ( !this )
      goto LABEL_77;
    v73 = this;
    this = (BattleActorControl_o *)v6->fields.battleSvtData;
    if ( !this )
      goto LABEL_77;
    m_CachedPtr = v73->fields.m_CachedPtr;
    this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
    v75 = v6->fields.battleSvtData;
    if ( !v75 )
      goto LABEL_77;
    overwriteSvtVoiceId = v75->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v75->fields.treasuredvcLevel;
    v78 = (int)this;
    NpChargeStage = BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
    v80 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1B71818(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v80,
      (Il2CppObject *)v6,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v69 )
      goto LABEL_77;
    BattleSequenceManager__loadSequence(
      v69,
      v72,
      m_CachedPtr,
      v78,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v80,
      0LL);
  }
  v81 = (UnityEngine_Object_o *)v6->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v81, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v82 = v6->fields.performance;
    if ( !v82 )
      goto LABEL_77;
    data = (UnityEngine_Object_o *)v82->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && !v6->fields.isEnemy )
    {
      v84 = v6->fields.performance;
      if ( v84 )
      {
        v85 = v84->fields.data;
        if ( v85 )
        {
          ++v85->fields.playerNpCount;
          goto LABEL_74;
        }
      }
LABEL_77:
      sub_1B71828(this, callback);
    }
  }
LABEL_74:
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_77;
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
    sub_1B71828(this, method);
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
    sub_1B71828(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4A2282B & 1) == 0 )
  {
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, method);
    byte_4A2282B = 1;
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
  System_Func_T__TResult__o *_9__328_0; // x20
  Il2CppObject *v28; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_List_int__o *v32; // x22
  __int64 v33; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v34; // x21
  unsigned __int64 v35; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v43; // x22
  unsigned __int64 v44; // x25
  int32_t v45; // w23
  Il2CppObject *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v48; // x2
  System_Collections_IEnumerator_o *v49; // x0
  __int64 v50; // x8
  unsigned __int64 v51; // x22
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  System_Collections_IEnumerator_o *v54; // x0

  v3 = auraEffectList;
  v4 = this;
  if ( (byte_4A2283C & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Remove_int__GameObject___, auraEffectList);
    sub_1B715CC(&Method_DataManager_GetMasterData_AuraEffectMaster___, v5);
    sub_1B715CC(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v10);
    sub_1B715CC(&Method_System_Linq_Enumerable_Except_int___, v11);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v12);
    sub_1B715CC(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v16);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B715CC(&Method_BattleActorControl___c__updateAura_b__328_0__, v19);
    this = (BattleActorControl_o *)sub_1B715CC(&BattleActorControl___c_TypeInfo, v20);
    byte_4A2283C = 1;
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
    v32 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v32,
      (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( v3 )
      {
        v33 = *(_QWORD *)&v3->max_length;
        v34 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( (int)v33 >= 1 )
        {
          v35 = 0LL;
          while ( v35 < (unsigned int)v33 )
          {
            if ( !v34 )
              goto LABEL_63;
            this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v34,
                                             v3->m_Items[v35 + 1],
                                             (const MethodInfo_30F8760 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v32 )
                goto LABEL_63;
              auraEffectList = (System_Int32_array *)*((unsigned int *)&this->fields.UnityEngine_Behaviour_Fields + 1);
              items = v32->fields._items;
              v37 = Method_System_Collections_Generic_List_int__Add__;
              ++v32->fields._version;
              if ( !items )
                goto LABEL_63;
              size = v32->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v32,
                  (int32_t)auraEffectList,
                  *(const MethodInfo_34B323C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
              }
              else
              {
                v32->fields._size = size + 1;
                items->m_Items[size + 1] = (int)auraEffectList;
              }
            }
            LODWORD(v33) = v3->max_length;
            if ( (__int64)++v35 >= (int)v33 )
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
                   (const MethodInfo_3148514 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
          v41 = System_Linq_Enumerable__Except_int_(
                  v40,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                  (const MethodInfo_2E7C220 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v41,
                                           (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
            v43 = this;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v44 = 0LL;
              while ( v44 < (unsigned int)m_CancellationTokenSource )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                v45 = *((_DWORD *)&v43->fields.actorObject + v44);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                         v45,
                         (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                    v49 = BattleActorControl__DestroyAuraEffect(
                            (BattleActorControl_o *)activeInHierarchy,
                            (UnityEngine_GameObject_o *)Item,
                            v48);
                    UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)v4, v49, 0LL);
                  }
                  else
                  {
LABEL_67:
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_69257852((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                System_Collections_Generic_Dictionary_int__object___Remove(
                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                  v45,
                  (const MethodInfo_3149CDC *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                 (const MethodInfo_3148504 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(m_CancellationTokenSource) = v43->fields.m_CancellationTokenSource;
                if ( (__int64)++v44 >= (int)m_CancellationTokenSource )
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
              v50 = *(_QWORD *)&v3->max_length;
              if ( (int)v50 < 1 )
                return;
              v51 = 0LL;
              while ( v51 < (unsigned int)v50 )
              {
                if ( !v34 )
                  goto LABEL_63;
                this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v34,
                                                 v3->m_Items[v51 + 1],
                                                 (const MethodInfo_30F8760 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v53 = (int32_t)this->fields.m_CancellationTokenSource;
                  if ( v4->fields._currentPriority_k__BackingField <= v53 )
                  {
                    v54 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
                            v53,
                            v52);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_69243124(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v54,
                                                     0LL);
                  }
                }
                LODWORD(v50) = v3->max_length;
                if ( (__int64)++v51 >= (int)v50 )
                  return;
              }
LABEL_64:
              sub_1B71830(this, auraEffectList);
            }
          }
        }
      }
    }
LABEL_63:
    sub_1B71828(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v26 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v26 = BattleActorControl___c_TypeInfo;
  }
  _9__328_0 = (System_Func_T__TResult__o *)v26->static_fields->__9__328_0;
  if ( !_9__328_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      v26 = BattleActorControl___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__328_0 = (System_Func_T__TResult__o *)sub_1B71818(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__328_0,
      v28,
      Method_BattleActorControl___c__updateAura_b__328_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__328_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__328_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__328_0, (int32_t)_9__328_0, v30, v31);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__328_0,
    (const MethodInfo_2E4A888 *)Method_BasicHelper_Remove_int__GameObject___);
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
        sub_1B71830(this, actionData);
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
    sub_1B71828(this, actionData);
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
  int m_CancellationTokenSource; // w8
  BattleActorControl_o *v31; // x24
  unsigned int v32; // w28
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int32_t current; // w21
  const MethodInfo *v37; // x2
  System_Collections_IEnumerator_o *v38; // x1
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+20h] [xbp-A0h] BYREF

  v2 = this;
  if ( (byte_4A2284D & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_1B715CC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__, v6);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____75915032, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Contains__, v13);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v14);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v16);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v17);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v18);
    this = (BattleActorControl_o *)sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    byte_4A2284D = 1;
  }
  memset(&v40, 0, sizeof(v40));
  battleSvtData = v2->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_37;
  this = (BattleActorControl_o *)battleSvtData->fields.buffData;
  if ( !this )
    goto LABEL_37;
  EffectBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__GetEffectBuffList(
                                                                  (BattleBuffData_o *)this,
                                                                  0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_BuffMaster___);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                       (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !this )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 this->fields.m_CachedPtr,
                                 (const MethodInfo_30F8760 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v26);
      if ( !Entity || !v23 )
        goto LABEL_37;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v23,
                                       Entity->fields.effectId,
                                       (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_34B323C **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
               (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____75915032);
          if ( !this )
            goto LABEL_37;
          m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
          v31 = this;
          if ( m_CancellationTokenSource >= 1 )
            break;
        }
      }
LABEL_28:
      if ( ++v24 >= EffectBuffList->fields._size )
        goto LABEL_29;
    }
    v32 = 0;
    while ( 1 )
    {
      if ( v32 >= m_CancellationTokenSource )
        sub_1B71830(this, method);
      this = (BattleActorControl_o *)*((_QWORD *)&v31->fields.actorObject + (int)v32);
      if ( !this )
        break;
      UnityEngine_ParticleSystemRenderer__set_sortingFudge(
        (UnityEngine_ParticleSystemRenderer_o *)this,
        (float)((float)v24 * 0.01) + -1.0,
        0LL);
      m_CancellationTokenSource = (int)v31->fields.m_CancellationTokenSource;
      if ( (int)++v32 >= m_CancellationTokenSource )
        goto LABEL_28;
    }
LABEL_37:
    sub_1B71828(this, method);
  }
LABEL_29:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_37;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           (const MethodInfo_3148514 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_2E97870 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_34B3D10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v34 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_324B7EC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v34 )
      break;
    if ( !v23 )
      sub_1B71828(v34, v35);
    current = v40.fields._current;
    if ( !System_Collections_Generic_List_int___Contains(
            v23,
            v40.fields._current,
            (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v38 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v37);
      UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)v2, v38, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_324B7E8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
  void *ComponentsInChildren_object__48936380; // x0
  __int64 v14; // x1
  int v15; // w8
  _DWORD *v16; // x20
  unsigned int v17; // w22
  char *v18; // x8
  UnityEngine_Renderer_o *v19; // x21
  BattleActorControl_c *v20; // x0
  float defaultHeight; // s13
  float r; // s9
  float g; // s10
  float b; // s11
  int v25; // w8
  _DWORD *v26; // x19
  unsigned int v27; // w23
  char *v28; // x8
  UnityEngine_Component_o *v29; // x20
  __int64 v30; // x8
  _QWORD *v31; // x21
  unsigned __int64 v32; // x28
  UnityEngine_Material_o *v33; // x22
  System_String_o *v34; // x1
  UnityEngine_Material_o *v35; // x0
  float v36; // s0
  float y; // s10
  float v38; // s11
  float v39; // s12
  UnityEngine_Bounds_o v40; // [xsp+8h] [xbp-A8h] BYREF
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A227FF & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl_TypeInfo, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___, v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___, v6);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_16125/*"_ClipSharpnessY"*/, v8);
    sub_1B715CC(&StringLiteral_16129/*"_Color"*/, v9);
    sub_1B715CC(&StringLiteral_24610/*"weapon"*/, v10);
    sub_1B715CC(&StringLiteral_17307/*"body"*/, v11);
    byte_4A227FF = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__48936380 = (void *)UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__48936380 & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_44;
    ComponentsInChildren_object__48936380 = UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !ComponentsInChildren_object__48936380 )
      goto LABEL_44;
    v15 = *((_DWORD *)ComponentsInChildren_object__48936380 + 6);
    v16 = ComponentsInChildren_object__48936380;
    if ( v15 >= 1 )
    {
      v17 = 0;
      while ( v17 < v15 )
      {
        v18 = (char *)&v16[2 * v17];
        v19 = (UnityEngine_Renderer_o *)*((_QWORD *)v18 + 4);
        if ( !v19 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = UnityEngine_Renderer__get_material(
                                                  *((UnityEngine_Renderer_o **)v18 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__48936380 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = (void *)UnityEngine_Material__HasProperty_69124120(
                                                          (UnityEngine_Material_o *)ComponentsInChildren_object__48936380,
                                                          (System_String_o *)StringLiteral_16129/*"_Color"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__48936380 & 1) != 0 )
        {
          v20 = BattleActorControl_TypeInfo;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v20 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v20->static_fields->defaultHeight;
          ComponentsInChildren_object__48936380 = UnityEngine_Renderer__get_material(v19, 0LL);
          if ( !ComponentsInChildren_object__48936380 )
            goto LABEL_44;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)ComponentsInChildren_object__48936380, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          ComponentsInChildren_object__48936380 = UnityEngine_Renderer__get_material(v19, 0LL);
          if ( !ComponentsInChildren_object__48936380 )
            goto LABEL_44;
          v42.fields.a = 1.0 - (float)(val / defaultHeight);
          v42.fields.r = r;
          v42.fields.g = g;
          v42.fields.b = b;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)ComponentsInChildren_object__48936380, v42, 0LL);
        }
        v15 = v16[6];
        if ( (int)++v17 >= v15 )
          goto LABEL_20;
      }
LABEL_45:
      sub_1B71830(ComponentsInChildren_object__48936380, v14);
    }
LABEL_20:
    ComponentsInChildren_object__48936380 = UnityEngine_GameObject__GetComponentsInChildren_object__48936380(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_2EAB5BC *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !ComponentsInChildren_object__48936380 )
LABEL_44:
      sub_1B71828(ComponentsInChildren_object__48936380, v14);
    v25 = *((_DWORD *)ComponentsInChildren_object__48936380 + 6);
    v26 = ComponentsInChildren_object__48936380;
    if ( v25 >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= v25 )
          goto LABEL_45;
        v28 = (char *)&v26[2 * v27];
        v29 = (UnityEngine_Component_o *)*((_QWORD *)v28 + 4);
        if ( !v29 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = UnityEngine_Renderer__get_materials(
                                                  *((UnityEngine_Renderer_o **)v28 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__48936380 )
          goto LABEL_44;
        v30 = *((_QWORD *)ComponentsInChildren_object__48936380 + 3);
        v31 = ComponentsInChildren_object__48936380;
        if ( (int)v30 >= 1 )
          break;
LABEL_42:
        v25 = v26[6];
        if ( (int)++v27 >= v25 )
          return;
      }
      v32 = 0LL;
      while ( v32 < (unsigned int)v30 )
      {
        v33 = (UnityEngine_Material_o *)v31[v32 + 4];
        ComponentsInChildren_object__48936380 = UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( !ComponentsInChildren_object__48936380 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__48936380,
                                                  0LL);
        if ( !ComponentsInChildren_object__48936380 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__48936380,
                                                          (System_String_o *)StringLiteral_17307/*"body"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__48936380 & 1) != 0 )
          goto LABEL_35;
        ComponentsInChildren_object__48936380 = UnityEngine_Component__get_gameObject(v29, 0LL);
        if ( !ComponentsInChildren_object__48936380 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__48936380,
                                                  0LL);
        if ( !ComponentsInChildren_object__48936380 )
          goto LABEL_44;
        ComponentsInChildren_object__48936380 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__48936380,
                                                          (System_String_o *)StringLiteral_24610/*"weapon"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__48936380 & 1) != 0 )
        {
LABEL_35:
          if ( !v33 )
            goto LABEL_44;
          v34 = (System_String_o *)StringLiteral_16125/*"_ClipSharpnessY"*/;
          v35 = v33;
          v36 = val;
        }
        else
        {
          UnityEngine_Renderer__get_localBounds(&v40, (UnityEngine_Renderer_o *)v29, 0LL);
          y = v40.fields.m_Center.fields.y;
          UnityEngine_Renderer__get_localBounds(&v40, (UnityEngine_Renderer_o *)v29, 0LL);
          v38 = v40.fields.m_Extents.fields.y;
          UnityEngine_Renderer__get_localBounds(&v40, (UnityEngine_Renderer_o *)v29, 0LL);
          ComponentsInChildren_object__48936380 = BattleActorControl_TypeInfo;
          v39 = v40.fields.m_Extents.fields.y;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          if ( !v33 )
            goto LABEL_44;
          v34 = (System_String_o *)StringLiteral_16125/*"_ClipSharpnessY"*/;
          v35 = v33;
          v36 = (float)(y - v38)
              + (float)((float)((float)((float)(v39 + v39) + 0.2)
                              / BattleActorControl_TypeInfo->static_fields->defaultHeight)
                      * val);
        }
        UnityEngine_Material__SetFloat(v35, v34, v36, 0LL);
        LODWORD(v30) = *((_DWORD *)v31 + 6);
        if ( (__int64)++v32 >= (int)v30 )
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

  if ( (byte_4A22835 & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl__waitChangeApp_d__320_TypeInfo, callback);
    byte_4A22835 = 1;
  }
  v5 = sub_1B71818(BattleActorControl__waitChangeApp_d__320_TypeInfo);
  BattleActorControl__waitChangeApp_d__320___ctor((BattleActorControl__waitChangeApp_d__320_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B71828(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
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
  int32_t v10; // w3
  System_Collections_Generic_Queue_T__o *v11; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A22868 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, actor);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B715CC(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__, v6);
    sub_1B715CC(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo, v7);
    byte_4A22868 = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._activeFsmNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_Queue_T__o *)sub_1B71818(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v11,
    (const MethodInfo_36416CC *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v11;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._callBackQueue, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.battleActor, (int32_t)actor, v14, v15);
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
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0

  if ( (byte_4A2286A & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, fsmName);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Contains__, v5);
    byte_4A2286A = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_object__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    goto LABEL_9;
  v6 = System_Collections_Generic_List_object___Contains(
         activeFsmNameList,
         (Il2CppObject *)fsmName,
         (const MethodInfo_34D05F0 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( v6 )
    return;
  items = activeFsmNameList->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++activeFsmNameList->fields._version;
  if ( !items )
LABEL_9:
    sub_1B71828(v6, v7);
  size = activeFsmNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      activeFsmNameList,
      (Il2CppObject *)fsmName,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    activeFsmNameList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)fsmName;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)fsmName, v9, v10);
  }
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4A2286C & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__, callBack);
    byte_4A2286C = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1B71828(0LL, v5);
  System_Collections_Generic_Queue_object___Enqueue(
    callBackQueue,
    (Il2CppObject *)callBack,
    (const MethodInfo_3641C94 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4A2286D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__, method);
    sub_1B715CC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__, v3);
    byte_4A2286D = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v4);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1B71828(0LL, v5);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_object___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_3641E24 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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

  if ( (byte_4A22867 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, method);
    byte_4A22867 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1B71828(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x0

  if ( (byte_4A2286B & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Remove__, fsmName);
    byte_4A2286B = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1B71828(0LL, v5);
  return System_Collections_Generic_List_object___Remove(
           (System_Collections_Generic_List_object__o *)activeFsmNameList,
           (Il2CppObject *)fsmName,
           (const MethodInfo_34D1788 *)Method_System_Collections_Generic_List_string__Remove__);
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

  if ( (byte_4A22869 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Clear__, method);
    sub_1B715CC(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__, v3);
    byte_4A22869 = 1;
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
    sub_1B71828(battleActor, method);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)battleActor,
    (const MethodInfo_3641954 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B7168C(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19BC5C4;
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
        v11 = sub_1B71684(v6);
        v12 = sub_1B71B40(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19BC6C0;
          else
            v9 = (Il2CppObject *)sub_19BC684;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19BC600;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19BC5D4;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19BC5A4;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B71844(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B716F4(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19BC55C;
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
  return (System_IAsyncResult_o *)sub_1B71580(this, &v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B71584(result, 0LL, method);
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

  if ( (byte_4A22866 & 1) == 0 )
  {
    sub_1B715CC(&System_Collections_Hashtable_TypeInfo, key);
    byte_4A22866 = 1;
  }
  table = this->fields.table;
  p_table = (ServantStatusBattleListViewItem_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_1B71818(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_62084936(v10, 0LL);
    p_table->klass = (ServantStatusBattleListViewItem_c *)v10;
    sub_1B71570(p_table, (int32_t)v10, v11, v12);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_1B71828(0LL, v13);
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
    sub_1B71828(this, method);
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

  if ( (byte_4A22865 & 1) == 0 )
  {
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, svtData);
    byte_4A22865 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1B71828(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v9, 0LL);
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


void __fastcall BattleActorControl__DestroyAuraEffect_d__329___ctor(
        BattleActorControl__DestroyAuraEffect_d__329_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__329__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__329_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__DestroyAuraEffect_d__329_o *v4; // x19
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
  int32_t v17; // w3
  BattleActorControl__DestroyAuraEffect_d__329_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__329_o *v19; // x20
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *effectObject; // x20
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__329_o *v47; // x20
  unsigned __int64 v48; // x24
  UnityEngine_Object_o *v49; // x21
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v51; // x8
  BattleActorControl__DestroyAuraEffect_d__329_o *v52; // x21
  unsigned __int64 v53; // x25
  UnityEngine_Object_o *v54; // x22
  UnityEngine_Object_o *v55; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v57; // 0:x0.8

  v4 = this;
  if ( (byte_4A22877 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_ExcludeNull_ParticleSystem___, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024, v6);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75915040, v7);
    sub_1B715CC(&System_IDisposable_TypeInfo, v8);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, v9);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, v10);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v11);
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v12);
    byte_4A22877 = 1;
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
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)v4->fields.effectObject;
    v4->fields.__1__state = -1;
    if ( !this )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_Object__op_Inequality(
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
          this = (BattleActorControl__DestroyAuraEffect_d__329_o *)v4->fields.effectObject;
          if ( this )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____75915040);
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
                  this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_Object__op_Equality(
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
                    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_Renderer__get_materials(
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
                  this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_Object__op_Equality(
                                                                             v54,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_69257852(v54, 0LL);
                  }
                  LODWORD(v51) = v52->fields.__2__current;
                  if ( (__int64)++v53 >= (int)v51 )
                    goto LABEL_84;
                }
LABEL_89:
                sub_1B71830(this, method);
              }
LABEL_85:
              v55 = (UnityEngine_Object_o *)v4->fields.effectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_69257852(v55, 0LL);
              return 0;
            }
          }
LABEL_90:
          sub_1B71828(this, method);
        }
        return 0;
      }
    }
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)v4->fields.effectObject;
    if ( !this )
      goto LABEL_90;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&v4->fields._particleArray_5__2,
      (int32_t)ComponentsInChildren_object,
      v16,
      v17);
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)v4->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_90;
    v4->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)BasicHelper__ExcludeNull_object_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_2E47104 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
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
      v22 = sub_1BC35AC(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__329_o *, _QWORD))v22)(
            v19,
            *(_QWORD *)(v22 + 8));
    if ( !v24 )
      sub_1B71828(0LL, v23);
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
        v28 = sub_1BC35AC(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v32 = sub_1BC35AC(v24, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
      }
      v33 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
      if ( !v33 )
        sub_1B71828(0LL, v34);
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
      v38 = sub_1BC35AC(v24, System_IDisposable_TypeInfo, 0LL);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__329_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(
                                                               v24,
                                                               *(_QWORD *)(v38 + 8));
  }
  if ( v4->fields._aliveCount_5__3 <= 0 )
  {
    v4->fields._particleArray_5__2 = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._particleArray_5__2, 0, v2, v3);
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
      this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v42 )
          goto LABEL_90;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v42, 0LL) )
          UnityEngine_ParticleSystem__Stop_69538340((UnityEngine_ParticleSystem_o *)v42, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__329_o *)UnityEngine_ParticleSystem__IsAlive_69538608(
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
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B71570(p__2__current, 0, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__329__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__329_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__329__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__329_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__DestroyAuraEffect_d__329_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__329__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__329_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__329__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__329_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__355___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__355_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__355__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__355_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__DestroyEffectOnParticleStop_d__355_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  int aliveCount_5__3; // w8
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v16; // x8
  unsigned __int64 v17; // x22
  UnityEngine_Object_o *v18; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A22878 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___, v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024, v6);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    byte_4A22878 = 1;
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
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_2EAB638 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____75915024);
    v4->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    p_particleArray_5__2 = &v4->fields._particleArray_5__2;
    sub_1B71570(
      (ServantStatusBattleListViewItem_o *)&v4->fields._particleArray_5__2,
      (int32_t)ComponentsInChildren_object,
      v12,
      v13);
    if ( !v4->fields._particleArray_5__2 )
      goto LABEL_32;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v4->fields.key,
                                                                         (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
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
    sub_1B71828(this, method);
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
        sub_1B71830(this, method);
      v18 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v17];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)UnityEngine_Object__op_Equality(v18, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v18 )
          goto LABEL_35;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v18, 0LL) )
          UnityEngine_ParticleSystem__Stop_69538340((UnityEngine_ParticleSystem_o *)v18, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__355_o *)UnityEngine_ParticleSystem__IsAlive_69538608(
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
  p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B71570(p__2__current, 0, v2, v3);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__355__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__355_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__355__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__355_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__355_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__355__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__355_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__355__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__355_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__268___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__268__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *v4; // x20
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
  BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *v19; // x20
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  BattleServantData_o *v22; // x20
  int v23; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *v25; // x20
  unsigned __int64 v26; // x26
  BattleActorControl_o *ServantActor; // x21
  System_String_o *v28; // x0
  System_String_o *v29; // x0
  Il2CppObject *Instance; // x20
  System_Action_object__o *v31; // x21
  struct BattlePerformance_o *v32; // x8
  int i_5__2; // w8
  ServantStatusBattleListViewItem_o *v34; // x20
  UnityEngine_WaitForEndOfFrame_o *v35; // x19
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  int v39; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_4A22879 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_USSequencer__TypeInfo, method);
    sub_1B715CC(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__, v5);
    sub_1B715CC(&BattlePerformance_TypeInfo, v6);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    sub_1B715CC(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v9);
    sub_1B715CC(&StringLiteral_13227/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v10);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)sub_1B715CC(&StringLiteral_24541/*"wait"*/, v11);
    byte_4A22879 = 1;
  }
  v39 = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v4->fields.__4__this;
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)BattleServantData__IsTDAppearance(
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
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)_4__this->fields.performance;
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
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)v18->fields.actorcamera;
                if ( this )
                {
                  this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                  v19 = this;
                  if ( !byte_4A1A751 )
                  {
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)sub_1B715CC(
                                                                                     &UnityEngine_Vector3_TypeInfo,
                                                                                     method);
                    byte_4A1A751 = 1;
                  }
                  if ( v19 )
                  {
                    UnityEngine_Transform__set_localEulerAngles(
                      (UnityEngine_Transform_o *)v19,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0LL);
                    v39 = 1;
                    v20 = System_Int32__ToString((int32_t)&v39, 0LL);
                    v21 = System_String__Concat_61505504((System_String_o *)StringLiteral_13227/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v20, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)ConstantMaster__getValue(v21, 0LL);
                    v22 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_43:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v22 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v22->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v22,
                          this,
                          _4__this,
                          v22->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v31 = (System_Action_object__o *)sub_1B71818(System_Action_USSequencer__TypeInfo);
                        System_Action_object____ctor(
                          v31,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          0LL);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v31,
                            0LL);
                          v32 = _4__this->fields.performance;
                          if ( v32 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)v32->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)BattleData__getStageEntity(
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
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_55;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_55;
                          _2__current = this->fields.__2__current;
                          v25 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_42:
                        ++v39;
                        v28 = System_Int32__ToString((int32_t)&v39, 0LL);
                        v29 = System_String__Concat_61505504((System_String_o *)StringLiteral_13227/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v28, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)ConstantMaster__getValue(
                                                                                         v29,
                                                                                         0LL);
                        v22 = _4__this->fields.battleSvtData;
                        v23 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_43;
                      }
                      v26 = 0LL;
                      while ( 1 )
                      {
                        if ( v26 >= (unsigned int)_2__current )
                          sub_1B71830(this, method);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v25->fields.__4__this + v26),
                                         0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].fields.__2__current) )
                          {
                            LOWORD(this[17].fields.__2__current) = 256;
                            BattleActorControl__playAnimation_43425612(
                              ServantActor,
                              (System_String_o *)StringLiteral_24541/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_43425612(
                              ServantActor,
                              (System_String_o *)StringLiteral_24541/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v25->fields.__2__current;
                        if ( (__int64)++v26 >= (int)_2__current )
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
    sub_1B71828(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v4->fields._i_5__2;
    v4->fields.__1__state = -1;
    v4->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 < 3 )
      goto LABEL_52;
    v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
    v4->fields.__2__current = (Il2CppObject *)v35;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(p__2__current, (int32_t)v35, v37, v38);
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
      v34 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v34, 0, v2, v3);
      result = 1;
      *(_DWORD *)&v34[-1].fields.isMine = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__268__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__268__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__268_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__268__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__268__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__268_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A2286E & 1) == 0 )
  {
    sub_1B715CC(&BattleActorControl___c_TypeInfo, v1);
    byte_4A2286E = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleActorControl___c_TypeInfo->static_fields->__9 = (struct BattleActorControl___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)BattleActorControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B71828(this, 0LL);
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

  if ( (byte_4A22870 & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1B715CC(
                                         &System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo,
                                         x);
    byte_4A22870 = 1;
  }
  if ( !x )
    sub_1B71828(this, x);
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
    p_method = sub_1BC35AC(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
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
  if ( (byte_4A22871 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___, x);
    byte_4A22871 = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_object_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_2E93E84 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__194_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__368_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.isSaveAnimation;
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__369_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__369_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__137_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  __int64 v4; // x1
  BattleActorControl___c_o *v5; // x20

  if ( (byte_4A2286F & 1) == 0 )
  {
    sub_1B715CC(&BattleFBXComponent_TypeInfo, x);
    this = (BattleActorControl___c_o *)sub_1B715CC(&StringLiteral_17307/*"body"*/, v4);
    byte_4A2286F = 1;
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
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17307/*"body"*/, 0LL);
LABEL_14:
      sub_1B71828(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__328_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19
  __int64 v4; // x1

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4A22872 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__, *(_QWORD *)&x.fields.key);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v4);
    byte_4A22872 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__289_object____cctor(const MethodInfo_301C9C4 *method)
{
  BattleActorControl___c__289_T__c *klass; // x0
  __int64 _0_BattleActorControl___c__289_T; // x0
  Il2CppObject *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  BattleActorControl___c__289_T__c *v7; // x0
  __int64 _2_BattleActorControl___c__289_T; // x0
  BattleActorControl___c__289_T__c *v9; // x0
  __int64 v10; // x0

  klass = method->klass;
  if ( (BYTE5(klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    klass = (BattleActorControl___c__289_T__c *)sub_1BC34A8(klass);
  _0_BattleActorControl___c__289_T = (__int64)klass->rgctx_data->_0_BattleActorControl___c__289_T_;
  if ( (*(_BYTE *)(_0_BattleActorControl___c__289_T + 309) & 1) == 0 )
    _0_BattleActorControl___c__289_T = sub_1BC34A8(_0_BattleActorControl___c__289_T);
  v4 = (Il2CppObject *)sub_1B71818(_0_BattleActorControl___c__289_T);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1BC34A8(method->klass);
  System_Object___ctor(v4, 0LL);
  v7 = method->klass;
  if ( (BYTE5(v7->vtable._0_Equals.methodPtr) & 1) == 0 )
    v7 = (BattleActorControl___c__289_T__c *)sub_1BC34A8(v7);
  _2_BattleActorControl___c__289_T = (__int64)v7->rgctx_data->_2_BattleActorControl___c__289_T_;
  if ( (*(_BYTE *)(_2_BattleActorControl___c__289_T + 309) & 1) == 0 )
    _2_BattleActorControl___c__289_T = sub_1BC34A8(_2_BattleActorControl___c__289_T);
  **(_QWORD **)(_2_BattleActorControl___c__289_T + 184) = v4;
  v9 = method->klass;
  if ( (BYTE5(v9->vtable._0_Equals.methodPtr) & 1) == 0 )
    v9 = (BattleActorControl___c__289_T__c *)sub_1BC34A8(v9);
  v10 = (__int64)v9->rgctx_data->_2_BattleActorControl___c__289_T_;
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BC34A8(v10);
  sub_1B71570(*(ServantStatusBattleListViewItem_o **)(v10 + 184), (int32_t)v4, v5, v6);
}


void __fastcall BattleActorControl___c__289_object____ctor(
        BattleActorControl___c__289_T__o *this,
        const MethodInfo_301CA80 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__289_object____UpdateMaterialsOnRenderders_b__289_0(
        BattleActorControl___c__289_T__o *this,
        Il2CppObject *x,
        const MethodInfo_301CA88 *method)
{
  if ( (byte_4A25601 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, x);
    byte_4A25601 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__289_object____UpdateMaterialsOnRenderders_b__289_1(
        BattleActorControl___c__289_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_301CAE4 *method)
{
  if ( (byte_4A25602 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, x);
    byte_4A25602 = 1;
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
    sub_1B71828(this, method);
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
    sub_1B71828(this, x);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _BOOL8 v8; // x0
  __int64 v9; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  System_Object_array *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A22873 & 1) == 0 )
  {
    sub_1B715CC(&Method_BasicHelper_Any_FsmTransition___, fsm);
    sub_1B715CC(&System_Func_FsmTransition__bool__TypeInfo, v5);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__1__, v7);
    byte_4A22873 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v8 )
    return 0;
  if ( !fsm )
    sub_1B71828(v8, v9);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v12 = (System_Object_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_1B71818(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass166_0__ExistMotionEvent_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  return BasicHelper__Any_object__48523356(
           v12,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2E4685C *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass166_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass166_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1B71828(this, 0LL);
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
  if ( (byte_4A22874 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass264_0_o *)sub_1B715CC(
                                                            &Method_System_Collections_Generic_List_GameObject__Add__,
                                                            *(_QWORD *)&x);
    byte_4A22874 = 1;
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
    sub_1B71828(this, *(_QWORD *)&x);
  }
  size = targets->fields._size;
  v12 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      targets,
      (Il2CppObject *)this,
      *(const MethodInfo_34D0260 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    targets->fields._size = size + 1;
    v13 = &items->obj.klass + size;
    v13[4] = (Il2CppClass *)v12;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v13 + 4), (int32_t)v12, v7, v8);
  }
}


void __fastcall BattleActorControl___c__DisplayClass276_0___ctor(
        BattleActorControl___c__DisplayClass276_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass276_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass276_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass276_0_o *v2; // x19
  __int64 v3; // x1
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v7; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v9; // x20
  int32_t shadowEffectId; // w22
  BattleActorControl___c__DisplayClass276_0_o *v11; // x21
  BattleActorControl___c__DisplayClass276_0_o *v12; // x23
  int32_t v13; // w24
  int32_t LimitCount; // w25
  UnityEngine_GameObject_o *EffectToNode_42480336; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleActorControl_o *v18; // x8
  UnityEngine_Object_o *v19; // x20
  struct BattleActorControl_o *v20; // x8
  BattleActorControl___c__DisplayClass276_0_o *v21; // x20
  struct BattleActorControl_o *v22; // x8
  BattleActorControl___c__DisplayClass276_0_o *v23; // x20
  struct BattleActorControl_o *v24; // x8
  BattleActorControl___c__DisplayClass276_0_o *v25; // x20
  struct BattleActorControl_o *v26; // x8

  v2 = this;
  if ( (byte_4A22875 & 1) == 0 )
  {
    sub_1B715CC(&BattleEffectUtility_TypeInfo, method);
    this = (BattleActorControl___c__DisplayClass276_0_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    byte_4A22875 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    this = (BattleActorControl___c__DisplayClass276_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
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
        this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v9 = v2->fields.__4__this;
          if ( !v9 )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass276_0_o *)v9->fields.shadowObj;
          if ( !this )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          shadowEffectId = v2->fields.shadowEffectId;
          v11 = this;
          this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v12 = this;
          this = (BattleActorControl___c__DisplayClass276_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v13 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectToNode_42480336 = BattleEffectUtility__loadEffectToNode_42480336(
                                    (UnityEngine_GameObject_o *)v11,
                                    shadowEffectId,
                                    (UnityEngine_GameObject_o *)v12,
                                    v13,
                                    LimitCount,
                                    0LL);
          v9->fields.specialShadowObj = EffectToNode_42480336;
          sub_1B71570(
            (ServantStatusBattleListViewItem_o *)&v9->fields.specialShadowObj,
            (int32_t)EffectToNode_42480336,
            v16,
            v17);
          v18 = v2->fields.__4__this;
          if ( !v18 )
            goto LABEL_46;
          v19 = (UnityEngine_Object_o *)v18->fields.specialShadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_Object__op_Inequality(v19, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v20 = v2->fields.__4__this;
            if ( v20 )
            {
              this = (BattleActorControl___c__DisplayClass276_0_o *)v20->fields.specialShadowObj;
              if ( this )
              {
                this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                v21 = this;
                if ( !byte_4A1A751 )
                {
                  this = (BattleActorControl___c__DisplayClass276_0_o *)sub_1B715CC(
                                                                          &UnityEngine_Vector3_TypeInfo,
                                                                          method);
                  byte_4A1A751 = 1;
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
                    this = (BattleActorControl___c__DisplayClass276_0_o *)v22->fields.specialShadowObj;
                    if ( this )
                    {
                      this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                      v23 = this;
                      if ( !byte_4A1A757 )
                      {
                        this = (BattleActorControl___c__DisplayClass276_0_o *)sub_1B715CC(
                                                                                &UnityEngine_Quaternion_TypeInfo,
                                                                                method);
                        byte_4A1A757 = 1;
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
                          this = (BattleActorControl___c__DisplayClass276_0_o *)v24->fields.specialShadowObj;
                          if ( this )
                          {
                            this = (BattleActorControl___c__DisplayClass276_0_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                            v25 = this;
                            if ( !byte_4A1A756 )
                            {
                              this = (BattleActorControl___c__DisplayClass276_0_o *)sub_1B715CC(
                                                                                      &UnityEngine_Vector3_TypeInfo,
                                                                                      method);
                              byte_4A1A756 = 1;
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
                                this = (BattleActorControl___c__DisplayClass276_0_o *)v26->fields.specialShadowObj;
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
            sub_1B71828(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass288_0___ctor(
        BattleActorControl___c__DisplayClass288_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass288_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass288_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass288_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A22876 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass288_0_o *)sub_1B715CC(&StringLiteral_16490/*"_fade"*/, material);
    byte_4A22876 = 1;
  }
  if ( !material )
    sub_1B71828(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16490/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass327_0___ctor(
        BattleActorControl___c__DisplayClass327_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass327_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass327_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass368_0___ctor(
        BattleActorControl___c__DisplayClass368_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass368_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass368_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass368_0_o *)this->fields.component) == 0LL )
    sub_1B71828(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass371_0___ctor(
        BattleActorControl___c__DisplayClass371_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass371_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass371_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass371_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass371_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__327___ctor(
        BattleActorControl__coAddAura_d__327_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__327__MoveNext(
        BattleActorControl__coAddAura_d__327_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleActorControl__coAddAura_d__327_o *v4; // x19
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
  int32_t v29; // w3
  Il2CppObject *v30; // x22
  int32_t v31; // w2
  int32_t v32; // w3
  struct BattleActorControl___c__DisplayClass327_0_o *_8__1; // x22
  int32_t id; // w21
  System_Action_o *v35; // x23
  BattlePerformance_o *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  ServantStatusBattleListViewItem_o *v39; // x19
  bool result; // w0
  struct BattleActorControl___c__DisplayClass327_0_o *v41; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *v48; // x8
  struct System_String_o *Empty; // x1
  int v50; // w22
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
  int32_t v62; // w3
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
  int32_t v76; // w3
  UnityEngine_Object_o *Component_object; // x22
  int32_t v78; // w2
  int32_t v79; // w3
  struct BattlePerformance_o *performance; // x8
  struct BattleActorControl_o *actorcamera; // x1
  Il2CppObject *v82; // x0
  int32_t v83; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t EffectFolder; // [xsp+8h] [xbp-68h] BYREF
  int32_t v85; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A2287A & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&BattleEffectUtility_TypeInfo, v5);
    sub_1B715CC(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_EffectMaster___, v7);
    sub_1B715CC(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__, v11);
    sub_1B715CC(&Method_UnityEngine_GameObject_AddComponent_BillBoard___, v12);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BillBoard___, v13);
    sub_1B715CC(&int_TypeInfo, v14);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v15);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    sub_1B715CC(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v17);
    sub_1B715CC(&string_TypeInfo, v18);
    sub_1B715CC(&Method_BattleActorControl___c__DisplayClass327_0__coAddAura_b__0__, v19);
    sub_1B715CC(&BattleActorControl___c__DisplayClass327_0_TypeInfo, v20);
    sub_1B715CC(&StringLiteral_5846/*"Effect/weapon/{0}"*/, v21);
    this = (BattleActorControl__coAddAura_d__327_o *)sub_1B715CC(&StringLiteral_5849/*"Effect/weapon/{0}/{1}"*/, v22);
    byte_4A2287A = 1;
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
    this = (BattleActorControl__coAddAura_d__327_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v4->fields.auraEffectId,
           (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__327_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_65;
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_31487B4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__327_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__327_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_65;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v4->fields.auraEffectId,
               (const MethodInfo_30F8760 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    v4->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    p_effectEntity_5__2 = &v4->fields._effectEntity_5__2;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._effectEntity_5__2, (int32_t)Entity, v28, v29);
    if ( !v4->fields._effectEntity_5__2 )
    {
LABEL_41:
      v63 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1B71818(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v63, _4__this, 0LL);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v4->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !byte_4A1A751 )
        {
          sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v66);
          byte_4A1A751 = 1;
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
        this = (BattleActorControl__coAddAura_d__327_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
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
                                                       (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl__coAddAura_d__327_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__327_o *)UnityEngine_GameObject__AddComponent_object_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_2EAA8B0 *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_65;
            Component_object = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_65;
            actorcamera = (struct BattleActorControl_o *)performance->fields.actorcamera;
            this->fields.__4__this = actorcamera;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.__4__this, (int32_t)actorcamera, v78, v79);
          }
          else if ( !Component_object )
          {
            goto LABEL_65;
          }
          BillBoard__setFlip((BillBoard_o *)Component_object, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__327_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v4->fields.auraEffectId,
              (Il2CppObject *)EffectToNode,
              (const MethodInfo_3148840 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_61:
            v4->fields._effectEntity_5__2 = 0LL;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._effectEntity_5__2, 0, v75, v76);
            return 0;
          }
        }
      }
LABEL_65:
      sub_1B71828(this, method);
    }
    v30 = (Il2CppObject *)sub_1B71818(BattleActorControl___c__DisplayClass327_0_TypeInfo);
    System_Object___ctor(v30, 0LL);
    v4->fields.__8__1 = (struct BattleActorControl___c__DisplayClass327_0_o *)v30;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v30, v31, v32);
    _8__1 = v4->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_65;
    _8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_65;
    id = (*p_effectEntity_5__2)->fields.id;
    v35 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(
      v35,
      (Il2CppObject *)_8__1,
      Method_BattleActorControl___c__DisplayClass327_0__coAddAura_b__0__,
      0LL);
    v36 = _4__this->fields.performance;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v35, v36, 0LL);
  }
  this = (BattleActorControl__coAddAura_d__327_o *)&v4->fields.__8__1;
  v41 = v4->fields.__8__1;
  if ( !v41 )
    goto LABEL_65;
  if ( v41->fields.isLoading )
  {
    v4->fields.__2__current = 0LL;
    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(p__2__current, 0, v2, v3);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
    return result;
  }
  v4->fields.__8__1 = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
  effectEntity_5__2 = v4->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_41;
  v48 = string_TypeInfo->static_fields;
  Empty = v48->Empty;
  v4->fields._effectPath_5__3 = v48->Empty;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._effectPath_5__3, (int32_t)Empty, v45, v46);
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__327_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__327_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_65;
  v50 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v50 )
  {
    v85 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__327_o *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v52, v53, v54);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_65;
    v55 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder, v56, v57, v58);
    v60 = System_String__Format_61519876((System_String_o *)StringLiteral_5849/*"Effect/weapon/{0}/{1}"*/, v55, v59, 0LL);
  }
  else
  {
    v83 = WeaponGroup;
    v82 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83, v52, v53, v54);
    v60 = System_String__Format((System_String_o *)StringLiteral_5846/*"Effect/weapon/{0}"*/, v82, 0LL);
  }
  v4->fields._effectPath_5__3 = v60;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._effectPath_5__3, (int32_t)v60, v61, v62);
LABEL_22:
  this = (BattleActorControl__coAddAura_d__327_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__327_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     v4->fields._effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v4->fields.__2__current = 0LL;
    v39 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
    sub_1B71570(v39, 0, v37, v38);
    *(_DWORD *)&v39[-1].fields.isMine = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__327_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.auraEffectId,
          (const MethodInfo_3148A48 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v4->fields._effectPath_5__3 = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._effectPath_5__3, 0, v43, v44);
    goto LABEL_41;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__327__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__327_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__327__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__327_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__coAddAura_d__327_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__327__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__327_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__327__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__327_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__334___ctor(
        BattleActorControl__colShiftServantChange_d__334_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServantChange_d__334__MoveNext(
        BattleActorControl__colShiftServantChange_d__334_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colShiftServantChange_d__334_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x0
  BattleActorControl__colShiftServantChange_d__334_o **p_fadeComp_5__2; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  DefCoroutine_c *v16; // x0
  Il2CppObject *milliSecTwo; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  ServantStatusBattleListViewItem_o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  int v23; // w8
  struct BattleActionData_ShiftServant_o *v24; // x8
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  int32_t v31; // w2
  int32_t v32; // w3
  struct BattlePerformance_o *v33; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v35; // x8
  struct BattleData_o *data; // x8
  int32_t v37; // w2
  int32_t v38; // w3
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *v40; // x21
  System_Collections_Generic_List_int__o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *gameObject; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A2287B & 1) == 0 )
  {
    sub_1B715CC(&DefCoroutine_TypeInfo, method);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v3);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___, v4);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    this = (BattleActorControl__colShiftServantChange_d__334_o *)sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v6);
    byte_4A2287B = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)v2->fields.shiftSvt;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__334_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
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
      this = (BattleActorControl__colShiftServantChange_d__334_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v2->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_object;
      p_fadeComp_5__2 = (BattleActorControl__colShiftServantChange_d__334_o **)&v2->fields._fadeComp_5__2;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._fadeComp_5__2, (int32_t)Component_object, v12, v13);
      if ( !v2->fields.isShift )
        goto LABEL_13;
      this = *p_fadeComp_5__2;
      if ( !*p_fadeComp_5__2 )
        goto LABEL_78;
      v48.fields.r = 1.0;
      v48.fields.g = 1.0;
      v48.fields.b = 1.0;
      v48.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v48, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v16 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v16 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (Il2CppObject *)v16->static_fields->milliSecTwo;
      v2->fields.__2__current = milliSecTwo;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(p__2__current, (int32_t)milliSecTwo, v14, v15);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v20, 0, v21, v22);
      v23 = 2;
      goto LABEL_77;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      v24 = v2->fields.shiftSvt;
      if ( !v24 )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_41700888((BattlePerformance_o *)this, v24->fields.loadedAssetArgs, 0, 0LL);
      v2->fields.__2__current = 0LL;
      v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v20, 0, v25, v26);
      v23 = 3;
      goto LABEL_77;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_28:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colShiftServantChange_d__334_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v20, 0, v27, v28);
        v23 = 4;
LABEL_77:
        *(_DWORD *)&v20[-1].fields.isMine = v23;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_78;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      v40 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v40, 0LL);
LABEL_71:
        v41 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v2->fields._moveEffect_5__3 = v41;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, (int32_t)v41, v42, v43);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
            sub_1B71830(this, method);
          this = (BattleActorControl__colShiftServantChange_d__334_o *)motionFSM->m_Items[0];
          if ( this )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_69258040(gameObject, 0LL);
            v2->fields.__2__current = 0LL;
            v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
            sub_1B71570(v20, 0, v46, v47);
            v23 = 5;
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
      this = (BattleActorControl__colShiftServantChange_d__334_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v20, 0, v29, v30);
        v23 = 6;
        goto LABEL_77;
      }
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v2->fields.isShift )
        goto LABEL_45;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)v2->fields._fadeComp_5__2;
      if ( !this )
        goto LABEL_78;
      v49.fields.r = 1.0;
      v49.fields.g = 1.0;
      v49.fields.b = 1.0;
      v49.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v49, 0.2, 1, 0LL, 0, 0LL);
LABEL_45:
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_54;
      v33 = _4__this->fields.performance;
      if ( !v33 )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)v33->fields.data;
      if ( !this )
        goto LABEL_78;
      BattleData__replaceCommandCard(
        (BattleData_o *)this,
        battleSvtData->fields.uniqueId,
        battleSvtData->fields.uniqueId,
        0LL);
      v35 = _4__this->fields.performance;
      if ( !v35 )
        goto LABEL_78;
      data = v35->fields.data;
      if ( !data )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__334_o *)data->fields.logic;
      if ( !this )
        goto LABEL_78;
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_54:
      if ( v2->fields._moveEffect_5__3 )
      {
        v2->fields.__2__current = 0LL;
        v20 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v20, 0, v31, v32);
        v23 = 7;
        goto LABEL_77;
      }
LABEL_56:
      v2->fields._fadeComp_5__2 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._fadeComp_5__2, 0, v31, v32);
      v2->fields._moveEffect_5__3 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, 0, v37, v38);
LABEL_57:
      this = (BattleActorControl__colShiftServantChange_d__334_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__334_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0LL)) == 0LL )
      {
LABEL_78:
        sub_1B71828(this, method);
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


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__334__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__334_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__334__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__334_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__colShiftServantChange_d__334_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__334__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__334_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__334__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__334_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__333___ctor(
        BattleActorControl__colShiftServant_d__333_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__333__MoveNext(
        BattleActorControl__colShiftServant_d__333_o *this,
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
        sub_1B71570((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v5, v7, v8);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_10:
      sub_1B71828(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  this->fields.__2__current = 0LL;
  v10 = &this->fields.__2__current;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v10, 0, v11, v12);
  *((_DWORD *)v10 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__333__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__333_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__333__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__333_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__colShiftServant_d__333_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__333__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__333_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__333__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__333_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__322___ctor(
        BattleActorControl__collChangeAppearance_d__322_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__322__MoveNext(
        BattleActorControl__collChangeAppearance_d__322_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__322_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BattleActorControl_o *_4__this; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  ServantStatusBattleListViewItem_o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  int v18; // w8
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleServantData_o *v23; // x8
  ServantAssetArgs_o *v24; // x21
  _BOOL4 isForceAppearance; // w22
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3

  v2 = this;
  if ( (byte_4A2287C & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    this = (BattleActorControl__collChangeAppearance_d__322_o *)sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v4);
    byte_4A2287C = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__322_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__322_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(p__2__current, 0, v7, v8);
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
      this = (BattleActorControl__collChangeAppearance_d__322_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_43;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__322_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_43;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_18:
      v12 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v12;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v12, v13, v14);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v15 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v15, 0, v16, v17);
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
      v15 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v15, 0, v21, v22);
      v18 = 3;
      goto LABEL_41;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__322_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__322_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__322_o *)BattleServantData__UpdateLoadedAssetArgs(
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
      this = (BattleActorControl__collChangeAppearance_d__322_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v15 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v15, 0, v26, v27);
        v18 = 4;
LABEL_41:
        *(_DWORD *)&v15[-1].fields.isMine = v18;
        return 1;
      }
      if ( !_4__this )
LABEL_43:
        sub_1B71828(this, method);
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0LL;
        v15 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v15, 0, v28, v29);
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


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__322__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__322_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__322__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__322_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__collChangeAppearance_d__322_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__322__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__322_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__322__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__322_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__317___ctor(
        BattleActorControl__colloadDressServant_d__317_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__317__MoveNext(
        BattleActorControl__colloadDressServant_d__317_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__317_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  int32_t v8; // w2
  int32_t v9; // w3
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  ServantStatusBattleListViewItem_o *v19; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  int v22; // w8
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 flg; // w21
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  ServantAssetArgs_o *updated; // x21
  int32_t v30; // w2
  int32_t v31; // w3
  ServantAssetArgs_o *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3

  v2 = this;
  if ( (byte_4A2287D & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v4);
    this = (BattleActorControl__colloadDressServant_d__317_o *)sub_1B715CC(&StringLiteral_5456/*"END_LOAD"*/, v5);
    byte_4A2287D = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_53;
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(p__2__current, 0, v11, v12);
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
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_61;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_20:
      v16 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__3 = v16;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, (int32_t)v16, v17, v18);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v19, 0, v20, v21);
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v26, v27);
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
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.battleSvtData;
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
      this = (BattleActorControl__colloadDressServant_d__317_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v2->fields.__2__current = 0LL;
      v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v19, 0, v30, v31);
      v22 = 4;
      break;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__317_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[3].fields._moveEffect_5__3) = -1;
      v32 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(v32, 0, 0LL);
LABEL_43:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__317_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v19, 0, v33, v34);
        v22 = 6;
      }
      else
      {
LABEL_47:
        if ( !_4__this )
LABEL_61:
          sub_1B71828(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( v2->fields._moveEffect_5__3 )
        {
          v2->fields.__2__current = 0LL;
          v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B71570(v19, 0, v35, v36);
          v22 = 7;
        }
        else
        {
LABEL_52:
          v2->fields._moveEffect_5__3 = 0LL;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__3, 0, v35, v36);
LABEL_53:
          v2->fields.__2__current = 0LL;
          v19 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
          sub_1B71570(v19, 0, v8, v9);
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
      BattleActorControl__sendEventFSM_43478204(_4__this, (System_String_o *)StringLiteral_5456/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  *(_DWORD *)&v19[-1].fields.isMine = v22;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__317__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__317_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__317__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__317_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__colloadDressServant_d__317_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__317__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__317_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__317__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__317_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__314___ctor(
        BattleActorControl__colloadTransformServant_d__314_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__314__MoveNext(
        BattleActorControl__colloadTransformServant_d__314_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadTransformServant_d__314_o *v2; // x19
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
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v22; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v28; // x21
  const MethodInfo *v29; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_List_object__o *v35; // x23
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 _2__current_low; // x10
  __int64 v41; // x8
  System_Collections_IEnumerator_o *v42; // x0
  ServantStatusBattleListViewItem_o *v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  int v46; // w8
  int32_t v47; // w2
  int32_t v48; // w3
  BattleActionData_ShiftServant_o *ShiftServant; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  UnityEngine_WaitForEndOfFrame_o *v53; // x20
  int32_t v54; // w2
  int32_t v55; // w3
  struct BattleActionData_ShiftServant_o *v56; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v59; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v63; // x8
  struct BattlePerformance_o *v64; // x8

  v2 = this;
  if ( (byte_4A2287E & 1) == 0 )
  {
    sub_1B715CC(&BattleServantSnapShotShiftServant_TypeInfo, method);
    sub_1B715CC(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo, v3);
    sub_1B715CC(&System_GC_TypeInfo, v4);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__, v7);
    sub_1B715CC(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&OptionManager_TypeInfo, v10);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v11);
    sub_1B715CC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v12);
    sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v13);
    this = (BattleActorControl__colloadTransformServant_d__314_o *)sub_1B715CC(&StringLiteral_5456/*"END_LOAD"*/, v14);
    byte_4A2287E = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_16:
      v18 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v18;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._moveEffect_5__2, (int32_t)v18, v19, v20);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_78;
      if ( !motionFSM->max_length )
        sub_1B71830(this, method);
      v22 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69257852(v22, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(p__2__current, 0, v24, v25);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      v28 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_1B71818(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v28, battleSvtData, v29);
      if ( !v28 )
        goto LABEL_78;
      svtId_k__BackingField = v28->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v28->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v28->fields._overwriteSvtVoiceId_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0LL);
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v35 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v35,
          (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v35;
        sub_1B71570(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (int32_t)v35,
          v36,
          v37);
        this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_78;
      }
      v38 = *(_QWORD *)&this->fields.__1__state;
      v39 = Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v38 )
        goto LABEL_78;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v38 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v28,
          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = v38 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v41 + 32) = v28;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v41 + 32), (int32_t)v28, v33, v34);
      }
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_78;
      ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)this, 0LL);
      v2->fields._shiftSvtData_5__3 = ShiftServant;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields._shiftSvtData_5__3, (int32_t)ShiftServant, v50, v51);
      shiftSvtData_5__3 = v2->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_41700888(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__314_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_62551572(0LL);
        v53 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v53, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v53;
        v43 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v43, (int32_t)v53, v54, v55);
        v46 = 2;
        goto LABEL_77;
      }
LABEL_51:
      v56 = v2->fields._shiftSvtData_5__3;
      if ( !v56 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      AfterSvtCache_k__BackingField = v56->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(AfterSvtCache_k__BackingField->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v59 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
            ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
            : 0LL;
      }
      else
      {
        v59 = 0LL;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v59, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_61:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__314_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
          BattleActorControl__setDir(_4__this, 0LL);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0LL);
          this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v63 = _4__this->fields.battleSvtData;
              if ( v63 )
              {
                this = (BattleActorControl__colloadTransformServant_d__314_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard((BattleData_o *)this, v63->fields.uniqueId, v63->fields.uniqueId, 0LL);
                  v64 = _4__this->fields.performance;
                  if ( v64 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__314_o *)v64->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v64->fields.data,
                        _4__this->fields.battleSvtData,
                        0LL);
                      this = (BattleActorControl__colloadTransformServant_d__314_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__314_o *)BattlePerformance__get_FieldEnvData(
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
                            v43 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                            sub_1B71570(v43, 0, v47, v48);
                            v46 = 5;
                          }
                          else
                          {
LABEL_76:
                            v2->fields.__2__current = 0LL;
                            v43 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
                            sub_1B71570(v43, 0, v47, v48);
                            v46 = 6;
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
        sub_1B71828(this, method);
      }
      v2->fields.__2__current = 0LL;
      v43 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v43, 0, v60, v61);
      v46 = 4;
LABEL_77:
      *(_DWORD *)&v43[-1].fields.isMine = v46;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__314_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__314_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      v42 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v42;
      v43 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
      sub_1B71570(v43, (int32_t)v42, v44, v45);
      v46 = 3;
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
      BattleActorControl__sendEventFSM_43478204(_4__this, (System_String_o *)StringLiteral_5456/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__314__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__314_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__314__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__314_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__colloadTransformServant_d__314_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__314__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__314_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__314__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__314_o *this,
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
  int32_t v17; // w3

  if ( (byte_4A2287F & 1) == 0 )
  {
    sub_1B715CC(&DefCoroutine_TypeInfo, method);
    sub_1B715CC(&UnityEngine_WaitForSeconds_TypeInfo, v5);
    byte_4A2287F = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1B71828(0LL, method);
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
    v14 = (UnityEngine_WaitForSeconds_o *)sub_1B71818(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v14, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v14;
    p__2__current = &this->fields.__2__current;
    sub_1B71570((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v14, v16, v17);
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)v12, (int32_t)v11, v2, v3);
    *((_DWORD *)v12 - 2) = 2;
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__coroutinePostCallBack_d__207_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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


void __fastcall BattleActorControl__waitChangeApp_d__320___ctor(
        BattleActorControl__waitChangeApp_d__320_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__320__MoveNext(
        BattleActorControl__waitChangeApp_d__320_o *this,
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
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_69243124(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0LL);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_1B71570((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)started, v8, v9);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_1B71828(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__320__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__320_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__320__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__320_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleActorControl__waitChangeApp_d__320_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__320__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__320_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__320__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__320_o *this,
        const MethodInfo *method)
{
  ;
}