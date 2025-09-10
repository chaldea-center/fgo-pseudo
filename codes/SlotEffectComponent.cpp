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

  if ( (byte_4C2ABA0 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_12748/*"Servants"*/);
    sub_1C2D490(&StringLiteral_16534/*"_blurOnOff"*/);
    sub_1C2D490(&StringLiteral_16563/*"_mapIdVal"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2ABA0 = 1;
  }
  v5 = StringLiteral_12748/*"Servants"*/;
  this->fields.voiceTypeName = (struct System_String_o *)StringLiteral_12748/*"Servants"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceTypeName, v5, v2, v3);
  v6 = StringLiteral_16563/*"_mapIdVal"*/;
  this->fields.reelUvIdKey = (struct System_String_o *)StringLiteral_16563/*"_mapIdVal"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.reelUvIdKey, v6, v7, v8);
  v9 = StringLiteral_16534/*"_blurOnOff"*/;
  this->fields.reelBlurKey = (struct System_String_o *)StringLiteral_16534/*"_blurOnOff"*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.reelBlurKey, v9, v10, v11);
  v12 = StringLiteral_1/*""*/;
  this->fields.voiceDataStr = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceDataStr, v12, v13, v14);
  v15 = (struct System_String_array *)sub_1C2D538(string___TypeInfo, 0);
  this->fields.voiceIdArray = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceIdArray, (int32_t)v15, v16, v17);
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
  if ( (byte_4C2AB9B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_MeshRenderer__get_Count__);
    this = (SlotEffectComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4C2AB9B = 1;
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
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
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
    sub_1C2D6EC(this, list);
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
  __int64 v8; // x2

  v6 = this;
  if ( (byte_4C2AB9A & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C2D490(&Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
    byte_4C2AB9A = 1;
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
                                        (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_MeshRenderer__get_Item__);
      if ( !this )
        break;
      this = (SlotEffectComponent_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      if ( v7 >= LODWORD(ids->max_length) )
        sub_1C2D6F4(this, list, v8);
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
    sub_1C2D6EC(this, list);
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
  System_String_o *leftReelList; // x1
  __int64 v9; // x2
  unsigned int v10; // w8

  if ( (byte_4C2AB9E & 1) == 0 )
  {
    this = (SlotEffectComponent_o *)sub_1C2D490(&Method_SlotEffectComponent_PlaySe__);
    byte_4C2AB9E = 1;
  }
  if ( !seName || (this = (SlotEffectComponent_o *)System_String__Split(seName, 0x3Au, 0, 0)) == 0 )
    sub_1C2D6EC(this, seName);
  v4 = this;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v6 = Method_SlotEffectComponent_PlaySe__;
  if ( (*((_BYTE *)Method_SlotEffectComponent_PlaySe__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1C2D4A8(Method_SlotEffectComponent_PlaySe__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C2D474(v6, v6[4]);
  v10 = (unsigned int)v4->fields.m_CancellationTokenSource;
  if ( !v10 )
    goto LABEL_13;
  leftReelList = (System_String_o *)v4->fields.leftReelList;
  if ( m_CancellationTokenSource < 2 )
  {
    OverwriteAssetSoundName__PlaySe(v7, leftReelList, 0, 0);
    return;
  }
  if ( v10 <= 1 )
LABEL_13:
    sub_1C2D6F4(v7, leftReelList, v9);
  OverwriteAssetSoundName__PlaySe_41198500(v7, leftReelList, (System_String_o *)v4->fields.centerReelList, 1.0, 0, 0, 0);
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
  if ( (byte_4C2AB9F & 1) == 0 )
  {
    sub_1C2D490(&SeManager_TypeInfo);
    this = (SlotEffectComponent_o *)sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2AB9F = 1;
  }
  voiceIdArray = v4->fields.voiceIdArray;
  if ( !voiceIdArray )
    sub_1C2D6EC(this, *(_QWORD *)&index);
  max_length = voiceIdArray->max_length;
  if ( max_length > index )
  {
    if ( max_length <= (unsigned int)index )
      sub_1C2D6F4(this, *(_QWORD *)&index, method);
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
    SoundManager__playVoice_41296680(voiceDataStr, v8, DEFAULT_VOLUME, 0, 0, 0);
  }
}


void SlotEffectComponent__ReleaseGimmickData(SlotEffectComponent_o *this, const MethodInfo *method)
{
  System_String_o *voiceDataStr; // x19

  if ( (byte_4C2AB9D & 1) == 0 )
  {
    sub_1C2D490(&SoundManager_TypeInfo);
    byte_4C2AB9D = 1;
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
  const MethodInfo *v13; // x3
  char *Item; // x0
  System_Collections_Generic_Dictionary_string__object__c *v15; // x1
  __int64 v16; // x2
  struct System_Int32_array *indexArray; // x9
  struct System_Int32_array *animationTypes; // x8
  __int64 v19; // x22
  System_Collections_Generic_List_object__o *v20; // x23
  struct System_Object_array *resultVoiceIdArray; // x24
  char *v22; // x21
  __int64 v23; // x23
  System_Collections_Generic_Dictionary_object__object__o *v24; // x22
  __int64 naturalAligment; // x9
  int32_t v26; // w2
  int v27; // w8
  __int64 v28; // x9
  __int64 v29; // x23
  const MethodInfo *v30; // x3
  char *v31; // x22
  const MethodInfo *v32; // x3
  struct System_String_array **p_voiceIdArray; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_String_o *v36; // x20
  SlotEffectComponent_o *v37; // x0
  System_Int32_array *v38; // x1
  System_Int32_array *v39; // x2
  System_Int32_array *v40; // x3
  const MethodInfo *v41; // x4
  int32_t v42; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2AB99 & 1) == 0 )
  {
    sub_1C2D490(&Method_BasicHelper_Shuffle_object___);
    sub_1C2D490(&Method_BasicHelper_Shuffle_string___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__AddRange__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__Clear__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object___ctor___77948144);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_List_object__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&SoundManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_25174/*"{0}_{1}"*/);
    sub_1C2D490(&StringLiteral_24682/*"voice"*/);
    byte_4C2AB99 = 1;
  }
  voiceTypeName = (Il2CppObject *)this->fields.voiceTypeName;
  v42 = svtId;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v42, data, endCb, method);
  v11 = System_String__Format_63499156((System_String_o *)StringLiteral_25174/*"{0}_{1}"*/, voiceTypeName, v10, 0);
  this->fields.voiceDataStr = v11;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voiceDataStr, (int32_t)v11, v12, v13);
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
  v19 = indexArray->m_Items[0];
  if ( (unsigned int)v19 >= LODWORD(animationTypes->max_length) )
    goto LABEL_30;
  this->fields.animationType = animationTypes->m_Items[v19];
  v20 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v20 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    v20,
    (System_Collections_Generic_IEnumerable_T__o *)data->fields.startVoiceIdArray,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_string__AddRange__);
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)v20,
                   (const MethodInfo_30BDC80 *)Method_BasicHelper_Shuffle_string___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
  resultVoiceIdArray = data->fields.resultVoiceIdArray;
  if ( !resultVoiceIdArray )
    goto LABEL_29;
  v22 = Item;
  v23 = sub_1C2D6DC(System_Collections_Generic_List_object__TypeInfo);
  System_Collections_Generic_List_object____ctor_58233792(
    (System_Collections_Generic_List_object__o *)v23,
    resultVoiceIdArray->max_length,
    (const MethodInfo_37893C0 *)Method_System_Collections_Generic_List_object___ctor___77948144);
  if ( !v23 )
    goto LABEL_29;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)v23,
    (System_Collections_Generic_IEnumerable_T__o *)resultVoiceIdArray,
    (const MethodInfo_3789D90 *)Method_System_Collections_Generic_List_object__AddRange__);
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)v23,
                   v19,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_object__get_Item__);
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)Item;
  if ( Item )
  {
    v15 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)naturalAligment
      || *(System_Collections_Generic_Dictionary_string__object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL)
                                                                     + 8 * naturalAligment
                                                                     - 8) != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
      goto LABEL_31;
    }
  }
  v26 = *(_DWORD *)(v23 + 24);
  v27 = *(_DWORD *)(v23 + 28) + 1;
  *(_DWORD *)(v23 + 24) = 0;
  *(_DWORD *)(v23 + 28) = v27;
  if ( v26 >= 1 )
    System_Array__Clear(*(System_Array_o **)(v23 + 16), 0, v26, 0);
  if ( !v24 )
