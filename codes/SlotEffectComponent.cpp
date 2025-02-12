void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct System_String_array *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB7B72 & 1) == 0 )
  {
    sub_1C13D24(&string___TypeInfo, method);
    sub_1C13D24(&StringLiteral_12877/*"ServantOperation"*/, v9);
    sub_1C13D24(&StringLiteral_16783/*"__unbinding-callback"*/, v10);
    sub_1C13D24(&StringLiteral_16809/*"_fallback"*/, v11);
    sub_1C13D24(&StringLiteral_1/*""*/, v12);
    byte_4BB7B72 = 1;
  }
  v13 = StringLiteral_12877/*"ServantOperation"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12877/*"ServantOperation"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.voiceTypeName, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_16809/*"_fallback"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16809/*"_fallback"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.reelUvIdKey, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_16783/*"__unbinding-callback"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16783/*"__unbinding-callback"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.reelBlurKey, v21, v22, v23, v24, v25, v26, v27);
  v28 = StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.voiceDataStr, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v35 = (struct System_String_array *)sub_1C13DCC(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v35;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.voiceIdArray, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  __int64 v7; // x1
  float v8; // s8
  int32_t v9; // w21

  v6 = this;
  if ( (byte_4BB7B6D & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, list);
    this = (SlotEffectComponent_o *)sub_1C13D24(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, v7);
    byte_4BB7B6D = 1;
  }
  if ( flg )
    v8 = 1.0;
  else
    v8 = 0.0;
  if ( !list )
    goto LABEL_13;
  if ( list->fields._size >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      this = (SlotEffectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)list,
                                        v9,
                                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v8, 0LL);
      if ( ++v9 >= list->fields._size )
        return;
    }
LABEL_13:
    sub_1C13F80(this, list);
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
  if ( (byte_4BB7B6C & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C13D24(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, list);
    byte_4BB7B6C = 1;
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
                                        (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
        sub_1C13F88(this, list);
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
    sub_1C13F80(this, list);
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

  if ( (byte_4BB7B70 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C13D24(&Method_SlotEffectComponent_PlaySe__, seName);
    byte_4BB7B70 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0LL)) == 0LL )
    sub_1C13F80(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C13D3C(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v6, v6[4]);
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
    sub_1C13F88(v7, leftReelList);
  OverwriteAssetSoundName__PlaySe_39759208(
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
  __int64 v5; // x1
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x20
  System_String_o *v9; // x19
  SeManager_c *v10; // x0
  float DEFAULT_VOLUME; // s8

  v4 = this;
  if ( (byte_4BB7B71 & 1) == 0 )
  {
    sub_1C13D24(&SeManager_TypeInfo, *(_QWORD *)&index);
    this = (SlotEffectComponent_o *)sub_1C13D24(&SoundManager_TypeInfo, v5);
    byte_4BB7B71 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1C13F80(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C13F88(this, *(_QWORD *)&index);
    voiceDataStr = v4->fields.voiceDataStr;
    v9 = voiceIdArray->m_Items[index];
    v10 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
      v10 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v10->static_fields->DEFAULT_VOLUME;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playVoice_39857168(voiceDataStr, v9, DEFAULT_VOLUME, 0LL, 0, 0LL);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4BB7B6F & 1) == 0 )
  {
    sub_1C13D24(&SoundManager_TypeInfo, method);
    byte_4BB7B6F = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
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
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v27; // x0
  struct System_String_o *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  char *Item; // x0
  System_Collections_Generic_Dictionary_string__object__c *v36; // x1
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v39; // x22
  System_Collections_Generic_List_object__o *v40; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  int64_t v42; // x21
  __int64 v43; // x23
  System_Collections_Generic_Dictionary_object__object__o *v44; // x22
  __int64 methodPtr_low; // x9
  int32_t v46; // w2
  int v47; // w8
  __int64 v48; // x9
  int64_t v49; // x23
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x22
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  struct System_String_array **p_voiceIdArray; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  System_String_o *v70; // x20
  SlotEffectComponent_o *v71; // x0
  System_Int32_array *v72; // x1
  System_Int32_array *v73; // x2
  System_Int32_array *v74; // x3
  const MethodInfo *v75; // x4
  int32_t v76; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB7B6B & 1) == 0 )
  {
    sub_1C13D24(&Method_BasicHelper_Shuffle_object___, *(_QWORD *)&svtId);
    sub_1C13D24(&Method_BasicHelper_Shuffle_string___, v9);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_1C13D24(&int_TypeInfo, v12);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__AddRange__, v13);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__AddRange__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__Clear__, v15);
    sub_1C13D24(&Method_System_Collections_Generic_List_object___ctor___77420456, v16);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_List_object__get_Item__, v19);
    sub_1C13D24(&System_Collections_Generic_List_object__TypeInfo, v20);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1C13D24(&SoundManager_TypeInfo, v22);
    sub_1C13D24(&string___TypeInfo, v23);
    sub_1C13D24(&StringLiteral_25499/*"{0}:{1}\n"*/, v24);
    sub_1C13D24(&StringLiteral_24984/*"virtualization-method"*/, v25);
    byte_4BB7B6B = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v76 = svtId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, data, endCb, method);
  v28 = System_String__Format_62982316((System_String_o *)StringLiteral_25499/*"{0}:{1}\n"*/, voiceTypeName, v27, 0LL);
  this->fields.voiceDataStr = v28;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.voiceDataStr, (int64_t)v28, v29, v30, v31, v32, v33, v34);
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
  v39 = indexArray->m_Items[1];
  if ( (unsigned int)v39 >= animationTypes->max_length )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v39 + 1];
  v40 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v40,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v40 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v40,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v40,
                   (const MethodInfo_2F7EDC4 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v42 = (int64_t)Item;
  v43 = sub_1C13F70(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_56805896(
    (System_Collections_Generic_List_object__o *)v43,
    resultVoiceIdArray->max_length,
    (const MethodInfo_362CA08 *)Method_System_Collections_Generic_List_object___ctor___77420456);
  if ( !v43 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v43,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_362D3D8 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v43,
                   v39,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
  v44 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    v36 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * methodPtr_low
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v46 = *(_DWORD *)(v43 + 24);
  v47 = *(_DWORD *)(v43 + 28) + 1;
  *(_DWORD *)(v43 + 24) = 0;
  *(_DWORD *)(v43 + 28) = v47;
  if ( v46 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v43 + 16), 0, v46, 0LL);
  if ( !v44 )
LABEL_29:
    sub_1C13F80(Item, v36);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v44,
                   (Il2CppObject *)StringLiteral_24984/*"virtualization-method"*/,
                   (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v48 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v48
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v48 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1C14240(Item);
      SlotEffectComponent__SetReelVal(v71, v72, v73, v74, v75);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_2F7EDC4 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v49 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1C13DCC(string___TypeInfo, 2LL);
  if ( !Item )
    goto LABEL_29;
  v56 = (int64_t)Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v42,
        sub_1C13CC8((PartyOrganizationUtility_o *)(Item + 32), v42, v50, v51, v52, v53, v54, v55),
        *(_DWORD *)(v56 + 24) <= 1u) )
  {
LABEL_30:
    sub_1C13F88(Item, v36);
  }
  *(_QWORD *)(v56 + 40) = v49;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v56 + 40), v49, v57, v58, v59, v60, v61, v62);
  this->fields.voiceIdArray = (struct System_String_array *)v56;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1C13CC8((PartyOrganizationUtility_o *)p_voiceIdArray, v56, v64, v65, v66, v67, v68, v69);
  v70 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v70, endCb, 1, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *animationName; // x20
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  Il2CppObject *v18; // x0
  System_String_o *v19; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v21; // x19
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4BB7B6E & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_Animation___, animCallback);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    sub_1C13D24(&StringLiteral_25509/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/, v13);
    byte_4BB7B6E = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1C13CC8(
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
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType, v15, v16, v17);
  v19 = System_String__Format_62982316((System_String_o *)StringLiteral_25509/*"{0}:{1}:{2}:{3}:{4}:{5}:{6}:{7}"*/, animationName, v18, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v21 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v22 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_65106228((SimpleAnimation_o *)Component_object, v19, 0LL);
      return;
    }
LABEL_14:
    sub_1C13F80(v22, v23);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v22 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
  if ( v22 )
  {
    if ( !v21 )
      goto LABEL_14;
    UnityEngine_Animation__Play_70466396((UnityEngine_Animation_o *)v21, v19, 0LL);
  }
}