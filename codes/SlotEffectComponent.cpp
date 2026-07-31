void SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_String_array *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_593C325 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_13266/*"Servants"*/);
    sub_21FFC50(&StringLiteral_17174/*"_blurOnOff"*/);
    sub_21FFC50(&StringLiteral_17204/*"_mapIdVal"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C325 = 1;
  }
  v9 = StringLiteral_13266/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_13266/*"Servants"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceTypeName, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_17204/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_17204/*"_mapIdVal"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.reelUvIdKey, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_17174/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_17174/*"_blurOnOff"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.reelBlurKey, v17, v18, v19, v20, v21, v22, v23);
  v24 = (int)StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.voiceDataStr, v24, v25, v26, v27, v28, v29, v30);
  v31 = (struct System_String_array *)sub_21FFD10(string___TypeInfo, 0);
  this->fields.voiceIdArray = v31;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceIdArray,
    (int32_t)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  if ( (byte_593C320 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    this = (SlotEffectComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_593C320 = 1;
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
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
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
    sub_21FFECC(this, list);
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
  if ( (byte_593C31F & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_21FFC50(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_593C31F = 1;
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
                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      if ( v7 >= LODWORD(ids->max_length) )
        sub_21FFED4(this);
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
    sub_21FFECC(this, list);
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
  int m_CancellationTokenSource; // w9
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0

  if ( (byte_593C323 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_21FFC50(&Method_SlotEffectComponent_PlaySe__);
    byte_593C323 = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0)) == 0 )
    sub_21FFECC(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( m_CancellationTokenSource < 2 )
  {
    if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_21FFC68(Method_SlotEffectComponent_PlaySe__);
    v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
    if ( LODWORD(v4->fields.m_CancellationTokenSource) )
    {
      OverwriteAssetSoundName__PlaySe(v7, (System_String_o *)v4->fields.leftReelList, 0, 0);
      return;
    }
LABEL_15:
    sub_21FFED4(v7);
  }
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_21FFC68(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
  if ( LODWORD(v4->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_15;
  OverwriteAssetSoundName__PlaySe_48366604(
    v7,
    (System_String_o *)v4->fields.leftReelList,
    (System_String_o *)v4->fields.centerReelList,
    1.0,
    0,
    0,
    0);
}


// local variable allocation has failed, the output may be wrong!
void SlotEffectComponent__PlayVoice(SlotEffectComponent_o *this, int32_t index, const MethodInfo *method)
{
  SlotEffectComponent_o *v4; // x20
  struct System_String_array *voiceIdArray; // x8
  int32_t max_length; // w9
  Il2CppClass **v7; // x8
  System_String_o *voiceDataStr; // x19
  System_String_o *v9; // x20
  SeManager_c *v10; // x0
  float DEFAULT_VOLUME; // s8

  v4 = this;
  if ( (byte_593C324 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    this = (SlotEffectComponent_o *)sub_21FFC50(&SoundManager_TypeInfo);
    byte_593C324 = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_21FFECC(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_21FFED4(this);
    v7 = &voiceIdArray->obj.klass + index;
    voiceDataStr = v4->fields.voiceDataStr;
    v9 = (System_String_o *)v7[4];
    v10 = SeManager_TypeInfo;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, *(_QWORD *)&index);
      v10 = SeManager_TypeInfo;
    }
    DEFAULT_VOLUME = v10->static_fields->DEFAULT_VOLUME;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, *(_QWORD *)&index);
    SoundManager__playVoice_48465348(voiceDataStr, v9, DEFAULT_VOLUME, 0, 0, 0);
  }
}


void SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_593C322 & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593C322 = 1;
  }
  voiceDataStr = this->fields.voiceDataStr;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  char *Item; // x0
  void *v19; // x1
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v22; // x22
  System_Collections_Generic_List_string__c *v23; // x0
  System_Collections_Generic_List_object__o *v24; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  char *v26; // x21
  __int64 v27; // x23
  __int64 v28; // x2
  System_Collections_Generic_Dictionary_object__object__o *v29; // x22
  __int64 naturalAligment; // x9
  int32_t v31; // w2
  int v32; // w8
  __int64 v33; // x9
  __int64 v34; // x23
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  char *v41; // x22
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  struct System_String_array **p_voiceIdArray; // x20
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  System_String_o *v56; // x20
  SlotEffectComponent_o *v57; // x0
  System_Int32_array *v58; // x1
  System_Int32_array *v59; // x2
  System_Int32_array *v60; // x3
  const MethodInfo *v61; // x4
  int32_t v62; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593C31E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Shuffle_object___);
    sub_21FFC50(&Method_BasicHelper_Shuffle_string___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object___ctor___91430672);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_26544/*"{0}_{1}"*/);
    sub_21FFC50(&StringLiteral_26027/*"voice"*/);
    byte_593C31E = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v62 = svtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v62);
  v11 = System_String__Format_75484576((System_String_o *)StringLiteral_26544/*"{0}_{1}"*/, voiceTypeName, v10, 0);
  this->fields.voiceDataStr = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voiceDataStr,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  v23 = System_Collections_Generic_List_string__TypeInfo;
  this->fields.animationType = animationTypes->m_Items[v22];
  v24 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v23);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v24 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v24,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v24,
                   (const MethodInfo_37E2828 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v26 = Item;
  v27 = sub_21FFEBC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_71627580(
    (System_Collections_Generic_List_object__o *)v27,
    resultVoiceIdArray->max_length,
    (const MethodInfo_444F33C *)Method_System_Collections_Generic_List_object___ctor___91430672);
  if ( !v27 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v27,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v27,
                   v22,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
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
  v31 = *(_DWORD *)(v27 + 24);
  v32 = *(_DWORD *)(v27 + 28) + 1;
  *(_DWORD *)(v27 + 24) = 0;
  *(_DWORD *)(v27 + 28) = v32;
  if ( v31 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v27 + 16), 0, v31, 0);
  if ( !v29 )
LABEL_29:
    sub_21FFECC(Item, v19);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v29,
                   (Il2CppObject *)StringLiteral_26027/*"voice"*/,
                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v19 = System_Collections_Generic_List_object__TypeInfo;
    v33 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v33
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v33 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_220024C(Item, v19, v28);
      SlotEffectComponent__SetReelVal(v57, v58, v59, v60, v61);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_37E2828 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v34 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_21FFD10(string___TypeInfo, 2);
  if ( !Item )
    goto LABEL_29;
  v41 = Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v26,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Item + 32), (int32_t)v26, v35, v36, v37, v38, v39, v40),
        (*((_DWORD *)v41 + 6) & 0xFFFFFFFE) == 0) )
  {
LABEL_30:
    sub_21FFED4(Item);
  }
  *((_QWORD *)v41 + 5) = v34;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 40), v34, v42, v43, v44, v45, v46, v47);
  this->fields.voiceIdArray = (struct System_String_array *)v41;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_voiceIdArray, (int32_t)v41, v49, v50, v51, v52, v53, v54);
  v56 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v55);
  SoundManager__loadAudioAssetStorage(v56, endCb, 1, 0);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  Il2CppObject *animationName; // x19
  Il2CppObject *v11; // x0
  System_String_o *v12; // x19
  Il2CppObject *Component_object; // x21
  __int64 v14; // x1
  Il2CppObject *v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_593C321 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_26556/*"{0}{1}"*/);
    byte_593C321 = 1;
  }
  this->fields.endCallback = animCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.endCallback,
    (int32_t)animCallback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &animationType);
  v12 = System_String__Format_75484576((System_String_o *)StringLiteral_26556/*"{0}{1}"*/, animationName, v11, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v15 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v16 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_78338864((SimpleAnimation_o *)Component_object, v12, 0);
      return;
    }
LABEL_14:
    sub_21FFECC(v16, v17);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
  if ( v16 )
  {
    if ( !v15 )
      goto LABEL_14;
    UnityEngine_Animation__Play_82865240((UnityEngine_Animation_o *)v15, v12, 0);
  }
}