LABEL_29:
    sub_1C2D6EC(Item, v15);
  Item = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                   v24,
                   (Il2CppObject *)StringLiteral_24682/*"voice"*/,
                   (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( Item )
  {
    v28 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( *(unsigned __int8 *)(*(_QWORD *)Item + 304LL) < (unsigned int)v28
      || *(System_Collections_Generic_List_object__c **)(*(_QWORD *)(*(_QWORD *)Item + 200LL) + 8 * v28 - 8) != System_Collections_Generic_List_object__TypeInfo )
    {
LABEL_31:
      sub_1C2D9AC(Item);
      SlotEffectComponent__SetReelVal(v37, v38, v39, v40, v41);
      return;
    }
  }
  Item = (char *)BasicHelper__Shuffle_object_(
                   (System_Collections_Generic_List_T__o *)Item,
                   (const MethodInfo_30BDC80 *)Method_BasicHelper_Shuffle_object___);
  if ( !Item )
    goto LABEL_29;
  Item = (char *)System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)Item,
                   0,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_object__get_Item__);
  if ( !Item )
    goto LABEL_29;
  v29 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)Item + 360LL))(
          Item,
          *(_QWORD *)(*(_QWORD *)Item + 368LL));
  Item = (char *)sub_1C2D538(string___TypeInfo, 2);
  if ( !Item )
    goto LABEL_29;
  v31 = Item;
  if ( !*((_DWORD *)Item + 6)
    || (*((_QWORD *)Item + 4) = v22,
        sub_1C2D434((CGThumbnailListItem_o *)(Item + 32), (int32_t)v22, v16, v30),
        *((_DWORD *)v31 + 6) <= 1u) )
  {
LABEL_30:
    sub_1C2D6F4(Item, v15, v16);
  }
  *((_QWORD *)v31 + 5) = v29;
  sub_1C2D434((CGThumbnailListItem_o *)(v31 + 40), v29, v16, v32);
  this->fields.voiceIdArray = (struct System_String_array *)v31;
  p_voiceIdArray = &this->fields.voiceIdArray;
  sub_1C2D434((CGThumbnailListItem_o *)p_voiceIdArray, (int32_t)v31, v34, v35);
  v36 = (System_String_o *)*(p_voiceIdArray - 1);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__loadAudioAssetStorage(v36, endCb, 1, 0);
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
  Il2CppObject *v10; // x0
  System_String_o *v11; // x20
  Il2CppObject *Component_object; // x21
  Il2CppObject *v13; // x19
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int32_t animationType; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4C2AB9C & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_Animation___);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&StringLiteral_25185/*"{0}{1}"*/);
    byte_4C2AB9C = 1;
  }
  this->fields.endCallback = animCallback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.endCallback, (int32_t)animCallback, (int32_t)method, v3);
  animationName = (Il2CppObject *)this->fields.animationName;
  animationType = this->fields.animationType;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &animationType, v7, v8, v9);
  v11 = System_String__Format_63499156((System_String_o *)StringLiteral_25185/*"{0}{1}"*/, animationName, v10, 0);
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)this,
                       (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_SimpleAnimation___);
  v13 = UnityEngine_Component__GetComponent_object_(
          (UnityEngine_Component_o *)this,
          (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_Animation___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( v14 )
  {
    if ( Component_object )
    {
      SimpleAnimation__Play_66404364((SimpleAnimation_o *)Component_object, v11, 0);
      return;
    }
LABEL_14:
    sub_1C2D6EC(v14, v15);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
  if ( v14 )
  {
    if ( !v13 )
      goto LABEL_14;
    UnityEngine_Animation__Play_70908988((UnityEngine_Animation_o *)v13, v11, 0);
  }
}