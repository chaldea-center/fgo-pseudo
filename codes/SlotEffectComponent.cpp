void __fastcall SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_String_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B1FCB8 & 1) == 0 )
  {
    sub_1BCAFF8(&string___TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_12639/*"Servants"*/, v5);
    sub_1BCAFF8(&StringLiteral_16402/*"_blurOnOff"*/, v6);
    sub_1BCAFF8(&StringLiteral_16430/*"_mapIdVal"*/, v7);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v8);
    byte_4B1FCB8 = 1;
  }
  v9 = StringLiteral_12639/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12639/*"Servants"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceTypeName, v9, v2, v3);
  v10 = StringLiteral_16430/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16430/*"_mapIdVal"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.reelUvIdKey, v10, v11, v12);
  v13 = StringLiteral_16402/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16402/*"_blurOnOff"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.reelBlurKey, v13, v14, v15);
  v16 = (int)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceDataStr, v16, v17, v18);
  v19 = (struct System_String_array *)sub_1BCB0A0(string___TypeInfo, 0LL);
  this->fields.voiceIdArray = v19;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceIdArray, (int32_t)v19, v20, v21);
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
  if ( (byte_4B1FCB3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__, list);
    this = (SlotEffectComponent_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, v7);
    byte_4B1FCB3 = 1;
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
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
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
    sub_1BCB254(this, list);
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
  __int64 v8; // x2

  v6 = this;
  if ( (byte_4B1FCB2 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1BCAFF8(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__, list);
    byte_4B1FCB2 = 1;
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
                                        (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      if ( v7 >= ids->max_length )
        sub_1BCB25C(this, list, v8);
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
    sub_1BCB254(this, list);
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
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4B1FCB6 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1BCAFF8(&Method_SlotEffectComponent_PlaySe__, seName);
    byte_4B1FCB6 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0LL)) == 0LL )
    sub_1BCB254(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1BCB010(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  leftReelList = (System_String_o *)v4->fields.leftReelList;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, leftReelList, 0, 0LL);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1BCB25C(v7, leftReelList, v9);
  OverwriteAssetSoundName__PlaySe_40595740(
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
  if ( (byte_4B1FCB7 & 1) == 0 )
  {
    sub_1BCAFF8(&SeManager_TypeInfo, *(_QWORD *)&index);
    this = (SlotEffectComponent_o *)sub_1BCAFF8(&SoundManager_TypeInfo, v5);
    byte_4B1FCB7 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1BCB254(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1BCB25C(this, *(_QWORD *)&index, method);
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
    SoundManager__playVoice_40693920(voiceDataStr, v9, DEFAULT_VOLUME, 0LL, 0, 0LL);
  }
}


void __fastcall SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4B1FCB5 & 1) == 0 )
  {
    sub_1BCAFF8(&SoundManager_TypeInfo, method);
    byte_4B1FCB5 = 1;
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  char *Item; // x0
  System_Collections_Generic_Dictionary_string__object__c *v32; // x1
  __int64 v33; // x2
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v36; // x22
  System_Collections_Generic_List_object__o *v37; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  char *v39; // x21
  __int64 v40; // x23
  System_Collections_Generic_Dictionary_object__object__o *v41; // x22
  __int64 methodPtr_low; // x9
  int32_t v43; // w2
  int v44; // w8
  __int64 v45; // x9
  __int64 v46; // x23
  const MethodInfo *v47; // x3
  char *v48; // x22
  const MethodInfo *v49; // x3
  struct System_String_array **p_voiceIdArray; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_String_o *v53; // x20
  SlotEffectComponent_o *v54; // x0
  System_Int32_array *v55; // x1
  System_Int32_array *v56; // x2
  System_Int32_array *v57; // x3
  const MethodInfo *v58; // x4
  int32_t v59; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4B1FCB1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_Shuffle_object___, *(_QWORD *)&svtId);
    sub_1BCAFF8(&Method_BasicHelper_Shuffle_string___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v10);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_1BCAFF8(&int_TypeInfo, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__AddRange__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__AddRange__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__Clear__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object___ctor___76869688, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v18);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_object__get_Item__, v19);
    sub_1BCAFF8(&System_Collections_Generic_List_object__TypeInfo, v20);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1BCAFF8(&SoundManager_TypeInfo, v22);
    sub_1BCAFF8(&string___TypeInfo, v23);
    sub_1BCAFF8(&StringLiteral_24978/*"{0}_{1}"*/, v24);
    sub_1BCAFF8(&StringLiteral_24488/*"voice"*/, v25);
    byte_4B1FCB1 = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v59 = svtId;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v59, data, endCb, method);
  v28 = System_String__Format_62491716((System_String_o *)StringLiteral_24978/*"{0}_{1}"*/, voiceTypeName, v27, 0LL);
  this->fields.voiceDataStr = v28;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.voiceDataStr, (int32_t)v28, v29, v30);
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
  v36 = indexArray->m_Items[1];
  if ( (unsigned int)v36 >= animationTypes->max_length )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v36 + 1];
  v37 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v37,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v37 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v37,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v37,
                   (const MethodInfo_3009EAC *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v39 = Item;
  v40 = sub_1BCB244(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_57381900(
    (System_Collections_Generic_List_object__o *)v40,
    resultVoiceIdArray->max_length,
    (const MethodInfo_36B940C *)Method_System_Collections_Generic_List_object___ctor___76869688);
  if ( !v40 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v40,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v40,
                   v36,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_object__get_Item__);
  v41 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    v32 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)methodPtr_low
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * methodPtr_low
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v43 = *(_DWORD *)(v40 + 24);
  v44 = *(_DWORD *)(v40 + 28) + 1;
  *(_DWORD *)(v40 + 24) = 0;
  *(_DWORD *)(v40 + 28) = v44;
  if ( v43 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v40 + 16), 0, v43, 0LL);
  if ( !v41 )
LABEL_29:
    sub_1BCB254(Item, v32);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v41,
                   (Il2CppObject *)StringLiteral_24488/*"voice"*/,
                   (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v45 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v45
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v45 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1BCB514(Item);
      SlotEffectComponent__SetReelVal(v54, v55, v56, v57, v58);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_3009EAC *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v46 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1BCB0A0(string___TypeInfo, 2LL);
  if ( !Item )
    goto LABEL_29;
  v48 = Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v39,
        sub_1BCAF9C((CGThumbnailListItem_o *)(Item + 32), (int32_t)v39, v33, v47),
        *((_DWORD *)v48 + 6) <= 1u) )
  {
LABEL_30:
    sub_1BCB25C(Item, v32, v33);
  }
  *((_QWORD *)v48 + 5) = v46;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v48 + 40), v46, v33, v49);
  this->fields.voiceIdArray = (struct System_String_array *)v48;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_voiceIdArray, (int32_t)v48, v51, v52);
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
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
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

  if ( (byte_4B1FCB4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_Animation___, animCallback);
    sub_1BCAFF8(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_24988/*"{0}{1}"*/, v9);
    byte_4B1FCB4 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)animCallback, (int32_t)method, v3);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType, v11, v12, v13);
  v15 = System_String__Format_62491716((System_String_o *)StringLiteral_24988/*"{0}{1}"*/, animationName, v14, 0LL);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v17 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_3011274 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( v18 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_65395744((SimpleAnimation_o *)Component_object, v15, 0LL);
      return;
    }
LABEL_14:
    sub_1BCB254(v18, v19);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0LL, 0LL);
  if ( v18 )
  {
    if ( !v17 )
      goto LABEL_14;
    UnityEngine_Animation__Play_69881360((UnityEngine_Animation_o *)v17, v15, 0LL);
  }
}