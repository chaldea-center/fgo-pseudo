void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int64_t v17; // x1
  int64_t v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  int64_t v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  void *v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  struct System_String_array *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B195D2 & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_12810/*"Servants"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_16698/*"_blurOnOff"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16724/*"_mapIdVal"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B195D2 = 1;
  }
  v17 = StringLiteral_12810/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12810/*"Servants"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceTypeName, v17, v2, v3, v4, v5, v6, v7);
  v18 = StringLiteral_16724/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16724/*"_mapIdVal"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.reelUvIdKey, v18, v19, v20, v21, v22, v23, v24);
  v25 = StringLiteral_16698/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16698/*"_blurOnOff"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.reelBlurKey, v25, v26, v27, v28, v29, v30, v31);
  v32 = StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceDataStr, (int64_t)v32, v33, v34, v35, v36, v37, v38);
  v39 = (struct System_String_array *)sub_1BCA888(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v39;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceIdArray, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  float v9; // s8
  int32_t v10; // w21

  v6 = this;
  if ( (byte_4B195CD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, list, flg);
    this = (SlotEffectComponent_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_MeshRenderer__get_Item__,
                                      v7,
                                      v8);
    byte_4B195CD = 1;
  }
  if ( flg )
    v9 = 1.0;
  else
    v9 = 0.0;
  if ( !list )
    goto LABEL_13;
  if ( list->fields._size >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      this = (SlotEffectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)list,
                                        v10,
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v9, 0LL);
      if ( ++v10 >= list->fields._size )
        return;
    }
LABEL_13:
    sub_1BCAA3C(this, list);
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
  if ( (byte_4B195CC & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_List_MeshRenderer__get_Item__,
                                      list,
                                      ids);
    byte_4B195CC = 1;
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
                                        (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
        sub_1BCAA44(this, list);
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
    sub_1BCAA3C(this, list);
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

  if ( (byte_4B195D0 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1BCA7E0(&Method_SlotEffectComponent_PlaySe__, seName, method);
    byte_4B195D0 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCAA3C(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCA7F8(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
  v9 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v9 )
    goto LABEL_13;
  leftReelList = (System_String_o *)v4->fields.leftReelList;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, leftReelList, 0LL);
    return;
  }
  if ( v9 <= 1 )
LABEL_13:
    sub_1BCAA44(v7, leftReelList);
  OverwriteAssetSoundName__PlaySe_39322196(
    v7,
    leftReelList,
    (System_String_o *)v4->fields.centerReelList,
    1.0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  SlotEffectComponent_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x20
  System_String_o *v10; // x19
  SeManager_c *v11; // x0
  float DEFAULT_VOLUME; // s8

  v4 = this;
  if ( (byte_4B195D1 & 1) == 0 )
  {
    sub_1BCA7E0(&SeManager_TypeInfo, *(_QWORD *)&index, method);
    this = (SlotEffectComponent_o *)sub_1BCA7E0(&SoundManager_TypeInfo, v5, v6);
    byte_4B195D1 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1BCAA44(this, *(_QWORD *)&index);
    voiceDataStr = v4->fields.voiceDataStr;
    v10 = voiceIdArray->m_Items[index];
    v11 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, *(_QWORD *)&index);
      v11 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v11->static_fields->DEFAULT_VOLUME;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&index);
    SoundManager__playVoice_39419392(voiceDataStr, v10, DEFAULT_VOLUME, 0LL, 0LL);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *voiceDataStr; // x19

  if ( (byte_4B195CF & 1) == 0 )
  {
    sub_1BCA7E0(&SoundManager_TypeInfo, method, v2);
    byte_4B195CF = 1;
  }
  voiceDataStr = this->fields.voiceDataStr;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v44; // x0
  struct System_String_o *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  char *Item; // x0
  System_Collections_Generic_Dictionary_string__object__c *v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v58; // x22
  System_Collections_Generic_List_object__o *v59; // x23
  __int64 v60; // x2
  __int64 v61; // x3
  struct System_Object_array *resultVoiceIdArray; // x24
  int64_t v63; // x21
  __int64 v64; // x23
  System_Collections_Generic_Dictionary_object__object__o *v65; // x22
  __int64 methodPtr_low; // x9
  int32_t v67; // w2
  int v68; // w8
  __int64 v69; // x9
  int64_t v70; // x23
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x22
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_String_array **p_voiceIdArray; // x20
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  __int64 v91; // x1
  System_String_o *v92; // x20
  SlotEffectComponent_o *v93; // x0
  System_Int32_array *v94; // x1
  System_Int32_array *v95; // x2
  System_Int32_array *v96; // x3
  const MethodInfo *v97; // x4
  int32_t v98; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B195CB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Shuffle_object___, *(_QWORD *)&svtId, data);
    sub_1BCA7E0(&Method_BasicHelper_Shuffle_string___, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14);
    sub_1BCA7E0(&int_TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__AddRange__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__AddRange__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__Clear__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object___ctor___76790560, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Item__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v31, v32);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v33, v34);
    sub_1BCA7E0(&SoundManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&string___TypeInfo, v37, v38);
    sub_1BCA7E0(&StringLiteral_25353/*"{0}_{1}"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_24840/*"voice"*/, v41, v42);
    byte_4B195CB = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v98 = svtId;
  v44 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v98);
  v45 = System_String__Format_62415592((System_String_o *)StringLiteral_25353/*"{0}_{1}"*/, voiceTypeName, v44, 0LL);
  this->fields.voiceDataStr = v45;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voiceDataStr, (int64_t)v45, v46, v47, v48, v49, v50, v51);
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
  v58 = indexArray->m_Items[1];
  if ( (unsigned int)v58 >= animationTypes->max_length )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v58 + 1];
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v53,
                                                       v54,
                                                       v55);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v59 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v59,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v59,
                   (const MethodInfo_2F025E8 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v63 = (int64_t)Item;
  v64 = sub_1BCAA2C(System_Collections_Generic_List_object__TypeInfo, v53, v60, v61);
  System_Collections_Generic_List_object____ctor_56235160(
    (System_Collections_Generic_List_object__o *)v64,
    resultVoiceIdArray->max_length,
    (const MethodInfo_35A1498 *)Method_System_Collections_Generic_List_object___ctor___76790560);
  if ( !v64 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v64,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v64,
                   v58,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
  v65 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    v53 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * methodPtr_low
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v67 = *(_DWORD *)(v64 + 24);
  v68 = *(_DWORD *)(v64 + 28) + 1;
  *(_DWORD *)(v64 + 24) = 0;
  *(_DWORD *)(v64 + 28) = v68;
  if ( v67 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v64 + 16), 0, v67, 0LL);
  if ( !v65 )
LABEL_29:
    sub_1BCAA3C(Item, v53);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v65,
                   (Il2CppObject *)StringLiteral_24840/*"voice"*/,
                   (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v69 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v69
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v69 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1BCACFC(Item);
      SlotEffectComponent__SetReelVal(v93, v94, v95, v96, v97);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_2F025E8 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v70 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1BCA888(string___TypeInfo, 2LL);
  if ( !Item )
    goto LABEL_29;
  v77 = (int64_t)Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v63,
        sub_1BCA784((PartyOrganizationUtility_o *)(Item + 32), v63, v71, v72, v73, v74, v75, v76),
        *(_DWORD *)(v77 + 24) <= 1u) )
  {
LABEL_30:
    sub_1BCAA44(Item, v53);
  }
  *(_QWORD *)(v77 + 40) = v70;
  sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 40), v70, v78, v79, v80, v81, v82, v83);
  this->fields.voiceIdArray = (struct System_String_array *)v77;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1BCA784((PartyOrganizationUtility_o *)p_voiceIdArray, v77, v85, v86, v87, v88, v89, v90);
  v92 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v91);
  SoundManager__loadAudioAssetStorage(v92, endCb, 1, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *animationName; // x20
  Il2CppObject *v19; // x0
  System_String_o *v20; // x20
  Il2CppObject *Component_object; // x21
  __int64 v22; // x1
  Il2CppObject *v23; // x19
  _BOOL8 v24; // x0
  __int64 v25; // x1
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B195CE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_Animation___, animCallback, method);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v10, v11);
    sub_1BCA7E0(&int_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_25361/*"{0}{1}"*/, v16, v17);
    byte_4B195CE = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1BCA784(
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
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType);
  v20 = System_String__Format_62415592((System_String_o *)StringLiteral_25361/*"{0}{1}"*/, animationName, v19, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v23 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v24 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_64539336((SimpleAnimation_o *)Component_object, v20, 0LL);
      return;
    }
LABEL_14:
    sub_1BCAA3C(v24, v25);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
  v24 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
  if ( v24 )
  {
    if ( !v23 )
      goto LABEL_14;
    UnityEngine_Animation__Play_69899248((UnityEngine_Animation_o *)v23, v20, 0LL);
  }
}