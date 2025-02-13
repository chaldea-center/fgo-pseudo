void __fastcall BattleActorControl___cctor(const MethodInfo *method)
{
  if ( (byte_4BDF479 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_TypeInfo);
    byte_4BDF479 = 1;
  }
  BattleActorControl_TypeInfo->static_fields->defaultHeight = 3.5;
}


void __fastcall BattleActorControl___ctor(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  BattleLogData_o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  System_Collections_Generic_Dictionary_int__object__o *v17; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  System_Collections_Generic_List_int__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *v31; // x20
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  void *v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  void *v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_T__o *v52; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Hashtable_o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Hashtable_o *v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_Dictionary_object__object__o *v78; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7

  if ( (byte_4BDF478 & 1) == 0 )
  {
    sub_1C21E38(&BattleLogData_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___TypeInfo);
    sub_1C21E38(&TranslucentActorVisualInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_16923/*"act"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF478 = 1;
  }
  this->fields.currentSpShadowEffectId = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.auraList = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.auraList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.actorScale = 1.0;
  v10 = (BattleLogData_o *)sub_1C22084(BattleLogData_TypeInfo);
  BattleLogData___ctor_44125276(v10, (System_String_o *)StringLiteral_16923/*"act"*/, 90, 0LL);
  this->fields.battleLog = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.battleLog, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__GameObject__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v17,
    (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__GameObject___ctor__);
  this->fields.buffLoopEffectDict = (struct System_Collections_Generic_Dictionary_int__GameObject__o *)v17;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.buffLoopEffectDict,
    (int64_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reservedEffectBuffEffectIdList = v24;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.reservedEffectBuffEffectIdList,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.isFirstSaveBeforePlayAnim = 1;
  v31 = (Il2CppObject *)sub_1C22084(TranslucentActorVisualInfo_TypeInfo);
  System_Object___ctor(v31, 0LL);
  this->fields.translucentActorVisualInfo = (struct TranslucentActorVisualInfo_o *)v31;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.translucentActorVisualInfo,
    (int64_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.prevAnimEffectTriggerKey,
    (int64_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = StringLiteral_1/*""*/;
  this->fields.partAnimationSaveKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.partAnimationSaveKey,
    (int64_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___TypeInfo);
  System_Collections_Generic_List_ValueTuple_Int32Enum__object_____ctor(
    v52,
    (const MethodInfo_35F6014 *)Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl____ctor__);
  this->fields.noblePhantasmObjectVisibleCtrList = (struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *)v52;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.noblePhantasmObjectVisibleCtrList,
    (int64_t)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v59, 0LL);
  this->fields.EventList = v59;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.EventList, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v66, 0LL);
  this->fields.CompleteList = v66;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.CompleteList, (int64_t)v66, v67, v68, v69, v70, v71, v72);
  __asm { FMOV            V0.2S, #1.0 }
  this->fields.scale = 1.0;
  *(_QWORD *)&this->fields.animetimescale = _D0;
  v78 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v78,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields.eventClassAddedEventDict = (struct System_Collections_Generic_Dictionary_string__string__o *)v78;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.eventClassAddedEventDict,
    (int64_t)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleActorControl__ActiveRemainReservedBuffEffect(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *reservedEffectBuffEffectIdList; // x0
  System_Collections_Generic_IEnumerable_T__o *v4; // x20
  System_Action_int__o *v5; // x21

  if ( (byte_4BDF463 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_int___);
    sub_1C21E38(&Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__368_0__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4BDF463 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    sub_1C22094(0LL, method);
  v4 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_int___ToArray(
                                                        reservedEffectBuffEffectIdList,
                                                        (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
  v5 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v5,
    (Il2CppObject *)this,
    Method_BattleActorControl__ActiveRemainReservedBuffEffect_b__368_0__,
    0LL);
  BasicHelper__ForEach_int_(v4, (System_Action_T__o *)v5, (const MethodInfo_2F9C448 *)Method_BasicHelper_ForEach_int___);
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

  if ( (byte_4BDF462 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Remove__);
    byte_4BDF462 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_22;
  if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
         (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
         effectId,
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    buffLoopEffectDict = this->fields.buffLoopEffectDict;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                           effectId,
                           (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                             (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !buffLoopEffectDict )
        goto LABEL_22;
      buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                             (UnityEngine_GameObject_o *)buffLoopEffectDict,
                             1,
                             (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
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
            sub_1C2209C(buffLoopEffectDict, *(_QWORD *)&effectId);
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
        sub_1C22094(buffLoopEffectDict, *(_QWORD *)&effectId);
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
         (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    buffLoopEffectDict = this->fields.reservedEffectBuffEffectIdList;
    if ( !buffLoopEffectDict )
      goto LABEL_22;
    System_Collections_Generic_List_int___Remove(
      (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
      effectId,
      (const MethodInfo_363358C *)Method_System_Collections_Generic_List_int__Remove__);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v19; // x8

  v4 = this;
  if ( (byte_4BDF43A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__);
    this = (BattleActorControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    byte_4BDF43A = 1;
  }
  if ( !obj )
    goto LABEL_17;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                   obj,
                                   (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
        sub_1C2209C(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v9 = (Il2CppObject *)p_actorObject[v7];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v9,
                                       (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        v16 = *(_QWORD *)&this->fields.m_CachedPtr;
        v17 = Method_System_Collections_Generic_List_SkinnedMeshRenderer__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v16 )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v16 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v9,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = v16 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v19 + 32) = v9;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)v9, v10, v11, v12, v13, v14, v15);
        }
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_17:
    sub_1C22094(this, obj);
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
  const MethodInfo_39A2C90 *v8; // x4
  System_Collections_Generic_List_T__o *noblePhantasmObjectVisibleCtrList; // x19
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x2
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  PartyOrganizationUtility_o *v19; // x0
  int64_t v20; // x2
  __int64 v21; // [xsp+0h] [xbp-40h] BYREF
  __int64 v22; // [xsp+8h] [xbp-38h]
  System_ValueTuple_Int32Enum__object__o v23; // 0:x0.16

  v5 = v4;
  v6 = timing;
  v7 = this;
  if ( (byte_4BDF424 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Add__);
    this = (BattleActorControl_o *)sub_1C21E38(&Method_System_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___ctor__);
    byte_4BDF424 = 1;
  }
  if ( !v5 )
    goto LABEL_11;
  if ( !BattleActorControl__ProcServantObjectVisibleCtr(v5, v6, 0, method) )
    return;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)v7->fields.noblePhantasmObjectVisibleCtrList;
  *(_QWORD *)&v23.fields.Item1 = &v21;
  v23.fields.Item2 = (Il2CppObject *)v6;
  v21 = 0LL;
  v22 = 0LL;
  System_ValueTuple_Int32Enum__object____ctor(
    v23,
    (int32_t)v5,
    (Il2CppObject *)Method_System_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___ctor__,
    v8);
  if ( !noblePhantasmObjectVisibleCtrList
    || (*(_QWORD *)&timing = v21,
        v15 = v22,
        items = noblePhantasmObjectVisibleCtrList->fields._items,
        v17 = Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Add__,
        ++noblePhantasmObjectVisibleCtrList->fields._version,
        !items) )
  {
LABEL_11:
    sub_1C22094(this, *(_QWORD *)&timing);
  }
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_ValueTuple_Int32Enum__object____AddWithResize(
      noblePhantasmObjectVisibleCtrList,
      *(System_ValueTuple_Int32Enum__object__o *)&timing,
      *(const MethodInfo_35F6894 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = (PartyOrganizationUtility_o *)(&items->obj + size);
    noblePhantasmObjectVisibleCtrList->fields._size = size + 1;
    v19->fields._npcFollowerInfos = (struct System_Collections_Generic_Dictionary_int__FollowerInfo__o *)v20;
    v19 = (PartyOrganizationUtility_o *)((char *)v19 + 40);
    *(_QWORD *)&v19[-1].fields._IsQuestStartMenuMode_k__BackingField = *(_QWORD *)&timing;
    sub_1C21DDC(v19, 0LL, v20, v10, v11, v12, v13, v14);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4BDF45D & 1) == 0 )
  {
    sub_1C21E38(&ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    byte_4BDF45D = 1;
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
    v13 = (ChangeBattlePhaseOverwriteAnimation_o *)sub_1C22084(ChangeBattlePhaseOverwriteAnimation_TypeInfo);
    ChangeBattlePhaseOverwriteAnimation___ctor(v13, this, v11, v12, v14);
    this->fields.overwriteAnim = v13;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.overwriteAnim, (int64_t)v13, v15, v16, v17, v18, v19, v20);
    Master = (ServantAnimationOverwriteMaster_o *)this->fields.overwriteAnim;
    if ( Master )
    {
      BattleObserver__Add((BattleObserver_o *)Master, (BattleSubject_o *)v12, v21);
      return;
    }
LABEL_9:
    sub_1C22094(Master, v10);
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

  if ( (byte_4BDF461 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4BDF461 = 1;
  }
  reservedEffectBuffEffectIdList = this->fields.reservedEffectBuffEffectIdList;
  if ( !reservedEffectBuffEffectIdList )
    goto LABEL_11;
  if ( System_Collections_Generic_List_int___Contains(
         reservedEffectBuffEffectIdList,
         effectId,
         (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    sub_1C22094(reservedEffectBuffEffectIdList, *(_QWORD *)&effectId);
  }
  size = reservedEffectBuffEffectIdList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      reservedEffectBuffEffectIdList,
      effectId,
      *(const MethodInfo_3632090 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
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
  if ( (byte_4BDF403 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_string__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_string___);
    sub_1C21E38(&Method_BattleActorControl__AddServantVoicePlayed_b__228_0__);
    this = (BattleActorControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF403 = 1;
  }
  if ( !v4->fields.isEnemy )
  {
    battleSvtData = v4->fields.battleSvtData;
    if ( !battleSvtData )
      sub_1C22094(this, playedSoundArray);
    if ( !battleSvtData->fields.followerType )
    {
      performance = (UnityEngine_Object_o *)v4->fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
      {
        v7 = (System_Action_object__o *)sub_1C22084(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v7,
          (Il2CppObject *)v4,
          Method_BattleActorControl__AddServantVoicePlayed_b__228_0__,
          0LL);
        BasicHelper__ForEach_object_(
          (System_Collections_Generic_IEnumerable_T__o *)playedSoundArray,
          (System_Action_T__o *)v7,
          (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_string___);
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
  if ( (byte_4BDF460 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_13530/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    byte_4BDF460 = 1;
  }
  v3 = v2[57];
  if ( !v3 )
    goto LABEL_26;
  LOBYTE(v3[1].fields.battleLog) = BYTE1(v3[1].fields.battleLog);
  v16 = 1;
  v4 = System_Int32__ToString((int32_t)&v16, 0LL);
  v5 = System_String__Concat_63115476((System_String_o *)StringLiteral_13530/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v4, 0LL);
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
      v15 = System_String__Concat_63115476((System_String_o *)StringLiteral_13530/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v14, 0LL);
      v7 = ConstantMaster__getValue(v15, 0LL);
      if ( v7 == -1 )
        return;
    }
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)m_CancellationTokenSource )
        sub_1C2209C(this, method);
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
          BattleActorControl__playAnimation_45012608(ServantActor, (System_String_o *)StringLiteral_25041/*"wait"*/, 0, v12);
          this = (BattleActorControl_o *)ServantActor->fields.battleSvtData;
          if ( !this )
            break;
        }
        this = (BattleActorControl_o *)BattleServantData__IsCounterWaitMotion((BattleServantData_o *)this, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          BattleActorControl__playAnimation_45012608(ServantActor, (System_String_o *)StringLiteral_25041/*"wait"*/, 1, v13);
      }
      LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
      if ( (__int64)++v10 >= (int)m_CancellationTokenSource )
        goto LABEL_24;
    }
LABEL_26:
    sub_1C22094(this, method);
  }
}


void __fastcall BattleActorControl__Awake(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_MaterialPropertyBlock_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDF3D1 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_MaterialPropertyBlock_TypeInfo);
    byte_4BDF3D1 = 1;
  }
  v3 = (UnityEngine_MaterialPropertyBlock_o *)sub_1C22084(UnityEngine_MaterialPropertyBlock_TypeInfo);
  UnityEngine_MaterialPropertyBlock___ctor(v3, 0LL);
  this->fields.mpb = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mpb, (int64_t)v3, v4, v5, v6, v7, v8, v9);
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
  if ( (byte_4BDF42A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
    this = (BattleActorControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF42A = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_21:
    sub_1C22094(this, enable);
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
        sub_1C2209C(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v13->obj.klass + v7);
      if ( !this )
        goto LABEL_21;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorShakeComponent___);
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
  if ( (byte_4BDF429 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
    this = (BattleActorControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF429 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
LABEL_23:
    sub_1C22094(this, enable);
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
        sub_1C2209C(this, enable);
      this = (BattleActorControl_o *)*((_QWORD *)&v12->obj.klass + v6);
      if ( !this )
        goto LABEL_23;
      ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                     (UnityEngine_GameObject_o *)this,
                                     (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_BattleActorRotationComponent___);
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
  if ( (byte_4BDF42D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_ParticleSystem___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77697104);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_16540/*"_MainTex"*/);
    byte_4BDF42D = 1;
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
    UnityEngine_MaterialPropertyBlock__Clear_70726780((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    v23.fields.r = v12;
    v23.fields.g = v13;
    v23.fields.b = v14;
    v23.fields.a = a;
    UnityEngine_MaterialPropertyBlock__SetColor(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16455/*"_Color"*/,
      v23,
      0LL);
    IsHideShadow = (BattleData_o *)this->fields.mpb;
    if ( !IsHideShadow )
      goto LABEL_44;
    UnityEngine_MaterialPropertyBlock__SetTexture(
      (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
      (System_String_o *)StringLiteral_16540/*"_MainTex"*/,
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
                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
                                         (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77697104)) == 0LL )
  {
LABEL_44:
    sub_1C22094(IsHideShadow, v10);
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
                           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_ParticleSystem___);
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
          sub_1C2209C(IsHideShadow, v10);
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

  if ( (byte_4BDF3D9 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_11614/*"RootShadow"*/);
    byte_4BDF3D9 = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    exist = TransformHelper__ExistNodeFromLvName(
              transform,
              (System_String_o *)StringLiteral_11614/*"RootShadow"*/,
              loadActorLimitCount,
              0,
              0LL);
    v8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    NodeFromLvName = v8;
    if ( exist )
      NodeFromLvName = TransformHelper__getNodeFromLvName(
                         v8,
                         (System_String_o *)StringLiteral_11614/*"RootShadow"*/,
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int32_t v20; // [xsp+Ch] [xbp-24h] BYREF

  v20 = shadowId;
  if ( (byte_4BDF42C & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_16540/*"_MainTex"*/);
    sub_1C21E38(&StringLiteral_3267/*"Battle/Textures/shadow_"*/);
    sub_1C21E38(&StringLiteral_3268/*"Battle/Textures/shadow_1"*/);
    byte_4BDF42C = 1;
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
      v10 = System_Int32__ToString((int32_t)&v20, 0LL);
      v11 = System_String__Concat_63115476((System_String_o *)StringLiteral_3267/*"Battle/Textures/shadow_"*/, v10, 0LL);
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
      v13 = UnityEngine_Resources__Load((System_String_o *)StringLiteral_3268/*"Battle/Textures/shadow_1"*/, 0LL);
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
        UnityEngine_MaterialPropertyBlock__Clear_70726780((UnityEngine_MaterialPropertyBlock_o *)bgPerf, 0LL);
        bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
        if ( bgPerf )
        {
          UnityEngine_MaterialPropertyBlock__SetColor(
            (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
            (System_String_o *)StringLiteral_16455/*"_Color"*/,
            this->fields.currentShadowColor,
            0LL);
          bgPerf = (BattlePerformanceBg_o *)this->fields.mpb;
          if ( bgPerf )
          {
            UnityEngine_MaterialPropertyBlock__SetTexture(
              (UnityEngine_MaterialPropertyBlock_o *)bgPerf,
              (System_String_o *)StringLiteral_16540/*"_MainTex"*/,
              (UnityEngine_Texture_o *)ShadowTexture,
              0LL);
            this->fields.currentShadowTexure = (struct UnityEngine_Texture2D_o *)ShadowTexture;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&this->fields.currentShadowTexure,
              (int64_t)ShadowTexture,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            bgPerf = (BattlePerformanceBg_o *)this->fields.shadowObj;
            if ( bgPerf )
            {
              bgPerf = (BattlePerformanceBg_o *)UnityEngine_Component__GetComponent_object_(
                                                  (UnityEngine_Component_o *)bgPerf,
                                                  (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_1C22094(bgPerf, v7);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  BattleFBXComponent_o *fbxcomponent; // x8
  System_String_o *v16; // x20
  System_Enum_o v18; // [xsp+8h] [xbp-48h] BYREF
  int v19; // [xsp+18h] [xbp-38h]

  if ( (byte_4BDF45B & 1) == 0 )
  {
    sub_1C21E38(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    byte_4BDF45B = 1;
  }
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  if ( LOBYTE(Instance->fields.svtId.fields.currentCryptoKey) )
    return animname;
  if ( isSaveAnim && this->fields.isFirstSaveBeforePlayAnim )
  {
    this->fields.isFirstSaveBeforePlayAnim = 0;
    this->fields._PlayedOriginalAnimName_k__BackingField = animname;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
      (int64_t)animname,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !animname )
    goto LABEL_15;
  if ( !System_String__StartsWith(animname, (System_String_o *)StringLiteral_25041/*"wait"*/, 0LL) )
    return animname;
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_15;
  if ( !BattleServantData__IsCounterWaitMotion(Instance, 0LL) )
    return animname;
  v19 = 49;
  v18.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v18.monitor = (void *)-1LL;
  Instance = (BattleServantData_o *)System_Enum__ToString(&v18, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_15:
    sub_1C22094(Instance, v8);
  v16 = (System_String_o *)Instance;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)Instance, 0LL) )
    return v16;
  return animname;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(
        BattleActorControl_o *this,
        System_String_o *animname,
        bool isSaveAnim,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_String_o *v9; // x19
  BattleActorControl_o *v10; // x20
  struct BattleServantData_o *battleSvtData; // x8
  BattleFBXComponent_o *fbxcomponent; // x8
  BattleActorControl_o *v13; // x20
  System_Enum_o v15; // [xsp+8h] [xbp-48h] BYREF
  int v16; // [xsp+18h] [xbp-38h]

  v9 = animname;
  v10 = this;
  if ( (byte_4BDF45A & 1) == 0 )
  {
    sub_1C21E38(&HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    byte_4BDF45A = 1;
  }
  if ( isSaveAnim && v10->fields.isFirstSaveBeforePlayAnim )
  {
    v10->fields.isFirstSaveBeforePlayAnim = 0;
    v10->fields._PlayedOriginalAnimName_k__BackingField = v9;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v10->fields._PlayedOriginalAnimName_k__BackingField,
      (int64_t)v9,
      isSaveAnim,
      (int32_t)method,
      v4,
      v5,
      v6,
      v7);
  }
  if ( !v9 )
    goto LABEL_13;
  this = (BattleActorControl_o *)System_String__StartsWith(v9, (System_String_o *)StringLiteral_25041/*"wait"*/, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return v9;
  battleSvtData = v10->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_13;
  if ( !battleSvtData->fields.isSleepWaitMode )
    return v9;
  v16 = 46;
  v15.klass = (System_Enum_c *)HutongGames_PlayMaker_Actions_FGOActorAnimation_ANIMATIONNAME_TypeInfo;
  v15.monitor = (void *)-1LL;
  this = (BattleActorControl_o *)System_Enum__ToString(&v15, 0LL);
  fbxcomponent = v10->fields.fbxcomponent;
  if ( !fbxcomponent )
LABEL_13:
    sub_1C22094(this, animname);
  v13 = this;
  if ( BattleFBXComponent__checkAnimation(fbxcomponent, (System_String_o *)this, 0LL) )
    return (System_String_o *)v13;
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
  struct System_Collections_Hashtable_o *v8; // x8
  BattleActorControl_EventClass_o *v9; // x21
  __int64 methodPtr_low; // x9
  BattleActorControl_o *v11; // x0
  System_String_o *v12; // x1
  BattleActorControl_EventClass_o *v13; // x2
  const MethodInfo *v14; // x3

  if ( (byte_4BDF40A & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&StringLiteral_1894/*"@OnComplete Fired!\n => <{0}>:"*/);
    byte_4BDF40A = 1;
  }
  System_String__Format((System_String_o *)StringLiteral_1894/*"@OnComplete Fired!\n => <{0}>:"*/, (Il2CppObject *)name, 0LL);
  CompleteList = this->fields.CompleteList;
  if ( !CompleteList )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(struct System_Collections_Hashtable_o *, System_String_o *, Il2CppMethodPointer))CompleteList->klass->vtable._27_ContainsKey.method)(
          CompleteList,
          name,
          CompleteList->klass->vtable._28_CopyTo.methodPtr) & 1) == 0 )
  {
LABEL_11:
    BattleActorControl__sendEventFSM_45066280(this, name, 0, v7);
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
    sub_1C22094(CompleteList, v5);
  }
  methodPtr_low = LOBYTE(BattleActorControl_EventClass_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v9->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low
    && (BattleActorControl_EventClass_c *)v9->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleActorControl_EventClass_TypeInfo )
  {
    BattleActorControl_EventClass__Proc(v9, 0LL);
    goto LABEL_11;
  }
  sub_1C22354(v9);
  BattleActorControl__setAnimationEvent(v11, v12, v13, v14);
}


void __fastcall BattleActorControl__DebugAddEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4BDF414 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
    byte_4BDF414 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1C22094(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (Il2CppObject *)motionName,
    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__string__set_Item__);
}


void __fastcall BattleActorControl__DebugRemoveEventToMotion(
        BattleActorControl_o *this,
        System_String_o *eventName,
        System_String_o *motionName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *eventClassAddedEventDict; // x0

  if ( (byte_4BDF415 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__Remove__);
    byte_4BDF415 = 1;
  }
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1C22094(0LL, eventName);
  System_Collections_Generic_Dictionary_object__object___Remove(
    (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
    (Il2CppObject *)eventName,
    (const MethodInfo_3317B7C *)Method_System_Collections_Generic_Dictionary_string__string__Remove__);
}


void __fastcall BattleActorControl__DestroyActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4BDF3DA & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3DA = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(actorObject, 0LL);
}


void __fastcall BattleActorControl__DestroyAllLoopEffect(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *buffLoopEffectDict; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  const MethodInfo *v5; // x2
  System_Collections_Generic_List_Enumerator_int__o v6; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o i; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4BDF469 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_4BDF469 = 1;
  }
  memset(&i, 0, sizeof(i));
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           buffLoopEffectDict,
           (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToList_int_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                                 (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !buffLoopEffectDict )
    goto LABEL_10;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v6,
    (System_Collections_Generic_List_int__o *)buffLoopEffectDict,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  for ( i = v6;
        System_Collections_Generic_List_Enumerator_int___MoveNext(
          &i,
          (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
        BattleActorControl__DestroyLoopEffect(this, i.fields._current, v5) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &i,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
LABEL_10:
    sub_1C22094(buffLoopEffectDict, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    buffLoopEffectDict,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


System_Collections_IEnumerator_o *__fastcall BattleActorControl__DestroyAuraEffect(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *effectObject,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF455 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__DestroyAuraEffect_d__346_TypeInfo);
    byte_4BDF455 = 1;
  }
  v4 = sub_1C22084(BattleActorControl__DestroyAuraEffect_d__346_TypeInfo);
  BattleActorControl__DestroyAuraEffect_d__346___ctor((BattleActorControl__DestroyAuraEffect_d__346_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1C22094(v5, v6);
  *(_QWORD *)(v4 + 32) = effectObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v4 + 32), (int64_t)effectObject, v7, v8, v9, v10, v11, v12);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF467 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__DestroyEffectOnParticleStop_d__372_TypeInfo);
    byte_4BDF467 = 1;
  }
  v5 = sub_1C22084(BattleActorControl__DestroyEffectOnParticleStop_d__372_TypeInfo);
  BattleActorControl__DestroyEffectOnParticleStop_d__372___ctor(
    (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v5 + 40) = key;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl__DestroyImmediateActorObject(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Transform_o *shadowObj; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *actorObject; // x19

  if ( (byte_4BDF3DB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3DB = 1;
  }
  shadowObj = this->fields.shadowObj;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  TransformHelper__SafeSetParentNonNull(shadowObj, transform, 0LL);
  actorObject = (UnityEngine_Object_o *)this->fields.actorObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__DestroyImmediate_70869800(actorObject, 0LL);
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

  if ( (byte_4BDF468 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77697104);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF468 = 1;
  }
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
          effectId,
          (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    goto LABEL_30;
  Item = System_Collections_Generic_Dictionary_int__object___get_Item(
           (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
           effectId,
           (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
    return;
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = System_Collections_Generic_Dictionary_int__object___get_Item(
                               (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                               effectId,
                               (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__),
        (v7 = this->fields.buffLoopEffectDict) == 0LL)
    || (v8 = (UnityEngine_GameObject_o *)buffLoopEffectDict,
        buffLoopEffectDict = (void *)System_Collections_Generic_Dictionary_int__object___Remove(
                                       (System_Collections_Generic_Dictionary_int__object__o *)v7,
                                       effectId,
                                       (const MethodInfo_32B6ED4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__),
        !v8)
    || (buffLoopEffectDict = UnityEngine_GameObject__GetComponentsInChildren_object_(
                               v8,
                               1,
                               (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77697104)) == 0LL )
  {
LABEL_30:
    sub_1C22094(buffLoopEffectDict, *(_QWORD *)&effectId);
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
      UnityEngine_Object__Destroy_70869612(v15, 0LL);
      LODWORD(v12) = *((_DWORD *)v13 + 6);
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_25;
    }
LABEL_29:
    sub_1C2209C(buffLoopEffectDict, *(_QWORD *)&effectId);
  }
LABEL_26:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v8, 0LL);
}


void __fastcall BattleActorControl__DestroySpShadowObj(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *specialShadowObj; // x21
  UnityEngine_Object_o *v4; // x21
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  BattleActorControl_o *v11; // x0
  const MethodInfo *v12; // x3

  if ( (byte_4BDF3DE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3DE = 1;
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v4 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v4, 0LL);
    this->fields.specialShadowObj = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.specialShadowObj, 0LL, v5, v6, v7, v8, v9, v10);
    BattleActorControl__EnableRenderer(v11, (UnityEngine_Component_o *)this->fields.shadowObj, 1, v12);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_String_o *prevAnimEffectTriggerKey; // x0
  System_Action_object__o *v17; // x22

  if ( (byte_4BDF3D8 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleActorAnimationEffect__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    sub_1C21E38(&Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
    sub_1C21E38(&Method_BattleActorControl__DisplayAnimationEffect_b__141_0__);
    byte_4BDF3D8 = 1;
  }
  TriggerKey = (Il2CppObject *)BattleActorAnimationEffect__MakeTriggerKey(
                                 animName,
                                 eventTag,
                                 (const MethodInfo *)eventTag);
  Value_object__object = BasicHelper__GetValue_object__object_(
                           (System_Collections_Generic_Dictionary_K__V__o *)this->fields.dicTriggerAnimEffects,
                           TriggerKey,
                           0LL,
                           (const MethodInfo_2F9E54C *)Method_BasicHelper_GetValue_string__BattleActorAnimationEffect_____);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)Value_object__object, 0LL) )
  {
    prevAnimEffectTriggerKey = this->fields.prevAnimEffectTriggerKey;
    if ( !prevAnimEffectTriggerKey )
      sub_1C22094(0LL, v9);
    if ( !System_String__Equals_63123792(prevAnimEffectTriggerKey, (System_String_o *)TriggerKey, 0LL) )
    {
      v17 = (System_Action_object__o *)sub_1C22084(System_Action_BattleActorAnimationEffect__TypeInfo);
      System_Action_object____ctor(
        v17,
        (Il2CppObject *)this,
        Method_BattleActorControl__DisplayAnimationEffect_b__141_0__,
        0LL);
      BasicHelper__ForEach_object_(
        (System_Collections_Generic_IEnumerable_T__o *)Value_object__object,
        (System_Action_T__o *)v17,
        (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_BattleActorAnimationEffect___);
    }
  }
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)TriggerKey;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.prevAnimEffectTriggerKey,
    (int64_t)TriggerKey,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
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

  if ( (byte_4BDF3DD & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_TryGetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3DD = 1;
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
            (const MethodInfo_2FA776C *)Method_UnityEngine_Component_TryGetComponent_Renderer___) )
      return;
    v6 = component;
    if ( !component )
LABEL_11:
      sub_1C22094(v6, v7);
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


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleActorControl__EnumerateMaterials(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_SkinnedMeshRenderer_array *RendererArray; // x0
  BattleActorControl___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x19
  System_Func_object__object__o *_9__307_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_T__o *v16; // x0

  if ( (byte_4BDF43C & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_Material___);
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
    sub_1C21E38(&System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__EnumerateMaterials_b__307_0__);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF43C = 1;
  }
  RendererArray = BattleActorControl__GetRendererArray(this, 0, v2);
  v5 = BattleActorControl___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)RendererArray;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  _9__307_0 = (System_Func_object__object__o *)v5->static_fields->__9__307_0;
  if ( !_9__307_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__307_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_SkinnedMeshRenderer__IEnumerable_Material___TypeInfo);
    System_Func_object__object____ctor(_9__307_0, v8, Method_BattleActorControl___c__EnumerateMaterials_b__307_0__, 0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__307_0 = (struct System_Func_SkinnedMeshRenderer__IEnumerable_Material___o *)_9__307_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__307_0,
      (int64_t)_9__307_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                         v6,
                                                         (System_Func_TSource__IEnumerable_TResult___o *)_9__307_0,
                                                         (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_SkinnedMeshRenderer__Material___);
  return (System_Collections_Generic_IEnumerable_Material__o *)BasicHelper__ExcludeNull_object_(
                                                                 v16,
                                                                 (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_Material___);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *motionFSM; // x19
  System_Func_object__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4BDF3EF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_PlayMakerFSM___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
    sub_1C21E38(&System_Func_PlayMakerFSM__bool__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass176_0__ExistMotionEvent_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass176_0_TypeInfo);
    byte_4BDF3EF = 1;
  }
  v5 = sub_1C22084(BattleActorControl___c__DisplayClass176_0_TypeInfo);
  BattleActorControl___c__DisplayClass176_0___ctor((BattleActorControl___c__DisplayClass176_0_o *)v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 16) = eventName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)eventName, v8, v9, v10, v11, v12, v13);
  motionFSM = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.motionFSM;
  if ( !motionFSM )
    return 0;
  v15 = (System_Func_object__bool__o *)sub_1C22084(System_Func_PlayMakerFSM__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass176_0__ExistMotionEvent_b__0__,
    0LL);
  v16 = System_Linq_Enumerable__Where_object_(
          motionFSM,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_PlayMakerFSM___);
  return System_Linq_Enumerable__Count_object_(
           v16,
           (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_PlayMakerFSM___) > 0;
}


void __fastcall BattleActorControl__FadeoutVoide(
        BattleActorControl_o *this,
        float fadeoutTime,
        const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4BDF445 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF445 = 1;
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

  if ( (byte_4BDF435 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDF435 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1C22094(Item, v5);
  if ( !UnityEngine_Material__HasProperty_70735792(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16411/*"_AddColor"*/,
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
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16411/*"_AddColor"*/,
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
    sub_1C22094(this, method);
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

  if ( (byte_4BDF45C & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF45C = 1;
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
      sub_1C22094(0LL, v4);
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

  if ( (byte_4BDF470 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&StringLiteral_5371/*"DelayEnd"*/);
    byte_4BDF470 = 1;
  }
  result = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
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
                            (System_String_o *)StringLiteral_5371/*"DelayEnd"*/,
                            0LL);
  if ( !Fsm )
    goto LABEL_23;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)Fsm, 0LL);
  Fsm = (PlayMakerFSM_o *)System_String__IsNullOrEmpty(Value, 0LL);
  if ( ((unsigned __int8)Fsm & 1) != 0 )
    return v3;
  if ( !Value || (Fsm = (PlayMakerFSM_o *)System_String__Split(Value, 0x2Cu, 0, 0LL)) == 0LL )
LABEL_23:
    sub_1C22094(Fsm, v5);
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
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1C2209C(Fsm, v5);
  }
  return v3;
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
  if ( (byte_4BDF411 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&BattleActorControl_TypeInfo);
    byte_4BDF411 = 1;
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
    sub_1C22094(this, method);
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

  if ( (byte_4BDF434 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    byte_4BDF434 = 1;
  }
  rendererArrayList = (System_Collections_Generic_List_object__o *)this->fields.rendererArrayList;
  if ( !rendererArrayList || rendererArrayList->fields._size < 1 )
    goto LABEL_12;
  Item = (UnityEngine_Renderer_o *)System_Collections_Generic_List_object___get_Item(
                                     rendererArrayList,
                                     0,
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item || (Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL)) == 0LL )
LABEL_13:
    sub_1C22094(Item, v5);
  if ( !UnityEngine_Material__HasProperty_70735792(
          (UnityEngine_Material_o *)Item,
          (System_String_o *)StringLiteral_16455/*"_Color"*/,
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
                                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__get_Item__);
  if ( !Item )
    goto LABEL_13;
  Item = (UnityEngine_Renderer_o *)UnityEngine_Renderer__get_material(Item, 0LL);
  if ( !Item )
    goto LABEL_13;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_Material__GetColor(
                                  (UnityEngine_Material_o *)Item,
                                  (System_String_o *)StringLiteral_16455/*"_Color"*/,
                                  0LL);
LABEL_14:
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
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
  const MethodInfo_39A10C8 *v8; // x4
  Il2CppObject *v9; // x3
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  bool HasGlobalTransitionInFsm_45068156; // w0
  __int64 v14; // x0 OVERLAPPED
  struct System_String_o *v15; // x1
  __int64 v16; // [xsp+0h] [xbp-40h] BYREF
  struct System_String_o *v17; // [xsp+8h] [xbp-38h]
  System_ValueTuple_T1__T2__o v18; // 0:x0.16
  System_ValueTuple_int__string__o result; // 0:x0.16

  if ( (byte_4BDF3EA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_ValueTuple_int__string___ctor__);
    byte_4BDF3EA = 1;
  }
  FixedMotionName = BattleActorControl__GetFixedMotionName(this, eventName, method);
  if ( BattleActorControl__HasGlobalTransitionInFsm_45068156(this, 0, FixedMotionName, v6) )
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
    && BattleActorControl__HasGlobalTransitionInFsm_45068156(this, 2, FixedMotionName, v7) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v16 = 0LL;
    v17 = 0LL;
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = (Il2CppObject *)(&dword_0 + 2);
    goto LABEL_11;
  }
  if ( BattleActorControl__HasGlobalTransitionInFsm_45068156(this, 1, FixedMotionName, v7) )
  {
    v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
    v16 = 0LL;
    v17 = 0LL;
    v18.fields.Item1 = (Il2CppObject *)&v16;
    v18.fields.Item2 = (Il2CppObject *)(&dword_0 + 1);
    goto LABEL_11;
  }
  HasGlobalTransitionInFsm_45068156 = BattleActorControl__HasGlobalTransitionInFsm_45068156(this, 0, eventName, v11);
  v9 = (Il2CppObject *)Method_System_ValueTuple_int__string___ctor__;
  v16 = 0LL;
  v17 = 0LL;
  if ( HasGlobalTransitionInFsm_45068156 )
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
  if ( (byte_4BDF3F1 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_16573/*"_PIG"*/);
    byte_4BDF3F1 = 1;
  }
  return System_String__Concat_63115476(motionName, (System_String_o *)StringLiteral_16573/*"_PIG"*/, 0LL);
}


BattlePlayAnimationComponent_array *__fastcall BattleActorControl__GetPlayAnimationComponents(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4BDF477 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
    byte_4BDF477 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v6);
  return (BattlePlayAnimationComponent_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                 gameObject,
                                                 includeInactive,
                                                 (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattlePlayAnimationComponent___);
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

  if ( (byte_4BDF406 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    byte_4BDF406 = 1;
  }
  myShiftData = this->fields.myShiftData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    sub_1C22094(Instance, v7);
  }
  v9 = this->fields.myShiftData;
  if ( !v9 || !Instance )
    goto LABEL_11;
  v10 = v9->fields.svtId;
  limit = v9->fields.limit;
  return ServantAssetLoadManager__GetPrefixVoiceId((ServantAssetLoadManager_o *)Instance, v10, limit, voiceId, 0LL);
}


UnityEngine_SkinnedMeshRenderer_array *__fastcall BattleActorControl__GetRendererArray(
        BattleActorControl_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1

  if ( (byte_4BDF43B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____77697120);
    byte_4BDF43B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v6);
  return (UnityEngine_SkinnedMeshRenderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                    gameObject,
                                                    includeInactive,
                                                    (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____77697120);
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleActorControl__GetServantObjectVisibleControlActor(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  BattleActionData_o *actiondata; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_List_object__o *v12; // x19
  System_Collections_Generic_List_object__o *v13; // x22
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_IEnumerable_T__o *TargetIds; // x20
  System_Action_int__o *v21; // x22
  Il2CppObject *current; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *Component_object; // x20
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  Il2CppClass *klass; // x8
  struct System_Object_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  Il2CppClass **v38; // x0
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v41; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4BDF423 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_int__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass277_0__GetServantObjectVisibleControlActor_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass277_0_TypeInfo);
    byte_4BDF423 = 1;
  }
  memset(&v41, 0, sizeof(v41));
  v3 = sub_1C22084(BattleActorControl___c__DisplayClass277_0_TypeInfo);
  BattleActorControl___c__DisplayClass277_0___ctor((BattleActorControl___c__DisplayClass277_0_o *)v3, 0LL);
  if ( !v3 )
    goto LABEL_29;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)this, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  *(_QWORD *)(v3 + 16) = v13;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)v13, v14, v15, v16, v17, v18, v19);
  actiondata = this->fields.actiondata;
  if ( !actiondata
    || (TargetIds = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getTargetIds(actiondata, 0LL),
        v21 = (System_Action_int__o *)sub_1C22084(System_Action_int__TypeInfo),
        System_Action_int____ctor(
          v21,
          (Il2CppObject *)v3,
          Method_BattleActorControl___c__DisplayClass277_0__GetServantObjectVisibleControlActor_b__0__,
          0LL),
        BasicHelper__ForEach_int_(
          TargetIds,
          (System_Action_T__o *)v21,
          (const MethodInfo_2F9C448 *)Method_BasicHelper_ForEach_int___),
        (actiondata = *(BattleActionData_o **)(v3 + 16)) == 0LL) )
  {
LABEL_29:
    sub_1C22094(actiondata, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    (System_Collections_Generic_List_object__o *)actiondata,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v41 = v40;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v41,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v41.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v23 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( !v23 )
    {
      if ( !current )
        sub_1C22094(v23, v24);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v26 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( !v26 )
      {
        if ( !Component_object )
          sub_1C22094(v26, v27);
        klass = Component_object[25].klass;
        if ( !klass )
          sub_1C22094(v26, v27);
        if ( LODWORD(klass->_1.namespaze) )
        {
          if ( !v12 )
            sub_1C22094(v26, v27);
          items = v12->fields._items;
          v36 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1C22094(v26, v27);
          size = v12->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v12,
              Component_object,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
          }
          else
          {
            v38 = &items->obj.klass + size;
            v12->fields._size = size + 1;
            v38[4] = (Il2CppClass *)Component_object;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)(v38 + 4),
              (int64_t)Component_object,
              v28,
              v29,
              v30,
              v31,
              v32,
              v33);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v41,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_BattleActorControl__o *)v12;
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
    sub_1C22094(this, method);
  if ( !motionFSM->max_length )
    sub_1C2209C(this, method);
  return motionFSM->m_Items[0];
}


bool __fastcall BattleActorControl__HasGlobalTransitionInFsm_45067912(
        PlayMakerFSM_o *targetFsm,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  System_Object_array *FsmGlobalTransitions; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4BDF3EE & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_FsmTransition___);
    sub_1C21E38(&System_Func_FsmTransition__bool__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass175_0__HasGlobalTransitionInFsm_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass175_0_TypeInfo);
    byte_4BDF3EE = 1;
  }
  v5 = sub_1C22084(BattleActorControl___c__DisplayClass175_0_TypeInfo);
  BattleActorControl___c__DisplayClass175_0___ctor((BattleActorControl___c__DisplayClass175_0_o *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = globalTransitionName,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)globalTransitionName, v8, v9, v10, v11, v12, v13),
        !targetFsm) )
  {
    sub_1C22094(v6, v7);
  }
  FsmGlobalTransitions = (System_Object_array *)PlayMakerFSM__get_FsmGlobalTransitions(targetFsm, 0LL);
  v15 = (System_Func_object__bool__o *)sub_1C22084(System_Func_FsmTransition__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass175_0__HasGlobalTransitionInFsm_b__0__,
    0LL);
  return BasicHelper__Any_object__49917468(
           FsmGlobalTransitions,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_FsmTransition___);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl__HasGlobalTransitionInFsm_45068156(
        BattleActorControl_o *this,
        int32_t fsmIndex,
        System_String_o *globalTransitionName,
        const MethodInfo *method)
{
  BattleActorControl_o *v6; // x21
  struct PlayMakerFSM_array *motionFSM; // x8
  PlayMakerFSM_o *v8; // x20

  v6 = this;
  if ( (byte_4BDF3ED & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&BattleActorControl_TypeInfo);
    byte_4BDF3ED = 1;
  }
  motionFSM = v6->fields.motionFSM;
  if ( !motionFSM )
    sub_1C22094(this, *(_QWORD *)&fsmIndex);
  if ( motionFSM->max_length <= fsmIndex )
    sub_1C2209C(this, *(_QWORD *)&fsmIndex);
  v8 = motionFSM->m_Items[fsmIndex];
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  return BattleActorControl__HasGlobalTransitionInFsm_45067912(
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

  if ( (byte_4BDF3EC & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_TypeInfo);
    byte_4BDF3EC = 1;
  }
  CommonFsm = BattleActorControl__get_CommonFsm(this, *(const MethodInfo **)&motionId);
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
  v7 = BattleActorControl__MotionIdStr(motionId, v5);
  return BattleActorControl__HasGlobalTransitionInFsm_45067912(CommonFsm, v7, v8);
}


void __fastcall BattleActorControl__InitAnimationEffect(
        BattleActorControl_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass140_0_o *v5; // x21
  UnityEngine_GameObject_o *v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  PartyOrganizationUtility_o *p_dicTriggerAnimEffects; // x19
  void *v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_Object_o *actorObject; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  System_Func_object__bool__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  BattleActorControl___c_c *v27; // x0
  System_Func_object__object__o *_9__140_1; // x21
  Il2CppObject *v29; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v37; // x0
  BattleActorControl___c_c *v38; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x20
  System_Func_object__object__o *_9__140_2; // x21
  Il2CppObject *v41; // x22
  struct BattleActorControl___c_StaticFields *v42; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Func_object__object__o *_9__140_3; // x22
  Il2CppObject *v50; // x23
  struct BattleActorControl___c_StaticFields *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  System_Collections_Generic_Dictionary_TKey__TElement__o *v58; // x1
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  if ( (byte_4BDF3D7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
    sub_1C21E38(&System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
    sub_1C21E38(&System_Func_BattleActorAnimationEffect__bool__TypeInfo);
    sub_1C21E38(&System_Func_BattleActorAnimationEffect__string__TypeInfo);
    sub_1C21E38(&System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__InitAnimationEffect_b__140_1__);
    sub_1C21E38(&Method_BattleActorControl___c__InitAnimationEffect_b__140_2__);
    sub_1C21E38(&Method_BattleActorControl___c__InitAnimationEffect_b__140_3__);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass140_0__InitAnimationEffect_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass140_0_TypeInfo);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF3D7 = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass140_0_o *)sub_1C22084(BattleActorControl___c__DisplayClass140_0_TypeInfo);
  BattleActorControl___c__DisplayClass140_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_29;
  v5->fields.limitCount = limitCount;
  p_dicTriggerAnimEffects = (PartyOrganizationUtility_o *)&this->fields.dicTriggerAnimEffects;
  this->fields.dicTriggerAnimEffects = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dicTriggerAnimEffects, 0LL, v8, v9, v10, v11, v12, v13);
  v15 = StringLiteral_1/*""*/;
  this->fields.prevAnimEffectTriggerKey = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.prevAnimEffectTriggerKey,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
                                                                                 (const MethodInfo_3000E90 *)Method_UnityEngine_GameObject_GetComponents_BattleActorAnimationEffect___);
      v24 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleActorAnimationEffect__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v24,
        (Il2CppObject *)v5,
        Method_BattleActorControl___c__DisplayClass140_0__InitAnimationEffect_b__0__,
        0LL);
      v25 = System_Linq_Enumerable__Where_object_(
              Components_object,
              (System_Func_TSource__bool__o *)v24,
              (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattleActorAnimationEffect___);
      v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                                   v25,
                                                                   (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
      if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v26, 0LL) )
      {
        v27 = BattleActorControl___c_TypeInfo;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v27 = BattleActorControl___c_TypeInfo;
        }
        _9__140_1 = (System_Func_object__object__o *)v27->static_fields->__9__140_1;
        if ( !_9__140_1 )
        {
          if ( !v27->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v27);
            v27 = BattleActorControl___c_TypeInfo;
          }
          v29 = (Il2CppObject *)v27->static_fields->__9;
          _9__140_1 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattleActorAnimationEffect__string__TypeInfo);
          System_Func_object__object____ctor(
            _9__140_1,
            v29,
            Method_BattleActorControl___c__InitAnimationEffect_b__140_1__,
            0LL);
          static_fields = BattleActorControl___c_TypeInfo->static_fields;
          static_fields->__9__140_1 = (struct System_Func_BattleActorAnimationEffect__string__o *)_9__140_1;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__140_1,
            (int64_t)_9__140_1,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
        }
        v37 = System_Linq_Enumerable__GroupBy_object__object_(
                v26,
                (System_Func_TSource__TKey__o *)_9__140_1,
                (const MethodInfo_2FD40C0 *)Method_System_Linq_Enumerable_GroupBy_BattleActorAnimationEffect__string___);
        v38 = BattleActorControl___c_TypeInfo;
        v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v37;
        if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
          v38 = BattleActorControl___c_TypeInfo;
        }
        _9__140_2 = (System_Func_object__object__o *)v38->static_fields->__9__140_2;
        if ( !_9__140_2 )
        {
          if ( !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            v38 = BattleActorControl___c_TypeInfo;
          }
          v41 = (Il2CppObject *)v38->static_fields->__9;
          _9__140_2 = (System_Func_object__object__o *)sub_1C22084(System_Func_IGrouping_string__BattleActorAnimationEffect___string__TypeInfo);
          System_Func_object__object____ctor(
            _9__140_2,
            v41,
            Method_BattleActorControl___c__InitAnimationEffect_b__140_2__,
            0LL);
          v42 = BattleActorControl___c_TypeInfo->static_fields;
          v42->__9__140_2 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___string__o *)_9__140_2;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v42->__9__140_2, (int64_t)_9__140_2, v43, v44, v45, v46, v47, v48);
          v38 = BattleActorControl___c_TypeInfo;
        }
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = BattleActorControl___c_TypeInfo;
        }
        _9__140_3 = (System_Func_object__object__o *)v38->static_fields->__9__140_3;
        if ( !_9__140_3 )
        {
          if ( !v38->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v38);
            v38 = BattleActorControl___c_TypeInfo;
          }
          v50 = (Il2CppObject *)v38->static_fields->__9;
          _9__140_3 = (System_Func_object__object__o *)sub_1C22084(System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____TypeInfo);
          System_Func_object__object____ctor(
            _9__140_3,
            v50,
            Method_BattleActorControl___c__InitAnimationEffect_b__140_3__,
            0LL);
          v51 = BattleActorControl___c_TypeInfo->static_fields;
          v51->__9__140_3 = (struct System_Func_IGrouping_string__BattleActorAnimationEffect___BattleActorAnimationEffect____o *)_9__140_3;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v51->__9__140_3, (int64_t)_9__140_3, v52, v53, v54, v55, v56, v57);
        }
        v58 = System_Linq_Enumerable__ToDictionary_object__object__object_(
                v39,
                (System_Func_TSource__TKey__o *)_9__140_2,
                (System_Func_TSource__TElement__o *)_9__140_3,
                (const MethodInfo_2FEA040 *)Method_System_Linq_Enumerable_ToDictionary_IGrouping_string__BattleActorAnimationEffect___string__BattleActorAnimationEffect_____);
        p_dicTriggerAnimEffects->klass = (PartyOrganizationUtility_c *)v58;
        sub_1C21DDC(p_dicTriggerAnimEffects, (int64_t)v58, v59, v60, v61, v62, v63, v64);
      }
      return;
    }
LABEL_29:
    sub_1C22094(v6, v7);
  }
}


bool __fastcall BattleActorControl__IsAllSucceededMovingToSubMember(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattleActionData_o *actiondata; // x8
  System_Collections_Generic_IEnumerable_TSource__o *moveToSubMemberList; // x19
  BattleActorControl___c_c *v5; // x0
  System_Func_object__bool__o *_9__206_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDF3F7 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
    sub_1C21E38(&System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__206_0__);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF3F7 = 1;
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
  _9__206_0 = (System_Func_object__bool__o *)v5->static_fields->__9__206_0;
  if ( !_9__206_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__206_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleActionData_MoveToSubMember__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__206_0,
      v7,
      Method_BattleActorControl___c__IsAllSucceededMovingToSubMember_b__206_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__206_0 = (struct System_Func_BattleActionData_MoveToSubMember__bool__o *)_9__206_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__206_0,
      (int64_t)_9__206_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return System_Linq_Enumerable__All_object_(
           moveToSubMemberList,
           (System_Func_TSource__bool__o *)_9__206_0,
           (const MethodInfo_2FB9E74 *)Method_System_Linq_Enumerable_All_BattleActionData_MoveToSubMember___);
}


bool __fastcall BattleActorControl__IsAlreadyDrop(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  return battleSvtData && battleSvtData->fields.IsAlreadyDrop;
}


bool __fastcall BattleActorControl__IsDelayEndSequence(
        BattleActorControl_o *this,
        int32_t sequenceId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *delayEndSequenceIdListFromMotion_k__BackingField; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x0

  if ( (byte_4BDF471 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4BDF471 = 1;
  }
  delayEndSequenceIdListFromMotion_k__BackingField = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
  if ( delayEndSequenceIdListFromMotion_k__BackingField )
  {
    if ( delayEndSequenceIdListFromMotion_k__BackingField->fields._size )
    {
      if ( System_Collections_Generic_List_int___Contains(
             delayEndSequenceIdListFromMotion_k__BackingField,
             -1,
             (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = 1;
      }
      else
      {
        v7 = this->fields._delayEndSequenceIdListFromMotion_k__BackingField;
        if ( !v7 )
          sub_1C22094(0LL, v6);
        LOBYTE(delayEndSequenceIdListFromMotion_k__BackingField) = System_Collections_Generic_List_int___Contains(
                                                                     v7,
                                                                     sequenceId,
                                                                     (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
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
  if ( (byte_4BDF46E & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_int____77629760);
    sub_1C21E38(&Method_BattleActorControl__IsHideShadow_b__379_0__);
    sub_1C21E38(&System_Func_int__bool__TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF46E = 1;
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
      v5 = v2->fields.battleSvtData;
      if ( !v5 )
        goto LABEL_32;
      this = (BattleActorControl_o *)v2->fields.performance;
      if ( !this )
        goto LABEL_32;
      deckSvt = v5->fields.deckSvt;
      this = (BattleActorControl_o *)BattlePerformance__get_CurrentGroundNo((BattlePerformance_o *)this, 0LL);
      if ( !v2->fields.performance )
        goto LABEL_32;
      v7 = (int)this;
      this = (BattleActorControl_o *)BattlePerformance__get_CurrentGroundType(v2->fields.performance, 0LL);
      if ( !deckSvt )
        goto LABEL_32;
      this = (BattleActorControl_o *)BattleDeckServantData__TryGetOverwriteShadowData(
                                       deckSvt,
                                       v7,
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
  v9 = (UnityEngine_Object_o *)v2->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v10 = v2->fields.performance;
  if ( !v10 )
    goto LABEL_32;
  data = (UnityEngine_Object_o *)v10->fields.data;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  v12 = v2->fields.performance;
  if ( !v12 || (this = (BattleActorControl_o *)v12->fields.data) == 0LL )
LABEL_32:
    sub_1C22094(this, method);
  ShadowOffSvtIds = BattleData__GetShadowOffSvtIds((BattleData_o *)this, 0LL);
  v14 = (System_Func_int__bool__o *)sub_1C22084(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v14, (Il2CppObject *)v2, Method_BattleActorControl__IsHideShadow_b__379_0__, 0LL);
  return BasicHelper__Any_int__49916656(
           ShadowOffSvtIds,
           (System_Func_T__bool__o *)v14,
           (const MethodInfo_2F9AAF0 *)Method_BasicHelper_Any_int____77629760);
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
    sub_1C22094(0LL, animName);
  return BattleFBXComponent__IsMatchCurrentCommonAnimName(fbxcomponent, animName, exceptNullOrEmpty, 0LL);
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

  if ( (byte_4BDF473 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF473 = 1;
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
      if ( !byte_4BD7CBA )
      {
        sub_1C21E38(&System_Math_TypeInfo);
        byte_4BD7CBA = 1;
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
      sub_1C22094(v14, v15);
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
    sub_1C22094(battleSvtData, v3);
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

  if ( (byte_4BDF3FE & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3FE = 1;
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

  if ( (byte_4BDF472 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF472 = 1;
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
    sub_1C22094(battleSvtData, v5);
  }
  return BattleData__IsVoiceOffSvt(v10, (int32_t)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__LoadSavedPartAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v4; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  BattleActorControl___c_c *v6; // x8
  System_Func_object__bool__o *_9__385_0; // x20
  Il2CppObject *v8; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x20
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  int64_t v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  BattlePlayAnimationComponent_o *v41; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x22
  System_Func_object__bool__o *v43; // x23
  Il2CppObject *v44; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  BattlePlayAnimationComponent_SaveData_array *saveDataArray; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4BDF474 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1C21E38(&System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
    sub_1C21E38(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__LoadSavedPartAnimation_b__385_0__);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass385_0__LoadSavedPartAnimation_b__1__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass385_0_TypeInfo);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF474 = 1;
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
    _9__385_0 = (System_Func_object__bool__o *)v6->static_fields->__9__385_0;
    if ( !_9__385_0 )
    {
      if ( !v6->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v6);
        v6 = BattleActorControl___c_TypeInfo;
      }
      v8 = (Il2CppObject *)v6->static_fields->__9;
      _9__385_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__385_0,
        v8,
        Method_BattleActorControl___c__LoadSavedPartAnimation_b__385_0__,
        0LL);
      static_fields = BattleActorControl___c_TypeInfo->static_fields;
      static_fields->__9__385_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__385_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__385_0,
        (int64_t)_9__385_0,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
    }
    v16 = System_Linq_Enumerable__Where_object_(
            PlayAnimationComponents,
            (System_Func_TSource__bool__o *)_9__385_0,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    if ( !v16 )
      sub_1C22094(0LL, v17);
    klass = v16->klass;
    v19 = v16;
    v20 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo )
      {
        --v20;
        p_offset += 4;
        if ( !v20 )
          goto LABEL_16;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_16:
      p_method = sub_1C73E18(v16, System_Collections_Generic_IEnumerable_BattlePlayAnimationComponent__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
            v19,
            *(_QWORD *)(p_method + 8));
    if ( !v24 )
      sub_1C22094(0LL, v23);
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
            goto LABEL_23;
        }
        v28 = v25 + 16LL * *v27 + 312;
      }
      else
      {
LABEL_23:
        v28 = sub_1C73E18(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
        break;
      v29 = sub_1C22084(BattleActorControl___c__DisplayClass385_0_TypeInfo);
      BattleActorControl___c__DisplayClass385_0___ctor((BattleActorControl___c__DisplayClass385_0_o *)v29, 0LL);
      v30 = *(_QWORD *)v24;
      v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__c **)v32 - 1) != System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo )
        {
          --v31;
          v32 += 4;
          if ( !v31 )
            goto LABEL_30;
        }
        v33 = v30 + 16LL * *v32 + 312;
      }
      else
      {
LABEL_30:
        v33 = sub_1C73E18(v24, System_Collections_Generic_IEnumerator_BattlePlayAnimationComponent__TypeInfo, 0LL);
      }
      v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
      if ( !v29 )
        sub_1C22094(v34, v34);
      *(_QWORD *)(v29 + 16) = v34;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v29 + 16), v34, v35, v36, v37, v38, v39, v40);
      v41 = *(BattlePlayAnimationComponent_o **)(v29 + 16);
      v42 = (System_Collections_Generic_IEnumerable_TSource__o *)saveDataArray;
      v43 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattlePlayAnimationComponent_SaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v43,
        (Il2CppObject *)v29,
        Method_BattleActorControl___c__DisplayClass385_0__LoadSavedPartAnimation_b__1__,
        0LL);
      v44 = System_Linq_Enumerable__FirstOrDefault_object__50149120(
              v42,
              (System_Func_TSource__bool__o *)v43,
              (const MethodInfo_2FD3700 *)Method_System_Linq_Enumerable_FirstOrDefault_BattlePlayAnimationComponent_SaveData___);
      if ( !v41 )
        sub_1C22094(v44, v44);
      BattlePlayAnimationComponent__SetSaveData(v41, (BattlePlayAnimationComponent_SaveData_o *)v44, 0LL);
    }
    v45 = *(_QWORD *)v24;
    v46 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
      {
        --v46;
        v47 += 4;
        if ( !v46 )
          goto LABEL_39;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_39:
      v48 = sub_1C73E18(v24, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v48)(v24, *(_QWORD *)(v48 + 8));
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

  if ( (byte_4BDF466 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4BDF466 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v23 = 0LL;
  buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict
    || (buffLoopEffectDict = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                                       buffLoopEffectDict,
                                                                                       (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
    sub_1C22094(buffLoopEffectDict, isPlay);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)buffLoopEffectDict,
    (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  v22 = v21;
LABEL_6:
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v22,
            (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
  {
    if ( !v22.fields._currentValue )
      sub_1C22094(0LL, v8);
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)v22.fields._currentValue,
                                    1,
                                    (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    v11 = ComponentsInChildren_object;
    if ( !ComponentsInChildren_object )
      sub_1C22094(0LL, v10);
    v12 = ComponentsInChildren_object[6];
    if ( v12 >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        if ( v13 >= v12 )
          sub_1C2209C(ComponentsInChildren_object, v10);
        v14 = &v11[2 * v13];
        v15 = (UnityEngine_ParticleSystem_o *)*((_QWORD *)v14 + 4);
        if ( !v15 )
          sub_1C22094(ComponentsInChildren_object, v10);
        ComponentsInChildren_object = UnityEngine_ParticleSystem__get_main(
                                        *((UnityEngine_ParticleSystem_o **)v14 + 4),
                                        0LL).fields.m_ParticleSystem;
        v23 = ComponentsInChildren_object;
        if ( isPlay )
        {
          battleSvtData = this->fields.battleSvtData;
          if ( !battleSvtData )
            sub_1C22094(ComponentsInChildren_object, v10);
          if ( battleSvtData->fields.isSilnetDead || !battleSvtData->fields.isEntry )
            goto LABEL_24;
          UnityEngine_ParticleSystem__Play_71149876(v15, 0LL);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v15, 0LL);
          if ( !gameObject )
            sub_1C22094(0LL, v18);
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
              sub_1C22094(0LL, v20);
            UnityEngine_GameObject__SetActive(v19, 0, 0LL);
            goto LABEL_24;
          }
          UnityEngine_ParticleSystem__Stop_71150228(v15, 0LL);
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
    (const MethodInfo_34054B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__Dispose__);
}


void __fastcall BattleActorControl__LoopEffectSwitchInNoblePhantasm(
        BattleActorControl_o *this,
        bool isPlay,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x3
  BattlePerformance_o *performance; // x0

  if ( (byte_4BDF46A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_13692/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/);
    byte_4BDF46A = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_13692/*"TREASURE_DEVICE_DISP_STATUS_EFFECT_FLAG"*/, 0LL) <= 0 )
  {
    performance = this->fields.performance;
    if ( !performance )
      sub_1C22094(0LL, v5);
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
  Il2CppObject *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4BDF3EB & 1) == 0 )
  {
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&StringLiteral_8925/*"MOTION_{0}"*/);
    byte_4BDF3EB = 1;
  }
  v8 = motionId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8, v2, v3, v4);
  return System_String__Format((System_String_o *)StringLiteral_8925/*"MOTION_{0}"*/, v6, 0LL);
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

  if ( (byte_4BDF46B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF46B = 1;
  }
  memset(&v26, 0, sizeof(v26));
  buffLoopEffectDict = this->fields.buffLoopEffectDict;
  if ( !buffLoopEffectDict )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
    (const MethodInfo_32B5E84 *)Method_System_Collections_Generic_Dictionary_int__GameObject__GetEnumerator__);
  v4 = 0LL;
  v26 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_3404840 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__MoveNext__) )
  {
    key = (int32_t)v26.fields._current.fields.key;
    value = v26.fields._current.fields.value;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)value, 0LL, 0LL);
    if ( !v7 )
    {
      if ( !value )
        sub_1C22094(v7, v8);
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
      if ( !transform )
        sub_1C22094(0LL, v10);
      parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
      if ( !parent )
        sub_1C22094(0LL, v12);
      name = UnityEngine_Object__get_name(parent, 0LL);
      v14 = (UnityEngine_Object_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !v14 )
        sub_1C22094(0LL, v15);
      v16 = UnityEngine_Object__get_name(v14, 0LL);
      if ( !name )
        sub_1C22094(v16, v16);
      v17 = System_String__Equals_63123792(name, v16, 0LL);
      if ( !v17 )
      {
        if ( !v4 )
        {
          v4 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v4,
            (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v4 )
            sub_1C22094(v17, v18);
        }
        items = v4->fields._items;
        v20 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          sub_1C22094(v17, v18);
        size = v4->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            key,
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size + 1] = key;
        }
        v22 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)value, 0LL);
        v23 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !v22 )
          sub_1C22094(v23, v23);
        UnityEngine_Transform__set_parent(v22, v23, 0LL);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_3404964 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__GameObject__Dispose__);
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

  if ( (byte_4BDF46C & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF46C = 1;
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
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffData,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___),
            (buffData = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
        || (buffData = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)buffData,
                                             (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___),
            !EffectBuffList) )
      {
        sub_1C22094(buffData, v7);
      }
      v11 = (StatusEffectPosOverwriteMaster_o *)buffData;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v55,
        EffectBuffList,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v57 = v55;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v57,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v12 )
          break;
        if ( !v57.fields._current )
          sub_1C22094(v12, v13);
        if ( !MasterData_object )
          sub_1C22094(v12, v13);
        v14 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                (int32_t)v57.fields._current[1].klass,
                (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v15 = v14;
        if ( v14 )
        {
          monitor = (int32_t)v14[6].monitor;
          if ( monitor >= 1
            && System_Collections_Generic_List_int___Contains(
                 movedEffect,
                 monitor,
                 (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
          {
            entity = 0LL;
            v18 = this->fields.battleSvtData;
            if ( !v18 )
              sub_1C22094(0LL, v17);
            v19 = (int32_t)v15[6].monitor;
            ActorSvtId = BattleServantData__getActorSvtId(v18, 0LL);
            LimitCount = BattleActorControl__getLimitCount(this, v21);
            if ( !v11 )
              sub_1C22094(LimitCount, v23);
            if ( StatusEffectPosOverwriteMaster__TryGetEntity(v11, &entity, v19, ActorSvtId, LimitCount, 0LL) )
            {
              buffLoopEffectDict = this->fields.buffLoopEffectDict;
              if ( !buffLoopEffectDict )
                sub_1C22094(0LL, v24);
              Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                       (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                       (int32_t)v15[6].monitor,
                       (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
              if ( !Item )
                sub_1C22094(0LL, v27);
              transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Item, 0LL);
              v30 = transform;
              if ( !transform )
                sub_1C22094(0LL, v29);
              parent = (UnityEngine_Object_o *)UnityEngine_Transform__get_parent(transform, 0LL);
              if ( !parent )
                sub_1C22094(0LL, v32);
              name = UnityEngine_Object__get_name(parent, 0LL);
              if ( !entity )
                sub_1C22094(name, v34);
              if ( !name )
                sub_1C22094(0LL, v34);
              if ( !System_String__Equals_63123792(name, entity->fields.nodeName, 0LL) )
              {
                if ( !byte_4BD6BB1 )
                {
                  sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                  byte_4BD6BB1 = 1;
                }
                UnityEngine_Transform__set_localPosition(
                  v30,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL);
                if ( !byte_4BD6BB7 )
                {
                  sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
                  byte_4BD6BB7 = 1;
                }
                UnityEngine_Transform__set_localRotation(
                  v30,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
                v36 = this->fields.actorObject;
                if ( !v36 )
                  sub_1C22094(0LL, v35);
                v37 = UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !entity )
                  sub_1C22094(v37, v38);
                nodeName = entity->fields.nodeName;
                v40 = v37;
                v41 = BattleActorControl__getLimitCount(this, v38);
                NodeFromLvName = TransformHelper__getNodeFromLvName(v40, nodeName, v41, 1, 0LL);
                v44 = NodeFromLvName;
                if ( !byte_4BD6BB1 )
                {
                  NodeFromLvName = (UnityEngine_Transform_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                  byte_4BD6BB1 = 1;
                }
                v45 = this->fields.battleSvtData;
                if ( !v45 )
                  sub_1C22094(NodeFromLvName, v43);
                if ( !entity )
                  sub_1C22094(0LL, v43);
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
                  sub_1C22094(0LL, v50);
                Rotation = StatusEffectPosOverwriteEntity__GetRotation(entity, 0LL);
                Rotation.fields.x = Rotation.fields.x * 0.017453;
                Rotation.fields.y = Rotation.fields.y * 0.017453;
                Rotation.fields.z = Rotation.fields.z * 0.017453;
                v62 = UnityEngine_Quaternion__Internal_FromEulerRad(Rotation, 0LL);
                UnityEngine_Transform__set_localRotation(v30, v62, 0LL);
                if ( !entity )
                  sub_1C22094(0LL, v51);
                Scale = StatusEffectPosOverwriteEntity__GetScale(entity, 0LL);
                UnityEngine_Transform__set_localScale(v30, Scale, 0LL);
                UnityEngine_Transform__set_parent(v30, v44, 0LL);
                v54 = this->fields.battleSvtData;
                if ( !v54 )
                  sub_1C22094(v52, v53);
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
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
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

  if ( (byte_4BDF441 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_SkipDead__);
    sub_1C21E38(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4BDF441 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C22084(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1C22094(IsNoTouchSkip, v4);
    }
    BattlePerformanceStatus__setTouchOff(statusPerf, v7, 0LL);
  }
}


void __fastcall BattleActorControl__OnDestroy(BattleActorControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_GameObject_o *performance; // x0
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___o *noblePhantasmObjectVisibleCtrList; // x8
  int32_t size; // w2
  int v19; // w9
  UnityEngine_Object_o *actorObject; // x20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_object__o *extraLoadedVoiceArgsList; // x0
  PartyOrganizationUtility_o *p_extraLoadedVoiceArgsList; // x19
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int32_t klass_high; // w20
  int32_t klass; // w22
  int32_t monitor; // w21
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4BDF3D0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF3D0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  this->fields.rendererArrayList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.rendererArrayList, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.BattleModelObjectVisibleControlComponents = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  noblePhantasmObjectVisibleCtrList = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_25;
  size = noblePhantasmObjectVisibleCtrList->fields._size;
  v19 = noblePhantasmObjectVisibleCtrList->fields._version + 1;
  noblePhantasmObjectVisibleCtrList->fields._size = 0;
  noblePhantasmObjectVisibleCtrList->fields._version = v19;
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
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
      sub_1C22094(performance, v16);
    }
  }
LABEL_15:
  BattleActorControl__DestroyAllLoopEffect(this, v16);
  BattleActorControl__RemoveOverwriteEachPhaseAnimation(this, v22);
  extraLoadedVoiceArgsList = (System_Collections_Generic_List_object__o *)this->fields.extraLoadedVoiceArgsList;
  if ( extraLoadedVoiceArgsList )
  {
    p_extraLoadedVoiceArgsList = (PartyOrganizationUtility_o *)&this->fields.extraLoadedVoiceArgsList;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v36,
      extraLoadedVoiceArgsList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__GetEnumerator__);
    while ( 1 )
    {
      v25 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v36,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__MoveNext__);
      if ( !v25 )
        break;
      if ( !v36.fields._current )
        sub_1C22094(v25, v26);
      klass = (int32_t)v36.fields._current[1].klass;
      klass_high = HIDWORD(v36.fields._current[1].klass);
      monitor = (int32_t)v36.fields._current[1].monitor;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__unloadServantVoice(klass, klass_high, monitor, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v36,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl_ExtraLoadedVoiceArgs__Dispose__);
    p_extraLoadedVoiceArgsList->klass = 0LL;
    sub_1C21DDC(p_extraLoadedVoiceArgsList, 0LL, v30, v31, v32, v33, v34, v35);
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
  if ( (byte_4BDF409 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    byte_4BDF409 = 1;
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
    BattleActorControl__sendEventFSM_45066280(v5, name, 0, v7);
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
    sub_1C22094(this, name);
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
  sub_1C22354(this);
  BattleActorControl__Complete(v9, v10, v11);
}


void __fastcall BattleActorControl__OnFinishDead(BattleActorControl_o *this, const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_particleDisconnectorObj; // x19
  UnityEngine_Object_o *v4; // x20
  struct ParticleDisconnector_o *particleDisconnectorObj; // t1
  UnityEngine_Object_o *klass; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF412 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF412 = 1;
  }
  particleDisconnectorObj = this->fields.particleDisconnectorObj;
  p_particleDisconnectorObj = (PartyOrganizationUtility_o *)&this->fields.particleDisconnectorObj;
  v4 = (UnityEngine_Object_o *)particleDisconnectorObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
  {
    klass = (UnityEngine_Object_o *)p_particleDisconnectorObj->klass;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(klass, 0LL);
    p_particleDisconnectorObj->klass = 0LL;
    sub_1C21DDC(p_particleDisconnectorObj, 0LL, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleActorControl__OnNoblePhantasmLoadComplete(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int64_t performance; // x0
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v6; // x20
  int64_t v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  TreasureDvcEntity_o *v14; // x20
  int v15; // w8
  struct BattleServantData_o *v16; // x9
  int32_t v17; // w10
  System_Action_o *v18; // x20
  const MethodInfo *v19; // x2
  System_Collections_IEnumerator_o *v20; // x0

  if ( (byte_4BDF426 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__281_0__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4BDF426 = 1;
  }
  performance = (int64_t)this->fields.performance;
  if ( !performance )
    goto LABEL_23;
  BattlePerformance__startNoblePhantasm((BattlePerformance_o *)performance, 0LL);
  performance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_23;
  if ( !performance )
    goto LABEL_23;
  BattleSequenceManager__setup((BattleSequenceManager_o *)performance, 0LL, 0, battleSvtData->fields.buffData, 0LL);
  performance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v6 = (BattleSequenceManager_o *)performance;
  performance = (int64_t)BattleServantData__get_TreasureDevice(this->fields.battleSvtData, 0LL);
  if ( !performance )
    goto LABEL_23;
  performance = (int64_t)TreasureDvcEntity__getRelatedBgms((TreasureDvcEntity_o *)performance, 0LL);
  if ( !v6 )
    goto LABEL_23;
  BattleSequenceManager__SetIntactBgms(v6, (System_Int32_array *)performance, 0LL);
  performance = (int64_t)this->fields.battleSvtData;
  if ( !performance )
    goto LABEL_23;
  if ( *(_BYTE *)(performance + 479) )
  {
    performance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !this->fields.battleSvtData )
      goto LABEL_23;
    v7 = performance;
    performance = (int64_t)BattleServantData__getOverrideTDVoice(this->fields.battleSvtData, 0LL);
    if ( !v7 )
      goto LABEL_23;
    *(_QWORD *)(v7 + 264) = performance;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 264), performance, v8, v9, v10, v11, v12, v13);
    performance = (int64_t)this->fields.battleSvtData;
    if ( !performance )
      goto LABEL_23;
  }
  performance = (int64_t)BattleServantData__get_TreasureDevice((BattleServantData_o *)performance, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_23;
  v14 = (TreasureDvcEntity_o *)performance;
  performance = BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL);
  if ( !v14 )
    goto LABEL_23;
  performance = (int64_t)TreasureDvcEntity__getFixAppearanceInfoArray(v14, performance, 0LL);
  if ( !performance )
    goto LABEL_21;
  if ( *(_DWORD *)(performance + 24) < 2u )
    sub_1C2209C(performance, obj);
  v15 = *(_DWORD *)(performance + 32);
  if ( v15 < 1 )
  {
LABEL_21:
    v20 = BattleActorControl__WaitToNoblePhantasmPlay(this, (const MethodInfo *)obj);
    goto LABEL_22;
  }
  v16 = this->fields.battleSvtData;
  if ( !v16 )
LABEL_23:
    sub_1C22094(performance, obj);
  v17 = *(_DWORD *)(performance + 36);
  v16->fields.tmpAppearanceId = v15;
  v16->fields.isForceAppearance = 1;
  v16->fields.dressDispId = v17;
  v18 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)this,
    Method_BattleActorControl__OnNoblePhantasmLoadComplete_b__281_0__,
    0LL);
  v20 = BattleActorControl__waitChangeApp(this, v18, v19);
LABEL_22:
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v20, 0LL);
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

  if ( (byte_4BDF428 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__283_0__);
    sub_1C21E38(&BattleFBXComponent_TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_6553/*"FINISHED"*/);
    byte_4BDF428 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveIntactBgms((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__RemoveFixedVoice((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  LOBYTE(Instance->fields.equiphp) = 0;
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  BattleSequenceManager__OnEndNoblePhantasm((BattleSequenceManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  ServantAssetLoadManager__releaseNoblePhantasm((ServantAssetLoadManager_o *)Instance, 0LL);
  Instance = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)Instance, 0LL, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_64162132(0LL);
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
  v8 = this->fields.performance;
  if ( !v8 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v8->fields.bgPerf;
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
  v9 = this->fields.performance;
  if ( !v9 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v9->fields.commandPerf;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)Instance, 1, 0LL);
  BattleActorControl__ApplySpecialWaitModeFlag(this, v10);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__ResetOverwriteNobleDamageAnimationFlg((BattlePerformance_o *)Instance, 0LL);
  v11 = this->fields.performance;
  this->fields.isPlayingNoblePhantasm = 0;
  if ( !v11 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v11->fields.logic;
  if ( !Instance )
    goto LABEL_48;
  BattleLogic__ChangePhase((BattleLogic_o *)Instance, 3, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(this, 1, v12);
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
    goto LABEL_48;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)Instance, 1, 0LL);
  Instance = this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_48;
  if ( BattleServantData__IsTDAppearance(Instance, 0LL) )
  {
    v13 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      (Il2CppObject *)this,
      Method_BattleActorControl__OnNoblePhantasmPlayComplete_b__283_0__,
      0LL);
    v15 = BattleActorControl__waitChangeApp(this, v13, v14);
    Instance = (BattleServantData_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                        (UnityEngine_MonoBehaviour_o *)this,
                                        v15,
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
      BattleActorControl__sendEventFSM_45066280(this, (System_String_o *)StringLiteral_6553/*"FINISHED"*/, 0, v16);
    }
  }
  v18 = this->fields.performance;
  if ( !v18 )
    goto LABEL_48;
  Instance = (BattleServantData_o *)v18->fields.data;
  if ( !Instance )
    goto LABEL_48;
  Instance = (BattleServantData_o *)BattleData__getStageEntity((BattleData_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_48;
  if ( StageEntity__Is3_6BossBattle((StageEntity_o *)Instance, 0LL) )
  {
    BattleActorControl__ChangeRotationEnemy(this, 1, v19);
    BattleActorControl__ChangeAnimationCurveEnemy(this, 1, v20);
  }
  Instance = (BattleServantData_o *)this->fields.performance;
  if ( !Instance )
LABEL_48:
    sub_1C22094(Instance, v6);
  BattlePerformance__BattleMoviePause((BattlePerformance_o *)Instance, 0, 1, 0LL);
}


void __fastcall BattleActorControl__OnTouchEventBySkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4BDF440 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_SkipDead__);
    sub_1C21E38(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4BDF440 = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C22084(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_SkipDead__,
            0LL),
          !statusPerf) )
    {
      sub_1C22094(IsNoTouchSkip, v4);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayAnimationComponents; // x19
  System_Func_object__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_T__o *v27; // x19
  System_Action_object__o *v28; // x20

  if ( (byte_4BDF476 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattlePlayAnimationComponent__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1C21E38(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass388_0__PlayMatchPartAnimation_b__0__);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass388_0__PlayMatchPartAnimation_b__1__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass388_0_TypeInfo);
    byte_4BDF476 = 1;
  }
  v9 = sub_1C22084(BattleActorControl___c__DisplayClass388_0_TypeInfo);
  BattleActorControl___c__DisplayClass388_0___ctor((BattleActorControl___c__DisplayClass388_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 16) = key;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)key, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 24) = animName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 24), (int64_t)animName, v18, v19, v20, v21, v22, v23);
  *(float *)(v9 + 32) = timeline;
  PlayAnimationComponents = (System_Collections_Generic_IEnumerable_TSource__o *)BattleActorControl__GetPlayAnimationComponents(
                                                                                   this,
                                                                                   0,
                                                                                   v24);
  v26 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass388_0__PlayMatchPartAnimation_b__0__,
    0LL);
  v27 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         PlayAnimationComponents,
                                                         (System_Func_TSource__bool__o *)v26,
                                                         (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v28 = (System_Action_object__o *)sub_1C22084(System_Action_BattlePlayAnimationComponent__TypeInfo);
  System_Action_object____ctor(
    v28,
    (Il2CppObject *)v9,
    Method_BattleActorControl___c__DisplayClass388_0__PlayMatchPartAnimation_b__1__,
    0LL);
  BasicHelper__ForEach_object_(
    v27,
    (System_Action_T__o *)v28,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_BattlePlayAnimationComponent___);
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
      sub_1C2209C(this, *(_QWORD *)&timing);
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
    sub_1C22094(this, *(_QWORD *)&timing);
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
  if ( (byte_4BDF439 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
    this = (BattleActorControl_o *)sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
    byte_4BDF439 = 1;
  }
  if ( !obj )
    goto LABEL_14;
  this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                   obj,
                                   (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
        sub_1C2209C(this, obj);
      this = (BattleActorControl_o *)v4->fields.rendererArrayList;
      if ( !this )
        break;
      v9 = (Il2CppObject *)p_actorObject[v7];
      this = (BattleActorControl_o *)System_Collections_Generic_List_object___Contains(
                                       (System_Collections_Generic_List_object__o *)this,
                                       v9,
                                       (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Contains__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleActorControl_o *)v4->fields.rendererArrayList;
        if ( !this )
          break;
        this = (BattleActorControl_o *)System_Collections_Generic_List_object___Remove(
                                         (System_Collections_Generic_List_object__o *)this,
                                         v9,
                                         (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Remove__);
      }
      LODWORD(m_CancellationTokenSource) = v6->fields.m_CancellationTokenSource;
      if ( (__int64)++v7 >= (int)m_CancellationTokenSource )
        return;
    }
LABEL_14:
    sub_1C22094(this, obj);
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
    sub_1C22094(0LL, eventName);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleObserver_o *overwriteAnim; // x1
  PartyOrganizationUtility_o *p_overwriteAnim; // x19

  overwriteAnim = (BattleObserver_o *)this->fields.overwriteAnim;
  if ( overwriteAnim )
  {
    p_overwriteAnim = (PartyOrganizationUtility_o *)&this->fields.overwriteAnim;
    if ( overwriteAnim->fields.battleSubject )
      BattleSubject__Remove(overwriteAnim->fields.battleSubject, overwriteAnim, v2);
    p_overwriteAnim->klass = 0LL;
    sub_1C21DDC(p_overwriteAnim, 0LL, (int64_t)v2, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_IEnumerable_Material__o *v3; // x0
  BattleActorControl___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_T__o *v5; // x19
  System_Action_object__o *_9__308_0; // x20
  Il2CppObject *v7; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDF43D & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Material__TypeInfo);
    sub_1C21E38(&Method_BasicHelper_ForEach_Material___);
    sub_1C21E38(&Method_BattleActorControl___c__ResetAddColorOfMaterials_b__308_0__);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF43D = 1;
  }
  v3 = BattleActorControl__EnumerateMaterials(this, method);
  v4 = BattleActorControl___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_T__o *)v3;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v4 = BattleActorControl___c_TypeInfo;
  }
  _9__308_0 = (System_Action_object__o *)v4->static_fields->__9__308_0;
  if ( !_9__308_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = BattleActorControl___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__308_0 = (System_Action_object__o *)sub_1C22084(System_Action_Material__TypeInfo);
    System_Action_object____ctor(_9__308_0, v7, Method_BattleActorControl___c__ResetAddColorOfMaterials_b__308_0__, 0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__308_0 = (struct System_Action_Material__o *)_9__308_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__308_0,
      (int64_t)_9__308_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  BasicHelper__ForEach_object_(
    v5,
    (System_Action_T__o *)_9__308_0,
    (const MethodInfo_2F9CD60 *)Method_BasicHelper_ForEach_Material___);
}


void __fastcall BattleActorControl__RevertDefaultAnimation(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *fbxcomponent; // x20
  __int64 v4; // x1
  BattleFBXComponent_o *v5; // x0

  if ( (byte_4BDF45F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF45F = 1;
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
        sub_1C22094(0LL, v4);
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
  if ( BattleActorControl__HasGlobalTransitionInFsm_45068156(this, 1, MotionFsmIndexAndFixedMotionName.fields.Item2, v5) )
    this->fields.actindex = 1;
  BattleActorControl__sendEventFSM_45066280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v6);
}


void __fastcall BattleActorControl__SetActorAlpha(BattleActorControl_o *this, float alpha, const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass302_0_o *v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *rendererArrayList; // x21
  System_Action_object__o *v9; // x22

  if ( (byte_4BDF438 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_Material__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass302_0__SetActorAlpha_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass302_0_TypeInfo);
    byte_4BDF438 = 1;
  }
  v5 = (BattleActorControl___c__DisplayClass302_0_o *)sub_1C22084(BattleActorControl___c__DisplayClass302_0_TypeInfo);
  BattleActorControl___c__DisplayClass302_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  v5->fields.alpha = alpha;
  rendererArrayList = (System_Collections_Generic_IEnumerable_T__o *)this->fields.rendererArrayList;
  v9 = (System_Action_object__o *)sub_1C22084(System_Action_Material__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_BattleActorControl___c__DisplayClass302_0__SetActorAlpha_b__0__,
    0LL);
  BattleActorControl__UpdateMaterialsOnRenderders_object_(
    this,
    rendererArrayList,
    (System_Action_Material__o *)v9,
    (const MethodInfo_2FA04C8 *)Method_BattleActorControl_UpdateMaterialsOnRenderders_SkinnedMeshRenderer___);
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
  if ( (byte_4BDF437 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDF437 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_1C22094(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_1C22094(0LL, v13);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
              sub_1C2209C(materials, v13);
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v17 )
                sub_1C22094(materials, v13);
              v20.fields.r = r;
              v20.fields.g = g;
              v20.fields.b = b;
              v20.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v17,
                (System_String_o *)StringLiteral_16411/*"_AddColor"*/,
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
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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

  if ( (byte_4BDF459 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
    byte_4BDF459 = 1;
  }
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BillBoardGrouped___);
  if ( !Component_object )
    sub_1C22094(0LL, v6);
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
  PartyOrganizationUtility_o *p_shadowEffectObject; // x21
  unsigned __int64 v9; // x24
  __int64 v10; // x26
  unsigned __int64 v11; // x9
  UnityEngine_Object_o *v12; // x23
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_c *klass; // x8
  BattleServantData_o *battleSvtData; // x23
  UnityEngine_GameObject_o *actorObject; // x24
  ServantLimitAddEntity_o *svtlimitaddent; // x22
  UnityEngine_GameObject_array *v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  v6 = this;
  if ( (byte_4BDF42B & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF42B = 1;
  }
  p_klass = &v6->fields.shadowEffectObject->obj.klass;
  p_shadowEffectObject = (PartyOrganizationUtility_o *)&v6->fields.shadowEffectObject;
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
      UnityEngine_Object__Destroy_70869612(v12, 0LL);
      klass = p_shadowEffectObject->klass;
      if ( p_shadowEffectObject->klass )
      {
        if ( v9 >= LODWORD(klass->_1.namespaze) )
LABEL_17:
          sub_1C2209C(this, isShadow);
        *(void **)((char *)&klass->_1.image + v10) = 0LL;
        sub_1C21DDC((PartyOrganizationUtility_o *)((char *)klass + v10), 0LL, v13, v14, v15, v16, v17, v18);
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
    sub_1C22094(this, isShadow);
  actorObject = v6->fields.actorObject;
  svtlimitaddent = battleSvtData->fields.svtlimitaddent;
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  v23 = BattleEffectUtility__ChangeServantView(battleSvtData, actorObject, isShadow, isChoco, svtlimitaddent, 0LL);
  p_shadowEffectObject->klass = (PartyOrganizationUtility_c *)v23;
  sub_1C21DDC(p_shadowEffectObject, (int64_t)v23, v24, v25, v26, v27, v28, v29);
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
  if ( (byte_4BDF436 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    byte_4BDF436 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  rendererArrayList = this->fields.rendererArrayList;
  if ( rendererArrayList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v18,
      (System_Collections_Generic_List_object__o *)rendererArrayList,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__GetEnumerator__);
    v19 = v18;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v10 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( v10 )
      {
        if ( !current )
          sub_1C22094(v10, v11);
        materials = UnityEngine_Renderer__get_materials((UnityEngine_Renderer_o *)current, 0LL);
        v14 = materials;
        if ( !materials )
          sub_1C22094(0LL, v13);
        v15 = *(_QWORD *)&materials->max_length;
        if ( (int)v15 >= 1 )
        {
          v16 = 0LL;
          do
          {
            if ( v16 >= (unsigned int)v15 )
              sub_1C2209C(materials, v13);
            v17 = (UnityEngine_Object_o *)v14->m_Items[v16];
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            materials = (UnityEngine_Material_array *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
            if ( ((unsigned __int8)materials & 1) != 0 )
            {
              if ( !v17 )
                sub_1C22094(materials, v13);
              v20.fields.r = r;
              v20.fields.g = g;
              v20.fields.b = b;
              v20.fields.a = a;
              UnityEngine_Material__SetColor(
                (UnityEngine_Material_o *)v17,
                (System_String_o *)StringLiteral_16455/*"_Color"*/,
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
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_SkinnedMeshRenderer__Dispose__);
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
  BattleServantData_o *battleSvtData; // x0
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  struct BattleServantData_o *v13; // x8
  int32_t displayType; // w8
  bool v15; // w1
  bool v16; // w2
  int uniqueId; // w8
  BattleServantData_o *v18; // x19
  unsigned int v19; // w22
  float v20; // s15
  BattleServantData_c **v21; // x8
  UnityEngine_Renderer_o *v22; // x20
  float v23; // s14
  float v24; // s13
  float v25; // s12
  UnityEngine_Material_o *material; // x0
  float v27; // s11
  float v28; // s10
  float v29; // s9
  float a; // s8
  __int64 v31; // x8
  BattleServantData_o *v32; // x20
  float v33; // s8
  unsigned __int64 v34; // x26
  float v35; // s12
  float v36; // s13
  float v37; // s9
  float v38; // s14
  float v39; // s10
  float v40; // s11
  UnityEngine_Object_o *v41; // x21
  float v42; // [xsp+4h] [xbp-9Ch]
  float v43; // [xsp+8h] [xbp-98h]
  float v44; // [xsp+Ch] [xbp-94h]
  UnityEngine_Color_o color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o ColorOrDefault; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v49; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  b = fadeColour.fields.b;
  g = fadeColour.fields.g;
  r = fadeColour.fields.r;
  if ( (byte_4BDF433 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDF433 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    goto LABEL_30;
  if ( BattleServantData__isAppearanceId(battleSvtData, 0LL) )
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
  battleSvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                 (UnityEngine_GameObject_o *)battleSvtData,
                                                 (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___)) == 0LL )
  {
LABEL_30:
    sub_1C22094(battleSvtData, method);
  }
  uniqueId = battleSvtData->fields.uniqueId;
  v18 = battleSvtData;
  if ( uniqueId >= 1 )
  {
    v19 = 0;
    v43 = g * alpha;
    v44 = r * alpha;
    v20 = 1.0 - alpha;
    v42 = b * alpha;
    while ( 1 )
    {
      if ( v19 >= uniqueId )
        goto LABEL_29;
      v21 = &v18->klass + (int)v19;
      v22 = (UnityEngine_Renderer_o *)v21[4];
      if ( !v22 )
        goto LABEL_30;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v21[4], 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      color = UnityEngine_Material__get_color((UnityEngine_Material_o *)battleSvtData, 0LL);
      v23 = color.fields.r;
      v24 = color.fields.g;
      v25 = color.fields.b;
      material = UnityEngine_Renderer__get_material(v22, 0LL);
      v46.fields.r = 0.0;
      v46.fields.g = 0.0;
      v46.fields.b = 0.0;
      v46.fields.a = 0.0;
      ColorOrDefault = MaterialExtensions__GetColorOrDefault(material, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v46, 0LL);
      v27 = ColorOrDefault.fields.r;
      v28 = ColorOrDefault.fields.g;
      v29 = ColorOrDefault.fields.b;
      a = ColorOrDefault.fields.a;
      battleSvtData = (BattleServantData_o *)UnityEngine_Renderer__get_materials(v22, 0LL);
      if ( !battleSvtData )
        goto LABEL_30;
      v31 = *(_QWORD *)&battleSvtData->fields.uniqueId;
      v32 = battleSvtData;
      if ( (int)v31 >= 1 )
        break;
LABEL_27:
      uniqueId = v18->fields.uniqueId;
      if ( (int)++v19 >= uniqueId )
        return;
    }
    v33 = a + 0.0;
    v34 = 0LL;
    v35 = v20 * v25;
    v36 = v20 * v24;
    v37 = v42 + v29;
    v38 = v20 * v23;
    v39 = v43 + v28;
    v40 = v44 + v27;
    while ( v34 < (unsigned int)v31 )
    {
      v41 = (UnityEngine_Object_o *)*(&v32->fields.userSvtId.fields.currentCryptoKey + v34);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(v41, 0LL, 0LL);
      if ( ((unsigned __int8)battleSvtData & 1) != 0 )
      {
        if ( !v41 )
          goto LABEL_30;
        v48.fields.a = 1.0;
        v48.fields.r = v38;
        v48.fields.g = v36;
        v48.fields.b = v35;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v41, (System_String_o *)StringLiteral_16455/*"_Color"*/, v48, 0LL);
        v49.fields.r = v40;
        v49.fields.g = v39;
        v49.fields.b = v37;
        v49.fields.a = v33;
        UnityEngine_Material__SetColor((UnityEngine_Material_o *)v41, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v49, 0LL);
      }
      LODWORD(v31) = v32->fields.uniqueId;
      if ( (__int64)++v34 >= (int)v31 )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C2209C(battleSvtData, method);
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

  if ( (byte_4BDF432 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    byte_4BDF432 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_23;
  gameObject = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                 (UnityEngine_GameObject_o *)gameObject,
                 (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
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
        sub_1C2209C(gameObject, v4);
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
            (System_String_o *)StringLiteral_16455/*"_Color"*/,
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
    sub_1C22094(gameObject, v4);
  }
}


void __fastcall BattleActorControl__SetPartAnimationSaveData(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattlePlayAnimationComponent_array *PlayAnimationComponents; // x0
  BattleActorControl___c_c *v5; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x20
  System_Func_object__bool__o *_9__386_0; // x21
  Il2CppObject *v8; // x22
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BattleActorControl___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__object__o *_9__386_1; // x21
  Il2CppObject *v20; // x22
  struct BattleActorControl___c_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Object_array *v30; // x0
  BattleServantData_o *battleSvtData; // x8

  if ( (byte_4BDF475 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
    sub_1C21E38(&System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    sub_1C21E38(&System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__386_0__);
    sub_1C21E38(&Method_BattleActorControl___c__SetPartAnimationSaveData_b__386_1__);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF475 = 1;
  }
  PlayAnimationComponents = BattleActorControl__GetPlayAnimationComponents(this, 0, v2);
  v5 = BattleActorControl___c_TypeInfo;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayAnimationComponents;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v5 = BattleActorControl___c_TypeInfo;
  }
  _9__386_0 = (System_Func_object__bool__o *)v5->static_fields->__9__386_0;
  if ( !_9__386_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = BattleActorControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__386_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattlePlayAnimationComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__386_0,
      v8,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__386_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__386_0 = (struct System_Func_BattlePlayAnimationComponent__bool__o *)_9__386_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__386_0,
      (int64_t)_9__386_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v6,
          (System_Func_TSource__bool__o *)_9__386_0,
          (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_BattlePlayAnimationComponent___);
  v17 = BattleActorControl___c_TypeInfo;
  v18 = v16;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v17 = BattleActorControl___c_TypeInfo;
  }
  _9__386_1 = (System_Func_object__object__o *)v17->static_fields->__9__386_1;
  if ( !_9__386_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = BattleActorControl___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__386_1 = (System_Func_object__object__o *)sub_1C22084(System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__TypeInfo);
    System_Func_object__object____ctor(
      _9__386_1,
      v20,
      Method_BattleActorControl___c__SetPartAnimationSaveData_b__386_1__,
      0LL);
    v21 = BattleActorControl___c_TypeInfo->static_fields;
    v21->__9__386_1 = (struct System_Func_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData__o *)_9__386_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v21->__9__386_1, (int64_t)_9__386_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)_9__386_1,
                                                         (const MethodInfo_2FE15B8 *)Method_System_Linq_Enumerable_Select_BattlePlayAnimationComponent__BattlePlayAnimationComponent_SaveData___);
  v29 = BasicHelper__ExcludeNull_object_(
          v28,
          (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_BattlePlayAnimationComponent_SaveData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattlePlayAnimationComponent_SaveData___);
  battleSvtData = this->fields.battleSvtData;
  if ( battleSvtData )
    BattleServantData__SetPartAnimationSaveData(
      battleSvtData,
      this->fields.partAnimationSaveKey,
      (BattlePlayAnimationComponent_SaveData_array *)v30,
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

  if ( (byte_4BDF46F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF46F = 1;
  }
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    IsHideShadow = (UnityEngine_GameObject_o *)BattleActorControl__IsHideShadow(this, v6);
    v9 = (UnityEngine_Component_o *)this->fields.shadowObj;
    if ( !v9 || (v10 = (char)IsHideShadow, (IsHideShadow = UnityEngine_Component__get_gameObject(v9, 0LL)) == 0LL) )
      sub_1C22094(IsHideShadow, v8);
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
  if ( (byte_4BDF430 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_16540/*"_MainTex"*/);
    byte_4BDF430 = 1;
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
        UnityEngine_MaterialPropertyBlock__Clear_70726780((UnityEngine_MaterialPropertyBlock_o *)IsHideShadow, 0LL);
        IsHideShadow = (BattleData_o *)this->fields.mpb;
        if ( IsHideShadow )
        {
          UnityEngine_MaterialPropertyBlock__SetTexture(
            (UnityEngine_MaterialPropertyBlock_o *)IsHideShadow,
            (System_String_o *)StringLiteral_16540/*"_MainTex"*/,
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
              (System_String_o *)StringLiteral_16455/*"_Color"*/,
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
                                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
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
      sub_1C22094(IsHideShadow, v9);
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
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  BattleActorControl_c *v28; // x0
  UnityEngine_Object_o *specialShadowObj; // x21
  BattleActorControl_c *v30; // x0
  System_Collections_Generic_Dictionary_int__object__o *v31; // x21
  int v32; // w8
  int v33; // w8
  int v34; // w8
  int v35; // w8
  int v41; // w8
  int v42; // w8
  int v44; // w8
  int v46; // w8
  int v48; // w8
  int v49; // w8
  int v51; // w8
  int v52; // w8
  int v53; // w8
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  BattleActorControl_c *v60; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0
  BattleActorControl_c *v62; // x0
  BattleActorControl_c *v63; // x0
  Il2CppObject *Item; // x0
  struct UnityEngine_Transform_o **p_shadowObj; // x21
  UnityEngine_Object_o *shadowObj; // x23
  Il2CppObject *v67; // x22
  UnityEngine_Transform_o *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  BattleActorControl_c *v75; // x0
  struct System_Collections_Generic_Dictionary_int__Vector3____o *specialShadowTransform; // x8
  UnityEngine_Object_o *v77; // x23
  BattleActorControl_c *v78; // x0
  UnityEngine_Object_o *v79; // x19

  if ( (byte_4BDF431 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3___TypeInfo);
    sub_1C21E38(&StringLiteral_12986/*"Shadow"*/);
    byte_4BDF431 = 1;
  }
  v5 = BattleActorControl_TypeInfo;
  if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    v5 = BattleActorControl_TypeInfo;
  }
  if ( !v5->static_fields->ShadowTransform )
  {
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v6,
      (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
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
      (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
    v28 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v28 = BattleActorControl_TypeInfo;
    }
    v28->static_fields->ShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v6;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)BattleActorControl_TypeInfo->static_fields,
      (int64_t)v6,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  specialShadowObj = (UnityEngine_Object_o *)this->fields.specialShadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(specialShadowObj, 0LL, 0LL) )
  {
    v30 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v30 = BattleActorControl_TypeInfo;
    }
    if ( !v30->static_fields->specialShadowTransform )
    {
      v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__Vector3____TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v31,
        (const MethodInfo_32B5078 *)Method_System_Collections_Generic_Dictionary_int__Vector3_____ctor__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v32 = *((_DWORD *)ShadowTransform + 6);
      if ( !v32 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0LL;
      *((_DWORD *)ShadowTransform + 10) = 0;
      if ( v32 == 1 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 6) = 0LL;
      *((_DWORD *)ShadowTransform + 11) = 0;
      if ( !v31 )
        goto LABEL_138;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        0,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v33 = *((_DWORD *)ShadowTransform + 6);
      if ( !v33 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x3F99999Au);
      *((_DWORD *)ShadowTransform + 10) = 1067030938;
      if ( v33 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        1,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v34 = *((_DWORD *)ShadowTransform + 6);
      if ( !v34 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = 0x4000000040000000LL;
      *((_DWORD *)ShadowTransform + 10) = 0x40000000;
      if ( v34 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        2,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v35 = *((_DWORD *)ShadowTransform + 6);
      if ( !v35 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1077936128;
      if ( v35 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        3,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v41 = *((_DWORD *)ShadowTransform + 6);
      if ( !v41 )
        goto LABEL_137;
      *((int32x2_t *)ShadowTransform + 4) = vdup_n_s32(0x405CCCCDu);
      *((_DWORD *)ShadowTransform + 10) = 1079823565;
      if ( v41 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        4,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v42 = *((_DWORD *)ShadowTransform + 6);
      if ( !v42 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #3.75 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1081081856;
      if ( v42 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        5,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v44 = *((_DWORD *)ShadowTransform + 6);
      if ( !v44 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #25.0 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1103626240;
      if ( v44 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1071728558;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E051EB84070A3D7LL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        6,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v46 = *((_DWORD *)ShadowTransform + 6);
      if ( !v46 )
        goto LABEL_137;
      __asm { FMOV            V9.2S, #5.0 }
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v46 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1107967345;
      *(_QWORD *)(ShadowTransform + 44) = 0x3E428F5C3F59999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        7,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v48 = *((_DWORD *)ShadowTransform + 6);
      if ( !v48 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v48 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        8,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v49 = *((_DWORD *)ShadowTransform + 6);
      if ( !v49 )
        goto LABEL_137;
      __asm { FMOV            V0.2S, #7.5 }
      *((_QWORD *)ShadowTransform + 4) = _D0;
      *((_DWORD *)ShadowTransform + 10) = 1089470464;
      if ( v49 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        9,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v51 = *((_DWORD *)ShadowTransform + 6);
      if ( !v51 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4060000040C00000LL;
      if ( v51 == 1 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28FBF19999ALL;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        10,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v52 = *((_DWORD *)ShadowTransform + 6);
      if ( !v52 )
        goto LABEL_137;
      *((_DWORD *)ShadowTransform + 10) = 1065353216;
      *((_QWORD *)ShadowTransform + 4) = 0x4118000041000000LL;
      if ( v52 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1082130432;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        11,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      ShadowTransform = (char *)sub_1C21EE0(UnityEngine_Vector3___TypeInfo, 2LL);
      if ( !ShadowTransform )
        goto LABEL_138;
      v53 = *((_DWORD *)ShadowTransform + 6);
      if ( !v53 )
        goto LABEL_137;
      *((_QWORD *)ShadowTransform + 4) = _D9;
      *((_DWORD *)ShadowTransform + 10) = 1084227584;
      if ( v53 == 1 )
        goto LABEL_137;
      *(_QWORD *)(ShadowTransform + 44) = 0x3CF5C28F00000000LL;
      *((_DWORD *)ShadowTransform + 13) = -1102263091;
      System_Collections_Generic_Dictionary_int__object___Add(
        v31,
        12,
        (Il2CppObject *)ShadowTransform,
        (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__Vector3____Add__);
      v60 = BattleActorControl_TypeInfo;
      if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
        v60 = BattleActorControl_TypeInfo;
      }
      static_fields = v60->static_fields;
      static_fields->specialShadowTransform = (struct System_Collections_Generic_Dictionary_int__Vector3____o *)v31;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->specialShadowTransform,
        (int64_t)v31,
        v54,
        v55,
        v56,
        v57,
        v58,
        v59);
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
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
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
             (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
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
              (System_String_o *)StringLiteral_12986/*"Shadow"*/,
              0LL);
      *p_shadowObj = v68;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.shadowObj, (int64_t)v68, v69, v70, v71, v72, v73, v74);
    }
    v75 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v75 = BattleActorControl_TypeInfo;
    }
    specialShadowTransform = v75->static_fields->specialShadowTransform;
    if ( specialShadowTransform )
    {
      if ( !v75->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v75);
        specialShadowTransform = BattleActorControl_TypeInfo->static_fields->specialShadowTransform;
        if ( !specialShadowTransform )
          goto LABEL_138;
      }
      if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
             (System_Collections_Generic_Dictionary_int__object__o *)specialShadowTransform,
             btlSize,
             (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__Vector3____ContainsKey__) )
      {
        v77 = (UnityEngine_Object_o *)this->fields.specialShadowObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(v77, 0LL, 0LL) )
        {
          ShadowTransform = (char *)this->fields.specialShadowObj;
          if ( !ShadowTransform )
            goto LABEL_138;
          if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)ShadowTransform, 0LL) )
          {
            v78 = BattleActorControl_TypeInfo;
            if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
              v78 = BattleActorControl_TypeInfo;
            }
            ShadowTransform = (char *)v78->static_fields->specialShadowTransform;
            if ( !ShadowTransform )
              goto LABEL_138;
            v67 = System_Collections_Generic_Dictionary_int__object___get_Item(
                    (System_Collections_Generic_Dictionary_int__object__o *)ShadowTransform,
                    btlSize,
                    (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__Vector3____get_Item__);
          }
        }
      }
    }
    v79 = (UnityEngine_Object_o *)*p_shadowObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
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
          sub_1C22094(ShadowTransform, v8);
        }
      }
LABEL_137:
      sub_1C2209C(ShadowTransform, v8);
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
    sub_1C22094(battleSvtData, v4);
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

  if ( (byte_4BDF45E & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF45E = 1;
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
        sub_1C22094(overwriteAnim, v4);
      }
      BattleFBXComponent__SetTempDefaultAnimation(v7, (System_String_o *)overwriteAnim, 0LL);
    }
  }
}


void __fastcall BattleActorControl__SetWithdrawFlg(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(this, method);
  battleSvtData->fields.isAnimPlayedWithdraw = 1;
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
    if ( isHideShadow != BattleActorControl__IsHideShadow(this, (const MethodInfo *)isShift) )
      BattleActorControl__UpdateShadow(this, v13);
  }
  this->fields.myShiftData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_myShiftData, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  BattleActorControl__setAddAura(this, this->fields.battleSvtData, v14);
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, v15);
  if ( isShift )
    BattleServantData__shiftUpdateStatus(battleSvtData, 0LL);
  else
    BattleServantData__changeUpdateStatus(battleSvtData, 0LL);
}


void __fastcall BattleActorControl__SkipDead(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDF444 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_12393/*"SKIP_DEAD"*/);
    byte_4BDF444 = 1;
  }
  BattleActorControl__sendEventFSM_45066280(this, (System_String_o *)StringLiteral_12393/*"SKIP_DEAD"*/, 0, v2);
}


void __fastcall BattleActorControl__Start(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_o *v2; // x19
  struct BattleFBXComponent_o *fbxcomponent; // x20
  PartyOrganizationUtility_o *p_OnEvent; // x20
  System_Delegate_o *OnEvent; // t1
  BattleFBXComponent_onEventDelegate_o *v6; // x22
  System_Delegate_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x8
  BattleFBXComponent_onEventDelegate_c *v15; // x1
  struct BattleFBXComponent_o *v16; // x20
  System_Delegate_o *Complete; // t1
  BattleFBXComponent_onEventDelegate_o *v18; // x22
  System_Delegate_o *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  BattleFBXComponent_onEventDelegate_c *v26; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *NodeFromLvName; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  UnityEngine_Transform_o *v35; // x0
  UnityEngine_Transform_o *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  v2 = this;
  if ( (byte_4BDF3CF & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_Complete__);
    sub_1C21E38(&Method_BattleActorControl_OnEvent__);
    sub_1C21E38(&StringLiteral_19302/*"en_damage01"*/);
    sub_1C21E38(&StringLiteral_19305/*"en_text01"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&BattleFBXComponent_onEventDelegate_TypeInfo);
    byte_4BDF3CF = 1;
  }
  fbxcomponent = v2->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_16;
  OnEvent = (System_Delegate_o *)fbxcomponent->fields.OnEvent;
  p_OnEvent = (PartyOrganizationUtility_o *)&fbxcomponent->fields.OnEvent;
  v6 = (BattleFBXComponent_onEventDelegate_o *)sub_1C22084(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v6, (Il2CppObject *)v2, Method_BattleActorControl_OnEvent__, 0LL);
  v7 = System_Delegate__Combine(OnEvent, (System_Delegate_o *)v6, 0LL);
  v14 = (int64_t)v7;
  if ( v7 )
  {
    v15 = BattleFBXComponent_onEventDelegate_TypeInfo;
    if ( (BattleFBXComponent_onEventDelegate_c *)v7->klass != BattleFBXComponent_onEventDelegate_TypeInfo )
      goto LABEL_13;
    p_OnEvent->klass = (PartyOrganizationUtility_c *)v7;
    if ( (BattleFBXComponent_onEventDelegate_c *)v7->klass != v15 )
      goto LABEL_13;
  }
  else
  {
    p_OnEvent->klass = 0LL;
  }
  sub_1C21DDC(p_OnEvent, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v16 = v2->fields.fbxcomponent;
  if ( !v16 )
LABEL_16:
    sub_1C22094(this, method);
  Complete = (System_Delegate_o *)v16->fields.Complete;
  p_OnEvent = (PartyOrganizationUtility_o *)&v16->fields.Complete;
  v18 = (BattleFBXComponent_onEventDelegate_o *)sub_1C22084(BattleFBXComponent_onEventDelegate_TypeInfo);
  BattleFBXComponent_onEventDelegate___ctor(v18, (Il2CppObject *)v2, Method_BattleActorControl_Complete__, 0LL);
  v19 = System_Delegate__Combine(Complete, (System_Delegate_o *)v18, 0LL);
  v14 = (int64_t)v19;
  if ( !v19 )
  {
LABEL_14:
    p_OnEvent->klass = (PartyOrganizationUtility_c *)v14;
    goto LABEL_15;
  }
  v26 = BattleFBXComponent_onEventDelegate_TypeInfo;
  if ( (BattleFBXComponent_onEventDelegate_c *)v19->klass != BattleFBXComponent_onEventDelegate_TypeInfo
    || (p_OnEvent->klass = (PartyOrganizationUtility_c *)v19, (BattleFBXComponent_onEventDelegate_c *)v19->klass != v26) )
  {
LABEL_13:
    sub_1C22354(v14);
    goto LABEL_14;
  }
LABEL_15:
  sub_1C21DDC(p_OnEvent, v14, v20, v21, v22, v23, v24, v25);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  NodeFromLvName = TransformHelper__getNodeFromLvName(transform, (System_String_o *)StringLiteral_19305/*"en_text01"*/, -1, 0, 0LL);
  v2->fields.nodeText = NodeFromLvName;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.nodeText, (int64_t)NodeFromLvName, v29, v30, v31, v32, v33, v34);
  v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
  v36 = TransformHelper__getNodeFromLvName(v35, (System_String_o *)StringLiteral_19302/*"en_damage01"*/, -1, 0, 0LL);
  v2->fields.nodeDamage = v36;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.nodeDamage, (int64_t)v36, v37, v38, v39, v40, v41, v42);
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
  int64_t v11; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_Transform_o *root_field; // x19
  UnityEngine_Transform_o *transform; // x0
  struct ParticleDisconnector_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct BattleServantData_o *v22; // x8
  float v23; // s9
  System_String_o *Value; // x0
  int v25; // w8
  __int64 v26; // x19
  unsigned int v27; // w20
  int v28; // w22
  UnityEngine_GameObject_o *v29; // x19
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  System_Object_array *v36; // x20
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x22
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  const MethodInfo *v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x21
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x21
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  __int64 v110; // x2
  __int64 v111; // x3
  __int64 v112; // x4
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x21
  System_Collections_Hashtable_o *v120; // x0
  __int64 v121; // x0
  float v122; // [xsp+8h] [xbp-58h] BYREF
  int v123; // [xsp+Ch] [xbp-54h] BYREF
  float Height; // [xsp+28h] [xbp-38h] BYREF
  int v125; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4BDF410 & 1) == 0 )
  {
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&object___TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24742/*"updateDeadEffect"*/);
    sub_1C21E38(&StringLiteral_19990/*"from"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_10099/*"OnFinishDead"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_12341/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/);
    sub_1C21E38(&StringLiteral_22688/*"onupdate"*/);
    sub_1C21E38(&StringLiteral_24401/*"to"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF410 = 1;
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
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.particleDisconnectorObj,
    (int64_t)v15,
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
      Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_12341/*"SHORT_DEAD_EFFECT_SHADOW_SVT_ID"*/, 0LL);
      if ( Value )
      {
        ActorSvtId = (__int64)BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
        if ( !ActorSvtId )
          goto LABEL_87;
        v25 = *(_DWORD *)(ActorSvtId + 24);
        v26 = ActorSvtId;
        if ( v25 >= 1 )
        {
          v27 = 0;
          while ( 1 )
          {
            if ( v27 >= v25 )
              goto LABEL_85;
            ActorSvtId = (__int64)this->fields.battleSvtData;
            if ( !ActorSvtId )
              goto LABEL_87;
            v28 = *(_DWORD *)(v26 + 4LL * (int)v27 + 32);
            ActorSvtId = BattleServantData__getActorSvtId((BattleServantData_o *)ActorSvtId, 0LL);
            if ( v28 == (_DWORD)ActorSvtId )
              break;
            v25 = *(_DWORD *)(v26 + 24);
            if ( (int)++v27 >= v25 )
              goto LABEL_27;
          }
          v23 = 1.0;
        }
      }
    }
  }
LABEL_27:
  if ( overwriteDuration < 0.0 )
    overwriteDuration = v23;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ActorSvtId = sub_1C21EE0(object___TypeInfo, 12LL);
  if ( !ActorSvtId )
LABEL_87:
    sub_1C22094(ActorSvtId, v11);
  v36 = (System_Object_array *)ActorSvtId;
  ActorSvtId = StringLiteral_19990/*"from"*/;
  if ( StringLiteral_19990/*"from"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_19990/*"from"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_19990/*"from"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !v36->max_length )
    goto LABEL_85;
  v36->m_Items[0] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)v36->m_Items, v11, v30, v31, v32, v33, v34, v35);
  v125 = 0;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v125, v37, v38, v39);
  v46 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C21F74(ActorSvtId, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v36->max_length <= 1 )
    goto LABEL_85;
  v36->m_Items[1] = (Il2CppObject *)v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  ActorSvtId = StringLiteral_24401/*"to"*/;
  if ( StringLiteral_24401/*"to"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_24401/*"to"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24401/*"to"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 2 )
    goto LABEL_85;
  v36->m_Items[2] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[2], v11, v47, v48, v49, v50, v51, v52);
  Height = BattleActorControl__GetHeight(this, v53);
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &Height, v54, v55, v56);
  v63 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C21F74(ActorSvtId, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v36->max_length <= 3 )
    goto LABEL_85;
  v36->m_Items[3] = (Il2CppObject *)v63;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[3], v63, v57, v58, v59, v60, v61, v62);
  ActorSvtId = StringLiteral_19078/*"easetype"*/;
  if ( StringLiteral_19078/*"easetype"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_19078/*"easetype"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_19078/*"easetype"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 4 )
    goto LABEL_85;
  v36->m_Items[4] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[4], v11, v64, v65, v66, v67, v68, v69);
  v123 = 6;
  ActorSvtId = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v123, v70, v71, v72);
  v79 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C21F74(ActorSvtId, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
  }
  if ( v36->max_length <= 5 )
    goto LABEL_85;
  v36->m_Items[5] = (Il2CppObject *)v79;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[5], v79, v73, v74, v75, v76, v77, v78);
  ActorSvtId = StringLiteral_22688/*"onupdate"*/;
  if ( StringLiteral_22688/*"onupdate"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_22688/*"onupdate"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_22688/*"onupdate"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 6 )
    goto LABEL_85;
  v36->m_Items[6] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[6], v11, v80, v81, v82, v83, v84, v85);
  ActorSvtId = StringLiteral_24742/*"updateDeadEffect"*/;
  if ( StringLiteral_24742/*"updateDeadEffect"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_24742/*"updateDeadEffect"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24742/*"updateDeadEffect"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 7 )
    goto LABEL_85;
  v36->m_Items[7] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[7], v11, v86, v87, v88, v89, v90, v91);
  ActorSvtId = StringLiteral_22680/*"oncomplete"*/;
  if ( StringLiteral_22680/*"oncomplete"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_22680/*"oncomplete"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_22680/*"oncomplete"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 8 )
    goto LABEL_85;
  v36->m_Items[8] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[8], v11, v92, v93, v94, v95, v96, v97);
  ActorSvtId = StringLiteral_10099/*"OnFinishDead"*/;
  if ( StringLiteral_10099/*"OnFinishDead"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_10099/*"OnFinishDead"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_10099/*"OnFinishDead"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 9 )
    goto LABEL_85;
  v36->m_Items[9] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[9], v11, v98, v99, v100, v101, v102, v103);
  ActorSvtId = StringLiteral_24360/*"time"*/;
  if ( StringLiteral_24360/*"time"*/ )
  {
    ActorSvtId = sub_1C21F74(StringLiteral_24360/*"time"*/, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
      goto LABEL_86;
    v11 = StringLiteral_24360/*"time"*/;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v36->max_length <= 0xA )
    goto LABEL_85;
  v36->m_Items[10] = (Il2CppObject *)v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[10], v11, v104, v105, v106, v107, v108, v109);
  v122 = overwriteDuration;
  ActorSvtId = j_il2cpp_value_box_0(float_TypeInfo, &v122, v110, v111, v112);
  v119 = ActorSvtId;
  if ( ActorSvtId )
  {
    ActorSvtId = sub_1C21F74(ActorSvtId, v36->obj.klass->_1.element_class);
    if ( !ActorSvtId )
    {
LABEL_86:
      v121 = sub_1C220B8(ActorSvtId);
      sub_1C21F60(v121, 0LL);
    }
  }
  if ( v36->max_length <= 0xB )
LABEL_85:
    sub_1C2209C(ActorSvtId, v11);
  v36->m_Items[11] = (Il2CppObject *)v119;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v36->m_Items[11], v119, v113, v114, v115, v116, v117, v118);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v120 = iTween__Hash(v36, 0LL);
  iTween__ValueTo(v29, v120, 0LL);
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
  UnityEngine_Object_o *Item_43249696; // x25
  BattlePerformance_o *v19; // x26
  int v20; // s0
  struct BattlePerformance_o *v23; // x8
  BattlePerformance_o *v24; // x20

  if ( (byte_4BDF40F & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF40F = 1;
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
            sub_1C2209C(DropTransform, isSilent);
          battleSvtData = (BattleServantData_o *)this->fields.performance;
          if ( !battleSvtData )
            break;
          v17 = droplist->m_Items[v16];
          Item_43249696 = (UnityEngine_Object_o *)BattlePerformance__dropGetItem_43249696(
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
          battleSvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(Item_43249696, 0LL, 0LL);
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
              (UnityEngine_GameObject_o *)Item_43249696,
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
        sub_1C22094(battleSvtData, isSilent);
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
    if ( !byte_4BD6BB1 )
    {
      actorObject = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
    }
    if ( !v13 )
LABEL_11:
      sub_1C22094(actorObject, v5);
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
  if ( (byte_4BDF46D & 1) == 0 )
  {
    sub_1C21E38(&BuffList_TypeInfo);
    sub_1C21E38(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&BuffList_TYPE___TypeInfo);
    byte_4BDF46D = 1;
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
      v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1C22084(BattleBuffData_CheckIndividualitiesData_TypeInfo);
      BattleBuffData_CheckIndividualitiesData___ctor_43953980(v8, v6, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( !buffData )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_43764944(buffData, 100, v8, 1, 0, 0LL, 0LL, 0LL);
    }
    else
    {
      this = (BattleActorControl_o *)sub_1C21EE0(BuffList_TYPE___TypeInfo, 1LL);
      if ( !this )
        goto LABEL_23;
      *(_QWORD *)&forceUpdate = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        sub_1C2209C(this, this);
      LODWORD(this->fields.actorObject) = 163;
      v10 = v4->fields.battleSvtData;
      if ( !v10 )
        goto LABEL_23;
      this = (BattleActorControl_o *)v10->fields.buffData;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)BattleBuffData__getBuffList_43742152(
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
      sub_1C22094(this, forceUpdate);
    }
  }
}


void __fastcall BattleActorControl__UpdateEachServantStatusUiByTransform(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattleActionData_o *actiondata; // x0
  long double inited; // q0
  BattleActionData_o *v5; // x20
  _QWORD *v6; // x20
  __int64 v7; // x8
  __int64 v8; // x0
  int endcameraname; // w8
  unsigned int v10; // w23
  struct BattlePerformance_o *performance; // x8
  __int64 v12; // x22
  struct BattlePerformance_o *v13; // x8
  BattleServantData_o *v14; // x21
  __int64 v15; // x8
  int32_t Value; // w0
  __int64 v17; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_int__o v18; // 0:x0.8

  if ( (byte_4BDF449 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Array_Empty_BattleActionData_BuffData___);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_int__get_Value__);
    byte_4BDF449 = 1;
  }
  v17 = 0LL;
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
    v5 = actiondata;
    if ( !actiondata )
    {
      v6 = Method_System_Array_Empty_BattleActionData_BuffData___;
      v7 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_BuffData___ + 7);
      if ( !v7 )
      {
        sub_1C73D70(Method_System_Array_Empty_BattleActionData_BuffData___);
        v7 = v6[7];
      }
      v8 = *(_QWORD *)(v7 + 16);
      if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
        v8 = sub_1C73D14(inited);
      if ( !*(_DWORD *)(v8 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v8);
      actiondata = *(BattleActionData_o **)(v6[7] + 16LL);
      if ( !*(&actiondata->fields.IsDontUpdateMessage + 1) )
        actiondata = (BattleActionData_o *)sub_1C73D14(inited);
      v5 = **(BattleActionData_o ***)&actiondata->fields.commandAssistId;
      if ( !v5 )
        goto LABEL_30;
    }
    endcameraname = (int)v5->fields.endcameraname;
    if ( endcameraname >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( v10 >= endcameraname )
          sub_1C2209C(actiondata, method);
        performance = this->fields.performance;
        if ( !performance )
          break;
        v12 = *((_QWORD *)&v5->fields.actorId + (int)v10);
        if ( !v12 )
          break;
        actiondata = (BattleActionData_o *)performance->fields.data;
        if ( !actiondata )
          break;
        actiondata = (BattleActionData_o *)BattleData__getServantData(
                                             (BattleData_o *)actiondata,
                                             *(_DWORD *)(v12 + 40),
                                             0LL);
        if ( actiondata )
        {
          v13 = this->fields.performance;
          if ( !v13 )
            break;
          v14 = (BattleServantData_o *)actiondata;
          BattleActionData_BuffData__ExecAfterEffectProc((BattleActionData_BuffData_o *)v12, v13->fields.data, 0LL);
          BattleServantData__UpdateNpImmediately(v14, *(_DWORD *)(v12 + 84), 0LL);
          v15 = *(_QWORD *)(v12 + 92);
          v17 = v15;
          if ( (_BYTE)v15 )
          {
            v18 = (System_Nullable_int__o)&v17;
            v17 = v15;
            Value = System_Nullable_int___get_Value(
                      v18,
                      (const MethodInfo_376B7B8 *)Method_System_Nullable_int__get_Value__);
            BattleServantData__UpdateTdGauge(v14, Value, v14->fields.maxtpturn, 0LL);
          }
          BattleServantData__updateHp(v14, 0LL);
          BattleServantData__updateBuff(v14, 1, 1, 0LL);
        }
        endcameraname = (int)v5->fields.endcameraname;
        if ( (int)++v10 >= endcameraname )
          return;
      }
LABEL_30:
      sub_1C22094(actiondata, method);
    }
  }
}


void __fastcall BattleActorControl__UpdateMaterialsOnRenderders_object_(
        BattleActorControl_o *this,
        System_Collections_Generic_IEnumerable_T__o *rendererEnumerable,
        System_Action_Material__o *updateFunc,
        const MethodInfo_2FA04C8 *method)
{
  long double inited; // q0
  Il2CppClass *_3_BattleActorControl___c__303_T; // x0
  Il2CppClass *v9; // x0
  System_Func_object__bool__o *v10; // x22
  Il2CppClass *v11; // x0
  const MethodInfo_2FA04C8_RGCTXs *rgctx_data; // x8
  __int64 v13; // x0
  __int64 _2_System_Func_T__bool; // x8
  Il2CppObject *v15; // x23
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  long double v22; // q0
  Il2CppClass *v23; // x0
  Il2CppClass *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  __int64 v26; // x1
  long double v27; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x19
  Il2CppClass *_0_System_Collections_Generic_IEnumerable_T; // x1
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v31; // x9
  int *p_offset; // x10
  __int64 p_method; // x0
  __int64 v34; // x0
  __int64 v35; // x1
  __int64 v36; // x19
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  long double v41; // q0
  Il2CppClass *_8_System_Collections_Generic_IEnumerator_T; // x1
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  UnityEngine_Renderer_o *v47; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_TSource__o *materials; // x22
  long double v50; // q0
  Il2CppClass *v51; // x0
  Il2CppClass *v52; // x0
  System_Func_object__bool__o *v53; // x23
  Il2CppClass *v54; // x0
  Il2CppClass *v55; // x0
  Il2CppObject *v56; // x24
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  long double v63; // q0
  Il2CppClass *v64; // x0
  Il2CppClass *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v69; // x8
  __int64 v70; // x9
  int32_t *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x22
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0

  if ( method->rgctx_data
    || (sub_1C21E38(&Method_System_Linq_Enumerable_Where_Material___),
        sub_1C21E38(&System_Func_Material__bool__TypeInfo),
        sub_1C21E38(&System_IDisposable_TypeInfo),
        sub_1C21E38(&System_Collections_Generic_IEnumerable_Material__TypeInfo),
        sub_1C21E38(&System_Collections_Generic_IEnumerator_Material__TypeInfo),
        sub_1C21E38(&System_Collections_IEnumerator_TypeInfo),
        method->rgctx_data) )
  {
    if ( !rendererEnumerable )
      return;
  }
  else
  {
    sub_1C73D70(method);
    if ( !rendererEnumerable )
      return;
  }
  _3_BattleActorControl___c__303_T = method->rgctx_data->_3_BattleActorControl___c__303_T_;
  if ( (BYTE5(_3_BattleActorControl___c__303_T->vtable[0].methodPtr) & 1) == 0 )
    _3_BattleActorControl___c__303_T = (Il2CppClass *)sub_1C73D14(inited);
  if ( !_3_BattleActorControl___c__303_T->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(_3_BattleActorControl___c__303_T);
  v9 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
  if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
    v9 = (Il2CppClass *)sub_1C73D14(inited);
  v10 = (System_Func_object__bool__o *)*((_QWORD *)v9->static_fields + 1);
  if ( !v10 )
  {
    v11 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
    if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
      v11 = (Il2CppClass *)sub_1C73D14(inited);
    if ( !v11->_2.cctor_finished )
      inited = j_il2cpp_runtime_class_init_0(v11);
    rgctx_data = method->rgctx_data;
    v13 = (__int64)rgctx_data->_3_BattleActorControl___c__303_T_;
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    {
      v13 = sub_1C73D14(inited);
      rgctx_data = method->rgctx_data;
    }
    _2_System_Func_T__bool = (__int64)rgctx_data->_2_System_Func_T__bool_;
    v15 = **(Il2CppObject ***)(v13 + 184);
    if ( (*(_BYTE *)(_2_System_Func_T__bool + 309) & 1) == 0 )
      _2_System_Func_T__bool = sub_1C73D14(inited);
    v10 = (System_Func_object__bool__o *)sub_1C22084(_2_System_Func_T__bool);
    System_Func_object__bool____ctor(
      v10,
      v15,
      (intptr_t)method->rgctx_data->_4_BattleActorControl___c__303_T___UpdateMaterialsOnRenderders_b__303_0,
      (const MethodInfo_34E8C8C *)method->rgctx_data->_5_System_Func_T__bool___ctor);
    v23 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
    if ( (BYTE5(v23->vtable[0].methodPtr) & 1) == 0 )
      v23 = (Il2CppClass *)sub_1C73D14(v22);
    *((_QWORD *)v23->static_fields + 1) = v10;
    v24 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
    if ( (BYTE5(v24->vtable[0].methodPtr) & 1) == 0 )
      v24 = (Il2CppClass *)sub_1C73D14(v22);
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)((char *)v24->static_fields + 8),
      (int64_t)v10,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)rendererEnumerable,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_2FEF6F8 *)method->rgctx_data->_6_System_Linq_Enumerable_Where_T_);
  if ( !v25 )
    sub_1C22094(0LL, v26);
  v28 = v25;
  _0_System_Collections_Generic_IEnumerable_T = method->rgctx_data->_0_System_Collections_Generic_IEnumerable_T_;
  if ( (BYTE5(_0_System_Collections_Generic_IEnumerable_T->vtable[0].methodPtr) & 1) == 0 )
    _0_System_Collections_Generic_IEnumerable_T = (Il2CppClass *)sub_1C73D14(v27);
  klass = v28->klass;
  v31 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((Il2CppClass **)p_offset - 1) != _0_System_Collections_Generic_IEnumerable_T )
    {
      --v31;
      p_offset += 4;
      if ( !v31 )
        goto LABEL_31;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_31:
    p_method = sub_1C73E18(v28, _0_System_Collections_Generic_IEnumerable_T, 0LL);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v28,
          *(_QWORD *)(p_method + 8));
  v36 = v34;
  while ( 1 )
  {
    if ( !v36 )
      sub_1C22094(v34, v35);
    v37 = *(_QWORD *)v36;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
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
      v40 = sub_1C73E18(v36, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v36, *(_QWORD *)(v40 + 8)) & 1) == 0 )
      break;
    _8_System_Collections_Generic_IEnumerator_T = method->rgctx_data->_8_System_Collections_Generic_IEnumerator_T_;
    if ( (BYTE5(_8_System_Collections_Generic_IEnumerator_T->vtable[0].methodPtr) & 1) == 0 )
      _8_System_Collections_Generic_IEnumerator_T = (Il2CppClass *)sub_1C73D14(v41);
    v43 = *(_QWORD *)v36;
    v44 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
    {
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((Il2CppClass **)v45 - 1) != _8_System_Collections_Generic_IEnumerator_T )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_48;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_48:
      v46 = sub_1C73E18(v36, _8_System_Collections_Generic_IEnumerator_T, 0LL);
    }
    v47 = (UnityEngine_Renderer_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v36, *(_QWORD *)(v46 + 8));
    if ( !v47 )
      sub_1C22094(0LL, v48);
    materials = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_Renderer__get_materials(v47, 0LL);
    v51 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
    if ( (BYTE5(v51->vtable[0].methodPtr) & 1) == 0 )
      v51 = (Il2CppClass *)sub_1C73D14(v50);
    if ( !v51->_2.cctor_finished )
      v50 = j_il2cpp_runtime_class_init_0(v51);
    v52 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
    if ( (BYTE5(v52->vtable[0].methodPtr) & 1) == 0 )
      v52 = (Il2CppClass *)sub_1C73D14(v50);
    v53 = (System_Func_object__bool__o *)*((_QWORD *)v52->static_fields + 2);
    if ( !v53 )
    {
      v54 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
      if ( (BYTE5(v54->vtable[0].methodPtr) & 1) == 0 )
        v54 = (Il2CppClass *)sub_1C73D14(v50);
      if ( !v54->_2.cctor_finished )
        v50 = j_il2cpp_runtime_class_init_0(v54);
      v55 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
      if ( (BYTE5(v55->vtable[0].methodPtr) & 1) == 0 )
        v55 = (Il2CppClass *)sub_1C73D14(v50);
      v56 = *(Il2CppObject **)v55->static_fields;
      v53 = (System_Func_object__bool__o *)sub_1C22084(System_Func_Material__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v53,
        v56,
        (intptr_t)method->rgctx_data->_11_BattleActorControl___c__303_T___UpdateMaterialsOnRenderders_b__303_1,
        0LL);
      v64 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
      if ( (BYTE5(v64->vtable[0].methodPtr) & 1) == 0 )
        v64 = (Il2CppClass *)sub_1C73D14(v63);
      *((_QWORD *)v64->static_fields + 2) = v53;
      v65 = method->rgctx_data->_3_BattleActorControl___c__303_T_;
      if ( (BYTE5(v65->vtable[0].methodPtr) & 1) == 0 )
        v65 = (Il2CppClass *)sub_1C73D14(v63);
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)((char *)v65->static_fields + 16),
        (int64_t)v53,
        v57,
        v58,
        v59,
        v60,
        v61,
        v62);
    }
    v66 = System_Linq_Enumerable__Where_object_(
            materials,
            (System_Func_TSource__bool__o *)v53,
            (const MethodInfo_2FEF6F8 *)Method_System_Linq_Enumerable_Where_Material___);
    v68 = v66;
    if ( !v66 )
      sub_1C22094(0LL, v67);
    v69 = v66->klass;
    v70 = *(unsigned __int16 *)(&v66->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v66->klass->_2.bitflags2 + 3) )
    {
      v71 = &v69->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_Material__c **)v71 - 1) != System_Collections_Generic_IEnumerable_Material__TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_74;
      }
      v72 = (__int64)&v69->vtable[*v71].method;
    }
    else
    {
LABEL_74:
      v72 = sub_1C73E18(v66, System_Collections_Generic_IEnumerable_Material__TypeInfo, 0LL);
    }
    v74 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v72)(
            v68,
            *(_QWORD *)(v72 + 8));
    if ( !v74 )
      sub_1C22094(0LL, v73);
    while ( 1 )
    {
      v75 = *(_QWORD *)v74;
      v76 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v77 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v76;
          v77 += 4;
          if ( !v76 )
            goto LABEL_81;
        }
        v78 = v75 + 16LL * *v77 + 312;
      }
      else
      {
LABEL_81:
        v78 = sub_1C73E18(v74, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v74, *(_QWORD *)(v78 + 8)) & 1) == 0 )
        break;
      v79 = *(_QWORD *)v74;
      v80 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
      {
        v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_Material__c **)v81 - 1) != System_Collections_Generic_IEnumerator_Material__TypeInfo )
        {
          --v80;
          v81 += 4;
          if ( !v80 )
            goto LABEL_88;
        }
        v82 = v79 + 16LL * *v81 + 312;
      }
      else
      {
LABEL_88:
        v82 = sub_1C73E18(v74, System_Collections_Generic_IEnumerator_Material__TypeInfo, 0LL);
      }
      v83 = (*(__int64 (__fastcall **)(__int64, _QWORD))v82)(v74, *(_QWORD *)(v82 + 8));
      if ( !updateFunc )
        sub_1C22094(v83, v83);
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))updateFunc->fields.m_target)(
        updateFunc->fields.original_method_info,
        v83,
        *(_QWORD *)&updateFunc->fields.extra_arg);
    }
    v84 = *(_QWORD *)v74;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v74 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v74 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_96;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_96:
      v87 = sub_1C73E18(v74, System_IDisposable_TypeInfo, 0LL);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v87)(v74, *(_QWORD *)(v87 + 8));
  }
  v88 = *(_QWORD *)v36;
  v89 = *(unsigned __int16 *)(*(_QWORD *)v36 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v36 + 302LL) )
  {
    v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
    {
      --v89;
      v90 += 4;
      if ( !v89 )
        goto LABEL_105;
    }
    v91 = v88 + 16LL * *v90 + 312;
  }
  else
  {
LABEL_105:
    v91 = sub_1C73E18(v36, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v91)(v36, *(_QWORD *)(v91 + 8));
}


void __fastcall BattleActorControl__UpdateShadow(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BDF3DC & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3DC = 1;
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
  v9 = UnityEngine_Object__op_Inequality(shadowObj, 0LL, 0LL);
  if ( v7 )
  {
    if ( v9 )
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
      sub_1C22094(IsHideShadow, v5);
    }
  }
  else
  {
    if ( v9 )
    {
      IsHideShadow = (UnityEngine_Component_o *)this->fields.battleSvtData;
      if ( !IsHideShadow )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)BattleServantData__isAlive((BattleServantData_o *)IsHideShadow, 0, 0LL);
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
    v13 = this->fields.performance;
    if ( !v13 )
      goto LABEL_57;
    data = (UnityEngine_Object_o *)v13->fields.data;
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
      BattleActorControl__ChangeShadowTexture(this, ShadowImageId, v16);
      v17 = this->fields.performance;
      if ( !v17 )
        goto LABEL_57;
      IsHideShadow = (UnityEngine_Component_o *)v17->fields.data;
      if ( !IsHideShadow )
        goto LABEL_57;
      GroundShadowColor = BattleData__getGroundShadowColor((BattleData_o *)IsHideShadow, 0LL);
      BattleActorControl__SetShadowColor(this, GroundShadowColor, v18);
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
      Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_BattleBgMaster___);
      v23 = (UnityEngine_Object_o *)this->fields.performance;
      v24 = (BattleBgMaster_o *)Master_object;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      IsHideShadow = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v23, 0LL, 0LL);
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
        v26 = (int)IsHideShadow;
        IsHideShadow = (UnityEngine_Component_o *)BattlePerformance__get_CurrentGroundType(
                                                    this->fields.performance,
                                                    0LL);
        v27 = this->fields.battleSvtData;
        if ( !v27 || !v24 )
          goto LABEL_57;
        BgShadowImageId = BattleBgMaster__GetBgShadowImageId(v24, v26, (int32_t)IsHideShadow, v27->fields.isEnemy, 0LL);
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
    BattleSize = BattleServantData__get_BattleSize((BattleServantData_o *)IsHideShadow, 0LL);
    BattleActorControl__SetShadowSize(this, BattleSize, v30);
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

  if ( (byte_4BDF416 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    byte_4BDF416 = 1;
  }
  value = 0LL;
  eventClassAddedEventDict = this->fields.eventClassAddedEventDict;
  if ( !eventClassAddedEventDict )
    sub_1C22094(0LL, eventName);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)eventClassAddedEventDict,
         (Il2CppObject *)eventName,
         &value,
         (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF427 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__WaitToNoblePhantasmPlay_d__282_TypeInfo);
    byte_4BDF427 = 1;
  }
  v3 = sub_1C22084(BattleActorControl__WaitToNoblePhantasmPlay_d__282_TypeInfo);
  BattleActorControl__WaitToNoblePhantasmPlay_d__282___ctor(
    (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall BattleActorControl___AddServantVoicePlayed_b__228_0(
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
  if ( (byte_4BDF47A & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF47A = 1;
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
  this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v10, 0LL);
  if ( !data )
LABEL_9:
    sub_1C22094(this, playedSoundId);
  BattleData__AddServantVoicePlayed(data, (int32_t)this, playedSoundId, 0LL);
}


void __fastcall BattleActorControl___DisplayAnimationEffect_b__141_0(
        BattleActorControl_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  ((void (__fastcall *)(BattleActorAnimationEffect_o *, BattleActorControl_o *, void *))x->klass->vtable._4_OnExec.method)(
    x,
    this,
    x->klass[1]._1.image);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleActorControl___IsHideShadow_b__379_0(
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
  if ( (byte_4BDF47E & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF47E = 1;
  }
  battleSvtData = v4->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(this, *(_QWORD *)&svtId);
  v7 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL) == svtId;
}


void __fastcall BattleActorControl___OnNoblePhantasmLoadComplete_b__281_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__WaitToNoblePhantasmPlay(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
}


void __fastcall BattleActorControl___OnNoblePhantasmPlayComplete_b__283_0(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *performance; // x0
  const MethodInfo *v4; // x3
  struct System_Action_o *noblePhantasmCallback; // x8

  if ( (byte_4BDF47D & 1) == 0 )
  {
    sub_1C21E38(&BattleFBXComponent_TypeInfo);
    sub_1C21E38(&StringLiteral_6553/*"FINISHED"*/);
    byte_4BDF47D = 1;
  }
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_10;
  BattlePerformance__noblePhantasmWhiteInFade(performance, 0.2, 0.3, 0LL);
  noblePhantasmCallback = this->fields.noblePhantasmCallback;
  if ( !noblePhantasmCallback )
  {
    BattleActorControl__sendEventFSM_45066280(this, (System_String_o *)StringLiteral_6553/*"FINISHED"*/, 0, v4);
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
    sub_1C22094(performance, method);
  }
  BattleFBXComponent_TypeInfo->static_fields->EnableEvent = 1;
LABEL_9:
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))noblePhantasmCallback->fields.m_target)(
    noblePhantasmCallback->fields.original_method_info,
    *(_QWORD *)&noblePhantasmCallback->fields.extra_arg);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__279_0(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BDF47B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___GetEnumerator__);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    byte_4BDF47B = 1;
  }
  v13 = 0u;
  v14 = 0u;
  noblePhantasmObjectVisibleCtrList = (System_Collections_Generic_List_T__o *)this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_13;
  System_Collections_Generic_List_ValueTuple_Int32Enum__object____GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    noblePhantasmObjectVisibleCtrList,
    (const MethodInfo_35F73EC *)Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__object____MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)&v13,
           (const MethodInfo_33BE70C *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___MoveNext__);
    if ( !v4 )
      break;
    v7 = (BattleActorControl_o *)*((_QWORD *)&v14 + 1);
    if ( !*((_QWORD *)&v14 + 1) )
      sub_1C22094(v4, v5);
    v8 = v14;
    BattleActorControl__playAnimation_45012608(
      *((BattleActorControl_o **)&v14 + 1),
      (System_String_o *)StringLiteral_25041/*"wait"*/,
      0,
      v6);
    BattleActorControl__ProcServantObjectVisibleCtr(v7, v8, 1, v9);
  }
  System_Collections_Generic_List_Enumerator_ValueTuple_Int32Enum__object____Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (const MethodInfo_33BE708 *)Method_System_Collections_Generic_List_Enumerator_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Dispose__);
  v10 = this->fields.noblePhantasmObjectVisibleCtrList;
  if ( !v10 )
LABEL_13:
    sub_1C22094(noblePhantasmObjectVisibleCtrList, method);
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0LL);
}


void __fastcall BattleActorControl___startNoblePhantasm_b__279_1(BattleActorControl_o *this, const MethodInfo *method)
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

  if ( (byte_4BDF47C & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4BDF47C = 1;
  }
  Instance = (BattleSequenceManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
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
  Instance = (BattleSequenceManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v18, 0LL);
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
        v17 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1C22084(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo),
        BattleSequenceManager_onGameObjectLoadComplete___ctor(
          v17,
          (Il2CppObject *)this,
          Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
          0LL),
        !v6) )
  {
LABEL_12:
    sub_1C22094(Instance, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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

  if ( (byte_4BDF464 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1C21E38(&Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_7329/*"HIDE_STATUS_EFFECT_IDS"*/);
    byte_4BDF464 = 1;
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
         (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    return;
  }
  buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                  (DataManager_o *)buffLoopEffectDict,
                                  (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
  if ( !buffLoopEffectDict )
    goto LABEL_53;
  ValueArray = ConstantStrMaster__GetValueArray(
                 (ConstantStrMaster_o *)buffLoopEffectDict,
                 (System_String_o *)StringLiteral_7329/*"HIDE_STATUS_EFFECT_IDS"*/,
                 0LL,
                 0LL);
  if ( !ValueArray || (v8 = *(_QWORD *)&ValueArray->max_length) == 0 || (int)v8 < 1 )
  {
LABEL_15:
    v10 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1C22084(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    BattleEffectUtility_BuffEffectLoadArgument___ctor(v10, this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v12 = buffEntity->fields.effectId;
    v13 = gameObject;
    v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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
        if ( !byte_4BD6BB1 )
        {
          buffLoopEffectDict = sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        if ( v23 )
        {
          UnityEngine_Transform__set_localPosition(v23, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
          buffLoopEffectDict = (__int64)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)EffectToNode,
                                          0LL);
          v24 = (UnityEngine_Transform_o *)buffLoopEffectDict;
          if ( !byte_4BD6BB7 )
          {
            buffLoopEffectDict = sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
            byte_4BD6BB7 = 1;
          }
          if ( v24 )
          {
            UnityEngine_Transform__set_localRotation(
              v24,
              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
              0LL);
            buffLoopEffectDict = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( buffLoopEffectDict )
            {
              buffLoopEffectDict = (__int64)DataManager__GetMasterData_object_(
                                              (DataManager_o *)buffLoopEffectDict,
                                              (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_StatusEffectPosOverwriteMaster___);
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
                  if ( !byte_4BD6BB1 )
                  {
                    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB1 = 1;
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
                        (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, !v48, 0LL);
                buffLoopEffectDict = (__int64)this->fields.buffLoopEffectDict;
                if ( buffLoopEffectDict )
                {
                  System_Collections_Generic_Dictionary_int__object___Add(
                    (System_Collections_Generic_Dictionary_int__object__o *)buffLoopEffectDict,
                    buffEntity->fields.effectId,
                    (Il2CppObject *)EffectToNode,
                    (const MethodInfo_32B5A4C *)Method_System_Collections_Generic_Dictionary_int__GameObject__Add__);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    sub_1C22094(buffLoopEffectDict, effectId);
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
    sub_1C22094(0LL, method);
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

  if ( (byte_4BDF42F & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF42F = 1;
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
                                                            (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___)) == 0LL
        || (UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, isNormal, 0LL),
            (Component_object = (UnityEngine_Component_o *)this->fields.specialShadowObj) == 0LL) )
      {
        sub_1C22094(Component_object, v7);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  UnityEngine_Object_o *shadowObj; // x21
  UnityEngine_Object_o *specialShadowObj; // x21
  int32_t v16; // w21
  System_Action_o *v17; // x22
  BattlePerformance_o *performance; // x19

  if ( (byte_4BDF42E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Renderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass290_0__changeSpecialShadow_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass290_0_TypeInfo);
    byte_4BDF42E = 1;
  }
  v5 = sub_1C22084(BattleActorControl___c__DisplayClass290_0_TypeInfo);
  BattleActorControl___c__DisplayClass290_0___ctor((BattleActorControl___c__DisplayClass290_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_16;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
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
                                                        (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Renderer___);
        if ( Component_object )
        {
          UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, 0, 0LL);
          v16 = *(_DWORD *)(v5 + 24);
          v17 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
          System_Action___ctor(
            v17,
            (Il2CppObject *)v5,
            Method_BattleActorControl___c__DisplayClass290_0__changeSpecialShadow_b__0__,
            0LL);
          performance = this->fields.performance;
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          BattleEffectUtility__LoadEffectAssetIfNotYet(v16, v17, performance, 0LL);
          return;
        }
      }
LABEL_16:
      sub_1C22094(Component_object, v7);
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
    sub_1C22094(0LL, animname);
  return BattleFBXComponent__checkAnimation(fbxcomponent, animname, 0LL);
}


void __fastcall BattleActorControl__checkChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  BattlePerformance_o *performance; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_4BDF44B & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl_endChangeAppearance__);
    byte_4BDF44B = 1;
  }
  performance = this->fields.performance;
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  if ( !performance )
    sub_1C22094(v5, v6);
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
    sub_1C22094(this, name);
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
    sub_1C2209C(this, name);
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
    sub_1C22094(this, name);
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
    sub_1C2209C(this, name);
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
    sub_1C22094(0LL, key);
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

  if ( (byte_4BDF3F0 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_24098/*"summon"*/);
    byte_4BDF3F0 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( this->fields.isEnemy )
  {
    if ( battleSvtData )
      return BattleServantData__checkScriptValue(battleSvtData, (System_String_o *)StringLiteral_24098/*"summon"*/, 1, 0LL);
LABEL_8:
    sub_1C22094(battleSvtData, method);
  }
  if ( !battleSvtData )
    goto LABEL_8;
  StepRate = BattleServantData__getStepRate(battleSvtData, 0LL);
  return UnityEngine_Random__Range_70829352(0, 1000, 0LL) < StepRate;
}


bool __fastcall BattleActorControl__checkVoice(
        BattleActorControl_o *this,
        int32_t type,
        bool isNp,
        const MethodInfo *method)
{
  System_String_o *FileName; // x0
  const MethodInfo *v8; // x3

  if ( (byte_4BDF3FF & 1) == 0 )
  {
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDF3FF = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  return BattleActorControl__checkVoice_45075936(this, FileName, isNp, v8);
}


bool __fastcall BattleActorControl__checkVoice_45075936(
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

  if ( (byte_4BDF400 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF400 = 1;
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
      sub_1C22094(battleSvtData, voiceTypeId);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDF453 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__coAddAura_d__344_TypeInfo);
    byte_4BDF453 = 1;
  }
  v7 = sub_1C22084(BattleActorControl__coAddAura_d__344_TypeInfo);
  BattleActorControl__coAddAura_d__344___ctor((BattleActorControl__coAddAura_d__344_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
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
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7

  if ( (byte_4BDF456 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__colShiftServant_d__350_TypeInfo);
    byte_4BDF456 = 1;
  }
  v9 = sub_1C22084(BattleActorControl__colShiftServant_d__350_TypeInfo);
  BattleActorControl__colShiftServant_d__350___ctor((BattleActorControl__colShiftServant_d__350_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 40) = shiftSvt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)shiftSvt, v18, v19, v20, v21, v22, v23);
  *(_BYTE *)(v9 + 48) = isShift;
  *(_QWORD *)(v9 + 56) = finishCallback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 56), (int64_t)finishCallback, v24, v25, v26, v27, v28, v29);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDF457 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__colShiftServantChange_d__351_TypeInfo);
    byte_4BDF457 = 1;
  }
  v7 = sub_1C22084(BattleActorControl__colShiftServantChange_d__351_TypeInfo);
  BattleActorControl__colShiftServantChange_d__351___ctor(
    (BattleActorControl__colShiftServantChange_d__351_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 32) = shiftSvt;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)shiftSvt, v16, v17, v18, v19, v20, v21);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF44F & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__collChangeAppearance_d__339_TypeInfo);
    byte_4BDF44F = 1;
  }
  v3 = sub_1C22084(BattleActorControl__collChangeAppearance_d__339_TypeInfo);
  BattleActorControl__collChangeAppearance_d__339___ctor(
    (BattleActorControl__collChangeAppearance_d__339_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4BDF44A & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__colloadDressServant_d__334_TypeInfo);
    byte_4BDF44A = 1;
  }
  v5 = sub_1C22084(BattleActorControl__colloadDressServant_d__334_TypeInfo);
  BattleActorControl__colloadDressServant_d__334___ctor((BattleActorControl__colloadDressServant_d__334_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDF448 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__colloadTransformServant_d__331_TypeInfo);
    byte_4BDF448 = 1;
  }
  v3 = sub_1C22084(BattleActorControl__colloadTransformServant_d__331_TypeInfo);
  BattleActorControl__colloadTransformServant_d__331___ctor(
    (BattleActorControl__colloadTransformServant_d__331_o *)v3,
    0,
    0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDF3FC & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__coroutinePostCallBack_d__219_TypeInfo);
    byte_4BDF3FC = 1;
  }
  v6 = sub_1C22084(BattleActorControl__coroutinePostCallBack_d__219_TypeInfo);
  BattleActorControl__coroutinePostCallBack_d__219___ctor(
    (BattleActorControl__coroutinePostCallBack_d__219_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_1C22094(v7, v8);
  *(_QWORD *)(v6 + 40) = callBack;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v6 + 40), (int64_t)callBack, v9, v10, v11, v12, v13, v14);
  *(float *)(v6 + 32) = waitTime;
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleActorControl__endChangeAppearance(BattleActorControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4BDF44E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_5591/*"END_LOAD"*/);
    byte_4BDF44E = 1;
  }
  BattleActorControl__sendEventFSM_45066280(this, (System_String_o *)StringLiteral_5591/*"END_LOAD"*/, 0, v2);
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

  if ( (byte_4BDF3FD & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8897/*"MOTION_BACK"*/);
    byte_4BDF3FD = 1;
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
  if ( System_String__op_Equality(v11->fields.motionname, (System_String_o *)StringLiteral_8897/*"MOTION_BACK"*/, 0LL) )
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
    sub_1C22094(battleSvtData, v4);
  BattlePerformance__EndActionDataFromAnyMotion((BattlePerformance_o *)battleSvtData, 0LL);
}


void __fastcall BattleActorControl__endMotion(
        BattleActorControl_o *this,
        System_String_o *call,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleActorControl__sendEventFSM_45066280(this, call, 0, v3);
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

  if ( (byte_4BDF458 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
    sub_1C21E38(&StringLiteral_19170/*"ef_pig_return01"*/);
    byte_4BDF458 = 1;
  }
  m_ParticleSystem = 0LL;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform
    || (transform = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL)) == 0LL
    || (transform = UnityEngine_Component__GetComponentsInChildren_object__49967896(
                      (UnityEngine_Component_o *)transform,
                      (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_EffectComponent___)) == 0LL )
  {
LABEL_20:
    sub_1C22094(transform, v4);
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
                            (System_String_o *)StringLiteral_19170/*"ef_pig_return01"*/,
                            0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        transform = UnityEngine_Component__GetComponentsInChildren_object__49967896(
                      v9,
                      (const MethodInfo_2FA7318 *)Method_UnityEngine_Component_GetComponentsInChildren_ParticleSystem___);
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
    sub_1C2209C(transform, v4);
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
    BattleActorControl__finishMotion_45074640(this, v7);
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
    sub_1C22094(v5, v6);
  v12 = BattleActorControl__coroutinePostCallBack((BattleActorControl_o *)v5, v10, v5->fields.afterWaitTime, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
LABEL_7:
  if ( !this->fields.actiondata )
  {
    BattleActorControl__ActiveRemainReservedBuffEffect(this, v9);
    BattleActorControl__LoopEffectParticleSwitch(this, 1, 0, v13);
  }
}


void __fastcall BattleActorControl__finishMotion_45074640(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *performance; // x20
  __int64 v4; // x1
  BattlePerformance_o *MotionSkip; // x0

  if ( (byte_4BDF3FB & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3FB = 1;
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
      sub_1C22094(MotionSkip, v4);
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
  int32_t index; // w20
  int32_t DispLimitCount; // w21

  if ( (byte_4BDF3D4 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF3D4 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__get_TreasureDevice(battleSvtData, 0LL)) == 0LL
    || (v6 = battleSvtData, (battleSvtData = this->fields.battleSvtData) == 0LL) )
  {
    sub_1C22094(battleSvtData, name);
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
  int32_t v6; // w20
  BattleServantData_o *v7; // x8
  int32_t v8; // w21
  int32_t WeaponGroup; // w22

  if ( (byte_4BDF3D5 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF3D5 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData
    || (battleSvtData = (BattleServantData_o *)BattleServantData__getSvtId(battleSvtData, 0LL),
        !this->fields.battleSvtData)
    || (v6 = (int)battleSvtData,
        battleSvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(this->fields.battleSvtData, 1, 0LL),
        (v7 = this->fields.battleSvtData) == 0LL) )
  {
    sub_1C22094(battleSvtData, name);
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
    sub_1C22094(0LL, method);
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

  if ( !byte_4BD6BB6 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
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
    sub_1C22094(0LL, v3);
  return UnityEngine_GameObject__get_transform(gameObject, 0LL);
}


int32_t __fastcall BattleActorControl__getEffectFolder(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, method);
  return BattleServantData__getEffectFolder(battleSvtData, 0LL);
}


UnityEngine_Transform_o *__fastcall BattleActorControl__getFieldRoot(
        BattleActorControl_o *this,
        const MethodInfo *method)
{
  struct BattlePerformance_o *performance; // x8

  performance = this->fields.performance;
  if ( !performance )
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
  return BattleServantData__getLimitCount(battleSvtData, 0LL);
}


int32_t __fastcall BattleActorControl__getOverwriteSvtVoiceId(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x8

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(this, method);
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
    sub_1C22094(0LL, key);
  return BattleServantData__getScriptValue(battleSvtData, key, 0LL);
}


int32_t __fastcall BattleActorControl__getServantId(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, method);
  return BattleServantData__getSvtId(battleSvtData, 0LL);
}


System_String_o *__fastcall BattleActorControl__getStrParam(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, method);
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
  if ( (byte_4BDF3F5 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3F5 = 1;
  }
  performance = v4->fields.performance;
  if ( !performance )
    goto LABEL_42;
  distanceofactor = performance->fields.distanceofactor;
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
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
    sub_1C22094(this, *(_QWORD *)&pos);
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

  if ( (byte_4BDF3D3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3D3 = 1;
  }
  performance = (UnityEngine_Object_o *)this->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality(performance, 0LL, 0LL);
  if ( !v4 )
    return -1;
  v6 = this->fields.performance;
  if ( !v6 || (data = v6->fields.data) == 0LL )
    sub_1C22094(v4, v5);
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
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, isEffect);
  return BattleServantData__getWeaponGroup(battleSvtData, isEffect, 0LL);
}


int32_t __fastcall BattleActorControl__getWeaponScale(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, method);
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
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4BDF3F6 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    byte_4BDF3F6 = 1;
  }
  result = this->fields._checkMotion;
  if ( !result )
  {
    v4 = (BattleActorControl_ActorMotionActiveCheck_o *)sub_1C22084(BattleActorControl_ActorMotionActiveCheck_TypeInfo);
    BattleActorControl_ActorMotionActiveCheck___ctor(v4, this, 0LL);
    this->fields._checkMotion = v4;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._checkMotion, (int64_t)v4, v5, v6, v7, v8, v9, v10);
    return this->fields._checkMotion;
  }
  return result;
}


PlayMakerFSM_o *__fastcall BattleActorControl__get_CommonFsm(BattleActorControl_o *this, const MethodInfo *method)
{
  struct PlayMakerFSM_array *motionFSM; // x8

  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    sub_1C22094(this, method);
  if ( motionFSM->max_length <= 1 )
    sub_1C2209C(this, method);
  return motionFSM->m_Items[1];
}


bool __fastcall BattleActorControl__get_IsAiNpc(BattleActorControl_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleSvtData; // x0

  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, method);
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
    sub_1C22094(this, method);
  return battleSvtData->fields.level;
}


int32_t __fastcall BattleActorControl__get_LimitImageIndex(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleSvtData; // x0
  int32_t SvtId; // w20
  const MethodInfo *v5; // x1
  int32_t LimitCount; // w19

  if ( (byte_4BDF3D2 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF3D2 = 1;
  }
  battleSvtData = this->fields.battleSvtData;
  if ( !battleSvtData )
    sub_1C22094(0LL, method);
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
    sub_1C22094(0LL, method);
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

  if ( (byte_4BDF3CE & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BDF3CE = 1;
  }
  v2 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v2,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v2 )
    sub_1C22094(v3, v4);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v2,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
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
    sub_1C22094(0LL, hideFlg);
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
    sub_1C22094(this, method);
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
  if ( (byte_4BDF3E8 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_13333/*"SummonEndFlag"*/);
    byte_4BDF3E8 = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1C22094(this, method);
  v4 = *(_QWORD *)&motionFSM->max_length;
  v5 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C2209C(this, method);
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
                                         (System_String_o *)StringLiteral_13333/*"SummonEndFlag"*/,
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall BattleActorControl__loadEvents(BattleActorControl_o *this, const MethodInfo *method)
{
  if ( !this->fields.battleSvtData )
    sub_1C22094(this, method);
}


void __fastcall BattleActorControl__loadTransformServant(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = BattleActorControl__colloadTransformServant(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v3, 0LL);
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
  PartyListViewItem_o *v9; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+4h] [xbp-7Ch] BYREF
  float v61; // [xsp+8h] [xbp-78h] BYREF
  float v62; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4BDF41A & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_moveStep__);
    sub_1C21E38(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_12506/*"STEP_START"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    sub_1C21E38(&StringLiteral_23976/*"step_back"*/);
    byte_4BDF41A = 1;
  }
  this->fields.targetObject = target;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_45012608(this, (System_String_o *)StringLiteral_23976/*"step_back"*/, 0, v36);
  v37 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    sub_1C22094(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)v38, v41, v42, v43, v44, v45, v46);
  v62 = hight;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_20279/*"hight"*/,
    v50,
    0LL);
  v61 = time;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61, v51, v52, v53);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_24360/*"time"*/,
    v54,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60, v55, v56, v57);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_22983/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12506/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
    v59);
}


void __fastcall BattleActorControl__motion_Cancel(BattleActorControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x19

  if ( (byte_4BDF41C & 1) == 0 )
  {
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF41C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
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
  PartyListViewItem_o *v9; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+4h] [xbp-7Ch] BYREF
  float v61; // [xsp+8h] [xbp-78h] BYREF
  float v62; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4BDF417 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_moveJump__);
    sub_1C21E38(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_8327/*"JUMP_UP"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_21339/*"jump"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    byte_4BDF417 = 1;
  }
  this->fields.targetObject = target;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_45012608(this, (System_String_o *)StringLiteral_21339/*"jump"*/, 0, v36);
  v37 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveJump__, 0LL);
  if ( !v37 )
    sub_1C22094(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)v38, v41, v42, v43, v44, v45, v46);
  v62 = hight;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_20279/*"hight"*/,
    v50,
    0LL);
  v61 = time;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61, v51, v52, v53);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_24360/*"time"*/,
    v54,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60, v55, v56, v57);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_22983/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_8327/*"JUMP_UP"*/,
    (BattleActorControl_EventClass_o *)v37,
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
  PartyListViewItem_o *v9; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+4h] [xbp-7Ch] BYREF
  float v61; // [xsp+8h] [xbp-78h] BYREF
  float v62; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4BDF419 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_moveStep__);
    sub_1C21E38(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_12506/*"STEP_START"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    sub_1C21E38(&StringLiteral_23977/*"step_front"*/);
    byte_4BDF419 = 1;
  }
  this->fields.targetObject = target;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_45012608(this, (System_String_o *)StringLiteral_23977/*"step_front"*/, 0, v36);
  v37 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    sub_1C22094(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)v38, v41, v42, v43, v44, v45, v46);
  v62 = hight;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_20279/*"hight"*/,
    v50,
    0LL);
  v61 = time;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61, v51, v52, v53);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_24360/*"time"*/,
    v54,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60, v55, v56, v57);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_22983/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12506/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
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
  PartyListViewItem_o *v9; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x3
  __int64 v36; // x21
  BattleActorControl_EndCallEvent_o *v37; // x22
  __int64 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  Il2CppObject *v49; // x0
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  Il2CppObject *v53; // x0
  __int64 v54; // x2
  __int64 v55; // x3
  __int64 v56; // x4
  Il2CppObject *v57; // x0
  const MethodInfo *v58; // x3
  __int64 v59; // x20
  BattleActorControl_EndCallEvent_o *v60; // x21
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  const MethodInfo *v67; // x3
  int32_t v69; // [xsp+4h] [xbp-7Ch] BYREF
  float v70; // [xsp+8h] [xbp-78h] BYREF
  float v71; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4BDF418 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_moveStep__);
    sub_1C21E38(&Method_BattleActorControl_playAnimation__);
    sub_1C21E38(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_12506/*"STEP_START"*/);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    sub_1C21E38(&StringLiteral_22383/*"name"*/);
    sub_1C21E38(&StringLiteral_23977/*"step_front"*/);
    sub_1C21E38(&StringLiteral_12505/*"STEP_END_02"*/);
    byte_4BDF418 = 1;
  }
  this->fields.targetObject = target;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  BattleActorControl__playAnimation_45012608(this, (System_String_o *)StringLiteral_23977/*"step_front"*/, 0, v35);
  v36 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v36, 0LL);
  v37 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v37, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v36 )
    goto LABEL_6;
  *(_QWORD *)(v36 + 16) = v37;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v36 + 16), (int64_t)v37, v40, v41, v42, v43, v44, v45);
  v71 = hight;
  v49 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v46, v47, v48);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_20279/*"hight"*/,
    v49,
    0LL);
  v70 = time;
  v53 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v70, v50, v51, v52);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_24360/*"time"*/,
    v53,
    0LL);
  v69 = pos;
  v57 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v69, v54, v55, v56);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v36,
    (System_String_o *)StringLiteral_22983/*"pos"*/,
    v57,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12506/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v36,
    v58);
  v59 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v59, 0LL);
  v60 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v60, (Il2CppObject *)this, Method_BattleActorControl_playAnimation__, 0LL);
  if ( !v59 )
LABEL_6:
    sub_1C22094(v38, v39);
  *(_QWORD *)(v59 + 16) = v60;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 16), (int64_t)v60, v61, v62, v63, v64, v65, v66);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v59,
    (System_String_o *)StringLiteral_22383/*"name"*/,
    (Il2CppObject *)StringLiteral_25041/*"wait"*/,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12505/*"STEP_END_02"*/,
    (BattleActorControl_EventClass_o *)v59,
    v67);
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
  PartyListViewItem_o *v9; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x3
  __int64 v37; // x21
  BattleActorControl_EndCallEvent_o *v38; // x22
  __int64 v39; // x0
  __int64 v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  __int64 v51; // x2
  __int64 v52; // x3
  __int64 v53; // x4
  Il2CppObject *v54; // x0
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  const MethodInfo *v59; // x3
  int32_t v60; // [xsp+4h] [xbp-7Ch] BYREF
  float v61; // [xsp+8h] [xbp-78h] BYREF
  float v62; // [xsp+Ch] [xbp-74h] BYREF

  if ( (byte_4BDF41B & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_moveStep__);
    sub_1C21E38(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24496/*"treasure_arms"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_12506/*"STEP_START"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    byte_4BDF41B = 1;
  }
  this->fields.targetObject = target;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.targetObject,
    (int64_t)target,
    *(int64_t *)&pos,
    (int32_t)pmevent,
    (System_String_o *)sendEventCallObject,
    (BattleSetupInfo_o *)sendEventCallMethod,
    (FollowerInfo_o *)method,
    v9);
  this->fields.endmotionevent = pmevent;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionevent,
    (int64_t)pmevent,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  this->fields.endmotionCallObject = sendEventCallObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallObject,
    (int64_t)sendEventCallObject,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.endmotionCallMethod = sendEventCallMethod;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endmotionCallMethod,
    (int64_t)sendEventCallMethod,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  BattleActorControl__playAnimation_45012608(this, (System_String_o *)StringLiteral_24496/*"treasure_arms"*/, 0, v36);
  v37 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v37, 0LL);
  v38 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v38, (Il2CppObject *)this, Method_BattleActorControl_moveStep__, 0LL);
  if ( !v37 )
    sub_1C22094(v39, v40);
  *(_QWORD *)(v37 + 16) = v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 16), (int64_t)v38, v41, v42, v43, v44, v45, v46);
  v62 = hight;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v62, v47, v48, v49);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_20279/*"hight"*/,
    v50,
    0LL);
  v61 = time;
  v54 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v61, v51, v52, v53);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_24360/*"time"*/,
    v54,
    0LL);
  v60 = pos;
  v58 = (Il2CppObject *)j_il2cpp_value_box_0(BattleActorControl_POS_TypeInfo, &v60, v55, v56, v57);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v37,
    (System_String_o *)StringLiteral_22983/*"pos"*/,
    v58,
    0LL);
  BattleActorControl__setAnimationEvent(
    this,
    (System_String_o *)StringLiteral_12506/*"STEP_START"*/,
    (BattleActorControl_EventClass_o *)v37,
    v59);
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

  if ( (byte_4BDF422 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF422 = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v5, 0LL);
  v27 = 0;
  v9 = j_il2cpp_value_box_0(int_TypeInfo, &v27, v6, v7, v8);
  if ( !v5 )
    sub_1C22094(v9, v10);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_25289/*"y"*/,
    v9,
    v5->klass->vtable._24_Clear.methodPtr);
  v26[0] = 1;
  v14 = j_il2cpp_value_box_0(bool_TypeInfo, v26, v11, v12, v13);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_21211/*"islocal"*/,
    v14,
    v5->klass->vtable._24_Clear.methodPtr);
  v25 = 0;
  v18 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v25, v15, v16, v17);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_19078/*"easetype"*/,
    v18,
    v5->klass->vtable._24_Clear.methodPtr);
  v24 = time;
  v22 = j_il2cpp_value_box_0(float_TypeInfo, &v24, v19, v20, v21);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v5->klass->vtable._23_Add.method)(
    v5,
    StringLiteral_24360/*"time"*/,
    v22,
    v5->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(actorObject, v5, 0LL);
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
  if ( (byte_4BDF41E & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    byte_4BDF41E = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_20279/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_24360/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22983/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v5) )
  {
LABEL_12:
    sub_1C22094(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1C22354(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v7, v8);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1C22354(v6);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6, float_TypeInfo, v9, v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = sub_1C22354(v3);
    goto LABEL_11;
  }
  v14 = *(float *)&this->klass;
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v12, v13);
  v17 = v4;
  LODWORD(v18) = klass;
  v19 = v14;
LABEL_11:
  BattleActorControl__moveJump_45091444(v17, *(float *)&v18, v19, v15, v16);
}


void __fastcall BattleActorControl__moveJump_45091444(
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
  BattleActorControl__moveUp_45090316(this, hight, time, v9);
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

  if ( (byte_4BDF41F & 1) == 0 )
  {
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22681/*"oncompleteparams"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_22984/*"position"*/);
    sub_1C21E38(&StringLiteral_19336/*"endMotion"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF41F = 1;
  }
  v13 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v13, 0LL);
  TargetObjectVec = BattleActorControl__getTargetObjectVec(this, pos, v14);
  v18 = j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &TargetObjectVec, v15, v16, v17);
  if ( !v13 )
    sub_1C22094(v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_22984/*"position"*/,
    v18,
    v13->klass->vtable._24_Clear.methodPtr);
  v32 = 1;
  v23 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v32, v20, v21, v22);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_19078/*"easetype"*/,
    v23,
    v13->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v27 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v24, v25, v26);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
    v13,
    StringLiteral_24360/*"time"*/,
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
        StringLiteral_22682/*"oncompletetarget"*/,
        callbackObject,
        v13->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22680/*"oncomplete"*/,
        callbackEvent,
        v13->klass->vtable._24_Clear.methodPtr);
    }
    else
    {
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22682/*"oncompletetarget"*/,
        gameObject,
        v13->klass->vtable._24_Clear.methodPtr);
      ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
        v13,
        StringLiteral_22680/*"oncomplete"*/,
        StringLiteral_19336/*"endMotion"*/,
        v13->klass->vtable._24_Clear.methodPtr);
    }
    ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, System_String_o *, Il2CppMethodPointer))v13->klass->vtable._23_Add.method)(
      v13,
      StringLiteral_22681/*"oncompleteparams"*/,
      endcall,
      v13->klass->vtable._24_Clear.methodPtr);
  }
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(v30, v13, 0LL);
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
  if ( (byte_4BDF41D & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_POS_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22983/*"pos"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    byte_4BDF41D = 1;
  }
  if ( !v3
    || (v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_20279/*"hight"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        v6 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
               v3,
               StringLiteral_24360/*"time"*/,
               *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                         v3,
                                         StringLiteral_22983/*"pos"*/,
                                         *(_QWORD *)(*(_QWORD *)v3 + 784LL)),
        !v5) )
  {
LABEL_12:
    sub_1C22094(this, table);
  }
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1C22354(v5);
    goto LABEL_14;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v7, v8);
  if ( !v6 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v6 + 64LL) != float_TypeInfo->_1.element_class )
  {
LABEL_14:
    sub_1C22354(v6);
    goto LABEL_15;
  }
  klass = (int)this->klass;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v6, float_TypeInfo, v9, v10);
  if ( !v3 )
    goto LABEL_12;
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) != BattleActorControl_POS_TypeInfo->_1.element_class )
  {
LABEL_15:
    v18 = sub_1C22354(v3);
    goto LABEL_11;
  }
  v14 = *(float *)&this->klass;
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v3, BattleActorControl_POS_TypeInfo, v12, v13);
  v17 = v4;
  LODWORD(v18) = klass;
  v19 = v14;
LABEL_11:
  BattleActorControl__moveStep_45089436(v17, *(float *)&v18, v19, v15, v16);
}


void __fastcall BattleActorControl__moveStep_45089436(
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
  BattleActorControl__moveUp_45090316(this, hight, time, v9);
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
  if ( (byte_4BDF420 & 1) == 0 )
  {
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_20279/*"hight"*/);
    byte_4BDF420 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  v5 = (*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
         v3,
         StringLiteral_20279/*"hight"*/,
         *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  this = (BattleActorControl_o *)(*(__int64 (__fastcall **)(void *, __int64, _QWORD))(*(_QWORD *)v3 + 776LL))(
                                   v3,
                                   StringLiteral_24360/*"time"*/,
                                   *(_QWORD *)(*(_QWORD *)v3 + 784LL));
  if ( !v5 )
    goto LABEL_9;
  if ( *(Il2CppClass **)(*(_QWORD *)v5 + 64LL) != float_TypeInfo->_1.element_class )
  {
    sub_1C22354(v5);
    goto LABEL_11;
  }
  v3 = this;
  this = (BattleActorControl_o *)j_il2cpp_object_unbox_0(v5, float_TypeInfo, v6, v7);
  if ( !v3 )
LABEL_9:
    sub_1C22094(this, table);
  if ( *(Il2CppClass **)(*(_QWORD *)v3 + 64LL) == float_TypeInfo->_1.element_class )
  {
    v10 = *(float *)&this->klass;
    v11 = *(float *)j_il2cpp_object_unbox_0(v3, float_TypeInfo, v8, v9);
    BattleActorControl__moveUp_45090316(v4, v10, v11, v12);
    return;
  }
LABEL_11:
  v15 = sub_1C22354(v3);
  BattleActorControl__moveDown(v13, *(float *)&v15, v14);
}


void __fastcall BattleActorControl__moveUp_45090316(
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

  if ( (byte_4BDF421 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&iTween_EaseType_TypeInfo);
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22681/*"oncompleteparams"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_25289/*"y"*/);
    sub_1C21E38(&StringLiteral_21211/*"islocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    sub_1C21E38(&StringLiteral_21905/*"moveDown"*/);
    sub_1C21E38(&iTween_TypeInfo);
    byte_4BDF421 = 1;
  }
  v7 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v7, 0LL);
  v35 = hight;
  v11 = j_il2cpp_value_box_0(float_TypeInfo, &v35, v8, v9, v10);
  if ( !v7 )
    sub_1C22094(v11, v12);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_25289/*"y"*/,
    v11,
    v7->klass->vtable._24_Clear.methodPtr);
  v34[0] = 1;
  v16 = j_il2cpp_value_box_0(bool_TypeInfo, v34, v13, v14, v15);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_21211/*"islocal"*/,
    v16,
    v7->klass->vtable._24_Clear.methodPtr);
  v33 = 1;
  v20 = j_il2cpp_value_box_0(iTween_EaseType_TypeInfo, &v33, v17, v18, v19);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_19078/*"easetype"*/,
    v20,
    v7->klass->vtable._24_Clear.methodPtr);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22682/*"oncompletetarget"*/,
    gameObject,
    v7->klass->vtable._24_Clear.methodPtr);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22680/*"oncomplete"*/,
    StringLiteral_21905/*"moveDown"*/,
    v7->klass->vtable._24_Clear.methodPtr);
  v32 = time;
  v25 = j_il2cpp_value_box_0(float_TypeInfo, &v32, v22, v23, v24);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_22681/*"oncompleteparams"*/,
    v25,
    v7->klass->vtable._24_Clear.methodPtr);
  v31 = time;
  v29 = j_il2cpp_value_box_0(float_TypeInfo, &v31, v26, v27, v28);
  ((void (__fastcall *)(System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v7->klass->vtable._23_Add.method)(
    v7,
    StringLiteral_24360/*"time"*/,
    v29,
    v7->klass->vtable._24_Clear.methodPtr);
  actorObject = this->fields.actorObject;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(actorObject, v7, 0LL);
}


void __fastcall BattleActorControl__offTouchEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  _BOOL8 IsNoTouchSkip; // x0
  __int64 v4; // x1
  struct BattlePerformance_o *performance; // x8
  BattlePerformanceStatus_o *statusPerf; // x20
  BattlePerformanceStatus_TouchEventDelegate_o *v7; // x21

  if ( (byte_4BDF43F & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_skipVoice__);
    sub_1C21E38(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4BDF43F = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C22084(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1C22094(IsNoTouchSkip, v4);
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
  if ( (byte_4BDF447 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_1C21E38(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4BDF447 = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v4 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 35),
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C22084(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v4) )
  {
    sub_1C22094(this, method);
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

  if ( (byte_4BDF43E & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_skipVoice__);
    sub_1C21E38(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4BDF43E = 1;
  }
  IsNoTouchSkip = BattleActorControl__IsNoTouchSkip(this, method);
  if ( !IsNoTouchSkip )
  {
    performance = this->fields.performance;
    if ( !performance
      || (statusPerf = performance->fields.statusPerf,
          v7 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C22084(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
          BattlePerformanceStatus_TouchEventDelegate___ctor(
            v7,
            (Il2CppObject *)this,
            Method_BattleActorControl_skipVoice__,
            0LL),
          !statusPerf) )
    {
      sub_1C22094(IsNoTouchSkip, v4);
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
  if ( (byte_4BDF446 & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_skipDead__);
    this = (BattleActorControl_o *)sub_1C21E38(&BattlePerformanceStatus_TouchEventDelegate_TypeInfo);
    byte_4BDF446 = 1;
  }
  monitor = v2[8].monitor;
  if ( !monitor
    || (v4 = (BattlePerformanceStatus_o *)*((_QWORD *)monitor + 35),
        v5 = (BattlePerformanceStatus_TouchEventDelegate_o *)sub_1C22084(BattlePerformanceStatus_TouchEventDelegate_TypeInfo),
        BattlePerformanceStatus_TouchEventDelegate___ctor(v5, v2, Method_BattleActorControl_skipDead__, 0LL),
        !v4) )
  {
    sub_1C22094(this, method);
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
  if ( (byte_4BDF40C & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_22383/*"name"*/);
    byte_4BDF40C = 1;
  }
  if ( !table )
    sub_1C22094(this, table);
  v5 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                            table,
                            StringLiteral_22383/*"name"*/,
                            table->klass->vtable._30_set_Item.methodPtr);
  if ( v5 && v5->klass != string_TypeInfo )
  {
    sub_1C22354(v5);
    BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(v7, v8, v9, v10);
  }
  else
  {
    BattleActorControl__playAnimation_45012608(v4, v5, 0, v6);
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

  if ( (byte_4BDF40E & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1899/*"@playAnim\n =>{0},{1}"*/);
    byte_4BDF40E = 1;
  }
  v7 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  v9 = (Il2CppObject *)BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v7, 1, v8);
  System_String__Format_63129848((System_String_o *)StringLiteral_1899/*"@playAnim\n =>{0},{1}"*/, v9, (Il2CppObject *)tag, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    sub_1C22094(0LL, v10);
  BattleFBXComponent__playAnimationFromTag(fbxcomponent, (System_String_o *)v9, tag, 0LL);
}


void __fastcall BattleActorControl__playAnimation_45012608(
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

  if ( (byte_4BDF40D & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&SimpleAnimation_State_TypeInfo);
    sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    sub_1C21E38(&StringLiteral_1898/*"@playAnim\n =>{0}"*/);
    byte_4BDF40D = 1;
  }
  v8 = BattleActorControl__CheckAnimationAndChangeSleepWaitIfNeeded(this, animname, 1, method);
  if ( !isDontOverwrite )
    v8 = BattleActorControl__CheckAnimationAndChangeCounterAttackWait(this, v8, 1, v7);
  System_String__Format((System_String_o *)StringLiteral_1898/*"@playAnim\n =>{0}"*/, (Il2CppObject *)v8, 0LL);
  fbxcomponent = this->fields.fbxcomponent;
  if ( !fbxcomponent )
    goto LABEL_33;
  BattleFBXComponent__playAnimation(fbxcomponent, v8, 0LL);
  if ( System_String__op_Equality(v8, (System_String_o *)StringLiteral_25041/*"wait"*/, 0LL) )
  {
    fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
    if ( !fbxcomponent )
      goto LABEL_33;
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)fbxcomponent,
                                   (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_Animation___);
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
        sub_1C22094(fbxcomponent, v9);
      }
    }
    else
    {
      fbxcomponent = (BattleFBXComponent_o *)this->fields.actorObject;
      if ( !fbxcomponent )
        goto LABEL_33;
      v16 = UnityEngine_GameObject__GetComponentInChildren_object_(
              (UnityEngine_GameObject_o *)fbxcomponent,
              (const MethodInfo_3000798 *)Method_UnityEngine_GameObject_GetComponentInChildren_SimpleAnimation___);
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
            v22 = sub_1C73E18(fbxcomponent, SimpleAnimation_State_TypeInfo, 14LL);
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

  if ( (byte_4BDF3F9 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_BattleActionData__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl_playBattleActionDataLocal__);
    sub_1C21E38(&Method_BattleCallBack_BattleActionData___ctor__);
    sub_1C21E38(&BattleCallBack_BattleActionData__TypeInfo);
    byte_4BDF3F9 = 1;
  }
  v5 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)badata);
  if ( !v5 )
    goto LABEL_8;
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v5, 0LL) )
  {
    v9 = BattleActorControl__get_CheckMotion(this, v7);
    v10 = (System_Action_object__o *)sub_1C22084(System_Action_BattleActionData__TypeInfo);
    System_Action_object____ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_playBattleActionDataLocal__, 0LL);
    v11 = (BattleCallBack_T__o *)sub_1C22084(BattleCallBack_BattleActionData__TypeInfo);
    BattleCallBack_object____ctor(
      v11,
      (Il2CppObject *)badata,
      (System_Action_T__o *)v10,
      (const MethodInfo_31D1350 *)Method_BattleCallBack_BattleActionData___ctor__);
    if ( v9 )
    {
      BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(v9, (BattleCallBackBase_o *)v11, 0LL);
      return;
    }
LABEL_8:
    sub_1C22094(v5, v6);
  }
  BattleActorControl__playBattleActionDataLocal(this, badata, v8);
}


void __fastcall BattleActorControl__playBattleActionDataLocal(
        BattleActorControl_o *this,
        BattleActionData_o *badata,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActionData_o **p_actiondata; // x20
  const MethodInfo *v11; // x2
  __int64 v12; // x1
  __int64 actiondata; // x0
  BattleActionData_ShiftServant_o *ShiftServant; // x22
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  const MethodInfo *v22; // x3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int32_t type; // w21
  BattleActionData_c *v28; // x0
  const MethodInfo *v29; // x2
  BattleActionData_o *v30; // x8
  System_String_o *motionname; // x1
  int32_t *p_motionId; // x0
  int32_t v33; // w21
  System_String_o *v34; // x0
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v36; // x3
  struct BattlePerformance_o *performance; // x8
  int v38; // w8
  __int64 v39; // x21
  unsigned int v40; // w23
  BattleServantData_o *v41; // x22
  struct BattleDeckServantData_o *deckSvt; // x8
  struct BattleDeckServantData_o *v43; // x8
  const MethodInfo *v44; // x2
  BattleActorControl_o *v45; // x22
  System_ValueTuple_int__string__o v46; // kr10_16
  const MethodInfo *v47; // x3
  BattleServantData_o *battleSvtData; // x0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+0h] [xbp-50h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF3FA & 1) == 0 )
  {
    sub_1C21E38(&BattleActionData_TypeInfo);
    sub_1C21E38(&BattleActorControl_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_TreasureDvcMaster___);
    sub_1C21E38(&Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&StringLiteral_8911/*"MOTION_FOLLOW_BACK_STEP"*/);
    sub_1C21E38(&StringLiteral_8894/*"MOTION_"*/);
    byte_4BDF3FA = 1;
  }
  p_actiondata = &this->fields.actiondata;
  source = 0LL;
  entity = 0LL;
  this->fields.actiondata = badata;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.actiondata,
    (int64_t)badata,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  BattleActorControl__setActionData(this, this->fields.actiondata, v11);
  actiondata = (__int64)this->fields.actiondata;
  if ( !actiondata )
    goto LABEL_61;
  ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)actiondata, 0LL);
  this->fields.myShiftData = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.myShiftData, 0LL, v15, v16, v17, v18, v19, v20);
  if ( ShiftServant && ShiftServant->fields.uniqueId == this->fields.uniqueID )
  {
    this->fields.myShiftData = ShiftServant;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.myShiftData,
      (int64_t)ShiftServant,
      v21,
      (int32_t)v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !badata )
    goto LABEL_61;
  if ( badata->fields.noOperation )
  {
    actiondata = (__int64)this->fields.performance;
    if ( actiondata )
    {
      BattlePerformance__endActionData((BattlePerformance_o *)actiondata, 0LL);
      return;
    }
    goto LABEL_61;
  }
  if ( !*p_actiondata )
    goto LABEL_61;
  type = (*p_actiondata)->fields.type;
  v28 = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    v28 = BattleActionData_TypeInfo;
  }
  if ( type == v28->static_fields->TYPE_TW )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_61;
  if ( BattleActionData__isCommandAttack((BattleActionData_o *)actiondata, 0LL) )
    goto LABEL_20;
  actiondata = (__int64)*p_actiondata;
  if ( !*p_actiondata )
    goto LABEL_61;
  if ( BattleActionData__isCommonEnemyAttack((BattleActionData_o *)actiondata, 0LL) )
LABEL_20:
    BattleActorControl__LoopEffectParticleSwitch(this, 0, 0, v22);
  actiondata = (__int64)this->fields.performance;
  if ( !actiondata
    || (actiondata = (__int64)BattlePerformance__get_MotionSkip((BattlePerformance_o *)actiondata, 0LL)) == 0
    || (actiondata = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)actiondata + 456LL))(
                       actiondata,
                       *(_QWORD *)(*(_QWORD *)actiondata + 464LL)),
        (v30 = *p_actiondata) == 0LL) )
  {
LABEL_61:
    sub_1C22094(actiondata, v12);
  }
  motionname = v30->fields.motionname;
  if ( motionname )
  {
    if ( !v30->fields.IsVanishSkill )
      goto LABEL_33;
  }
  else
  {
    p_motionId = &v30->fields.motionId;
    if ( !v30->fields.IsVanishSkill )
    {
      v34 = System_Int32__ToString((int32_t)p_motionId, 0LL);
      motionname = System_String__Concat_63115476((System_String_o *)StringLiteral_8894/*"MOTION_"*/, v34, 0LL);
LABEL_33:
      MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, motionname, v29);
      this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
      BattleActorControl__sendEventFSM_45066280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v36);
      goto LABEL_34;
    }
    v33 = *p_motionId;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
    motionname = BattleActorControl__MotionIdStr(v33, (const MethodInfo *)motionname);
  }
  BattleActorControl__SendMotionEventForVanishSkill(this, motionname, v29);
LABEL_34:
  actiondata = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !actiondata )
    goto LABEL_61;
  actiondata = (__int64)DataManager__GetMasterData_object_(
                          (DataManager_o *)actiondata,
                          (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_TreasureDvcMaster___);
  if ( !*p_actiondata || !actiondata )
    goto LABEL_61;
  if ( DataMasterBase_object__object__int___TryGetEntity(
         (DataMasterBase_TMaster__TEntity__PKType__o *)actiondata,
         &entity,
         (*p_actiondata)->fields.treasureDvcId,
         (const MethodInfo_325BE14 *)Method_DataMasterBase_TreasureDvcMaster__TreasureDvcEntity__int__TryGetEntity__) )
  {
    actiondata = (__int64)entity;
    if ( !entity )
      goto LABEL_61;
    actiondata = TreasureDvcEntity__TryGetWithBackStepNpcIds(
                   (TreasureDvcEntity_o *)entity,
                   (System_Int32_array **)&source,
                   0LL);
    if ( (actiondata & 1) != 0 )
    {
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_61;
      actiondata = (__int64)performance->fields.data;
      if ( !actiondata )
        goto LABEL_61;
      actiondata = (__int64)BattleData__getFieldServantList((BattleData_o *)actiondata, 0, 0LL);
      if ( !actiondata )
        goto LABEL_61;
      v38 = *(_DWORD *)(actiondata + 24);
      v39 = actiondata;
      if ( v38 >= 1 )
      {
        v40 = 0;
        do
        {
          if ( v40 >= v38 )
            sub_1C2209C(actiondata, v12);
          v41 = *(BattleServantData_o **)(v39 + 8LL * (int)v40 + 32);
          if ( !v41 )
            goto LABEL_61;
          deckSvt = v41->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_61;
          if ( deckSvt->fields.npcId )
          {
            if ( v41->fields.uniqueId != this->fields.uniqueID )
            {
              actiondata = BattleServantData__isAlive(v41, 0, 0LL);
              if ( (actiondata & 1) != 0 )
              {
                v43 = v41->fields.deckSvt;
                if ( !v43 )
                  goto LABEL_61;
                actiondata = System_Linq_Enumerable__Contains_int_(
                               source,
                               v43->fields.npcId,
                               (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
                if ( (actiondata & 1) != 0 )
                {
                  actiondata = (__int64)this->fields.performance;
                  if ( !actiondata )
                    goto LABEL_61;
                  actiondata = (__int64)BattlePerformance__getServantActor(
                                          (BattlePerformance_o *)actiondata,
                                          v41->fields.uniqueId,
                                          0LL);
                  if ( !actiondata )
                    goto LABEL_61;
                  v45 = (BattleActorControl_o *)actiondata;
                  v46 = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                          (BattleActorControl_o *)actiondata,
                          (System_String_o *)StringLiteral_8911/*"MOTION_FOLLOW_BACK_STEP"*/,
                          v44);
                  v45->fields.actindex = v46.fields.Item1;
                  BattleActorControl__sendEventFSM_45066280(v45, v46.fields.Item2, 0, v47);
                }
              }
            }
          }
          v38 = *(_DWORD *)(v39 + 24);
        }
        while ( (int)++v40 < v38 );
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4BDF40B & 1) == 0 )
  {
    sub_1C21E38(&Method_BattleActorControl_sendEventFSM__);
    sub_1C21E38(&BattleActorControl_EndCallEvent_TypeInfo);
    sub_1C21E38(&BattleActorControl_EventClass_TypeInfo);
    sub_1C21E38(&StringLiteral_1900/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/);
    sub_1C21E38(&StringLiteral_19439/*"event"*/);
    byte_4BDF40B = 1;
  }
  System_String__Format_63129916(
    (System_String_o *)StringLiteral_1900/*"@playCallAnimation\n =>{0}\n =>{1}\n =>{2}"*/,
    (Il2CppObject *)animname,
    (Il2CppObject *)endevent,
    (Il2CppObject *)starttag,
    0LL);
  v9 = sub_1C22084(BattleActorControl_EventClass_TypeInfo);
  BattleActorControl_EventClass___ctor((BattleActorControl_EventClass_o *)v9, 0LL);
  v10 = (BattleActorControl_EndCallEvent_o *)sub_1C22084(BattleActorControl_EndCallEvent_TypeInfo);
  BattleActorControl_EndCallEvent___ctor(v10, (Il2CppObject *)this, Method_BattleActorControl_sendEventFSM__, 0LL);
  if ( !v9 )
    sub_1C22094(v11, v12);
  *(_QWORD *)(v9 + 16) = v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)v10, v13, v14, v15, v16, v17, v18);
  BattleActorControl_EventClass__Add(
    (BattleActorControl_EventClass_o *)v9,
    (System_String_o *)StringLiteral_19439/*"event"*/,
    (Il2CppObject *)endevent,
    0LL);
  BattleActorControl__setAnimationComplete(this, animname, (BattleActorControl_EventClass_o *)v9, v19);
  if ( starttag )
    BattleActorControl__playAnimationFtag(this, animname, starttag, v20);
  else
    BattleActorControl__playAnimation_45012608(this, animname, 0, v20);
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
  BattleActorControl__sendEventFSM_45066280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v5);
}


void __fastcall BattleActorControl__playNoActionDataMotion(
        BattleActorControl_o *this,
        System_String_o *name,
        float afterWaitTime,
        const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v17; // x3

  v7 = BattleActorControl__get_CheckMotion(this, (const MethodInfo *)name);
  if ( !v7 )
    sub_1C22094(0LL, v8);
  v7->fields.afterWaitTime = afterWaitTime;
  this->fields.actiondata = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.actiondata, 0LL, v9, v10, v11, v12, v13, v14);
  MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(this, name, v15);
  this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
  BattleActorControl__sendEventFSM_45066280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 1, v17);
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
  if ( (byte_4BDF3F3 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
    sub_1C21E38(&StringLiteral_16471/*"_ENEMY"*/);
    byte_4BDF3F3 = 1;
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
          if ( !byte_4BD6BB1 )
          {
            result = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB1 = 1;
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
            if ( !byte_4BD6BB6 )
            {
              result = (UnityEngine_GameObject_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB6 = 1;
            }
            if ( v17 )
            {
              UnityEngine_Transform__set_localScale(
                (UnityEngine_Transform_o *)v17,
                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                0LL);
              result = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSeManager__get_Instance__);
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
                    if ( System_String__Equals_63123792(
                           (System_String_o *)result,
                           (System_String_o *)StringLiteral_16471/*"_ENEMY"*/,
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
                      UnityEngine_Transform__Rotate_70892436((UnityEngine_Transform_o *)result, 0.0, 180.0, 0.0, 0LL);
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
    sub_1C22094(result, effectname);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x19
  BattleActorControl_c *v25; // x0
  struct BattleActorControl_StaticFields *static_fields; // x0

  if ( (byte_4BDF401 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_TypeInfo);
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDF401 = 1;
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
    sub_1C22094(v11, v13);
  }
  v14 = 0;
LABEL_17:
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  v17 = BattleActorControl__playVoice_45076564(this, FileName, volume, callback, isSaveVoicePlayed, v16);
  if ( v14 )
  {
    v24 = (int64_t)v17;
    v25 = BattleActorControl_TypeInfo;
    if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
      v25 = BattleActorControl_TypeInfo;
    }
    static_fields = v25->static_fields;
    static_fields->prevDeadVoice = (struct SePlayer_o *)v24;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->prevDeadVoice, v24, v18, v19, v20, v21, v22, v23);
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

  if ( (byte_4BDF404 & 1) == 0 )
  {
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDF404 = 1;
  }
  if ( !Voice_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
  FileName = Voice__getFileName(type, 0LL);
  BattleActorControl__playVoiceNp_45077492(this, FileName, volume, callback, v10);
}


void __fastcall BattleActorControl__playVoiceNp_45077492(
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

  if ( (byte_4BDF405 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF405 = 1;
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
        sub_1C22094(battleSvtData, v9);
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

  if ( (byte_4BDF407 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF407 = 1;
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
      sub_1C22094(battleSvtData, fileName);
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


SePlayer_o *__fastcall BattleActorControl__playVoice_45076564(
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_String_array *v21; // x22
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

  if ( (byte_4BDF402 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    byte_4BDF402 = 1;
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
    isNoVoice = (BattleData_o *)sub_1C21EE0(string___TypeInfo, 1LL);
    if ( !isNoVoice )
      goto LABEL_26;
    v21 = (System_String_array *)isNoVoice;
    if ( !LODWORD(isNoVoice->fields.m_CancellationTokenSource) )
      sub_1C2209C(isNoVoice, v12);
    isNoVoice->fields.rootfsm = (struct PlayMakerFSM_o *)voiceTypeId;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&isNoVoice->fields.rootfsm,
      (int64_t)voiceTypeId,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    BattleActorControl__AddServantVoicePlayed(this, v21, v22);
  }
  myShiftData = this->fields.myShiftData;
  if ( !myShiftData )
  {
    isNoVoice = (BattleData_o *)this->fields.battleSvtData;
    if ( isNoVoice )
    {
      SvtId = BattleServantData__getSvtId((BattleServantData_o *)isNoVoice, 0LL);
      isNoVoice = (BattleData_o *)BattleActorControl__getLimitCount(this, v32);
      battleSvtData = this->fields.battleSvtData;
      if ( battleSvtData )
      {
        v34 = (int)isNoVoice;
        overwriteSvtVoiceId = battleSvtData->fields.overwriteSvtVoiceId;
        uniqueID = this->fields.uniqueID;
        if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
        v28 = SvtId;
        v29 = v34;
        v30 = overwriteSvtVoiceId;
        return ServantAssetLoadManager__playBattleVoice(v28, v29, v30, voiceTypeId, volume, callback, uniqueID, 0, 0LL);
      }
    }
LABEL_26:
    sub_1C22094(isNoVoice, v12);
  }
  v25 = myShiftData->fields.svtId;
  limit = myShiftData->fields.limit;
  v26 = myShiftData->fields.overwriteSvtVoiceId;
  uniqueID = this->fields.uniqueID;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
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
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_int__object__o *v6; // x20
  unsigned __int64 v7; // x23
  int32_t v8; // w21
  Il2CppObject *Item; // x22
  Il2CppObject *v10; // x21

  if ( (byte_4BDF450 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF450 = 1;
  }
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           auraList,
           (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
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
        sub_1C2209C(auraList, method);
      auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
      if ( !auraList )
        break;
      v8 = *(&v6->fields._count + v7);
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               auraList,
               v8,
               (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v10, 0LL);
      }
      LODWORD(entries) = v6->fields._entries;
      if ( (__int64)++v7 >= (int)entries )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C22094(auraList, method);
  }
LABEL_17:
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  System_Collections_Generic_Dictionary_int__object___Clear(
    auraList,
    (const MethodInfo_32B5BD4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Clear__);
}


void __fastcall BattleActorControl__resetAuraFlip(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *auraList; // x0
  Il2CppObject *currentValue; // x19
  Il2CppObject *Component_object; // x19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v6; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4BDF452 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4BDF452 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_19;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_19:
    sub_1C22094(auraList, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v6,
            (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
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
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
  if ( (byte_4BDF3E7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_13333/*"SummonEndFlag"*/);
    byte_4BDF3E7 = 1;
  }
  motionFSM = v2->fields.motionFSM;
  if ( !motionFSM )
LABEL_17:
    sub_1C22094(this, method);
  v4 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v4 >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)v4; ++i )
    {
      if ( i >= (unsigned int)v4 )
        sub_1C2209C(this, method);
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
                                         (System_String_o *)StringLiteral_13333/*"SummonEndFlag"*/,
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
    sub_1C22094(this, method);
  fbxcomponent->fields.timescale = resumetimescale;
}


void __fastcall BattleActorControl__sendDamageEvent(BattleActorControl_o *this, const MethodInfo *method)
{
  BattleActorControl_ActorMotionActiveCheck_o *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  System_ValueTuple_int__string__o MotionFsmIndexAndFixedMotionName; // kr00_16
  const MethodInfo *v7; // x3

  if ( (byte_4BDF3F8 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_8901/*"MOTION_DAMAGE"*/);
    byte_4BDF3F8 = 1;
  }
  v3 = BattleActorControl__get_CheckMotion(this, method);
  if ( !v3 )
    sub_1C22094(0LL, v4);
  if ( !BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(v3, 0LL) )
  {
    MotionFsmIndexAndFixedMotionName = BattleActorControl__GetMotionFsmIndexAndFixedMotionName(
                                         this,
                                         (System_String_o *)StringLiteral_8901/*"MOTION_DAMAGE"*/,
                                         v5);
    this->fields.actindex = MotionFsmIndexAndFixedMotionName.fields.Item1;
    BattleActorControl__sendEventFSM_45066280(this, MotionFsmIndexAndFixedMotionName.fields.Item2, 0, v7);
  }
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
  if ( (byte_4BDF3E9 & 1) == 0 )
  {
    sub_1C21E38(&string_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_19439/*"event"*/);
    byte_4BDF3E9 = 1;
  }
  if ( !table )
    sub_1C22094(this, table);
  v5 = (System_String_c **)((__int64 (__fastcall *)(System_Collections_Hashtable_o *, __int64, Il2CppMethodPointer))table->klass->vtable._29_get_Item.method)(
                             table,
                             StringLiteral_19439/*"event"*/,
                             table->klass->vtable._30_set_Item.methodPtr);
  v7 = (System_String_o *)v5;
  if ( v5 && *v5 != string_TypeInfo )
  {
    sub_1C22354(v5);
  }
  else
  {
    v8 = v4;
    v9 = v7;
    v10 = 0;
  }
  BattleActorControl__sendEventFSM_45066280(v8, v9, v10, v6);
}


void __fastcall BattleActorControl__sendEventFSM_45066280(
        BattleActorControl_o *this,
        System_String_o *name,
        bool isCallFinishInterrupt,
        const MethodInfo *method)
{
  __int64 Fsm; // x0
  const MethodInfo *v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x22
  int64_t v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x1
  __int64 actindex; // x8
  struct PlayMakerFSM_array *motionFSM; // x9
  Il2CppObject *v33; // x22
  Il2CppObject *ActiveStateName; // x0
  struct PlayMakerFSM_array *v35; // x8
  __int64 v36; // x9
  int max_length; // w10
  UnityEngine_Object_o *v38; // x22
  struct PlayMakerFSM_array *v39; // x8
  __int64 v40; // x9
  BattleActorControl_ActorMotionActiveCheck_o *v41; // x21
  struct PlayMakerFSM_array *v42; // x8
  __int64 v43; // x9

  if ( (byte_4BDF3F2 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_22947/*"pig"*/);
    sub_1C21E38(&StringLiteral_25110/*"weapon"*/);
    sub_1C21E38(&StringLiteral_1902/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/);
    sub_1C21E38(&StringLiteral_18478/*"common"*/);
    byte_4BDF3F2 = 1;
  }
  Fsm = sub_1C21EE0(string___TypeInfo, 3LL);
  if ( !Fsm )
    goto LABEL_30;
  v15 = Fsm;
  if ( !*(_DWORD *)(Fsm + 24) )
    goto LABEL_29;
  v16 = StringLiteral_25110/*"weapon"*/;
  *(_QWORD *)(Fsm + 32) = StringLiteral_25110/*"weapon"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(Fsm + 32), v16, v9, v10, v11, v12, v13, v14);
  if ( *(_DWORD *)(v15 + 24) <= 1u )
    goto LABEL_29;
  v23 = StringLiteral_18478/*"common"*/;
  *(_QWORD *)(v15 + 40) = StringLiteral_18478/*"common"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 40), v23, v17, v18, v19, v20, v21, v22);
  if ( *(_DWORD *)(v15 + 24) <= 2u )
    goto LABEL_29;
  v30 = StringLiteral_22947/*"pig"*/;
  *(_QWORD *)(v15 + 48) = StringLiteral_22947/*"pig"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 48), v30, v24, v25, v26, v27, v28, v29);
  actindex = this->fields.actindex;
  if ( (unsigned int)actindex >= *(_DWORD *)(v15 + 24) )
    goto LABEL_29;
  motionFSM = this->fields.motionFSM;
  if ( !motionFSM )
    goto LABEL_30;
  if ( (unsigned int)actindex >= motionFSM->max_length )
    goto LABEL_29;
  Fsm = (__int64)motionFSM->m_Items[actindex];
  if ( !Fsm )
    goto LABEL_30;
  v33 = *(Il2CppObject **)(v15 + 8 * actindex + 32);
  ActiveStateName = (Il2CppObject *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)Fsm, 0LL);
  Fsm = (__int64)System_String__Format_63129916(
                   (System_String_o *)StringLiteral_1902/*"@sendEvent[{0}]\n =>{1}\n <={2}"*/,
                   v33,
                   (Il2CppObject *)name,
                   ActiveStateName,
                   0LL);
  v35 = this->fields.motionFSM;
  if ( v35 )
  {
    v36 = this->fields.actindex;
    max_length = v35->max_length;
    if ( (int)v36 < max_length )
    {
      if ( (unsigned int)v36 >= max_length )
        goto LABEL_29;
      v38 = (UnityEngine_Object_o *)v35->m_Items[v36];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Fsm = UnityEngine_Object__op_Inequality(v38, 0LL, 0LL);
      if ( (Fsm & 1) != 0 )
      {
        if ( isCallFinishInterrupt )
        {
          Fsm = (__int64)BattleActorControl__get_CheckMotion(this, v8);
          v39 = this->fields.motionFSM;
          if ( !v39 )
            goto LABEL_30;
          v40 = this->fields.actindex;
          if ( (unsigned int)v40 >= v39->max_length )
            goto LABEL_29;
          v41 = (BattleActorControl_ActorMotionActiveCheck_o *)Fsm;
          Fsm = (__int64)v39->m_Items[v40];
          if ( !Fsm )
            goto LABEL_30;
          Fsm = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)Fsm, 0LL);
          if ( !Fsm )
            goto LABEL_30;
          Fsm = (__int64)HutongGames_PlayMaker_Fsm__get_GameObjectName((HutongGames_PlayMaker_Fsm_o *)Fsm, 0LL);
          if ( !v41 )
            goto LABEL_30;
          BattleActorControl_ActorMotionActiveCheck__activeFSM(v41, (System_String_o *)Fsm, 0LL);
        }
        v42 = this->fields.motionFSM;
        if ( !v42 )
          goto LABEL_30;
        v43 = this->fields.actindex;
        if ( (unsigned int)v43 < v42->max_length )
        {
          Fsm = (__int64)v42->m_Items[v43];
          if ( Fsm )
          {
            PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Fsm, name, 0LL);
            return;
          }
LABEL_30:
          sub_1C22094(Fsm, v8);
        }
LABEL_29:
        sub_1C2209C(Fsm, v8);
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
  BattleActorControl__sendEventFSM_45066280(
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
  if ( (byte_4BDF3E4 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_4966/*"Count_Action"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_4967/*"Count_Hit"*/);
    byte_4BDF3E4 = 1;
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
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4966/*"Count_Action"*/,
                                   0LL);
  if ( !actiondata )
    goto LABEL_69;
  v6 = this;
  this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
  if ( !v6 )
    goto LABEL_69;
  LODWORD(v6->fields.shadowObj) = (_DWORD)this;
  v7 = v4->fields.motionFSM;
  if ( !v7 )
    goto LABEL_69;
  if ( !v7->max_length )
    goto LABEL_70;
  this = (BattleActorControl_o *)v7->m_Items[0];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4967/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_69;
  LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
  v8 = v4->fields.motionFSM;
  if ( !v8 )
    goto LABEL_69;
  if ( v8->max_length <= 1 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v8->m_Items[1];
  if ( !this
    || (this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL)) == 0LL
    || (this = (BattleActorControl_o *)this->fields.nodeText) == 0LL )
  {
LABEL_69:
    sub_1C22094(this, actiondata);
  }
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4966/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
    v9 = v4->fields.motionFSM;
    if ( !v9 )
      goto LABEL_69;
    if ( v9->max_length <= 1 )
      goto LABEL_70;
    this = (BattleActorControl_o *)v9->m_Items[1];
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_69;
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
               (HutongGames_PlayMaker_FsmVariables_o *)this,
               (System_String_o *)StringLiteral_4966/*"Count_Action"*/,
               0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !FsmInt )
      goto LABEL_69;
    FsmInt->fields.value = (int)this;
  }
  v11 = v4->fields.motionFSM;
  if ( !v11 )
    goto LABEL_69;
  if ( v11->max_length <= 1 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v11->m_Items[1];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4967/*"Count_Hit"*/,
                                   0LL);
  if ( this )
  {
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_69;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_4967/*"Count_Hit"*/,
                                     0LL);
    if ( !this )
      goto LABEL_69;
    LODWORD(this->fields.shadowObj) = actiondata->fields.attackcount;
  }
  v13 = v4->fields.motionFSM;
  if ( !v13 )
    goto LABEL_69;
  if ( v13->max_length <= 2 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v13->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4966/*"Count_Action"*/,
                                   0LL);
  if ( this )
  {
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_69;
    v15 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(
            (HutongGames_PlayMaker_FsmVariables_o *)this,
            (System_String_o *)StringLiteral_4966/*"Count_Action"*/,
            0LL);
    this = (BattleActorControl_o *)BattleActionData__getCountActionForPerformance(actiondata, 0LL);
    if ( !v15 )
      goto LABEL_69;
    v15->fields.value = (int)this;
  }
  v16 = v4->fields.motionFSM;
  if ( !v16 )
    goto LABEL_69;
  if ( v16->max_length <= 2 )
LABEL_70:
    sub_1C2209C(this, actiondata);
  this = (BattleActorControl_o *)v16->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4967/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    return;
  v17 = v4->fields.motionFSM;
  if ( !v17 )
    goto LABEL_69;
  if ( v17->max_length <= 2 )
    goto LABEL_70;
  this = (BattleActorControl_o *)v17->m_Items[2];
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_69;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmInt(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4967/*"Count_Hit"*/,
                                   0LL);
  if ( !this )
    goto LABEL_69;
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
    sub_1C22094(this, 0LL);
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
    sub_1C22094(CompleteList, name);
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
    sub_1C22094(EventList, name);
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

  if ( (byte_4BDF451 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
    byte_4BDF451 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList )
    goto LABEL_20;
  if ( !System_Collections_Generic_Dictionary_int__object___get_Count(
          auraList,
          (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__) )
    return;
  auraList = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.auraList;
  if ( !auraList
    || (auraList = (System_Collections_Generic_Dictionary_int__object__o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                                                             auraList,
                                                                             (const MethodInfo_32B585C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Values__)) == 0LL )
  {
LABEL_20:
    sub_1C22094(auraList, flg);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)auraList,
    (const MethodInfo_397E064 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__GameObject__GetEnumerator__);
  if ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
         &v9,
         (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) )
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
                             (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
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
              (const MethodInfo_34054B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__GameObject__MoveNext__) );
  }
}


void __fastcall BattleActorControl__setCamera(
        BattleActorControl_o *this,
        UnityEngine_Camera_o *camera,
        const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v6; // x1
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4BDF3DF & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    byte_4BDF3DF = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (gameObject = (char *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)gameObject,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___)) == 0LL )
  {
    sub_1C22094(gameObject, v6);
  }
  *((_QWORD *)gameObject + 4) = camera;
  sub_1C21DDC((PartyOrganizationUtility_o *)(gameObject + 32), (int64_t)camera, v7, v8, v9, v10, v11, v12);
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

  if ( (byte_4BDF3F4 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF3F4 = 1;
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
    sub_1C22094(gameObject, v6);
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
    sub_1C22094(actorObject, method);
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
    sub_1C22094(actorObject, method);
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
    sub_1C22094(actorObject, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.enemyStage = obj;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.enemyStage, (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
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
  ConstantMaster_o *Master_object; // x0
  __int64 v4; // x1
  struct PlayMakerFSM_array *motionFSM; // x8
  int v6; // w20
  __int64 v7; // x24
  unsigned __int64 max_length; // x9
  unsigned __int64 v9; // x25
  UnityEngine_Object_o *v10; // x21
  struct PlayMakerFSM_array *v11; // x8
  struct PlayMakerFSM_array *v12; // x8

  if ( (byte_4BDF3E3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_8587/*"LimitedPeriod"*/);
    sub_1C21E38(&StringLiteral_8417/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/);
    byte_4BDF3E3 = 1;
  }
  if ( this->fields.motionFSM )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ConstantMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ConstantMaster___);
    if ( !Master_object
      || (Master_object = (ConstantMaster_o *)ConstantMaster__GetValue(
                                                Master_object,
                                                (System_String_o *)StringLiteral_8417/*"LIMITED_PERIOD_VOICE_CHANGE_TYPE"*/,
                                                0LL),
          (motionFSM = this->fields.motionFSM) == 0LL) )
    {
LABEL_28:
      sub_1C22094(Master_object, v4);
    }
    v6 = (int)Master_object;
    v7 = 4LL;
    while ( 1 )
    {
      max_length = motionFSM->max_length;
      v9 = v7 - 4;
      if ( v7 - 4 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_30;
      v10 = (UnityEngine_Object_o *)*((_QWORD *)&motionFSM->obj.klass + v7);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ConstantMaster_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        v11 = this->fields.motionFSM;
        if ( !v11 )
          goto LABEL_28;
        if ( v9 >= v11->max_length )
          goto LABEL_30;
        Master_object = (ConstantMaster_o *)*((_QWORD *)&v11->obj.klass + v7);
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
                                              (System_String_o *)StringLiteral_8587/*"LimitedPeriod"*/,
                                              0LL);
        if ( Master_object )
        {
          v12 = this->fields.motionFSM;
          if ( !v12 )
            goto LABEL_28;
          if ( v9 >= v12->max_length )
LABEL_30:
            sub_1C2209C(Master_object, v4);
          Master_object = (ConstantMaster_o *)*((_QWORD *)&v12->obj.klass + v7);
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
                                                (System_String_o *)StringLiteral_8587/*"LimitedPeriod"*/,
                                                0LL);
          if ( !Master_object )
            goto LABEL_28;
          LODWORD(Master_object->fields.seriazlier) = v6;
        }
      }
      motionFSM = this->fields.motionFSM;
      ++v7;
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
  struct PlayMakerFSM_array *v13; // x0
  struct PlayMakerFSM_array **p_motionFSM; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 gameObject; // x0
  __int64 v22; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x25
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x24
  UnityEngine_GameObject_o *v27; // x26
  int32_t v28; // w27
  int32_t WeaponGroup; // w28
  UnityEngine_GameObject_o *v30; // x27
  struct PlayMakerFSM_array *v31; // x26
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x27
  struct PlayMakerFSM_array *v39; // x26
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x25
  struct PlayMakerFSM_array *v47; // x25
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x24
  unsigned __int64 v55; // x28
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v57; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v59; // x8
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct PlayMakerFSM_array *v66; // x8
  struct PlayMakerFSM_array *v67; // x8
  struct PlayMakerFSM_array *v68; // x8
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct PlayMakerFSM_array *v75; // x8
  struct PlayMakerFSM_array *v76; // x8
  char v77; // w25
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v80; // x8
  struct BattlePerformance_o *v81; // x8
  float v82; // s0
  struct PlayMakerFSM_array *v83; // x8
  struct BattlePerformance_o *v84; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v86; // x0
  __int64 v87; // x1
  struct PlayMakerFSM_array *v88; // x8
  PlayMakerFSM_o *v89; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v93; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v96; // x1
  struct PlayMakerFSM_array *v97; // x8
  PlayMakerFSM_o *v98; // x0
  HutongGames_PlayMaker_Fsm_o *v99; // x0
  __int64 v100; // x1
  HutongGames_PlayMaker_FsmVariables_o *v101; // x0
  HutongGames_PlayMaker_FsmInt_o *v102; // x0
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v107; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v108; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BDF3E2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C21E38(&PlayMakerFSM___TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13817/*"TargetFrontPos"*/);
    sub_1C21E38(&StringLiteral_13816/*"TargetBackPos"*/);
    sub_1C21E38(&StringLiteral_4070/*"Camera"*/);
    sub_1C21E38(&StringLiteral_2274/*"ActorObject"*/);
    sub_1C21E38(&StringLiteral_16471/*"_ENEMY"*/);
    sub_1C21E38(&StringLiteral_4076/*"CameraFsm"*/);
    sub_1C21E38(&StringLiteral_10806/*"Performance"*/);
    sub_1C21E38(&StringLiteral_2275/*"ActorSide"*/);
    byte_4BDF3E2 = 1;
  }
  memset(&v108, 0, sizeof(v108));
  v13 = (struct PlayMakerFSM_array *)sub_1C21EE0(PlayMakerFSM___TypeInfo, 3LL);
  this->fields.motionFSM = v13;
  p_motionFSM = &this->fields.motionFSM;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.motionFSM, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_111;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonMotionPrefab, transform, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_111;
  v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  v26 = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, commonPigMotionPrefab, v25, 0LL, 0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_111;
  v27 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_111;
  v28 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v27, v28, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_111;
  v30 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v31 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v30,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v31 )
    goto LABEL_111;
  v38 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v31->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_126;
  }
  if ( !v31->max_length )
    goto LABEL_112;
  v31->m_Items[0] = (PlayMakerFSM_o *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)v31->m_Items, v38, v32, v33, v34, v35, v36, v37);
  if ( !Object )
    goto LABEL_111;
  v39 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v39 )
    goto LABEL_111;
  v46 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v39->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_126;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_112;
  v39->m_Items[1] = (PlayMakerFSM_o *)v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v39->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  if ( !v26 )
    goto LABEL_111;
  v47 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v26,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v47 )
    goto LABEL_111;
  v54 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v47->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_126:
      v106 = sub_1C220B8(gameObject);
      sub_1C21F60(v106, 0LL);
    }
  }
  if ( v47->max_length <= 2 )
LABEL_112:
    sub_1C2209C(gameObject, v22);
  v47->m_Items[2] = (PlayMakerFSM_o *)v54;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[2], v54, v48, v49, v50, v51, v52, v53);
  v55 = 0LL;
  p_actorside = &this->fields.actorside;
  do
  {
    v57 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_111;
    if ( v55 >= v57->max_length )
      goto LABEL_112;
    gameObject = (__int64)v57->m_Items[v55];
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_111;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2274/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_111;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v59 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_111;
    if ( v55 >= v59->max_length )
      goto LABEL_112;
    gameObject = (__int64)v59->m_Items[v55];
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2275/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_111;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1C21DDC((PartyOrganizationUtility_o *)(gameObject + 56), (int64_t)side, v60, v61, v62, v63, v64, v65);
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_111;
    if ( v55 >= v66->max_length )
      goto LABEL_112;
    gameObject = (__int64)v66->m_Items[v55];
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4070/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_111;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v67 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_111;
    if ( v55 >= v67->max_length )
      goto LABEL_112;
    gameObject = (__int64)v67->m_Items[v55];
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4076/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_111;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v68 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_111;
    if ( v55 >= v68->max_length )
      goto LABEL_112;
    gameObject = (__int64)v68->m_Items[v55];
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10806/*"Performance"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_111;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, 0LL, 0LL);
    *p_actorside = side;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.actorside, (int64_t)side, v69, v70, v71, v72, v73, v74);
    v75 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_111;
    if ( v55 >= v75->max_length )
      goto LABEL_112;
    gameObject = (__int64)v75->m_Items[v55];
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_111;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13817/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_111;
      gameObject = System_String__Equals_63123792(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16471/*"_ENEMY"*/,
                     0LL);
      v76 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_111;
      if ( v55 >= v76->max_length )
        goto LABEL_112;
      v77 = gameObject;
      gameObject = (__int64)v76->m_Items[v55];
      if ( !gameObject )
        goto LABEL_111;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_111;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_111;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13817/*"TargetFrontPos"*/,
                              0LL);
      performance = this->fields.performance;
      if ( !performance )
        goto LABEL_111;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v77 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_111;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v80 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_111;
        if ( v55 >= v80->max_length )
          goto LABEL_112;
        gameObject = (__int64)v80->m_Items[v55];
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13816/*"TargetBackPos"*/,
                                0LL);
        v81 = this->fields.performance;
        if ( !v81 || !gameObject )
          goto LABEL_111;
        v82 = v81->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_111;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v83 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_111;
        if ( v55 >= v83->max_length )
          goto LABEL_112;
        gameObject = (__int64)v83->m_Items[v55];
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_111;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_111;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13816/*"TargetBackPos"*/,
                                0LL);
        v84 = this->fields.performance;
        if ( !v84 || !gameObject )
          goto LABEL_111;
        v82 = -v84->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v82;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    ++v55;
  }
  while ( v55 != 3 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_111;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_111:
    sub_1C22094(gameObject, v22);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v107,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v108 = v107;
  while ( 1 )
  {
    v86 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v108,
            (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v86 )
      break;
    v88 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1C22094(v86, v87);
    if ( !v88->max_length )
      sub_1C2209C(v86, v87);
    v89 = v88->m_Items[0];
    if ( !v89 )
      sub_1C22094(0LL, v87);
    key = v108.fields._current.fields.key;
    value = v108.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v89, 0LL);
    if ( !Fsm )
      sub_1C22094(0LL, v93);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1C22094(0LL, v93);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v97 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1C22094(FsmInt, v96);
      if ( !v97->max_length )
        sub_1C2209C(FsmInt, v96);
      v98 = v97->m_Items[0];
      if ( !v98 )
        sub_1C22094(0LL, v96);
      v99 = PlayMakerFSM__get_Fsm(v98, 0LL);
      if ( !v99 )
        sub_1C22094(0LL, v100);
      v101 = v99->fields.variables;
      if ( !v101 )
        sub_1C22094(0LL, v100);
      v102 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v101, (System_String_o *)key, 0LL);
      if ( !v102 )
        sub_1C22094(0LL, v103);
      if ( !value )
        goto LABEL_119;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1C22354(value);
LABEL_119:
        sub_1C22094(v102, v103);
      }
      v102->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v104, v105);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v108,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 gameObject; // x0
  __int64 v18; // x1
  struct BattlePerformance_o *performance; // x8
  UnityEngine_GameObject_o *CommonMotionPrefab_k__BackingField; // x24
  UnityEngine_Transform_o *transform; // x0
  struct BattlePerformance_o *v22; // x8
  UnityEngine_GameObject_o *CommonPigMotionPrefab_k__BackingField; // x24
  UnityEngine_GameObject_o *v24; // x25
  UnityEngine_Transform_o *v25; // x0
  UnityEngine_GameObject_o *Object; // x24
  UnityEngine_GameObject_o *v27; // x26
  int32_t v28; // w27
  int32_t WeaponGroup; // w28
  UnityEngine_GameObject_o *v30; // x27
  struct PlayMakerFSM_array *v31; // x26
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x27
  struct PlayMakerFSM_array *v39; // x26
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x25
  struct PlayMakerFSM_array *v47; // x25
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x24
  unsigned __int64 v55; // x28
  struct System_String_o **p_actorside; // x24
  struct PlayMakerFSM_array *v57; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x25
  struct PlayMakerFSM_array *v59; // x8
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct PlayMakerFSM_array *v66; // x8
  struct PlayMakerFSM_array *v67; // x8
  struct PlayMakerFSM_array *v68; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v69; // x25
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct PlayMakerFSM_array *v76; // x8
  struct PlayMakerFSM_array *v77; // x8
  char v78; // w25
  struct BattlePerformance_o *v79; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v81; // x8
  struct BattlePerformance_o *v82; // x8
  float v83; // s0
  struct PlayMakerFSM_array *v84; // x8
  struct BattlePerformance_o *v85; // x8
  System_String_o *StrParam; // x21
  _BOOL8 v87; // x0
  __int64 v88; // x1
  struct PlayMakerFSM_array *v89; // x8
  PlayMakerFSM_o *v90; // x0
  Il2CppObject *value; // x21
  Il2CppObject *key; // x22
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v94; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v97; // x1
  struct PlayMakerFSM_array *v98; // x8
  PlayMakerFSM_o *v99; // x0
  HutongGames_PlayMaker_Fsm_o *v100; // x0
  __int64 v101; // x1
  HutongGames_PlayMaker_FsmVariables_o *v102; // x0
  HutongGames_PlayMaker_FsmInt_o *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x3
  const MethodInfo *v107; // x1
  struct System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  const MethodInfo *v115; // x1
  __int64 v116; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v117; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v118; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4BDF3E0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C21E38(&PlayMakerFSM___TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13817/*"TargetFrontPos"*/);
    sub_1C21E38(&StringLiteral_13816/*"TargetBackPos"*/);
    sub_1C21E38(&StringLiteral_4070/*"Camera"*/);
    sub_1C21E38(&StringLiteral_2274/*"ActorObject"*/);
    sub_1C21E38(&StringLiteral_16471/*"_ENEMY"*/);
    sub_1C21E38(&StringLiteral_4076/*"CameraFsm"*/);
    sub_1C21E38(&StringLiteral_10806/*"Performance"*/);
    sub_1C21E38(&StringLiteral_2275/*"ActorSide"*/);
    byte_4BDF3E0 = 1;
  }
  memset(&v118, 0, sizeof(v118));
  v9 = (struct PlayMakerFSM_array *)sub_1C21EE0(PlayMakerFSM___TypeInfo, 3LL);
  this->fields.motionFSM = v9;
  p_motionFSM = &this->fields.motionFSM;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.motionFSM, (int64_t)v9, v11, v12, v13, v14, v15, v16);
  performance = this->fields.performance;
  if ( !performance )
    goto LABEL_114;
  CommonMotionPrefab_k__BackingField = performance->fields._CommonMotionPrefab_k__BackingField;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  gameObject = (__int64)BaseMonoBehaviour__createObject(
                          (BaseMonoBehaviour_o *)this,
                          CommonMotionPrefab_k__BackingField,
                          transform,
                          0LL,
                          0LL);
  v22 = this->fields.performance;
  if ( !v22 )
    goto LABEL_114;
  CommonPigMotionPrefab_k__BackingField = v22->fields._CommonPigMotionPrefab_k__BackingField;
  v24 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  v25 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
  Object = BaseMonoBehaviour__createObject(
             (BaseMonoBehaviour_o *)this,
             CommonPigMotionPrefab_k__BackingField,
             v25,
             0LL,
             0LL);
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_114;
  v27 = (UnityEngine_GameObject_o *)gameObject;
  gameObject = BattleServantData__getSvtId(this->fields.battleSvtData, 0LL);
  if ( !this->fields.battleSvtData )
    goto LABEL_114;
  v28 = gameObject;
  WeaponGroup = BattleServantData__getWeaponGroup(this->fields.battleSvtData, 0, 0LL);
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  gameObject = (__int64)ServantAssetLoadManager__loadActorMotion(v27, v28, WeaponGroup, 0LL);
  if ( !gameObject )
    goto LABEL_114;
  v30 = (UnityEngine_GameObject_o *)gameObject;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  v31 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v30,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v31 )
    goto LABEL_114;
  v38 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v31->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_129;
  }
  if ( !v31->max_length )
    goto LABEL_115;
  v31->m_Items[0] = (PlayMakerFSM_o *)v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)v31->m_Items, v38, v32, v33, v34, v35, v36, v37);
  if ( !v24 )
    goto LABEL_114;
  v39 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          v24,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v39 )
    goto LABEL_114;
  v46 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v39->obj.klass->_1.element_class);
    if ( !gameObject )
      goto LABEL_129;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_115;
  v39->m_Items[1] = (PlayMakerFSM_o *)v46;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v39->m_Items[1], v46, v40, v41, v42, v43, v44, v45);
  if ( !Object )
    goto LABEL_114;
  v47 = *p_motionFSM;
  gameObject = (__int64)UnityEngine_GameObject__GetComponent_object_(
                          Object,
                          (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v47 )
    goto LABEL_114;
  v54 = gameObject;
  if ( gameObject )
  {
    gameObject = sub_1C21F74(gameObject, v47->obj.klass->_1.element_class);
    if ( !gameObject )
    {
LABEL_129:
      v116 = sub_1C220B8(gameObject);
      sub_1C21F60(v116, 0LL);
    }
  }
  if ( v47->max_length <= 2 )
LABEL_115:
    sub_1C2209C(gameObject, v18);
  v47->m_Items[2] = (PlayMakerFSM_o *)v54;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v47->m_Items[2], v54, v48, v49, v50, v51, v52, v53);
  v55 = 0LL;
  p_actorside = &this->fields.actorside;
  do
  {
    v57 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_114;
    if ( v55 >= v57->max_length )
      goto LABEL_115;
    gameObject = (__int64)v57->m_Items[v55];
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_114;
    FsmGameObject = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                      (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                      (System_String_o *)StringLiteral_2274/*"ActorObject"*/,
                      0LL);
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !FsmGameObject )
      goto LABEL_114;
    HutongGames_PlayMaker_FsmGameObject__set_Value(FsmGameObject, (UnityEngine_GameObject_o *)gameObject, 0LL);
    v59 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_114;
    if ( v55 >= v59->max_length )
      goto LABEL_115;
    gameObject = (__int64)v59->m_Items[v55];
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmString(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_2275/*"ActorSide"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_114;
    *(_QWORD *)(gameObject + 56) = side;
    sub_1C21DDC((PartyOrganizationUtility_o *)(gameObject + 56), (int64_t)side, v60, v61, v62, v63, v64, v65);
    v66 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_114;
    if ( v55 >= v66->max_length )
      goto LABEL_115;
    gameObject = (__int64)v66->m_Items[v55];
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4070/*"Camera"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_114;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camera, 0LL);
    v67 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_114;
    if ( v55 >= v67->max_length )
      goto LABEL_115;
    gameObject = (__int64)v67->m_Items[v55];
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_4076/*"CameraFsm"*/,
                            0LL);
    if ( !gameObject )
      goto LABEL_114;
    HutongGames_PlayMaker_FsmGameObject__set_Value((HutongGames_PlayMaker_FsmGameObject_o *)gameObject, camerafsm, 0LL);
    v68 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_114;
    if ( v55 >= v68->max_length )
      goto LABEL_115;
    gameObject = (__int64)v68->m_Items[v55];
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_10806/*"Performance"*/,
                            0LL);
    if ( !this->fields.performance )
      goto LABEL_114;
    v69 = (HutongGames_PlayMaker_FsmGameObject_o *)gameObject;
    gameObject = (__int64)UnityEngine_Component__get_gameObject(
                            (UnityEngine_Component_o *)this->fields.performance,
                            0LL);
    if ( !v69 )
      goto LABEL_114;
    HutongGames_PlayMaker_FsmGameObject__set_Value(v69, (UnityEngine_GameObject_o *)gameObject, 0LL);
    *p_actorside = side;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.actorside, (int64_t)side, v70, v71, v72, v73, v74, v75);
    v76 = *p_motionFSM;
    if ( !*p_motionFSM )
      goto LABEL_114;
    if ( v55 >= v76->max_length )
      goto LABEL_115;
    gameObject = (__int64)v76->m_Items[v55];
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = *(_QWORD *)(gameObject + 88);
    if ( !gameObject )
      goto LABEL_114;
    gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                            (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                            (System_String_o *)StringLiteral_13817/*"TargetFrontPos"*/,
                            0LL);
    if ( gameObject )
    {
      gameObject = (__int64)*p_actorside;
      if ( !*p_actorside )
        goto LABEL_114;
      gameObject = System_String__Equals_63123792(
                     (System_String_o *)gameObject,
                     (System_String_o *)StringLiteral_16471/*"_ENEMY"*/,
                     0LL);
      v77 = *p_motionFSM;
      if ( !*p_motionFSM )
        goto LABEL_114;
      if ( v55 >= v77->max_length )
        goto LABEL_115;
      v78 = gameObject;
      gameObject = (__int64)v77->m_Items[v55];
      if ( !gameObject )
        goto LABEL_114;
      gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_114;
      gameObject = *(_QWORD *)(gameObject + 88);
      if ( !gameObject )
        goto LABEL_114;
      gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                              (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                              (System_String_o *)StringLiteral_13817/*"TargetFrontPos"*/,
                              0LL);
      v79 = this->fields.performance;
      if ( !v79 )
        goto LABEL_114;
      distanceofactor = v79->fields.distanceofactor;
      if ( (v78 & 1) != 0 )
      {
        if ( !gameObject )
          goto LABEL_114;
        *(float *)(gameObject + 56) = -distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v81 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_114;
        if ( v55 >= v81->max_length )
          goto LABEL_115;
        gameObject = (__int64)v81->m_Items[v55];
        if ( !gameObject )
          goto LABEL_114;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_114;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_114;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13816/*"TargetBackPos"*/,
                                0LL);
        v82 = this->fields.performance;
        if ( !v82 || !gameObject )
          goto LABEL_114;
        v83 = v82->fields.distanceofactor;
      }
      else
      {
        if ( !gameObject )
          goto LABEL_114;
        *(float *)(gameObject + 56) = distanceofactor;
        *(_DWORD *)(gameObject + 60) = 0;
        *(_DWORD *)(gameObject + 64) = 0;
        v84 = *p_motionFSM;
        if ( !*p_motionFSM )
          goto LABEL_114;
        if ( v55 >= v84->max_length )
          goto LABEL_115;
        gameObject = (__int64)v84->m_Items[v55];
        if ( !gameObject )
          goto LABEL_114;
        gameObject = (__int64)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_114;
        gameObject = *(_QWORD *)(gameObject + 88);
        if ( !gameObject )
          goto LABEL_114;
        gameObject = (__int64)HutongGames_PlayMaker_FsmVariables__FindFsmVector3(
                                (HutongGames_PlayMaker_FsmVariables_o *)gameObject,
                                (System_String_o *)StringLiteral_13816/*"TargetBackPos"*/,
                                0LL);
        v85 = this->fields.performance;
        if ( !v85 || !gameObject )
          goto LABEL_114;
        v83 = -v85->fields.distanceofactor;
      }
      *(float *)(gameObject + 56) = v83;
      *(_DWORD *)(gameObject + 60) = 0;
      *(_DWORD *)(gameObject + 64) = 0;
    }
    ++v55;
  }
  while ( v55 != 3 );
  gameObject = (__int64)this->fields.battleSvtData;
  if ( !gameObject )
    goto LABEL_114;
  StrParam = BattleServantData__getStrParam((BattleServantData_o *)gameObject, 0LL);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  gameObject = (__int64)JsonManager__getDictionary(StrParam, 0LL);
  if ( !gameObject )
LABEL_114:
    sub_1C22094(gameObject, v18);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v117,
    (System_Collections_Generic_Dictionary_object__object__o *)gameObject,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v118 = v117;
  while ( 1 )
  {
    v87 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v118,
            (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v87 )
      break;
    v89 = *p_motionFSM;
    if ( !*p_motionFSM )
      sub_1C22094(v87, v88);
    if ( !v89->max_length )
      sub_1C2209C(v87, v88);
    v90 = v89->m_Items[0];
    if ( !v90 )
      sub_1C22094(0LL, v88);
    key = v118.fields._current.fields.key;
    value = v118.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v90, 0LL);
    if ( !Fsm )
      sub_1C22094(0LL, v94);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1C22094(0LL, v94);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v98 = *p_motionFSM;
      if ( !*p_motionFSM )
        sub_1C22094(FsmInt, v97);
      if ( !v98->max_length )
        sub_1C2209C(FsmInt, v97);
      v99 = v98->m_Items[0];
      if ( !v99 )
        sub_1C22094(0LL, v97);
      v100 = PlayMakerFSM__get_Fsm(v99, 0LL);
      if ( !v100 )
        sub_1C22094(0LL, v101);
      v102 = v100->fields.variables;
      if ( !v102 )
        sub_1C22094(0LL, v101);
      v103 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v102, (System_String_o *)key, 0LL);
      if ( !v103 )
        sub_1C22094(0LL, v104);
      if ( !value )
        goto LABEL_122;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1C22354(value);
LABEL_122:
        sub_1C22094(v103, v104);
      }
      v103->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v105, v106);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v118,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(this, v107);
  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int64_t)DelayEndSequenceIdListFromMotion,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
  BattleActorControl__setLimitedPeriod(this, v115);
}


void __fastcall BattleActorControl__setMyStage(
        BattleActorControl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.myStage = obj;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.myStage, (int64_t)obj, (int64_t)method, v3, v4, v5, v6, v7);
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
  if ( (byte_4BDF408 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_9702/*"Noble_Check"*/);
    byte_4BDF408 = 1;
  }
  motionFSM = v4->fields.motionFSM;
  if ( !motionFSM )
LABEL_18:
    sub_1C22094(this, flg);
  v6 = *(_QWORD *)&motionFSM->max_length;
  if ( (int)v6 >= 1 )
  {
    v7 = 0LL;
    v8 = flg;
    do
    {
      if ( v7 >= (unsigned int)v6 )
        sub_1C2209C(this, flg);
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
                                           (System_String_o *)StringLiteral_9702/*"Noble_Check"*/,
                                           0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmBool(
                                             (HutongGames_PlayMaker_FsmVariables_o *)nodeText,
                                             (System_String_o *)StringLiteral_9702/*"Noble_Check"*/,
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.performance = perf;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.performance,
    (int64_t)perf,
    (int64_t)method,
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
  BattleActorControl_o *v5; // x20
  int32_t v6; // w21
  int32_t WeaponGroup; // w22
  BattleActorControl_o *v8; // x21
  struct PlayMakerFSM_array *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  BattleActorControl_o *v16; // x21
  struct PlayMakerFSM_array *v17; // x8
  HutongGames_PlayMaker_FsmGameObject_o *v18; // x20
  struct PlayMakerFSM_array *v19; // x8
  struct PlayMakerFSM_array *v20; // x8
  BattleActorControl_o *v21; // x20
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct PlayMakerFSM_array *v28; // x8
  struct PlayMakerFSM_array *v29; // x8
  BattleActorControl_o *v30; // x20
  struct PlayMakerFSM_array *v31; // x8
  struct PlayMakerFSM_array *v32; // x8
  BattleActorControl_o *v33; // x20
  struct PlayMakerFSM_array *v34; // x8
  BattleActorControl_o *v35; // x20
  struct PlayMakerFSM_array *v36; // x8
  struct PlayMakerFSM_array *v37; // x8
  char v38; // w20
  struct BattlePerformance_o *performance; // x8
  float distanceofactor; // s0
  struct PlayMakerFSM_array *v41; // x8
  struct BattlePerformance_o *v42; // x8
  float v43; // s0
  struct PlayMakerFSM_array *motionFSM; // x8
  HutongGames_PlayMaker_FsmGameObject_o *FsmGameObject; // x20
  const MethodInfo *v46; // x1
  struct PlayMakerFSM_array *v47; // x8
  struct BattlePerformance_o *v48; // x8
  System_String_o *StrParam; // x20
  _BOOL8 v50; // x0
  __int64 v51; // x1
  struct PlayMakerFSM_array *v52; // x8
  PlayMakerFSM_o *v53; // x0
  Il2CppObject *value; // x20
  Il2CppObject *key; // x21
  HutongGames_PlayMaker_Fsm_o *Fsm; // x0
  __int64 v57; // x1
  HutongGames_PlayMaker_FsmVariables_o *variables; // x0
  HutongGames_PlayMaker_FsmInt_o *FsmInt; // x0
  __int64 v60; // x1
  struct PlayMakerFSM_array *v61; // x8
  PlayMakerFSM_o *v62; // x0
  HutongGames_PlayMaker_Fsm_o *v63; // x0
  __int64 v64; // x1
  HutongGames_PlayMaker_FsmVariables_o *v65; // x0
  HutongGames_PlayMaker_FsmInt_o *v66; // x0
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  const MethodInfo *v70; // x1
  System_Collections_Generic_List_int__o *DelayEndSequenceIdListFromMotion; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  __int64 v78; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v79; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v80; // [xsp+30h] [xbp-60h] BYREF

  v4 = this;
  if ( (byte_4BDF3E1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__object__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Key__);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__object__get_Value__);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&StringLiteral_13817/*"TargetFrontPos"*/);
    sub_1C21E38(&StringLiteral_13816/*"TargetBackPos"*/);
    sub_1C21E38(&StringLiteral_4070/*"Camera"*/);
    sub_1C21E38(&StringLiteral_2274/*"ActorObject"*/);
    sub_1C21E38(&StringLiteral_16471/*"_ENEMY"*/);
    sub_1C21E38(&StringLiteral_4076/*"CameraFsm"*/);
    sub_1C21E38(&StringLiteral_10806/*"Performance"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_2275/*"ActorSide"*/);
    byte_4BDF3E1 = 1;
  }
  memset(&v80, 0, sizeof(v80));
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
                            (System_String_o *)StringLiteral_2274/*"ActorObject"*/,
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
    sub_1C22094(this, flg);
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
                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_PlayMakerFSM___);
  if ( !v9 )
    goto LABEL_125;
  v16 = this;
  if ( this )
  {
    this = (BattleActorControl_o *)sub_1C21F74(this, v9->obj.klass->_1.element_class);
    if ( !this )
    {
      v78 = sub_1C220B8(0LL);
      sub_1C21F60(v78, 0LL);
    }
  }
  if ( !v9->max_length )
    goto LABEL_139;
  v9->m_Items[0] = (PlayMakerFSM_o *)v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)v9->m_Items, (int64_t)v16, v10, v11, v12, v13, v14, v15);
  v17 = v4->fields.motionFSM;
  if ( !v17 )
    goto LABEL_125;
  if ( !v17->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v17->m_Items[0];
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)this->fields.nodeText;
  if ( !this )
    goto LABEL_125;
  v18 = HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
          (HutongGames_PlayMaker_FsmVariables_o *)this,
          (System_String_o *)StringLiteral_2274/*"ActorObject"*/,
          0LL);
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !v18 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(v18, (UnityEngine_GameObject_o *)this, 0LL);
  v19 = v4->fields.motionFSM;
  if ( !v19 )
    goto LABEL_125;
  if ( !v19->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v19->m_Items[0];
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
                                   (System_String_o *)StringLiteral_2275/*"ActorSide"*/,
                                   0LL);
  v20 = v4->fields.motionFSM;
  if ( !v20 )
    goto LABEL_125;
  if ( v20->max_length <= 1 )
    goto LABEL_139;
  v21 = this;
  this = (BattleActorControl_o *)v20->m_Items[1];
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
                                   (System_String_o *)StringLiteral_2275/*"ActorSide"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmString__get_Value(
                                   (HutongGames_PlayMaker_FsmString_o *)this,
                                   0LL);
  if ( !v21 )
    goto LABEL_125;
  v21->fields.shadowObj = (struct UnityEngine_Transform_o *)this;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v21->fields.shadowObj, (int64_t)this, v22, v23, v24, v25, v26, v27);
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
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                   (HutongGames_PlayMaker_FsmVariables_o *)this,
                                   (System_String_o *)StringLiteral_4070/*"Camera"*/,
                                   0LL);
  v29 = v4->fields.motionFSM;
  if ( !v29 )
    goto LABEL_125;
  if ( v29->max_length <= 1 )
    goto LABEL_139;
  v30 = this;
  this = (BattleActorControl_o *)v29->m_Items[1];
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
                                   (System_String_o *)StringLiteral_4070/*"Camera"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v30 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v30,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v31 = v4->fields.motionFSM;
  if ( !v31 )
    goto LABEL_125;
  if ( !v31->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v31->m_Items[0];
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
                                   (System_String_o *)StringLiteral_4076/*"CameraFsm"*/,
                                   0LL);
  v32 = v4->fields.motionFSM;
  if ( !v32 )
    goto LABEL_125;
  if ( v32->max_length <= 1 )
    goto LABEL_139;
  v33 = this;
  this = (BattleActorControl_o *)v32->m_Items[1];
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
                                   (System_String_o *)StringLiteral_4076/*"CameraFsm"*/,
                                   0LL);
  if ( !this )
    goto LABEL_125;
  this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmGameObject__get_Value(
                                   (HutongGames_PlayMaker_FsmGameObject_o *)this,
                                   0LL);
  if ( !v33 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v33,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v34 = v4->fields.motionFSM;
  if ( !v34 )
    goto LABEL_125;
  if ( !v34->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v34->m_Items[0];
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
                                   (System_String_o *)StringLiteral_10806/*"Performance"*/,
                                   0LL);
  if ( !v4->fields.performance )
    goto LABEL_125;
  v35 = this;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)v4->fields.performance,
                                   0LL);
  if ( !v35 )
    goto LABEL_125;
  HutongGames_PlayMaker_FsmGameObject__set_Value(
    (HutongGames_PlayMaker_FsmGameObject_o *)v35,
    (UnityEngine_GameObject_o *)this,
    0LL);
  v36 = v4->fields.motionFSM;
  if ( !v36 )
    goto LABEL_125;
  if ( !v36->max_length )
    goto LABEL_139;
  this = (BattleActorControl_o *)v36->m_Items[0];
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
         (System_String_o *)StringLiteral_13817/*"TargetFrontPos"*/,
         0LL) )
  {
    this = (BattleActorControl_o *)v4->fields.actorside;
    if ( !this )
      goto LABEL_125;
    this = (BattleActorControl_o *)System_String__Equals_63123792(
                                     (System_String_o *)this,
                                     (System_String_o *)StringLiteral_16471/*"_ENEMY"*/,
                                     0LL);
    v37 = v4->fields.motionFSM;
    if ( !v37 )
      goto LABEL_125;
    if ( v37->max_length )
    {
      v38 = (char)this;
      this = (BattleActorControl_o *)v37->m_Items[0];
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
                                       (System_String_o *)StringLiteral_13817/*"TargetFrontPos"*/,
                                       0LL);
      performance = v4->fields.performance;
      if ( !performance )
        goto LABEL_125;
      distanceofactor = performance->fields.distanceofactor;
      if ( (v38 & 1) != 0 )
      {
        if ( !this )
          goto LABEL_125;
        *(float *)&this->fields.shadowObj = -distanceofactor;
        HIDWORD(this->fields.shadowObj) = 0;
        LODWORD(this->fields.specialShadowObj) = 0;
        v41 = v4->fields.motionFSM;
        if ( !v41 )
          goto LABEL_125;
        if ( v41->max_length )
        {
          this = (BattleActorControl_o *)v41->m_Items[0];
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
                                           (System_String_o *)StringLiteral_13816/*"TargetBackPos"*/,
                                           0LL);
          v42 = v4->fields.performance;
          if ( !v42 || !this )
            goto LABEL_125;
          v43 = v42->fields.distanceofactor;
LABEL_101:
          *(float *)&this->fields.shadowObj = v43;
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
        v47 = v4->fields.motionFSM;
        if ( !v47 )
          goto LABEL_125;
        if ( v47->max_length )
        {
          this = (BattleActorControl_o *)v47->m_Items[0];
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
                                           (System_String_o *)StringLiteral_13816/*"TargetBackPos"*/,
                                           0LL);
          v48 = v4->fields.performance;
          if ( !v48 || !this )
            goto LABEL_125;
          v43 = -v48->fields.distanceofactor;
          goto LABEL_101;
        }
      }
    }
LABEL_139:
    sub_1C2209C(this, flg);
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
    &v79,
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__object__GetEnumerator__);
  v80 = v79;
  while ( 1 )
  {
    v50 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v80,
            (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__MoveNext__);
    if ( !v50 )
      break;
    v52 = v4->fields.motionFSM;
    if ( !v52 )
      sub_1C22094(v50, v51);
    if ( !v52->max_length )
      sub_1C2209C(v50, v51);
    v53 = v52->m_Items[0];
    if ( !v53 )
      sub_1C22094(0LL, v51);
    key = v80.fields._current.fields.key;
    value = v80.fields._current.fields.value;
    Fsm = PlayMakerFSM__get_Fsm(v53, 0LL);
    if ( !Fsm )
      sub_1C22094(0LL, v57);
    variables = Fsm->fields.variables;
    if ( !variables )
      sub_1C22094(0LL, v57);
    FsmInt = HutongGames_PlayMaker_FsmVariables__FindFsmInt(variables, (System_String_o *)key, 0LL);
    if ( FsmInt )
    {
      v61 = v4->fields.motionFSM;
      if ( !v61 )
        sub_1C22094(FsmInt, v60);
      if ( !v61->max_length )
        sub_1C2209C(FsmInt, v60);
      v62 = v61->m_Items[0];
      if ( !v62 )
        sub_1C22094(0LL, v60);
      v63 = PlayMakerFSM__get_Fsm(v62, 0LL);
      if ( !v63 )
        sub_1C22094(0LL, v64);
      v65 = v63->fields.variables;
      if ( !v65 )
        sub_1C22094(0LL, v64);
      v66 = HutongGames_PlayMaker_FsmVariables__FindFsmInt(v65, (System_String_o *)key, 0LL);
      if ( !v66 )
        sub_1C22094(0LL, v67);
      if ( !value )
        goto LABEL_132;
      if ( value->klass->_1.element_class != long_TypeInfo->_1.element_class )
      {
        sub_1C22354(value);
LABEL_132:
        sub_1C22094(v66, v67);
      }
      v66->fields.value = *(_QWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v68, v69);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v80,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__object__Dispose__);
  DelayEndSequenceIdListFromMotion = BattleActorControl__GetDelayEndSequenceIdListFromMotion(v4, v70);
  v4->fields._delayEndSequenceIdListFromMotion_k__BackingField = DelayEndSequenceIdListFromMotion;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v4->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int64_t)DelayEndSequenceIdListFromMotion,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
LABEL_124:
  BattleActorControl__setLimitedPeriod(v4, v46);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleServantData_o **p_battleSvtData; // x25
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattleServantData_o *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x22
  __int64 v23; // x21
  __int64 v24; // x23
  Il2CppObject *Entity; // x0
  UnityEngine_Object_o *shadowObj; // x21
  ServantEntity_o *v27; // x26
  struct UnityEngine_Transform_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int32_t v35; // w29
  int v36; // w21
  int32_t v37; // w23
  UnityEngine_GameObject_o *v38; // x24
  int32_t v39; // w27
  _BOOL4 isForceAppearance; // w20
  struct UnityEngine_GameObject_o *Manager__loadBattleActor; // x0
  UnityEngine_GameObject_o **p_actorObject; // x24
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  UnityEngine_Transform_o *v49; // x21
  const MethodInfo *v50; // x2
  BattlePerformance_o *performance; // x21
  int32_t m_CancellationTokenSource; // w22
  System_String_o *v53; // x29
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v56; // x27
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  System_String_o *HideInAnimNodeName; // x26
  bool v64; // w0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  UnityEngine_Transform_o *v71; // x0
  UnityEngine_Transform_o *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct System_String_o *v79; // x1
  UnityEngine_GameObject_o *v80; // x26
  int32_t v81; // w29
  UnityEngine_Transform_o *v82; // x21
  UnityEngine_Transform_o *v83; // x21
  UnityEngine_Transform_o *v84; // x21
  UnityEngine_Transform_o *v85; // x21
  UnityEngine_Transform_o *v86; // x21
  BattleFBXComponent_o *fbxcomponent; // x21
  _BOOL4 v88; // w20
  const MethodInfo *v89; // x2
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x3
  int32_t displayType; // w8
  bool v93; // w1
  bool v94; // w2
  System_Collections_Generic_IEnumerable_T__o *ComponentsInChildren_object__50336088; // x21
  System_Collections_Generic_List_object__o *v96; // x22
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  const MethodInfo *v103; // x2
  BattleServantData_o *v104; // x22
  UnityEngine_Transform_o *v105; // x21
  float actorScale; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct BattlePerformance_o *v108; // x8
  struct BattleData_o *data; // x8
  int32_t v110; // w0
  struct System_Collections_Generic_List_SkinnedMeshRenderer__o *rendererArrayList; // x25
  System_Predicate_object__o *v112; // x26
  Il2CppObject *v113; // x21
  struct BattleActorControl___c_StaticFields *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  UnityEngine_SkinnedMeshRenderer_o *v121; // x25
  Il2CppObject *Component_object; // x26
  struct BattlePerformance_o *v123; // x8
  bool IsEnemyPosCountNormal; // w27
  UnityEngine_Mesh_o *v125; // x21
  BattlePerformance_o *v126; // x29
  int32_t v127; // w28
  __int64 v128; // x22
  __int64 v129; // x21
  int32_t v130; // w21
  System_Action_o *v131; // x22
  struct BattlePerformance_o *v132; // x8
  struct BattlePerformanceStatus_o *statusPerf; // x8
  struct BattlePerformanceEnemy_o *enemyPref; // x8
  struct BattleServantHeadUpComponent_array *svtHeadUpList; // x8
  __int64 v136; // x9
  Il2CppObject *v137; // x21
  struct BattlePerformance_o *v138; // x8
  UnityEngine_Camera_o *actorcamera; // x25
  UnityEngine_Camera_o *uicamera; // x26
  UnityEngine_GameObject_o *v141; // x27
  const MethodInfo *v142; // x1
  int v143; // s0
  System_Object_array *Components_object; // x0
  int64_t v147; // x2
  int32_t v148; // w3
  System_String_o *v149; // x4
  BattleSetupInfo_o *v150; // x5
  FollowerInfo_o *v151; // x6
  PartyListViewItem_o *v152; // x7
  const MethodInfo *v153; // x3
  const MethodInfo *v154; // x4
  const MethodInfo *v155; // x1
  BattleServantData_o *v156; // [xsp+8h] [xbp-78h]
  __int64 v157; // [xsp+10h] [xbp-70h]
  int32_t v158; // [xsp+1Ch] [xbp-64h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v159; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v160; // 0:x0.16
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDF3D6 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_System_Array_IndexOf_int___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
    sub_1C21E38(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C21E38(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
    sub_1C21E38(&Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___77587016);
    sub_1C21E38(&System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
    sub_1C21E38(&UnityEngine_Mesh_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&System_Predicate_SkinnedMeshRenderer__TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleActorControl___c__setServantData_b__139_0__);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass139_0__setServantData_b__1__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass139_0_TypeInfo);
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    sub_1C21E38(&StringLiteral_19297/*"en_Head"*/);
    sub_1C21E38(&StringLiteral_12986/*"Shadow"*/);
    sub_1C21E38(&StringLiteral_19301/*"en_buff01"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDF3D6 = 1;
  }
  v5 = sub_1C22084(BattleActorControl___c__DisplayClass139_0_TypeInfo);
  BattleActorControl___c__DisplayClass139_0___ctor((BattleActorControl___c__DisplayClass139_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_119;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 16), (int64_t)this, v8, v9, v10, v11, v12, v13);
  p_battleSvtData = &this->fields.battleSvtData;
  this->fields.battleSvtData = svtdata;
  v156 = svtdata;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.battleSvtData, (int64_t)svtdata, v15, v16, v17, v18, v19, v20);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_ServantMaster___);
  v21 = *p_battleSvtData;
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v24 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v159.fields.currentCryptoKey = v24;
  *(_QWORD *)&v159.fields.fakeValue = v23;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v159, 0LL);
  if ( !v22 )
    goto LABEL_119;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v22,
             (int32_t)Instance,
             (const MethodInfo_325BDC8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  shadowObj = (UnityEngine_Object_o *)this->fields.shadowObj;
  v27 = (ServantEntity_o *)Entity;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !Instance )
      goto LABEL_119;
    v28 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_12986/*"Shadow"*/, 0LL);
    this->fields.shadowObj = v28;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.shadowObj, (int64_t)v28, v29, v30, v31, v32, v33, v34);
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
  Instance = (DataManager_o *)BattleServantData__getAppearanceId(this->fields.battleSvtData, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v39 = (int)Instance;
  isForceAppearance = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Manager__loadBattleActor = ServantAssetLoadManager__loadBattleActor(
                               &this->fields.partAnimationSaveKey,
                               v38,
                               v39,
                               v37,
                               isForceAppearance,
                               0LL);
  this->fields.actorObject = Manager__loadBattleActor;
  p_actorObject = &this->fields.actorObject;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.actorObject,
    (int64_t)Manager__loadBattleActor,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  Instance = (DataManager_o *)this->fields.actorObject;
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  v49 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4BD6BB1 )
  {
    Instance = (DataManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v49 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v49, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  BattleActorControl__ChangeShadowParent(this, v37, v50);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
  performance = this->fields.performance;
  m_CancellationTokenSource = (int32_t)Instance->fields.m_CancellationTokenSource;
  Instance = (DataManager_o *)BattleServantData__getCameraActionId((BattleServantData_o *)Instance, 0LL);
  if ( !performance )
    goto LABEL_119;
  v158 = v35;
  BattlePerformance__registerCameraAction(performance, m_CancellationTokenSource, (int32_t)Instance, 0LL);
  Instance = (DataManager_o *)*p_actorObject;
  if ( !*p_actorObject )
    goto LABEL_119;
  v157 = v5;
  v53 = (System_String_o *)StringLiteral_19297/*"en_Head"*/;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(transform, v53, v37, 0, 0LL);
  if ( !Instance )
    goto LABEL_119;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
  this->fields.checkScaleNode = 0LL;
  v56 = gameObject;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.checkScaleNode, 0LL, v57, v58, v59, v60, v61, v62);
  if ( v27 )
    HideInAnimNodeName = ServantEntity__GetHideInAnimNodeName(v27, 0LL);
  else
    HideInAnimNodeName = (System_String_o *)StringLiteral_1/*""*/;
  Instance = (DataManager_o *)System_String__IsNullOrEmpty(HideInAnimNodeName, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( !v53 )
      goto LABEL_119;
    v64 = System_String__Equals_63123792(v53, HideInAnimNodeName, 0LL);
    v7 = v56;
    if ( !v64 )
    {
      Instance = (DataManager_o *)*p_actorObject;
      if ( !*p_actorObject )
        goto LABEL_119;
      v71 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
      Instance = (DataManager_o *)TransformHelper__getNodeFromLvName(v71, HideInAnimNodeName, v37, 0, 0LL);
      if ( !Instance )
        goto LABEL_119;
      v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    }
    this->fields.checkScaleNode = v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.checkScaleNode, (int64_t)v7, v65, v66, v67, v68, v69, v70);
  }
  v72 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v79 = TransformHelper__ExistNodeFromLvName(v72, (System_String_o *)StringLiteral_19301/*"en_buff01"*/, -1, 0, 0LL)
      ? (struct System_String_o *)StringLiteral_19301/*"en_buff01"*/
      : 0LL;
  this->fields._BuffEffectNodeName_k__BackingField = v79;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int64_t)v79,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  v80 = (UnityEngine_GameObject_o *)sub_1C22084(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor_70851360(v80, 0LL);
  if ( !v80 )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v80, 0LL);
  v81 = v158;
  if ( !v56 )
    goto LABEL_119;
  v82 = (UnityEngine_Transform_o *)Instance;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v56, 0LL);
  if ( !v82 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v82, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v80, 0LL);
  v83 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4BD6BB1 )
  {
    Instance = (DataManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v83 )
    goto LABEL_119;
  UnityEngine_Transform__set_localPosition(v83, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v80, 0LL);
  v84 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4BD6BB9 )
  {
    Instance = (DataManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB9 = 1;
  }
  if ( !v84 )
    goto LABEL_119;
  UnityEngine_Transform__set_localEulerAngles(v84, UnityEngine_Vector3_TypeInfo->static_fields->upVector, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v80, 0LL);
  v85 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4BD6BB6 )
  {
    Instance = (DataManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v85 )
    goto LABEL_119;
  UnityEngine_Transform__set_localScale(v85, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
  v86 = UnityEngine_GameObject__get_transform(v80, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !v86 )
    goto LABEL_119;
  UnityEngine_Transform__set_parent(v86, (UnityEngine_Transform_o *)Instance, 0LL);
  Instance = (DataManager_o *)UnityEngine_GameObject__get_transform(v80, 0LL);
  if ( !Instance )
    goto LABEL_119;
  this->fields.headupVec = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)Instance, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)v80, 0LL);
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
  BattleFBXComponent__SetEvolutionLevel((BattleFBXComponent_o *)Instance, v158, v37, 0LL);
  if ( !*p_battleSvtData )
    goto LABEL_119;
  v88 = (*p_battleSvtData)->fields.isForceAppearance;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  Instance = (DataManager_o *)ServantAssetLoadManager__loadAnimEvents(v158, v37, v88, 0LL);
  if ( !this->fields.fbxcomponent )
    goto LABEL_119;
  BattleFBXComponent__loadAnimationEvents(
    this->fields.fbxcomponent,
    (UnityEngine_TextAsset_o *)Instance,
    v158,
    v37,
    0LL);
  BattleActorControl__InitAnimationEffect(this, v37, v89);
  Instance = (DataManager_o *)this->fields.battleSvtData;
  if ( !Instance )
    goto LABEL_119;
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
  Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !Instance )
    goto LABEL_119;
  ComponentsInChildren_object__50336088 = (System_Collections_Generic_IEnumerable_T__o *)UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                                                                           (UnityEngine_GameObject_o *)Instance,
                                                                                           (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
  v96 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_SkinnedMeshRenderer__TypeInfo);
  System_Collections_Generic_List_object____ctor_56945064(
    v96,
    ComponentsInChildren_object__50336088,
    (const MethodInfo_364E9A8 *)Method_System_Collections_Generic_List_SkinnedMeshRenderer___ctor___77587016);
  this->fields.rendererArrayList = (struct System_Collections_Generic_List_SkinnedMeshRenderer__o *)v96;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.rendererArrayList,
    (int64_t)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  BattleActorControl__UpdateActorVisibilityByBuff(this, 1, v103);
  v104 = v156;
  if ( !v156 )
    goto LABEL_119;
  this->fields.actorScale = BattleServantData__getActorScale(v156, 0LL);
  Instance = (DataManager_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v105 = (UnityEngine_Transform_o *)Instance;
  if ( !byte_4BD6BB6 )
  {
    Instance = (DataManager_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v105 )
    goto LABEL_119;
  actorScale = this->fields.actorScale;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v161.fields.z = actorScale * static_fields->oneVector.fields.z;
  v161.fields.y = actorScale * static_fields->oneVector.fields.y;
  v161.fields.x = actorScale * static_fields->oneVector.fields.x;
  UnityEngine_Transform__set_localScale(v105, v161, 0LL);
  if ( !v156->fields.isEnemy )
    goto LABEL_117;
  v108 = this->fields.performance;
  if ( !v108 )
    goto LABEL_119;
  data = v108->fields.data;
  if ( !data )
    goto LABEL_119;
  v110 = System_Array__IndexOf_int_(
           data->fields.e_entryid,
           v156->fields.uniqueId,
           (const MethodInfo_30ACCCC *)Method_System_Array_IndexOf_int___);
  *(_DWORD *)(v5 + 24) = v110;
  if ( v110 == -1 )
    goto LABEL_117;
  rendererArrayList = this->fields.rendererArrayList;
  Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
  }
  v112 = *(System_Predicate_object__o **)(*(_QWORD *)&Instance[1].fields._DispLog + 8LL);
  if ( !v112 )
  {
    if ( !LODWORD(Instance[1].fields.saveDataMapList) )
    {
      j_il2cpp_runtime_class_init_0(Instance);
      Instance = (DataManager_o *)BattleActorControl___c_TypeInfo;
    }
    v113 = **(Il2CppObject ***)&Instance[1].fields._DispLog;
    v112 = (System_Predicate_object__o *)sub_1C22084(System_Predicate_SkinnedMeshRenderer__TypeInfo);
    System_Predicate_object____ctor(v112, v113, Method_BattleActorControl___c__setServantData_b__139_0__, 0LL);
    v114 = BattleActorControl___c_TypeInfo->static_fields;
    v114->__9__139_0 = (struct System_Predicate_SkinnedMeshRenderer__o *)v112;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v114->__9__139_0, (int64_t)v112, v115, v116, v117, v118, v119, v120);
  }
  if ( !rendererArrayList )
    goto LABEL_119;
  Instance = (DataManager_o *)System_Collections_Generic_List_object___Find(
                                (System_Collections_Generic_List_object__o *)rendererArrayList,
                                (System_Predicate_T__o *)v112,
                                (const MethodInfo_364F71C *)Method_System_Collections_Generic_List_SkinnedMeshRenderer__Find__);
  if ( !*p_actorObject )
    goto LABEL_119;
  v121 = (UnityEngine_SkinnedMeshRenderer_o *)Instance;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       *p_actorObject,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
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
                                  (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_MeshCollider___);
    if ( !Instance )
      goto LABEL_119;
    Component_object = (Il2CppObject *)Instance;
    UnityEngine_MeshCollider__set_convex((UnityEngine_MeshCollider_o *)Instance, 0, 0LL);
    UnityEngine_Collider__set_isTrigger((UnityEngine_Collider_o *)Component_object, 0, 0LL);
  }
  v123 = this->fields.performance;
  if ( !v123 )
    goto LABEL_119;
  Instance = (DataManager_o *)v123->fields.data;
  if ( !Instance )
    goto LABEL_119;
  IsEnemyPosCountNormal = BattleData__get_IsEnemyPosCountNormal((BattleData_o *)Instance, 0LL);
  v125 = (UnityEngine_Mesh_o *)sub_1C22084(UnityEngine_Mesh_TypeInfo);
  UnityEngine_Mesh___ctor(v125, 0LL);
  if ( !v121 )
    goto LABEL_119;
  UnityEngine_SkinnedMeshRenderer__BakeMesh(v121, v125, 0LL);
  if ( !Component_object )
    goto LABEL_119;
  UnityEngine_MeshCollider__set_sharedMesh((UnityEngine_MeshCollider_o *)Component_object, v125, 0LL);
  v126 = this->fields.performance;
  v127 = *(_DWORD *)(v5 + 24);
  v128 = *(_QWORD *)&v156->fields.svtId.fields.currentCryptoKey;
  v129 = *(_QWORD *)&v156->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v160.fields.currentCryptoKey = v128;
  *(_QWORD *)&v160.fields.fakeValue = v129;
  v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v160, 0LL);
  v131 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v131,
    (Il2CppObject *)v157,
    Method_BattleActorControl___c__DisplayClass139_0__setServantData_b__1__,
    0LL);
  if ( !v126 )
    goto LABEL_119;
  BattlePerformance__AddCollider(
    v126,
    (UnityEngine_MeshCollider_o *)Component_object,
    v121,
    v127,
    v130,
    v131,
    IsEnemyPosCountNormal,
    0LL);
  v132 = this->fields.performance;
  if ( !v132 )
    goto LABEL_119;
  statusPerf = v132->fields.statusPerf;
  v104 = v156;
  v81 = v158;
  if ( !statusPerf )
    goto LABEL_119;
  enemyPref = statusPerf->fields.enemyPref;
  if ( !enemyPref )
    goto LABEL_119;
  svtHeadUpList = enemyPref->fields.svtHeadUpList;
  if ( !svtHeadUpList )
    goto LABEL_119;
  v136 = *(int *)(v157 + 24);
  if ( (unsigned int)v136 >= svtHeadUpList->max_length )
    sub_1C2209C(Instance, v7);
  Instance = (DataManager_o *)svtHeadUpList->m_Items[v136];
  if ( !Instance )
LABEL_119:
    sub_1C22094(Instance, v7);
  v137 = UnityEngine_Component__GetComponent_object_(
           (UnityEngine_Component_o *)Instance,
           (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_TrackingMoveCtCComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v137, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v138 = this->fields.performance;
    if ( v138 )
    {
      actorcamera = v138->fields.actorcamera;
      uicamera = v138->fields.uicamera;
      v141 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      *(UnityEngine_Vector3_o *)&v143 = BattleActorControl__getHeadUpY(this, v142);
      if ( v137 )
      {
        TrackingMoveCtCComponent__Set(
          (TrackingMoveCtCComponent_o *)v137,
          actorcamera,
          uicamera,
          v141,
          *(UnityEngine_Vector3_o *)&v143,
          0,
          0LL);
        TrackingMoveCtCComponent__startAct((TrackingMoveCtCComponent_o *)v137, 0LL);
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
                        (const MethodInfo_3000E90 *)Method_UnityEngine_GameObject_GetComponents_BattleModelObjectVisibleControlComponent___);
  this->fields.BattleModelObjectVisibleControlComponents = (struct BattleModelObjectVisibleControlComponent_array *)Components_object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.BattleModelObjectVisibleControlComponents,
    (int64_t)Components_object,
    v147,
    v148,
    v149,
    v150,
    v151,
    v152);
  BattleActorControl__ProcServantObjectVisibleCtr(this, 0, 0, v153);
  BattleActorControl__AddOverwriteEachPhaseAnimation(this, v81, v37, v104->fields.isEnemy, v154);
  BattleActorControl__LoadSavedPartAnimation(this, v155);
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
  if ( (byte_4BDF3E6 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_13334/*"SummonMasterObject"*/);
    byte_4BDF3E6 = 1;
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13334/*"SummonMasterObject"*/,
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
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13334/*"SummonMasterObject"*/,
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
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13334/*"SummonMasterObject"*/,
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
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13334/*"SummonMasterObject"*/,
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
      sub_1C2209C(this, obj);
    this = (BattleActorControl_o *)v9->m_Items[2];
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)PlayMakerFSM__get_Fsm((PlayMakerFSM_o *)this, 0LL);
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)this->fields.nodeText;
    if ( !this )
      goto LABEL_43;
    this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                     (HutongGames_PlayMaker_FsmVariables_o *)this,
                                     (System_String_o *)StringLiteral_13334/*"SummonMasterObject"*/,
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
            this = (BattleActorControl_o *)this->fields.nodeText;
            if ( this )
            {
              this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                               (HutongGames_PlayMaker_FsmVariables_o *)this,
                                               (System_String_o *)StringLiteral_13334/*"SummonMasterObject"*/,
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
        sub_1C22094(this, obj);
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
  if ( (byte_4BDF3E5 & 1) == 0 )
  {
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_13820/*"TargetObject"*/);
    byte_4BDF3E5 = 1;
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
      this = (BattleActorControl_o *)this->fields.nodeText;
      if ( !this )
        goto LABEL_23;
      this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                       (HutongGames_PlayMaker_FsmVariables_o *)this,
                                       (System_String_o *)StringLiteral_13820/*"TargetObject"*/,
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
        this = (BattleActorControl_o *)this->fields.nodeText;
        if ( !this )
          goto LABEL_23;
        this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                         (HutongGames_PlayMaker_FsmVariables_o *)this,
                                         (System_String_o *)StringLiteral_13820/*"TargetObject"*/,
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
              this = (BattleActorControl_o *)this->fields.nodeText;
              if ( this )
              {
                this = (BattleActorControl_o *)HutongGames_PlayMaker_FsmVariables__FindFsmGameObject(
                                                 (HutongGames_PlayMaker_FsmVariables_o *)this,
                                                 (System_String_o *)StringLiteral_13820/*"TargetObject"*/,
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
          sub_1C22094(this, obj);
        }
      }
    }
    sub_1C2209C(this, obj);
  }
}


void __fastcall BattleActorControl__setTimeScale(BattleActorControl_o *this, float time, const MethodInfo *method)
{
  struct BattleFBXComponent_o *fbxcomponent; // x8

  fbxcomponent = this->fields.fbxcomponent;
  this->fields.animetimescale = time;
  if ( !fbxcomponent )
    sub_1C22094(this, method);
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
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._BuffEffectNodeName_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._BuffEffectNodeName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PlayedOriginalAnimName_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._PlayedOriginalAnimName_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._delayEndSequenceIdListFromMotion_k__BackingField = value;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._delayEndSequenceIdListFromMotion_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
      sub_1C22094(0LL, v3);
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
  if ( (byte_4BDF442 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&StringLiteral_12397/*"SKIP_VOICE"*/);
    byte_4BDF442 = 1;
  }
  performance = v2->fields.performance;
  if ( !performance || (this = (BattleActorControl_o *)performance->fields.data) == 0LL )
    sub_1C22094(this, method);
  IsHighSpeedOption = BattleData__IsHighSpeedOption((BattleData_o *)this, 0LL);
  uniqueID = v2->fields.uniqueID;
  v6 = IsHighSpeedOption;
  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
  v7 = 1.0;
  if ( v6 )
    v7 = 0.5;
  ServantAssetLoadManager__StopVoice(uniqueID, v7, 0LL);
  BattleActorControl__sendEventFSM_45066280(v2, (System_String_o *)StringLiteral_12397/*"SKIP_VOICE"*/, 0, v8);
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
    sub_1C22094(0LL, method);
  BattlePerformance__startBattleUIFade(performance, time, targetAlpha, 0LL);
}


void __fastcall BattleActorControl__startChangeApp(BattleActorControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2
  System_Collections_IEnumerator_o *v5; // x1

  if ( (byte_4BDF44C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl_endChangeAppearance__);
    byte_4BDF44C = 1;
  }
  v3 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_BattleActorControl_endChangeAppearance__, 0LL);
  v5 = BattleActorControl__waitChangeApp(this, v3, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  bool v10; // w25
  System_Delegate_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  System_Action_o *v14; // x0
  System_Delegate_c *klass; // x2
  System_Delegate_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattlePerformance_o *v24; // x8
  const MethodInfo *v25; // x2
  struct BattlePerformance_o *v26; // x8
  FieldMotionManager_o *fmManager_k__BackingField; // x20
  BattleFBXComponent_c *v28; // x0
  struct BattlePerformance_o *v29; // x8
  Il2CppObject *Instance; // x0
  BattlePerformance_o *v31; // x20
  BattleSequenceManager_o *v32; // x21
  struct BattlePerformance_o *v33; // x8
  struct BattlePerformanceBg_o *bgPerf; // x9
  struct BattlePerformance_o *v35; // x8
  BattleActorControl_o *v36; // x8
  int32_t m_CachedPtr; // w20
  int32_t v38; // w21
  struct BattleActionData_o *actiondata; // x8
  ExecutingTdInfo_o *v40; // x20
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  Il2CppObject *v47; // x20
  AssetManager_ResourceUnloadEventHandler_o *v48; // x21
  struct BattleServantData_o *battleSvtData; // x8
  BattleSequenceManager_o *v50; // x20
  __int64 v51; // x21
  __int64 v52; // x22
  int32_t v53; // w21
  BattleActorControl_o *v54; // x8
  int32_t v55; // w22
  struct BattleServantData_o *v56; // x8
  int32_t overwriteSvtVoiceId; // w24
  int32_t treasuredvcLevel; // w25
  int32_t v59; // w23
  int32_t NpChargeStage; // w26
  BattleSequenceManager_onGameObjectLoadComplete_o *v61; // x27
  UnityEngine_Object_o *v62; // x20
  struct BattlePerformance_o *v63; // x8
  UnityEngine_Object_o *data; // x20
  struct BattlePerformance_o *v65; // x8
  struct BattleData_o *v66; // x8
  void *v67; // x0
  int v68; // w1
  __int64 v69; // x24
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+30h] [xbp-80h] BYREF
  __int64 patternId; // [xsp+48h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v73; // 0:x0.16

  v6 = this;
  if ( (byte_4BDF425 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl_OnNoblePhantasmLoadComplete__);
    sub_1C21E38(&Method_BattleActorControl__startNoblePhantasm_b__279_0__);
    sub_1C21E38(&Method_BattleActorControl__startNoblePhantasm_b__279_1__);
    sub_1C21E38(&BattleFBXComponent_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_1C21E38(&Method_FieldMotionManager_SetVariables_GameObject___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ValueTuple_BattleModelObjectVisibleControlComponent_Timing__BattleActorControl___Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&AssetManager_ResourceUnloadEventHandler_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&StringLiteral_9502/*"NPACTOR"*/);
    this = (BattleActorControl_o *)sub_1C21E38(&BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    byte_4BDF425 = 1;
  }
  patternId = 0LL;
  memset(&i, 0, sizeof(i));
  noblePhantasmObjectVisibleCtrList = v6->fields.noblePhantasmObjectVisibleCtrList;
  if ( !noblePhantasmObjectVisibleCtrList )
    goto LABEL_68;
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
    goto LABEL_68;
  v10 = flg;
  v11 = (System_Delegate_o *)&Method_BattleActorControl__startNoblePhantasm_b__279_0__;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
  for ( i = v70;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
        BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 1, (BattleActorControl_o *)i.fields._current, v12) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  while ( 1 )
  {
    BattleActorControl__AddNoblePhantasmChangedVisibleActor(v6, 2, v6, v13);
    v14 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    klass = v11->klass;
    v11 = (System_Delegate_o *)v14;
    System_Action___ctor(v14, (Il2CppObject *)v6, (intptr_t)klass, 0LL);
    v16 = System_Delegate__Combine((System_Delegate_o *)callback, v11, 0LL);
    if ( !v16 || (System_Action_c *)v16->klass == System_Action_TypeInfo )
      break;
    sub_1C22354(v16);
    if ( v68 != 1 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &i,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
      sub_1D0C8C8();
    }
    v69 = *(_QWORD *)__cxa_begin_catch(v67);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &i,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    if ( v69 )
      sub_1C2208C(v69);
  }
  v6->fields.noblePhantasmCallback = (struct System_Action_o *)v16;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v6->fields.noblePhantasmCallback,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (BattleActorControl_o *)v6->fields.fbxcomponent;
  if ( !this )
    goto LABEL_68;
  BattleFBXComponent__changeActiveEffect((BattleFBXComponent_o *)this, 0, 0LL);
  performance = v6->fields.performance;
  if ( !performance )
    goto LABEL_68;
  this = (BattleActorControl_o *)performance->fields.bgPerf;
  if ( !this )
    goto LABEL_68;
  BattlePerformanceBg__setCutNodeNoble((BattlePerformanceBg_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_68;
  BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 0, 0LL);
  v24 = v6->fields.performance;
  v6->fields.isPlayingNoblePhantasm = 1;
  if ( !v24 )
    goto LABEL_68;
  this = (BattleActorControl_o *)v24->fields.logic;
  if ( !this )
    goto LABEL_68;
  BattleLogic__ChangePhase((BattleLogic_o *)this, 4, 0LL);
  BattleActorControl__LoopEffectSwitchInNoblePhantasm(v6, 0, v25);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_68;
  BattlePerformance__AllServantClassIconEffectStartStop((BattlePerformance_o *)this, 0, 0LL);
  v26 = v6->fields.performance;
  if ( !v26 )
    goto LABEL_68;
  fmManager_k__BackingField = v26->fields._fmManager_k__BackingField;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !fmManager_k__BackingField )
    goto LABEL_68;
  FieldMotionManager__SetVariables_object_(
    fmManager_k__BackingField,
    (System_String_o *)StringLiteral_9502/*"NPACTOR"*/,
    (Il2CppObject *)this,
    (const MethodInfo_2FFE07C *)Method_FieldMotionManager_SetVariables_GameObject___);
  v28 = BattleFBXComponent_TypeInfo;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v28 = BattleFBXComponent_TypeInfo;
  }
  v28->static_fields->EnableEvent = 0;
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_68;
  BattlePerformance__changeShadowType((BattlePerformance_o *)this, 1, 0LL);
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_68;
  BattlePerformance__UpdateAllShadow((BattlePerformance_o *)this, 0LL);
  v29 = v6->fields.performance;
  if ( !v29 )
    goto LABEL_68;
  this = (BattleActorControl_o *)v29->fields.commandPerf;
  if ( !this )
    goto LABEL_68;
  BattlePerformanceCommandCard__SetCommandCardEffectActive((BattlePerformanceCommandCard_o *)this, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  v31 = v6->fields.performance;
  v32 = (BattleSequenceManager_o *)Instance;
  this = (BattleActorControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  v33 = v6->fields.performance;
  if ( !v33 )
    goto LABEL_68;
  bgPerf = v33->fields.bgPerf;
  if ( !bgPerf )
    goto LABEL_68;
  if ( !v32 )
    goto LABEL_68;
  BattleSequenceManager__init(
    v32,
    v31,
    (UnityEngine_GameObject_o *)this,
    v33->fields.p_actorlist,
    v33->fields.e_actorlist,
    v33->fields.actorcamera,
    bgPerf->fields.bgobject,
    0LL);
  v35 = v6->fields.performance;
  if ( !v35 )
    goto LABEL_68;
  this = (BattleActorControl_o *)v35->fields.data;
  v35->fields.isNoblePhantasmWhiteInFlg = v10;
  if ( !this )
    goto LABEL_68;
  BattleData__GetSequenceSelectType(
    (BattleData_o *)this,
    v6->fields.battleSvtData,
    v6->fields.isEnemy,
    (int32_t *)&patternId + 1,
    (int32_t *)&patternId,
    0LL);
  this = (BattleActorControl_o *)v6->fields.battleSvtData;
  if ( !this )
    goto LABEL_68;
  this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice((BattleServantData_o *)this, 0LL);
  if ( !this )
    goto LABEL_68;
  v36 = this;
  this = (BattleActorControl_o *)v6->fields.battleSvtData;
  if ( !this )
    goto LABEL_68;
  m_CachedPtr = v36->fields.m_CachedPtr;
  this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
  if ( !v6->fields.battleSvtData )
    goto LABEL_68;
  v38 = (int)this;
  this = (BattleActorControl_o *)BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
  actiondata = v6->fields.actiondata;
  if ( !actiondata )
    goto LABEL_68;
  v40 = ExecutingTdInfo__Create(
          m_CachedPtr,
          v38,
          (int32_t)this,
          actiondata->fields.ActSetId,
          SHIDWORD(patternId),
          patternId,
          0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  this->fields.partAnimationSaveKey = (struct System_String_o *)v40;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.partAnimationSaveKey,
    (int64_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  BattleSequenceManager__SetAfterChangeField((BattleSequenceManager_o *)this, v6->fields.actiondata, 0LL);
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
  if ( !this )
    goto LABEL_68;
  BattleSequenceManager__CacheRendererBaseAddColor((BattleSequenceManager_o *)this, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v47 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v48 = (AssetManager_ResourceUnloadEventHandler_o *)sub_1C22084(AssetManager_ResourceUnloadEventHandler_TypeInfo);
    AssetManager_ResourceUnloadEventHandler___ctor(
      v48,
      (Il2CppObject *)v6,
      Method_BattleActorControl__startNoblePhantasm_b__279_1__,
      0LL);
    if ( !v47 )
      goto LABEL_68;
    AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)v47, v48, 0LL);
  }
  else
  {
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    battleSvtData = v6->fields.battleSvtData;
    if ( !battleSvtData )
      goto LABEL_68;
    v50 = (BattleSequenceManager_o *)this;
    v52 = *(_QWORD *)&battleSvtData->fields.svtId.fields.currentCryptoKey;
    v51 = *(_QWORD *)&battleSvtData->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v73.fields.currentCryptoKey = v52;
    *(_QWORD *)&v73.fields.fakeValue = v51;
    this = (BattleActorControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v73, 0LL);
    if ( !v6->fields.battleSvtData )
      goto LABEL_68;
    v53 = (int)this;
    this = (BattleActorControl_o *)BattleServantData__get_TreasureDevice(v6->fields.battleSvtData, 0LL);
    if ( !this )
      goto LABEL_68;
    v54 = this;
    this = (BattleActorControl_o *)v6->fields.battleSvtData;
    if ( !this )
      goto LABEL_68;
    v55 = v54->fields.m_CachedPtr;
    this = (BattleActorControl_o *)BattleServantData__getDispLimitCount((BattleServantData_o *)this, 1, 0LL);
    v56 = v6->fields.battleSvtData;
    if ( !v56 )
      goto LABEL_68;
    overwriteSvtVoiceId = v56->fields.overwriteSvtVoiceId;
    treasuredvcLevel = v56->fields.treasuredvcLevel;
    v59 = (int)this;
    NpChargeStage = BattleServantData__getNpChargeStage(v6->fields.battleSvtData, 0LL);
    v61 = (BattleSequenceManager_onGameObjectLoadComplete_o *)sub_1C22084(BattleSequenceManager_onGameObjectLoadComplete_TypeInfo);
    BattleSequenceManager_onGameObjectLoadComplete___ctor(
      v61,
      (Il2CppObject *)v6,
      Method_BattleActorControl_OnNoblePhantasmLoadComplete__,
      0LL);
    if ( !v50 )
      goto LABEL_68;
    BattleSequenceManager__loadSequence(
      v50,
      v53,
      v55,
      v59,
      overwriteSvtVoiceId,
      treasuredvcLevel,
      NpChargeStage,
      v61,
      0LL);
  }
  v62 = (UnityEngine_Object_o *)v6->fields.performance;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(v62, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v63 = v6->fields.performance;
    if ( !v63 )
      goto LABEL_68;
    data = (UnityEngine_Object_o *)v63->fields.data;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 && !v6->fields.isEnemy )
    {
      v65 = v6->fields.performance;
      if ( v65 )
      {
        v66 = v65->fields.data;
        if ( v66 )
        {
          ++v66->fields.playerNpCount;
          goto LABEL_66;
        }
      }
LABEL_68:
      sub_1C22094(this, callback);
    }
  }
LABEL_66:
  this = (BattleActorControl_o *)v6->fields.performance;
  if ( !this )
    goto LABEL_68;
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
    sub_1C22094(this, method);
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
    sub_1C22094(this, method);
  fbxcomponent->fields.timescale = 0.0;
}


void __fastcall BattleActorControl__stopVoice(BattleActorControl_o *this, const MethodInfo *method)
{
  int32_t uniqueID; // w19

  if ( (byte_4BDF443 & 1) == 0 )
  {
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF443 = 1;
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
  System_Func_T__TResult__o *_9__345_0; // x20
  Il2CppObject *v12; // x21
  struct BattleActorControl___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  System_Collections_Generic_List_int__o *v20; // x22
  __int64 v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x21
  unsigned __int64 v23; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  BattleActorControl_o *v31; // x22
  unsigned __int64 v32; // x25
  int32_t v33; // w23
  Il2CppObject *Item; // x24
  _BOOL8 activeInHierarchy; // x0
  const MethodInfo *v36; // x2
  System_Collections_IEnumerator_o *v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x22
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  System_Collections_IEnumerator_o *v42; // x0

  v3 = auraEffectList;
  v4 = this;
  if ( (byte_4BDF454 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Remove_int__GameObject___);
    sub_1C21E38(&Method_DataManager_GetMasterData_AuraEffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_Except_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_BattleActorControl___c__updateAura_b__345_0__);
    this = (BattleActorControl_o *)sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF454 = 1;
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
    v20 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
    this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( this )
    {
      this = (BattleActorControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)this,
                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_AuraEffectMaster___);
      if ( v3 )
      {
        v21 = *(_QWORD *)&v3->max_length;
        v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
        if ( (int)v21 >= 1 )
        {
          v23 = 0LL;
          while ( v23 < (unsigned int)v21 )
          {
            if ( !v22 )
              goto LABEL_63;
            this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                             v22,
                                             v3->m_Items[v23 + 1],
                                             (const MethodInfo_325BDC8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
            if ( this )
            {
              if ( !v20 )
                goto LABEL_63;
              auraEffectList = (System_Int32_array *)*((unsigned int *)&this->fields.UnityEngine_Behaviour_Fields + 1);
              items = v20->fields._items;
              v25 = Method_System_Collections_Generic_List_int__Add__;
              ++v20->fields._version;
              if ( !items )
                goto LABEL_63;
              size = v20->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_int___AddWithResize(
                  v20,
                  (int32_t)auraEffectList,
                  *(const MethodInfo_3632090 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
              }
              else
              {
                v20->fields._size = size + 1;
                items->m_Items[size + 1] = (int)auraEffectList;
              }
            }
            LODWORD(v21) = v3->max_length;
            if ( (__int64)++v23 >= (int)v21 )
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
                   (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
          v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_int_(
                                                                       (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                                                       (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
          v29 = System_Linq_Enumerable__Except_int_(
                  v28,
                  (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                  (const MethodInfo_2FCF7F0 *)Method_System_Linq_Enumerable_Except_int___);
          this = (BattleActorControl_o *)System_Linq_Enumerable__ToArray_int_(
                                           v29,
                                           (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
          if ( this )
          {
            m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
            v31 = this;
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v32 = 0LL;
              while ( v32 < (unsigned int)m_CancellationTokenSource )
              {
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                v33 = *((_DWORD *)&v31->fields.actorObject + v32);
                Item = System_Collections_Generic_Dictionary_int__object___get_Item(
                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                         v33,
                         (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
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
                    v37 = BattleActorControl__DestroyAuraEffect(
                            (BattleActorControl_o *)activeInHierarchy,
                            (UnityEngine_GameObject_o *)Item,
                            v36);
                    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v4, v37, 0LL);
                  }
                  else
                  {
LABEL_67:
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)Item, 0LL);
                  }
                }
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                System_Collections_Generic_Dictionary_int__object___Remove(
                  (System_Collections_Generic_Dictionary_int__object__o *)this,
                  v33,
                  (const MethodInfo_32B6ED4 *)Method_System_Collections_Generic_Dictionary_int__GameObject__Remove__);
                this = (BattleActorControl_o *)v4->fields.auraList;
                if ( !this )
                  goto LABEL_63;
                this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                 (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                 (const MethodInfo_32B56FC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Count__);
                if ( !(_DWORD)this )
                  v4->fields._currentPriority_k__BackingField = 0;
                LODWORD(m_CancellationTokenSource) = v31->fields.m_CancellationTokenSource;
                if ( (__int64)++v32 >= (int)m_CancellationTokenSource )
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
              v38 = *(_QWORD *)&v3->max_length;
              if ( (int)v38 < 1 )
                return;
              v39 = 0LL;
              while ( v39 < (unsigned int)v38 )
              {
                if ( !v22 )
                  goto LABEL_63;
                this = (BattleActorControl_o *)DataMasterBase_object__object__int___GetEntity(
                                                 v22,
                                                 v3->m_Items[v39 + 1],
                                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_AuraEffectMaster__AuraEffectEntity__int__GetEntity__);
                if ( this )
                {
                  v41 = (int32_t)this->fields.m_CancellationTokenSource;
                  if ( v4->fields._currentPriority_k__BackingField <= v41 )
                  {
                    v42 = BattleActorControl__coAddAura(
                            v4,
                            *((_DWORD *)&this->fields.UnityEngine_Behaviour_Fields + 1),
                            v41,
                            v40);
                    this = (BattleActorControl_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                     (UnityEngine_MonoBehaviour_o *)v4,
                                                     v42,
                                                     0LL);
                  }
                }
                LODWORD(v38) = v3->max_length;
                if ( (__int64)++v39 >= (int)v38 )
                  return;
              }
LABEL_64:
              sub_1C2209C(this, auraEffectList);
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C22094(this, auraEffectList);
  }
  auraList = (System_Collections_Generic_Dictionary_K__V__o *)v4->fields.auraList;
  v10 = BattleActorControl___c_TypeInfo;
  if ( !BattleActorControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActorControl___c_TypeInfo);
    v10 = BattleActorControl___c_TypeInfo;
  }
  _9__345_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__345_0;
  if ( !_9__345_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = BattleActorControl___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__345_0 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_int__GameObject___bool__TypeInfo);
    System_Func_KeyValuePair_int__object___bool____ctor(
      _9__345_0,
      v12,
      Method_BattleActorControl___c__updateAura_b__345_0__,
      0LL);
    static_fields = BattleActorControl___c_TypeInfo->static_fields;
    static_fields->__9__345_0 = (struct System_Func_KeyValuePair_int__GameObject___bool__o *)_9__345_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__345_0,
      (int64_t)_9__345_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  BasicHelper__Remove_int__object_(
    auraList,
    (System_Func_KeyValuePair_K__V___bool__o *)_9__345_0,
    (const MethodInfo_2F9F020 *)Method_BasicHelper_Remove_int__GameObject___);
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
        sub_1C2209C(this, actionData);
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
    sub_1C22094(this, actionData);
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
  if ( (byte_4BDF465 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1C21E38(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____77697096);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    this = (BattleActorControl_o *)sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4BDF465 = 1;
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
  this = (BattleActorControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_37;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_BuffMaster___);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
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
                                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !this )
        goto LABEL_37;
      if ( !MasterData_object )
        goto LABEL_37;
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 this->fields.m_CachedPtr,
                                 (const MethodInfo_325BDC8 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      BattleActorControl__addBuffLoopEffect(v2, Entity, v9);
      if ( !Entity || !v6 )
        goto LABEL_37;
      this = (BattleActorControl_o *)System_Collections_Generic_List_int___Contains(
                                       v6,
                                       Entity->fields.effectId,
                                       (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_3632090 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
               (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
        {
          this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                           (System_Collections_Generic_Dictionary_int__object__o *)this,
                                           Entity->fields.effectId,
                                           (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
          if ( !this )
            goto LABEL_37;
          this = (BattleActorControl_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                           (UnityEngine_GameObject_o *)this,
                                           1,
                                           (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____77697096);
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
        sub_1C2209C(this, method);
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
    sub_1C22094(this, method);
  }
LABEL_29:
  this = (BattleActorControl_o *)v2->fields.buffLoopEffectDict;
  if ( !this )
    goto LABEL_37;
  Keys = System_Collections_Generic_Dictionary_int__object___get_Keys(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           (const MethodInfo_32B570C *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Keys__);
  this = (BattleActorControl_o *)System_Linq_Enumerable__ToList_int_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                                   (const MethodInfo_2FED35C *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !this )
    goto LABEL_37;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_int__o *)this,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v23,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v17 )
      break;
    if ( !v6 )
      sub_1C22094(v17, v18);
    current = v23.fields._current;
    if ( !System_Collections_Generic_List_int___Contains(
            v6,
            v23.fields._current,
            (const MethodInfo_3632408 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      v21 = BattleActorControl__DestroyEffectOnParticleStop(v2, current, v20);
      UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)v2, v21, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v23,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
}


void __fastcall BattleActorControl__updateDeadEffect(BattleActorControl_o *this, float val, const MethodInfo *method)
{
  UnityEngine_Object_o *gameObject; // x19
  void *ComponentsInChildren_object__50336088; // x0
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

  if ( (byte_4BDF413 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16451/*"_ClipSharpnessY"*/);
    sub_1C21E38(&StringLiteral_16455/*"_Color"*/);
    sub_1C21E38(&StringLiteral_25110/*"weapon"*/);
    sub_1C21E38(&StringLiteral_17643/*"body"*/);
    byte_4BDF413 = 1;
  }
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ComponentsInChildren_object__50336088 = (void *)UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_object__50336088 & 1) != 0 )
  {
    if ( !gameObject )
      goto LABEL_44;
    ComponentsInChildren_object__50336088 = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer___);
    if ( !ComponentsInChildren_object__50336088 )
      goto LABEL_44;
    v8 = *((_DWORD *)ComponentsInChildren_object__50336088 + 6);
    v9 = ComponentsInChildren_object__50336088;
    if ( v8 >= 1 )
    {
      v10 = 0;
      while ( v10 < v8 )
      {
        v11 = (char *)&v9[2 * v10];
        v12 = (UnityEngine_Renderer_o *)*((_QWORD *)v11 + 4);
        if ( !v12 )
          goto LABEL_44;
        ComponentsInChildren_object__50336088 = UnityEngine_Renderer__get_material(
                                                  *((UnityEngine_Renderer_o **)v11 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_44;
        ComponentsInChildren_object__50336088 = (void *)UnityEngine_Material__HasProperty_70735792(
                                                          (UnityEngine_Material_o *)ComponentsInChildren_object__50336088,
                                                          (System_String_o *)StringLiteral_16455/*"_Color"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__50336088 & 1) != 0 )
        {
          v13 = BattleActorControl_TypeInfo;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
            v13 = BattleActorControl_TypeInfo;
          }
          defaultHeight = v13->static_fields->defaultHeight;
          ComponentsInChildren_object__50336088 = UnityEngine_Renderer__get_material(v12, 0LL);
          if ( !ComponentsInChildren_object__50336088 )
            goto LABEL_44;
          color = UnityEngine_Material__get_color((UnityEngine_Material_o *)ComponentsInChildren_object__50336088, 0LL);
          r = color.fields.r;
          g = color.fields.g;
          b = color.fields.b;
          ComponentsInChildren_object__50336088 = UnityEngine_Renderer__get_material(v12, 0LL);
          if ( !ComponentsInChildren_object__50336088 )
            goto LABEL_44;
          v35.fields.a = 1.0 - (float)(val / defaultHeight);
          v35.fields.r = r;
          v35.fields.g = g;
          v35.fields.b = b;
          UnityEngine_Material__set_color((UnityEngine_Material_o *)ComponentsInChildren_object__50336088, v35, 0LL);
        }
        v8 = v9[6];
        if ( (int)++v10 >= v8 )
          goto LABEL_20;
      }
LABEL_45:
      sub_1C2209C(ComponentsInChildren_object__50336088, v7);
    }
LABEL_20:
    ComponentsInChildren_object__50336088 = UnityEngine_GameObject__GetComponentsInChildren_object__50336088(
                                              (UnityEngine_GameObject_o *)gameObject,
                                              (const MethodInfo_3001158 *)Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer___);
    if ( !ComponentsInChildren_object__50336088 )
LABEL_44:
      sub_1C22094(ComponentsInChildren_object__50336088, v7);
    v18 = *((_DWORD *)ComponentsInChildren_object__50336088 + 6);
    v19 = ComponentsInChildren_object__50336088;
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
        ComponentsInChildren_object__50336088 = UnityEngine_Renderer__get_materials(
                                                  *((UnityEngine_Renderer_o **)v21 + 4),
                                                  0LL);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_44;
        v23 = *((_QWORD *)ComponentsInChildren_object__50336088 + 3);
        v24 = ComponentsInChildren_object__50336088;
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
        ComponentsInChildren_object__50336088 = UnityEngine_Component__get_gameObject(v22, 0LL);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_44;
        ComponentsInChildren_object__50336088 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__50336088,
                                                  0LL);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_44;
        ComponentsInChildren_object__50336088 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__50336088,
                                                          (System_String_o *)StringLiteral_17643/*"body"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__50336088 & 1) != 0 )
          goto LABEL_35;
        ComponentsInChildren_object__50336088 = UnityEngine_Component__get_gameObject(v22, 0LL);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_44;
        ComponentsInChildren_object__50336088 = UnityEngine_Object__get_name(
                                                  (UnityEngine_Object_o *)ComponentsInChildren_object__50336088,
                                                  0LL);
        if ( !ComponentsInChildren_object__50336088 )
          goto LABEL_44;
        ComponentsInChildren_object__50336088 = (void *)System_String__StartsWith(
                                                          (System_String_o *)ComponentsInChildren_object__50336088,
                                                          (System_String_o *)StringLiteral_25110/*"weapon"*/,
                                                          0LL);
        if ( ((unsigned __int8)ComponentsInChildren_object__50336088 & 1) != 0 )
        {
LABEL_35:
          if ( !v26 )
            goto LABEL_44;
          v27 = (System_String_o *)StringLiteral_16451/*"_ClipSharpnessY"*/;
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
          ComponentsInChildren_object__50336088 = BattleActorControl_TypeInfo;
          v32 = v33.fields.m_Extents.fields.y;
          if ( !BattleActorControl_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleActorControl_TypeInfo);
          if ( !v26 )
            goto LABEL_44;
          v27 = (System_String_o *)StringLiteral_16451/*"_ClipSharpnessY"*/;
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4BDF44D & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl__waitChangeApp_d__337_TypeInfo);
    byte_4BDF44D = 1;
  }
  v5 = sub_1C22084(BattleActorControl__waitChangeApp_d__337_TypeInfo);
  BattleActorControl__waitChangeApp_d__337___ctor((BattleActorControl__waitChangeApp_d__337_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleActorControl_ActorMotionActiveCheck___ctor(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleActorControl_o *actor,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  System_Collections_Generic_Queue_T__o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDF482 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
    sub_1C21E38(&System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
    byte_4BDF482 = 1;
  }
  *(_QWORD *)&this->fields.uniqueId = -1LL;
  this->fields.afterWaitTime = 0.1;
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields._activeFsmNameList = (struct System_Collections_Generic_List_string__o *)v5;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._activeFsmNameList, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_Queue_T__o *)sub_1C22084(System_Collections_Generic_Queue_BattleCallBackBase__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v12,
    (const MethodInfo_37C0E20 *)Method_System_Collections_Generic_Queue_BattleCallBackBase___ctor__);
  this->fields._callBackQueue = (struct System_Collections_Generic_Queue_BattleCallBackBase__o *)v12;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields._callBackQueue, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.battleActor = actor;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.battleActor, (int64_t)actor, v19, v20, v21, v22, v23, v24);
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__activeFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *activeFsmNameList; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0

  if ( (byte_4BDF484 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    byte_4BDF484 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = (System_Collections_Generic_List_object__o *)this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    goto LABEL_9;
  v5 = System_Collections_Generic_List_object___Contains(
         activeFsmNameList,
         (Il2CppObject *)fsmName,
         (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
  if ( v5 )
    return;
  items = activeFsmNameList->fields._items;
  v15 = Method_System_Collections_Generic_List_string__Add__;
  ++activeFsmNameList->fields._version;
  if ( !items )
LABEL_9:
    sub_1C22094(v5, v6);
  size = activeFsmNameList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      activeFsmNameList,
      (Il2CppObject *)fsmName,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    activeFsmNameList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)fsmName;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)fsmName, v8, v9, v10, v11, v12, v13);
  }
}


void __fastcall BattleActorControl_ActorMotionActiveCheck__enqueueCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        BattleCallBackBase_o *callBack,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4BDF486 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
    byte_4BDF486 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)callBack);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1C22094(0LL, v5);
  System_Collections_Generic_Queue_object___Enqueue(
    callBackQueue,
    (Il2CppObject *)callBack,
    (const MethodInfo_37C13E8 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Enqueue__);
}


BattleCallBackBase_o *__fastcall BattleActorControl_ActorMotionActiveCheck__getAbleCallBack(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_T__o *callBackQueue; // x0

  if ( (byte_4BDF487 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_BattleCallBackBase__get_Count__);
    byte_4BDF487 = 1;
  }
  if ( BattleActorControl_ActorMotionActiveCheck__get_IsActiveFSM(this, method) )
    return 0LL;
  BattleActorControl_ActorMotionActiveCheck__init(this, v3);
  callBackQueue = (System_Collections_Generic_Queue_T__o *)this->fields._callBackQueue;
  if ( !callBackQueue )
    sub_1C22094(0LL, v4);
  if ( callBackQueue->fields._size < 1 )
    return 0LL;
  else
    return (BattleCallBackBase_o *)System_Collections_Generic_Queue_object___Dequeue(
                                     callBackQueue,
                                     (const MethodInfo_37C1578 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Dequeue__);
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

  if ( (byte_4BDF481 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4BDF481 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, method);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1C22094(v3, v4);
  return activeFsmNameList->fields._size > 0;
}


bool __fastcall BattleActorControl_ActorMotionActiveCheck__inactiveFSM(
        BattleActorControl_ActorMotionActiveCheck_o *this,
        System_String_o *fsmName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_string__o *activeFsmNameList; // x0

  if ( (byte_4BDF485 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4BDF485 = 1;
  }
  BattleActorControl_ActorMotionActiveCheck__init(this, (const MethodInfo *)fsmName);
  activeFsmNameList = this->fields._activeFsmNameList;
  if ( !activeFsmNameList )
    sub_1C22094(0LL, v5);
  return System_Collections_Generic_List_object___Remove(
           (System_Collections_Generic_List_object__o *)activeFsmNameList,
           (Il2CppObject *)fsmName,
           (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_string__Remove__);
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

  if ( (byte_4BDF483 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
    byte_4BDF483 = 1;
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
    sub_1C22094(battleActor, method);
  System_Collections_Generic_Queue_object___Clear(
    (System_Collections_Generic_Queue_T__o *)battleActor,
    (const MethodInfo_37C10A8 *)Method_System_Collections_Generic_Queue_BattleCallBackBase__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl_EndCallEvent___ctor(
        BattleActorControl_EndCallEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C21EF8(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A666FC;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1C21EF0(v10);
        v16 = sub_1C223AC(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A667F8;
          else
            v13 = (Il2CppObject *)sub_1A667BC;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A66738;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A6670C;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A666DC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A66694;
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
  return (System_IAsyncResult_o *)sub_1C21DEC(this, &v6, callback, object);
}


void __fastcall BattleActorControl_EndCallEvent__EndInvoke(
        BattleActorControl_EndCallEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  PartyOrganizationUtility_o *p_table; // x21
  struct System_Collections_Hashtable_o *table; // t1
  System_Collections_Hashtable_o *v10; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1

  if ( (byte_4BDF480 & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    byte_4BDF480 = 1;
  }
  table = this->fields.table;
  p_table = (PartyOrganizationUtility_o *)&this->fields.table;
  klass = table;
  if ( !table )
  {
    v10 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
    System_Collections_Hashtable___ctor_63695236(v10, 0LL);
    p_table->klass = (PartyOrganizationUtility_c *)v10;
    sub_1C21DDC(p_table, (int64_t)v10, v11, v12, v13, v14, v15, v16);
    klass = p_table->klass;
    if ( !p_table->klass )
      sub_1C22094(0LL, v17);
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
    sub_1C22094(this, method);
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

  if ( (byte_4BDF47F & 1) == 0 )
  {
    sub_1C21E38(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4BDF47F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !svtData )
    sub_1C22094(v5, v6);
  v8 = *(_QWORD *)&svtData->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&svtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v8;
  *(_QWORD *)&v9.fields.fakeValue = v7;
  this->fields._svtId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47621364(v9, 0LL);
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


void __fastcall BattleActorControl__DestroyAuraEffect_d__346___ctor(
        BattleActorControl__DestroyAuraEffect_d__346_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyAuraEffect_d__346__MoveNext(
        BattleActorControl__DestroyAuraEffect_d__346_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__DestroyAuraEffect_d__346_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *Component_object; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  BattleActorControl__DestroyAuraEffect_d__346_c *klass; // x8
  BattleActorControl__DestroyAuraEffect_d__346_o *v19; // x20
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
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  UnityEngine_Object_o *effectObject; // x20
  Il2CppObject *_2__current; // x8
  BattleActorControl__DestroyAuraEffect_d__346_o *v47; // x20
  unsigned __int64 v48; // x24
  UnityEngine_Object_o *v49; // x21
  System_Collections_ICollection_o *materials; // x0
  Il2CppObject *v51; // x8
  BattleActorControl__DestroyAuraEffect_d__346_o *v52; // x21
  unsigned __int64 v53; // x25
  UnityEngine_Object_o *v54; // x22
  UnityEngine_Object_o *v55; // x19
  struct UnityEngine_ParticleSystem_o *m_ParticleSystem; // [xsp+8h] [xbp-48h] BYREF
  UnityEngine_ParticleSystem_MainModule_o v57; // 0:x0.8

  v8 = this;
  if ( (byte_4BDF492 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_ParticleSystem___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77697104);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF492 = 1;
  }
  m_ParticleSystem = 0LL;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)v8->fields.effectObject;
    v8->fields.__1__state = -1;
    if ( !this )
      goto LABEL_90;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_Object__op_Inequality(
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
        effectObject = (UnityEngine_Object_o *)v8->fields.effectObject;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(effectObject, 0LL, 0LL) )
        {
          this = (BattleActorControl__DestroyAuraEffect_d__346_o *)v8->fields.effectObject;
          if ( this )
          {
            this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                       (UnityEngine_GameObject_o *)this,
                                                                       1,
                                                                       (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____77697104);
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
                  this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_Object__op_Equality(
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
                    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)BasicHelper__IsNullOrEmpty(materials, 0LL);
                    if ( ((unsigned __int8)this & 1) == 0 )
                    {
                      this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_Renderer__get_materials(
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
                  this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_Object__op_Equality(
                                                                             v54,
                                                                             0LL,
                                                                             0LL);
                  if ( ((unsigned __int8)this & 1) == 0 )
                  {
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    UnityEngine_Object__Destroy_70869612(v54, 0LL);
                  }
                  LODWORD(v51) = v52->fields.__2__current;
                  if ( (__int64)++v53 >= (int)v51 )
                    goto LABEL_84;
                }
LABEL_89:
                sub_1C2209C(this, method);
              }
LABEL_85:
              v55 = (UnityEngine_Object_o *)v8->fields.effectObject;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__Destroy_70869612(v55, 0LL);
              return 0;
            }
          }
LABEL_90:
          sub_1C22094(this, method);
        }
        return 0;
      }
    }
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)v8->fields.effectObject;
    if ( !this )
      goto LABEL_90;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v8->fields._particleArray_5__2,
      (int64_t)ComponentsInChildren_object,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)v8->fields._particleArray_5__2;
    if ( !this )
      goto LABEL_90;
    v8->fields._aliveCount_5__3 = (int32_t)this->fields.__2__current;
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)BasicHelper__ExcludeNull_object_(
                                                               (System_Collections_Generic_IEnumerable_T__o *)this,
                                                               (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_ParticleSystem___);
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
      v22 = sub_1C73E18(this, System_Collections_Generic_IEnumerable_ParticleSystem__TypeInfo, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(BattleActorControl__DestroyAuraEffect_d__346_o *, _QWORD))v22)(
            v19,
            *(_QWORD *)(v22 + 8));
    if ( !v24 )
      sub_1C22094(0LL, v23);
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
        v28 = sub_1C73E18(v24, System_Collections_IEnumerator_TypeInfo, 0LL);
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
        v32 = sub_1C73E18(v24, System_Collections_Generic_IEnumerator_ParticleSystem__TypeInfo, 0LL);
      }
      v33 = (UnityEngine_ParticleSystem_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
      if ( !v33 )
        sub_1C22094(0LL, v34);
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
      v38 = sub_1C73E18(v24, System_IDisposable_TypeInfo, 0LL);
    }
    this = (BattleActorControl__DestroyAuraEffect_d__346_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(
                                                               v24,
                                                               *(_QWORD *)(v38 + 8));
  }
  if ( v8->fields._aliveCount_5__3 <= 0 )
  {
    v8->fields._particleArray_5__2 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._particleArray_5__2, 0LL, v2, v3, v4, v5, v6, v7);
    goto LABEL_60;
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
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
      this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_Object__op_Equality(v42, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v42 )
          goto LABEL_90;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v42, 0LL) )
          UnityEngine_ParticleSystem__Stop_71150228((UnityEngine_ParticleSystem_o *)v42, 0LL);
        this = (BattleActorControl__DestroyAuraEffect_d__346_o *)UnityEngine_ParticleSystem__IsAlive_71150496(
                                                                   (UnityEngine_ParticleSystem_o *)v42,
                                                                   0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v8->fields._aliveCount_5__3;
      }
      LODWORD(v40) = particleArray_5__2->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_58;
    }
    goto LABEL_89;
  }
LABEL_58:
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__346__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyAuraEffect_d__346_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyAuraEffect_d__346__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyAuraEffect_d__346_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__DestroyAuraEffect_d__346_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyAuraEffect_d__346__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyAuraEffect_d__346_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyAuraEffect_d__346__System_IDisposable_Dispose(
        BattleActorControl__DestroyAuraEffect_d__346_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__372___ctor(
        BattleActorControl__DestroyEffectOnParticleStop_d__372_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__372__MoveNext(
        BattleActorControl__DestroyEffectOnParticleStop_d__372_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__DestroyEffectOnParticleStop_d__372_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  System_Object_array *ComponentsInChildren_object; // x0
  struct UnityEngine_ParticleSystem_array **p_particleArray_5__2; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int aliveCount_5__3; // w8
  struct UnityEngine_ParticleSystem_array *particleArray_5__2; // x21
  __int64 v21; // x8
  unsigned __int64 v22; // x22
  UnityEngine_Object_o *v23; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4BDF493 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF493 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    aliveCount_5__3 = v8->fields._aliveCount_5__3;
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    ComponentsInChildren_object = UnityEngine_GameObject__GetComponentsInChildren_object_(
                                    (UnityEngine_GameObject_o *)this,
                                    1,
                                    (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystem____77697088);
    v8->fields._particleArray_5__2 = (struct UnityEngine_ParticleSystem_array *)ComponentsInChildren_object;
    p_particleArray_5__2 = &v8->fields._particleArray_5__2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v8->fields._particleArray_5__2,
      (int64_t)ComponentsInChildren_object,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    if ( !v8->fields._particleArray_5__2 )
      goto LABEL_32;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)_4__this->fields.buffLoopEffectDict;
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         (System_Collections_Generic_Dictionary_int__object__o *)this,
                                                                         v8->fields.key,
                                                                         (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    if ( !this )
      goto LABEL_35;
    this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                         (UnityEngine_GameObject_o *)this,
                                                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_EffectComponent___);
    if ( !this )
      goto LABEL_35;
    if ( BYTE2(this->fields.key) )
    {
LABEL_32:
      BattleActorControl__DestroyLoopEffect(_4__this, v8->fields.key, 0LL);
      return 0;
    }
    if ( !*p_particleArray_5__2 )
      goto LABEL_35;
    aliveCount_5__3 = (*p_particleArray_5__2)->max_length;
    v8->fields._aliveCount_5__3 = aliveCount_5__3;
  }
  if ( aliveCount_5__3 <= 0 )
  {
    if ( _4__this )
      goto LABEL_32;
LABEL_35:
    sub_1C22094(this, method);
  }
  particleArray_5__2 = v8->fields._particleArray_5__2;
  v8->fields._aliveCount_5__3 = 0;
  if ( !particleArray_5__2 )
    goto LABEL_35;
  v21 = *(_QWORD *)&particleArray_5__2->max_length;
  if ( (int)v21 >= 1 )
  {
    v22 = 0LL;
    do
    {
      if ( v22 >= (unsigned int)v21 )
        sub_1C2209C(this, method);
      v23 = (UnityEngine_Object_o *)particleArray_5__2->m_Items[v22];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)UnityEngine_Object__op_Equality(v23, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v23 )
          goto LABEL_35;
        if ( !UnityEngine_ParticleSystem__get_isStopped((UnityEngine_ParticleSystem_o *)v23, 0LL) )
          UnityEngine_ParticleSystem__Stop_71150228((UnityEngine_ParticleSystem_o *)v23, 0LL);
        this = (BattleActorControl__DestroyEffectOnParticleStop_d__372_o *)UnityEngine_ParticleSystem__IsAlive_71150496(
                                                                             (UnityEngine_ParticleSystem_o *)v23,
                                                                             0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          ++v8->fields._aliveCount_5__3;
      }
      LODWORD(v21) = particleArray_5__2->max_length;
      ++v22;
    }
    while ( (__int64)v22 < (int)v21 );
  }
  v8->fields.__2__current = 0LL;
  p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__372__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__372_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__DestroyEffectOnParticleStop_d__372__System_Collections_IEnumerator_Reset(
        BattleActorControl__DestroyEffectOnParticleStop_d__372_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__DestroyEffectOnParticleStop_d__372_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__DestroyEffectOnParticleStop_d__372__System_Collections_IEnumerator_get_Current(
        BattleActorControl__DestroyEffectOnParticleStop_d__372_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__DestroyEffectOnParticleStop_d__372__System_IDisposable_Dispose(
        BattleActorControl__DestroyEffectOnParticleStop_d__372_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__282___ctor(
        BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__282__MoveNext(
        BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *v8; // x20
  int32_t _1__state; // w8
  bool result; // w0
  struct BattleActorControl_o *_4__this; // x19
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *performance; // x20
  BattlePerformance_c *v14; // x0
  struct BattlePerformance_o *v15; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x0
  BattleServantData_o *v19; // x20
  int v20; // w21
  Il2CppObject *_2__current; // x8
  BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *v22; // x20
  unsigned __int64 v23; // x26
  BattleActorControl_o *ServantActor; // x21
  System_String_o *v25; // x0
  System_String_o *v26; // x0
  Il2CppObject *Instance; // x20
  System_Action_object__o *v28; // x21
  struct BattlePerformance_o *v29; // x8
  int i_5__2; // w8
  PartyOrganizationUtility_o *v31; // x20
  UnityEngine_WaitForEndOfFrame_o *v32; // x19
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // [xsp+Ch] [xbp-54h] BYREF

  v8 = this;
  if ( (byte_4BDF494 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_USSequencer__TypeInfo);
    sub_1C21E38(&Method_BattleActorControl_OnNoblePhantasmPlayComplete__);
    sub_1C21E38(&BattlePerformance_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C21E38(&StringLiteral_13530/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/);
    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)sub_1C21E38(&StringLiteral_25041/*"wait"*/);
    byte_4BDF494 = 1;
  }
  v40 = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    _4__this = v8->fields.__4__this;
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)_4__this->fields.battleSvtData;
      if ( this )
      {
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)BattleServantData__IsTDAppearance(
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
        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)_4__this->fields.performance;
        if ( this )
        {
          BattlePerformance__setDamageVoiceFlg((BattlePerformance_o *)this, 1, 0LL);
          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)_4__this->fields.performance;
          if ( this )
          {
            BattlePerformance__FlipAll((BattlePerformance_o *)this, _4__this->fields.isEnemy, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              _4__this->fields.backupFov = performance->fields.currentFov;
              v14 = BattlePerformance_TypeInfo;
              if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
                v14 = BattlePerformance_TypeInfo;
              }
              BattlePerformance__setupCameraFov(performance, v14->static_fields->DefaultFov, 0LL);
              v15 = _4__this->fields.performance;
              if ( v15 )
              {
                this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)v15->fields.actorcamera;
                if ( this )
                {
                  this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)UnityEngine_Component__get_transform(
                                                                                   (UnityEngine_Component_o *)this,
                                                                                   0LL);
                  v16 = this;
                  if ( !byte_4BD6BB1 )
                  {
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                    byte_4BD6BB1 = 1;
                  }
                  if ( v16 )
                  {
                    UnityEngine_Transform__set_localEulerAngles(
                      (UnityEngine_Transform_o *)v16,
                      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                      0LL);
                    v40 = 1;
                    v17 = System_Int32__ToString((int32_t)&v40, 0LL);
                    v18 = System_String__Concat_63115476((System_String_o *)StringLiteral_13530/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v17, 0LL);
                    this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)ConstantMaster__getValue(v18, 0LL);
                    v19 = _4__this->fields.battleSvtData;
                    if ( (_DWORD)this == -1 )
                    {
LABEL_43:
                      this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                      if ( v19 )
                      {
                        ((void (__fastcall *)(BattleServantData_o *, BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *, struct BattleActorControl_o *, Il2CppMethodPointer))v19->klass->vtable._23_PrevActorNoblePhantasm.method)(
                          v19,
                          this,
                          _4__this,
                          v19->klass->vtable._24_AfterActorNoblePhantasm.methodPtr);
                        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
                        v28 = (System_Action_object__o *)sub_1C22084(System_Action_USSequencer__TypeInfo);
                        System_Action_object____ctor(
                          v28,
                          (Il2CppObject *)_4__this,
                          Method_BattleActorControl_OnNoblePhantasmPlayComplete__,
                          0LL);
                        if ( Instance )
                        {
                          BattleSequenceManager__play(
                            (BattleSequenceManager_o *)Instance,
                            0,
                            0,
                            (System_Action_USSequencer__o *)v28,
                            0LL);
                          v29 = _4__this->fields.performance;
                          if ( v29 )
                          {
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)v29->fields.data;
                            if ( this )
                            {
                              this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)BattleData__getStageEntity(
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
                      v20 = (int)this;
                      while ( 1 )
                      {
                        if ( !v19 )
                          goto LABEL_55;
                        if ( v20 == BattleServantData__getSvtId(v19, 0LL) )
                        {
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)_4__this->fields.actiondata;
                          if ( !this )
                            goto LABEL_55;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)BattleActionData__getTargetIds(
                                                                                           (BattleActionData_o *)this,
                                                                                           0LL);
                          if ( !this )
                            goto LABEL_55;
                          _2__current = this->fields.__2__current;
                          v22 = this;
                          if ( (int)_2__current >= 1 )
                            break;
                        }
LABEL_42:
                        ++v40;
                        v25 = System_Int32__ToString((int32_t)&v40, 0LL);
                        v26 = System_String__Concat_63115476((System_String_o *)StringLiteral_13530/*"TEMPORARY_IGNORE_SLEEP_MODE_FOR_TREASURE_DEVICE_SVT_ID_"*/, v25, 0LL);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)ConstantMaster__getValue(
                                                                                         v26,
                                                                                         0LL);
                        v19 = _4__this->fields.battleSvtData;
                        v20 = (int)this;
                        if ( (_DWORD)this == -1 )
                          goto LABEL_43;
                      }
                      v23 = 0LL;
                      while ( 1 )
                      {
                        if ( v23 >= (unsigned int)_2__current )
                          sub_1C2209C(this, method);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)_4__this->fields.performance;
                        if ( !this )
                          break;
                        ServantActor = BattlePerformance__getServantActor(
                                         (BattlePerformance_o *)this,
                                         *((_DWORD *)&v22->fields.__4__this + v23),
                                         0LL);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)UnityEngine_Object__op_Inequality(
                                                                                         (UnityEngine_Object_o *)ServantActor,
                                                                                         0LL,
                                                                                         0LL);
                        if ( ((unsigned __int8)this & 1) != 0 )
                        {
                          if ( !ServantActor )
                            break;
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)ServantActor->fields.battleSvtData;
                          if ( !this )
                            break;
                          if ( LOBYTE(this[17].fields.__4__this) )
                          {
                            LOWORD(this[17].fields.__4__this) = 256;
                            BattleActorControl__playAnimation_45012608(
                              ServantActor,
                              (System_String_o *)StringLiteral_25041/*"wait"*/,
                              0,
                              0LL);
                            this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)ServantActor->fields.battleSvtData;
                            if ( !this )
                              break;
                          }
                          this = (BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *)BattleServantData__IsCounterWaitMotion(
                                                                                           (BattleServantData_o *)this,
                                                                                           0LL);
                          if ( ((unsigned __int8)this & 1) != 0 )
                            BattleActorControl__playAnimation_45012608(
                              ServantActor,
                              (System_String_o *)StringLiteral_25041/*"wait"*/,
                              0,
                              0LL);
                        }
                        LODWORD(_2__current) = v22->fields.__2__current;
                        if ( (__int64)++v23 >= (int)_2__current )
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
    sub_1C22094(this, method);
  }
  if ( _1__state == 1 )
  {
    i_5__2 = v8->fields._i_5__2;
    v8->fields.__1__state = -1;
    v8->fields._i_5__2 = ++i_5__2;
    if ( i_5__2 < 3 )
      goto LABEL_52;
    v32 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v32, 0LL);
    v8->fields.__2__current = (Il2CppObject *)v32;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, (int64_t)v32, v34, v35, v36, v37, v38, v39);
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  else
  {
    result = 0;
    if ( !_1__state )
    {
      v8->fields.__1__state = -1;
      v8->fields._i_5__2 = 0;
LABEL_52:
      v8->fields.__2__current = 0LL;
      v31 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(v31, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&v31[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    }
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__282__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__WaitToNoblePhantasmPlay_d__282__System_Collections_IEnumerator_Reset(
        BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__WaitToNoblePhantasmPlay_d__282_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__282__System_Collections_IEnumerator_get_Current(
        BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__WaitToNoblePhantasmPlay_d__282__System_IDisposable_Dispose(
        BattleActorControl__WaitToNoblePhantasmPlay_d__282_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDF488 & 1) == 0 )
  {
    sub_1C21E38(&BattleActorControl___c_TypeInfo);
    byte_4BDF488 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleActorControl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleActorControl___c_TypeInfo->static_fields->__9 = (struct BattleActorControl___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleActorControl___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall BattleActorControl___c___ctor(BattleActorControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_Material__o *__fastcall BattleActorControl___c___EnumerateMaterials_b__307_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return (System_Collections_Generic_IEnumerable_Material__o *)UnityEngine_Renderer__get_materials(
                                                                 (UnityEngine_Renderer_o *)x,
                                                                 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__140_1(
        BattleActorControl___c_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattleActorAnimationEffect__get_TriggerKey(x, 0LL);
}


System_String_o *__fastcall BattleActorControl___c___InitAnimationEffect_b__140_2(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  System_Linq_IGrouping_string__BattleActorAnimationEffect__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0

  if ( (byte_4BDF48A & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1C21E38(&System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo);
    byte_4BDF48A = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
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
    p_method = sub_1C73E18(x, System_Linq_IGrouping_string__BattleActorAnimationEffect__TypeInfo, 0LL);
  }
  return (System_String_o *)(*(__int64 (__fastcall **)(System_Linq_IGrouping_string__BattleActorAnimationEffect__o *, _QWORD))p_method)(
                              x,
                              *(_QWORD *)(p_method + 8));
}


BattleActorAnimationEffect_array *__fastcall BattleActorControl___c___InitAnimationEffect_b__140_3(
        BattleActorControl___c_o *this,
        System_Linq_IGrouping_string__BattleActorAnimationEffect__o *x,
        const MethodInfo *method)
{
  if ( (byte_4BDF48B & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
    byte_4BDF48B = 1;
  }
  return (BattleActorAnimationEffect_array *)System_Linq_Enumerable__ToArray_object_(
                                               (System_Collections_Generic_IEnumerable_TSource__o *)x,
                                               (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_BattleActorAnimationEffect___);
}


bool __fastcall BattleActorControl___c___IsAllSucceededMovingToSubMember_b__206_0(
        BattleActorControl___c_o *this,
        BattleActionData_MoveToSubMember_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields._isSucceeded_k__BackingField;
}


bool __fastcall BattleActorControl___c___LoadSavedPartAnimation_b__385_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.isSaveAnimation;
}


void __fastcall BattleActorControl___c___ResetAddColorOfMaterials_b__308_0(
        BattleActorControl___c_o *this,
        UnityEngine_Material_o *x,
        const MethodInfo *method)
{
  UnityEngine_Color_o v4; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BDF48C & 1) == 0 )
  {
    this = (BattleActorControl___c_o *)sub_1C21E38(&StringLiteral_16411/*"_AddColor"*/);
    byte_4BDF48C = 1;
  }
  if ( !x )
    sub_1C22094(this, x);
  v4.fields.r = 0.0;
  v4.fields.g = 0.0;
  v4.fields.b = 0.0;
  v4.fields.a = 0.0;
  UnityEngine_Material__SetColor(x, (System_String_o *)StringLiteral_16411/*"_AddColor"*/, v4, 0LL);
}


bool __fastcall BattleActorControl___c___SetPartAnimationSaveData_b__386_0(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.isSaveAnimation;
}


BattlePlayAnimationComponent_SaveData_o *__fastcall BattleActorControl___c___SetPartAnimationSaveData_b__386_1(
        BattleActorControl___c_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattlePlayAnimationComponent__GetSaveData(x, 0LL);
}


bool __fastcall BattleActorControl___c___setServantData_b__139_0(
        BattleActorControl___c_o *this,
        UnityEngine_SkinnedMeshRenderer_o *x,
        const MethodInfo *method)
{
  BattleActorControl___c_o *v4; // x20

  if ( (byte_4BDF489 & 1) == 0 )
  {
    sub_1C21E38(&BattleFBXComponent_TypeInfo);
    this = (BattleActorControl___c_o *)sub_1C21E38(&StringLiteral_17643/*"body"*/);
    byte_4BDF489 = 1;
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
        return System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_17643/*"body"*/, 0LL);
LABEL_14:
      sub_1C22094(this, x);
    }
  }
  return 0;
}


bool __fastcall BattleActorControl___c___updateAura_b__345_0(
        BattleActorControl___c_o *this,
        System_Collections_Generic_KeyValuePair_int__GameObject__o x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *value; // x19

  value = (UnityEngine_Object_o *)x.fields.value;
  if ( (byte_4BDF48D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_int__GameObject__get_Value__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF48D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality(value, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__303_object____cctor(const MethodInfo_3174B00 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  Il2CppObject *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C73D14();
  v3 = **(_QWORD **)(klass + 192);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C73D14();
  v4 = (Il2CppObject *)sub_1C22084(v3);
  if ( (BYTE5(method->klass->vtable._0_Equals.methodPtr) & 1) == 0 )
    sub_1C73D14();
  System_Object___ctor(v4, 0LL);
  v11 = (__int64)method->klass;
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C73D14();
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C73D14();
  **(_QWORD **)(v12 + 184) = v4;
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C73D14();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C73D14();
  sub_1C21DDC(*(PartyOrganizationUtility_o **)(v14 + 184), (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall BattleActorControl___c__303_object____ctor(
        BattleActorControl___c__303_T__o *this,
        const MethodInfo_3174BBC *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__303_object____UpdateMaterialsOnRenderders_b__303_0(
        BattleActorControl___c__303_T__o *this,
        Il2CppObject *x,
        const MethodInfo_3174BC4 *method)
{
  if ( (byte_4BE2209 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE2209 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


bool __fastcall BattleActorControl___c__303_object____UpdateMaterialsOnRenderders_b__303_1(
        BattleActorControl___c__303_T__o *this,
        UnityEngine_Material_o *x,
        const MethodInfo_3174C20 *method)
{
  if ( (byte_4BE220A & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BE220A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass139_0___ctor(
        BattleActorControl___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass139_0___setServantData_b__1(
        BattleActorControl___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  struct BattleActorControl_o *_4__this; // x8
  BattlePerformance_o *performance; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (performance = _4__this->fields.performance) == 0LL )
    sub_1C22094(this, method);
  BattlePerformance__clickTarget(performance, this->fields.index, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass140_0___ctor(
        BattleActorControl___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass140_0___InitAnimationEffect_b__0(
        BattleActorControl___c__DisplayClass140_0_o *this,
        BattleActorAnimationEffect_o *x,
        const MethodInfo *method)
{
  BattleActorAnimationEffect_DisplayTrigger_o *trigger; // x8

  if ( !x || (trigger = x->fields.trigger) == 0LL )
    sub_1C22094(this, x);
  return BattleActorAnimationEffect_DisplayTrigger__IsTarget(trigger, this->fields.limitCount, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass175_0___ctor(
        BattleActorControl___c__DisplayClass175_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass175_0___HasGlobalTransitionInFsm_b__0(
        BattleActorControl___c__DisplayClass175_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1C22094(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.globalTransitionName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass176_0___ctor(
        BattleActorControl___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass176_0___ExistMotionEvent_b__0(
        BattleActorControl___c__DisplayClass176_0_o *this,
        PlayMakerFSM_o *fsm,
        const MethodInfo *method)
{
  _BOOL8 v5; // x0
  __int64 v6; // x1
  HutongGames_PlayMaker_FsmTransition_array *FsmGlobalTransitions; // x0
  struct System_Func_FsmTransition__bool__o *_9__1; // x22
  System_Object_array *v9; // x20
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDF48E & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_FsmTransition___);
    sub_1C21E38(&System_Func_FsmTransition__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass176_0__ExistMotionEvent_b__1__);
    byte_4BDF48E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v5 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)fsm, 0LL, 0LL);
  if ( !v5 )
    return 0;
  if ( !fsm )
    sub_1C22094(v5, v6);
  FsmGlobalTransitions = PlayMakerFSM__get_FsmGlobalTransitions(fsm, 0LL);
  _9__1 = this->fields.__9__1;
  v9 = (System_Object_array *)FsmGlobalTransitions;
  if ( !_9__1 )
  {
    _9__1 = (struct System_Func_FsmTransition__bool__o *)sub_1C22084(System_Func_FsmTransition__bool__TypeInfo);
    System_Func_object__bool____ctor(
      (System_Func_object__bool__o *)_9__1,
      (Il2CppObject *)this,
      Method_BattleActorControl___c__DisplayClass176_0__ExistMotionEvent_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__1, (int64_t)_9__1, v10, v11, v12, v13, v14, v15);
  }
  return BasicHelper__Any_object__49917468(
           v9,
           (System_Func_T__bool__o *)_9__1,
           (const MethodInfo_2F9AE1C *)Method_BasicHelper_Any_FsmTransition___);
}


bool __fastcall BattleActorControl___c__DisplayClass176_0___ExistMotionEvent_b__1(
        BattleActorControl___c__DisplayClass176_0_o *this,
        HutongGames_PlayMaker_FsmTransition_o *x,
        const MethodInfo *method)
{
  System_String_o *EventName; // x0

  if ( !x )
    sub_1C22094(this, 0LL);
  EventName = HutongGames_PlayMaker_FsmTransition__get_EventName(x, 0LL);
  return System_String__op_Equality(EventName, this->fields.eventName, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass277_0___ctor(
        BattleActorControl___c__DisplayClass277_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleActorControl___c__DisplayClass277_0___GetServantObjectVisibleControlActor_b__0(
        BattleActorControl___c__DisplayClass277_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass277_0_o *v4; // x19
  struct BattleActorControl_o *_4__this; // x8
  System_Collections_Generic_List_object__o *targets; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  BattleActorControl___c__DisplayClass277_0_o *v16; // x1
  Il2CppClass **v17; // x0

  v4 = this;
  if ( (byte_4BDF48F & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass277_0_o *)sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    byte_4BDF48F = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this
    || (this = (BattleActorControl___c__DisplayClass277_0_o *)_4__this->fields.performance) == 0LL
    || (targets = (System_Collections_Generic_List_object__o *)v4->fields.targets,
        this = (BattleActorControl___c__DisplayClass277_0_o *)BattlePerformance__getServantGameObject(
                                                                (BattlePerformance_o *)this,
                                                                x,
                                                                0LL),
        !targets)
    || (items = targets->fields._items,
        v14 = Method_System_Collections_Generic_List_GameObject__Add__,
        ++targets->fields._version,
        !items) )
  {
    sub_1C22094(this, *(_QWORD *)&x);
  }
  size = targets->fields._size;
  v16 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      targets,
      (Il2CppObject *)this,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    targets->fields._size = size + 1;
    v17 = &items->obj.klass + size;
    v17[4] = (Il2CppClass *)v16;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)v16, v7, v8, v9, v10, v11, v12);
  }
}


void __fastcall BattleActorControl___c__DisplayClass290_0___ctor(
        BattleActorControl___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass290_0___changeSpecialShadow_b__0(
        BattleActorControl___c__DisplayClass290_0_o *this,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass290_0_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x8
  UnityEngine_Object_o *shadowObj; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct BattleActorControl_o *v6; // x8
  UnityEngine_Object_o *specialShadowObj; // x20
  struct BattleActorControl_o *v8; // x20
  int32_t shadowEffectId; // w22
  BattleActorControl___c__DisplayClass290_0_o *v10; // x21
  BattleActorControl___c__DisplayClass290_0_o *v11; // x23
  int32_t v12; // w24
  int32_t LimitCount; // w25
  UnityEngine_GameObject_o *EffectToNode_44029316; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct BattleActorControl_o *v21; // x8
  UnityEngine_Object_o *v22; // x20
  struct BattleActorControl_o *v23; // x8
  BattleActorControl___c__DisplayClass290_0_o *v24; // x20
  struct BattleActorControl_o *v25; // x8
  BattleActorControl___c__DisplayClass290_0_o *v26; // x20
  struct BattleActorControl_o *v27; // x8
  BattleActorControl___c__DisplayClass290_0_o *v28; // x20
  struct BattleActorControl_o *v29; // x8

  v2 = this;
  if ( (byte_4BDF490 & 1) == 0 )
  {
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    this = (BattleActorControl___c__DisplayClass290_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDF490 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_46;
  shadowObj = (UnityEngine_Object_o *)_4__this->fields.shadowObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(shadowObj, 0LL, 0LL) )
  {
    this = (BattleActorControl___c__DisplayClass290_0_o *)v2->fields.__4__this;
    if ( !this )
      goto LABEL_46;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_Object__op_Equality(gameObject, 0LL, 0LL);
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
        this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_Object__op_Inequality(
                                                                specialShadowObj,
                                                                0LL,
                                                                0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          v8 = v2->fields.__4__this;
          if ( !v8 )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass290_0_o *)v8->fields.shadowObj;
          if ( !this )
            goto LABEL_46;
          this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          shadowEffectId = v2->fields.shadowEffectId;
          v10 = this;
          this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v11 = this;
          this = (BattleActorControl___c__DisplayClass290_0_o *)BattleActorControl__getActorSvtId(
                                                                  v2->fields.__4__this,
                                                                  0LL);
          if ( !v2->fields.__4__this )
            goto LABEL_46;
          v12 = (int)this;
          LimitCount = BattleActorControl__getLimitCount(v2->fields.__4__this, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          EffectToNode_44029316 = BattleEffectUtility__loadEffectToNode_44029316(
                                    (UnityEngine_GameObject_o *)v10,
                                    shadowEffectId,
                                    (UnityEngine_GameObject_o *)v11,
                                    v12,
                                    LimitCount,
                                    0LL);
          v8->fields.specialShadowObj = EffectToNode_44029316;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v8->fields.specialShadowObj,
            (int64_t)EffectToNode_44029316,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          v21 = v2->fields.__4__this;
          if ( !v21 )
            goto LABEL_46;
          v22 = (UnityEngine_Object_o *)v21->fields.specialShadowObj;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v23 = v2->fields.__4__this;
            if ( v23 )
            {
              this = (BattleActorControl___c__DisplayClass290_0_o *)v23->fields.specialShadowObj;
              if ( this )
              {
                this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                v24 = this;
                if ( !byte_4BD6BB1 )
                {
                  this = (BattleActorControl___c__DisplayClass290_0_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                  byte_4BD6BB1 = 1;
                }
                if ( v24 )
                {
                  UnityEngine_Transform__set_localPosition(
                    (UnityEngine_Transform_o *)v24,
                    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                    0LL);
                  v25 = v2->fields.__4__this;
                  if ( v25 )
                  {
                    this = (BattleActorControl___c__DisplayClass290_0_o *)v25->fields.specialShadowObj;
                    if ( this )
                    {
                      this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                      v26 = this;
                      if ( !byte_4BD6BB7 )
                      {
                        this = (BattleActorControl___c__DisplayClass290_0_o *)sub_1C21E38(&UnityEngine_Quaternion_TypeInfo);
                        byte_4BD6BB7 = 1;
                      }
                      if ( v26 )
                      {
                        UnityEngine_Transform__set_localRotation(
                          (UnityEngine_Transform_o *)v26,
                          UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                          0LL);
                        v27 = v2->fields.__4__this;
                        if ( v27 )
                        {
                          this = (BattleActorControl___c__DisplayClass290_0_o *)v27->fields.specialShadowObj;
                          if ( this )
                          {
                            this = (BattleActorControl___c__DisplayClass290_0_o *)UnityEngine_GameObject__get_transform(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    0LL);
                            v28 = this;
                            if ( !byte_4BD6BB6 )
                            {
                              this = (BattleActorControl___c__DisplayClass290_0_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
                              byte_4BD6BB6 = 1;
                            }
                            if ( v28 )
                            {
                              UnityEngine_Transform__set_localScale(
                                (UnityEngine_Transform_o *)v28,
                                UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                                0LL);
                              v29 = v2->fields.__4__this;
                              if ( v29 )
                              {
                                this = (BattleActorControl___c__DisplayClass290_0_o *)v29->fields.specialShadowObj;
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
            sub_1C22094(this, method);
          }
        }
      }
    }
  }
}


void __fastcall BattleActorControl___c__DisplayClass302_0___ctor(
        BattleActorControl___c__DisplayClass302_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass302_0___SetActorAlpha_b__0(
        BattleActorControl___c__DisplayClass302_0_o *this,
        UnityEngine_Material_o *material,
        const MethodInfo *method)
{
  BattleActorControl___c__DisplayClass302_0_o *v4; // x20

  v4 = this;
  if ( (byte_4BDF491 & 1) == 0 )
  {
    this = (BattleActorControl___c__DisplayClass302_0_o *)sub_1C21E38(&StringLiteral_16820/*"_fade"*/);
    byte_4BDF491 = 1;
  }
  if ( !material )
    sub_1C22094(this, material);
  UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16820/*"_fade"*/, v4->fields.alpha, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass344_0___ctor(
        BattleActorControl___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass344_0___coAddAura_b__0(
        BattleActorControl___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  this->fields.isLoading = 0;
}


void __fastcall BattleActorControl___c__DisplayClass385_0___ctor(
        BattleActorControl___c__DisplayClass385_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass385_0___LoadSavedPartAnimation_b__1(
        BattleActorControl___c__DisplayClass385_0_o *this,
        BattlePlayAnimationComponent_SaveData_o *x,
        const MethodInfo *method)
{
  System_String_o *componentName; // x19
  System_String_o *name; // x1

  if ( !x || (this = (BattleActorControl___c__DisplayClass385_0_o *)this->fields.component) == 0LL )
    sub_1C22094(this, x);
  componentName = x->fields.componentName;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return BasicHelper__EqualExceptNullOrEmpty(componentName, name, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass388_0___ctor(
        BattleActorControl___c__DisplayClass388_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleActorControl___c__DisplayClass388_0___PlayMatchPartAnimation_b__0(
        BattleActorControl___c__DisplayClass388_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return BattlePlayAnimationComponent__IsMatchKey(x, this->fields.key, 0LL);
}


void __fastcall BattleActorControl___c__DisplayClass388_0___PlayMatchPartAnimation_b__1(
        BattleActorControl___c__DisplayClass388_0_o *this,
        BattlePlayAnimationComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  BattlePlayAnimationComponent__PlayAnimation(x, this->fields.animName, this->fields.timeline, 0LL);
}


void __fastcall BattleActorControl__coAddAura_d__344___ctor(
        BattleActorControl__coAddAura_d__344_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coAddAura_d__344__MoveNext(
        BattleActorControl__coAddAura_d__344_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleActorControl__coAddAura_d__344_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleActorControl_o *_4__this; // x20
  Il2CppObject *Item; // x21
  Il2CppObject *Entity; // x0
  struct EffectEntity_o **p_effectEntity_5__2; // x21
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  Il2CppObject *v20; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct BattleActorControl___c__DisplayClass344_0_o *_8__1; // x22
  int32_t id; // w21
  System_Action_o *v29; // x23
  BattlePerformance_o *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  PartyOrganizationUtility_o *v37; // x19
  bool result; // w0
  struct BattleActorControl___c__DisplayClass344_0_o *v39; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct EffectEntity_o *effectEntity_5__2; // x8
  struct System_String_StaticFields *v54; // x8
  int64_t Empty; // x1
  int v56; // w22
  int32_t WeaponGroup; // w0
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  Il2CppObject *v61; // x22
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  Il2CppObject *v65; // x0
  System_String_o *v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  BattleEffectUtility_BuffEffectLoadArgument_o *v73; // x21
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
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  UnityEngine_Object_o *Component_object; // x22
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct BattlePerformance_o *performance; // x8
  struct BattleActorControl_o *actorcamera; // x1
  Il2CppObject *v99; // x0
  int32_t v100; // [xsp+4h] [xbp-6Ch] BYREF
  int32_t EffectFolder; // [xsp+8h] [xbp-68h] BYREF
  int32_t v102; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4BDF495 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_TypeInfo);
    sub_1C21E38(&BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMasterData_EffectMaster___);
    sub_1C21E38(&Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
    sub_1C21E38(&Method_UnityEngine_GameObject_AddComponent_BillBoard___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BillBoard___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&Method_BattleActorControl___c__DisplayClass344_0__coAddAura_b__0__);
    sub_1C21E38(&BattleActorControl___c__DisplayClass344_0_TypeInfo);
    sub_1C21E38(&StringLiteral_6023/*"Effect/weapon/{0}"*/);
    this = (BattleActorControl__coAddAura_d__344_o *)sub_1C21E38(&StringLiteral_6026/*"Effect/weapon/{0}/{1}"*/);
    byte_4BDF495 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_22;
  }
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    if ( _1__state )
      return 0;
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__344_o *)_4__this->fields.auraList;
    if ( !this )
      goto LABEL_65;
    if ( System_Collections_Generic_Dictionary_int__object___ContainsKey(
           (System_Collections_Generic_Dictionary_int__object__o *)this,
           v8->fields.auraEffectId,
           (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
    {
      this = (BattleActorControl__coAddAura_d__344_o *)_4__this->fields.auraList;
      if ( !this )
        goto LABEL_65;
      Item = System_Collections_Generic_Dictionary_int__object___get_Item(
               (System_Collections_Generic_Dictionary_int__object__o *)this,
               v8->fields.auraEffectId,
               (const MethodInfo_32B59AC *)Method_System_Collections_Generic_Dictionary_int__GameObject__get_Item__);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Item, 0LL, 0LL) )
        return 0;
    }
    this = (BattleActorControl__coAddAura_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_65;
    this = (BattleActorControl__coAddAura_d__344_o *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)this,
                                                       (const MethodInfo_2FAFE04 *)Method_DataManager_GetMasterData_EffectMaster___);
    if ( !this )
      goto LABEL_65;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v8->fields.auraEffectId,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMaster__EffectEntity__int__GetEntity__);
    v8->fields._effectEntity_5__2 = (struct EffectEntity_o *)Entity;
    p_effectEntity_5__2 = &v8->fields._effectEntity_5__2;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&v8->fields._effectEntity_5__2,
      (int64_t)Entity,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    if ( !v8->fields._effectEntity_5__2 )
    {
LABEL_41:
      v73 = (BattleEffectUtility_BuffEffectLoadArgument_o *)sub_1C22084(BattleEffectUtility_BuffEffectLoadArgument_TypeInfo);
      BattleEffectUtility_BuffEffectLoadArgument___ctor(v73, _4__this, 0LL);
      if ( _4__this )
      {
        actorObject = _4__this->fields.actorObject;
        auraEffectId = v8->fields.auraEffectId;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
        if ( !byte_4BD6BB1 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB1 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        x = static_fields->zeroVector.fields.x;
        y = static_fields->zeroVector.fields.y;
        z = static_fields->zeroVector.fields.z;
        ActorSvtId = BattleActorControl__getActorSvtId(_4__this, 0LL);
        LimitCount = BattleActorControl__getLimitCount(_4__this, 0LL);
        if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        v103.fields.x = x;
        v103.fields.y = y;
        v103.fields.z = z;
        EffectToNode = (UnityEngine_Object_o *)BattleEffectUtility__loadEffectToNode(
                                                 actorObject,
                                                 auraEffectId,
                                                 gameObject,
                                                 v103,
                                                 ActorSvtId,
                                                 LimitCount,
                                                 (BattleEffectUtility_EffectLoadArgument_o *)v73,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleActorControl__coAddAura_d__344_o *)UnityEngine_Object__op_Inequality(EffectToNode, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_61;
        if ( v8->fields.priority > _4__this->fields._currentPriority_k__BackingField )
        {
          BattleActorControl__resetAura(_4__this, 0LL);
          _4__this->fields._currentPriority_k__BackingField = v8->fields.priority;
        }
        if ( EffectToNode )
        {
          Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)EffectToNode,
                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BillBoard___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          this = (BattleActorControl__coAddAura_d__344_o *)UnityEngine_Object__op_Equality(Component_object, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (BattleActorControl__coAddAura_d__344_o *)UnityEngine_GameObject__AddComponent_object_(
                                                               (UnityEngine_GameObject_o *)EffectToNode,
                                                               (const MethodInfo_300044C *)Method_UnityEngine_GameObject_AddComponent_BillBoard___);
            performance = _4__this->fields.performance;
            if ( !performance )
              goto LABEL_65;
            Component_object = (UnityEngine_Object_o *)this;
            if ( !this )
              goto LABEL_65;
            actorcamera = (struct BattleActorControl_o *)performance->fields.actorcamera;
            this->fields.__4__this = actorcamera;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&this->fields.__4__this,
              (int64_t)actorcamera,
              v91,
              v92,
              v93,
              v94,
              v95,
              v96);
          }
          else if ( !Component_object )
          {
            goto LABEL_65;
          }
          BillBoard__setFlip((BillBoard_o *)Component_object, 1, 1, 0LL);
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)EffectToNode, 1, 0LL);
          this = (BattleActorControl__coAddAura_d__344_o *)_4__this->fields.auraList;
          if ( this )
          {
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)this,
              v8->fields.auraEffectId,
              (Il2CppObject *)EffectToNode,
              (const MethodInfo_32B5A38 *)Method_System_Collections_Generic_Dictionary_int__GameObject__set_Item__);
LABEL_61:
            v8->fields._effectEntity_5__2 = 0LL;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._effectEntity_5__2, 0LL, v84, v85, v86, v87, v88, v89);
            return 0;
          }
        }
      }
LABEL_65:
      sub_1C22094(this, method);
    }
    v20 = (Il2CppObject *)sub_1C22084(BattleActorControl___c__DisplayClass344_0_TypeInfo);
    System_Object___ctor(v20, 0LL);
    v8->fields.__8__1 = (struct BattleActorControl___c__DisplayClass344_0_o *)v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v20, v21, v22, v23, v24, v25, v26);
    _8__1 = v8->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_65;
    _8__1->fields.isLoading = 1;
    if ( !*p_effectEntity_5__2 )
      goto LABEL_65;
    id = (*p_effectEntity_5__2)->fields.id;
    v29 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      v29,
      (Il2CppObject *)_8__1,
      Method_BattleActorControl___c__DisplayClass344_0__coAddAura_b__0__,
      0LL);
    v30 = _4__this->fields.performance;
    if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
    BattleEffectUtility__LoadEffectAssetIfNotYet(id, v29, v30, 0LL);
  }
  this = (BattleActorControl__coAddAura_d__344_o *)&v8->fields.__8__1;
  v39 = v8->fields.__8__1;
  if ( !v39 )
    goto LABEL_65;
  if ( v39->fields.isLoading )
  {
    v8->fields.__2__current = 0LL;
    p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
    result = 1;
    *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
    return result;
  }
  v8->fields.__8__1 = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v2, v3, v4, v5, v6, v7);
  effectEntity_5__2 = v8->fields._effectEntity_5__2;
  if ( !effectEntity_5__2 || effectEntity_5__2->fields.folderType != 3 )
    goto LABEL_41;
  v54 = string_TypeInfo->static_fields;
  Empty = (int64_t)v54->Empty;
  v8->fields._effectPath_5__3 = v54->Empty;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._effectPath_5__3, Empty, v47, v48, v49, v50, v51, v52);
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__344_o *)_4__this->fields.battleSvtData;
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__344_o *)BattleServantData__getEffectFolder((BattleServantData_o *)this, 0LL);
  if ( !_4__this->fields.battleSvtData )
    goto LABEL_65;
  v56 = (int)this;
  WeaponGroup = BattleServantData__getWeaponGroup(_4__this->fields.battleSvtData, 0, 0LL);
  if ( v56 )
  {
    v102 = WeaponGroup;
    this = (BattleActorControl__coAddAura_d__344_o *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v58, v59, v60);
    if ( !_4__this->fields.battleSvtData )
      goto LABEL_65;
    v61 = (Il2CppObject *)this;
    EffectFolder = BattleServantData__getEffectFolder(_4__this->fields.battleSvtData, 0LL);
    v65 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &EffectFolder, v62, v63, v64);
    v66 = System_String__Format_63129848((System_String_o *)StringLiteral_6026/*"Effect/weapon/{0}/{1}"*/, v61, v65, 0LL);
  }
  else
  {
    v100 = WeaponGroup;
    v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v100, v58, v59, v60);
    v66 = System_String__Format((System_String_o *)StringLiteral_6023/*"Effect/weapon/{0}"*/, v99, 0LL);
  }
  v8->fields._effectPath_5__3 = v66;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._effectPath_5__3, (int64_t)v66, v67, v68, v69, v70, v71, v72);
LABEL_22:
  this = (BattleActorControl__coAddAura_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__344_o *)ServantAssetLoadManager__CheckLoadList(
                                                     (ServantAssetLoadManager_o *)this,
                                                     v8->fields._effectPath_5__3,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v8->fields.__2__current = 0LL;
    v37 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
    sub_1C21DDC(v37, 0LL, v31, v32, v33, v34, v35, v36);
    *(_DWORD *)&v37[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
    return 1;
  }
  if ( !_4__this )
    goto LABEL_65;
  this = (BattleActorControl__coAddAura_d__344_o *)_4__this->fields.auraList;
  if ( !this )
    goto LABEL_65;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v8->fields.auraEffectId,
          (const MethodInfo_32B5C40 *)Method_System_Collections_Generic_Dictionary_int__GameObject__ContainsKey__) )
  {
    v8->fields._effectPath_5__3 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._effectPath_5__3, 0LL, v41, v42, v43, v44, v45, v46);
    goto LABEL_41;
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__344__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coAddAura_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coAddAura_d__344__System_Collections_IEnumerator_Reset(
        BattleActorControl__coAddAura_d__344_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__coAddAura_d__344_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coAddAura_d__344__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coAddAura_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coAddAura_d__344__System_IDisposable_Dispose(
        BattleActorControl__coAddAura_d__344_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServantChange_d__351___ctor(
        BattleActorControl__colShiftServantChange_d__351_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServantChange_d__351__MoveNext(
        BattleActorControl__colShiftServantChange_d__351_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colShiftServantChange_d__351_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  struct BattleActionData_ShiftServant_o *shiftSvt; // x8
  struct BattlePerformance_o *performance; // x8
  Il2CppObject *Component_object; // x0
  BattleActorControl__colShiftServantChange_d__351_o **p_fadeComp_5__2; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  DefCoroutine_c *v20; // x0
  int64_t milliSecTwo; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  PartyOrganizationUtility_o *v24; // x19
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int v31; // w8
  struct BattleActionData_ShiftServant_o *v32; // x8
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct BattlePerformance_o *v57; // x9
  struct BattleServantData_o *battleSvtData; // x8
  struct BattlePerformance_o *v59; // x8
  struct BattleData_o *data; // x8
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *v68; // x21
  System_Collections_Generic_List_int__o *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *gameObject; // x20
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  UnityEngine_Color_o v84; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v85; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4BDF496 & 1) == 0 )
  {
    sub_1C21E38(&DefCoroutine_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__colShiftServantChange_d__351_o *)sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF496 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)v2->fields.shiftSvt;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)((__int64 (__fastcall *)(BattleActorControl__colShiftServantChange_d__351_o *, struct BattleServantData_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
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
      this = (BattleActorControl__colShiftServantChange_d__351_o *)performance->fields.fadeObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_NGUIFader___);
      v2->fields._fadeComp_5__2 = (struct NGUIFader_o *)Component_object;
      p_fadeComp_5__2 = (BattleActorControl__colShiftServantChange_d__351_o **)&v2->fields._fadeComp_5__2;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._fadeComp_5__2,
        (int64_t)Component_object,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      if ( !v2->fields.isShift )
        goto LABEL_13;
      this = *p_fadeComp_5__2;
      if ( !*p_fadeComp_5__2 )
        goto LABEL_78;
      v84.fields.r = 1.0;
      v84.fields.g = 1.0;
      v84.fields.b = 1.0;
      v84.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v84, 0.2, 0, 0LL, 0, 0LL);
LABEL_13:
      v20 = DefCoroutine_TypeInfo;
      if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
        v20 = DefCoroutine_TypeInfo;
      }
      milliSecTwo = (int64_t)v20->static_fields->milliSecTwo;
      v2->fields.__2__current = (Il2CppObject *)milliSecTwo;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, milliSecTwo, v14, v15, v16, v17, v18, v19);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      v24 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v24, 0LL, v25, v26, v27, v28, v29, v30);
      v31 = 2;
      goto LABEL_77;
    case 2:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      v32 = v2->fields.shiftSvt;
      if ( !v32 )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_43288192((BattlePerformance_o *)this, v32->fields.loadedAssetArgs, 0, 0LL);
      v2->fields.__2__current = 0LL;
      v24 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v24, 0LL, v33, v34, v35, v36, v37, v38);
      v31 = 3;
      goto LABEL_77;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_28:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colShiftServantChange_d__351_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v24 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v24, 0LL, v39, v40, v41, v42, v43, v44);
        v31 = 4;
LABEL_77:
        *(_DWORD *)&v24[-1].fields._IsQuestStartMenuMode_k__BackingField = v31;
        return 1;
      }
      if ( !_4__this )
        goto LABEL_78;
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      v68 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v68, 0LL, 0LL) )
        goto LABEL_71;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.performance;
      if ( this )
      {
        BattlePerformance__RemoveCollider((BattlePerformance_o *)this, (UnityEngine_MeshCollider_o *)v68, 0LL);
LABEL_71:
        v69 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
        v2->fields._moveEffect_5__3 = v69;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v2->fields._moveEffect_5__3,
          (int64_t)v69,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75);
        BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
        BattleActorControl__DestroyImmediateActorObject(_4__this, 0LL);
        motionFSM = _4__this->fields.motionFSM;
        if ( motionFSM )
        {
          if ( !motionFSM->max_length )
            sub_1C2209C(this, method);
          this = (BattleActorControl__colShiftServantChange_d__351_o *)motionFSM->m_Items[0];
          if ( this )
          {
            gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__DestroyImmediate_70869800(gameObject, 0LL);
            v2->fields.__2__current = 0LL;
            v24 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
            sub_1C21DDC(v24, 0LL, v78, v79, v80, v81, v82, v83);
            v31 = 5;
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
      this = (BattleActorControl__colShiftServantChange_d__351_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v24 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v24, 0LL, v45, v46, v47, v48, v49, v50);
        v31 = 6;
        goto LABEL_77;
      }
      if ( !_4__this )
        goto LABEL_78;
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
      if ( !v2->fields.isShift )
        goto LABEL_45;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)v2->fields._fadeComp_5__2;
      if ( !this )
        goto LABEL_78;
      v85.fields.r = 1.0;
      v85.fields.g = 1.0;
      v85.fields.b = 1.0;
      v85.fields.a = 1.0;
      NGUIFader__FadeStart((NGUIFader_o *)this, v85, 0.2, 1, 0LL, 0, 0LL);
LABEL_45:
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)BattleServantData__checkPlayer(
                                                                     (BattleServantData_o *)this,
                                                                     0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_54;
      v57 = _4__this->fields.performance;
      if ( !v57 )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      if ( !battleSvtData )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)v57->fields.data;
      if ( !this )
        goto LABEL_78;
      BattleData__replaceCommandCard(
        (BattleData_o *)this,
        battleSvtData->fields.uniqueId,
        battleSvtData->fields.uniqueId,
        0LL);
      v59 = _4__this->fields.performance;
      if ( !v59 )
        goto LABEL_78;
      data = v59->fields.data;
      if ( !data )
        goto LABEL_78;
      this = (BattleActorControl__colShiftServantChange_d__351_o *)data->fields.logic;
      if ( !this )
        goto LABEL_78;
      BattleLogic__setDrawCard((BattleLogic_o *)this, 0LL);
LABEL_54:
      if ( v2->fields._moveEffect_5__3 )
      {
        v2->fields.__2__current = 0LL;
        v24 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v24, 0LL, v51, v52, v53, v54, v55, v56);
        v31 = 7;
        goto LABEL_77;
      }
LABEL_56:
      v2->fields._fadeComp_5__2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._fadeComp_5__2, 0LL, v51, v52, v53, v54, v55, v56);
      v2->fields._moveEffect_5__3 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._moveEffect_5__3, 0LL, v61, v62, v63, v64, v65, v66);
LABEL_57:
      this = (BattleActorControl__colShiftServantChange_d__351_o *)_4__this->fields.performance;
      if ( !this
        || (this = (BattleActorControl__colShiftServantChange_d__351_o *)BattlePerformance__get_FieldEnvData(
                                                                           (BattlePerformance_o *)this,
                                                                           0LL)) == 0LL )
      {
LABEL_78:
        sub_1C22094(this, method);
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


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__351__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServantChange_d__351_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServantChange_d__351__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServantChange_d__351_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__colShiftServantChange_d__351_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServantChange_d__351__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServantChange_d__351_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServantChange_d__351__System_IDisposable_Dispose(
        BattleActorControl__colShiftServantChange_d__351_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colShiftServant_d__350___ctor(
        BattleActorControl__colShiftServant_d__350_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colShiftServant_d__350__MoveNext(
        BattleActorControl__colShiftServant_d__350_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x0
  Il2CppObject *v5; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  bool result; // w0
  Il2CppObject **v14; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
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
        sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v5, v7, v8, v9, v10, v11, v12);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_10:
      sub_1C22094(_4__this, method);
    }
    return 0;
  }
  this->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_10;
  BattleActorControl__ShiftServantChangeAfter(_4__this, this->fields.isShift, 0LL);
  this->fields.__2__current = 0LL;
  v14 = &this->fields.__2__current;
  sub_1C21DDC((PartyOrganizationUtility_o *)v14, 0LL, v15, v16, v17, v18, v19, v20);
  *((_DWORD *)v14 - 2) = 2;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__350__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colShiftServant_d__350_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colShiftServant_d__350__System_Collections_IEnumerator_Reset(
        BattleActorControl__colShiftServant_d__350_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__colShiftServant_d__350_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colShiftServant_d__350__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colShiftServant_d__350_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colShiftServant_d__350__System_IDisposable_Dispose(
        BattleActorControl__colShiftServant_d__350_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__collChangeAppearance_d__339___ctor(
        BattleActorControl__collChangeAppearance_d__339_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__collChangeAppearance_d__339__MoveNext(
        BattleActorControl__collChangeAppearance_d__339_o *this,
        const MethodInfo *method)
{
  BattleActorControl__collChangeAppearance_d__339_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  PartyOrganizationUtility_o *v21; // x19
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int v28; // w8
  struct BattleServantData_o *battleSvtData; // x8
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct BattleServantData_o *v37; // x8
  ServantAssetArgs_o *v38; // x21
  _BOOL4 isForceAppearance; // w22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7

  v2 = this;
  if ( (byte_4BDF497 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleActorControl__collChangeAppearance_d__339_o *)sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    byte_4BDF497 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__339_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__339_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_43;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v5, v6, v7, v8, v9, v10);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
      this = (BattleActorControl__collChangeAppearance_d__339_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_43;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_18;
      this = (BattleActorControl__collChangeAppearance_d__339_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_43;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_18:
      v14 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v14;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._moveEffect_5__2,
        (int64_t)v14,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v21 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v21, 0LL, v22, v23, v24, v25, v26, v27);
      v28 = 2;
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
      v21 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v21, 0LL, v31, v32, v33, v34, v35, v36);
      v28 = 3;
      goto LABEL_41;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__339_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      BattleServantData__changeAppearanceId((BattleServantData_o *)this, 0LL);
      this = (BattleActorControl__collChangeAppearance_d__339_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_43;
      this = (BattleActorControl__collChangeAppearance_d__339_o *)BattleServantData__UpdateLoadedAssetArgs(
                                                                    (BattleServantData_o *)this,
                                                                    0LL);
      v37 = _4__this->fields.battleSvtData;
      if ( !v37 )
        goto LABEL_43;
      v38 = (ServantAssetArgs_o *)this;
      isForceAppearance = v37->fields.isForceAppearance;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadBattleActor(v38, isForceAppearance, 0LL);
LABEL_32:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__collChangeAppearance_d__339_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v21 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v21, 0LL, v40, v41, v42, v43, v44, v45);
        v28 = 4;
LABEL_41:
        *(_DWORD *)&v21[-1].fields._IsQuestStartMenuMode_k__BackingField = v28;
        return 1;
      }
      if ( !_4__this )
LABEL_43:
        sub_1C22094(this, method);
      BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setDir(_4__this, 0LL);
      BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
      BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
      if ( v2->fields._moveEffect_5__2 )
      {
        v2->fields.__2__current = 0LL;
        v21 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v21, 0LL, v46, v47, v48, v49, v50, v51);
        v28 = 5;
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


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__339__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__collChangeAppearance_d__339_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__collChangeAppearance_d__339__System_Collections_IEnumerator_Reset(
        BattleActorControl__collChangeAppearance_d__339_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__collChangeAppearance_d__339_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__collChangeAppearance_d__339__System_Collections_IEnumerator_get_Current(
        BattleActorControl__collChangeAppearance_d__339_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__collChangeAppearance_d__339__System_IDisposable_Dispose(
        BattleActorControl__collChangeAppearance_d__339_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadDressServant_d__334___ctor(
        BattleActorControl__colloadDressServant_d__334_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadDressServant_d__334__MoveNext(
        BattleActorControl__colloadDressServant_d__334_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadDressServant_d__334_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  int32_t DressId; // w0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  bool result; // w0
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  PartyOrganizationUtility_o *v28; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int v35; // w8
  struct BattleServantData_o *battleSvtData; // x8
  _BOOL4 flg; // w21
  ServantAssetArgs_o *LoadedAssetArgs_k__BackingField; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int v45; // w8
  ServantAssetArgs_o *updated; // x21
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  ServantAssetArgs_o *v53; // x21
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7

  v2 = this;
  if ( (byte_4BDF498 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    this = (BattleActorControl__colloadDressServant_d__334_o *)sub_1C21E38(&StringLiteral_5591/*"END_LOAD"*/);
    byte_4BDF498 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      DressId = BattleServantData__getDressId((BattleServantData_o *)this, 0LL);
      v2->fields._dressId_5__2 = DressId;
      if ( DressId < 1 )
        goto LABEL_53;
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_61;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v12, v13, v14, v15, v16, v17);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_61;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_20;
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_61;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_20:
      v21 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__3 = v21;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._moveEffect_5__3,
        (int64_t)v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      BattleActorControl__SetPartAnimationSaveData(_4__this, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      v2->fields.__2__current = 0LL;
      v28 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v28, 0LL, v29, v30, v31, v32, v33, v34);
      v35 = 2;
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
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__2__current, 0LL, v39, v40, v41, v42, v43, v44);
      if ( flg )
        v45 = 3;
      else
        v45 = 5;
      v2->fields.__1__state = v45;
      return 1;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.battleSvtData;
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
      this = (BattleActorControl__colloadDressServant_d__334_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_47;
      v2->fields.__2__current = 0LL;
      v28 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v28, 0LL, v47, v48, v49, v50, v51, v52);
      v35 = 4;
      break;
    case 4:
      v2->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_61;
      this = (BattleActorControl__colloadDressServant_d__334_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_61;
      LODWORD(this[4].klass) = -1;
      v53 = BattleServantData__UpdateLoadedAssetArgs((BattleServantData_o *)this, 0LL);
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServant(v53, 0, 0LL);
LABEL_43:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadDressServant_d__334_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v2->fields.__2__current = 0LL;
        v28 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v28, 0LL, v54, v55, v56, v57, v58, v59);
        v35 = 6;
      }
      else
      {
LABEL_47:
        if ( !_4__this )
LABEL_61:
          sub_1C22094(this, method);
        BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setDir(_4__this, 0LL);
        BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
        BattleActorControl__setReloadWeaponMotion(_4__this, 0, 0LL);
        if ( v2->fields._moveEffect_5__3 )
        {
          v2->fields.__2__current = 0LL;
          v28 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(v28, 0LL, v60, v61, v62, v63, v64, v65);
          v35 = 7;
        }
        else
        {
LABEL_52:
          v2->fields._moveEffect_5__3 = 0LL;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._moveEffect_5__3, 0LL, v60, v61, v62, v63, v64, v65);
LABEL_53:
          v2->fields.__2__current = 0LL;
          v28 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
          sub_1C21DDC(v28, 0LL, v5, v6, v7, v8, v9, v10);
          v35 = 8;
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
      BattleActorControl__sendEventFSM_45066280(_4__this, (System_String_o *)StringLiteral_5591/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
  *(_DWORD *)&v28[-1].fields._IsQuestStartMenuMode_k__BackingField = v35;
  return 1;
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__334__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadDressServant_d__334_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadDressServant_d__334__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadDressServant_d__334_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__colloadDressServant_d__334_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadDressServant_d__334__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadDressServant_d__334_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadDressServant_d__334__System_IDisposable_Dispose(
        BattleActorControl__colloadDressServant_d__334_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__colloadTransformServant_d__331___ctor(
        BattleActorControl__colloadTransformServant_d__331_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__colloadTransformServant_d__331__MoveNext(
        BattleActorControl__colloadTransformServant_d__331_o *this,
        const MethodInfo *method)
{
  BattleActorControl__colloadTransformServant_d__331_o *v2; // x19
  struct BattleActorControl_o *_4__this; // x20
  UnityEngine_Object_o *actorObject; // x21
  Il2CppObject *Component_object; // x21
  System_Collections_Generic_List_int__o *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct PlayMakerFSM_array *motionFSM; // x8
  UnityEngine_Object_o *v14; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  bool result; // w0
  BattleServantData_o *battleSvtData; // x22
  BattleActorControl_ExtraLoadedVoiceArgs_o *v24; // x21
  const MethodInfo *v25; // x2
  int32_t dispLimitCount_k__BackingField; // w22
  int32_t svtId_k__BackingField; // w24
  int32_t overwriteSvtVoiceId_k__BackingField; // w23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  System_Collections_Generic_List_object__o *v35; // x23
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x8
  _QWORD *v43; // x9
  __int64 _2__current_low; // x10
  __int64 v45; // x8
  System_Collections_IEnumerator_o *v46; // x0
  PartyOrganizationUtility_o *v47; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int v54; // w8
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  BattleActionData_ShiftServant_o *ShiftServant; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct BattleActionData_ShiftServant_o *shiftSvtData_5__3; // x8
  UnityEngine_WaitForEndOfFrame_o *v69; // x20
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  struct BattleActionData_ShiftServant_o *v76; // x8
  struct BattleServantSnapShot_o *AfterSvtCache_k__BackingField; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct BattlePerformance_o *performance; // x9
  struct BattleServantData_o *v87; // x8
  struct BattlePerformance_o *v88; // x8

  v2 = this;
  if ( (byte_4BDF499 & 1) == 0 )
  {
    sub_1C21E38(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1C21E38(&BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
    sub_1C21E38(&System_GC_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    sub_1C21E38(&ServantAssetLoadManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C21E38(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (BattleActorControl__colloadTransformServant_d__331_o *)sub_1C21E38(&StringLiteral_5591/*"END_LOAD"*/);
    byte_4BDF499 = 1;
  }
  _4__this = v2->fields.__4__this;
  switch ( v2->fields.__1__state )
  {
    case 0:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimation((BattleFBXComponent_o *)this, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.fbxcomponent;
      if ( !this )
        goto LABEL_78;
      BattleFBXComponent__stopAnimationCheck((BattleFBXComponent_o *)this, 0LL);
      actorObject = (UnityEngine_Object_o *)_4__this->fields.actorObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(actorObject, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.actorObject;
      if ( !this )
        goto LABEL_78;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshCollider___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
        goto LABEL_16;
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__RemoveCollider(
        (BattlePerformance_o *)this,
        (UnityEngine_MeshCollider_o *)Component_object,
        0LL);
LABEL_16:
      v6 = BattleActorControl__MoveLoopEffectFromActorObject(_4__this, 0LL);
      v2->fields._moveEffect_5__2 = v6;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._moveEffect_5__2, (int64_t)v6, v7, v8, v9, v10, v11, v12);
      BattleActorControl__RemovePartAnimationSaveData(_4__this, 1, 0LL);
      BattleActorControl__DestroyActorObject(_4__this, 0LL);
      motionFSM = _4__this->fields.motionFSM;
      if ( !motionFSM )
        goto LABEL_78;
      if ( !motionFSM->max_length )
        sub_1C2209C(this, method);
      v14 = (UnityEngine_Object_o *)motionFSM->m_Items[0];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v14, 0LL);
      v2->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v16, v17, v18, v19, v20, v21);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_78;
      battleSvtData = _4__this->fields.battleSvtData;
      v24 = (BattleActorControl_ExtraLoadedVoiceArgs_o *)sub_1C22084(BattleActorControl_ExtraLoadedVoiceArgs_TypeInfo);
      BattleActorControl_ExtraLoadedVoiceArgs___ctor(v24, battleSvtData, v25);
      if ( !v24 )
        goto LABEL_78;
      svtId_k__BackingField = v24->fields._svtId_k__BackingField;
      dispLimitCount_k__BackingField = v24->fields._dispLimitCount_k__BackingField;
      overwriteSvtVoiceId_k__BackingField = v24->fields._overwriteSvtVoiceId_k__BackingField;
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      ServantAssetLoadManager__preloadServantVoice(
        svtId_k__BackingField,
        dispLimitCount_k__BackingField,
        overwriteSvtVoiceId_k__BackingField,
        0LL);
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.extraLoadedVoiceArgsList;
      if ( !this )
      {
        v35 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v35,
          (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs___ctor__);
        _4__this->fields.extraLoadedVoiceArgsList = (struct System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__o *)v35;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.extraLoadedVoiceArgsList,
          (int64_t)v35,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
        this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.extraLoadedVoiceArgsList;
        if ( !this )
          goto LABEL_78;
      }
      v42 = *(_QWORD *)&this->fields.__1__state;
      v43 = Method_System_Collections_Generic_List_BattleActorControl_ExtraLoadedVoiceArgs__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v42 )
        goto LABEL_78;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v42 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v24,
          *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v45 = v42 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v45 + 32) = v24;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 32), (int64_t)v24, v29, v30, v31, v32, v33, v34);
      }
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.actiondata;
      if ( !this )
        goto LABEL_78;
      ShiftServant = BattleActionData__getShiftServant((BattleActionData_o *)this, 0LL);
      v2->fields._shiftSvtData_5__3 = ShiftServant;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v2->fields._shiftSvtData_5__3,
        (int64_t)ShiftServant,
        v62,
        v63,
        v64,
        v65,
        v66,
        v67);
      shiftSvtData_5__3 = v2->fields._shiftSvtData_5__3;
      if ( !shiftSvtData_5__3 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__unloadServantSet_43288192(
        (BattlePerformance_o *)this,
        shiftSvtData_5__3->fields.loadedAssetArgs,
        0,
        0LL);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__331_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_64162132(0LL);
        v69 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C22084(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v69, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v69;
        v47 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(v47, (int64_t)v69, v70, v71, v72, v73, v74, v75);
        v54 = 2;
        goto LABEL_77;
      }
LABEL_51:
      v76 = v2->fields._shiftSvtData_5__3;
      if ( !v76 )
        goto LABEL_78;
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.battleSvtData;
      if ( !this )
        goto LABEL_78;
      AfterSvtCache_k__BackingField = v76->fields._AfterSvtCache_k__BackingField;
      if ( AfterSvtCache_k__BackingField
        && (methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(AfterSvtCache_k__BackingField->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        v79 = (BattleServantSnapShotShiftServant_c *)AfterSvtCache_k__BackingField->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
            ? (BattleServantSnapShotShiftServant_o *)AfterSvtCache_k__BackingField
            : 0LL;
      }
      else
      {
        v79 = 0LL;
      }
      BattleServantData__ApplyCacheForTransformServant((BattleServantData_o *)this, v79, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.performance;
      if ( !this )
        goto LABEL_78;
      BattlePerformance__preLoadServantSet((BattlePerformance_o *)this, _4__this->fields.battleSvtData, 0LL);
LABEL_61:
      if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      this = (BattleActorControl__colloadTransformServant_d__331_o *)ServantAssetLoadManager__checkLoad(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( _4__this )
        {
          BattleActorControl__setServantData(_4__this, _4__this->fields.battleSvtData, 0LL);
          BattleActorControl__setDir(_4__this, 0LL);
          BattleActorControl__setReloadWeaponMotion(_4__this, 1, 0LL);
          BattleActorControl__UpdateEachServantStatusUiByTransform(_4__this, 0LL);
          this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.battleSvtData;
          if ( this )
          {
            BattleServantData__UpdateStatusUIByTransform((BattleServantData_o *)this, 0LL);
            BattleActorControl__setAddAura(_4__this, _4__this->fields.battleSvtData, 0LL);
            performance = _4__this->fields.performance;
            if ( performance )
            {
              v87 = _4__this->fields.battleSvtData;
              if ( v87 )
              {
                this = (BattleActorControl__colloadTransformServant_d__331_o *)performance->fields.data;
                if ( this )
                {
                  BattleData__replaceCommandCard((BattleData_o *)this, v87->fields.uniqueId, v87->fields.uniqueId, 0LL);
                  v88 = _4__this->fields.performance;
                  if ( v88 )
                  {
                    this = (BattleActorControl__colloadTransformServant_d__331_o *)v88->fields.commandPerf;
                    if ( this )
                    {
                      BattlePerformanceCommandCard__ReflectSelectCommandDataToUi(
                        (BattlePerformanceCommandCard_o *)this,
                        v88->fields.data,
                        _4__this->fields.battleSvtData,
                        0LL);
                      this = (BattleActorControl__colloadTransformServant_d__331_o *)_4__this->fields.performance;
                      if ( this )
                      {
                        this = (BattleActorControl__colloadTransformServant_d__331_o *)BattlePerformance__get_FieldEnvData(
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
                            v47 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
                            sub_1C21DDC(v47, 0LL, v55, v56, v57, v58, v59, v60);
                            v54 = 5;
                          }
                          else
                          {
LABEL_76:
                            v2->fields.__2__current = 0LL;
                            v47 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
                            sub_1C21DDC(v47, 0LL, v55, v56, v57, v58, v59, v60);
                            v54 = 6;
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
        sub_1C22094(this, method);
      }
      v2->fields.__2__current = 0LL;
      v47 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v47, 0LL, v80, v81, v82, v83, v84, v85);
      v54 = 4;
LABEL_77:
      *(_DWORD *)&v47[-1].fields._IsQuestStartMenuMode_k__BackingField = v54;
      return 1;
    case 2:
      v2->fields.__1__state = -1;
      this = (BattleActorControl__colloadTransformServant_d__331_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleActorControl__colloadTransformServant_d__331_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_78;
      v46 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v2->fields.__2__current = (Il2CppObject *)v46;
      v47 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
      sub_1C21DDC(v47, (int64_t)v46, v48, v49, v50, v51, v52, v53);
      v54 = 3;
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
      BattleActorControl__sendEventFSM_45066280(_4__this, (System_String_o *)StringLiteral_5591/*"END_LOAD"*/, 0, 0LL);
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__331__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__colloadTransformServant_d__331_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__colloadTransformServant_d__331__System_Collections_IEnumerator_Reset(
        BattleActorControl__colloadTransformServant_d__331_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__colloadTransformServant_d__331_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__colloadTransformServant_d__331__System_Collections_IEnumerator_get_Current(
        BattleActorControl__colloadTransformServant_d__331_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__colloadTransformServant_d__331__System_IDisposable_Dispose(
        BattleActorControl__colloadTransformServant_d__331_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__219___ctor(
        BattleActorControl__coroutinePostCallBack_d__219_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__coroutinePostCallBack_d__219__MoveNext(
        BattleActorControl__coroutinePostCallBack_d__219_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7

  if ( (byte_4BDF49A & 1) == 0 )
  {
    sub_1C21E38(&DefCoroutine_TypeInfo);
    sub_1C21E38(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4BDF49A = 1;
  }
  _1__state = this->fields.__1__state;
  if ( (unsigned int)(_1__state - 1) < 2 )
  {
    callBack = this->fields.callBack;
    this->fields.__1__state = -1;
    if ( !callBack )
      sub_1C22094(0LL, method);
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
    v17 = (UnityEngine_WaitForSeconds_o *)sub_1C22084(UnityEngine_WaitForSeconds_TypeInfo);
    UnityEngine_WaitForSeconds___ctor(v17, waitTime, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    p__2__current = &this->fields.__2__current;
    sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)v17, v19, v20, v21, v22, v23, v24);
    result = 1;
    *((_DWORD *)p__2__current - 2) = 1;
  }
  else
  {
    v12 = DefCoroutine_TypeInfo;
    if ( !DefCoroutine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DefCoroutine_TypeInfo);
      v12 = DefCoroutine_TypeInfo;
    }
    static_fields = (Il2CppObject **)v12->static_fields;
    v14 = *static_fields;
    this->fields.__2__current = *static_fields;
    v15 = &this->fields.__2__current;
    sub_1C21DDC((PartyOrganizationUtility_o *)v15, (int64_t)v14, v2, v3, v4, v5, v6, v7);
    *((_DWORD *)v15 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__219__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__coroutinePostCallBack_d__219_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__coroutinePostCallBack_d__219__System_Collections_IEnumerator_Reset(
        BattleActorControl__coroutinePostCallBack_d__219_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__coroutinePostCallBack_d__219_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__coroutinePostCallBack_d__219__System_Collections_IEnumerator_get_Current(
        BattleActorControl__coroutinePostCallBack_d__219_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__coroutinePostCallBack_d__219__System_IDisposable_Dispose(
        BattleActorControl__coroutinePostCallBack_d__219_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleActorControl__waitChangeApp_d__337___ctor(
        BattleActorControl__waitChangeApp_d__337_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleActorControl__waitChangeApp_d__337__MoveNext(
        BattleActorControl__waitChangeApp_d__337_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  BattleActorControl_o *_4__this; // x20
  System_Collections_IEnumerator_o *v5; // x0
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
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
      started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                  (UnityEngine_MonoBehaviour_o *)_4__this,
                                  v5,
                                  0LL);
      this->fields.__2__current = started;
      p__2__current = &this->fields.__2__current;
      sub_1C21DDC((PartyOrganizationUtility_o *)p__2__current, (int64_t)started, v8, v9, v10, v11, v12, v13);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
LABEL_8:
    sub_1C22094(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__337__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleActorControl__waitChangeApp_d__337_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleActorControl__waitChangeApp_d__337__System_Collections_IEnumerator_Reset(
        BattleActorControl__waitChangeApp_d__337_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleActorControl__waitChangeApp_d__337_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall BattleActorControl__waitChangeApp_d__337__System_Collections_IEnumerator_get_Current(
        BattleActorControl__waitChangeApp_d__337_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleActorControl__waitChangeApp_d__337__System_IDisposable_Dispose(
        BattleActorControl__waitChangeApp_d__337_o *this,
        const MethodInfo *method)
{
  ;
}