void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  void *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_String_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7

  if ( (byte_4BDFA27 & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_12899/*"Servants"*/);
    sub_1C21E38(&StringLiteral_16809/*"_blurOnOff"*/);
    sub_1C21E38(&StringLiteral_16835/*"_mapIdVal"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFA27 = 1;
  }
  v9 = StringLiteral_12899/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12899/*"Servants"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voiceTypeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_16835/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16835/*"_mapIdVal"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.reelUvIdKey, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_16809/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16809/*"_blurOnOff"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.reelBlurKey, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voiceDataStr, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (struct System_String_array *)sub_1C21EE0(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voiceIdArray, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  float v7; // s8
  int32_t v8; // w21

  v6 = this;
  if ( (byte_4BDFA22 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    this = (SlotEffectComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4BDFA22 = 1;
  }
  if ( flg )
    v7 = 1.0;
  else
    v7 = 0.0;
  if ( !list )
    goto LABEL_13;
  if ( list->fields._size >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      this = (SlotEffectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)list,
                                        v8,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v7, 0LL);
      if ( ++v8 >= list->fields._size )
        return;
    }
LABEL_13:
    sub_1C22094(this, list);
  }
}


void __fastcall SlotEffectComponent__CommonReelFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x21
  unsigned __int64 v7; // x22

  v6 = this;
  if ( (byte_4BDFA21 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4BDFA21 = 1;
  }
  if ( !ids )
    goto LABEL_12;
  if ( (int)ids->max_length >= 1 )
  {
    v7 = 0LL;
    while ( list )
    {
      this = (SlotEffectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)list,
                                        v7,
                                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
        sub_1C2209C(this, list);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat(
        (UnityEngine_Material_o *)this,
        v6->fields.reelUvIdKey,
        (float)ids->m_Items[++v7],
        0LL);
      if ( (__int64)v7 >= (int)ids->max_length )
        return;
    }
LABEL_12:
    sub_1C22094(this, list);
  }
}


void __fastcall SlotEffectComponent__EndGimmick(SlotEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *endCallback; // x8

  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))endCallback->fields.m_target)(
      endCallback->fields.original_method_info,
      *(_QWORD *)&endCallback->fields.extra_arg);
}


void __fastcall SlotEffectComponent__PlaySe(
        SlotEffectComponent_o *this,
        System_String_o *seName,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  System_String_o *leftReelList; // x1
  unsigned int v9; // w8

  if ( (byte_4BDFA25 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C21E38(&Method_SlotEffectComponent_PlaySe__);
    byte_4BDFA25 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C22094(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C21E50(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  leftReelList = (System_String_o *)v4->fields.leftReelList;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, leftReelList, 0, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1C2209C(v7, leftReelList);
  OverwriteAssetSoundName__PlaySe_39859480(
    v7,
    leftReelList,
    (System_String_o *)v4->fields.centerReelList,
    1.0,
    0LL,
    0,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  SlotEffectComponent_o *v4; // x20
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x20
  System_String_o *v8; // x19
  SeManager_c *v9; // x0
  float DEFAULT_VOLUME; // s8

  v4 = this;
  if ( (byte_4BDFA26 & 1) == 0 )
  {
    sub_1C21E38(&SeManager_TypeInfo);
    this = (SlotEffectComponent_o *)sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDFA26 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1C22094(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C2209C(this, *(_QWORD *)&index);
    voiceDataStr = v4->fields.voiceDataStr;
    v8 = voiceIdArray->m_Items[index];
    v9 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v9 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v9->static_fields->DEFAULT_VOLUME;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_39957484(voiceDataStr, v8, DEFAULT_VOLUME, 0LL, 0, 0LL);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4BDFA24 & 1) == 0 )
  {
    sub_1C21E38(&SoundManager_TypeInfo);
    byte_4BDFA24 = 1;
  }
  voiceDataStr = this->fields.voiceDataStr;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(voiceDataStr, 0LL);
}


void __fastcall SlotEffectComponent__SetCenterReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.centerReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
        const MethodInfo *method)
{
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v10; // x0
  struct System_String_o *v11; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  char *Item; // x0
  System_Collections_Generic_Dictionary_string__object__c *v19; // x1
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_object__o *v23; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  int64_t v25; // x21
  __int64 v26; // x23
  System_Collections_Generic_Dictionary_object__object__o *v27; // x22
  __int64 methodPtr_low; // x9
  int32_t v29; // w2
  int v30; // w8
  __int64 v31; // x9
  int64_t v32; // x23
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  int64_t v39; // x22
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  struct System_String_array **p_voiceIdArray; // x20
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  System_String_o *v53; // x20
  SlotEffectComponent_o *v54; // x0
  System_Int32_array *v55; // x1
  System_Int32_array *v56; // x2
  System_Int32_array *v57; // x3
  const MethodInfo *v58; // x4
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDFA20 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Shuffle_object___);
    sub_1C21E38(&Method_BasicHelper_Shuffle_string___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object___ctor___77579808);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&SoundManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_25543/*"{0}_{1}"*/);
    sub_1C21E38(&StringLiteral_25027/*"voice"*/);
    byte_4BDFA20 = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v59 = svtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, data, endCb, method);
  v11 = System_String__Format_63129848((System_String_o *)StringLiteral_25543/*"{0}_{1}"*/, voiceTypeName, v10, 0LL);
  this->fields.voiceDataStr = v11;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voiceDataStr, (int64_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !data )
    goto LABEL_29;
  indexArray = data->fields.indexArray;
  if ( !indexArray )
    goto LABEL_29;
  if ( !indexArray->max_length )
    goto LABEL_30;
  animationTypes = data->fields.animationTypes;
  if ( !animationTypes )
    goto LABEL_29;
  v22 = indexArray->m_Items[1];
  if ( (unsigned int)v22 >= animationTypes->max_length )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v22 + 1];
  v23 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v23 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v23,
                   (const MethodInfo_2F9F75C *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v25 = (int64_t)Item;
  v26 = sub_1C22084(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_56944880(
    (System_Collections_Generic_List_object__o *)v26,
    resultVoiceIdArray->max_length,
    (const MethodInfo_364E8F0 *)Method_System_Collections_Generic_List_object___ctor___77579808);
  if ( !v26 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v26,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v26,
                   v22,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
  v27 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    v19 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * methodPtr_low
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v29 = *(_DWORD *)(v26 + 24);
  v30 = *(_DWORD *)(v26 + 28) + 1;
  *(_DWORD *)(v26 + 24) = 0;
  *(_DWORD *)(v26 + 28) = v30;
  if ( v29 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v26 + 16), 0, v29, 0LL);
  if ( !v27 )
LABEL_29:
    sub_1C22094(Item, v19);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v27,
                   (Il2CppObject *)StringLiteral_25027/*"voice"*/,
                   (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v31 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v31
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v31 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1C22354(Item);
      SlotEffectComponent__SetReelVal(v54, v55, v56, v57, v58);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_2F9F75C *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v32 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1C21EE0(string___TypeInfo, 2LL);
  if ( !Item )
    goto LABEL_29;
  v39 = (int64_t)Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v25,
        sub_1C21DDC((PartyOrganizationUtility_o *)(Item + 32), v25, v33, v34, v35, v36, v37, v38),
        *(_DWORD *)(v39 + 24) <= 1u) )
  {
LABEL_30:
    sub_1C2209C(Item, v19);
  }
  *(_QWORD *)(v39 + 40) = v32;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v39 + 40), v32, v40, v41, v42, v43, v44, v45);
  this->fields.voiceIdArray = (struct System_String_array *)v39;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_voiceIdArray, v39, v47, v48, v49, v50, v51, v52);
  v53 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v53, endCb, 1, 0LL);
}


