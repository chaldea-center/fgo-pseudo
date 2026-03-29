void SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_String_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D344F3 & 1) == 0 )
  {
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_12851/*"Servants"*/);
    sub_1C93AD4(&StringLiteral_16641/*"_blurOnOff"*/);
    sub_1C93AD4(&StringLiteral_16670/*"_mapIdVal"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D344F3 = 1;
  }
  v9 = StringLiteral_12851/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12851/*"Servants"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceTypeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_16670/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16670/*"_mapIdVal"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.reelUvIdKey, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_16641/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16641/*"_blurOnOff"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.reelBlurKey, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceDataStr, v24, v25, v26, v27, v28, v29, v30);
  v31 = (struct System_String_array *)sub_1C93B7C(string___TypeInfo, 0);
  this->fields.voiceIdArray = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceIdArray, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SlotEffectComponent__CommonBlurFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        bool flg,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x20
  float v7; // s8
  int32_t v8; // w21

  v6 = this;
  if ( (byte_4D344EE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    this = (SlotEffectComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4D344EE = 1;
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
                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, v6->fields.reelBlurKey, v7, 0);
      if ( ++v8 >= list->fields._size )
        return;
    }
LABEL_13:
    sub_1C93D2C(this, list);
  }
}


void SlotEffectComponent__CommonReelFunc(
        SlotEffectComponent_o *this,
        System_Collections_Generic_List_MeshRenderer__o *list,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  SlotEffectComponent_o *v6; // x21
  unsigned __int64 v7; // x22

  v6 = this;
  if ( (byte_4D344ED & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4D344ED = 1;
  }
  if ( !ids )
    goto LABEL_12;
  if ( SLODWORD(ids->max_length) >= 1 )
  {
    v7 = 0;
    while ( list )
    {
      this = (SlotEffectComponent_o *)System_Collections_Generic_List_object___get_Item(
                                        (System_Collections_Generic_List_object__o *)list,
                                        v7,
                                        (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      if ( v7 >= LODWORD(ids->max_length) )
        sub_1C93D34(this);
      if ( !this )
        break;
      UnityEngine_Material__SetFloat(
        (UnityEngine_Material_o *)this,
        v6->fields.reelUvIdKey,
        (float)ids->m_Items[v7++],
        0);
      if ( (__int64)v7 >= SLODWORD(ids->max_length) )
        return;
    }
LABEL_12:
    sub_1C93D2C(this, list);
  }
}


void SlotEffectComponent__EndGimmick(SlotEffectComponent_o *this, const MethodInfo *method)
{
  struct System_Action_o *endCallback; // x8

  endCallback = this->fields.endCallback;
  if ( endCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))endCallback->fields.invoke_impl)(
      endCallback->fields.method_code,
      endCallback->fields.method);
}


void SlotEffectComponent__PlaySe(SlotEffectComponent_o *this, System_String_o *seName, const MethodInfo *method)
{
  SlotEffectComponent_o *v4; // x19
  int m_CancellationTokenSource; // w20
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  unsigned int v8; // w8
  System_String_o *leftReelList; // x1

  if ( (byte_4D344F1 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C93AD4(&Method_SlotEffectComponent_PlaySe__);
    byte_4D344F1 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0)) == 0 )
    sub_1C93D2C(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C93AEC(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v6, v6[4]);
  v8 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v8 )
    goto LABEL_13;
  leftReelList = (System_String_o *)v4->fields.leftReelList;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, leftReelList, 0, 0);
    return;
  }
  if ( v8 <= 1 )
LABEL_13:
    sub_1C93D34(v7);
  OverwriteAssetSoundName__PlaySe_42150528(v7, leftReelList, (System_String_o *)v4->fields.centerReelList, 1.0, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  SlotEffectComponent_o *v4; // x20
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  System_String_o *voiceDataStr; // x20
  System_String_o *v8; // x19
  SeManager_c *v9; // x0
  float DEFAULT_VOLUME; // s8

  v4 = this;
  if ( (byte_4D344F2 & 1) == 0 )
  {
    sub_1C93AD4(&SeManager_TypeInfo);
    this = (SlotEffectComponent_o *)sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D344F2 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1C93D2C(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C93D34(this);
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
    SoundManager__playVoice_42249560(voiceDataStr, v8, DEFAULT_VOLUME, 0, 0, 0);
  }
}


void SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4D344F0 & 1) == 0 )
  {
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D344F0 = 1;
  }
  voiceDataStr = this->fields.voiceDataStr;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__releaseAudioAssetStorage(voiceDataStr, 0);
}


void SlotEffectComponent__SetCenterReelBlur(SlotEffectComponent_o *this, int32_t isOn, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.centerReelList, isOn == 1, v3);
}


void SlotEffectComponent__SetGimmick(
        SlotEffectComponent_o *this,
        int32_t svtId,
        BattleActionData_GimmickData_o *data,
        System_Action_o *endCb,
        const MethodInfo *method)
{
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v10; // x0
  struct System_String_o *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  char *Item; // x0
  System_Collections_Generic_Dictionary_string__object__c *v19; // x1
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_object__o *v23; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  char *v25; // x21
  __int64 v26; // x23
  System_Collections_Generic_Dictionary_object__object__o *v27; // x22
  __int64 naturalAligment; // x9
  int32_t v29; // w2
  int v30; // w8
  __int64 v31; // x9
  __int64 v32; // x23
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  char *v39; // x22
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct System_String_array **p_voiceIdArray; // x20
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  System_String_o *v53; // x20
  SlotEffectComponent_o *v54; // x0
  System_Int32_array *v55; // x1
  System_Int32_array *v56; // x2
  System_Int32_array *v57; // x3
  const MethodInfo *v58; // x4
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D344EC & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Shuffle_object___);
    sub_1C93AD4(&Method_BasicHelper_Shuffle_string___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object___ctor___79011744);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_25522/*"{0}_{1}"*/);
    sub_1C93AD4(&StringLiteral_25027/*"voice"*/);
    byte_4D344EC = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v59 = svtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59);
  v11 = System_String__Format_64467032((System_String_o *)StringLiteral_25522/*"{0}_{1}"*/, voiceTypeName, v10, 0);
  this->fields.voiceDataStr = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.voiceDataStr, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !data )
    goto LABEL_29;
  indexArray = data->fields.indexArray;
  if ( !indexArray )
    goto LABEL_29;
  if ( !LODWORD(indexArray->max_length) )
    goto LABEL_30;
  animationTypes = data->fields.animationTypes;
  if ( !animationTypes )
    goto LABEL_29;
  v22 = indexArray->m_Items[0];
  if ( (unsigned int)v22 >= LODWORD(animationTypes->max_length) )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v22];
  v23 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v23 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v23,
                   (const MethodInfo_3193CD8 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v25 = Item;
  v26 = sub_1C93D20(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216344(
    (System_Collections_Generic_List_object__o *)v26,
    resultVoiceIdArray->max_length,
    (const MethodInfo_38791D8 *)Method_System_Collections_Generic_List_object___ctor___79011744);
  if ( !v26 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v26,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v26,
                   v22,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  v27 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    v19 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * naturalAligment
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
    System_Array__Clear(*(System_Array_o **)(v26 + 16), 0, v29, 0);
  if ( !v27 )
LABEL_29:
    sub_1C93D2C(Item, v19);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v27,
                   (Il2CppObject *)StringLiteral_25027/*"voice"*/,
                   (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v31 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v31
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v31 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1C940C8(Item);
      SlotEffectComponent__SetReelVal(v54, v55, v56, v57, v58);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_3193CD8 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v32 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1C93B7C(string___TypeInfo, 2);
  if ( !Item )
    goto LABEL_29;
  v39 = Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v25,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(Item + 32), (int32_t)v25, v33, v34, v35, v36, v37, v38),
        *((_DWORD *)v39 + 6) <= 1u) )
  {
LABEL_30:
    sub_1C93D34(Item);
  }
  *((_QWORD *)v39 + 5) = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v39 + 40), v32, v40, v41, v42, v43, v44, v45);
  this->fields.voiceIdArray = (struct System_String_array *)v39;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_voiceIdArray, (int32_t)v39, v47, v48, v49, v50, v51, v52);
  v53 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v53, endCb, 1, 0);
}


void SlotEffectComponent__SetLeftReelBlur(SlotEffectComponent_o *this, int32_t isOn, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.leftReelList, isOn == 1, v3);
}


void SlotEffectComponent__SetReelVal(
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


void SlotEffectComponent__SetRightReelBlur(SlotEffectComponent_o *this, int32_t isOn, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SlotEffectComponent__CommonBlurFunc(this, this->fields.rightReelList, isOn == 1, v3);
}


void SlotEffectComponent__StartGimmick(
        SlotEffectComponent_o *this,
        System_Action_o *animCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  Il2CppObject *animationName; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v14; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D344EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_25534/*"{0}{1}"*/);
    byte_4D344EF = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.endCallback,
    (int32_t)animCallback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType);
  v12 = System_String__Format_64467032((System_String_o *)StringLiteral_25534/*"{0}{1}"*/, animationName, v11, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v14 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v15 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_67370764((SimpleAnimation_o *)Component_object, v12, 0);
      return;
    }
LABEL_14:
    sub_1C93D2C(v15, v16);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0);
  if ( v15 )
  {
    if ( !v14 )
      goto LABEL_14;
    UnityEngine_Animation__Play_71862428((UnityEngine_Animation_o *)v14, v12, 0);
  }
}