void SlotEffectComponent___ctor(SlotEffectComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct System_String_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C3B2BF & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_12752/*"Servants"*/);
    sub_1C32C20(&StringLiteral_16536/*"_blurOnOff"*/);
    sub_1C32C20(&StringLiteral_16565/*"_mapIdVal"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3B2BF = 1;
  }
  v5 = StringLiteral_12752/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12752/*"Servants"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceTypeName, v5, v2, v3);
  v6 = StringLiteral_16565/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16565/*"_mapIdVal"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reelUvIdKey, v6, v7, v8);
  v9 = StringLiteral_16536/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16536/*"_blurOnOff"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.reelBlurKey, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceDataStr, v12, v13, v14);
  v15 = (struct System_String_array *)sub_1C32CC8(string___TypeInfo, 0);
  this->fields.voiceIdArray = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceIdArray, (int32_t)v15, v16, v17);
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
  if ( (byte_4C3B2BA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    this = (SlotEffectComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4C3B2BA = 1;
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
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
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
    sub_1C32E7C(this);
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
  if ( (byte_4C3B2B9 & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4C3B2B9 = 1;
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
                                        (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      if ( v7 >= LODWORD(ids->max_length) )
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C3B2BD & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C32C20(&Method_SlotEffectComponent_PlaySe__);
    byte_4C3B2BD = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0)) == 0 )
    sub_1C32E7C(this);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C32C38(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C32C04(v6, v6[4]);
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
    sub_1C32E84(v7);
  OverwriteAssetSoundName__PlaySe_41320752(v7, leftReelList, (System_String_o *)v4->fields.centerReelList, 1.0, 0, 0, 0);
}


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
  if ( (byte_4C3B2BE & 1) == 0 )
  {
    sub_1C32C20(&SeManager_TypeInfo);
    this = (SlotEffectComponent_o *)sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3B2BE = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1C32E7C(this);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C32E84(this);
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
    SoundManager__playVoice_41418932(voiceDataStr, v8, DEFAULT_VOLUME, 0, 0, 0);
  }
}


void SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4C3B2BC & 1) == 0 )
  {
    sub_1C32C20(&SoundManager_TypeInfo);
    byte_4C3B2BC = 1;
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
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *voiceTypeName; // x23
  Il2CppObject *v13; // x0
  struct System_String_o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  char *Item; // x0
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v20; // x22
  System_Collections_Generic_List_object__o *v21; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  char *v23; // x21
  __int64 v24; // x23
  System_Collections_Generic_Dictionary_object__object__o *v25; // x22
  __int64 naturalAligment; // x9
  int32_t v27; // w2
  int v28; // w8
  __int64 v29; // x9
  __int64 v30; // x23
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  char *v33; // x22
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_String_array **p_voiceIdArray; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_String_o *v39; // x20
  SlotEffectComponent_o *v40; // x0
  System_Int32_array *v41; // x1
  System_Int32_array *v42; // x2
  System_Int32_array *v43; // x3
  const MethodInfo *v44; // x4
  int32_t v45; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3B2B8 & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Shuffle_object___);
    sub_1C32C20(&Method_BasicHelper_Shuffle_string___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__AddRange__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object___ctor___78013448);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C32C20(&SoundManager_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_25192/*"{0}_{1}"*/);
    sub_1C32C20(&StringLiteral_24700/*"voice"*/);
    byte_4C3B2B8 = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v45 = svtId;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v45, data, endCb, method, v5, v6, v7);
  v14 = System_String__Format_63559836((System_String_o *)StringLiteral_25192/*"{0}_{1}"*/, voiceTypeName, v13, 0);
  this->fields.voiceDataStr = v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voiceDataStr, (int32_t)v14, v15, v16);
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
  v20 = indexArray->m_Items[0];
  if ( (unsigned int)v20 >= LODWORD(animationTypes->max_length) )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v20];
  v21 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v21 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v21,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v21,
                   (const MethodInfo_30CC720 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v23 = Item;
  v24 = sub_1C32E6C(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_58294264(
    (System_Collections_Generic_List_object__o *)v24,
    resultVoiceIdArray->max_length,
    (const MethodInfo_3797FF8 *)Method_System_Collections_Generic_List_object___ctor___78013448);
  if ( !v24 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v24,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_37989C8 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v24,
                   v20,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
  v25 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * naturalAligment
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v27 = *(_DWORD *)(v24 + 24);
  v28 = *(_DWORD *)(v24 + 28) + 1;
  *(_DWORD *)(v24 + 24) = 0;
  *(_DWORD *)(v24 + 28) = v28;
  if ( v27 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v24 + 16), 0, v27, 0);
  if ( !v25 )
LABEL_29:
    sub_1C32E7C(Item);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v25,
                   (Il2CppObject *)StringLiteral_24700/*"voice"*/,
                   (const MethodInfo_3458D48 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v29 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v29
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v29 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1C3313C(Item);
      SlotEffectComponent__SetReelVal(v40, v41, v42, v43, v44);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_30CC720 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v30 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1C32CC8(string___TypeInfo, 2);
  if ( !Item )
    goto LABEL_29;
  v33 = Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v23,
        sub_1C32BC4((CGThumbnailListItem_o *)(Item + 32), (int32_t)v23, v31, v32),
        *((_DWORD *)v33 + 6) <= 1u) )
  {
LABEL_30:
    sub_1C32E84(Item);
  }
  *((_QWORD *)v33 + 5) = v30;
  sub_1C32BC4((CGThumbnailListItem_o *)(v33 + 40), v30, v34, v35);
  this->fields.voiceIdArray = (struct System_String_array *)v33;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1C32BC4((CGThumbnailListItem_o *)p_voiceIdArray, (int32_t)v33, v37, v38);
  v39 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v39, endCb, 1, 0);
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
  const MethodInfo *v3; // x3
  Il2CppObject *animationName; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7
  Il2CppObject *v13; // x0
  System_String_o *v14; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v16; // x19
  _BOOL8 v17; // x0
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C3B2BB & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C32C20(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_25203/*"{0}{1}"*/);
    byte_4C3B2BB = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)animCallback, (int32_t)method, v3);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType, v7, v8, v9, v10, v11, v12);
  v14 = System_String__Format_63559836((System_String_o *)StringLiteral_25203/*"{0}{1}"*/, animationName, v13, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v16 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30D3BC0 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v17 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_66464300((SimpleAnimation_o *)Component_object, v14, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v17);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
  if ( v17 )
  {
    if ( !v16 )
      goto LABEL_14;
    UnityEngine_Animation__Play_70968924((UnityEngine_Animation_o *)v16, v14, 0);
  }
}