void __fastcall SlotEffectComponent__SetLeftReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.leftReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__SetReelVal(
        SlotEffectComponent_o *this,
        System_Int32_array *leftReel,
        System_Int32_array *centerReel,
        System_Int32_array *rightReel,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3

  SlotEffectComponent__CommonReelFunc(this, this->fields.leftReelList, leftReel, (const MethodInfo *)rightReel);
  SlotEffectComponent__CommonReelFunc(this, this->fields.centerReelList, centerReel, v8);
  SlotEffectComponent__CommonReelFunc(this, this->fields.rightReelList, rightReel, v9);
}


void __fastcall SlotEffectComponent__SetRightReelBlur(
        SlotEffectComponent_o *this,
        int32_t isOn,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.rightReelList, isOn == 1, v3);
}


void __fastcall SlotEffectComponent__StartGimmick(
        SlotEffectComponent_o *this,
        System_Action_o *animCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  Il2CppObject *animationName; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  System_String_o *v15; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v17; // x19
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BDFA23 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_25553/*"{0}{1}"*/);
    byte_4BDFA23 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.endCallback,
    (int64_t)animCallback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType, v11, v12, v13);
  v15 = System_String__Format_63129848((System_String_o *)StringLiteral_25553/*"{0}{1}"*/, animationName, v14, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v18 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_65253852((SimpleAnimation_o *)Component_object, v15, 0LL);
      return;
    }
LABEL_14:
    sub_1C22094(v18, v19);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( v18 )
  {
    if ( !v17 )
      goto LABEL_14;
    UnityEngine_Animation__Play_70614020((UnityEngine_Animation_o *)v17, v15, 0LL);
  }
}